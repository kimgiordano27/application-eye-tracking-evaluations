/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.RaycastRoomDelegate$$EndInvoke
ENTRY_POINT: 05af97fc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_MRUKNativeFuncs_RaycastRoomDelegate__EndInvoke
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  FUN_0367c9fc(param_2);
  lVar2 = thunk_FUN_0367fd24();
  if (lVar2 != 0) {
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      FUN_0367c9fc(lVar2);
    }
    lVar2 = thunk_FUN_0367fd24();
    if (lVar2 != 0) {
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc(lVar2);
      }
      if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar2 + 0x40)) {
LAB_05af9944:
                    /* WARNING: Subroutine does not return */
        FUN_03643084();
      }
      thunk_FUN_0367ff68();
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc(lVar2);
      }
      if (*(long *)(*unaff_x20 + 0x40) != *(long *)(lVar2 + 0x40)) goto LAB_05af9944;
      thunk_FUN_0367ff68();
      uVar1 = (**(code **)(*unaff_x19 + 0x1b8))();
      goto LAB_05af992c;
    }
  }
  FUN_05e390e4(2,0);
  uVar1 = 0;
LAB_05af992c:
  return uVar1 & 1;
}


