/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.SaveSceneToJsonDelegate$$.ctor
ENTRY_POINT: 05af8c60
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_MRUKNativeFuncs_SaveSceneToJsonDelegate___ctor(void)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long *unaff_x22;
  
  FUN_0367c9fc();
  lVar2 = thunk_FUN_0367fd24();
  if (lVar2 == 0) {
    FUN_05e390e4(2,0);
    uVar1 = 0;
LAB_05af8d6c:
    return uVar1 & 1;
  }
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc(lVar2);
  }
  if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar2 + 0x40)) {
    pvVar3 = (void *)thunk_FUN_0367ff68();
    memcpy(&stack0x00000060,pvVar3,0x60);
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc(lVar2);
    }
    if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar2 + 0x40)) {
      pvVar3 = (void *)thunk_FUN_0367ff68();
      memcpy(&stack0x00000000,pvVar3,0x60);
      pcVar4 = *(code **)(*unaff_x19 + 0x1b8);
      memcpy(&stack0x00000120,&stack0x00000060,0x60);
      memcpy(&stack0x000000c0,&stack0x00000000,0x60);
      uVar1 = (*pcVar4)();
      goto LAB_05af8d6c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03643084();
}


