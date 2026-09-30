/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_SerializationBinder
ENTRY_POINT: 05065ee0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined4
Newtonsoft_Json_JsonSerializer__get_SerializationBinder
          (ulong param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067dc088);
    *(undefined1 *)(unaff_x23 + 0x7a6) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_050658b4(param_3,param_4,unaff_w21);
  lVar2 = **(long **)(*unaff_x22 + 0xb8);
  if (lVar2 != 0) {
    if (param_3 - 0x526U < *(uint *)(lVar2 + 0x18)) {
      uVar1 = 0x1d;
      if ((*(uint *)(lVar2 + (long)(int)(param_3 - 0x526U) * 0x10 + 0x20) >>
           (ulong)(param_4 - 1U & 0x1f) & 1) != 0) {
        uVar1 = 0x1e;
      }
      return uVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


