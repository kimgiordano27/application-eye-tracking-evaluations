/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry$$Init
ENTRY_POINT: 0145ffa8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry__Init
          (ulong param_1,long param_2,long param_3,undefined8 param_4,long param_5,
          undefined8 param_6,int param_7,long param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long *unaff_x19;
  uint uVar16;
  long unaff_x20;
  uint uVar17;
  long unaff_x21;
  undefined8 uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  float fVar22;
  float fVar23;
  long lStack0000000000000018;
  long lStack0000000000000020;
  long lStack0000000000000028;
  int iStack0000000000000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  int in_stack_00000050;
  undefined4 uStack000000000000005c;
  
  lStack0000000000000018 = param_2;
  lStack0000000000000020 = param_8;
  lStack0000000000000028 = param_5;
  iStack0000000000000038 = param_7;
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlalh_lane_s16__);
    thunk_FUN_00d48444(StringLiteral_11624);
    thunk_FUN_00d48444(StringLiteral_2590);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_s16__);
    thunk_FUN_00d48444(
                      System_ComponentModel_Design_DesignerOptionService_DesignerOptionConverter_OptionPropertyDescriptor_TypeInfo
                      );
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<float>__);
    thunk_FUN_00d48444(
                      System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanUInt64_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_3145);
    thunk_FUN_00d48444(PTR_DAT_033f38b8);
    thunk_FUN_00d48444(Method_Unity_Jobs_IJobForExtensions_ScheduleParallel<SliceCombineJob>__);
    thunk_FUN_00d48444(PTR_DAT_033f67f0);
    thunk_FUN_00d48444(PTR_DAT_033f1130);
    *(undefined1 *)(unaff_x20 + 0xaa2) = 1;
  }
  uStack000000000000005c = 0;
  if (unaff_x21 != 0) {
    if (0 < (int)*(ulong *)(unaff_x21 + 0x18)) {
      uVar19 = 0;
      uVar12 = *(ulong *)(unaff_x21 + 0x18) & 0xffffffff;
      lVar14 = lStack0000000000000018;
      plVar10 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      do {
        if (uVar12 <= uVar19) goto LAB_01460a50;
        if (*(char *)(unaff_x21 + uVar19 + 0x20) != '\0') {
          if ((lVar14 == 0) || (lVar13 = *(long *)(lVar14 + 0x20), lVar13 == 0)) goto LAB_01460a4c;
          if (*(uint *)(lVar13 + 0x18) <= uVar19) {
LAB_01460a50:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          if (*(long *)(lVar14 + 0x28) == 0) goto LAB_01460a4c;
          if (*(uint *)(*(long *)(lVar14 + 0x28) + 0x18) <= uVar19) goto LAB_01460a50;
          iVar3 = *(int *)(lVar13 + uVar19 * 4 + 0x20);
          if (unaff_x19 != (long *)0x0) {
            lVar13 = *unaff_x19;
            uVar12 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar12 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_2590) {
                  puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0x15) * 0x10 + 0x138);
                  goto LAB_01460160;
                }
                uVar12 = uVar12 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)FUN_00d59724();
LAB_01460160:
            uVar12 = (*(code *)*puVar7)();
            if ((uVar12 & 1) == 0) {
              in_stack_00000040 =
                   *(long *)Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__;
              in_stack_00000048 = 0xffffffffffffffff;
              in_stack_00000050 = iVar3;
              uVar11 = FUN_017a7f78(&stack0x00000040,0);
              uVar9 = *(undefined8 *)PTR_DAT_033f1130;
LAB_014609f4:
              uVar11 = FUN_015f5b28(uVar9,uVar11,0);
LAB_014609fc:
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_026610e4(uVar11,0);
              return 0;
            }
          }
          if ((param_3 == 0) || (lVar13 = *(long *)(lVar14 + 0x30), lVar13 == 0)) goto LAB_01460a4c;
          if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_01460a50;
          lVar13 = lVar13 + uVar19 * 8;
          fVar22 = *(float *)(lVar13 + 0x20);
          fVar23 = *(float *)(lVar13 + 0x24);
          iVar1 = -0x80000000;
          if (fVar22 != INFINITY) {
            iVar1 = (int)fVar22;
          }
          iVar2 = -0x80000000;
          if (fVar23 != INFINITY) {
            iVar2 = (int)fVar23;
          }
          uVar17 = (uint)*(undefined8 *)(param_3 + 0x18);
          if (0 < (int)uVar17) {
            if (uVar17 != 0) {
              uVar16 = 0;
              do {
                plVar20 = (long *)(param_3 + (long)(int)uVar16 * 8 + 0x20);
                if ((*plVar20 == 0) || (lVar14 = *(long *)(*plVar20 + 0x10), lVar14 == 0))
                goto LAB_01460a4c;
                if (*(uint *)(lVar14 + 0x18) <= uVar19) break;
                plVar21 = *(long **)(lVar14 + uVar19 * 8 + 0x20);
                if (*(int *)(*plVar10 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar12 = FUN_02681b9c(plVar21,0,0);
                if ((uVar12 & 1) != 0) {
                  uVar12 = FUN_013f52d4(plVar21,0);
                  if ((uVar12 & 1) == 0) {
                    if (unaff_x19 == (long *)0x0) {
                      uVar9 = *(undefined8 *)
                               Method_Unity_Jobs_IJobForExtensions_ScheduleParallel<SliceCombineJob>__
                      ;
                      if (plVar21 == (long *)0x0) {
                        uVar11 = 0;
                      }
                      else {
                        uVar11 = (**(code **)(*plVar21 + 0x168))
                                           (plVar21,*(undefined8 *)(*plVar21 + 0x170));
                      }
                      goto LAB_014609f4;
                    }
                    lVar14 = *unaff_x19;
                    uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
                    if (uVar12 != 0) {
                      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_2590) {
                          puVar7 = (undefined8 *)(lVar14 + (long)(*piVar15 + 2) * 0x10 + 0x138);
                          goto LAB_01460290;
                        }
                        uVar12 = uVar12 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar12 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_00d59724();
LAB_01460290:
                    (*(code *)*puVar7)();
                  }
                  if (unaff_x19 == (long *)0x0) {
                    uVar12 = 1;
                  }
                  else {
                    lVar14 = *unaff_x19;
                    uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
                    if (uVar12 != 0) {
                      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_2590) {
                          puVar7 = (undefined8 *)(lVar14 + (long)(*piVar15 + 0x13) * 0x10 + 0x138);
                          goto LAB_0146030c;
                        }
                        uVar12 = uVar12 - 1;
                        piVar15 = piVar15 + 4;
                      } while (uVar12 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_00d59724();
LAB_0146030c:
                    uVar12 = (*(code *)*puVar7)();
                    uVar12 = uVar12 & 0xffffffff;
                  }
                  if (iStack0000000000000038 < 5) {
                    uVar8 = FUN_0269e56c(0);
                    if (plVar21 == (long *)0x0) goto LAB_01460a4c;
                  }
                  else {
                    if ((plVar21 == (long *)0x0) || (plVar21 == (long *)0x0)) goto LAB_01460a4c;
                    uVar18 = *(undefined8 *)PTR_DAT_033f67f0;
                    uVar11 = (**(code **)(*plVar21 + 0x168))
                                       (plVar21,*(undefined8 *)(*plVar21 + 0x170));
                    in_stack_00000050 = FUN_026709f8(plVar21,0);
                    in_stack_00000040 =
                         *(long *)Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__;
                    in_stack_00000048 = 0xffffffffffffffff;
                    uVar9 = FUN_017a7f78(&stack0x00000040,0);
                    uVar11 = FUN_0160073c(uVar18,uVar11,
                                          *(undefined8 *)
                                           Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<float>__
                                          ,uVar9,0);
                    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)StringLiteral_302);
                    }
                    FUN_02660dac(uVar11,0);
                    uVar8 = FUN_0269e56c(0);
                  }
                  iVar6 = (**(code **)(*plVar21 + 0x188))(plVar21,*(undefined8 *)(*plVar21 + 400));
                  plVar10 = (long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
                  if ((uVar8 & 1) == 0) {
                    if (((iVar6 == iVar1) &&
                        (iVar6 = (**(code **)(*plVar21 + 0x1a8))
                                           (plVar21,*(undefined8 *)(*plVar21 + 0x1b0)),
                        iVar6 == iVar2)) &&
                       (((uVar12 & 1) != 0 || (iVar6 = FUN_026709f8(plVar21,0), iVar6 == iVar3)))) {
                      iVar6 = FUN_026709f8(plVar21,0);
                      plVar10 = (long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                      ;
                      if (iVar6 != iVar3) {
                        if (((lStack0000000000000028 == 0) ||
                            (FUN_0132138c(lStack0000000000000028,uVar19 & 0xffffffff,
                                          &stack0x00000040,*(undefined8 *)StringLiteral_11624),
                            in_stack_00000040 == 0)) || (unaff_x19 == (long *)0x0))
                        goto LAB_01460a4c;
                        lVar14 = *unaff_x19;
                        uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
                        if (uVar12 != 0) {
                          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_2590) {
                              puVar7 = (undefined8 *)(lVar14 + (long)(*piVar15 + 4) * 0x10 + 0x138);
                              goto LAB_014606d4;
                            }
                            uVar12 = uVar12 - 1;
                            piVar15 = piVar15 + 4;
                          } while (uVar12 != 0);
                        }
                        puVar7 = (undefined8 *)FUN_00d59724();
LAB_014606d4:
                        (*(code *)*puVar7)();
                      }
                    }
                    else {
                      if (*(uint *)(param_3 + 0x18) <= uVar16) break;
                      if ((*plVar20 == 0) || (lStack0000000000000028 == 0)) goto LAB_01460a4c;
                      plVar10 = *(long **)(*plVar20 + 0x10);
                      FUN_0132138c(lStack0000000000000028,uVar19 & 0xffffffff,&stack0x00000040,
                                   *(undefined8 *)StringLiteral_11624);
                      if (unaff_x19 == (long *)0x0) goto LAB_01460a4c;
                      lVar14 = *unaff_x19;
                      uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
                      if (uVar12 != 0) {
                        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_2590) {
                            puVar7 = (undefined8 *)(lVar14 + (long)(*piVar15 + 0x14) * 0x10 + 0x138)
                            ;
                            goto LAB_014605c0;
                          }
                          uVar12 = uVar12 - 1;
                          piVar15 = piVar15 + 4;
                        } while (uVar12 != 0);
                      }
                      puVar7 = (undefined8 *)FUN_00d59724();
LAB_014605c0:
                      lVar14 = (*(code *)*puVar7)();
                      if (plVar10 == (long *)0x0) goto LAB_01460a4c;
                      if ((lVar14 != 0) &&
                         (lVar13 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar10 + 0x40)),
                         lVar13 == 0)) goto LAB_01460a54;
                      if ((*(uint *)(plVar10 + 3) <= uVar19) ||
                         (plVar10[uVar19 + 4] = lVar14,
                         plVar10 = (long *)
                                   System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                         , *(uint *)(param_3 + 0x18) <= uVar16)) break;
                      if ((*plVar20 == 0) || (lVar14 = *(long *)(*plVar20 + 0x10), lVar14 == 0))
                      goto LAB_01460a4c;
                      if (*(uint *)(lVar14 + 0x18) <= uVar19) break;
                      if (lStack0000000000000020 == 0) goto LAB_01460a4c;
                      FUN_00bc0bd0(lStack0000000000000020,
                                   *(undefined8 *)(lVar14 + uVar19 * 8 + 0x20),
                                   *(undefined8 *)
                                    Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlalh_lane_s16__);
                    }
                  }
                  else if (((iVar6 != iVar1) ||
                           (iVar6 = (**(code **)(*plVar21 + 0x1a8))
                                              (plVar21,*(undefined8 *)(*plVar21 + 0x1b0)),
                           iVar6 != iVar2)) || (iVar6 = FUN_026709f8(plVar21,0), iVar6 != iVar3)) {
                    plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
                    puVar5 = StringLiteral_3145;
                    puVar4 = PTR_DAT_033f38b8;
                    if (plVar10 == (long *)0x0) goto LAB_01460a4c;
                    if ((*(long *)StringLiteral_3145 == 0) ||
                       (lVar14 = thunk_FUN_00d6225c(*(long *)StringLiteral_3145,
                                                    *(undefined8 *)(*plVar10 + 0x40)), lVar14 != 0))
                    {
                      if ((int)plVar10[3] == 0) break;
                      plVar10[4] = *(long *)puVar5;
                      lVar14 = FUN_0268b6ac(plVar21,0);
                      if ((lVar14 == 0) ||
                         (lVar13 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar10 + 0x40)),
                         lVar13 != 0)) {
                        uVar17 = *(uint *)(plVar10 + 3);
                        if (uVar17 < 2) break;
                        plVar10[5] = lVar14;
                        puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_s16__;
                        if (*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_s16__ != 0) {
                          lVar14 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_s16__
                                                  ,*(undefined8 *)(*plVar10 + 0x40));
                          if (lVar14 == 0) goto LAB_01460a54;
                          uVar17 = *(uint *)(plVar10 + 3);
                        }
                        if (uVar17 < 3) break;
                        plVar10[6] = *(long *)puVar5;
                        uStack000000000000005c =
                             (**(code **)(*plVar21 + 0x188))
                                       (plVar21,*(undefined8 *)(*plVar21 + 400));
                        lVar14 = FUN_0176eb1c(&stack0x0000005c,0);
                        if ((lVar14 == 0) ||
                           (lVar13 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar10 + 0x40)),
                           lVar13 != 0)) {
                          uVar17 = *(uint *)(plVar10 + 3);
                          if (uVar17 < 4) break;
                          plVar10[7] = lVar14;
                          if (*(long *)puVar4 != 0) {
                            lVar14 = thunk_FUN_00d6225c(*(long *)puVar4,
                                                        *(undefined8 *)(*plVar10 + 0x40));
                            if (lVar14 == 0) goto LAB_01460a54;
                            uVar17 = *(uint *)(plVar10 + 3);
                          }
                          if (uVar17 < 5) break;
                          plVar10[8] = *(long *)puVar4;
                          uStack000000000000005c =
                               (**(code **)(*plVar21 + 0x1a8))
                                         (plVar21,*(undefined8 *)(*plVar21 + 0x1b0));
                          lVar14 = FUN_0176eb1c(&stack0x0000005c,0);
                          if ((lVar14 == 0) ||
                             (lVar13 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar10 + 0x40)),
                             lVar13 != 0)) {
                            uVar17 = *(uint *)(plVar10 + 3);
                            if (uVar17 < 6) break;
                            plVar10[9] = lVar14;
                            if (*(long *)puVar4 != 0) {
                              lVar14 = thunk_FUN_00d6225c(*(long *)puVar4,
                                                          *(undefined8 *)(*plVar10 + 0x40));
                              if (lVar14 == 0) goto LAB_01460a54;
                              uVar17 = *(uint *)(plVar10 + 3);
                            }
                            if (uVar17 < 7) break;
                            plVar10[10] = *(long *)puVar4;
                            in_stack_00000050 = FUN_026709f8(plVar21,0);
                            in_stack_00000040 =
                                 *(long *)
                                  Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__;
                            in_stack_00000048 = 0xffffffffffffffff;
                            lVar14 = FUN_017a7f78(&stack0x00000040,0);
                            if ((lVar14 == 0) ||
                               (lVar13 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar10 + 0x40))
                               , lVar13 != 0)) {
                              if (*(uint *)(plVar10 + 3) < 8) break;
                              plVar10[0xb] = lVar14;
                              uVar11 = FUN_01600844(plVar10,0);
                              goto LAB_014609fc;
                            }
                          }
                        }
                      }
                    }
LAB_01460a54:
                    uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                    FUN_00da5038(uVar11,0);
                  }
                }
                if (*(uint *)(param_3 + 0x18) <= uVar16) break;
                if ((*plVar20 == 0) || (lVar14 = *(long *)(*plVar20 + 0x10), lVar14 == 0))
                goto LAB_01460a4c;
                if (*(uint *)(lVar14 + 0x18) <= uVar19) break;
                lVar14 = *(long *)(lVar14 + uVar19 * 8 + 0x20);
                if (lVar14 == 0) goto LAB_01460a4c;
                iVar6 = FUN_026709f8(lVar14,0);
                if (iVar6 != iVar3) {
                  in_stack_00000040 =
                       *(long *)Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__;
                  in_stack_00000048 = 0xffffffffffffffff;
                  in_stack_00000050 = iVar3;
                  uVar11 = FUN_017a7f78(&stack0x00000040,0);
                  uVar11 = FUN_01600424(*(undefined8 *)
                                         System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanUInt64_TypeInfo
                                        ,uVar11,*(undefined8 *)
                                                 System_ComponentModel_Design_DesignerOptionService_DesignerOptionConverter_OptionPropertyDescriptor_TypeInfo
                                        ,0);
                  goto LAB_014609fc;
                }
                uVar16 = uVar16 + 1;
                lVar14 = lStack0000000000000018;
                if (uVar16 == uVar17) goto LAB_01460704;
                if (*(uint *)(param_3 + 0x18) <= uVar16) break;
              } while( true );
            }
            goto LAB_01460a50;
          }
        }
LAB_01460704:
        uVar12 = (ulong)*(uint *)(unaff_x21 + 0x18);
        uVar19 = uVar19 + 1;
      } while ((long)uVar19 < (long)(int)*(uint *)(unaff_x21 + 0x18));
    }
    return 1;
  }
LAB_01460a4c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


