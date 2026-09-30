/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_TypeNameAssemblyFormat
ENTRY_POINT: 0760fb20
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_TypeNameAssemblyFormat(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x20;
  
  lVar1 = thunk_FUN_040b4b34(*(undefined8 *)(param_1 + 0x68));
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar2 == 0)) {
LAB_0760fba8:
    uVar3 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar3,0);
  }
  if ((int)unaff_x20[3] != 0) {
    unaff_x20[4] = lVar1;
    thunk_FUN_040ec700(unaff_x20 + 4,lVar1);
    if ((unaff_x19 != 0) && (lVar1 = thunk_FUN_040b4e00(), lVar1 == 0)) goto LAB_0760fba8;
    if ((*(uint *)(unaff_x20 + 3) & 0xfffffffe) != 0) {
      unaff_x20[5] = unaff_x19;
      thunk_FUN_040ec700(unaff_x20 + 5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


