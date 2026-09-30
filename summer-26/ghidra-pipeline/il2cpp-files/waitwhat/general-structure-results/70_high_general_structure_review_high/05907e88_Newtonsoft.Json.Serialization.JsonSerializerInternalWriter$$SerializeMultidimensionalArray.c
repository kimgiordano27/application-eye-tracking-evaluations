/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 05907e88
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  int unaff_w19;
  int unaff_w20;
  undefined4 unaff_w21;
  long lVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  thunk_FUN_031e5338();
  uVar5 = FUN_058e16a0(unaff_w21,0);
  puVar1 = PTR_DAT_071051d8;
  puVar2 = PTR_DAT_071051d0;
                    /* catch() { ... } // from try @ 05907ddc with catch @ 05907e98 */
                    /* try { // try from 05907e9c to 05a07ea3 has its CatchHandler @ 05907eac */
                    /* try { // try from 05907ea4 to 05a07eaf has its CatchHandler @ 05907bcc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05907e9c with catch @ 05907eac
                        */
  uVar6 = FUN_03b1d1b0();
  uVar7 = FUN_03b1d1b0();
  uVar6 = FUN_0597a8e8(uVar6,0);
  uVar7 = FUN_0597a8e8(uVar7,0);
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  FUN_04e06450(&stack0x00000040,uVar6,unaff_w20,uVar7,unaff_w19,uVar5 & 1,*(undefined8 *)puVar1);
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar8 = *(long *)puVar2;
  }
  uVar4 = in_stack_00000058;
  uVar3 = in_stack_00000050;
  uVar7 = in_stack_00000048;
  uVar6 = in_stack_00000040;
  puVar1 = PTR_DAT_071051c0;
  puVar9 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar9[1];
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar9 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar11 = *puVar9;
    lVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)PTR_DAT_071051b8);
                    /* try { // try from 05907f80 to 05a08157 has its CatchHandler @ 05907f80
                       catch() { ... } // from try @ 05907f80 with catch @ 05907f80
                       catch() { ... } // from try @ 059081e4 with catch @ 05907f80
                       catch() { ... } // from try @ 05908348 with catch @ 05907f80
                       catch() { ... } // from try @ 05908424 with catch @ 05907f80
                       catch() { ... } // from try @ 05908438 with catch @ 05907f80
                       catch() { ... } // from try @ 05908448 with catch @ 05907f80
                       catch() { ... } // from try @ 059084a0 with catch @ 05907f80
                       catch() { ... } // from try @ 059084e0 with catch @ 05907f80 */
    FUN_04aa27b0(lVar10,uVar11,*(undefined8 *)PTR_DAT_071051c8,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar10;
  }
  in_stack_00000040 = uVar6;
  in_stack_00000048 = uVar7;
  in_stack_00000050 = uVar3;
  in_stack_00000058 = uVar4;
  FUN_03c41a24(unaff_w19 + unaff_w20 + ((uVar5 ^ 0xffffffff) & 1),&stack0x00000040,lVar10,
               *(undefined8 *)puVar1);
  return;
}


