/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreClearRoomDelegate$$EndInvoke
ENTRY_POINT: 077156f0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreClearRoomDelegate__EndInvoke(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined1 in_w8;
  ulong uVar17;
  int *piVar18;
  long unaff_x19;
  long unaff_x20;
  long lVar19;
  undefined8 uStack0000000000000008;
  double dStack0000000000000010;
  double dStack0000000000000018;
  double dStack0000000000000020;
  double dStack0000000000000028;
  double dStack0000000000000030;
  double dStack0000000000000038;
  double dStack0000000000000040;
  double dStack0000000000000048;
  double dStack0000000000000050;
  double dStack0000000000000058;
  double dStack0000000000000060;
  double dStack0000000000000068;
  double dStack0000000000000078;
  
  *(undefined1 *)(unaff_x20 + 0x126) = in_w8;
  puVar2 = PTR_DAT_09f21ad8;
  dStack0000000000000030 = 0.0;
  dStack0000000000000020 = 0.0;
  dStack0000000000000028 = 0.0;
  dStack0000000000000010 = 0.0;
  dStack0000000000000018 = 0.0;
  uStack0000000000000008 = 0;
  dStack0000000000000078 = 0.0;
  dStack0000000000000060 = 0.0;
  dStack0000000000000068 = 0.0;
  dStack0000000000000050 = 0.0;
  dStack0000000000000058 = 0.0;
  dStack0000000000000040 = 0.0;
  dStack0000000000000048 = 0.0;
  dStack0000000000000038 = 0.0;
  lVar19 = *(long *)(unaff_x19 + 0x60);
  if ((lVar19 != 0) && (*(long *)(lVar19 + 0x90) != 0)) {
    uStack0000000000000008 = FUN_087daba0(*(long *)(lVar19 + 0x90),0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)puVar2);
    }
    dStack0000000000000078 = (double)FUN_07a54e9c(&stack0x00000008,0);
    dStack0000000000000078 = dStack0000000000000078 + 0.0;
    if (*(long *)(lVar19 + 0x98) != 0) {
      uStack0000000000000008 = FUN_087daba0(*(long *)(lVar19 + 0x98),0);
      dStack0000000000000068 = (double)FUN_07a54e9c(&stack0x00000008,0);
      dStack0000000000000068 = dStack0000000000000068 + 0.0;
      if (*(long *)(lVar19 + 0xa0) != 0) {
        uStack0000000000000008 = FUN_087daba0(*(long *)(lVar19 + 0xa0),0);
        dStack0000000000000040 = (double)FUN_07a54e9c(&stack0x00000008,0);
        dStack0000000000000040 = dStack0000000000000040 + 0.0;
        if (*(long *)(lVar19 + 0xa8) != 0) {
          uStack0000000000000008 = FUN_087daba0(*(long *)(lVar19 + 0xa8),0);
          dStack0000000000000038 = (double)FUN_07a54e9c(&stack0x00000008,0);
          dStack0000000000000038 = dStack0000000000000038 + 0.0;
          if (*(long *)(lVar19 + 0xb0) != 0) {
            uStack0000000000000008 = FUN_087daba0(*(long *)(lVar19 + 0xb0),0);
            dStack0000000000000030 = (double)FUN_07a54e9c(&stack0x00000008,0);
            dStack0000000000000030 = dStack0000000000000030 + 0.0;
            if (*(long *)(lVar19 + 0xb8) != 0) {
              uStack0000000000000008 = FUN_087daba0(*(long *)(lVar19 + 0xb8),0);
              dStack0000000000000028 = (double)FUN_07a54e9c(&stack0x00000008,0);
              dStack0000000000000028 = dStack0000000000000028 + 0.0;
              if (*(long *)(lVar19 + 0xc0) != 0) {
                uStack0000000000000008 = FUN_087daba0(*(long *)(lVar19 + 0xc0),0);
                dStack0000000000000060 = (double)FUN_07a54e9c(&stack0x00000008,0);
                dStack0000000000000060 = dStack0000000000000060 + 0.0;
                if (*(long *)(lVar19 + 200) != 0) {
                  uStack0000000000000008 = FUN_087daba0(*(long *)(lVar19 + 200),0);
                  dStack0000000000000058 = (double)FUN_07a54e9c(&stack0x00000008,0);
                  dStack0000000000000058 = dStack0000000000000058 + 0.0;
                  if (*(long *)(lVar19 + 0xd0) != 0) {
                    uStack0000000000000008 = FUN_087daba0(*(long *)(lVar19 + 0xd0),0);
                    dStack0000000000000050 = (double)FUN_07a54e9c(&stack0x00000008,0);
                    dStack0000000000000050 = dStack0000000000000050 + 0.0;
                    if (*(long *)(lVar19 + 0xd8) != 0) {
                      uStack0000000000000008 = FUN_087daba0(*(long *)(lVar19 + 0xd8),0);
                      dStack0000000000000048 = (double)FUN_07a54e9c(&stack0x00000008,0);
                      dStack0000000000000048 = dStack0000000000000048 + 0.0;
                      if (*(long *)(lVar19 + 0xe0) != 0) {
                        uStack0000000000000008 = FUN_087daba0(*(long *)(lVar19 + 0xe0),0);
                        dStack0000000000000020 = (double)FUN_07a54e9c(&stack0x00000008,0);
                        dStack0000000000000020 = dStack0000000000000020 + 0.0;
                        if (*(long *)(lVar19 + 0xe8) != 0) {
                          uStack0000000000000008 = FUN_087daba0(*(long *)(lVar19 + 0xe8),0);
                          dStack0000000000000018 = (double)FUN_07a54e9c(&stack0x00000008,0);
                          puVar2 = PTR_DAT_09f20ed0;
                          dStack0000000000000018 = dStack0000000000000018 + 0.0;
                          if (*(long *)(lVar19 + 0xf0) != 0) {
                            uStack0000000000000008 = FUN_087daba0(*(long *)(lVar19 + 0xf0),0);
                            dStack0000000000000010 = (double)FUN_07a54e9c(&stack0x00000008,0);
                            dStack0000000000000010 = dStack0000000000000010 + 0.0;
                            plVar13 = (long *)thunk_FUN_0448520c(*(undefined8 *)puVar2);
                            FUN_078c1634(plVar13,0);
                            if ((*(long *)(unaff_x19 + 0x60) != 0) &&
                               (plVar14 = (long *)FUN_07715da0(), puVar3 = PTR_DAT_09f30b30,
                               puVar2 = PTR_DAT_09f30b10, puVar1 = (undefined8 *)PTR_DAT_09f30ae0,
                               plVar14 != (long *)0x0)) {
                              lVar19 = *plVar14;
                              uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
                              if (uVar17 != 0) {
                                piVar18 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_09f30ab8) {
                                    puVar15 = (undefined8 *)
                                              (lVar19 + (long)(*piVar18 + 0x2c) * 0x10 + 0x138);
                                    goto LAB_07715a10;
                                  }
                                  uVar17 = uVar17 - 1;
                                  piVar18 = piVar18 + 4;
                                } while (uVar17 != 0);
                              }
                              puVar15 = (undefined8 *)
                                        FUN_044822ac(plVar14,*(long *)PTR_DAT_09f30ab8,0x2c);
LAB_07715a10:
                              iVar12 = (*(code *)*puVar15)(plVar14,puVar15[1]);
                              if (iVar12 != 1) {
                                puVar1 = (undefined8 *)puVar2;
                              }
                              uVar16 = FUN_078a7764(*(undefined8 *)puVar3,*puVar1,0);
                              puVar11 = PTR_DAT_09f30b38;
                              puVar10 = PTR_DAT_09f30b18;
                              puVar9 = PTR_DAT_09f30b00;
                              puVar8 = PTR_DAT_09f30af8;
                              puVar7 = PTR_DAT_09f30af0;
                              puVar6 = PTR_DAT_09f30ae8;
                              puVar5 = PTR_DAT_09f30ad8;
                              puVar4 = PTR_DAT_09f30ad0;
                              puVar3 = PTR_DAT_09f30ac8;
                              puVar2 = PTR_DAT_09f30ac0;
                              if (plVar13 != (long *)0x0) {
                                FUN_078c335c(plVar13,uVar16,0);
                                uVar16 = FUN_07a2565c(&stack0x00000078,0);
                                uVar16 = FUN_078a7764(*(undefined8 *)puVar7,uVar16,0);
                                FUN_078c335c(plVar13,uVar16,0);
                                uVar16 = FUN_07a2565c(&stack0x00000068,0);
                                uVar16 = FUN_078a7764(*(undefined8 *)puVar11,uVar16,0);
                                FUN_078c335c(plVar13,uVar16,0);
                                uVar16 = FUN_07a2565c(&stack0x00000040,0);
                                uVar16 = FUN_078a7764(*(undefined8 *)puVar2,uVar16,0);
                                FUN_078c335c(plVar13,uVar16,0);
                                uVar16 = FUN_07a2565c(&stack0x00000038,0);
                                uVar16 = FUN_078a7764(*(undefined8 *)puVar9,uVar16,0);
                                FUN_078c335c(plVar13,uVar16,0);
                                uVar16 = FUN_07a2565c(&stack0x00000030,0);
                                uVar16 = FUN_078a7764(*(undefined8 *)puVar8,uVar16,0);
                                FUN_078c335c(plVar13,uVar16,0);
                                uVar16 = FUN_07a2565c(&stack0x00000028,0);
                                uVar16 = FUN_078a7764(*(undefined8 *)puVar4,uVar16,0);
                                FUN_078c335c(plVar13,uVar16,0);
                                uVar16 = FUN_07a2565c(&stack0x00000060,0);
                                uVar16 = FUN_078a7764(*(undefined8 *)puVar5,uVar16,0);
                                FUN_078c335c(plVar13,uVar16,0);
                                uVar16 = FUN_07a2565c(&stack0x00000058,0);
                                uVar16 = FUN_078a7764(*(undefined8 *)puVar10,uVar16,0);
                                FUN_078c335c(plVar13,uVar16,0);
                                uVar16 = FUN_07a2565c(&stack0x00000050,0);
                                uVar16 = FUN_078a7764(*(undefined8 *)puVar6,uVar16,0);
                                FUN_078c335c(plVar13,uVar16,0);
                                uVar16 = FUN_07a2565c(&stack0x00000048,0);
                                uVar16 = FUN_078a7764(*(undefined8 *)puVar3,uVar16,0);
                                FUN_078c335c(plVar13,uVar16,0);
                                FUN_078c335c(plVar13,*(undefined8 *)PTR_DAT_09f30b40,0);
                                uVar16 = FUN_07a2565c(&stack0x00000020,0);
                                uVar16 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30b20,uVar16,0);
                                FUN_078c335c(plVar13,uVar16,0);
                                uVar16 = FUN_07a2565c(&stack0x00000018,0);
                                uVar16 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30b28,uVar16,0);
                                FUN_078c335c(plVar13,uVar16,0);
                                uVar16 = FUN_07a2565c(&stack0x00000010,0);
                                uVar16 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f30b08,uVar16,0);
                                FUN_078c335c(plVar13,uVar16,0);
                                uVar16 = (**(code **)(*plVar13 + 0x168))
                                                   (plVar13,*(undefined8 *)(*plVar13 + 0x170));
                                if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                                  thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
                                }
                                FUN_094c652c(uVar16,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


