/*
FUNCTION_NAME: FUN_05684d30
ENTRY_POINT: 05684d30
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_16;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * FUN_05684d30(long *param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  uint uVar18;
  
  if ((DAT_06b7f8a1 & 1) == 0) {
    FUN_02d6084c(Oculus_Platform_Request<AssetDetailsList>_TypeInfo);
    FUN_02d6084c(PTR_DAT_06766c20);
    FUN_02d6084c(Oculus_Platform_Request<LaunchUnblockFlowResult>_TypeInfo);
    FUN_02d6084c(Oculus_Platform_Request<AvatarEditorResult>_TypeInfo);
    FUN_02d6084c(PTR_DAT_06782548);
    FUN_02d6084c(System_Action<FocusExitEventArgs>_TypeInfo);
    DAT_06b7f8a1 = 1;
  }
  if ((param_3 & 1) == 0) {
LAB_05684df8:
    if (param_1 == (long *)0x0) goto LAB_05685584;
  }
  else {
    if (param_1 == (long *)0x0) goto LAB_05685584;
    uVar9 = (**(code **)(*param_1 + 0x5a8))(param_1,*(undefined8 *)(*param_1 + 0x5b0));
    if ((uVar9 & 1) != 0) {
      if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x98) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      param_1 = (long *)FUN_0503abac(param_1,0);
      goto LAB_05684df8;
    }
  }
  uVar9 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
  if ((uVar9 & 1) == 0) {
LAB_05684ea4:
    bVar3 = false;
    plVar16 = param_1;
    plVar15 = (long *)Oculus_Platform_Request<AvatarEditorResult>_TypeInfo;
  }
  else {
    uVar10 = (**(code **)(*param_1 + 0x448))(param_1,*(undefined8 *)(*param_1 + 0x450));
    uVar17 = *(undefined8 *)PTR_DAT_06766c20;
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)(PTR_DAT_0675e258 + 0xe0));
    }
    uVar17 = FUN_05015c2c(uVar17,0);
    uVar9 = FUN_0501ed54(uVar10,uVar17,0);
    if ((uVar9 & 1) == 0) goto LAB_05684ea4;
    lVar11 = (**(code **)(*param_1 + 0x468))(param_1,*(undefined8 *)(*param_1 + 0x470));
    if (lVar11 == 0) goto LAB_05685584;
    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_056856a8;
    plVar16 = *(long **)(lVar11 + 0x20);
    bVar3 = true;
    plVar15 = (long *)Oculus_Platform_Request<AvatarEditorResult>_TypeInfo;
  }
  Oculus_Platform_Request<AvatarEditorResult>_TypeInfo = (undefined *)plVar15;
  if ((param_2 == (long *)0x0) || ((int)param_2[2] == 0)) {
    if (bVar3) {
      if (*(int *)(*plVar15 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar13 = FUN_0567f8cc(plVar16);
      if (lVar13 != 0) {
        lVar11 = *plVar15;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar11 = *plVar15;
        }
        plVar14 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x18);
        if (plVar14 == (long *)0x0) goto LAB_05685584;
        plVar14 = (long *)(**(code **)(*plVar14 + 0x308))
                                    (plVar14,*(undefined8 *)(lVar13 + 0x18),
                                     *(undefined8 *)(*plVar14 + 0x310));
        lVar11 = *(long *)Oculus_Platform_Request<LaunchUnblockFlowResult>_TypeInfo;
        if (plVar14 != (long *)0x0) {
          if ((*(byte *)(lVar11 + 0x130) <= *(byte *)(*plVar14 + 0x130)) &&
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) ==
              lVar11)) {
            return plVar14;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(plVar14);
        }
        uVar10 = *(undefined8 *)(lVar13 + 0x18);
        plVar14 = (long *)thunk_FUN_02d9d534(lVar11);
        FUN_05680308(plVar14,plVar16,uVar10,0,0,0);
        if (plVar14 == (long *)0x0) goto LAB_05685584;
        *(undefined1 *)((long)plVar14 + 0x61) = 1;
        lVar11 = *plVar15;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar11 = *plVar15;
        }
        plVar16 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x18);
        if (plVar16 == (long *)0x0) goto LAB_05685584;
        lVar11 = *plVar16;
        param_2 = *(long **)(lVar13 + 0x18);
        goto LAB_05685224;
      }
    }
    puVar4 = Oculus_Platform_Request<AvatarEditorResult>_TypeInfo;
    lVar11 = *(long *)Oculus_Platform_Request<AvatarEditorResult>_TypeInfo;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar11 = *(long *)puVar4;
    }
    plVar15 = (long *)**(long **)(lVar11 + 0xb8);
    if (plVar15 != (long *)0x0) {
      plVar15 = (long *)(**(code **)(*plVar15 + 0x308))
                                  (plVar15,param_1,*(undefined8 *)(*plVar15 + 0x310));
      puVar7 = Oculus_Platform_Request<LaunchUnblockFlowResult>_TypeInfo;
      if (plVar15 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)Oculus_Platform_Request<LaunchUnblockFlowResult>_TypeInfo + 0x130
                         );
        if ((bVar2 <= *(byte *)(*plVar15 + 0x130)) &&
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) ==
            *(long *)Oculus_Platform_Request<LaunchUnblockFlowResult>_TypeInfo)) {
          return plVar15;
        }
      }
      if (plVar16 != (long *)0x0) {
        uVar9 = FUN_050207cc(plVar16,0);
        lVar11 = *plVar16;
        if ((uVar9 & 1) == 0) {
          uVar9 = (**(code **)(lVar11 + 0x3b8))(plVar16,*(undefined8 *)(lVar11 + 0x3c0));
          if (((uVar9 & 1) == 0) ||
             (uVar9 = (**(code **)(*plVar16 + 0x3c8))(plVar16,*(undefined8 *)(*plVar16 + 0x3d0)),
             (uVar9 & 1) != 0)) {
            uVar10 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
            if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
            }
            uVar10 = FUN_0566e328(uVar10);
          }
          else {
            lVar11 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
            lVar13 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
            if ((lVar13 == 0) || (uVar8 = FUN_04e921f4(lVar13,0x60,0), lVar11 == 0))
            goto LAB_05685584;
            uVar10 = System_Globalization_SortKey___ctor(lVar11,0,uVar8,0);
            puVar5 = PTR_DAT_06782548;
            if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
            }
            uVar10 = FUN_0566e328(uVar10);
            uVar10 = FUN_04e83184(uVar10,*(undefined8 *)System_Action<FocusExitEventArgs>_TypeInfo,0
                                 );
            lVar11 = (**(code **)(*plVar16 + 0x468))(plVar16,*(undefined8 *)(*plVar16 + 0x470));
            puVar6 = Oculus_Platform_Request<AssetDetailsList>_TypeInfo;
            if (lVar11 == 0) goto LAB_05685584;
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (0 < (int)uVar1) {
              uVar18 = 0;
              do {
                if (uVar1 <= uVar18) goto LAB_056856a8;
                plVar15 = *(long **)(lVar11 + (long)(int)uVar18 * 8 + 0x20);
                if (plVar15 == (long *)0x0) goto LAB_05685584;
                uVar9 = FUN_050207cc(plVar15,0);
                if (((uVar9 & 1) == 0) &&
                   (uVar9 = (**(code **)(*plVar15 + 0x3b8))
                                      (plVar15,*(undefined8 *)(*plVar15 + 0x3c0)), (uVar9 & 1) == 0)
                   ) {
                  uVar17 = (**(code **)(*plVar15 + 0x1b8))
                                     (plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(*(long *)puVar5);
                  }
                  uVar17 = FUN_0566e328(uVar17);
                  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(*(long *)puVar6);
                  }
                  uVar17 = FUN_0567dd00(uVar17);
                }
                else {
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  lVar13 = FUN_0567f8cc(plVar15);
                  if (lVar13 == 0) goto LAB_05685584;
                  uVar17 = *(undefined8 *)(lVar13 + 0x18);
                }
                uVar10 = FUN_04e83184(uVar10,uVar17,0);
                uVar1 = *(uint *)(lVar11 + 0x18);
                uVar18 = uVar18 + 1;
              } while ((int)uVar18 < (int)uVar1);
            }
          }
        }
        else {
          uVar10 = (**(code **)(lVar11 + 0x428))(plVar16,*(undefined8 *)(lVar11 + 0x430));
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)puVar4);
          }
          lVar11 = FUN_0567f8cc(uVar10);
          if (lVar11 == 0) goto LAB_05685584;
          uVar10 = FUN_056807d0(*(undefined8 *)(lVar11 + 0x18));
        }
        plVar14 = (long *)thunk_FUN_02d9d534(*(undefined8 *)puVar7);
        FUN_05680308(plVar14,plVar16,uVar10,0,0,0);
        if (bVar3) {
          if (plVar14 == (long *)0x0) goto LAB_05685584;
          *(undefined1 *)((long)plVar14 + 0x61) = 1;
        }
        lVar11 = *(long *)puVar4;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar11 = *(long *)puVar4;
        }
        plVar16 = (long *)**(long **)(lVar11 + 0xb8);
        if (plVar16 != (long *)0x0) {
          lVar11 = *plVar16;
          param_2 = param_1;
LAB_05685224:
          (**(code **)(lVar11 + 0x318))(plVar16,param_2,plVar14,*(undefined8 *)(lVar11 + 800));
          return plVar14;
        }
      }
    }
  }
  else {
    if (*(int *)(*plVar15 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    plVar14 = (long *)FUN_056856ac(param_2);
    if (plVar16 == (long *)0x0) goto LAB_05685584;
    uVar9 = FUN_050207cc(plVar16,0);
    puVar4 = PTR_DAT_0675e258;
    if ((uVar9 & 1) != 0) {
      if (plVar14 == (long *)0x0) goto LAB_05685584;
      lVar11 = plVar14[2];
      if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar9 = FUN_0501fa14(plVar16,lVar11,0);
      if ((uVar9 & 1) != 0) {
        lVar11 = *plVar15;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar11 = *plVar15;
        }
        plVar12 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x10);
        if (plVar12 == (long *)0x0) goto LAB_05685584;
        plVar12 = (long *)(**(code **)(*plVar12 + 0x308))
                                    (plVar12,param_2,*(undefined8 *)(*plVar12 + 0x310));
        puVar7 = Oculus_Platform_Request<LaunchUnblockFlowResult>_TypeInfo;
        if (plVar12 == (long *)0x0) {
          lVar11 = plVar14[2];
          uVar10 = (**(code **)(*plVar16 + 0x428))(plVar16,*(undefined8 *)(*plVar16 + 0x430));
          if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)(puVar4 + 0xe0));
          }
          uVar9 = FUN_0501ed54(lVar11,uVar10,0);
          if ((uVar9 & 1) == 0) {
            uVar10 = thunk_FUN_02dc61f4(PTR_DAT_0675e238);
            lVar11 = FUN_02d60934(uVar10,5);
            if (lVar11 != 0) {
              uVar10 = thunk_FUN_02dc61f4(
                                         System_Threading_SparselyPopulatedArray<CancellationCallbackInfo>_TypeInfo
                                         );
              if (*(int *)(lVar11 + 0x18) != 0) {
                *(undefined8 *)(lVar11 + 0x20) = uVar10;
                thunk_FUN_02dd37b4();
                plVar16 = (long *)(**(code **)(*plVar16 + 0x428))
                                            (plVar16,*(undefined8 *)(*plVar16 + 0x430));
                if (plVar16 == (long *)0x0) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = (**(code **)(*plVar16 + 0x168))
                                     (plVar16,*(undefined8 *)(*plVar16 + 0x170));
                }
                if (1 < *(uint *)(lVar11 + 0x18)) {
                  *(undefined8 *)(lVar11 + 0x28) = uVar10;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x28));
                  uVar10 = thunk_FUN_02dc61f4(
                                             System_Collections_Generic_Stack<HashSet<ParameterExpression>>_TypeInfo
                                             );
                  if (2 < *(uint *)(lVar11 + 0x18)) {
                    *(undefined8 *)(lVar11 + 0x30) = uVar10;
                    thunk_FUN_02dd37b4((undefined8 *)(lVar11 + 0x30),uVar10);
                    if (3 < *(uint *)(lVar11 + 0x18)) {
                      *(long *)(lVar11 + 0x38) = (long)param_2;
                      thunk_FUN_02dd37b4((long *)(lVar11 + 0x38),param_2);
                      uVar10 = thunk_FUN_02dc61f4(PTR_DAT_067679f0);
                      FUN_028f7064(lVar11,4,uVar10);
                      uVar10 = FUN_04e8e3a4(lVar11,0);
                      thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
                      uVar17 = thunk_FUN_02d9d534();
                      FUN_05007004(uVar17,uVar10,0);
                      uVar10 = thunk_FUN_02dc61f4(
                                                 System_Collections_Generic_Stack<NativeArray<byte>>_TypeInfo
                                                 );
                    /* WARNING: Subroutine does not return */
                      FUN_02d609b4(uVar17,uVar10);
                    }
                  }
                }
              }
LAB_056856a8:
                    /* WARNING: Subroutine does not return */
              FUN_02d60af0();
            }
          }
          else {
            lVar11 = plVar14[3];
            if (*(int *)(*plVar15 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar10 = FUN_056807d0(lVar11);
            plVar14 = (long *)thunk_FUN_02d9d534(*(undefined8 *)puVar7);
            FUN_05680308(plVar14,plVar16,uVar10,0,0,0);
            plVar16 = *(long **)(*(long *)(*plVar15 + 0xb8) + 0x10);
            if (plVar16 != (long *)0x0) {
              lVar11 = *plVar16;
              goto LAB_05685224;
            }
          }
          goto LAB_05685584;
        }
        lVar13 = *plVar12;
        lVar11 = *(long *)Oculus_Platform_Request<LaunchUnblockFlowResult>_TypeInfo;
        goto LAB_05685134;
      }
    }
    if (!bVar3) {
      return plVar14;
    }
    lVar11 = *plVar15;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar11 = *plVar15;
    }
    if ((plVar14 != (long *)0x0) &&
       (plVar12 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x18), plVar12 != (long *)0x0)) {
      plVar12 = (long *)(**(code **)(*plVar12 + 0x308))
                                  (plVar12,plVar14[3],*(undefined8 *)(*plVar12 + 0x310));
      lVar11 = *(long *)Oculus_Platform_Request<LaunchUnblockFlowResult>_TypeInfo;
      if (plVar12 != (long *)0x0) {
        lVar13 = *plVar12;
LAB_05685134:
        if ((*(byte *)(lVar11 + 0x130) <= *(byte *)(lVar13 + 0x130)) &&
           (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11
           )) {
          return plVar12;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88();
      }
      lVar13 = plVar14[3];
      plVar12 = (long *)thunk_FUN_02d9d534(lVar11);
      FUN_05680308(plVar12,plVar16,lVar13,0,0,0);
      if (plVar12 != (long *)0x0) {
        *(undefined1 *)((long)plVar12 + 0x61) = 1;
        lVar11 = *plVar15;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar11 = *plVar15;
        }
        plVar16 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x18);
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x318))
                    (plVar16,plVar14[3],plVar12,*(undefined8 *)(*plVar16 + 800));
          return plVar12;
        }
      }
    }
  }
LAB_05685584:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


