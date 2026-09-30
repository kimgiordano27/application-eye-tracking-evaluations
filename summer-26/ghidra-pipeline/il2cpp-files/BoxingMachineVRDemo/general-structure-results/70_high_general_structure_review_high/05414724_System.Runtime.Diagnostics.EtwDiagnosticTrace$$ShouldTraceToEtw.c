/*
FUNCTION_NAME: System.Runtime.Diagnostics.EtwDiagnosticTrace$$ShouldTraceToEtw
ENTRY_POINT: 05414724
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 System_Runtime_Diagnostics_EtwDiagnosticTrace__ShouldTraceToEtw(long param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long unaff_x20;
  long *plVar16;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  long *plVar17;
  int unaff_w26;
  long *unaff_x27;
  long *unaff_x28;
  uint uVar18;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  
  while( true ) {
    plVar15 = *(long **)(unaff_x22 + 0x38);
    uVar4 = (**(code **)(param_1 + 0x2c8))(unaff_x27,*(undefined8 *)(param_1 + 0x2d0));
    if (plVar15 == (long *)0x0) break;
    uVar5 = (**(code **)(*plVar15 + 0x348))(plVar15,uVar4,*(undefined8 *)(*plVar15 + 0x350));
    plVar15 = (long *)PTR_DAT_0678fd00;
    if ((uVar5 & 1) != 0) {
      plVar15 = *(long **)(unaff_x22 + 0x38);
      uVar4 = (**(code **)(*unaff_x27 + 0x1b8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1c0));
      if (plVar15 == (long *)0x0) break;
      uVar5 = (**(code **)(*plVar15 + 0x348))(plVar15,uVar4,*(undefined8 *)(*plVar15 + 0x350));
      plVar15 = (long *)PTR_DAT_0678fd00;
      if (((uVar5 & 1) != 0) && (uVar5 = FUN_054182e0(), (uVar5 & 1) == 0)) goto LAB_05414d3c;
    }
LAB_05415ae0:
    do {
      do {
        unaff_w26 = unaff_w26 + 1;
        iVar2 = (**(code **)(*unaff_x24 + 0x1c8))();
        if (iVar2 <= unaff_w26) {
          FUN_0540ade0(*(undefined8 *)(unaff_x20 + 0x88),in_stack_00000018,0);
          return in_stack_00000018;
        }
        plVar3 = (long *)FUN_053b5a7c();
        if (plVar3 != (long *)0x0) {
          bVar1 = *(byte *)(*plVar15 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
             (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == *plVar15)) {
            plVar3 = (long *)FUN_053b5a7c();
            if (plVar3 == (long *)0x0) {
              uVar5 = FUN_054182e0();
              if ((uVar5 & 1) == 0) goto LAB_05415b58;
            }
            else {
              bVar1 = *(byte *)(*plVar15 + 0x130);
              if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *plVar15)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60e88(plVar3);
              }
              uVar5 = FUN_054182e0();
              if ((uVar5 & 1) == 0) {
                lVar6 = plVar3[7];
                plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414860:
                  uVar4 = FUN_0537e8d8(unaff_x20,0);
                  if (plVar15 == (long *)0x0) goto LAB_05415b58;
                  (**(code **)(*plVar15 + 0x558))
                            (plVar15,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                             *(undefined8 *)PTR_DAT_067900f8,uVar4,*(undefined8 *)(*plVar15 + 0x560)
                            );
                }
                else {
                  lVar7 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                  if (lVar7 == 0) goto LAB_05415b58;
                  iVar2 = FUN_053c77c0(lVar7,*(undefined8 *)(unaff_x20 + 0x90),0);
                  if (iVar2 == -3) goto LAB_05414860;
                }
                uVar4 = FUN_053b56cc(plVar3,0);
                if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                }
                uVar4 = FUN_0566e328(uVar4,0);
                if (plVar15 == (long *)0x0) goto LAB_05415b58;
                (**(code **)(*plVar15 + 0x518))
                          (plVar15,*(undefined8 *)PTR_DAT_0676b5d0,uVar4,
                           *(undefined8 *)(*plVar15 + 0x520));
                uVar4 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
                uVar10 = FUN_053b56cc(plVar3,0);
                uVar5 = FUN_04e8c024(uVar4,uVar10,0);
                if ((uVar5 & 1) != 0) {
                  uVar4 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
                  (**(code **)(*plVar15 + 0x558))
                            (plVar15,*(undefined8 *)
                                      Unity_VisualScripting_DoNotSerializeAttribute_var,
                             *(undefined8 *)PTR_DAT_067900f8,uVar4,*(undefined8 *)(*plVar15 + 0x560)
                            );
                }
                FUN_0540ade0(plVar3[6],plVar15,0);
                plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                uVar4 = FUN_053868f0(unaff_x20,0);
                uVar4 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                     in_stack_00000030,uVar4,0);
                if (plVar9 == (long *)0x0) goto LAB_05415b58;
                (**(code **)(*plVar9 + 0x518))
                          (plVar9,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar4,
                           *(undefined8 *)(*plVar9 + 0x520));
                (**(code **)(*plVar15 + 0x2d8))(plVar15,plVar9,*(undefined8 *)(*plVar15 + 0x2e0));
                uVar5 = System_Runtime_Serialization_XmlObjectSerializerContext__get_IgnoreExtensionDataObject
                                  (plVar3,0);
                if ((uVar5 & 1) != 0) {
                  (**(code **)(*plVar15 + 0x558))
                            (plVar15,*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_var,
                             *(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                             *(undefined8 *)(*plVar15 + 0x560));
                }
                if (lVar6 == 0) goto LAB_05415b58;
                if (*(long *)(lVar6 + 0x18) != 0) {
                  plVar3 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                  FUN_04e9624c(plVar3,0);
                  if (0 < *(int *)(lVar6 + 0x18)) {
                    if (plVar3 == (long *)0x0) goto LAB_05415b58;
                    lVar7 = 0;
                    do {
                      FUN_04e97278(plVar3,0,0);
                      uVar18 = (uint)lVar7;
                      if (*(int *)(unaff_x22 + 0x5c) == 2) {
                        plVar9 = (long *)FUN_04e97bc4(plVar3,in_stack_00000030,0);
                        if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_05415b5c;
                        lVar11 = *(long *)(lVar6 + 0x20 + lVar7 * 8);
                        if ((lVar11 == 0) || (uVar4 = FUN_05397bec(lVar11,0), plVar9 == (long *)0x0)
                           ) goto LAB_05415b58;
                      }
                      else {
                        if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_05415b5c;
                        plVar9 = (long *)(lVar6 + (long)(int)uVar18 * 8 + 0x20);
                        if (*plVar9 == 0) goto LAB_05415b58;
                        FUN_05399824(*plVar9,0);
                        FUN_05416194();
                        if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_05415b5c;
                        if (*plVar9 == 0) goto LAB_05415b58;
                        uVar4 = FUN_05399824(*plVar9,0);
                        uVar5 = FUN_04e8cf70(uVar4,0);
                        if ((uVar5 & 1) == 0) {
                          if (*(uint *)(lVar6 + 0x18) <= uVar18) {
LAB_05415b5c:
                    /* WARNING: Subroutine does not return */
                            FUN_02d60af0();
                          }
                          if (*plVar9 == 0) goto LAB_05415b58;
                          plVar17 = *(long **)(unaff_x22 + 0x28);
                          uVar4 = FUN_05399824(*plVar9,0);
                          if (plVar17 == (long *)0x0) goto LAB_05415b58;
                          uVar4 = (**(code **)(*plVar17 + 0x308))
                                            (plVar17,uVar4,*(undefined8 *)(*plVar17 + 0x310));
                          lVar11 = FUN_04e98bb0(plVar3,uVar4,0);
                          if (lVar11 == 0) goto LAB_05415b58;
                          FUN_04e98a58(lVar11,0x3a,0);
                        }
                        if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_05415b5c;
                        if (*plVar9 == 0) goto LAB_05415b58;
                        uVar4 = FUN_05397bec(*plVar9,0);
                        plVar9 = plVar3;
                      }
                      FUN_04e97bc4(plVar9,uVar4,0);
                      if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_05415b5c;
                      plVar17 = (long *)(lVar6 + (long)(int)uVar18 * 8 + 0x20);
                      plVar9 = (long *)*plVar17;
                      if (plVar9 == (long *)0x0) goto LAB_05415b58;
                      iVar2 = (**(code **)(*plVar9 + 0x1d8))
                                        (plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
                      if (iVar2 == 2) {
LAB_05414c38:
                        FUN_04e98e18(plVar3,0,0x40,0);
                      }
                      else {
                        if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_05415b5c;
                        plVar17 = (long *)*plVar17;
                        if (plVar17 == (long *)0x0) goto LAB_05415b58;
                        iVar2 = (**(code **)(*plVar17 + 0x1d8))
                                          (plVar17,*(undefined8 *)(*plVar17 + 0x1e0));
                        if (iVar2 == 4) goto LAB_05414c38;
                      }
                      plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                      uVar4 = (**(code **)(*plVar3 + 0x168))
                                        (plVar3,*(undefined8 *)(*plVar3 + 0x170));
                      if (plVar9 == (long *)0x0) goto LAB_05415b58;
                      (**(code **)(*plVar9 + 0x518))
                                (plVar9,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,
                                 uVar4,*(undefined8 *)(*plVar9 + 0x520));
                      (**(code **)(*plVar15 + 0x2d8))
                                (plVar15,plVar9,*(undefined8 *)(*plVar15 + 0x2e0));
                      lVar7 = lVar7 + 1;
                    } while ((int)lVar7 < *(int *)(lVar6 + 0x18));
                  }
                }
                plVar3 = *(long **)(unaff_x22 + 0x78);
                if (plVar3 == (long *)0x0) goto LAB_05415b58;
                (**(code **)(*plVar3 + 0x298))
                          (plVar3,plVar15,*(undefined8 *)(unaff_x22 + 0x80),
                           *(undefined8 *)(*plVar3 + 0x2a0));
                plVar15 = (long *)PTR_DAT_0678fd00;
                unaff_x20 = in_stack_00000020;
                unaff_x28 = (long *)PTR_DAT_0678fcf8;
              }
            }
            goto LAB_05415ae0;
          }
        }
        plVar3 = (long *)FUN_053b5a7c();
      } while (plVar3 == (long *)0x0);
      bVar1 = *(byte *)(*unaff_x28 + 0x130);
    } while (((*(byte *)(*plVar3 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28)) ||
            ((in_stack_00000028 & 0x100000000) == 0));
    unaff_x27 = (long *)FUN_053b5a7c();
    if (unaff_x27 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x28 + 0x130);
      if ((*(byte *)(*unaff_x27 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x27 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(unaff_x27);
      }
    }
    plVar3 = *(long **)(unaff_x22 + 0x38);
    if (plVar3 == (long *)0x0) break;
    iVar2 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
    if (iVar2 < 1) {
      uVar5 = FUN_054182e0();
      if ((uVar5 & 1) == 0) {
        if (unaff_x27 == (long *)0x0) break;
LAB_05414d3c:
        plVar15 = (long *)FUN_053e1128(unaff_x27,0);
        lVar6 = FUN_053e0970(unaff_x27,0);
        lVar7 = (**(code **)(*unaff_x27 + 0x2c8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
        if (lVar7 == 0) break;
        lVar7 = *(long *)(lVar7 + 0x48);
        uVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0678fd00);
        FUN_053eb24c(uVar4,*(undefined8 *)UnityEngine_GUILayoutGroup_var,lVar6,0);
        if (lVar7 == 0) break;
        plVar3 = (long *)FUN_053b6184(lVar7,uVar4,0);
        if (plVar3 == (long *)0x0) {
          plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
          uVar4 = FUN_053b56cc(unaff_x27,0);
          if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
          }
          uVar4 = FUN_0566e328(uVar4,0);
          if (plVar9 == (long *)0x0) break;
          (**(code **)(*plVar9 + 0x518))
                    (plVar9,*(undefined8 *)PTR_DAT_0676b5d0,uVar4,*(undefined8 *)(*plVar9 + 0x520));
          if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414edc:
            uVar4 = FUN_0537e8d8(in_stack_00000020,0);
            (**(code **)(*plVar9 + 0x558))
                      (plVar9,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                       *(undefined8 *)PTR_DAT_067900f8,uVar4,*(undefined8 *)(*plVar9 + 0x560));
          }
          else {
            lVar7 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
            if (lVar7 == 0) break;
            iVar2 = FUN_053c77c0(lVar7,*(undefined8 *)(in_stack_00000020 + 0x90),0);
            if (iVar2 == -3) goto LAB_05414edc;
          }
          plVar17 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
          lVar7 = (**(code **)(*unaff_x27 + 0x2c8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
          if (lVar7 == 0) break;
          uVar4 = FUN_053868f0(lVar7,0);
          uVar4 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                               in_stack_00000030,uVar4,0);
          if (plVar17 == (long *)0x0) break;
          (**(code **)(*plVar17 + 0x518))
                    (plVar17,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar4,
                     *(undefined8 *)(*plVar17 + 0x520));
          (**(code **)(*plVar9 + 0x2d8))(plVar9,plVar17,*(undefined8 *)(*plVar9 + 0x2e0));
          if (lVar6 == 0) break;
          if (*(long *)(lVar6 + 0x18) != 0) {
            plVar17 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
            FUN_04e9624c(plVar17,0);
            if (0 < *(int *)(lVar6 + 0x18)) {
              if (plVar17 == (long *)0x0) break;
              lVar7 = 0;
              do {
                FUN_04e97278(plVar17,0,0);
                uVar18 = (uint)lVar7;
                if (*(int *)(unaff_x22 + 0x5c) == 2) {
                  plVar8 = (long *)FUN_04e97bc4(plVar17,in_stack_00000030,0);
                  if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_05415b5c;
                  lVar11 = *(long *)(lVar6 + 0x20 + lVar7 * 8);
                  if ((lVar11 == 0) || (uVar4 = FUN_05397bec(lVar11,0), plVar8 == (long *)0x0))
                  goto LAB_05415b58;
                }
                else {
                  if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_05415b5c;
                  plVar8 = (long *)(lVar6 + (long)(int)uVar18 * 8 + 0x20);
                  if (*plVar8 == 0) goto LAB_05415b58;
                  FUN_05399824(*plVar8,0);
                  FUN_05416194();
                  if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_05415b5c;
                  if (*plVar8 == 0) goto LAB_05415b58;
                  uVar4 = FUN_05399824(*plVar8,0);
                  uVar5 = FUN_04e8cf70(uVar4,0);
                  if ((uVar5 & 1) == 0) {
                    if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_05415b5c;
                    if (*plVar8 == 0) goto LAB_05415b58;
                    plVar16 = *(long **)(unaff_x22 + 0x28);
                    uVar4 = FUN_05399824(*plVar8,0);
                    if (plVar16 == (long *)0x0) goto LAB_05415b58;
                    uVar4 = (**(code **)(*plVar16 + 0x308))
                                      (plVar16,uVar4,*(undefined8 *)(*plVar16 + 0x310));
                    lVar11 = FUN_04e98bb0(plVar17,uVar4,0);
                    if (lVar11 == 0) goto LAB_05415b58;
                    FUN_04e98a58(lVar11,0x3a,0);
                  }
                  if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_05415b5c;
                  if (*plVar8 == 0) goto LAB_05415b58;
                  uVar4 = FUN_05397bec(*plVar8,0);
                  plVar8 = plVar17;
                }
                FUN_04e97bc4(plVar8,uVar4,0);
                if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_05415b5c;
                plVar16 = (long *)(lVar6 + (long)(int)uVar18 * 8 + 0x20);
                plVar8 = (long *)*plVar16;
                if (plVar8 == (long *)0x0) goto LAB_05415b58;
                iVar2 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
                if (iVar2 == 2) {
LAB_054151a8:
                  FUN_04e98e18(plVar17,0,0x40,0);
                }
                else {
                  if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_05415b5c;
                  plVar16 = (long *)*plVar16;
                  if (plVar16 == (long *)0x0) goto LAB_05415b58;
                  iVar2 = (**(code **)(*plVar16 + 0x1d8))(plVar16,*(undefined8 *)(*plVar16 + 0x1e0))
                  ;
                  if (iVar2 == 4) goto LAB_054151a8;
                }
                plVar8 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                uVar4 = (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
                if (plVar8 == (long *)0x0) goto LAB_05415b58;
                (**(code **)(*plVar8 + 0x518))
                          (plVar8,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar4,
                           *(undefined8 *)(*plVar8 + 0x520));
                (**(code **)(*plVar9 + 0x2d8))(plVar9,plVar8,*(undefined8 *)(*plVar9 + 0x2e0));
                lVar7 = lVar7 + 1;
              } while ((int)lVar7 < *(int *)(lVar6 + 0x18));
            }
          }
          plVar17 = *(long **)(unaff_x22 + 0x78);
          if (plVar17 == (long *)0x0) break;
          (**(code **)(*plVar17 + 0x298))
                    (plVar17,plVar9,*(undefined8 *)(unaff_x22 + 0x80),
                     *(undefined8 *)(*plVar17 + 0x2a0));
          unaff_x28 = (long *)PTR_DAT_0678fcf8;
        }
        else {
          bVar1 = *(byte *)(*(long *)PTR_DAT_0678fd00 + 0x130);
          if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_0678fd00)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60e88(plVar3);
          }
        }
        plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
        uVar4 = FUN_053b56cc(unaff_x27,0);
        if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
        }
        uVar4 = FUN_0566e328(uVar4,0);
        if (plVar9 == (long *)0x0) break;
        (**(code **)(*plVar9 + 0x518))
                  (plVar9,*(undefined8 *)PTR_DAT_0676b5d0,uVar4,*(undefined8 *)(*plVar9 + 0x520));
        if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05415360:
          lVar6 = (**(code **)(*unaff_x27 + 0x1b8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1c0));
          if (lVar6 == 0) break;
          uVar4 = FUN_0537e8d8(lVar6,0);
          (**(code **)(*plVar9 + 0x558))
                    (plVar9,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                     *(undefined8 *)PTR_DAT_067900f8,uVar4,*(undefined8 *)(*plVar9 + 0x560));
        }
        else {
          lVar7 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
          lVar6 = (**(code **)(*unaff_x27 + 0x2c8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
          if ((lVar6 == 0) || (lVar7 == 0)) break;
          iVar2 = FUN_053c77c0(lVar7,*(undefined8 *)(lVar6 + 0x90),0);
          if (iVar2 == -3) goto LAB_05415360;
        }
        plVar17 = unaff_x27;
        if (plVar3 != (long *)0x0) {
          plVar17 = plVar3;
        }
        uVar4 = FUN_053b56cc(plVar17,0);
        if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
        }
        uVar4 = FUN_0566e328(uVar4,0);
        (**(code **)(*plVar9 + 0x518))
                  (plVar9,*(undefined8 *)PTR_DAT_06790b00,uVar4,*(undefined8 *)(*plVar9 + 0x520));
        lVar6 = unaff_x27[6];
        uVar4 = *(undefined8 *)PTR_DAT_06791188;
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_05015c2c(uVar4,0);
        FUN_0540ade0(lVar6,plVar9,uVar4);
        uVar4 = (**(code **)(*unaff_x27 + 0x178))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x180));
        uVar10 = FUN_053b56cc(unaff_x27,0);
        uVar5 = FUN_04e8c024(uVar4,uVar10,0);
        if ((uVar5 & 1) != 0) {
          uVar4 = (**(code **)(*unaff_x27 + 0x178))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x180));
          (**(code **)(*plVar9 + 0x558))
                    (plVar9,*(undefined8 *)Unity_VisualScripting_DoNotSerializeAttribute_var,
                     *(undefined8 *)PTR_DAT_067900f8,uVar4,*(undefined8 *)(*plVar9 + 0x560));
        }
        if (plVar15 == (long *)0x0) {
          lVar6 = *plVar9;
          uVar10 = *(undefined8 *)Firebase_Firestore_DocumentReference_var;
          uVar13 = *(undefined8 *)PTR_DAT_067900f8;
          uVar14 = *(undefined8 *)(lVar6 + 0x560);
          uVar4 = *(undefined8 *)PTR_DAT_06771b30;
LAB_0541562c:
          (**(code **)(lVar6 + 0x558))(plVar9,uVar10,uVar13,uVar4,uVar14);
        }
        else {
          uVar5 = (**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
          if ((uVar5 & 1) != 0) {
            (**(code **)(*plVar9 + 0x558))
                      (plVar9,*(undefined8 *)
                               System_Runtime_CompilerServices_DecimalConstantAttribute_var,
                       *(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                       *(undefined8 *)(*plVar9 + 0x560));
          }
          lVar6 = plVar15[3];
          uVar4 = *(undefined8 *)UnityEngine_XR_ARFoundation_ARTrackedObjectsChangedEventArgs_var;
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar4 = FUN_05015c2c(uVar4,0);
          FUN_0540ade0(lVar6,plVar9,uVar4);
          uVar4 = (**(code **)(*unaff_x27 + 0x178))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x180));
          uVar10 = (**(code **)(*plVar15 + 0x1c8))(plVar15,*(undefined8 *)(*plVar15 + 0x1d0));
          uVar5 = FUN_04e8c024(uVar4,uVar10,0);
          if ((uVar5 & 1) != 0) {
            uVar4 = (**(code **)(*plVar15 + 0x1c8))(plVar15,*(undefined8 *)(*plVar15 + 0x1d0));
            if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
            }
            uVar4 = FUN_0566e328(uVar4,0);
            lVar6 = *plVar9;
            uVar10 = *(undefined8 *)System_Runtime_InteropServices_DllImportAttribute_var;
            uVar14 = *(undefined8 *)(lVar6 + 0x560);
            uVar13 = *(undefined8 *)PTR_DAT_067900f8;
            goto LAB_0541562c;
          }
        }
        plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
        uVar4 = FUN_053868f0(in_stack_00000020,0);
        uVar4 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                             in_stack_00000030,uVar4,0);
        if (plVar15 == (long *)0x0) break;
        (**(code **)(*plVar15 + 0x518))
                  (plVar15,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar4,
                   *(undefined8 *)(*plVar15 + 0x520));
        (**(code **)(*plVar9 + 0x2d8))(plVar9,plVar15,*(undefined8 *)(*plVar9 + 0x2e0));
        iVar2 = (**(code **)(*unaff_x27 + 0x278))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x280));
        if (iVar2 != 0) {
          (**(code **)(*unaff_x27 + 0x278))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x280));
          uVar4 = FUN_05417bfc();
          (**(code **)(*plVar9 + 0x558))
                    (plVar9,*(undefined8 *)UnityEngine_UIElements_DragAndDropArgs_var,
                     *(undefined8 *)PTR_DAT_067900f8,uVar4,*(undefined8 *)(*plVar9 + 0x560));
        }
        iVar2 = (**(code **)(*unaff_x27 + 0x2d8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2e0));
        if (iVar2 != 1) {
          (**(code **)(*unaff_x27 + 0x2d8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2e0));
          uVar4 = FUN_05417c6c();
          (**(code **)(*plVar9 + 0x558))
                    (plVar9,*(undefined8 *)UnityEngine_InputSystem_Controls_DoubleControl_var,
                     *(undefined8 *)PTR_DAT_067900f8,uVar4,*(undefined8 *)(*plVar9 + 0x560));
        }
        iVar2 = (**(code **)(*unaff_x27 + 0x298))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2a0));
        if (iVar2 != 1) {
          (**(code **)(*unaff_x27 + 0x298))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2a0));
          uVar4 = FUN_05417c6c();
          (**(code **)(*plVar9 + 0x558))
                    (plVar9,*(undefined8 *)UnityEngine_InputSystem_Controls_DpadControl_var,
                     *(undefined8 *)PTR_DAT_067900f8,uVar4,*(undefined8 *)(*plVar9 + 0x560));
        }
        lVar6 = (**(code **)(*unaff_x27 + 0x268))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x270));
        if (lVar6 == 0) break;
        if (*(long *)(lVar6 + 0x18) != 0) {
          plVar15 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
          FUN_04e9624c(plVar15,0);
          if (0 < *(int *)(lVar6 + 0x18)) {
            if (plVar15 == (long *)0x0) break;
            lVar7 = 0;
            do {
              FUN_04e97278(plVar15,0,0);
              uVar18 = (uint)lVar7;
              if (*(int *)(unaff_x22 + 0x5c) == 2) {
                lVar11 = FUN_04e97bc4(plVar15,in_stack_00000030,0);
                if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_05415b5c;
                lVar12 = *(long *)(lVar6 + 0x20 + lVar7 * 8);
                if ((lVar12 == 0) || (uVar4 = FUN_05397bec(lVar12,0), lVar11 == 0))
                goto LAB_05415b58;
                FUN_04e97bc4(lVar11,uVar4,0);
              }
              else {
                if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_05415b5c;
                plVar3 = (long *)(lVar6 + (long)(int)uVar18 * 8 + 0x20);
                if (*plVar3 == 0) goto LAB_05415b58;
                FUN_05399824(*plVar3,0);
                FUN_05416194();
                if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_05415b5c;
                if (*plVar3 == 0) goto LAB_05415b58;
                uVar4 = FUN_05399824(*plVar3,0);
                uVar5 = FUN_04e8cf70(uVar4,0);
                if ((uVar5 & 1) == 0) {
                  if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_05415b5c;
                  if (*plVar3 == 0) goto LAB_05415b58;
                  plVar17 = *(long **)(unaff_x22 + 0x28);
                  uVar4 = FUN_05399824(*plVar3,0);
                  if (plVar17 == (long *)0x0) goto LAB_05415b58;
                  uVar4 = (**(code **)(*plVar17 + 0x308))
                                    (plVar17,uVar4,*(undefined8 *)(*plVar17 + 0x310));
                  lVar11 = FUN_04e98bb0(plVar15,uVar4,0);
                  if (lVar11 == 0) goto LAB_05415b58;
                  FUN_04e98a58(lVar11,0x3a,0);
                }
                if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_05415b5c;
                if (*plVar3 == 0) goto LAB_05415b58;
                uVar4 = FUN_05397bec(*plVar3,0);
                FUN_04e97bc4(plVar15,uVar4,0);
                unaff_x28 = (long *)PTR_DAT_0678fcf8;
              }
              if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_05415b5c;
              plVar17 = (long *)(lVar6 + (long)(int)uVar18 * 8 + 0x20);
              plVar3 = (long *)*plVar17;
              if (plVar3 == (long *)0x0) goto LAB_05415b58;
              iVar2 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
              if (iVar2 == 2) {
LAB_054159fc:
                FUN_04e98e18(plVar15,0,0x40,0);
              }
              else {
                if (*(uint *)(lVar6 + 0x18) <= uVar18) goto LAB_05415b5c;
                plVar17 = (long *)*plVar17;
                if (plVar17 == (long *)0x0) goto LAB_05415b58;
                iVar2 = (**(code **)(*plVar17 + 0x1d8))(plVar17,*(undefined8 *)(*plVar17 + 0x1e0));
                if (iVar2 == 4) goto LAB_054159fc;
              }
              plVar3 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              uVar4 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
              if (plVar3 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar3 + 0x518))
                        (plVar3,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar4,
                         *(undefined8 *)(*plVar3 + 0x520));
              (**(code **)(*plVar9 + 0x2d8))(plVar9,plVar3,*(undefined8 *)(*plVar9 + 0x2e0));
              lVar7 = lVar7 + 1;
            } while ((int)lVar7 < *(int *)(lVar6 + 0x18));
          }
        }
        plVar15 = *(long **)(unaff_x22 + 0x78);
        if (plVar15 == (long *)0x0) break;
        (**(code **)(*plVar15 + 0x2a8))
                  (plVar15,plVar9,*(undefined8 *)(unaff_x22 + 0x80),
                   *(undefined8 *)(*plVar15 + 0x2b0));
        plVar15 = (long *)PTR_DAT_0678fd00;
        unaff_x20 = in_stack_00000020;
      }
      goto LAB_05415ae0;
    }
    if (unaff_x27 == (long *)0x0) break;
    param_1 = *unaff_x27;
  }
LAB_05415b58:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


