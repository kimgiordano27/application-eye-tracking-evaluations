/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldSerialize
ENTRY_POINT: 05ded6b0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldSerialize(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_031f20f4(PTR_DAT_0759d328);
  FUN_031f20f4(PTR_DAT_075e8180);
                    /* try { // try from 05ded6cc to 05eed7d3 has its CatchHandler @ 05ded6cc
                       catch() { ... } // from try @ 05ded6cc with catch @ 05ded6cc
                       catch() { ... } // from try @ 05dedc54 with catch @ 05ded6cc
                       catch() { ... } // from try @ 05dedce0 with catch @ 05ded6cc
                       catch() { ... } // from try @ 05dedd18 with catch @ 05ded6cc
                       catch() { ... } // from try @ 05dede38 with catch @ 05ded6cc
                       catch() { ... } // from try @ 05dedefc with catch @ 05ded6cc
                       catch() { ... } // from try @ 05dedf58 with catch @ 05ded6cc */
  FUN_031f20f4(PTR_DAT_0759bc20);
  FUN_031f20f4(PTR_DAT_0759c348);
  FUN_031f20f4(PTR_DAT_075ec018);
  FUN_031f20f4(PTR_DAT_075ec020);
  FUN_031f20f4(PTR_DAT_075ec028);
  FUN_031f20f4(PTR_DAT_075ec030);
  FUN_031f20f4(PTR_DAT_075b4aa8);
  FUN_031f20f4(PTR_DAT_075ec038);
  FUN_031f20f4(PTR_DAT_075a5d50);
  FUN_031f20f4(PTR_DAT_0759e568);
  *(undefined1 *)(unaff_x20 + 0x496) = 1;
  puVar4 = PTR_DAT_075ec018;
  puVar3 = PTR_DAT_075e8180;
  puVar2 = PTR_DAT_0759d328;
  puVar1 = PTR_DAT_0759c538;
  lVar5 = *unaff_x19;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar5 = *unaff_x19;
  }
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
  uVar6 = FUN_031f21dc(*(undefined8 *)puVar1,0x13);
  FUN_05d2c79c(uVar6,*(undefined8 *)puVar4,0);
  puVar7 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
  *puVar7 = uVar6;
  thunk_FUN_0329bf60(puVar7,uVar6);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
                    /* try { // try from 05ded7d4 to 05eed7ef has its CatchHandler @ 05dedd40 */
  plVar8 = (long *)FUN_05d860e8(0);
  if (plVar8 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
    puVar7 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
    *puVar7 = uVar6;
    thunk_FUN_0329bf60(puVar7,uVar6);
                    /* try { // try from 05ded80c to 05eed80f has its CatchHandler @ 05dedd34 */
    lVar5 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
    if (lVar5 != 0) {
      uVar6 = FUN_05d55928(lVar5,0);
      puVar7 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
      *puVar7 = uVar6;
      thunk_FUN_0329bf60(puVar7,uVar6);
      puVar1 = PTR_DAT_0759bc20;
      lVar5 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      if (lVar5 != 0) {
        uVar6 = FUN_05d55820(lVar5,0);
                    /* try { // try from 05ded860 to 05eed887 has its CatchHandler @ 05dede44 */
        puVar7 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
        *puVar7 = uVar6;
        thunk_FUN_0329bf60(puVar7,uVar6);
        lVar5 = FUN_031f21dc(*(undefined8 *)puVar1,7);
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x18) != 0) {
            *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_075a5d50;
            thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x20));
            if (1 < *(uint *)(lVar5 + 0x18)) {
                    /* try { // try from 05ded8bc to 05eed913 has its CatchHandler @ 05dede48 */
              *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_075b4aa8;
              thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x28));
              if (2 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_0759e568;
                thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x30));
                if (3 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)PTR_DAT_075ec030;
                  thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x38));
                  if (4 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_075ec020;
                    thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x40));
                    if (5 < *(uint *)(lVar5 + 0x18)) {
                      *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)PTR_DAT_075ec028;
                      thunk_FUN_0329bf60((undefined8 *)(lVar5 + 0x48));
                      if (6 < *(uint *)(lVar5 + 0x18)) {
                        *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)PTR_DAT_075ec038;
                        thunk_FUN_0329bf60();
                        plVar8 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
                        *plVar8 = lVar5;
                        thunk_FUN_0329bf60(plVar8,lVar5);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


