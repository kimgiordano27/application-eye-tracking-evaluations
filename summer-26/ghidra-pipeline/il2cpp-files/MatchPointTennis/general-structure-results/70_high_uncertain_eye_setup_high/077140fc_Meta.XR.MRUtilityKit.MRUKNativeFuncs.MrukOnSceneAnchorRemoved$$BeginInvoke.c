/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnSceneAnchorRemoved$$BeginInvoke
ENTRY_POINT: 077140fc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorRemoved__BeginInvoke(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x23;
  uint uVar6;
  
  FUN_078bb7b4();
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if (lVar2 == 0) {
LAB_077141cc:
    (**(code **)(*unaff_x20 + 0x168))();
    return;
  }
  lVar5 = 4;
  do {
    uVar6 = (int)lVar5 - 4;
    if ((int)*(uint *)(lVar2 + 0x18) <= (int)uVar6) goto LAB_077141cc;
    if (*(uint *)(lVar2 + 0x18) <= uVar6) {
LAB_077141f8:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar2 = *(long *)(lVar2 + lVar5 * 8);
    if (lVar2 == 0) break;
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar1 = FUN_09531730(uVar4,0,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = FUN_078bb7b4();
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar6) goto LAB_077141f8;
      lVar3 = *(long *)(lVar3 + lVar5 * 8);
      if ((((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x10), lVar3 == 0)) ||
          (uVar4 = thunk_FUN_0952ff6c(lVar3,0), lVar2 == 0)) ||
         (lVar2 = FUN_078bb7b4(lVar2,uVar4,0), lVar2 == 0)) break;
      FUN_078c333c(lVar2,0);
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    lVar5 = lVar5 + 1;
  } while (lVar2 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


