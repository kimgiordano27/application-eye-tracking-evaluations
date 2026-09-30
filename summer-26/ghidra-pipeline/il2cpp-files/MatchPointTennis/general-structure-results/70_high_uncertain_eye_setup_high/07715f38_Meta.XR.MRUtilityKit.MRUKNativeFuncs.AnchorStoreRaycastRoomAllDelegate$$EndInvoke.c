/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastRoomAllDelegate$$EndInvoke
ENTRY_POINT: 07715f38
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


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomAllDelegate__EndInvoke
               (ulong param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x23;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x24;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f30b50);
    *(undefined1 *)(unaff_x23 + 0x127) = 1;
  }
  FUN_07715fc4(param_2);
  lVar2 = *(long *)(param_2 + 0x60);
  uVar1 = thunk_FUN_0952ff6c(param_2,0);
  uVar1 = FUN_078a7764(uVar1,*unaff_x24,0);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar2 + 0x18);
    *puVar3 = uVar1;
    thunk_FUN_044bb4b4(puVar3,uVar1);
    if (*(long **)(param_2 + 0x60) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x07715fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_2 + 0x60) + 0x8d8))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


