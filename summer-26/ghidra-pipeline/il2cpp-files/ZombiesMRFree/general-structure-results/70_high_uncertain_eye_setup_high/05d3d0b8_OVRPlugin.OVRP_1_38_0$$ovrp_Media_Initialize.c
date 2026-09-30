/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Initialize
ENTRY_POINT: 05d3d0b8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_Initialize(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x21;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0xde0));
  *(undefined1 *)(unaff_x21 + 0x667) = 1;
  fVar5 = unaff_s8 - **(float **)(*(long *)PTR_DAT_06f6dde0 + 0xb8);
  fVar6 = unaff_s9 - (*(float **)(*(long *)PTR_DAT_06f6dde0 + 0xb8))[1];
  if (fVar5 * fVar5 + fVar6 * fVar6 < DAT_01369900) {
    return;
  }
  lVar2 = *(long *)(unaff_x20 + 0x50);
  if (lVar2 != 0) {
    *(float *)(lVar2 + 0x13c) = unaff_s8;
    *(float *)(lVar2 + 0x140) = unaff_s9;
    if ((unaff_x19 != 0) && (*(long *)(unaff_x20 + 0x50) != 0)) {
      *(undefined8 *)(*(long *)(unaff_x20 + 0x50) + 0x104) = *(undefined8 *)(unaff_x19 + 0x104);
      puVar1 = PTR_DAT_06f792e0;
      uVar3 = *(undefined8 *)(unaff_x19 + 0x50);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
      if (*(int *)(*(long *)PTR_DAT_06f792e0 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      if (DAT_0738fa8c == '\0') {
        FUN_02fe925c(PTR_DAT_06f792e0);
        DAT_0738fa8c = '\x01';
      }
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar2 = *(long *)puVar1;
      }
      FUN_03c6404c(uVar3,uVar4,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x58),
                   *(undefined8 *)PTR_DAT_06fb8f78);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


