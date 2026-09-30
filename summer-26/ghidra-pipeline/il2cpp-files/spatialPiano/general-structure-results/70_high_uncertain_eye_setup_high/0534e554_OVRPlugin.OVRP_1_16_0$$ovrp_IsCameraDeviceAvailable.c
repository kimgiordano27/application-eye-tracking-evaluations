/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_IsCameraDeviceAvailable
ENTRY_POINT: 0534e554
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_IsCameraDeviceAvailable
               (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  float fVar5;
  float unaff_s8;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_02f421d0();
      goto LAB_0534e5a8;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)(*piVar2 + 1) * 0x10 + 0x138);
LAB_0534e5a8:
  fVar5 = (float)(*(code *)*puVar3)();
  if (DAT_06bb42c2 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    DAT_06bb42c2 = '\x01';
  }
  if (unaff_x19 != 0) {
    fVar5 = fVar5 / unaff_s8;
    lVar4 = *(long *)(*(long *)PTR_DAT_067c8f78 + 0xb8);
    FUN_06100490(fVar5 * *(float *)(lVar4 + 0xc),fVar5 * *(float *)(lVar4 + 0x10),
                 fVar5 * *(float *)(lVar4 + 0x14));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


