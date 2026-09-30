/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreOnOpenXrEventDelegate$$BeginInvoke
ENTRY_POINT: 077157b0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreOnOpenXrEventDelegate__BeginInvoke
               (undefined8 param_1)

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
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack0000000000000008;
  double in_stack_00000010;
  double in_stack_00000018;
  double in_stack_00000020;
  double in_stack_00000028;
  double in_stack_00000030;
  double in_stack_00000038;
  double in_stack_00000040;
  double in_stack_00000048;
  double in_stack_00000050;
  double in_stack_00000058;
  double in_stack_00000060;
  
  uStack0000000000000008 = param_1;
  in_stack_00000040 = (double)FUN_07a54e9c(&stack0x00000008,0);
  in_stack_00000040 = in_stack_00000040 + 0.0;
  if (*(long *)(unaff_x20 + 0xa8) != 0) {
    uStack0000000000000008 = FUN_087daba0(*(long *)(unaff_x20 + 0xa8),0);
    in_stack_00000038 = (double)FUN_07a54e9c(&stack0x00000008,0);
    in_stack_00000038 = in_stack_00000038 + 0.0;
    if (*(long *)(unaff_x20 + 0xb0) != 0) {
      uStack0000000000000008 = FUN_087daba0(*(long *)(unaff_x20 + 0xb0),0);
      in_stack_00000030 = (double)FUN_07a54e9c(&stack0x00000008,0);
      in_stack_00000030 = in_stack_00000030 + 0.0;
      if (*(long *)(unaff_x20 + 0xb8) != 0) {
        uStack0000000000000008 = FUN_087daba0(*(long *)(unaff_x20 + 0xb8),0);
        in_stack_00000028 = (double)FUN_07a54e9c(&stack0x00000008,0);
        in_stack_00000028 = in_stack_00000028 + 0.0;
        if (*(long *)(unaff_x20 + 0xc0) != 0) {
          uStack0000000000000008 = FUN_087daba0(*(long *)(unaff_x20 + 0xc0),0);
          in_stack_00000060 = (double)FUN_07a54e9c(&stack0x00000008,0);
          in_stack_00000060 = in_stack_00000060 + 0.0;
          if (*(long *)(unaff_x20 + 200) != 0) {
            uStack0000000000000008 = FUN_087daba0(*(long *)(unaff_x20 + 200),0);
            in_stack_00000058 = (double)FUN_07a54e9c(&stack0x00000008,0);
            in_stack_00000058 = in_stack_00000058 + 0.0;
            if (*(long *)(unaff_x20 + 0xd0) != 0) {
              uStack0000000000000008 = FUN_087daba0(*(long *)(unaff_x20 + 0xd0),0);
              in_stack_00000050 = (double)FUN_07a54e9c(&stack0x00000008,0);
              in_stack_00000050 = in_stack_00000050 + 0.0;
              if (*(long *)(unaff_x20 + 0xd8) != 0) {
                uStack0000000000000008 = FUN_087daba0(*(long *)(unaff_x20 + 0xd8),0);
                in_stack_00000048 = (double)FUN_07a54e9c(&stack0x00000008,0);
                in_stack_00000048 = in_stack_00000048 + 0.0;
                if (*(long *)(unaff_x20 + 0xe0) != 0) {
                  uStack0000000000000008 = FUN_087daba0(*(long *)(unaff_x20 + 0xe0),0);
                  in_stack_00000020 = (double)FUN_07a54e9c(&stack0x00000008,0);
                  in_stack_00000020 = in_stack_00000020 + 0.0;
                  if (*(long *)(unaff_x20 + 0xe8) != 0) {
                    uStack0000000000000008 = FUN_087daba0(*(long *)(unaff_x20 + 0xe8),0);
                    in_stack_00000018 = (double)FUN_07a54e9c(&stack0x00000008,0);
                    puVar2 = PTR_DAT_09f20ed0;
                    in_stack_00000018 = in_stack_00000018 + 0.0;
                    if (*(long *)(unaff_x20 + 0xf0) != 0) {
                      uStack0000000000000008 = FUN_087daba0(*(long *)(unaff_x20 + 0xf0),0);
                      in_stack_00000010 = (double)FUN_07a54e9c(&stack0x00000008,0);
                      in_stack_00000010 = in_stack_00000010 + 0.0;
                      plVar13 = (long *)thunk_FUN_0448520c(*(undefined8 *)puVar2);
                      FUN_078c1634(plVar13,0);
                      if ((*(long *)(unaff_x19 + 0x60) != 0) &&
                         (plVar14 = (long *)FUN_07715da0(), puVar3 = PTR_DAT_09f30b30,
                         puVar2 = PTR_DAT_09f30b10, puVar1 = (undefined8 *)PTR_DAT_09f30ae0,
                         plVar14 != (long *)0x0)) {
                        lVar17 = *plVar14;
                        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
                        if (uVar18 != 0) {
                          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_09f30ab8) {
                              puVar15 = (undefined8 *)
                                        (lVar17 + (long)(*piVar19 + 0x2c) * 0x10 + 0x138);
                              goto LAB_07715a10;
                            }
                            uVar18 = uVar18 - 1;
                            piVar19 = piVar19 + 4;
                          } while (uVar18 != 0);
                        }
                        puVar15 = (undefined8 *)FUN_044822ac(plVar14,*(long *)PTR_DAT_09f30ab8,0x2c)
                        ;
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
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


