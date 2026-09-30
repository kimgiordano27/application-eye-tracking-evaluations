/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnSceneAnchorRemoved$$EndInvoke
ENTRY_POINT: 077141a8
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


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorRemoved__EndInvoke
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar3;
  long unaff_x22;
  long *unaff_x23;
  uint uVar4;
  
  while (lVar2 = FUN_078bb7b4(param_1,param_2,0), lVar2 != 0) {
    FUN_078c333c(lVar2,0);
    do {
      lVar2 = *(long *)(unaff_x19 + 0x20);
      unaff_x22 = unaff_x22 + 1;
      if (lVar2 == 0) goto LAB_077141c8;
      uVar4 = (int)unaff_x22 - 4;
      if ((int)*(uint *)(lVar2 + 0x18) <= (int)uVar4) {
        (**(code **)(*unaff_x20 + 0x168))();
        return;
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_077141f8;
      lVar2 = *(long *)(lVar2 + unaff_x22 * 8);
      if (lVar2 == 0) goto LAB_077141c8;
      uVar3 = *(undefined8 *)(lVar2 + 0x10);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar1 = FUN_09531730(uVar3,0,0);
    } while ((uVar1 & 1) == 0);
    param_1 = FUN_078bb7b4();
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) {
LAB_077141f8:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar2 = *(long *)(lVar2 + unaff_x22 * 8);
    if (((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x10), lVar2 == 0)) ||
       (param_2 = thunk_FUN_0952ff6c(lVar2,0), param_1 == 0)) break;
  }
LAB_077141c8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


