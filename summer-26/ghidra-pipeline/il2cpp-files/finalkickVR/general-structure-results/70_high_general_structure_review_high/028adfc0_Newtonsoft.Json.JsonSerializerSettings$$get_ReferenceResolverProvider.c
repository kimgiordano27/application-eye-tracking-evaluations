/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ReferenceResolverProvider
ENTRY_POINT: 028adfc0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_JsonSerializerSettings__get_ReferenceResolverProvider(void)

{
  long lVar1;
  undefined4 in_w3;
  undefined8 *puVar2;
  long unaff_x29;
  undefined8 uVar3;
  uint uStack000000000000000c;
  long in_stack_00000040;
  
  Decimal__ctor_mC089D0AF6A28E017DE6F2F0966D8EBEBFE2DAAF7
            (unaff_x29 + -0x18,in_w3,in_w3,in_w3,*(byte *)(unaff_x29 + -0xe4) & 1,
             *(undefined4 *)(unaff_x29 + -0xec));
  puVar2 = *(undefined8 **)(in_stack_00000040 + 0x138);
  uVar3 = *(undefined8 *)(in_stack_00000040 + 0x200);
  puVar2[1] = *(undefined8 *)(in_stack_00000040 + 0x208);
  *puVar2 = uVar3;
  *(undefined1 *)(unaff_x29 + -0x39) = 1;
  uStack000000000000000c = (uint)*(byte *)(unaff_x29 + -0x39);
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar1 == 0) {
    return uStack000000000000000c & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


