/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnSceneAnchorRemoved$$Invoke
ENTRY_POINT: 077140e8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorRemoved__Invoke(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  uint uVar6;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long in_stack_00000030;
  
  while (uVar1 = FUN_0768c8a4(&stack0x00000020,*unaff_x27), lVar4 = in_stack_00000030,
        (uVar1 & 1) != 0) {
    lVar2 = FUN_078bb7b4();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar3 = thunk_FUN_0952ff6c(lVar4,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(uVar3,uVar3);
    }
    lVar4 = FUN_078bb7b4(lVar2,uVar3,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_078c333c(lVar4,0);
  }
  FUN_0768c8a0(&stack0x00000020,*unaff_x26);
  FUN_078bb7b4();
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if (lVar4 == 0) {
LAB_077141cc:
    (**(code **)(*unaff_x20 + 0x168))();
    return;
  }
  lVar2 = 4;
  do {
    uVar6 = (int)lVar2 - 4;
    if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar6) goto LAB_077141cc;
    if (*(uint *)(lVar4 + 0x18) <= uVar6) {
LAB_077141f8:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar4 = *(long *)(lVar4 + lVar2 * 8);
    if (lVar4 == 0) break;
    uVar3 = *(undefined8 *)(lVar4 + 0x10);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar1 = FUN_09531730(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      lVar4 = FUN_078bb7b4();
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_077141f8;
      lVar5 = *(long *)(lVar5 + lVar2 * 8);
      if ((((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x10), lVar5 == 0)) ||
          (uVar3 = thunk_FUN_0952ff6c(lVar5,0), lVar4 == 0)) ||
         (lVar4 = FUN_078bb7b4(lVar4,uVar3,0), lVar4 == 0)) break;
      FUN_078c333c(lVar4,0);
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    lVar2 = lVar2 + 1;
  } while (lVar4 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


