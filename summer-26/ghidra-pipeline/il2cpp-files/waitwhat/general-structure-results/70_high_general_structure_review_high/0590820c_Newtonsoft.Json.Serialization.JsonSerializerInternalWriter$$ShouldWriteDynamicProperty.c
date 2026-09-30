/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteDynamicProperty
ENTRY_POINT: 0590820c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteDynamicProperty(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  int unaff_w19;
  uint unaff_w20;
  int unaff_w21;
  undefined2 *unaff_x23;
  long lVar14;
  long unaff_x24;
  undefined8 uVar15;
  long *unaff_x27;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  uVar1 = *(undefined2 *)(unaff_x24 + ((long)(((ulong)unaff_w20 << 0x20) + -0x100000000) >> 0x1f));
  if (*(int *)(*unaff_x27 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar8 = FUN_058e16a0(uVar1,0);
  if ((uVar8 & 1) == 0) {
    if (unaff_w19 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05908300 with catch @ 05908460 */
      FUN_03188ce0();
    }
    uVar1 = *unaff_x23;
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar7 = FUN_058e16a0(uVar1,0);
  }
  else {
    uVar7 = 1;
  }
  puVar2 = PTR_DAT_071051d0;
                    /* try { // try from 059082bc to 05a082d3 has its CatchHandler @ 0590846c */
  uVar9 = FUN_03b1d1b0();
  uVar10 = FUN_03b1d1b0();
  uVar11 = FUN_03b1d1b0();
  uVar9 = FUN_0597a8e8(uVar9,0);
  uVar10 = FUN_0597a8e8(uVar10,0);
  uVar11 = FUN_0597a8e8(uVar11,0);
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  FUN_04e1e41c(&stack0x00000080,uVar9,unaff_w21,uVar10,unaff_w20,uVar11,unaff_w19,1);
  lVar12 = *(long *)puVar2;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar12 = *(long *)puVar2;
  }
  uVar6 = in_stack_000000a8;
  uVar5 = in_stack_000000a0;
  uVar4 = in_stack_00000098;
  uVar11 = in_stack_00000090;
  uVar10 = in_stack_00000088;
  uVar9 = in_stack_00000080;
  puVar3 = PTR_DAT_071051e8;
  puVar13 = *(undefined8 **)(lVar12 + 0xb8);
  lVar14 = puVar13[2];
  if (lVar14 == 0) {
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar13 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar15 = *puVar13;
    lVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_071051e0);
    FUN_04aa2870(lVar14,uVar15,*(undefined8 *)PTR_DAT_071051f0,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar14;
  }
  in_stack_00000080 = uVar9;
  in_stack_00000088 = uVar10;
  in_stack_00000090 = uVar11;
  in_stack_00000098 = uVar4;
  in_stack_000000a0 = uVar5;
  in_stack_000000a8 = uVar6;
  FUN_03c41b5c(unaff_w20 + unaff_w21 + unaff_w19 + ((uVar7 ^ 0xffffffff) & 1),&stack0x00000080,
               lVar14,*(undefined8 *)puVar3);
  return;
}


