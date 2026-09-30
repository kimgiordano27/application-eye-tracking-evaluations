/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastAnchorDelegate$$BeginInvoke
ENTRY_POINT: 07716020
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate__BeginInvoke
               (long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_DAT_09f30b50;
  if ((DAT_0a523128 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f30b50);
    DAT_0a523128 = 1;
  }
  FUN_07715fc4(param_1);
  lVar4 = *(long *)(param_1 + 0x60);
  uVar2 = thunk_FUN_0952ff6c(param_1,0);
  uVar2 = FUN_078a7764(uVar2,*(undefined8 *)puVar1,0);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x18);
    *puVar5 = uVar2;
    thunk_FUN_044bb4b4(puVar5,uVar2);
    plVar3 = *(long **)(param_1 + 0x60);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x077160cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x8e8))
                (plVar3,param_2,param_3,param_4 & 1,*(undefined8 *)(*plVar3 + 0x8f0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


