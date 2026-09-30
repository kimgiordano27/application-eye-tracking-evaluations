/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateDefault
ENTRY_POINT: 01700fa8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__CreateDefault(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint in_w8;
  uint in_w9;
  int unaff_w19;
  long unaff_x20;
  
  if ((in_w8 & in_w9) == 0) {
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar1 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar2 = thunk_FUN_00d48444(StringLiteral_10436);
    FUN_016f2f28(uVar1,uVar2);
    uVar2 = thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlaq_n_u32__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar1,uVar2);
  }
  if (unaff_x20 == 0) {
    uVar1 = 0;
  }
  else {
    if (DAT_037780a3 == '\0') {
      thunk_FUN_00d48444(PTR_DAT_033ee010);
      DAT_037780a3 = '\x01';
    }
    uVar1 = FUN_015fd038();
    uVar1 = FUN_017811ec(uVar1,*(undefined4 *)(unaff_x20 + 0x10),unaff_w19,0x1400,0);
    if (((unaff_w19 == 10) || (0xff < (int)uVar1)) && ((int)uVar1 != (int)(char)uVar1)) {
      FUN_00acb0a4(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
                    /* WARNING: Subroutine does not return */
      FUN_016fc978();
    }
  }
  return uVar1;
}


