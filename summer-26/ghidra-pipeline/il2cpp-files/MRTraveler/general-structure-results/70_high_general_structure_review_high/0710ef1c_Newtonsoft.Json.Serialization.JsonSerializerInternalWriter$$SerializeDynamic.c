/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDynamic
ENTRY_POINT: 0710ef1c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDynamic
               (undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  *(undefined8 *)(unaff_x19 + 0x38) = *param_1;
                    /* try { // try from 0710ef28 to 0720ef33 has its CatchHandler @ 0710f014 */
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x38));
                    /* try { // try from 0710ef34 to 0720f02b has its CatchHandler @ 0710ee00 */
  if (4 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)PTR_DAT_08ea57c8;
    thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x40));
    if (5 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)PTR_DAT_08ea58a0;
      thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x48));
      if (6 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)PTR_DAT_08ea5870;
        thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x50));
        if (7 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)PTR_DAT_08ea5890;
          thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x58));
          if (8 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)PTR_DAT_08ea5880;
            thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x60));
            if (9 < *(uint *)(unaff_x19 + 0x18)) {
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 0710ef28 with catch @ 0710f014
                        */
              *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)PTR_DAT_08ea57d0;
              thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x68));
              if (10 < *(uint *)(unaff_x19 + 0x18)) {
                    /* try { // try from 0710f02c to 0720f043 has its CatchHandler @ 0710f078 */
                *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)PTR_DAT_08ea5838;
                    /* try { // try from 0710f044 to 0720f063 has its CatchHandler @ 0710ee00 */
                thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x70));
                if (0xb < *(uint *)(unaff_x19 + 0x18)) {
                    /* try { // try from 0710f064 to 0720f073 has its CatchHandler @ 0710f078 */
                  *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)PTR_DAT_08ea5820;
                  thunk_FUN_03d233cc();
                    /* catch() { ... } // from try @ 0710f02c with catch @ 0710f078
                       catch() { ... } // from try @ 0710f064 with catch @ 0710f078 */
                  *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18) = unaff_x19;
                    /* try { // try from 0710f07c to 0720f07f has its CatchHandler @ 0710f0f8 */
                  thunk_FUN_03d233cc();
                    /* try { // try from 0710f080 to 0720f09f has its CatchHandler @ 0710ee00 */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 0710eee4 with catch @ 0710f084
                        */
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 0710eed0 with catch @ 0710f088
                        */
                  lVar10 = FUN_03c8f97c(*unaff_x21,5);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03c8fb30();
                  }
                  if (*(int *)(lVar10 + 0x18) != 0) {
                    /* try { // try from 0710f0a0 to 0720f0b7 has its CatchHandler @ 0710f0e8 */
                    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_08ea5900;
                    thunk_FUN_03d233cc((undefined8 *)(lVar10 + 0x20));
                    /* try { // try from 0710f0b8 to 0720f0d7 has its CatchHandler @ 0710ee00 */
                    if (1 < *(uint *)(lVar10 + 0x18)) {
                      *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_08ea57e0;
                    /* try { // try from 0710f0d8 to 0720f0e7 has its CatchHandler @ 0710f0e8 */
                      thunk_FUN_03d233cc((undefined8 *)(lVar10 + 0x28));
                    /* catch() { ... } // from try @ 0710f0a0 with catch @ 0710f0e8
                       catch() { ... } // from try @ 0710f0d8 with catch @ 0710f0e8 */
                      if (2 < *(uint *)(lVar10 + 0x18)) {
                    /* try { // try from 0710f0ec to 0720f0ef has its CatchHandler @ 0710f0f8 */
                    /* try { // try from 0710f0f0 to 0720f0fb has its CatchHandler @ 0710ee00 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0710f07c with catch @ 0710f0f8
                       catch(type#2 @ 00000000) { ... } // from try @ 0710f0ec with catch @ 0710f0f8
                        */
                        *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_08ea5878;
                        thunk_FUN_03d233cc((undefined8 *)(lVar10 + 0x30));
                        if (3 < *(uint *)(lVar10 + 0x18)) {
                          *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)PTR_DAT_08ea5830;
                          thunk_FUN_03d233cc((undefined8 *)(lVar10 + 0x38));
                          puVar9 = PTR_DAT_08ea57b8;
                          puVar8 = PTR_DAT_08ea57b0;
                          puVar7 = PTR_DAT_08ea57a8;
                          puVar6 = PTR_DAT_08ea57a0;
                          puVar5 = PTR_DAT_08ea5798;
                          puVar4 = PTR_DAT_08e9ca48;
                          puVar3 = PTR_DAT_08e9c3e0;
                          puVar2 = PTR_DAT_08e70508;
                          puVar1 = PTR_DAT_08e6baa0;
                          if (4 < *(uint *)(lVar10 + 0x18)) {
                    /* try { // try from 0710f15c to 0720f1ef has its CatchHandler @ 0710f15c
                       catch() { ... } // from try @ 0710f15c with catch @ 0710f15c
                       catch() { ... } // from try @ 0710f214 with catch @ 0710f15c
                       catch() { ... } // from try @ 0710f378 with catch @ 0710f15c
                       catch() { ... } // from try @ 0710f3ac with catch @ 0710f15c */
                            *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)PTR_DAT_08ea5888;
                            thunk_FUN_03d233cc();
                            plVar11 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
                            *plVar11 = lVar10;
                            thunk_FUN_03d233cc(plVar11,lVar10);
                            uVar12 = FUN_03c8f97c(*(undefined8 *)puVar1,0x100);
                            FUN_0701f51c(uVar12,*(undefined8 *)puVar8,0);
                            puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
                            *puVar13 = uVar12;
                            thunk_FUN_03d233cc(puVar13,uVar12);
                            uVar12 = FUN_03c8f97c(*(undefined8 *)puVar2,0x1e);
                    /* try { // try from 0710f1f0 to 0720f1f3 has its CatchHandler @ 0710f2f0 */
                    /* try { // try from 0710f1f4 to 0720f213 has its CatchHandler @ 0710f2f4 */
                            FUN_0701f51c(uVar12,*(undefined8 *)puVar9,0);
                            puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
                            *puVar13 = uVar12;
                            thunk_FUN_03d233cc(puVar13,uVar12);
                    /* try { // try from 0710f214 to 0720f30b has its CatchHandler @ 0710f15c */
                            uVar12 = FUN_03c8f97c(*(undefined8 *)puVar3,0xf);
                            FUN_0701f51c(uVar12,*(undefined8 *)puVar7,0);
                            puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
                            *puVar13 = uVar12;
                            thunk_FUN_03d233cc(puVar13,uVar12);
                            uVar12 = FUN_03c8f97c(*(undefined8 *)puVar2,0x2a);
                            FUN_0701f51c(uVar12,*(undefined8 *)puVar6,0);
                            puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
                            *puVar13 = uVar12;
                            thunk_FUN_03d233cc(puVar13,uVar12);
                            uVar12 = FUN_03c8f97c(*(undefined8 *)puVar4,0x15);
                            FUN_0701f51c(uVar12,*(undefined8 *)puVar5,0);
                            puVar13 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
                            *puVar13 = uVar12;
                            thunk_FUN_03d233cc(puVar13,uVar12);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


