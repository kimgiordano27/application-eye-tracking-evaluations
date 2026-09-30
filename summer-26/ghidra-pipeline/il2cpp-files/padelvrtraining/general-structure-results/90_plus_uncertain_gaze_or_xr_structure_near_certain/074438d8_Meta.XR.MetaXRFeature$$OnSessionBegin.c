/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionBegin
ENTRY_POINT: 074438d8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionBegin
               (undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               long param_5)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x21;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  uStack0000000000000018 = param_1;
  uStack000000000000001c = param_3;
  if (*(int *)(param_5 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar1 = FUN_08a508b0();
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar2 = FUN_08a4d98c(*(long *)(unaff_x19 + 0x40),0), lVar2 == 0)) goto LAB_074439e8;
    FUN_08a5e270(unaff_s15 * unaff_s9 + unaff_s13,unaff_s8 * unaff_s9 + unaff_s14,
                 unaff_s10 * unaff_s9 + fStack0000000000000014,uStack0000000000000018,param_2,
                 uStack000000000000001c,param_4,lVar2,0);
  }
  uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar1 = FUN_08a508b0(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x48) != 0) &&
     (lVar2 = FUN_08a4d98c(*(long *)(unaff_x19 + 0x48),0), lVar2 != 0)) {
    FUN_08a5e270(fStack0000000000000010 - unaff_s15 * unaff_s9,
                 fStack000000000000000c - unaff_s8 * unaff_s9,
                 fStack0000000000000008 - unaff_s10 * unaff_s9,uStack0000000000000018,param_2,
                 uStack000000000000001c,param_4,lVar2,0);
    return;
  }
LAB_074439e8:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


