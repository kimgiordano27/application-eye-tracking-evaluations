/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$System.IDisposable.Dispose
ENTRY_POINT: 02717c9c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_3
*/


void Newtonsoft_Json_JsonWriter__System_IDisposable_Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long unaff_x19;
  undefined8 uVar12;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x19 + 0x12f0) = in_stack_00000000;
  *(undefined8 *)(unaff_x19 + 0x12f8) = in_stack_00000008;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x12f0,0);
  uVar11 = *unaff_x21;
  in_stack_00000008 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  puVar1 = PTR_DAT_03cf8fa0;
  in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x6fb7);
  if (0x12e < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x1300) = uVar11;
    *(undefined8 *)(unaff_x19 + 0x1308) = in_stack_00000008;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1300,0);
    uVar11 = *(undefined8 *)puVar1;
    in_stack_00000008 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    puVar1 = PTR_DAT_03cf8600;
    in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x6fbd);
    if (0x12f < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x1310) = uVar11;
      *(undefined8 *)(unaff_x19 + 0x1318) = in_stack_00000008;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1310,0);
      uVar11 = *(undefined8 *)puVar1;
      in_stack_00000008 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      puVar1 = PTR_DAT_03cf8880;
      in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x6faf);
      if (0x130 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x1320) = uVar11;
        *(undefined8 *)(unaff_x19 + 0x1328) = in_stack_00000008;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1320,0);
        uVar11 = *(undefined8 *)puVar1;
        in_stack_00000008 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        puVar1 = PTR_DAT_03cf8bd0;
        in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x6fb0);
        if (0x131 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x1330) = uVar11;
          *(undefined8 *)(unaff_x19 + 0x1338) = in_stack_00000008;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1330,0);
          uVar11 = *(undefined8 *)puVar1;
          in_stack_00000008 = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          puVar1 = PTR_DAT_03cf8540;
          in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x6fb1);
          if (0x132 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x1340) = uVar11;
            *(undefined8 *)(unaff_x19 + 0x1348) = in_stack_00000008;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1340,0);
            uVar11 = *(undefined8 *)puVar1;
            in_stack_00000008 = 0;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            puVar1 = PTR_DAT_03cf8630;
            in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x6fb2);
            if (0x133 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x1350) = uVar11;
              *(undefined8 *)(unaff_x19 + 0x1358) = in_stack_00000008;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (unaff_x19 + 0x1350,0);
              uVar11 = *(undefined8 *)puVar1;
              in_stack_00000008 = 0;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              puVar1 = PTR_DAT_03cf8770;
              in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x6fb7);
              if (0x134 < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0x1360) = uVar11;
                *(undefined8 *)(unaff_x19 + 0x1368) = in_stack_00000008;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (unaff_x19 + 0x1360,0);
                uVar11 = *(undefined8 *)puVar1;
                in_stack_00000008 = 0;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                puVar1 = PTR_DAT_03cf8fe8;
                in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x6fbd);
                if (0x135 < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0x1370) = uVar11;
                  *(undefined8 *)(unaff_x19 + 0x1378) = in_stack_00000008;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (unaff_x19 + 0x1370,0);
                  uVar11 = *(undefined8 *)puVar1;
                  in_stack_00000008 = 0;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  puVar1 = PTR_DAT_03cf8af0;
                  in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x6fb6);
                  if (0x136 < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0x1380) = uVar11;
                    *(undefined8 *)(unaff_x19 + 5000) = in_stack_00000008;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (unaff_x19 + 0x1380,0);
                    uVar11 = *(undefined8 *)puVar1;
                    in_stack_00000008 = 0;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    puVar1 = PTR_DAT_03cf83d0;
                    in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,10000);
                    if (0x137 < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 0x1390) = uVar11;
                      *(undefined8 *)(unaff_x19 + 0x1398) = in_stack_00000008;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (unaff_x19 + 0x1390,0);
                      uVar11 = *(undefined8 *)puVar1;
                      in_stack_00000008 = 0;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      puVar1 = PTR_DAT_03cf8f30;
                      in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x3a4);
                      if (0x138 < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined8 *)(unaff_x19 + 0x13a0) = uVar11;
                        *(undefined8 *)(unaff_x19 + 0x13a8) = in_stack_00000008;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (unaff_x19 + 0x13a0,0);
                        uVar11 = *(undefined8 *)puVar1;
                        in_stack_00000008 = 0;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                        puVar1 = PTR_DAT_03cf8308;
                        in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x4e8c);
                        if (0x139 < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 0x13b0) = uVar11;
                          *(undefined8 *)(unaff_x19 + 0x13b8) = in_stack_00000008;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (unaff_x19 + 0x13b0,0);
                          uVar11 = *(undefined8 *)puVar1;
                          in_stack_00000008 = 0;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                          puVar1 = PTR_DAT_03cf8608;
                          in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x4e8c);
                          if (0x13a < *(uint *)(unaff_x19 + 0x18)) {
                            *(undefined8 *)(unaff_x19 + 0x13c0) = uVar11;
                            *(undefined8 *)(unaff_x19 + 0x13c8) = in_stack_00000008;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                      (unaff_x19 + 0x13c0,0);
                            uVar11 = *(undefined8 *)puVar1;
                            in_stack_00000008 = 0;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                            puVar1 = PTR_DAT_03cf8dc8;
                            in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x35a);
                            if (0x13b < *(uint *)(unaff_x19 + 0x18)) {
                              *(undefined8 *)(unaff_x19 + 0x13d0) = uVar11;
                              *(undefined8 *)(unaff_x19 + 0x13d8) = in_stack_00000008;
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                        (unaff_x19 + 0x13d0,0);
                              uVar11 = *(undefined8 *)puVar1;
                              in_stack_00000008 = 0;
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                              puVar1 = PTR_DAT_03cf8868;
                              in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x4e8b);
                              if (0x13c < *(uint *)(unaff_x19 + 0x18)) {
                                *(undefined8 *)(unaff_x19 + 0x13e0) = uVar11;
                                *(undefined8 *)(unaff_x19 + 0x13e8) = in_stack_00000008;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          (unaff_x19 + 0x13e0,0);
                                uVar11 = *(undefined8 *)puVar1;
                                in_stack_00000008 = 0;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                                puVar1 = PTR_DAT_03cf8578;
                                in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x3a4);
                                if (0x13d < *(uint *)(unaff_x19 + 0x18)) {
                                  *(undefined8 *)(unaff_x19 + 0x13f0) = uVar11;
                                  *(undefined8 *)(unaff_x19 + 0x13f8) = in_stack_00000008;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            (unaff_x19 + 0x13f0,0);
                                  uVar11 = *(undefined8 *)puVar1;
                                  in_stack_00000008 = 0;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  puVar1 = PTR_DAT_03cf8830;
                                  in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x3a4);
                                  if (0x13e < *(uint *)(unaff_x19 + 0x18)) {
                                    *(undefined8 *)(unaff_x19 + 0x1400) = uVar11;
                                    *(undefined8 *)(unaff_x19 + 0x1408) = in_stack_00000008;
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              (unaff_x19 + 0x1400,0);
                                    uVar11 = *(undefined8 *)puVar1;
                                    in_stack_00000008 = 0;
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              ();
                                    puVar1 = PTR_DAT_03cf87b8;
                                    in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x3a4);
                                    if (0x13f < *(uint *)(unaff_x19 + 0x18)) {
                                      *(undefined8 *)(unaff_x19 + 0x1410) = uVar11;
                                      *(undefined8 *)(unaff_x19 + 0x1418) = in_stack_00000008;
                                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                (unaff_x19 + 0x1410,0);
                                      uVar11 = *(undefined8 *)puVar1;
                                      in_stack_00000008 = 0;
                                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                ();
                                      puVar1 = PTR_DAT_03cf84d8;
                                      in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x4e8b);
                                      if (0x140 < *(uint *)(unaff_x19 + 0x18)) {
                                        *(undefined8 *)(unaff_x19 + 0x1420) = uVar11;
                                        *(undefined8 *)(unaff_x19 + 0x1428) = in_stack_00000008;
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  (unaff_x19 + 0x1420,0);
                                        uVar11 = *(undefined8 *)puVar1;
                                        in_stack_00000008 = 0;
                                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                  ();
                                        puVar1 = PTR_DAT_03cf8d38;
                                        in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0x36a);
                                        if (0x141 < *(uint *)(unaff_x19 + 0x18)) {
                                          *(undefined8 *)(unaff_x19 + 0x1430) = uVar11;
                                          *(undefined8 *)(unaff_x19 + 0x1438) = in_stack_00000008;
                                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                    (unaff_x19 + 0x1430,0);
                                          uVar11 = *(undefined8 *)puVar1;
                                          in_stack_00000008 = 0;
                                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                    ();
                                          puVar1 = PTR_DAT_03cf8ab0;
                                          in_stack_00000008 =
                                               CONCAT62(in_stack_00000008._2_6_,0x4b0);
                                          if (0x142 < *(uint *)(unaff_x19 + 0x18)) {
                                            *(undefined8 *)(unaff_x19 + 0x1440) = uVar11;
                                            *(undefined8 *)(unaff_x19 + 0x1448) = in_stack_00000008;
                                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                      (unaff_x19 + 0x1440,0);
                                            uVar11 = *(undefined8 *)puVar1;
                                            in_stack_00000008 = 0;
                                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                      ();
                                            puVar1 = PTR_DAT_03cf8ad8;
                                            in_stack_00000008 =
                                                 CONCAT62(in_stack_00000008._2_6_,0x4b0);
                                            if (0x143 < *(uint *)(unaff_x19 + 0x18)) {
                                              *(undefined8 *)(unaff_x19 + 0x1450) = uVar11;
                                              *(undefined8 *)(unaff_x19 + 0x1458) =
                                                   in_stack_00000008;
                                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                        (unaff_x19 + 0x1450,0);
                                              uVar11 = *(undefined8 *)puVar1;
                                              in_stack_00000008 = 0;
                                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                        ();
                                              puVar1 = PTR_DAT_03cf8548;
                                              in_stack_00000008 =
                                                   CONCAT62(in_stack_00000008._2_6_,65000);
                                              if (0x144 < *(uint *)(unaff_x19 + 0x18)) {
                                                *(undefined8 *)(unaff_x19 + 0x1460) = uVar11;
                                                *(undefined8 *)(unaff_x19 + 0x1468) =
                                                     in_stack_00000008;
                                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                          (unaff_x19 + 0x1460,0);
                                                uVar11 = *(undefined8 *)puVar1;
                                                in_stack_00000008 = 0;
                                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                          ();
                                                puVar1 = PTR_DAT_03cf8560;
                                                in_stack_00000008 =
                                                     CONCAT62(in_stack_00000008._2_6_,0xfde9);
                                                if (0x145 < *(uint *)(unaff_x19 + 0x18)) {
                                                  *(undefined8 *)(unaff_x19 + 0x1470) = uVar11;
                                                  *(undefined8 *)(unaff_x19 + 0x1478) =
                                                       in_stack_00000008;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1470,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf8950;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,65000);
                                                  if (0x146 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1480) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1488) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1480,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf87b0;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0xfde9);
                                                  if (0x147 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1490) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1498) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1490,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf8778;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4b1);
                                                  if (0x148 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x14a0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x14a8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x14a0,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf8b70;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e9f);
                                                  if (0x149 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x14b0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x14b8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x14b0,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf85c0;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e9f);
                                                  if (0x14a < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x14c0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x14c8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x14c0,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf8be8;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4b0);
                                                  if (0x14b < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x14d0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x14d8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x14d0,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf8f50;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4b1);
                                                  if (0x14c < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x14e0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x14e8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x14e0,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf8de8;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4b0);
                                                  if (0x14d < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x14f0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x14f8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x14f0,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf8df8;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,12000);
                                                  if (0x14e < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1500) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1508) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1500,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf8f10;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x2ee1);
                                                  if (0x14f < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1510) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1518) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1510,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf8808;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,12000);
                                                  if (0x150 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1520) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1528) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1520,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf8c40;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,65000);
                                                  if (0x151 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1530) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1538) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1530,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf8d00;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0xfde9);
                                                  if (0x152 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1540) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1548) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1540,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf8aa8;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x6fb6);
                                                  if (0x153 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1550) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1558) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1550,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf8f00;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e2);
                                                  if (0x154 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1560) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1568) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1560,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf8bd8;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e3);
                                                  if (0x155 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1570) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1578) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1570,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf8b60;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e4);
                                                  if (0x156 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1580) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1588) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1580,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf8f20;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e5);
                                                  if (0x157 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1590) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1598) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1590,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf86f8;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e6);
                                                  if (0x158 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x15a0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x15a8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x15a0,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf88f0;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e7);
                                                  if (0x159 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x15b0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x15b8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x15b0,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf88b0;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e8);
                                                  if (0x15a < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x15c0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x15c8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x15c0,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf8358;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e9);
                                                  if (0x15b < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x15d0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x15d8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x15d0,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar1 = PTR_DAT_03cf8b50;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4ea);
                                                  if (0x15c < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x15e0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x15e8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x15e0,0);
                                                  uVar11 = *(undefined8 *)puVar1;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8f80;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x36a);
                                                  if (0x15d < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x15f0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x15f8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x15f0,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8818;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e4);
                                                  if (0x15e < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1600) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1608) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1600,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8df0;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,20000);
                                                  if (0x15f < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1610) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1618) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1610,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8458;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e22);
                                                  if (0x160 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1620) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1628) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1620,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8a30;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e2);
                                                  if (0x161 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1630) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1638) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1630,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf85a0;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e3);
                                                  if (0x162 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1640) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1648) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1640,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8bb8;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e21);
                                                  if (0x163 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1650) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1658) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1650,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8a18;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e23);
                                                  if (0x164 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1660) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1668) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1660,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf84e0;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e24);
                                                  if (0x165 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1670) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1678) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1670,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8758;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e25);
                                                  if (0x166 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1680) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1688) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1680,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8f28;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4f25);
                                                  if (0x167 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1690) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1698) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1690,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8878;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4f2d);
                                                  if (0x168 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x16a0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x16a8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x16a0,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8378;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x51c8);
                                                  if (0x169 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x16b0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x16b8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x16b0,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8348;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x51d5);
                                                  if (0x16a < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x16c0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x16c8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x16c0,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8a98;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0xc433);
                                                  if (0x16b < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x16d0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x16d8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x16d0,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8408;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x5161);
                                                  if (0x16c < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x16e0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x16e8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x16e0,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8e28;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0xcadc);
                                                  if (0x16d < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x16f0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x16f8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x16f0,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8ec0;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0xcae0);
                                                  if (0x16e < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1700) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1708) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1700,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8e10;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0xcadc);
                                                  if (0x16f < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1710) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1718) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1710,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf82f0;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x7149);
                                                  if (0x170 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1720) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1728) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1720,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8628;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e89);
                                                  if (0x171 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1730) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1738) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1730,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8db8;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e8a);
                                                  if (0x172 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1740) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1748) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1740,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8d68;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e8c);
                                                  if (0x173 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1750) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1758) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1750,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8698;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x4e8b);
                                                  if (0x174 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1760) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1768) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1760,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8398;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0xdeae);
                                                  if (0x175 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 6000) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1778) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 6000,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf88f8;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0xdeab);
                                                  if (0x176 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1780) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1788) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1780,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8368;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0xdeaa);
                                                  if (0x177 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1790) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1798) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1790,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8598;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0xdeb2);
                                                  if (0x178 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x17a0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x17a8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x17a0,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8e98;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0xdeb0);
                                                  if (0x179 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x17b0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x17b8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x17b0,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8ae8;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0xdeb1);
                                                  if (0x17a < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x17c0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x17c8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x17c0,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8cd8;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0xdeaf);
                                                  if (0x17b < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x17d0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x17d8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x17d0,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8b30;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0xdeb3);
                                                  if (0x17c < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x17e0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x17e8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x17e0,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8c58;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0xdeac);
                                                  if (0x17d < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x17f0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x17f8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x17f0,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8810;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0xdead);
                                                  if (0x17e < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1800) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1808) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1800,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8860;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x2714);
                                                  if (0x17f < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1810) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1818) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1810,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8618;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x272d);
                                                  if (0x180 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1820) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1828) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1820,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8c50;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x2718);
                                                  if (0x181 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1830) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1838) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1830,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf83f8;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x2712);
                                                  if (0x182 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1840) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1848) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1840,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8468;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x2762);
                                                  if (0x183 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1850) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1858) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1850,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf83e8;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x2717);
                                                  if (0x184 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1860) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1868) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1860,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8a78;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x2716);
                                                  if (0x185 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1870) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1878) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1870,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8988;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x2715);
                                                  if (0x186 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1880) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1888) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1880,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8a48;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x275f);
                                                  if (0x187 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1890) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1898) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1890,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8c30;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x2711);
                                                  if (0x188 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x18a0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x18a8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x18a0,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8a68;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x2713);
                                                  if (0x189 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x18b0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x18b8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x18b0,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf85f0;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x271a);
                                                  if (0x18a < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x18c0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x18c8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x18c0,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8c28;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x2725);
                                                  if (0x18b < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x18d0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x18d8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x18d0,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf89c8;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x2761);
                                                  if (0x18c < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x18e0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x18e8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x18e0,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8c18;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x2721);
                                                  if (0x18d < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x18f0) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x18f8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x18f0,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8550;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x3a4);
                                                  if (0x18e < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1900) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1908) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1900,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8978;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x3a4);
                                                  if (399 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1910) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1918) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1910,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8fc0;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,65000);
                                                  if (400 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1920) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1928) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1920,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8ab8;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0xfde9);
                                                  if (0x191 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1930) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1938) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1930,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8828;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,65000);
                                                  if (0x192 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1940) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1948) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1940,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar3 = PTR_DAT_03cf8e78;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0xfde9);
                                                  if (0x193 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1950) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1958) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1950,0);
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ();
                                                  puVar2 = PTR_DAT_03cf82e0;
                                                  puVar3 = PTR_DAT_03cf0880;
                                                  in_stack_00000008 =
                                                       CONCAT62(in_stack_00000008._2_6_,0x3b6);
                                                  if (0x194 < *(uint *)(unaff_x19 + 0x18)) {
                                                    *(undefined8 *)(unaff_x19 + 0x1960) = uVar11;
                                                    *(undefined8 *)(unaff_x19 + 0x1968) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (unaff_x19 + 0x1960,0);
                                                  **(long **)(*(long *)puVar3 + 0xb8) = unaff_x19;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (*(undefined8 *)(*(long *)puVar3 + 0xb8)
                                                            );
                                                  lVar8 = FUN_01ab6a94(*(undefined8 *)puVar2,0x62);
                                                  in_stack_00000008 = *unaff_x26;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_01ab6c3c();
                                                  }
                                                  if (*(int *)(lVar8 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar8 + 0x28) =
                                                         in_stack_00000008;
                                                    *(undefined8 *)(lVar8 + 0x20) = 0x4e40025;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar8 + 0x28),0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf87c0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x38) =
                                                         in_stack_00000008;
                                                    *(undefined8 *)(lVar8 + 0x30) = 0x4e401b5;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar8 + 0x38),0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8c80;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (2 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x48) =
                                                         in_stack_00000008;
                                                    *(undefined8 *)(lVar8 + 0x40) = 0x4e401f4;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar8 + 0x48),0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8330;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (3 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x58) =
                                                         in_stack_00000008;
                                                    *(undefined8 *)(lVar8 + 0x50) = 0x20204e802c4;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar8 + 0x58),0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8998;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (4 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x68) =
                                                         in_stack_00000008;
                                                    *(undefined8 *)(lVar8 + 0x60) = 0x4e502e1;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar8 + 0x68),0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8bc0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar2 = PTR_DAT_03cf8690;
                                                  if (5 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x78) =
                                                         in_stack_00000008;
                                                    *(undefined8 *)(lVar8 + 0x70) = 0x4e90307;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar8 + 0x78),0);
                                                  in_stack_00000008 = *(undefined8 *)puVar2;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar2 = PTR_DAT_03cf8890;
                                                  if (6 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x88) =
                                                         in_stack_00000008;
                                                    *(undefined8 *)(lVar8 + 0x80) = 0x4e40352;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar8 + 0x88),0);
                                                  in_stack_00000008 = *(undefined8 *)puVar2;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (7 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x98) =
                                                         in_stack_00000008;
                                                    *(undefined8 *)(lVar8 + 0x90) = 0x20204e20354;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar8 + 0x98),0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8c60;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar2 = PTR_DAT_03cf8650;
                                                  if (8 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0xa8) =
                                                         in_stack_00000008;
                                                    *(undefined8 *)(lVar8 + 0xa0) = 0x4e40357;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar8 + 0xa8),0);
                                                  in_stack_00000008 = *(undefined8 *)puVar2;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (9 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0xb8) =
                                                         in_stack_00000008;
                                                    *(undefined8 *)(lVar8 + 0xb0) = 0x4e60359;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar8 + 0xb8),0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8f08;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (10 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 200) = in_stack_00000008
                                                    ;
                                                    *(undefined8 *)(lVar8 + 0xc0) = 0x4e4035a;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar8 + 200),0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8d30;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar2 = PTR_DAT_03cf88a8;
                                                  if (0xb < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0xd8) =
                                                         in_stack_00000008;
                                                    *(undefined8 *)(lVar8 + 0xd0) = 0x4e4035c;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar8 + 0xd8),0);
                                                  in_stack_00000008 = *(undefined8 *)puVar2;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0xc < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0xe8) =
                                                         in_stack_00000008;
                                                    *(undefined8 *)(lVar8 + 0xe0) = 0x4e4035d;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar8 + 0xe8),0);
                                                  in_stack_00000008 = *unaff_x29;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0xd < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0xf8) =
                                                         in_stack_00000008;
                                                    *(undefined8 *)(lVar8 + 0xf0) = 0x20204e7035e;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            ((undefined8 *)(lVar8 + 0xf8),0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8ef0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0xe < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x100) = 0x4e4035f;
                                                    *(undefined8 *)(lVar8 + 0x108) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x108,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf83c8;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0xf < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x110) = 0x4e80360;
                                                    *(undefined8 *)(lVar8 + 0x118) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x118,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8f58;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x10 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x120) = 0x4e40361;
                                                    *(undefined8 *)(lVar8 + 0x128) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x128,0);
                                                  in_stack_00000008 = *unaff_x27;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar2 = PTR_DAT_03cf8448;
                                                  if (0x11 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x130) = 0x20204e30362;
                                                    *(undefined8 *)(lVar8 + 0x138) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x138,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar2;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x12 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x140) = 0x4e50365;
                                                    *(undefined8 *)(lVar8 + 0x148) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x148,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8870;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x13 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x150) = 0x4e20366;
                                                    *(undefined8 *)(lVar8 + 0x158) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x158,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar1;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x14 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x160) = 0x303036a036a;
                                                    *(undefined8 *)(lVar8 + 0x168) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x168,0);
                                                  in_stack_00000008 = *unaff_x28;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar1 = PTR_DAT_03cf8eb8;
                                                  if (0x15 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x170) = 0x4e5036b;
                                                    *(undefined8 *)(lVar8 + 0x178) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x178,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar1;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar1 = PTR_DAT_03cf88d8;
                                                  if (0x16 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x180) = 0x30303a403a4;
                                                    *(undefined8 *)(lVar8 + 0x188) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x188,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar1;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x17 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 400) = 0x30303a803a8;
                                                    *(undefined8 *)(lVar8 + 0x198) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x198,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf84f8;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar1 = PTR_DAT_03cf8790;
                                                  if (0x18 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x1a0) = 0x30303b503b5;
                                                    *(undefined8 *)(lVar8 + 0x1a8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x1a8,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar1;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x19 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x1b0) = 0x30303b603b6;
                                                    *(undefined8 *)(lVar8 + 0x1b8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x1b8,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8a90;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x1a < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x1c0) = 0x4e60402;
                                                    *(undefined8 *)(lVar8 + 0x1c8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x1c8,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf82e8;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x1b < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x1d0) = 0x4e40417;
                                                    *(undefined8 *)(lVar8 + 0x1d8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x1d8,0);
                                                  in_stack_00000008 = *unaff_x23;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x1c < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x1e0) = 0x4e40474;
                                                    *(undefined8 *)(lVar8 + 0x1e8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x1e8,0);
                                                  in_stack_00000008 = *unaff_x25;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x1d < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x1f0) = 0x4e40475;
                                                    *(undefined8 *)(lVar8 + 0x1f8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x1f8,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8310;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar1 = PTR_DAT_03cf8b70;
                                                  if (0x1e < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x200) = 0x4e40476;
                                                    *(undefined8 *)(lVar8 + 0x208) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x208,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8c00;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar2 = PTR_DAT_03cf8de8;
                                                  if (0x1f < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x210) = 0x4e40477;
                                                    *(undefined8 *)(lVar8 + 0x218) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x218,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8ca8;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x20 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x220) = 0x4e40478;
                                                    *(undefined8 *)(lVar8 + 0x228) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x228,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf85a8;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x21 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x230) = 0x4e40479;
                                                    *(undefined8 *)(lVar8 + 0x238) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x238,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf86a8;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x22 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x240) = 0x4e4047a;
                                                    *(undefined8 *)(lVar8 + 0x248) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x248,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8b48;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x23 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x250) = 0x4e4047b;
                                                    *(undefined8 *)(lVar8 + 600) = in_stack_00000008
                                                    ;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 600,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8ac0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x24 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x260) = 0x4e4047c;
                                                    *(undefined8 *)(lVar8 + 0x268) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x268,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8f88;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x25 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x270) = 0x4e4047d;
                                                    *(undefined8 *)(lVar8 + 0x278) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x278,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf85c0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar4 = PTR_DAT_03cf8d10;
                                                  if (0x26 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x280) = 0x20004b004b0;
                                                    *(undefined8 *)(lVar8 + 0x288) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x288,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar4;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar4 = PTR_DAT_03cf89e0;
                                                  if (0x27 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x290) = 0x4b004b1;
                                                    *(undefined8 *)(lVar8 + 0x298) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x298,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar4;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar4 = PTR_DAT_03cf9000;
                                                  if (0x28 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x2a0) = 0x30304e204e2;
                                                    *(undefined8 *)(lVar8 + 0x2a8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x2a8,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar4;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar4 = PTR_DAT_03cf85e0;
                                                  if (0x29 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x2b0) = 0x30304e304e3;
                                                    *(undefined8 *)(lVar8 + 0x2b8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x2b8,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar4;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar4 = PTR_DAT_03cf8450;
                                                  if (0x2a < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x2c0) = 0x30304e404e4;
                                                    *(undefined8 *)(lVar8 + 0x2c8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x2c8,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar4;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar4 = PTR_DAT_03cf8d60;
                                                  if (0x2b < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x2d0) = 0x30304e504e5;
                                                    *(undefined8 *)(lVar8 + 0x2d8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x2d8,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar4;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x2c < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x2e0) = 0x30304e604e6;
                                                    *(undefined8 *)(lVar8 + 0x2e8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x2e8,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf86f8;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x2d < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x2f0) = 0x30304e704e7;
                                                    *(undefined8 *)(lVar8 + 0x2f8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x2f8,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf88f0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x2e < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x300) = 0x30304e804e8;
                                                    *(undefined8 *)(lVar8 + 0x308) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x308,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf88b0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x2f < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x310) = 0x30304e904e9;
                                                    *(undefined8 *)(lVar8 + 0x318) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x318,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8358;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x30 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 800) = 0x30304ea04ea;
                                                    *(undefined8 *)(lVar8 + 0x328) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x328,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8af0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x31 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x330) = 0x4e42710;
                                                    *(undefined8 *)(lVar8 + 0x338) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x338,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8988;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x32 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x340) = 0x4e4275f;
                                                    *(undefined8 *)(lVar8 + 0x348) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x348,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar2;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar5 = PTR_DAT_03cf8eb0;
                                                  puVar4 = PTR_DAT_03cf8a60;
                                                  puVar2 = PTR_DAT_03cf84b0;
                                                  if (0x33 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x350) = 0x4b02ee0;
                                                    *(undefined8 *)(lVar8 + 0x358) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x358,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar4;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x34 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x360) = 0x4b02ee1;
                                                    *(undefined8 *)(lVar8 + 0x368) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x368,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar1;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x35 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x370) = 0x10104e44e9f;
                                                    *(undefined8 *)(lVar8 + 0x378) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x378,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf85b0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x36 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x380) = 0x4e44f31;
                                                    *(undefined8 *)(lVar8 + 0x388) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x388,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar5;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x37 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x390) = 0x4e44f35;
                                                    *(undefined8 *)(lVar8 + 0x398) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x398,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf85f8;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar6 = PTR_DAT_03cf8ba0;
                                                  puVar5 = PTR_DAT_03cf86b8;
                                                  puVar4 = PTR_DAT_03cf8558;
                                                  puVar1 = PTR_DAT_03cf84a8;
                                                  if (0x38 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x3a0) = 0x4e44f36;
                                                    *(undefined8 *)(lVar8 + 0x3a8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x3a8,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar6;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x39 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x3b0) = 0x4e44f38;
                                                    *(undefined8 *)(lVar8 + 0x3b8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x3b8,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar4;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x3a < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x3c0) = 0x4e44f3c;
                                                    *(undefined8 *)(lVar8 + 0x3c8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x3c8,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar5;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x3b < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x3d0) = 0x4e44f3d;
                                                    *(undefined8 *)(lVar8 + 0x3d8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x3d8,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar1;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x3c < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x3e0) = 0x3a44f42;
                                                    *(undefined8 *)(lVar8 + 1000) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 1000,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8528;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar5 = PTR_DAT_03cf8f90;
                                                  puVar4 = PTR_DAT_03cf8670;
                                                  puVar1 = PTR_DAT_03cf8460;
                                                  if (0x3d < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x3f0) = 0x4e44f49;
                                                    *(undefined8 *)(lVar8 + 0x3f8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x3f8,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar4;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x3e < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x400) = 0x4e84fc4;
                                                    *(undefined8 *)(lVar8 + 0x408) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x408,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf89c0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x3f < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x410) = 0x4e74fc8;
                                                    *(undefined8 *)(lVar8 + 0x418) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x418,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8ef8;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x40 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x420) = 0x30304e35182;
                                                    *(undefined8 *)(lVar8 + 0x428) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x428,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar1;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x41 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x430) = 0x4e45187;
                                                    *(undefined8 *)(lVar8 + 0x438) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x438,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf89b8;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x42 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x440) = 0x4e35221;
                                                    *(undefined8 *)(lVar8 + 0x448) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x448,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8498;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x43 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x450) = 0x30304e3556a;
                                                    *(undefined8 *)(lVar8 + 0x458) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x458,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8fc8;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x44 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x460) = 0x30304e46faf;
                                                    *(undefined8 *)(lVar8 + 0x468) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x468,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8c70;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x45 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x470) = 0x30304e26fb0;
                                                    *(undefined8 *)(lVar8 + 0x478) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x478,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8b10;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x46 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x480) = 0x10104e66fb1;
                                                    *(undefined8 *)(lVar8 + 0x488) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x488,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8ce8;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x47 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x490) = 0x30304e96fb2;
                                                    *(undefined8 *)(lVar8 + 0x498) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x498,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8d40;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x48 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x4a0) = 0x30304e36fb3;
                                                    *(undefined8 *)(lVar8 + 0x4a8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x4a8,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8350;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x49 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x4b0) = 0x30304e86fb4;
                                                    *(undefined8 *)(lVar8 + 0x4b8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x4b8,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8470;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x4a < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x4c0) = 0x30304e56fb5;
                                                    *(undefined8 *)(lVar8 + 0x4c8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x4c8,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8d18;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x4b < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x4d0) = 0x20204e76fb6;
                                                    *(undefined8 *)(lVar8 + 0x4d8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x4d8,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf86d8;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x4c < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x4e0) = 0x30304e66fb7;
                                                    *(undefined8 *)(lVar8 + 0x4e8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x4e8,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8fe0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x4d < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x4f0) = 0x30104e46fbd;
                                                    *(undefined8 *)(lVar8 + 0x4f8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x4f8,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8780;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x4e < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x500) = 0x30304e796c6;
                                                    *(undefined8 *)(lVar8 + 0x508) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x508,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar5;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar1 = PTR_DAT_03cf8ff8;
                                                  if (0x4f < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x510) = 0x10103a4c42c;
                                                    *(undefined8 *)(lVar8 + 0x518) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x518,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar1;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x50 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x520) = 0x30103a4c42d;
                                                    *(undefined8 *)(lVar8 + 0x528) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x528,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar5;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x51 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x530) = 0x3a4c42e;
                                                    *(undefined8 *)(lVar8 + 0x538) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x538,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar2;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x52 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x540) = 0x30303a4cadc;
                                                    *(undefined8 *)(lVar8 + 0x548) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x548,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8f18;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar1 = PTR_DAT_03cf8388;
                                                  if (0x53 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x550) = 0x10103b5caed;
                                                    *(undefined8 *)(lVar8 + 0x558) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x558,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar1;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x54 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x560) = 0x30303a8d698;
                                                    *(undefined8 *)(lVar8 + 0x568) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x568,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf88f8;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  puVar1 = PTR_DAT_03cf8698;
                                                  if (0x55 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x570) = 0xdeaadeaa;
                                                    *(undefined8 *)(lVar8 + 0x578) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x578,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8398;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x56 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x580) = 0xdeabdeab;
                                                    *(undefined8 *)(lVar8 + 0x588) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x588,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8b30;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x57 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x590) = 0xdeacdeac;
                                                    *(undefined8 *)(lVar8 + 0x598) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x598,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8c58;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x58 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x5a0) = 0xdeaddead;
                                                    *(undefined8 *)(lVar8 + 0x5a8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x5a8,0);
                                                  in_stack_00000008 = *(undefined8 *)puVar1;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x59 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x5b0) = 0xdeaedeae;
                                                    *(undefined8 *)(lVar8 + 0x5b8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x5b8,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8ae8;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x5a < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x5c0) = 0xdeafdeaf;
                                                    *(undefined8 *)(lVar8 + 0x5c8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x5c8,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8598;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x5b < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x5d0) = 0xdeb0deb0;
                                                    *(undefined8 *)(lVar8 + 0x5d8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x5d8,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8e98;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x5c < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x5e0) = 0xdeb1deb1;
                                                    *(undefined8 *)(lVar8 + 0x5e8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x5e8,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8368;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x5d < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x5f0) = 0xdeb2deb2;
                                                    *(undefined8 *)(lVar8 + 0x5f8) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x5f8,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8cd8;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x5e < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x600) = 0xdeb3deb3;
                                                    *(undefined8 *)(lVar8 + 0x608) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x608,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8808;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x5f < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x610) = 0x10104b0fde8;
                                                    *(undefined8 *)(lVar8 + 0x618) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x618,0);
                                                  in_stack_00000008 =
                                                       *(undefined8 *)PTR_DAT_03cf8c40;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008);
                                                  if (0x60 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x620) = 0x30304b0fde9;
                                                    *(undefined8 *)(lVar8 + 0x628) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x628,0);
                                                  in_stack_00000008 = 0;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (&stack0x00000008,0);
                                                  puVar1 = PTR_DAT_03cc16b0;
                                                  if (0x61 < *(uint *)(lVar8 + 0x18)) {
                                                    *(undefined8 *)(lVar8 + 0x630) = 0;
                                                    *(undefined8 *)(lVar8 + 0x638) =
                                                         in_stack_00000008;
                                                                                                        
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (lVar8 + 0x638,0);
                                                  plVar9 = (long *)(*(long *)(*(long *)puVar3 + 0xb8
                                                                             ) + 8);
                                                  *plVar9 = lVar8;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (plVar9,lVar8);
                                                  iVar7 = 
                                                  Newtonsoft_Json_JsonTextWriter__WritePropertyName
                                                            ();
                                                  *(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10)
                                                       = iVar7 + -1;
                                                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                                    thunk_FUN_01a58e78();
                                                  }
                                                  if (DAT_0411f481 == '\0') {
                                                    FUN_01ab69ac(PTR_DAT_03cc16b0);
                                                    DAT_0411f481 = '\x01';
                                                  }
                                                  puVar6 = PTR_DAT_03cf82d8;
                                                  puVar5 = PTR_DAT_03cf82d0;
                                                  puVar4 = PTR_DAT_03cf82c8;
                                                  puVar2 = PTR_DAT_03cc87e0;
                                                  lVar8 = *(long *)puVar1;
                                                  if (*(int *)(lVar8 + 0xe0) == 0) {
                                                    thunk_FUN_01a58e78();
                                                    lVar8 = *(long *)puVar1;
                                                  }
                                                  uVar12 = *(undefined8 *)
                                                            (*(long *)(lVar8 + 0xb8) + 0x18);
                                                  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0219a51c(uVar11,uVar12,*(undefined8 *)puVar4);
                                                  puVar10 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x18);
                                                  *puVar10 = uVar11;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (puVar10,uVar11);
                                                  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_0219a4f0(uVar11,*(undefined8 *)puVar5);
                                                  puVar10 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar3 + 0xb8) +
                                                            0x20);
                                                  *puVar10 = uVar11;
                                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                            (puVar10,uVar11);
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


