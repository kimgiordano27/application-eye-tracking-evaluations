/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNative$$dlclose
ENTRY_POINT: 04a8d294
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


ulong Meta_XR_MRUtilityKit_MRUKNative__dlclose(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long in_x9;
  long in_x10;
  int *piVar3;
  long unaff_x19;
  int unaff_w21;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  piVar3 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar3 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*piVar3 * 0x10 + 0x138);
      goto LAB_04a8d2cc;
    }
    in_x9 = in_x9 + -1;
    piVar3 = piVar3 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_02b7654c();
LAB_04a8d2cc:
  (*(code *)*puVar1)();
  if (unaff_x19 == 0) {
    if ((unaff_w21 == 0xd) || (unaff_w21 == 0)) {
      uVar2 = unaff_x25 & 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return uVar2 | unaff_x24 << 0x20;
    }
  }
  else if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


