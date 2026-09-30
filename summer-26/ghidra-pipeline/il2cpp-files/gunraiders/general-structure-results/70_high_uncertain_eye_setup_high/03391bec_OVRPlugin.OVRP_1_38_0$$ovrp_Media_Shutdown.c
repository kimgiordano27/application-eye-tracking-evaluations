/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Shutdown
ENTRY_POINT: 03391bec
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_Shutdown(void)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  int in_w8;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  
  if (in_w8 == 0) {
    thunk_FUN_01c1d1e8();
  }
  if (DAT_0452f64d == '\0') {
    FUN_01c5d288(PTR_DAT_042350c0);
    DAT_0452f64d = '\x01';
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_02c72754();
  FUN_0336c7fc();
  plVar2 = *(long **)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
    return;
  }
  lVar3 = *(long *)Method_UnityEngine_Rendering_DebugUI_Field<Color>_set_setter__;
  bVar1 = *(byte *)(lVar3 + 0x130);
  if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
     (*(long *)(*(long *)(*plVar2 + 200) + ((ulong)bVar1 - 1) * 8) == lVar3)) {
    *(long **)(unaff_x19 + 0x38) = plVar2;
    if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + ((ulong)bVar1 - 1) * 8) == lVar3)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d748();
}


