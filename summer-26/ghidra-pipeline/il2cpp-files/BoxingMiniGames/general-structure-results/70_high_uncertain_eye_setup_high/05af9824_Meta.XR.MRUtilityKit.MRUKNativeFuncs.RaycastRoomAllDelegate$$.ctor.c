/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.RaycastRoomAllDelegate$$.ctor
ENTRY_POINT: 05af9824
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_MRUKNativeFuncs_RaycastRoomAllDelegate___ctor
               (ushort *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  if ((*param_1 & 1) == 0) {
    FUN_0367c9fc(param_3);
  }
  lVar2 = thunk_FUN_0367fd24();
  if (lVar2 == 0) {
    FUN_05e390e4(2,0);
    uVar1 = 0;
LAB_05af992c:
    return uVar1 & 1;
  }
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc(lVar2);
  }
  if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar2 + 0x40)) {
    thunk_FUN_0367ff68();
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc(lVar2);
    }
    if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar2 + 0x40)) {
      thunk_FUN_0367ff68();
      uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
      goto LAB_05af992c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03643084();
}


