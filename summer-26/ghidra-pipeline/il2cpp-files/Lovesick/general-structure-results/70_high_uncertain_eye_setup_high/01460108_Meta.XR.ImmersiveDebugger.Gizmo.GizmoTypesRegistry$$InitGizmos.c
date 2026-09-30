/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry$$InitGizmos
ENTRY_POINT: 01460108
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


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry__InitGizmos(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  uint uVar14;
  long unaff_x20;
  uint uVar15;
  long unaff_x24;
  long *unaff_x25;
  undefined8 uVar16;
  ulong unaff_x26;
  int unaff_w27;
  long *plVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  int in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  int in_stack_00000050;
  undefined8 in_stack_00000058;
  
  do {
    lVar11 = *unaff_x19;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_2590) {
          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x15) * 0x10 + 0x138);
          goto LAB_01460160;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724();
LAB_01460160:
    uVar12 = (*(code *)*puVar6)();
    if ((uVar12 & 1) == 0) {
      in_stack_00000040 = *(long *)Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__;
      in_stack_00000048 = 0xffffffffffffffff;
      in_stack_00000050 = unaff_w27;
      uVar10 = FUN_017a7f78(&stack0x00000040,0);
      uVar8 = *(undefined8 *)PTR_DAT_033f1130;
LAB_014609f4:
      uVar10 = FUN_015f5b28(uVar8,uVar10,0);
LAB_014609fc:
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_026610e4(uVar10,0);
      return 0;
    }
    do {
      if ((unaff_x24 == 0) || (lVar11 = *(long *)(unaff_x20 + 0x30), lVar11 == 0))
      goto LAB_01460a4c;
      if (*(uint *)(lVar11 + 0x18) <= unaff_x26) {
LAB_01460a50:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar11 = lVar11 + unaff_x26 * 8;
      fVar19 = *(float *)(lVar11 + 0x20);
      fVar20 = *(float *)(lVar11 + 0x24);
      iVar1 = -0x80000000;
      if (fVar19 != INFINITY) {
        iVar1 = (int)fVar19;
      }
      iVar2 = -0x80000000;
      if (fVar20 != INFINITY) {
        iVar2 = (int)fVar20;
      }
      uVar15 = (uint)*(undefined8 *)(unaff_x24 + 0x18);
      if (0 < (int)uVar15) {
        if (uVar15 != 0) {
          uVar14 = 0;
          do {
            plVar17 = (long *)(unaff_x24 + (long)(int)uVar14 * 8 + 0x20);
            if ((*plVar17 == 0) || (lVar11 = *(long *)(*plVar17 + 0x10), lVar11 == 0))
            goto LAB_01460a4c;
            if (*(uint *)(lVar11 + 0x18) <= unaff_x26) break;
            plVar18 = *(long **)(lVar11 + unaff_x26 * 8 + 0x20);
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar12 = FUN_02681b9c(plVar18,0,0);
            if ((uVar12 & 1) != 0) {
              uVar12 = FUN_013f52d4(plVar18,0);
              if ((uVar12 & 1) == 0) {
                if (unaff_x19 == (long *)0x0) {
                  uVar8 = *(undefined8 *)
                           Method_Unity_Jobs_IJobForExtensions_ScheduleParallel<SliceCombineJob>__;
                  if (plVar18 == (long *)0x0) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = (**(code **)(*plVar18 + 0x168))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x170));
                  }
                  goto LAB_014609f4;
                }
                lVar11 = *unaff_x19;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_2590) {
                      puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                      goto LAB_01460290;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                puVar6 = (undefined8 *)FUN_00d59724();
LAB_01460290:
                (*(code *)*puVar6)();
              }
              if (unaff_x19 == (long *)0x0) {
                uVar12 = 1;
              }
              else {
                lVar11 = *unaff_x19;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_2590) {
                      puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x13) * 0x10 + 0x138);
                      goto LAB_0146030c;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                puVar6 = (undefined8 *)FUN_00d59724();
LAB_0146030c:
                uVar12 = (*(code *)*puVar6)();
                uVar12 = uVar12 & 0xffffffff;
              }
              if (in_stack_00000038 < 5) {
                uVar7 = FUN_0269e56c(0);
                if (plVar18 == (long *)0x0) goto LAB_01460a4c;
              }
              else {
                if ((plVar18 == (long *)0x0) || (plVar18 == (long *)0x0)) goto LAB_01460a4c;
                uVar16 = *(undefined8 *)PTR_DAT_033f67f0;
                uVar10 = (**(code **)(*plVar18 + 0x168))(plVar18,*(undefined8 *)(*plVar18 + 0x170));
                in_stack_00000050 = FUN_026709f8(plVar18,0);
                in_stack_00000040 =
                     *(long *)Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__;
                in_stack_00000048 = 0xffffffffffffffff;
                uVar8 = FUN_017a7f78(&stack0x00000040,0);
                uVar10 = FUN_0160073c(uVar16,uVar10,
                                      *(undefined8 *)
                                       Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<float>__
                                      ,uVar8,0);
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)StringLiteral_302);
                }
                FUN_02660dac(uVar10,0);
                uVar7 = FUN_0269e56c(0);
              }
              iVar5 = (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
              unaff_x25 = (long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
              if ((uVar7 & 1) == 0) {
                if (((iVar5 == iVar1) &&
                    (iVar5 = (**(code **)(*plVar18 + 0x1a8))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x1b0)), iVar5 == iVar2))
                   && (((uVar12 & 1) != 0 || (iVar5 = FUN_026709f8(plVar18,0), iVar5 == unaff_w27)))
                   ) {
                  iVar5 = FUN_026709f8(plVar18,0);
                  unaff_x25 = (long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                  ;
                  if (iVar5 != unaff_w27) {
                    if (((in_stack_00000028 == 0) ||
                        (FUN_0132138c(in_stack_00000028,unaff_x26 & 0xffffffff,&stack0x00000040,
                                      *(undefined8 *)StringLiteral_11624), in_stack_00000040 == 0))
                       || (unaff_x19 == (long *)0x0)) goto LAB_01460a4c;
                    lVar11 = *unaff_x19;
                    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                    if (uVar12 != 0) {
                      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_2590) {
                          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 4) * 0x10 + 0x138);
                          goto LAB_014606d4;
                        }
                        uVar12 = uVar12 - 1;
                        piVar13 = piVar13 + 4;
                      } while (uVar12 != 0);
                    }
                    puVar6 = (undefined8 *)FUN_00d59724();
LAB_014606d4:
                    (*(code *)*puVar6)();
                  }
                }
                else {
                  if (*(uint *)(unaff_x24 + 0x18) <= uVar14) break;
                  if ((*plVar17 == 0) || (in_stack_00000028 == 0)) goto LAB_01460a4c;
                  plVar18 = *(long **)(*plVar17 + 0x10);
                  FUN_0132138c(in_stack_00000028,unaff_x26 & 0xffffffff,&stack0x00000040,
                               *(undefined8 *)StringLiteral_11624);
                  if (unaff_x19 == (long *)0x0) goto LAB_01460a4c;
                  lVar11 = *unaff_x19;
                  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_2590) {
                        puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x14) * 0x10 + 0x138);
                        goto LAB_014605c0;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_00d59724();
LAB_014605c0:
                  lVar11 = (*(code *)*puVar6)();
                  if (plVar18 == (long *)0x0) goto LAB_01460a4c;
                  if ((lVar11 != 0) &&
                     (lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar18 + 0x40)),
                     lVar9 == 0)) goto LAB_01460a54;
                  if ((*(uint *)(plVar18 + 3) <= unaff_x26) ||
                     (plVar18[unaff_x26 + 4] = lVar11,
                     unaff_x25 = (long *)
                                 System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                     , *(uint *)(unaff_x24 + 0x18) <= uVar14)) break;
                  if ((*plVar17 == 0) || (lVar11 = *(long *)(*plVar17 + 0x10), lVar11 == 0))
                  goto LAB_01460a4c;
                  if (*(uint *)(lVar11 + 0x18) <= unaff_x26) break;
                  if (in_stack_00000020 == 0) goto LAB_01460a4c;
                  FUN_00bc0bd0(in_stack_00000020,*(undefined8 *)(lVar11 + unaff_x26 * 8 + 0x20),
                               *(undefined8 *)
                                Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlalh_lane_s16__);
                }
              }
              else if (((iVar5 != iVar1) ||
                       (iVar5 = (**(code **)(*plVar18 + 0x1a8))
                                          (plVar18,*(undefined8 *)(*plVar18 + 0x1b0)),
                       iVar5 != iVar2)) || (iVar5 = FUN_026709f8(plVar18,0), iVar5 != unaff_w27)) {
                plVar17 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
                puVar4 = StringLiteral_3145;
                puVar3 = PTR_DAT_033f38b8;
                if (plVar17 == (long *)0x0) goto LAB_01460a4c;
                if ((*(long *)StringLiteral_3145 == 0) ||
                   (lVar11 = thunk_FUN_00d6225c(*(long *)StringLiteral_3145,
                                                *(undefined8 *)(*plVar17 + 0x40)), lVar11 != 0)) {
                  if ((int)plVar17[3] == 0) break;
                  plVar17[4] = *(long *)puVar4;
                  lVar11 = FUN_0268b6ac(plVar18,0);
                  if ((lVar11 == 0) ||
                     (lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar17 + 0x40)),
                     lVar9 != 0)) {
                    uVar15 = *(uint *)(plVar17 + 3);
                    if (uVar15 < 2) break;
                    plVar17[5] = lVar11;
                    puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_s16__;
                    if (*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_s16__ != 0) {
                      lVar11 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovn_s16__
                                                  ,*(undefined8 *)(*plVar17 + 0x40));
                      if (lVar11 == 0) goto LAB_01460a54;
                      uVar15 = *(uint *)(plVar17 + 3);
                    }
                    if (uVar15 < 3) break;
                    plVar17[6] = *(long *)puVar4;
                    in_stack_00000058._4_4_ =
                         (**(code **)(*plVar18 + 0x188))(plVar18,*(undefined8 *)(*plVar18 + 400));
                    lVar11 = FUN_0176eb1c((long)&stack0x00000058 + 4,0);
                    if ((lVar11 == 0) ||
                       (lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar17 + 0x40)),
                       lVar9 != 0)) {
                      uVar15 = *(uint *)(plVar17 + 3);
                      if (uVar15 < 4) break;
                      plVar17[7] = lVar11;
                      if (*(long *)puVar3 != 0) {
                        lVar11 = thunk_FUN_00d6225c(*(long *)puVar3,*(undefined8 *)(*plVar17 + 0x40)
                                                   );
                        if (lVar11 == 0) goto LAB_01460a54;
                        uVar15 = *(uint *)(plVar17 + 3);
                      }
                      if (uVar15 < 5) break;
                      plVar17[8] = *(long *)puVar3;
                      in_stack_00000058._4_4_ =
                           (**(code **)(*plVar18 + 0x1a8))
                                     (plVar18,*(undefined8 *)(*plVar18 + 0x1b0));
                      lVar11 = FUN_0176eb1c((long)&stack0x00000058 + 4,0);
                      if ((lVar11 == 0) ||
                         (lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar17 + 0x40)),
                         lVar9 != 0)) {
                        uVar15 = *(uint *)(plVar17 + 3);
                        if (uVar15 < 6) break;
                        plVar17[9] = lVar11;
                        if (*(long *)puVar3 != 0) {
                          lVar11 = thunk_FUN_00d6225c(*(long *)puVar3,
                                                      *(undefined8 *)(*plVar17 + 0x40));
                          if (lVar11 == 0) goto LAB_01460a54;
                          uVar15 = *(uint *)(plVar17 + 3);
                        }
                        if (uVar15 < 7) break;
                        plVar17[10] = *(long *)puVar3;
                        in_stack_00000050 = FUN_026709f8(plVar18,0);
                        in_stack_00000040 =
                             *(long *)Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__
                        ;
                        in_stack_00000048 = 0xffffffffffffffff;
                        lVar11 = FUN_017a7f78(&stack0x00000040,0);
                        if ((lVar11 == 0) ||
                           (lVar9 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar17 + 0x40)),
                           lVar9 != 0)) {
                          if (*(uint *)(plVar17 + 3) < 8) break;
                          plVar17[0xb] = lVar11;
                          uVar10 = FUN_01600844(plVar17,0);
                          goto LAB_014609fc;
                        }
                      }
                    }
                  }
                }
LAB_01460a54:
                uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar10,0);
              }
            }
            if (*(uint *)(unaff_x24 + 0x18) <= uVar14) break;
            if ((*plVar17 == 0) || (lVar11 = *(long *)(*plVar17 + 0x10), lVar11 == 0))
            goto LAB_01460a4c;
            if (*(uint *)(lVar11 + 0x18) <= unaff_x26) break;
            lVar11 = *(long *)(lVar11 + unaff_x26 * 8 + 0x20);
            if (lVar11 == 0) goto LAB_01460a4c;
            iVar5 = FUN_026709f8(lVar11,0);
            if (iVar5 != unaff_w27) {
              in_stack_00000040 =
                   *(long *)Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__;
              in_stack_00000048 = 0xffffffffffffffff;
              in_stack_00000050 = unaff_w27;
              uVar10 = FUN_017a7f78(&stack0x00000040,0);
              uVar10 = FUN_01600424(*(undefined8 *)
                                     System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanUInt64_TypeInfo
                                    ,uVar10,*(undefined8 *)
                                             System_ComponentModel_Design_DesignerOptionService_DesignerOptionConverter_OptionPropertyDescriptor_TypeInfo
                                    ,0);
              goto LAB_014609fc;
            }
            uVar14 = uVar14 + 1;
            unaff_x20 = in_stack_00000018;
            if (uVar14 == uVar15) goto LAB_01460704;
            if (*(uint *)(unaff_x24 + 0x18) <= uVar14) break;
          } while( true );
        }
        goto LAB_01460a50;
      }
LAB_01460704:
      do {
        unaff_x26 = unaff_x26 + 1;
        if ((long)(int)*(uint *)(in_stack_00000010 + 0x18) <= (long)unaff_x26) {
          return 1;
        }
        if (*(uint *)(in_stack_00000010 + 0x18) <= unaff_x26) goto LAB_01460a50;
      } while (*(char *)(in_stack_00000010 + unaff_x26 + 0x20) == '\0');
      if ((unaff_x20 == 0) || (lVar11 = *(long *)(unaff_x20 + 0x20), lVar11 == 0)) {
LAB_01460a4c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar11 + 0x18) <= unaff_x26) goto LAB_01460a50;
      if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_01460a4c;
      if (*(uint *)(*(long *)(unaff_x20 + 0x28) + 0x18) <= unaff_x26) goto LAB_01460a50;
      unaff_w27 = *(int *)(lVar11 + unaff_x26 * 4 + 0x20);
    } while (unaff_x19 == (long *)0x0);
  } while( true );
}


