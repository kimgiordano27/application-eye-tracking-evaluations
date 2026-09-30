/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert.<>c__DisplayClass6_0$$<DeserializeTokenAsync>b__0
ENTRY_POINT: 013f270c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Meta_WitAi_Json_JsonConvert_<>c__DisplayClass6_0__<DeserializeTokenAsync>b__0(void)

{
  undefined8 uVar1;
  uint in_w8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar2;
  uint unaff_w23;
  
  while( true ) {
    unaff_w23 = unaff_w23 + 1;
    if ((int)in_w8 <= (int)unaff_w23) break;
    if (in_w8 <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar2 = *(long **)(unaff_x21 + (long)(int)unaff_w23 * 8 + 0x20);
    uVar1 = (**(code **)(*unaff_x20 + 0x178))();
    if (plVar2 == (long *)0x0) goto Meta_WitAi_Json_JsonConvert_<>c__<DeserializeEnum>b__17_0;
    (**(code **)(*plVar2 + 0x188))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 400));
    in_w8 = *(uint *)(unaff_x21 + 0x18);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    *(undefined1 *)(*(long *)(unaff_x19 + 0x20) + 0x11) = 1;
    return 0;
  }
Meta_WitAi_Json_JsonConvert_<>c__<DeserializeEnum>b__17_0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


