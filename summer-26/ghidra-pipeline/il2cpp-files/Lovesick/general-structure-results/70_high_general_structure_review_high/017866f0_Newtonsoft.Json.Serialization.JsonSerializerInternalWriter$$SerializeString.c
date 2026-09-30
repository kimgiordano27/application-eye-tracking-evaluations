/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeString
ENTRY_POINT: 017866f0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeString(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long unaff_x29;
  long in_stack_00000000;
  long in_stack_00000008;
  undefined8 *in_stack_00000028;
  long lStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  
  lStack0000000000000048 = 0;
  uStack0000000000000050 = 0;
  lVar8 = *(long *)OVRPassthroughLayer_MonoToRgbaStyleHandler_TypeInfo;
  lVar5 = *(long *)(lVar8 + 0x38);
  if (lVar5 == 0) {
    FUN_00d59478(lVar8);
    lVar5 = *(long *)(lVar8 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar3 = *(undefined8 **)(*(long *)(lVar8 + 0x38) + 8);
  in_stack_00000028 = &stack0x00000058;
  (*(code *)puVar3[2])(*puVar3,puVar3,0,&stack0x00000028,&stack0x00000068);
  puVar2 = 
  Method_RCG_Lovesick_Powers_Wavelength_WavelengthMover_<MoveCoroutine>d__24_System_Collections_IEnumerator_Reset__
  ;
  lStack0000000000000048 = in_stack_00000068;
  uStack0000000000000050 = in_stack_00000070;
  if (*(int *)(*(long *)
                Method_RCG_Lovesick_Powers_Wavelength_WavelengthMover_<MoveCoroutine>d__24_System_Collections_IEnumerator_Reset__
              + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar8 = *(long *)StringLiteral_1052;
  lVar5 = *(long *)(lVar8 + 0x20);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar5 = *(long *)(lVar8 + 0x20);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
    lVar5 = FUN_00d5941c();
  }
  puVar1 = Oculus_Platform_Models_LaunchReportFlowResult_TypeInfo;
  iVar7 = **(int **)(lVar5 + 0xb8);
  iVar4 = iVar7 * 4;
  do {
    iVar4 = iVar4 + -4;
    iVar7 = iVar7 + -1;
    if (iVar7 < 0) goto LAB_01786858;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01225ba8(&stack0x00000048,iVar7,&stack0x00000068,*(undefined8 *)puVar1);
  } while (in_stack_00000068 == 0);
  if (in_stack_00000068 < 1) {
LAB_01786858:
    iVar7 = 3;
  }
  else {
    iVar7 = 3;
    lVar5 = in_stack_00000068;
    do {
      lVar5 = lVar5 * 0x10000;
      iVar7 = iVar7 + -1;
    } while (0 < lVar5);
  }
  uVar6 = unaff_x29 - in_stack_00000000;
  if ((long)uVar6 < 0) {
    uVar6 = uVar6 + 1;
  }
  if (*(long *)(in_stack_00000008 + 0x28) != in_stack_00000078) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar7 + (int)(uVar6 >> 1) + iVar4);
  }
  return;
}


