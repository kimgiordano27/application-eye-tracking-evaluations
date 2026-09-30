/*
FUNCTION_NAME: Newtonsoft.Json.JsonPosition$$.cctor
ENTRY_POINT: 02703258
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonPosition___cctor(void)

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
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_01ab69ac();
  FUN_01ab69ac(PTR_DAT_03cbfcb0);
  FUN_01ab69ac(PTR_DAT_03cbebc0);
  FUN_01ab69ac(PTR_DAT_03cf7c18);
  FUN_01ab69ac(PTR_DAT_03cf7c20);
  FUN_01ab69ac(PTR_DAT_03cf7c28);
  FUN_01ab69ac(PTR_DAT_03cf7c30);
  FUN_01ab69ac(PTR_DAT_03cf7c38);
  FUN_01ab69ac(PTR_DAT_03cf7c40);
  FUN_01ab69ac(PTR_DAT_03cf7c48);
  FUN_01ab69ac(PTR_DAT_03cf7c50);
  FUN_01ab69ac(PTR_DAT_03cf7c58);
  FUN_01ab69ac(PTR_DAT_03cf7c60);
  FUN_01ab69ac(PTR_DAT_03cf7c68);
  FUN_01ab69ac(PTR_DAT_03cf7c70);
  FUN_01ab69ac(PTR_DAT_03cf7c78);
  FUN_01ab69ac(PTR_DAT_03cf7c80);
  FUN_01ab69ac(PTR_DAT_03cf7c88);
  FUN_01ab69ac(PTR_DAT_03cf7c90);
  FUN_01ab69ac(PTR_DAT_03cf7c98);
  FUN_01ab69ac(PTR_DAT_03cf7ca0);
  FUN_01ab69ac(PTR_DAT_03cf7ca8);
  FUN_01ab69ac(PTR_DAT_03cf7cb0);
  FUN_01ab69ac(PTR_DAT_03cf7cb8);
  FUN_01ab69ac(PTR_DAT_03cf7cc0);
  FUN_01ab69ac(PTR_DAT_03cf7cc8);
  FUN_01ab69ac(PTR_DAT_03cf7cd0);
  FUN_01ab69ac(PTR_DAT_03cf7cd8);
  FUN_01ab69ac(PTR_DAT_03cf7ce0);
  FUN_01ab69ac(PTR_DAT_03cf7ce8);
  FUN_01ab69ac(PTR_DAT_03cf7cf0);
  FUN_01ab69ac(PTR_DAT_03cf7cf8);
  FUN_01ab69ac(PTR_DAT_03cf7d00);
  FUN_01ab69ac(PTR_DAT_03cf7d08);
  FUN_01ab69ac(PTR_DAT_03cf7d10);
  FUN_01ab69ac(PTR_DAT_03cf7d18);
  FUN_01ab69ac(PTR_DAT_03cf7d20);
  FUN_01ab69ac(PTR_DAT_03cf7d28);
  FUN_01ab69ac(PTR_DAT_03cf7d30);
  FUN_01ab69ac(PTR_DAT_03cf7d38);
  FUN_01ab69ac(PTR_DAT_03cf7d40);
  FUN_01ab69ac(PTR_DAT_03cf7d48);
  FUN_01ab69ac(PTR_DAT_03cf7d50);
  FUN_01ab69ac(PTR_DAT_03cf7d58);
  FUN_01ab69ac(PTR_DAT_03cf7d60);
  FUN_01ab69ac(PTR_DAT_03cf7d68);
  FUN_01ab69ac(PTR_DAT_03cf7d70);
  FUN_01ab69ac(PTR_DAT_03cf7d78);
  FUN_01ab69ac(PTR_DAT_03cf7d80);
  FUN_01ab69ac(PTR_DAT_03cf7d88);
  FUN_01ab69ac(PTR_DAT_03cf7d90);
  FUN_01ab69ac(PTR_DAT_03cf7d98);
  FUN_01ab69ac(PTR_DAT_03cf7da0);
  FUN_01ab69ac(PTR_DAT_03cf7da8);
  FUN_01ab69ac(PTR_DAT_03cf7db0);
  FUN_01ab69ac(PTR_DAT_03cf7db8);
  FUN_01ab69ac(PTR_DAT_03cf7dc0);
  FUN_01ab69ac(PTR_DAT_03cf7dc8);
  FUN_01ab69ac(PTR_DAT_03cf7dd0);
  FUN_01ab69ac(PTR_DAT_03cf7dd8);
  FUN_01ab69ac(PTR_DAT_03cf7de0);
  FUN_01ab69ac(PTR_DAT_03cf7de8);
  FUN_01ab69ac(PTR_DAT_03cf7df0);
  FUN_01ab69ac(PTR_DAT_03cf7df8);
  FUN_01ab69ac(PTR_DAT_03cf7e00);
  FUN_01ab69ac(PTR_DAT_03cc9b20);
  FUN_01ab69ac(PTR_DAT_03cf7e08);
  FUN_01ab69ac(PTR_DAT_03cf7e10);
  FUN_01ab69ac(PTR_DAT_03cf7e18);
  *(undefined1 *)(unaff_x19 + 0x7a3) = 1;
  lVar11 = FUN_01ab6a94(*unaff_x20,0xd);
  puVar5 = PTR_DAT_03cf7c28;
  if (lVar11 == 0) goto LAB_02704420;
  if (*(int *)(lVar11 + 0x18) != 0) {
    *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_03cf7c28;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists((undefined8 *)(lVar11 + 0x20))
    ;
    puVar2 = PTR_DAT_03cf7d70;
    if (1 < *(uint *)(lVar11 + 0x18)) {
      *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)PTR_DAT_03cf7d70;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar11 + 0x28));
      puVar3 = PTR_DAT_03cf7c20;
      if (2 < *(uint *)(lVar11 + 0x18)) {
        *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_03cf7c20;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar11 + 0x30));
        puVar1 = PTR_DAT_03cf7e00;
        if (3 < *(uint *)(lVar11 + 0x18)) {
          *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)PTR_DAT_03cf7e00;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(lVar11 + 0x38));
          puVar9 = PTR_DAT_03cf7d40;
          if (4 < *(uint *)(lVar11 + 0x18)) {
            *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)PTR_DAT_03cf7d40;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar11 + 0x40));
            if (5 < *(uint *)(lVar11 + 0x18)) {
              *(undefined8 *)(lVar11 + 0x48) = *(undefined8 *)PTR_DAT_03cf7d88;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(lVar11 + 0x48));
              if (6 < *(uint *)(lVar11 + 0x18)) {
                *(undefined8 *)(lVar11 + 0x50) = *(undefined8 *)PTR_DAT_03cf7cc8;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          ((undefined8 *)(lVar11 + 0x50));
                if (7 < *(uint *)(lVar11 + 0x18)) {
                  *(undefined8 *)(lVar11 + 0x58) = *(undefined8 *)PTR_DAT_03cf7df0;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            ((undefined8 *)(lVar11 + 0x58));
                  if (8 < *(uint *)(lVar11 + 0x18)) {
                    *(undefined8 *)(lVar11 + 0x60) = *(undefined8 *)PTR_DAT_03cf7db8;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              ((undefined8 *)(lVar11 + 0x60));
                    puVar7 = PTR_DAT_03cf7cd8;
                    if (9 < *(uint *)(lVar11 + 0x18)) {
                      *(undefined8 *)(lVar11 + 0x68) = *(undefined8 *)PTR_DAT_03cf7cd8;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                ((undefined8 *)(lVar11 + 0x68));
                      puVar8 = PTR_DAT_03cf7d10;
                      if (10 < *(uint *)(lVar11 + 0x18)) {
                        *(undefined8 *)(lVar11 + 0x70) = *(undefined8 *)PTR_DAT_03cf7d10;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  ((undefined8 *)(lVar11 + 0x70));
                        puVar6 = PTR_DAT_03cf7c80;
                        if (0xb < *(uint *)(lVar11 + 0x18)) {
                          *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)PTR_DAT_03cf7c80;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    ((undefined8 *)(lVar11 + 0x78));
                          puVar10 = PTR_DAT_03cf7d60;
                          puVar4 = PTR_DAT_03cf7be8;
                          if (0xc < *(uint *)(lVar11 + 0x18)) {
                            *(undefined8 *)(lVar11 + 0x80) = *(undefined8 *)PTR_DAT_03cf7d60;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                            plVar12 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
                            *plVar12 = lVar11;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                      (plVar12,lVar11);
                            lVar11 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbfcb0,0xd);
                            if (lVar11 == 0) goto LAB_02704420;
                            if (*(int *)(lVar11 + 0x18) != 0) {
                              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar5;
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                        ((undefined8 *)(lVar11 + 0x20));
                              if (1 < *(uint *)(lVar11 + 0x18)) {
                                *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)puVar2;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          ((undefined8 *)(lVar11 + 0x28));
                                if (2 < *(uint *)(lVar11 + 0x18)) {
                                  *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)puVar3;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ((undefined8 *)(lVar11 + 0x30));
                                  if (3 < *(uint *)(lVar11 + 0x18)) {
                                    *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)puVar1;
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              ((undefined8 *)(lVar11 + 0x38));
                                    if (4 < *(uint *)(lVar11 + 0x18)) {
                                      *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)puVar9;
                                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                ((undefined8 *)(lVar11 + 0x40));
                                      if (5 < *(uint *)(lVar11 + 0x18)) {
                                        *(undefined8 *)(lVar11 + 0x48) =
                                             *(undefined8 *)PTR_DAT_03cf7dd0;
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  ((undefined8 *)(lVar11 + 0x48));
                                        if (6 < *(uint *)(lVar11 + 0x18)) {
                                          *(undefined8 *)(lVar11 + 0x50) =
                                               *(undefined8 *)PTR_DAT_03cf7cc8;
                                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                    ((undefined8 *)(lVar11 + 0x50));
                                          if (7 < *(uint *)(lVar11 + 0x18)) {
                                            *(undefined8 *)(lVar11 + 0x58) =
                                                 *(undefined8 *)PTR_DAT_03cf7df0;
                                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                      ((undefined8 *)(lVar11 + 0x58));
                                            if (8 < *(uint *)(lVar11 + 0x18)) {
                                              *(undefined8 *)(lVar11 + 0x60) =
                                                   *(undefined8 *)PTR_DAT_03cf7db8;
                                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                        ((undefined8 *)(lVar11 + 0x60));
                                              if (9 < *(uint *)(lVar11 + 0x18)) {
                                                *(undefined8 *)(lVar11 + 0x68) =
                                                     *(undefined8 *)puVar7;
                                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                          ((undefined8 *)(lVar11 + 0x68));
                                                puVar5 = PTR_DAT_03cf7be8;
                                                if (10 < *(uint *)(lVar11 + 0x18)) {
                                                  *(undefined8 *)(lVar11 + 0x70) =
                                                       *(undefined8 *)puVar8;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar11 + 0x70));
                                                  puVar2 = PTR_DAT_03cbfcb0;
                                                  if (0xb < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x78) =
                                                         *(undefined8 *)puVar6;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar11 + 0x78));
                                                  puVar3 = PTR_DAT_03cf7c50;
                                                  if (0xc < *(uint *)(lVar11 + 0x18)) {
                                                    *(undefined8 *)(lVar11 + 0x80) =
                                                         *(undefined8 *)puVar10;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  plVar12 = (long *)(*(long *)(*(long *)puVar5 +
                                                                              0xb8) + 0x10);
                                                  *plVar12 = lVar11;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (plVar12,lVar11);
                                                  lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar5)
                                                  ;
                                                  *(undefined4 *)(lVar11 + 0x90) = 0x7ed;
                                                  FUN_027b3d9c(lVar11,0);
                                                  *(undefined8 *)(lVar11 + 0x10) =
                                                       *(undefined8 *)puVar3;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  *(undefined8 *)(lVar11 + 0x90) = DAT_00d36f38;
                                                  lVar13 = FUN_01ab6a94(*(undefined8 *)puVar2,2);
                                                  if (lVar13 == 0) goto LAB_02704420;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_03cf7dd8;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)PTR_DAT_03cf7cf8;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  *(long *)(lVar11 + 0x18) = lVar13;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((long *)(lVar11 + 0x18),lVar13);
                                                  lVar13 = FUN_01ab6a94(*(undefined8 *)puVar2,1);
                                                  if (lVar13 == 0) {
LAB_02704420:
                    /* WARNING: Subroutine does not return */
                                                    FUN_01ab6c3c();
                                                  }
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_03cf7d78;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((long *)(lVar11 + 0x28),lVar13);
                                                  lVar13 = FUN_01ab6a94(*(undefined8 *)puVar2,1);
                                                  puVar3 = PTR_DAT_03cf7e18;
                                                  if (lVar13 == 0) goto LAB_02704420;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_03cf7d50;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  *(long *)(lVar11 + 0x20) = lVar13;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((long *)(lVar11 + 0x20),lVar13);
                                                  *(undefined8 *)(lVar11 + 0x30) =
                                                       *(undefined8 *)puVar3;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  lVar13 = FUN_01ab6a94(*(undefined8 *)puVar2,1);
                                                  if (lVar13 == 0) goto LAB_02704420;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_03cf7ce0;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  *(long *)(lVar11 + 0x38) = lVar13;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((long *)(lVar11 + 0x38),lVar13);
                                                  lVar13 = FUN_01ab6a94(*(undefined8 *)puVar2,1);
                                                  puVar3 = PTR_DAT_03cc9b20;
                                                  if (lVar13 == 0) goto LAB_02704420;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_03cc9b20;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  *(long *)(lVar11 + 0x40) = lVar13;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((long *)(lVar11 + 0x40),lVar13);
                                                  lVar13 = FUN_01ab6a94(*(undefined8 *)puVar2,1);
                                                  if (lVar13 == 0) goto LAB_02704420;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  *(long *)(lVar11 + 0x48) = lVar13;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((long *)(lVar11 + 0x48),lVar13);
                                                  lVar13 = FUN_01ab6a94(*(undefined8 *)puVar2,7);
                                                  if (lVar13 == 0) goto LAB_02704420;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_03cf7cf0;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)PTR_DAT_03cf7e10;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x28));
                                                  if (2 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x30) =
                                                         *(undefined8 *)PTR_DAT_03cf7c40;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x30));
                                                  if (3 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x38) =
                                                         *(undefined8 *)PTR_DAT_03cf7db0;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x38));
                                                  if (4 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x40) =
                                                         *(undefined8 *)PTR_DAT_03cf7c60;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x40));
                                                  if (5 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x48) =
                                                         *(undefined8 *)PTR_DAT_03cf7cc0;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x48));
                                                  if (6 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x50) =
                                                         *(undefined8 *)PTR_DAT_03cf7d68;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  *(long *)(lVar11 + 0x50) = lVar13;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((long *)(lVar11 + 0x50),lVar13);
                                                  lVar13 = FUN_01ab6a94(*(undefined8 *)puVar2,7);
                                                  if (lVar13 == 0) goto LAB_02704420;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_03cf7de0;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)PTR_DAT_03cf7dc8;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x28));
                                                  if (2 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x30) =
                                                         *(undefined8 *)PTR_DAT_03cf7de8;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x30));
                                                  if (3 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x38) =
                                                         *(undefined8 *)PTR_DAT_03cf7d28;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x38));
                                                  if (4 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x40) =
                                                         *(undefined8 *)PTR_DAT_03cf7d58;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x40));
                                                  if (5 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x48) =
                                                         *(undefined8 *)PTR_DAT_03cf7c78;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x48));
                                                  if (6 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x50) =
                                                         *(undefined8 *)PTR_DAT_03cf7ca8;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  *(long *)(lVar11 + 0x58) = lVar13;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((long *)(lVar11 + 0x58),lVar13);
                                                  lVar13 = FUN_01ab6a94(*(undefined8 *)puVar2,7);
                                                  if (lVar13 == 0) goto LAB_02704420;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_03cf7dc0;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)PTR_DAT_03cf7cd0;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x28));
                                                  if (2 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x30) =
                                                         *(undefined8 *)PTR_DAT_03cf7c18;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x30));
                                                  if (3 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x38) =
                                                         *(undefined8 *)PTR_DAT_03cf7d00;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x38));
                                                  if (4 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x40) =
                                                         *(undefined8 *)PTR_DAT_03cf7d18;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x40));
                                                  if (5 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x48) =
                                                         *(undefined8 *)PTR_DAT_03cf7df8;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x48));
                                                  if (6 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x50) =
                                                         *(undefined8 *)PTR_DAT_03cf7c58;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  *(long *)(lVar11 + 0x60) = lVar13;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((long *)(lVar11 + 0x60),lVar13);
                                                  lVar13 = FUN_01ab6a94(*(undefined8 *)puVar2,0xd);
                                                  if (lVar13 == 0) goto LAB_02704420;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_03cf7c30;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)PTR_DAT_03cf7d38;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x28));
                                                  if (2 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x30) =
                                                         *(undefined8 *)PTR_DAT_03cf7c68;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x30));
                                                  if (3 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x38) =
                                                         *(undefined8 *)PTR_DAT_03cf7d80;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x38));
                                                  puVar3 = PTR_DAT_03cf7d48;
                                                  if (4 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x40) =
                                                         *(undefined8 *)PTR_DAT_03cf7d48;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x40));
                                                  if (5 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x48) =
                                                         *(undefined8 *)PTR_DAT_03cf7d90;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x48));
                                                  if (6 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x50) =
                                                         *(undefined8 *)PTR_DAT_03cf7cb8;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x50));
                                                  if (7 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x58) =
                                                         *(undefined8 *)PTR_DAT_03cf7cb0;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x58));
                                                  if (8 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x60) =
                                                         *(undefined8 *)PTR_DAT_03cf7e08;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x60));
                                                  if (9 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x68) =
                                                         *(undefined8 *)PTR_DAT_03cf7d30;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x68));
                                                  if (10 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x70) =
                                                         *(undefined8 *)PTR_DAT_03cf7c70;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x70));
                                                  if (0xb < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x78) =
                                                         *(undefined8 *)PTR_DAT_03cf7d08;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x78));
                                                  puVar1 = PTR_DAT_03cbebc0;
                                                  if (0xc < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x80) =
                                                         **(undefined8 **)
                                                           (*(long *)PTR_DAT_03cbebc0 + 0xb8);
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  *(long *)(lVar11 + 0x68) = lVar13;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((long *)(lVar11 + 0x68),lVar13);
                                                  lVar13 = FUN_01ab6a94(*(undefined8 *)puVar2,0xd);
                                                  if (lVar13 == 0) goto LAB_02704420;
                                                  if (*(int *)(lVar13 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_03cf7c38;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x20));
                                                  if (1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x28) =
                                                         *(undefined8 *)PTR_DAT_03cf7c48;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x28));
                                                  if (2 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x30) =
                                                         *(undefined8 *)PTR_DAT_03cf7c88;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x30));
                                                  if (3 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x38) =
                                                         *(undefined8 *)PTR_DAT_03cf7da0;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x38));
                                                  if (4 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x40) =
                                                         *(undefined8 *)puVar3;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x40));
                                                  if (5 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x48) =
                                                         *(undefined8 *)PTR_DAT_03cf7c90;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x48));
                                                  if (6 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x50) =
                                                         *(undefined8 *)PTR_DAT_03cf7ce8;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x50));
                                                  if (7 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x58) =
                                                         *(undefined8 *)PTR_DAT_03cf7d20;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x58));
                                                  if (8 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x60) =
                                                         *(undefined8 *)PTR_DAT_03cf7c98;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x60));
                                                  if (9 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x68) =
                                                         *(undefined8 *)PTR_DAT_03cf7da8;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x68));
                                                  if (10 < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x70) =
                                                         *(undefined8 *)PTR_DAT_03cf7ca0;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x70));
                                                  if (0xb < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x78) =
                                                         *(undefined8 *)PTR_DAT_03cf7d98;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar13 + 0x78));
                                                  if (0xc < *(uint *)(lVar13 + 0x18)) {
                                                    *(undefined8 *)(lVar13 + 0x80) =
                                                         **(undefined8 **)(*(long *)puVar1 + 0xb8);
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  plVar12 = (long *)(lVar11 + 0x70);
                                                  *plVar12 = lVar13;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (plVar12,lVar13);
                                                  *(undefined8 *)(lVar11 + 0x78) =
                                                       *(undefined8 *)(lVar11 + 0x68);
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  *(long *)(lVar11 + 0x80) = *plVar12;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  *(undefined8 *)(lVar11 + 0x88) =
                                                       *(undefined8 *)(lVar11 + 0x68);
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  *(undefined1 *)(lVar11 + 0x98) = 0;
                                                  **(long **)(*(long *)puVar5 + 0xb8) = lVar11;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (*(undefined8 *)(*(long *)puVar5 + 0xb8)
                                                             ,lVar11);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


