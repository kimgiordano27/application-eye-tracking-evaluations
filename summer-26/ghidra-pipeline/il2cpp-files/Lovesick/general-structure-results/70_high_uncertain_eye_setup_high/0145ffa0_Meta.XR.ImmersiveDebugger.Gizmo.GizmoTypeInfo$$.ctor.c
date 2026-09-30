/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypeInfo$$.ctor
ENTRY_POINT: 0145ffa0
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
Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypeInfo___ctor
          (ulong param_1,long param_2,long param_3,long param_4,long param_5,undefined8 param_6,
          int param_7,long param_8,long *param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  uint uVar19;
  long unaff_x20;
  uint uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  float fVar25;
  float fVar26;
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
  if (param_4 != 0) {
    if (0 < (int)*(ulong *)(param_4 + 0x18)) {
      uVar22 = 0;
      uVar14 = *(ulong *)(param_4 + 0x18) & 0xffffffff;
      lVar16 = lStack0000000000000018;
      plVar12 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      do {
        if (uVar14 <= uVar22) goto LAB_01460a50;
        if (*(char *)(param_4 + uVar22 + 0x20) != '\0') {
          if ((lVar16 == 0) || (lVar15 = *(long *)(lVar16 + 0x20), lVar15 == 0)) goto LAB_01460a4c;
          if (*(uint *)(lVar15 + 0x18) <= uVar22) {
LAB_01460a50:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar17 = *(long *)(lVar16 + 0x28);
          if (lVar17 == 0) goto LAB_01460a4c;
          if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_01460a50;
          iVar3 = *(int *)(lVar15 + uVar22 * 4 + 0x20);
          uVar4 = *(undefined4 *)(lVar17 + uVar22 * 4 + 0x20);
          if (param_9 != (long *)0x0) {
            lVar15 = *param_9;
            uVar14 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar14 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_2590) {
                  puVar9 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0x15) * 0x10 + 0x138);
                  goto LAB_01460160;
                }
                uVar14 = uVar14 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar14 != 0);
            }
            puVar9 = (undefined8 *)FUN_00d59724(param_9,*(long *)StringLiteral_2590,0x15);
LAB_01460160:
            uVar14 = (*(code *)*puVar9)(param_9,iVar3,puVar9[1]);
            if ((uVar14 & 1) == 0) {
              in_stack_00000040 =
                   *(long *)Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__;
              in_stack_00000048 = 0xffffffffffffffff;
              in_stack_00000050 = iVar3;
              uVar13 = FUN_017a7f78(&stack0x00000040,0);
              uVar11 = *(undefined8 *)PTR_DAT_033f1130;
LAB_014609f4:
              uVar13 = FUN_015f5b28(uVar11,uVar13,0);
LAB_014609fc:
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_026610e4(uVar13,0);
              return 0;
            }
          }
          if ((param_3 == 0) || (lVar15 = *(long *)(lVar16 + 0x30), lVar15 == 0)) goto LAB_01460a4c;
          if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_01460a50;
          lVar15 = lVar15 + uVar22 * 8;
          fVar25 = *(float *)(lVar15 + 0x20);
          fVar26 = *(float *)(lVar15 + 0x24);
          iVar1 = -0x80000000;
          if (fVar25 != INFINITY) {
            iVar1 = (int)fVar25;
          }
          iVar2 = -0x80000000;
          if (fVar26 != INFINITY) {
            iVar2 = (int)fVar26;
          }
          uVar20 = (uint)*(undefined8 *)(param_3 + 0x18);
          if (0 < (int)uVar20) {
            if (uVar20 != 0) {
              uVar19 = 0;
              do {
                plVar23 = (long *)(param_3 + (long)(int)uVar19 * 8 + 0x20);
                if ((*plVar23 == 0) || (lVar16 = *(long *)(*plVar23 + 0x10), lVar16 == 0))
                goto LAB_01460a4c;
                if (*(uint *)(lVar16 + 0x18) <= uVar22) break;
                plVar24 = *(long **)(lVar16 + uVar22 * 8 + 0x20);
                if (*(int *)(*plVar12 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar14 = FUN_02681b9c(plVar24,0,0);
                if ((uVar14 & 1) != 0) {
                  uVar14 = FUN_013f52d4(plVar24,0);
                  if ((uVar14 & 1) == 0) {
                    if (param_9 == (long *)0x0) {
                      uVar11 = *(undefined8 *)
                                Method_Unity_Jobs_IJobForExtensions_ScheduleParallel<SliceCombineJob>__
                      ;
                      if (plVar24 == (long *)0x0) {
                        uVar13 = 0;
                      }
                      else {
                        uVar13 = (**(code **)(*plVar24 + 0x168))
                                           (plVar24,*(undefined8 *)(*plVar24 + 0x170));
                      }
                      goto LAB_014609f4;
                    }
                    lVar16 = *param_9;
                    uVar14 = (ulong)*(ushort *)(lVar16 + 0x12a);
                    if (uVar14 != 0) {
                      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_2590) {
                          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 2) * 0x10 + 0x138);
                          goto LAB_01460290;
                        }
                        uVar14 = uVar14 - 1;
                        piVar18 = piVar18 + 4;
                      } while (uVar14 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_00d59724(param_9,*(long *)StringLiteral_2590,2);
LAB_01460290:
                    (*(code *)*puVar9)(param_9,plVar24,1,1,puVar9[1]);
                  }
                  if (param_9 == (long *)0x0) {
                    uVar14 = 1;
                  }
                  else {
                    lVar16 = *param_9;
                    uVar14 = (ulong)*(ushort *)(lVar16 + 0x12a);
                    if (uVar14 != 0) {
                      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_2590) {
                          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 0x13) * 0x10 + 0x138);
                          goto LAB_0146030c;
                        }
                        uVar14 = uVar14 - 1;
                        piVar18 = piVar18 + 4;
                      } while (uVar14 != 0);
                    }
                    puVar9 = (undefined8 *)FUN_00d59724(param_9,*(long *)StringLiteral_2590,0x13);
LAB_0146030c:
                    uVar14 = (*(code *)*puVar9)(param_9,plVar24,puVar9[1]);
                    uVar14 = uVar14 & 0xffffffff;
                  }
                  if (iStack0000000000000038 < 5) {
                    uVar10 = FUN_0269e56c(0);
                    if (plVar24 == (long *)0x0) goto LAB_01460a4c;
                  }
                  else {
                    if ((plVar24 == (long *)0x0) || (plVar24 == (long *)0x0)) goto LAB_01460a4c;
                    uVar21 = *(undefined8 *)PTR_DAT_033f67f0;
                    uVar13 = (**(code **)(*plVar24 + 0x168))
                                       (plVar24,*(undefined8 *)(*plVar24 + 0x170));
                    in_stack_00000050 = FUN_026709f8(plVar24,0);
                    in_stack_00000040 =
                         *(long *)Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__;
                    in_stack_00000048 = 0xffffffffffffffff;
                    uVar11 = FUN_017a7f78(&stack0x00000040,0);
                    uVar13 = FUN_0160073c(uVar21,uVar13,
                                          *(undefined8 *)
                                           Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<float>__
                                          ,uVar11,0);
                    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)StringLiteral_302);
                    }
                    FUN_02660dac(uVar13,0);
                    uVar10 = FUN_0269e56c(0);
                  }
                  iVar8 = (**(code **)(*plVar24 + 0x188))(plVar24,*(undefined8 *)(*plVar24 + 400));
                  plVar12 = (long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
                  if ((uVar10 & 1) == 0) {
                    if (((iVar8 == iVar1) &&
                        (iVar8 = (**(code **)(*plVar24 + 0x1a8))
                                           (plVar24,*(undefined8 *)(*plVar24 + 0x1b0)),
                        iVar8 == iVar2)) &&
                       (((uVar14 & 1) != 0 || (iVar8 = FUN_026709f8(plVar24,0), iVar8 == iVar3)))) {
                      iVar8 = FUN_026709f8(plVar24,0);
                      plVar12 = (long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                      ;
                      if (iVar8 != iVar3) {
                        if (((lStack0000000000000028 == 0) ||
                            (FUN_0132138c(lStack0000000000000028,uVar22 & 0xffffffff,
                                          &stack0x00000040,*(undefined8 *)StringLiteral_11624),
                            in_stack_00000040 == 0)) || (param_9 == (long *)0x0)) goto LAB_01460a4c;
                        lVar16 = *param_9;
                        cVar5 = *(char *)(in_stack_00000040 + 0x18);
                        uVar14 = (ulong)*(ushort *)(lVar16 + 0x12a);
                        if (uVar14 != 0) {
                          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_2590) {
                              puVar9 = (undefined8 *)(lVar16 + (long)(*piVar18 + 4) * 0x10 + 0x138);
                              goto LAB_014606d4;
                            }
                            uVar14 = uVar14 - 1;
                            piVar18 = piVar18 + 4;
                          } while (uVar14 != 0);
                        }
                        puVar9 = (undefined8 *)FUN_00d59724(param_9,*(long *)StringLiteral_2590,4);
LAB_014606d4:
                        (*(code *)*puVar9)(param_9,plVar24,iVar3,uVar4,cVar5 != '\0',puVar9[1]);
                      }
                    }
                    else {
                      if (*(uint *)(param_3 + 0x18) <= uVar19) break;
                      if ((*plVar23 == 0) || (lStack0000000000000028 == 0)) goto LAB_01460a4c;
                      plVar12 = *(long **)(*plVar23 + 0x10);
                      FUN_0132138c(lStack0000000000000028,uVar22 & 0xffffffff,&stack0x00000040,
                                   *(undefined8 *)StringLiteral_11624);
                      lVar16 = in_stack_00000040;
                      if (param_9 == (long *)0x0) goto LAB_01460a4c;
                      lVar15 = *param_9;
                      uVar14 = (ulong)*(ushort *)(lVar15 + 0x12a);
                      if (uVar14 != 0) {
                        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_2590) {
                            puVar9 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0x14) * 0x10 + 0x138)
                            ;
                            goto LAB_014605c0;
                          }
                          uVar14 = uVar14 - 1;
                          piVar18 = piVar18 + 4;
                        } while (uVar14 != 0);
                      }
                      puVar9 = (undefined8 *)FUN_00d59724(param_9,*(long *)StringLiteral_2590,0x14);
LAB_014605c0:
                      lVar16 = (*(code *)*puVar9)(param_9,lVar16,plVar24,iVar1,iVar2,iVar3,
                                                  iStack0000000000000038,puVar9[1]);
                      if (plVar12 == (long *)0x0) goto LAB_01460a4c;
                      if ((lVar16 != 0) &&
                         (lVar15 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar12 + 0x40)),
                         lVar15 == 0)) goto LAB_01460a54;
                      if ((*(uint *)(plVar12 + 3) <= uVar22) ||
                         (plVar12[uVar22 + 4] = lVar16,
                         plVar12 = (long *)
                                   System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                         , *(uint *)(param_3 + 0x18) <= uVar19)) break;
                      if ((*plVar23 == 0) || (lVar16 = *(long *)(*plVar23 + 0x10), lVar16 == 0))
                      goto LAB_01460a4c;
                      if (*(uint *)(lVar16 + 0x18) <= uVar22) break;
                      if (lStack0000000000000020 == 0) goto LAB_01460a4c;
                      FUN_00bc0bd0(lStack0000000000000020,
                                   *(undefined8 *)(lVar16 + uVar22 * 8 + 0x20),
                                   *(undefined8 *)
                                    Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlalh_lane_s16__);
                    }
                  }
                  else if (((iVar8 != iVar1) ||
                           (iVar8 = (**(code **)(*plVar24 + 0x1a8))
                                              (plVar24,*(undefined8 *)(*plVar24 + 0x1b0)),
                           iVar8 != iVar2)) || (iVar8 = FUN_026709f8(plVar24,0), iVar8 != iVar3)) {
                    plVar12 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
                    puVar7 = StringLiteral_3145;
                    puVar6 = PTR_DAT_033f38b8;
                    if (plVar12 == (long *)0x0) goto LAB_01460a4c;
                    if ((*(long *)StringLiteral_3145 == 0) ||
                       (lVar16 = thunk_FUN_00d6225c(*(long *)StringLiteral_3145,
                                                    *(undefined8 *)(*plVar12 + 0x40)), lVar16 != 0))
                    {
                      if ((int)plVar12[3] == 0) break;
                      plVar12[4] = *(long *)puVar7;
                      lVar16 = FUN_0268b6ac(plVar24,0);
                      if ((lVar16 == 0) ||
                         (lVar15 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar12 + 0x40)),
                         lVar15 != 0)) {
                        uVar20 = *(uint *)(plVar12 + 3);
                        if (uVar20 < 2) break;
                        plVar12[5] = lVar16;
                        puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_s16__;
                        if (*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_s16__ != 0) {
                          lVar16 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_s16__
                                                  ,*(undefined8 *)(*plVar12 + 0x40));
                          if (lVar16 == 0) goto LAB_01460a54;
                          uVar20 = *(uint *)(plVar12 + 3);
                        }
                        if (uVar20 < 3) break;
                        plVar12[6] = *(long *)puVar7;
                        uStack000000000000005c =
                             (**(code **)(*plVar24 + 0x188))
                                       (plVar24,*(undefined8 *)(*plVar24 + 400));
                        lVar16 = FUN_0176eb1c(&stack0x0000005c,0);
                        if ((lVar16 == 0) ||
                           (lVar15 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar12 + 0x40)),
                           lVar15 != 0)) {
                          uVar20 = *(uint *)(plVar12 + 3);
                          if (uVar20 < 4) break;
                          plVar12[7] = lVar16;
                          if (*(long *)puVar6 != 0) {
                            lVar16 = thunk_FUN_00d6225c(*(long *)puVar6,
                                                        *(undefined8 *)(*plVar12 + 0x40));
                            if (lVar16 == 0) goto LAB_01460a54;
                            uVar20 = *(uint *)(plVar12 + 3);
                          }
                          if (uVar20 < 5) break;
                          plVar12[8] = *(long *)puVar6;
                          uStack000000000000005c =
                               (**(code **)(*plVar24 + 0x1a8))
                                         (plVar24,*(undefined8 *)(*plVar24 + 0x1b0));
                          lVar16 = FUN_0176eb1c(&stack0x0000005c,0);
                          if ((lVar16 == 0) ||
                             (lVar15 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar12 + 0x40)),
                             lVar15 != 0)) {
                            uVar20 = *(uint *)(plVar12 + 3);
                            if (uVar20 < 6) break;
                            plVar12[9] = lVar16;
                            if (*(long *)puVar6 != 0) {
                              lVar16 = thunk_FUN_00d6225c(*(long *)puVar6,
                                                          *(undefined8 *)(*plVar12 + 0x40));
                              if (lVar16 == 0) goto LAB_01460a54;
                              uVar20 = *(uint *)(plVar12 + 3);
                            }
                            if (uVar20 < 7) break;
                            plVar12[10] = *(long *)puVar6;
                            in_stack_00000050 = FUN_026709f8(plVar24,0);
                            in_stack_00000040 =
                                 *(long *)
                                  Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__;
                            in_stack_00000048 = 0xffffffffffffffff;
                            lVar16 = FUN_017a7f78(&stack0x00000040,0);
                            if ((lVar16 == 0) ||
                               (lVar15 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar12 + 0x40))
                               , lVar15 != 0)) {
                              if (*(uint *)(plVar12 + 3) < 8) break;
                              plVar12[0xb] = lVar16;
                              uVar13 = FUN_01600844(plVar12,0);
                              goto LAB_014609fc;
                            }
                          }
                        }
                      }
                    }
LAB_01460a54:
                    uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                    FUN_00da5038(uVar13,0);
                  }
                }
                if (*(uint *)(param_3 + 0x18) <= uVar19) break;
                if ((*plVar23 == 0) || (lVar16 = *(long *)(*plVar23 + 0x10), lVar16 == 0))
                goto LAB_01460a4c;
                if (*(uint *)(lVar16 + 0x18) <= uVar22) break;
                lVar16 = *(long *)(lVar16 + uVar22 * 8 + 0x20);
                if (lVar16 == 0) goto LAB_01460a4c;
                iVar8 = FUN_026709f8(lVar16,0);
                if (iVar8 != iVar3) {
                  in_stack_00000040 =
                       *(long *)Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__;
                  in_stack_00000048 = 0xffffffffffffffff;
                  in_stack_00000050 = iVar3;
                  uVar13 = FUN_017a7f78(&stack0x00000040,0);
                  uVar13 = FUN_01600424(*(undefined8 *)
                                         System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanUInt64_TypeInfo
                                        ,uVar13,*(undefined8 *)
                                                 System_ComponentModel_Design_DesignerOptionService_DesignerOptionConverter_OptionPropertyDescriptor_TypeInfo
                                        ,0);
                  goto LAB_014609fc;
                }
                uVar19 = uVar19 + 1;
                lVar16 = lStack0000000000000018;
                if (uVar19 == uVar20) goto LAB_01460704;
                if (*(uint *)(param_3 + 0x18) <= uVar19) break;
              } while( true );
            }
            goto LAB_01460a50;
          }
        }
LAB_01460704:
        uVar14 = (ulong)*(uint *)(param_4 + 0x18);
        uVar22 = uVar22 + 1;
      } while ((long)uVar22 < (long)(int)*(uint *)(param_4 + 0x18));
    }
    return 1;
  }
LAB_01460a4c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


