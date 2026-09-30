/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$GetPosition
ENTRY_POINT: 027038f8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonReader__GetPosition(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  uint in_w8;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *plVar7;
  undefined8 *unaff_x22;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  if (8 < in_w8) {
    *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)PTR_DAT_03cf7db8;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x19 + 0x60));
    if (9 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x68) = *unaff_x22;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(unaff_x19 + 0x68));
      puVar4 = PTR_DAT_03cf7be8;
      if (10 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x70) = *unaff_x21;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(unaff_x19 + 0x70));
        puVar2 = PTR_DAT_03cbfcb0;
        if (0xb < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x78) = *unaff_x28;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(unaff_x19 + 0x78));
          puVar3 = PTR_DAT_03cf7c50;
          if (0xc < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x80) = *unaff_x29;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10) = unaff_x19;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            lVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
            *(undefined4 *)(lVar5 + 0x90) = 0x7ed;
            FUN_027b3d9c(lVar5,0);
            *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)puVar3;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            *(undefined8 *)(lVar5 + 0x90) = DAT_00d36f38;
            lVar6 = FUN_01ab6a94(*(undefined8 *)puVar2,2);
            if (lVar6 == 0) goto LAB_02704420;
            if (*(int *)(lVar6 + 0x18) != 0) {
              *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_03cf7dd8;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(lVar6 + 0x20));
              if (1 < *(uint *)(lVar6 + 0x18)) {
                *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_03cf7cf8;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                *(long *)(lVar5 + 0x18) = lVar6;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          ((long *)(lVar5 + 0x18),lVar6);
                lVar6 = FUN_01ab6a94(*(undefined8 *)puVar2,1);
                if (lVar6 == 0) {
LAB_02704420:
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                if (*(int *)(lVar6 + 0x18) != 0) {
                  *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_03cf7d78;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  *(long *)(lVar5 + 0x28) = lVar6;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            ((long *)(lVar5 + 0x28),lVar6);
                  lVar6 = FUN_01ab6a94(*(undefined8 *)puVar2,1);
                  puVar3 = PTR_DAT_03cf7e18;
                  if (lVar6 == 0) goto LAB_02704420;
                  if (*(int *)(lVar6 + 0x18) != 0) {
                    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_03cf7d50;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    *(long *)(lVar5 + 0x20) = lVar6;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              ((long *)(lVar5 + 0x20),lVar6);
                    *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)puVar3;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    lVar6 = FUN_01ab6a94(*(undefined8 *)puVar2,1);
                    if (lVar6 == 0) goto LAB_02704420;
                    if (*(int *)(lVar6 + 0x18) != 0) {
                      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_03cf7ce0;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      *(long *)(lVar5 + 0x38) = lVar6;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                ((long *)(lVar5 + 0x38),lVar6);
                      lVar6 = FUN_01ab6a94(*(undefined8 *)puVar2,1);
                      puVar3 = PTR_DAT_03cc9b20;
                      if (lVar6 == 0) goto LAB_02704420;
                      if (*(int *)(lVar6 + 0x18) != 0) {
                        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_03cc9b20;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                        *(long *)(lVar5 + 0x40) = lVar6;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  ((long *)(lVar5 + 0x40),lVar6);
                        lVar6 = FUN_01ab6a94(*(undefined8 *)puVar2,1);
                        if (lVar6 == 0) goto LAB_02704420;
                        if (*(int *)(lVar6 + 0x18) != 0) {
                          *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar3;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          *(long *)(lVar5 + 0x48) = lVar6;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    ((long *)(lVar5 + 0x48),lVar6);
                          lVar6 = FUN_01ab6a94(*(undefined8 *)puVar2,7);
                          if (lVar6 == 0) goto LAB_02704420;
                          if (*(int *)(lVar6 + 0x18) != 0) {
                            *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_03cf7cf0;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                      ((undefined8 *)(lVar6 + 0x20));
                            if (1 < *(uint *)(lVar6 + 0x18)) {
                              *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_03cf7e10;
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                        ((undefined8 *)(lVar6 + 0x28));
                              if (2 < *(uint *)(lVar6 + 0x18)) {
                                *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)PTR_DAT_03cf7c40;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          ((undefined8 *)(lVar6 + 0x30));
                                if (3 < *(uint *)(lVar6 + 0x18)) {
                                  *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)PTR_DAT_03cf7db0;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ((undefined8 *)(lVar6 + 0x38));
                                  if (4 < *(uint *)(lVar6 + 0x18)) {
                                    *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)PTR_DAT_03cf7c60;
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              ((undefined8 *)(lVar6 + 0x40));
                                    if (5 < *(uint *)(lVar6 + 0x18)) {
                                      *(undefined8 *)(lVar6 + 0x48) =
                                           *(undefined8 *)PTR_DAT_03cf7cc0;
                                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                ((undefined8 *)(lVar6 + 0x48));
                                      if (6 < *(uint *)(lVar6 + 0x18)) {
                                        *(undefined8 *)(lVar6 + 0x50) =
                                             *(undefined8 *)PTR_DAT_03cf7d68;
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  ();
                                        *(long *)(lVar5 + 0x50) = lVar6;
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  ((long *)(lVar5 + 0x50),lVar6);
                                        lVar6 = FUN_01ab6a94(*(undefined8 *)puVar2,7);
                                        if (lVar6 == 0) goto LAB_02704420;
                                        if (*(int *)(lVar6 + 0x18) != 0) {
                                          *(undefined8 *)(lVar6 + 0x20) =
                                               *(undefined8 *)PTR_DAT_03cf7de0;
                                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                    ((undefined8 *)(lVar6 + 0x20));
                                          if (1 < *(uint *)(lVar6 + 0x18)) {
                                            *(undefined8 *)(lVar6 + 0x28) =
                                                 *(undefined8 *)PTR_DAT_03cf7dc8;
                                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                      ((undefined8 *)(lVar6 + 0x28));
                                            if (2 < *(uint *)(lVar6 + 0x18)) {
                                              *(undefined8 *)(lVar6 + 0x30) =
                                                   *(undefined8 *)PTR_DAT_03cf7de8;
                                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                        ((undefined8 *)(lVar6 + 0x30));
                                              if (3 < *(uint *)(lVar6 + 0x18)) {
                                                *(undefined8 *)(lVar6 + 0x38) =
                                                     *(undefined8 *)PTR_DAT_03cf7d28;
                                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                          ((undefined8 *)(lVar6 + 0x38));
                                                if (4 < *(uint *)(lVar6 + 0x18)) {
                                                  *(undefined8 *)(lVar6 + 0x40) =
                                                       *(undefined8 *)PTR_DAT_03cf7d58;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x40));
                                                  if (5 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x48) =
                                                         *(undefined8 *)PTR_DAT_03cf7c78;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x48));
                                                  if (6 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x50) =
                                                         *(undefined8 *)PTR_DAT_03cf7ca8;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  *(long *)(lVar5 + 0x58) = lVar6;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((long *)(lVar5 + 0x58),lVar6);
                                                  lVar6 = FUN_01ab6a94(*(undefined8 *)puVar2,7);
                                                  if (lVar6 == 0) goto LAB_02704420;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar6 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_03cf7dc0;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x20));
                                                  if (1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x28) =
                                                         *(undefined8 *)PTR_DAT_03cf7cd0;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x28));
                                                  if (2 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x30) =
                                                         *(undefined8 *)PTR_DAT_03cf7c18;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x30));
                                                  if (3 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x38) =
                                                         *(undefined8 *)PTR_DAT_03cf7d00;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x38));
                                                  if (4 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x40) =
                                                         *(undefined8 *)PTR_DAT_03cf7d18;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x40));
                                                  if (5 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x48) =
                                                         *(undefined8 *)PTR_DAT_03cf7df8;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x48));
                                                  if (6 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x50) =
                                                         *(undefined8 *)PTR_DAT_03cf7c58;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  *(long *)(lVar5 + 0x60) = lVar6;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((long *)(lVar5 + 0x60),lVar6);
                                                  lVar6 = FUN_01ab6a94(*(undefined8 *)puVar2,0xd);
                                                  if (lVar6 == 0) goto LAB_02704420;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar6 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_03cf7c30;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x20));
                                                  if (1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x28) =
                                                         *(undefined8 *)PTR_DAT_03cf7d38;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x28));
                                                  if (2 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x30) =
                                                         *(undefined8 *)PTR_DAT_03cf7c68;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x30));
                                                  if (3 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x38) =
                                                         *(undefined8 *)PTR_DAT_03cf7d80;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x38));
                                                  puVar3 = PTR_DAT_03cf7d48;
                                                  if (4 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x40) =
                                                         *(undefined8 *)PTR_DAT_03cf7d48;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x40));
                                                  if (5 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x48) =
                                                         *(undefined8 *)PTR_DAT_03cf7d90;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x48));
                                                  if (6 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x50) =
                                                         *(undefined8 *)PTR_DAT_03cf7cb8;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x50));
                                                  if (7 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x58) =
                                                         *(undefined8 *)PTR_DAT_03cf7cb0;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x58));
                                                  if (8 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x60) =
                                                         *(undefined8 *)PTR_DAT_03cf7e08;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x60));
                                                  if (9 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x68) =
                                                         *(undefined8 *)PTR_DAT_03cf7d30;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x68));
                                                  if (10 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x70) =
                                                         *(undefined8 *)PTR_DAT_03cf7c70;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x70));
                                                  if (0xb < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x78) =
                                                         *(undefined8 *)PTR_DAT_03cf7d08;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x78));
                                                  puVar1 = PTR_DAT_03cbebc0;
                                                  if (0xc < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x80) =
                                                         **(undefined8 **)
                                                           (*(long *)PTR_DAT_03cbebc0 + 0xb8);
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  *(long *)(lVar5 + 0x68) = lVar6;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((long *)(lVar5 + 0x68),lVar6);
                                                  lVar6 = FUN_01ab6a94(*(undefined8 *)puVar2,0xd);
                                                  if (lVar6 == 0) goto LAB_02704420;
                                                  if (*(int *)(lVar6 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar6 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_03cf7c38;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x20));
                                                  if (1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x28) =
                                                         *(undefined8 *)PTR_DAT_03cf7c48;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x28));
                                                  if (2 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x30) =
                                                         *(undefined8 *)PTR_DAT_03cf7c88;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x30));
                                                  if (3 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x38) =
                                                         *(undefined8 *)PTR_DAT_03cf7da0;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x38));
                                                  if (4 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x40) =
                                                         *(undefined8 *)puVar3;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x40));
                                                  if (5 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x48) =
                                                         *(undefined8 *)PTR_DAT_03cf7c90;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x48));
                                                  if (6 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x50) =
                                                         *(undefined8 *)PTR_DAT_03cf7ce8;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x50));
                                                  if (7 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x58) =
                                                         *(undefined8 *)PTR_DAT_03cf7d20;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x58));
                                                  if (8 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x60) =
                                                         *(undefined8 *)PTR_DAT_03cf7c98;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x60));
                                                  if (9 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x68) =
                                                         *(undefined8 *)PTR_DAT_03cf7da8;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x68));
                                                  if (10 < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x70) =
                                                         *(undefined8 *)PTR_DAT_03cf7ca0;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x70));
                                                  if (0xb < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x78) =
                                                         *(undefined8 *)PTR_DAT_03cf7d98;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar6 + 0x78));
                                                  if (0xc < *(uint *)(lVar6 + 0x18)) {
                                                    *(undefined8 *)(lVar6 + 0x80) =
                                                         **(undefined8 **)(*(long *)puVar1 + 0xb8);
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  plVar7 = (long *)(lVar5 + 0x70);
                                                  *plVar7 = lVar6;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (plVar7,lVar6);
                                                  *(undefined8 *)(lVar5 + 0x78) =
                                                       *(undefined8 *)(lVar5 + 0x68);
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  *(long *)(lVar5 + 0x80) = *plVar7;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  *(undefined8 *)(lVar5 + 0x88) =
                                                       *(undefined8 *)(lVar5 + 0x68);
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  *(undefined1 *)(lVar5 + 0x98) = 0;
                                                  **(long **)(*(long *)puVar4 + 0xb8) = lVar5;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (*(undefined8 *)(*(long *)puVar4 + 0xb8)
                                                             ,lVar5);
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
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


