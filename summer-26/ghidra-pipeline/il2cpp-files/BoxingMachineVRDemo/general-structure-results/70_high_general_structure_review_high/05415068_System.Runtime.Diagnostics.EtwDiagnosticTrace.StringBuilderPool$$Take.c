/*
FUNCTION_NAME: System.Runtime.Diagnostics.EtwDiagnosticTrace.StringBuilderPool$$Take
ENTRY_POINT: 05415068
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


undefined8 System_Runtime_Diagnostics_EtwDiagnosticTrace_StringBuilderPool__Take(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *unaff_x19;
  long lVar14;
  long *plVar15;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *plVar16;
  int unaff_w26;
  long *unaff_x27;
  uint uVar17;
  long unaff_x28;
  long unaff_x29;
  long *in_stack_00000000;
  long *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  
code_r0x05415068:
  if (unaff_x25 != (long *)0x0) {
LAB_0541514c:
    FUN_04e97bc4(unaff_x25,param_1,0);
    uVar17 = (uint)unaff_x28;
    if (uVar17 < *(uint *)(unaff_x29 + 0x18)) {
      plVar15 = (long *)(unaff_x29 + (long)(int)uVar17 * 8 + 0x20);
      plVar3 = (long *)*plVar15;
      if (plVar3 != (long *)0x0) {
        iVar2 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
        if (iVar2 == 2) {
LAB_054151a8:
          FUN_04e98e18(unaff_x19,0,0x40,0);
        }
        else {
          if (*(uint *)(unaff_x29 + 0x18) <= uVar17) goto LAB_05415b5c;
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_05415b58;
          iVar2 = (**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
          if (iVar2 == 4) goto LAB_054151a8;
        }
        plVar3 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
        uVar4 = (**(code **)(*unaff_x19 + 0x168))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x170));
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x518))
                    (plVar3,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar4,
                     *(undefined8 *)(*plVar3 + 0x520));
          (**(code **)(*unaff_x23 + 0x2d8))(unaff_x23,plVar3,*(undefined8 *)(*unaff_x23 + 0x2e0));
          unaff_x28 = unaff_x28 + 1;
          unaff_x25 = unaff_x19;
          if (*(int *)(unaff_x29 + 0x18) <= (int)unaff_x28) {
LAB_05415258:
            plVar3 = *(long **)(unaff_x22 + 0x78);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x298))
                        (plVar3,unaff_x23,*(undefined8 *)(unaff_x22 + 0x80),
                         *(undefined8 *)(*plVar3 + 0x2a0));
              plVar3 = (long *)PTR_DAT_0678fcf8;
              do {
                plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                uVar4 = FUN_053b56cc(unaff_x27,0);
                if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                }
                uVar4 = FUN_0566e328(uVar4,0);
                if (plVar15 == (long *)0x0) break;
                (**(code **)(*plVar15 + 0x518))
                          (plVar15,*(undefined8 *)PTR_DAT_0676b5d0,uVar4,
                           *(undefined8 *)(*plVar15 + 0x520));
                if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05415360:
                  lVar5 = (**(code **)(*unaff_x27 + 0x1b8))
                                    (unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1c0));
                  if (lVar5 == 0) break;
                  uVar4 = FUN_0537e8d8(lVar5,0);
                  (**(code **)(*plVar15 + 0x558))
                            (plVar15,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                             *(undefined8 *)PTR_DAT_067900f8,uVar4,*(undefined8 *)(*plVar15 + 0x560)
                            );
                }
                else {
                  lVar14 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                  lVar5 = (**(code **)(*unaff_x27 + 0x2c8))
                                    (unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
                  if ((lVar5 == 0) || (lVar14 == 0)) break;
                  iVar2 = FUN_053c77c0(lVar14,*(undefined8 *)(lVar5 + 0x90),0);
                  if (iVar2 == -3) goto LAB_05415360;
                }
                plVar8 = unaff_x27;
                if (in_stack_00000000 != (long *)0x0) {
                  plVar8 = in_stack_00000000;
                }
                uVar4 = FUN_053b56cc(plVar8,0);
                if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                }
                uVar4 = FUN_0566e328(uVar4,0);
                (**(code **)(*plVar15 + 0x518))
                          (plVar15,*(undefined8 *)PTR_DAT_06790b00,uVar4,
                           *(undefined8 *)(*plVar15 + 0x520));
                lVar5 = unaff_x27[6];
                uVar4 = *(undefined8 *)PTR_DAT_06791188;
                if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar4 = FUN_05015c2c(uVar4,0);
                FUN_0540ade0(lVar5,plVar15,uVar4);
                uVar4 = (**(code **)(*unaff_x27 + 0x178))
                                  (unaff_x27,*(undefined8 *)(*unaff_x27 + 0x180));
                uVar6 = FUN_053b56cc(unaff_x27,0);
                uVar7 = FUN_04e8c024(uVar4,uVar6,0);
                if ((uVar7 & 1) != 0) {
                  uVar4 = (**(code **)(*unaff_x27 + 0x178))
                                    (unaff_x27,*(undefined8 *)(*unaff_x27 + 0x180));
                  (**(code **)(*plVar15 + 0x558))
                            (plVar15,*(undefined8 *)
                                      Unity_VisualScripting_DoNotSerializeAttribute_var,
                             *(undefined8 *)PTR_DAT_067900f8,uVar4,*(undefined8 *)(*plVar15 + 0x560)
                            );
                }
                if (in_stack_00000008 == (long *)0x0) {
                  lVar5 = *plVar15;
                  uVar6 = *(undefined8 *)Firebase_Firestore_DocumentReference_var;
                  uVar12 = *(undefined8 *)PTR_DAT_067900f8;
                  uVar13 = *(undefined8 *)(lVar5 + 0x560);
                  uVar4 = *(undefined8 *)PTR_DAT_06771b30;
LAB_0541562c:
                  (**(code **)(lVar5 + 0x558))(plVar15,uVar6,uVar12,uVar4,uVar13);
                }
                else {
                  uVar7 = (**(code **)(*in_stack_00000008 + 0x1d8))
                                    (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x1e0));
                  if ((uVar7 & 1) != 0) {
                    (**(code **)(*plVar15 + 0x558))
                              (plVar15,*(undefined8 *)
                                        System_Runtime_CompilerServices_DecimalConstantAttribute_var
                               ,*(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                               *(undefined8 *)(*plVar15 + 0x560));
                  }
                  lVar5 = in_stack_00000008[3];
                  uVar4 = *(undefined8 *)
                           UnityEngine_XR_ARFoundation_ARTrackedObjectsChangedEventArgs_var;
                  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar4 = FUN_05015c2c(uVar4,0);
                  FUN_0540ade0(lVar5,plVar15,uVar4);
                  uVar4 = (**(code **)(*unaff_x27 + 0x178))
                                    (unaff_x27,*(undefined8 *)(*unaff_x27 + 0x180));
                  uVar6 = (**(code **)(*in_stack_00000008 + 0x1c8))
                                    (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x1d0));
                  uVar7 = FUN_04e8c024(uVar4,uVar6,0);
                  if ((uVar7 & 1) != 0) {
                    uVar4 = (**(code **)(*in_stack_00000008 + 0x1c8))
                                      (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x1d0)
                                      );
                    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                    }
                    uVar4 = FUN_0566e328(uVar4,0);
                    lVar5 = *plVar15;
                    uVar6 = *(undefined8 *)System_Runtime_InteropServices_DllImportAttribute_var;
                    uVar13 = *(undefined8 *)(lVar5 + 0x560);
                    uVar12 = *(undefined8 *)PTR_DAT_067900f8;
                    goto LAB_0541562c;
                  }
                }
                plVar8 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                uVar4 = FUN_053868f0(in_stack_00000020,0);
                uVar4 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                     in_stack_00000030,uVar4,0);
                if (plVar8 == (long *)0x0) break;
                (**(code **)(*plVar8 + 0x518))
                          (plVar8,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar4,
                           *(undefined8 *)(*plVar8 + 0x520));
                (**(code **)(*plVar15 + 0x2d8))(plVar15,plVar8,*(undefined8 *)(*plVar15 + 0x2e0));
                iVar2 = (**(code **)(*unaff_x27 + 0x278))
                                  (unaff_x27,*(undefined8 *)(*unaff_x27 + 0x280));
                if (iVar2 != 0) {
                  (**(code **)(*unaff_x27 + 0x278))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x280));
                  uVar4 = FUN_05417bfc();
                  (**(code **)(*plVar15 + 0x558))
                            (plVar15,*(undefined8 *)UnityEngine_UIElements_DragAndDropArgs_var,
                             *(undefined8 *)PTR_DAT_067900f8,uVar4,*(undefined8 *)(*plVar15 + 0x560)
                            );
                }
                iVar2 = (**(code **)(*unaff_x27 + 0x2d8))
                                  (unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2e0));
                if (iVar2 != 1) {
                  (**(code **)(*unaff_x27 + 0x2d8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2e0));
                  uVar4 = FUN_05417c6c();
                  (**(code **)(*plVar15 + 0x558))
                            (plVar15,*(undefined8 *)
                                      UnityEngine_InputSystem_Controls_DoubleControl_var,
                             *(undefined8 *)PTR_DAT_067900f8,uVar4,*(undefined8 *)(*plVar15 + 0x560)
                            );
                }
                iVar2 = (**(code **)(*unaff_x27 + 0x298))
                                  (unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2a0));
                if (iVar2 != 1) {
                  (**(code **)(*unaff_x27 + 0x298))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2a0));
                  uVar4 = FUN_05417c6c();
                  (**(code **)(*plVar15 + 0x558))
                            (plVar15,*(undefined8 *)UnityEngine_InputSystem_Controls_DpadControl_var
                             ,*(undefined8 *)PTR_DAT_067900f8,uVar4,
                             *(undefined8 *)(*plVar15 + 0x560));
                }
                lVar5 = (**(code **)(*unaff_x27 + 0x268))
                                  (unaff_x27,*(undefined8 *)(*unaff_x27 + 0x270));
                if (lVar5 == 0) break;
                if (*(long *)(lVar5 + 0x18) != 0) {
                  plVar8 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                  FUN_04e9624c(plVar8,0);
                  if (0 < *(int *)(lVar5 + 0x18)) {
                    if (plVar8 == (long *)0x0) break;
                    lVar14 = 0;
                    do {
                      FUN_04e97278(plVar8,0,0);
                      uVar17 = (uint)lVar14;
                      if (*(int *)(unaff_x22 + 0x5c) == 2) {
                        lVar9 = FUN_04e97bc4(plVar8,in_stack_00000030,0);
                        if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                        lVar10 = *(long *)(lVar5 + 0x20 + lVar14 * 8);
                        if ((lVar10 == 0) || (uVar4 = FUN_05397bec(lVar10,0), lVar9 == 0))
                        goto LAB_05415b58;
                        FUN_04e97bc4(lVar9,uVar4,0);
                      }
                      else {
                        if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                        plVar3 = (long *)(lVar5 + (long)(int)uVar17 * 8 + 0x20);
                        if (*plVar3 == 0) goto LAB_05415b58;
                        FUN_05399824(*plVar3,0);
                        FUN_05416194();
                        if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                        if (*plVar3 == 0) goto LAB_05415b58;
                        uVar4 = FUN_05399824(*plVar3,0);
                        uVar7 = FUN_04e8cf70(uVar4,0);
                        if ((uVar7 & 1) == 0) {
                          if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                          if (*plVar3 == 0) goto LAB_05415b58;
                          plVar11 = *(long **)(unaff_x22 + 0x28);
                          uVar4 = FUN_05399824(*plVar3,0);
                          if (plVar11 == (long *)0x0) goto LAB_05415b58;
                          uVar4 = (**(code **)(*plVar11 + 0x308))
                                            (plVar11,uVar4,*(undefined8 *)(*plVar11 + 0x310));
                          lVar9 = FUN_04e98bb0(plVar8,uVar4,0);
                          if (lVar9 == 0) goto LAB_05415b58;
                          FUN_04e98a58(lVar9,0x3a,0);
                        }
                        if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                        if (*plVar3 == 0) goto LAB_05415b58;
                        uVar4 = FUN_05397bec(*plVar3,0);
                        FUN_04e97bc4(plVar8,uVar4,0);
                        plVar3 = (long *)PTR_DAT_0678fcf8;
                      }
                      if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                      plVar16 = (long *)(lVar5 + (long)(int)uVar17 * 8 + 0x20);
                      plVar11 = (long *)*plVar16;
                      if (plVar11 == (long *)0x0) goto LAB_05415b58;
                      iVar2 = (**(code **)(*plVar11 + 0x1d8))
                                        (plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
                      if (iVar2 == 2) {
LAB_054159fc:
                        FUN_04e98e18(plVar8,0,0x40,0);
                      }
                      else {
                        if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                        plVar16 = (long *)*plVar16;
                        if (plVar16 == (long *)0x0) goto LAB_05415b58;
                        iVar2 = (**(code **)(*plVar16 + 0x1d8))
                                          (plVar16,*(undefined8 *)(*plVar16 + 0x1e0));
                        if (iVar2 == 4) goto LAB_054159fc;
                      }
                      plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                      uVar4 = (**(code **)(*plVar8 + 0x168))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x170));
                      if (plVar11 == (long *)0x0) goto LAB_05415b58;
                      (**(code **)(*plVar11 + 0x518))
                                (plVar11,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,
                                 uVar4,*(undefined8 *)(*plVar11 + 0x520));
                      (**(code **)(*plVar15 + 0x2d8))
                                (plVar15,plVar11,*(undefined8 *)(*plVar15 + 0x2e0));
                      lVar14 = lVar14 + 1;
                    } while ((int)lVar14 < *(int *)(lVar5 + 0x18));
                  }
                }
                plVar8 = *(long **)(unaff_x22 + 0x78);
                if (plVar8 == (long *)0x0) break;
                (**(code **)(*plVar8 + 0x2a8))
                          (plVar8,plVar15,*(undefined8 *)(unaff_x22 + 0x80),
                           *(undefined8 *)(*plVar8 + 0x2b0));
                plVar15 = (long *)PTR_DAT_0678fd00;
LAB_05415ae0:
                do {
                  do {
                    do {
                      do {
                        unaff_w26 = unaff_w26 + 1;
                        iVar2 = (**(code **)(*unaff_x24 + 0x1c8))();
                        if (iVar2 <= unaff_w26) {
                          FUN_0540ade0(*(undefined8 *)(in_stack_00000020 + 0x88),in_stack_00000018,0
                                      );
                          return in_stack_00000018;
                        }
                        plVar8 = (long *)FUN_053b5a7c();
                        if (plVar8 != (long *)0x0) {
                          bVar1 = *(byte *)(*plVar15 + 0x130);
                          if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
                             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) ==
                              *plVar15)) {
                            plVar8 = (long *)FUN_053b5a7c();
                            if (plVar8 == (long *)0x0) {
                              uVar7 = FUN_054182e0();
                              if ((uVar7 & 1) == 0) goto LAB_05415b58;
                            }
                            else {
                              bVar1 = *(byte *)(*plVar15 + 0x130);
                              if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
                                 (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                                  *plVar15)) {
                    /* WARNING: Subroutine does not return */
                                FUN_02d60e88(plVar8);
                              }
                              uVar7 = FUN_054182e0();
                              if ((uVar7 & 1) == 0) {
                                lVar5 = plVar8[7];
                                plVar3 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                                if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414860:
                                  uVar4 = FUN_0537e8d8(in_stack_00000020,0);
                                  if (plVar3 == (long *)0x0) goto LAB_05415b58;
                                  (**(code **)(*plVar3 + 0x558))
                                            (plVar3,*(undefined8 *)
                                                     System_ComponentModel_DoubleConverter_var,
                                             *(undefined8 *)PTR_DAT_067900f8,uVar4,
                                             *(undefined8 *)(*plVar3 + 0x560));
                                }
                                else {
                                  lVar14 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                                  if (lVar14 == 0) goto LAB_05415b58;
                                  iVar2 = FUN_053c77c0(lVar14,*(undefined8 *)
                                                               (in_stack_00000020 + 0x90),0);
                                  if (iVar2 == -3) goto LAB_05414860;
                                }
                                uVar4 = FUN_053b56cc(plVar8,0);
                                if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                                  thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                                }
                                uVar4 = FUN_0566e328(uVar4,0);
                                if (plVar3 == (long *)0x0) goto LAB_05415b58;
                                (**(code **)(*plVar3 + 0x518))
                                          (plVar3,*(undefined8 *)PTR_DAT_0676b5d0,uVar4,
                                           *(undefined8 *)(*plVar3 + 0x520));
                                uVar4 = (**(code **)(*plVar8 + 0x178))
                                                  (plVar8,*(undefined8 *)(*plVar8 + 0x180));
                                uVar6 = FUN_053b56cc(plVar8,0);
                                uVar7 = FUN_04e8c024(uVar4,uVar6,0);
                                if ((uVar7 & 1) != 0) {
                                  uVar4 = (**(code **)(*plVar8 + 0x178))
                                                    (plVar8,*(undefined8 *)(*plVar8 + 0x180));
                                  (**(code **)(*plVar3 + 0x558))
                                            (plVar3,*(undefined8 *)
                                                                                                          
                                                  Unity_VisualScripting_DoNotSerializeAttribute_var,
                                             *(undefined8 *)PTR_DAT_067900f8,uVar4,
                                             *(undefined8 *)(*plVar3 + 0x560));
                                }
                                FUN_0540ade0(plVar8[6],plVar3,0);
                                plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                                uVar4 = FUN_053868f0(in_stack_00000020,0);
                                uVar4 = FUN_04e8db00(*(undefined8 *)
                                                      System_ComponentModel_GuidConverter_var,
                                                     in_stack_00000030,uVar4,0);
                                if (plVar15 == (long *)0x0) goto LAB_05415b58;
                                (**(code **)(*plVar15 + 0x518))
                                          (plVar15,*(undefined8 *)
                                                    UnityEngine_InputSystem_GravitySensor_var,uVar4,
                                           *(undefined8 *)(*plVar15 + 0x520));
                                (**(code **)(*plVar3 + 0x2d8))
                                          (plVar3,plVar15,*(undefined8 *)(*plVar3 + 0x2e0));
                                uVar7 = System_Runtime_Serialization_XmlObjectSerializerContext__get_IgnoreExtensionDataObject
                                                  (plVar8,0);
                                if ((uVar7 & 1) != 0) {
                                  (**(code **)(*plVar3 + 0x558))
                                            (plVar3,*(undefined8 *)
                                                     UnityEngine_PlayerLoop_EarlyUpdate_var,
                                             *(undefined8 *)PTR_DAT_067900f8,
                                             *(undefined8 *)PTR_DAT_06771b30,
                                             *(undefined8 *)(*plVar3 + 0x560));
                                }
                                if (lVar5 == 0) goto LAB_05415b58;
                                if (*(long *)(lVar5 + 0x18) != 0) {
                                  plVar15 = (long *)thunk_FUN_02d9d534(*(undefined8 *)
                                                                        PTR_DAT_06764da0);
                                  FUN_04e9624c(plVar15,0);
                                  if (0 < *(int *)(lVar5 + 0x18)) {
                                    if (plVar15 == (long *)0x0) goto LAB_05415b58;
                                    lVar14 = 0;
                                    do {
                                      FUN_04e97278(plVar15,0,0);
                                      uVar17 = (uint)lVar14;
                                      if (*(int *)(unaff_x22 + 0x5c) == 2) {
                                        plVar8 = (long *)FUN_04e97bc4(plVar15,in_stack_00000030,0);
                                        if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                                        lVar9 = *(long *)(lVar5 + 0x20 + lVar14 * 8);
                                        if ((lVar9 == 0) ||
                                           (uVar4 = FUN_05397bec(lVar9,0), plVar8 == (long *)0x0))
                                        goto LAB_05415b58;
                                      }
                                      else {
                                        if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                                        plVar8 = (long *)(lVar5 + (long)(int)uVar17 * 8 + 0x20);
                                        if (*plVar8 == 0) goto LAB_05415b58;
                                        FUN_05399824(*plVar8,0);
                                        FUN_05416194();
                                        if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                                        if (*plVar8 == 0) goto LAB_05415b58;
                                        uVar4 = FUN_05399824(*plVar8,0);
                                        uVar7 = FUN_04e8cf70(uVar4,0);
                                        if ((uVar7 & 1) == 0) {
                                          if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                                          if (*plVar8 == 0) goto LAB_05415b58;
                                          plVar11 = *(long **)(unaff_x22 + 0x28);
                                          uVar4 = FUN_05399824(*plVar8,0);
                                          if (plVar11 == (long *)0x0) goto LAB_05415b58;
                                          uVar4 = (**(code **)(*plVar11 + 0x308))
                                                            (plVar11,uVar4,
                                                             *(undefined8 *)(*plVar11 + 0x310));
                                          lVar9 = FUN_04e98bb0(plVar15,uVar4,0);
                                          if (lVar9 == 0) goto LAB_05415b58;
                                          FUN_04e98a58(lVar9,0x3a,0);
                                        }
                                        if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                                        if (*plVar8 == 0) goto LAB_05415b58;
                                        uVar4 = FUN_05397bec(*plVar8,0);
                                        plVar8 = plVar15;
                                      }
                                      FUN_04e97bc4(plVar8,uVar4,0);
                                      if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                                      plVar11 = (long *)(lVar5 + (long)(int)uVar17 * 8 + 0x20);
                                      plVar8 = (long *)*plVar11;
                                      if (plVar8 == (long *)0x0) goto LAB_05415b58;
                                      iVar2 = (**(code **)(*plVar8 + 0x1d8))
                                                        (plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
                                      if (iVar2 == 2) {
LAB_05414c38:
                                        FUN_04e98e18(plVar15,0,0x40,0);
                                      }
                                      else {
                                        if (*(uint *)(lVar5 + 0x18) <= uVar17) goto LAB_05415b5c;
                                        plVar11 = (long *)*plVar11;
                                        if (plVar11 == (long *)0x0) goto LAB_05415b58;
                                        iVar2 = (**(code **)(*plVar11 + 0x1d8))
                                                          (plVar11,*(undefined8 *)(*plVar11 + 0x1e0)
                                                          );
                                        if (iVar2 == 4) goto LAB_05414c38;
                                      }
                                      plVar8 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                                      uVar4 = (**(code **)(*plVar15 + 0x168))
                                                        (plVar15,*(undefined8 *)(*plVar15 + 0x170));
                                      if (plVar8 == (long *)0x0) goto LAB_05415b58;
                                      (**(code **)(*plVar8 + 0x518))
                                                (plVar8,*(undefined8 *)
                                                         UnityEngine_InputSystem_GravitySensor_var,
                                                 uVar4,*(undefined8 *)(*plVar8 + 0x520));
                                      (**(code **)(*plVar3 + 0x2d8))
                                                (plVar3,plVar8,*(undefined8 *)(*plVar3 + 0x2e0));
                                      lVar14 = lVar14 + 1;
                                    } while ((int)lVar14 < *(int *)(lVar5 + 0x18));
                                  }
                                }
                                plVar15 = *(long **)(unaff_x22 + 0x78);
                                if (plVar15 == (long *)0x0) goto LAB_05415b58;
                                (**(code **)(*plVar15 + 0x298))
                                          (plVar15,plVar3,*(undefined8 *)(unaff_x22 + 0x80),
                                           *(undefined8 *)(*plVar15 + 0x2a0));
                                plVar15 = (long *)PTR_DAT_0678fd00;
                                plVar3 = (long *)PTR_DAT_0678fcf8;
                              }
                            }
                            goto LAB_05415ae0;
                          }
                        }
                        plVar8 = (long *)FUN_053b5a7c();
                      } while (plVar8 == (long *)0x0);
                      bVar1 = *(byte *)(*plVar3 + 0x130);
                    } while (((*(byte *)(*plVar8 + 0x130) < bVar1) ||
                             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *plVar3
                             )) || ((in_stack_00000028 & 0x100000000) == 0));
                    unaff_x27 = (long *)FUN_053b5a7c();
                    if (unaff_x27 != (long *)0x0) {
                      bVar1 = *(byte *)(*plVar3 + 0x130);
                      if ((*(byte *)(*unaff_x27 + 0x130) < bVar1) ||
                         (*(long *)(*(long *)(*unaff_x27 + 200) + (ulong)bVar1 * 8 + -8) != *plVar3)
                         ) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d60e88(unaff_x27);
                      }
                    }
                    plVar8 = *(long **)(unaff_x22 + 0x38);
                    if (plVar8 == (long *)0x0) goto LAB_05415b58;
                    iVar2 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
                    if (iVar2 < 1) {
                      uVar7 = FUN_054182e0();
                      if ((uVar7 & 1) == 0) {
                        if (unaff_x27 == (long *)0x0) goto LAB_05415b58;
                        goto LAB_05414d3c;
                      }
                      goto LAB_05415ae0;
                    }
                    if (unaff_x27 == (long *)0x0) goto LAB_05415b58;
                    plVar15 = *(long **)(unaff_x22 + 0x38);
                    uVar4 = (**(code **)(*unaff_x27 + 0x2c8))
                                      (unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
                    if (plVar15 == (long *)0x0) goto LAB_05415b58;
                    uVar7 = (**(code **)(*plVar15 + 0x348))
                                      (plVar15,uVar4,*(undefined8 *)(*plVar15 + 0x350));
                    plVar15 = (long *)PTR_DAT_0678fd00;
                  } while ((uVar7 & 1) == 0);
                  plVar15 = *(long **)(unaff_x22 + 0x38);
                  uVar4 = (**(code **)(*unaff_x27 + 0x1b8))
                                    (unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1c0));
                  if (plVar15 == (long *)0x0) goto LAB_05415b58;
                  uVar7 = (**(code **)(*plVar15 + 0x348))
                                    (plVar15,uVar4,*(undefined8 *)(*plVar15 + 0x350));
                  plVar15 = (long *)PTR_DAT_0678fd00;
                } while (((uVar7 & 1) == 0) || (uVar7 = FUN_054182e0(), (uVar7 & 1) != 0));
LAB_05414d3c:
                in_stack_00000008 = (long *)FUN_053e1128(unaff_x27,0);
                unaff_x29 = FUN_053e0970(unaff_x27,0);
                lVar5 = (**(code **)(*unaff_x27 + 0x2c8))
                                  (unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
                if (lVar5 == 0) break;
                lVar5 = *(long *)(lVar5 + 0x48);
                uVar4 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0678fd00);
                FUN_053eb24c(uVar4,*(undefined8 *)UnityEngine_GUILayoutGroup_var,unaff_x29,0);
                if (lVar5 == 0) break;
                in_stack_00000000 = (long *)FUN_053b6184(lVar5,uVar4,0);
                if (in_stack_00000000 == (long *)0x0) goto LAB_05414e14;
                bVar1 = *(byte *)(*(long *)PTR_DAT_0678fd00 + 0x130);
                if ((*(byte *)(*in_stack_00000000 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*in_stack_00000000 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_0678fd00)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60e88(in_stack_00000000);
                }
              } while( true );
            }
            goto LAB_05415b58;
          }
          goto LAB_05415018;
        }
      }
      goto LAB_05415b58;
    }
    goto LAB_05415b5c;
  }
LAB_05415b58:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
LAB_05414e14:
  unaff_x23 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
  uVar4 = FUN_053b56cc(unaff_x27,0);
  if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
  }
  uVar4 = FUN_0566e328(uVar4,0);
  if (unaff_x23 == (long *)0x0) goto LAB_05415b58;
  (**(code **)(*unaff_x23 + 0x518))
            (unaff_x23,*(undefined8 *)PTR_DAT_0676b5d0,uVar4,*(undefined8 *)(*unaff_x23 + 0x520));
  if (*(long *)(unaff_x22 + 0x30) != 0) {
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
    if (lVar5 == 0) goto LAB_05415b58;
    iVar2 = FUN_053c77c0(lVar5,*(undefined8 *)(in_stack_00000020 + 0x90),0);
    if (iVar2 != -3) goto LAB_05414f18;
  }
  uVar4 = FUN_0537e8d8(in_stack_00000020,0);
  (**(code **)(*unaff_x23 + 0x558))
            (unaff_x23,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
             *(undefined8 *)PTR_DAT_067900f8,uVar4,*(undefined8 *)(*unaff_x23 + 0x560));
LAB_05414f18:
  plVar3 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
  lVar5 = (**(code **)(*unaff_x27 + 0x2c8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
  if (lVar5 == 0) goto LAB_05415b58;
  uVar4 = FUN_053868f0(lVar5,0);
  uVar4 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,in_stack_00000030,
                       uVar4,0);
  if (plVar3 == (long *)0x0) goto LAB_05415b58;
  (**(code **)(*plVar3 + 0x518))
            (plVar3,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar4,
             *(undefined8 *)(*plVar3 + 0x520));
  (**(code **)(*unaff_x23 + 0x2d8))(unaff_x23,plVar3,*(undefined8 *)(*unaff_x23 + 0x2e0));
  if (unaff_x29 == 0) goto LAB_05415b58;
  if (*(long *)(unaff_x29 + 0x18) == 0) goto LAB_05415258;
  unaff_x25 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
  FUN_04e9624c(unaff_x25,0);
  if (0 < *(int *)(unaff_x29 + 0x18)) goto code_r0x05415008;
  goto LAB_05415258;
code_r0x05415008:
  if (unaff_x25 == (long *)0x0) goto LAB_05415b58;
  unaff_x28 = 0;
  in_stack_00000010 = unaff_x29 + 0x20;
LAB_05415018:
  FUN_04e97278(unaff_x25,0,0);
  uVar17 = (uint)unaff_x28;
  unaff_x19 = unaff_x25;
  if (*(int *)(unaff_x22 + 0x5c) == 2) goto code_r0x05415034;
  if (*(uint *)(unaff_x29 + 0x18) <= uVar17) goto LAB_05415b5c;
  plVar3 = (long *)(unaff_x29 + (long)(int)uVar17 * 8 + 0x20);
  if (*plVar3 == 0) goto LAB_05415b58;
  FUN_05399824(*plVar3,0);
  FUN_05416194();
  if (*(uint *)(unaff_x29 + 0x18) <= uVar17) goto LAB_05415b5c;
  if (*plVar3 == 0) goto LAB_05415b58;
  uVar4 = FUN_05399824(*plVar3,0);
  uVar7 = FUN_04e8cf70(uVar4,0);
  if ((uVar7 & 1) == 0) {
    if (*(uint *)(unaff_x29 + 0x18) <= uVar17) goto LAB_05415b5c;
    if (*plVar3 == 0) goto LAB_05415b58;
    plVar15 = *(long **)(unaff_x22 + 0x28);
    uVar4 = FUN_05399824(*plVar3,0);
    if (plVar15 == (long *)0x0) goto LAB_05415b58;
    uVar4 = (**(code **)(*plVar15 + 0x308))(plVar15,uVar4,*(undefined8 *)(*plVar15 + 0x310));
    lVar5 = FUN_04e98bb0(unaff_x25,uVar4,0);
    if (lVar5 == 0) goto LAB_05415b58;
    FUN_04e98a58(lVar5,0x3a,0);
  }
  if (*(uint *)(unaff_x29 + 0x18) <= uVar17) goto LAB_05415b5c;
  if (*plVar3 == 0) goto LAB_05415b58;
  param_1 = FUN_05397bec(*plVar3,0);
  goto LAB_0541514c;
code_r0x05415034:
  plVar3 = (long *)FUN_04e97bc4(unaff_x25,in_stack_00000030,0);
  if (*(uint *)(unaff_x29 + 0x18) <= uVar17) {
LAB_05415b5c:
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
  lVar5 = *(long *)(in_stack_00000010 + unaff_x28 * 8);
  if (lVar5 == 0) goto LAB_05415b58;
  param_1 = FUN_05397bec(lVar5,0);
  unaff_x25 = plVar3;
  goto code_r0x05415068;
}


