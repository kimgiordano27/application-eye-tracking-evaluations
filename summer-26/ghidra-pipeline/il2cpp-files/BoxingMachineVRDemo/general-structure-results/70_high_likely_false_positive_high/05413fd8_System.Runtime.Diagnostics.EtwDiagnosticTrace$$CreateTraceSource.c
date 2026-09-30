/*
FUNCTION_NAME: System.Runtime.Diagnostics.EtwDiagnosticTrace$$CreateTraceSource
ENTRY_POINT: 05413fd8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 System_Runtime_Diagnostics_EtwDiagnosticTrace__CreateTraceSource(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x20;
  long *plVar20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x25;
  long *unaff_x28;
  uint uVar21;
  long unaff_x29;
  undefined8 *puVar22;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 uStack0000000000000030;
  
  puVar22 = *(undefined8 **)(unaff_x29 + 0xfe8);
  if ((*(long *)(unaff_x20 + 0xf8) == 0) && ((in_stack_00000028 & 0x100000000) != 0)) {
    plVar4 = (long *)FUN_05384820();
    if (plVar4 == (long *)0x0) goto LAB_05415b58;
    iVar2 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        plVar5 = (long *)(**(code **)(*plVar4 + 0x208))
                                   (plVar4,iVar2,*(undefined8 *)(*plVar4 + 0x210));
        if (plVar5 == (long *)0x0) goto LAB_05415b58;
        uVar6 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
        if ((uVar6 & 1) != 0) {
          plVar5 = (long *)(**(code **)(*plVar4 + 0x208))
                                     (plVar4,iVar2,*(undefined8 *)(*plVar4 + 0x210));
          if (plVar5 == (long *)0x0) goto LAB_05415b58;
          lVar7 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
          if (lVar7 == unaff_x20) {
            plVar5 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar8 = FUN_053868f0(unaff_x20,0);
            if ((plVar5 == (long *)0x0) ||
               ((**(code **)(*plVar5 + 0x518))
                          (plVar5,*(undefined8 *)PTR_DAT_06772fc8,uVar8,
                           *(undefined8 *)(*plVar5 + 0x520)), lVar7 == 0)) goto LAB_05415b58;
          }
          else {
            if (lVar7 == 0) goto LAB_05415b58;
            iVar3 = FUN_05385b20(lVar7,0);
            if (iVar3 < 2) {
              plVar5 = (long *)FUN_054131cc();
            }
            else {
              plVar5 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              uVar8 = FUN_053868f0(lVar7,0);
              if (plVar5 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar5 + 0x518))
                        (plVar5,*(undefined8 *)PTR_DAT_06772fc8,uVar8,
                         *(undefined8 *)(*plVar5 + 0x520));
            }
          }
          uVar8 = FUN_0537e8d8(lVar7,0);
          uVar9 = FUN_0537e8d8(unaff_x20,0);
          uVar6 = thunk_FUN_04e8bd3c(uVar8,uVar9,0);
          if ((uVar6 & 1) != 0) {
            if (plVar5 == (long *)0x0) goto LAB_05415b58;
            (**(code **)(*plVar5 + 0x518))
                      (plVar5,*(undefined8 *)UnityEngine_InputSystem_Controls_ButtonControl_var,
                       *(undefined8 *)PTR_DAT_067706c8,*(undefined8 *)(*plVar5 + 0x520));
            (**(code **)(*plVar5 + 0x518))
                      (plVar5,*(undefined8 *)
                               UnityEngine_InputSystem_Composites_ButtonWithOneModifier_var,
                       *(undefined8 *)System_IO_Compression_GZipStream_var,
                       *(undefined8 *)(*plVar5 + 0x520));
          }
          uVar8 = FUN_0537e8d8(lVar7,0);
          uVar9 = FUN_0537e8d8(unaff_x20,0);
          uVar6 = thunk_FUN_04e8bd3c(uVar8,uVar9,0);
          if ((uVar6 & 1) == 0) {
            lVar10 = FUN_0537e8d8(lVar7,0);
            if (lVar10 == 0) goto LAB_05415b58;
            if ((*(int *)(lVar10 + 0x10) != 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
              iVar3 = FUN_05385b20(lVar7,0);
              if (iVar3 < 2) {
                FUN_0537e8d8(lVar7,0);
                plVar11 = (long *)FUN_05416194();
                if (plVar11 == (long *)0x0) goto LAB_05415b58;
                (**(code **)(*plVar11 + 0x2d8))(plVar11,plVar5,*(undefined8 *)(*plVar11 + 0x2e0));
              }
              plVar5 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              plVar11 = *(long **)(unaff_x22 + 0x28);
              uVar8 = FUN_0537e8d8(lVar7,0);
              if (plVar11 == (long *)0x0) goto LAB_05415b58;
              plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                          (plVar11,uVar8,*(undefined8 *)(*plVar11 + 0x310));
              uVar8 = FUN_053868f0(lVar7,0);
              if ((plVar11 != (long *)0x0) && (*plVar11 != *(long *)(PTR_DAT_0675e258 + 0x90)))
              goto LAB_05415b7c;
              uVar8 = FUN_04e8db00(plVar11,*(undefined8 *)PTR_DAT_067646b8,uVar8,0);
              if (plVar5 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar5 + 0x518))
                        (plVar5,*(undefined8 *)PTR_DAT_06772fc8,uVar8,
                         *(undefined8 *)(*plVar5 + 0x520));
              unaff_x20 = in_stack_00000020;
              puVar22 = (undefined8 *)VLB_BlendingMode_var;
            }
          }
          if (unaff_x28 == (long *)0x0) goto LAB_05415b58;
          (**(code **)(*unaff_x28 + 0x2d8))();
          plVar11 = (long *)(**(code **)(*plVar4 + 0x208))
                                      (plVar4,iVar2,*(undefined8 *)(*plVar4 + 0x210));
          if (plVar11 == (long *)0x0) goto LAB_05415b58;
          lVar7 = (**(code **)(*plVar11 + 0x208))(plVar11,*(undefined8 *)(*plVar11 + 0x210));
          if (lVar7 == 0) {
            plVar11 = *(long **)(unaff_x22 + 0x48);
            if ((plVar11 == (long *)0x0) ||
               (plVar11 = (long *)(**(code **)(*plVar11 + 0x5f8))
                                            (plVar11,*puVar22,*(undefined8 *)PTR_DAT_06781a48,
                                             *(undefined8 *)PTR_DAT_0676b520,
                                             *(undefined8 *)(*plVar11 + 0x600)),
               plVar5 == (long *)0x0)) goto LAB_05415b58;
            (**(code **)(*plVar5 + 0x2c8))(plVar5,plVar11,*(undefined8 *)(*plVar5 + 0x2d0));
            plVar5 = *(long **)(unaff_x22 + 0x48);
            if ((plVar5 == (long *)0x0) ||
               (plVar5 = (long *)(**(code **)(*plVar5 + 0x5f8))
                                           (plVar5,*puVar22,
                                            *(undefined8 *)UnityEngine_GameObject_var,
                                            *(undefined8 *)PTR_DAT_0676b520,
                                            *(undefined8 *)(*plVar5 + 0x600)),
               plVar11 == (long *)0x0)) goto LAB_05415b58;
            (**(code **)(*plVar11 + 0x2d8))(plVar11,plVar5,*(undefined8 *)(*plVar11 + 0x2e0));
            (**(code **)(*plVar4 + 0x208))(plVar4,iVar2,*(undefined8 *)(*plVar4 + 0x210));
            uVar8 = FUN_0541273c();
            if (plVar5 == (long *)0x0) goto LAB_05415b58;
            (**(code **)(*plVar5 + 0x2d8))(plVar5,uVar8,*(undefined8 *)(*plVar5 + 0x2e0));
          }
        }
        iVar2 = iVar2 + 1;
        iVar3 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      } while (iVar2 < iVar3);
    }
  }
  if ((unaff_x28 != (long *)0x0) && (uVar6 = (**(code **)(*unaff_x28 + 0x328))(), (uVar6 & 1) == 0))
  {
    (**(code **)(*unaff_x25 + 0x2b8))();
  }
  plVar4 = *(long **)(unaff_x20 + 0x48);
  if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414538:
    puVar22 = *(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
  }
  else {
    lVar7 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x50);
    if (lVar7 == 0) goto LAB_05415b58;
    puVar22 = (undefined8 *)UnityEngine_InputSystem_HID_HID_var;
    if (*(int *)(lVar7 + 0x10) == 0) goto LAB_05414538;
  }
  if (*(int *)(unaff_x22 + 0x5c) == 2) {
LAB_054145f8:
    uStack0000000000000030 = *puVar22;
  }
  else {
    FUN_0537e8d8(unaff_x20,0);
    FUN_05416194();
    lVar7 = FUN_0537e8d8(unaff_x20,0);
    if (lVar7 == 0) goto LAB_05415b58;
    if (*(int *)(lVar7 + 0x10) == 0) {
      puVar22 = *(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
      goto LAB_054145f8;
    }
    plVar5 = *(long **)(unaff_x22 + 0x28);
    uVar8 = FUN_0537e8d8(unaff_x20,0);
    if (plVar5 == (long *)0x0) goto LAB_05415b58;
    plVar11 = (long *)(**(code **)(*plVar5 + 0x308))(plVar5,uVar8,*(undefined8 *)(*plVar5 + 0x310));
    if ((plVar11 != (long *)0x0) && (*plVar11 != *(long *)(PTR_DAT_0675e258 + 0x90))) {
LAB_05415b7c:
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(plVar11);
    }
    uStack0000000000000030 = FUN_04e83184(plVar11,*(undefined8 *)PTR_DAT_067646b8,0);
  }
  if (plVar4 != (long *)0x0) {
    iVar2 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
    if (0 < iVar2) {
      iVar2 = 0;
      plVar5 = (long *)PTR_DAT_0678fd00;
      plVar11 = (long *)PTR_DAT_0678fcf8;
      do {
        plVar12 = (long *)FUN_053b5a7c(plVar4,iVar2,0);
        if (plVar12 == (long *)0x0) {
System_Runtime_Diagnostics_EtwDiagnosticTrace__get_DefaultEtwProviderId:
          plVar12 = (long *)FUN_053b5a7c(plVar4,iVar2,0);
          if (plVar12 != (long *)0x0) {
            bVar1 = *(byte *)(*plVar11 + 0x130);
            if (((bVar1 <= *(byte *)(*plVar12 + 0x130)) &&
                (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) == *plVar11)) &&
               ((in_stack_00000028 & 0x100000000) != 0)) {
              plVar12 = (long *)FUN_053b5a7c(plVar4,iVar2,0);
              if (plVar12 != (long *)0x0) {
                bVar1 = *(byte *)(*plVar11 + 0x130);
                if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *plVar11)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60e88(plVar12);
                }
              }
              plVar13 = *(long **)(unaff_x22 + 0x38);
              if (plVar13 == (long *)0x0) goto LAB_05415b58;
              iVar3 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
              if (iVar3 < 1) {
                uVar6 = FUN_054182e0();
                if ((uVar6 & 1) == 0) {
                  if (plVar12 == (long *)0x0) goto LAB_05415b58;
LAB_05414d3c:
                  plVar5 = (long *)FUN_053e1128(plVar12,0);
                  lVar7 = FUN_053e0970(plVar12,0);
                  lVar10 = (**(code **)(*plVar12 + 0x2c8))
                                     (plVar12,*(undefined8 *)(*plVar12 + 0x2d0));
                  if (lVar10 == 0) goto LAB_05415b58;
                  lVar10 = *(long *)(lVar10 + 0x48);
                  uVar8 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0678fd00);
                  FUN_053eb24c(uVar8,*(undefined8 *)UnityEngine_GUILayoutGroup_var,lVar7,0);
                  if (lVar10 == 0) goto LAB_05415b58;
                  plVar13 = (long *)FUN_053b6184(lVar10,uVar8,0);
                  if (plVar13 == (long *)0x0) {
                    plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar8 = FUN_053b56cc(plVar12,0);
                    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                    }
                    uVar8 = FUN_0566e328(uVar8,0);
                    if (plVar11 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar11 + 0x518))
                              (plVar11,*(undefined8 *)PTR_DAT_0676b5d0,uVar8,
                               *(undefined8 *)(*plVar11 + 0x520));
                    if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414edc:
                      uVar8 = FUN_0537e8d8(in_stack_00000020,0);
                      (**(code **)(*plVar11 + 0x558))
                                (plVar11,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                                 *(undefined8 *)PTR_DAT_067900f8,uVar8,
                                 *(undefined8 *)(*plVar11 + 0x560));
                    }
                    else {
                      lVar10 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                      if (lVar10 == 0) goto LAB_05415b58;
                      iVar3 = FUN_053c77c0(lVar10,*(undefined8 *)(in_stack_00000020 + 0x90),0);
                      if (iVar3 == -3) goto LAB_05414edc;
                    }
                    plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    lVar10 = (**(code **)(*plVar12 + 0x2c8))
                                       (plVar12,*(undefined8 *)(*plVar12 + 0x2d0));
                    if (lVar10 == 0) goto LAB_05415b58;
                    uVar8 = FUN_053868f0(lVar10,0);
                    uVar8 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                         uStack0000000000000030,uVar8,0);
                    if (plVar15 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar15 + 0x518))
                              (plVar15,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,
                               uVar8,*(undefined8 *)(*plVar15 + 0x520));
                    (**(code **)(*plVar11 + 0x2d8))
                              (plVar11,plVar15,*(undefined8 *)(*plVar11 + 0x2e0));
                    if (lVar7 == 0) goto LAB_05415b58;
                    if (*(long *)(lVar7 + 0x18) != 0) {
                      plVar15 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                      FUN_04e9624c(plVar15,0);
                      if (0 < *(int *)(lVar7 + 0x18)) {
                        if (plVar15 == (long *)0x0) goto LAB_05415b58;
                        lVar10 = 0;
                        do {
                          FUN_04e97278(plVar15,0,0);
                          uVar21 = (uint)lVar10;
                          if (*(int *)(unaff_x22 + 0x5c) == 2) {
                            plVar14 = (long *)FUN_04e97bc4(plVar15,uStack0000000000000030,0);
                            if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_05415b5c;
                            lVar16 = *(long *)(lVar7 + 0x20 + lVar10 * 8);
                            if ((lVar16 == 0) ||
                               (uVar8 = FUN_05397bec(lVar16,0), plVar14 == (long *)0x0))
                            goto LAB_05415b58;
                          }
                          else {
                            if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_05415b5c;
                            plVar14 = (long *)(lVar7 + (long)(int)uVar21 * 8 + 0x20);
                            if (*plVar14 == 0) goto LAB_05415b58;
                            FUN_05399824(*plVar14,0);
                            FUN_05416194();
                            if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_05415b5c;
                            if (*plVar14 == 0) goto LAB_05415b58;
                            uVar8 = FUN_05399824(*plVar14,0);
                            uVar6 = FUN_04e8cf70(uVar8,0);
                            if ((uVar6 & 1) == 0) {
                              if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_05415b5c;
                              if (*plVar14 == 0) goto LAB_05415b58;
                              plVar20 = *(long **)(unaff_x22 + 0x28);
                              uVar8 = FUN_05399824(*plVar14,0);
                              if (plVar20 == (long *)0x0) goto LAB_05415b58;
                              uVar8 = (**(code **)(*plVar20 + 0x308))
                                                (plVar20,uVar8,*(undefined8 *)(*plVar20 + 0x310));
                              lVar16 = FUN_04e98bb0(plVar15,uVar8,0);
                              if (lVar16 == 0) goto LAB_05415b58;
                              FUN_04e98a58(lVar16,0x3a,0);
                            }
                            if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_05415b5c;
                            if (*plVar14 == 0) goto LAB_05415b58;
                            uVar8 = FUN_05397bec(*plVar14,0);
                            plVar14 = plVar15;
                          }
                          FUN_04e97bc4(plVar14,uVar8,0);
                          if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_05415b5c;
                          plVar20 = (long *)(lVar7 + (long)(int)uVar21 * 8 + 0x20);
                          plVar14 = (long *)*plVar20;
                          if (plVar14 == (long *)0x0) goto LAB_05415b58;
                          iVar3 = (**(code **)(*plVar14 + 0x1d8))
                                            (plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
                          if (iVar3 == 2) {
LAB_054151a8:
                            FUN_04e98e18(plVar15,0,0x40,0);
                          }
                          else {
                            if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_05415b5c;
                            plVar20 = (long *)*plVar20;
                            if (plVar20 == (long *)0x0) goto LAB_05415b58;
                            iVar3 = (**(code **)(*plVar20 + 0x1d8))
                                              (plVar20,*(undefined8 *)(*plVar20 + 0x1e0));
                            if (iVar3 == 4) goto LAB_054151a8;
                          }
                          plVar14 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                          uVar8 = (**(code **)(*plVar15 + 0x168))
                                            (plVar15,*(undefined8 *)(*plVar15 + 0x170));
                          if (plVar14 == (long *)0x0) goto LAB_05415b58;
                          (**(code **)(*plVar14 + 0x518))
                                    (plVar14,*(undefined8 *)
                                              UnityEngine_InputSystem_GravitySensor_var,uVar8,
                                     *(undefined8 *)(*plVar14 + 0x520));
                          (**(code **)(*plVar11 + 0x2d8))
                                    (plVar11,plVar14,*(undefined8 *)(*plVar11 + 0x2e0));
                          lVar10 = lVar10 + 1;
                        } while ((int)lVar10 < *(int *)(lVar7 + 0x18));
                      }
                    }
                    plVar15 = *(long **)(unaff_x22 + 0x78);
                    if (plVar15 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar15 + 0x298))
                              (plVar15,plVar11,*(undefined8 *)(unaff_x22 + 0x80),
                               *(undefined8 *)(*plVar15 + 0x2a0));
                    plVar11 = (long *)PTR_DAT_0678fcf8;
                  }
                  else {
                    bVar1 = *(byte *)(*(long *)PTR_DAT_0678fd00 + 0x130);
                    if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)PTR_DAT_0678fd00)) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d60e88(plVar13);
                    }
                  }
                  plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar8 = FUN_053b56cc(plVar12,0);
                  if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                  }
                  uVar8 = FUN_0566e328(uVar8,0);
                  if (plVar15 == (long *)0x0) goto LAB_05415b58;
                  (**(code **)(*plVar15 + 0x518))
                            (plVar15,*(undefined8 *)PTR_DAT_0676b5d0,uVar8,
                             *(undefined8 *)(*plVar15 + 0x520));
                  if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05415360:
                    lVar7 = (**(code **)(*plVar12 + 0x1b8))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
                    if (lVar7 == 0) goto LAB_05415b58;
                    uVar8 = FUN_0537e8d8(lVar7,0);
                    (**(code **)(*plVar15 + 0x558))
                              (plVar15,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                               *(undefined8 *)PTR_DAT_067900f8,uVar8,
                               *(undefined8 *)(*plVar15 + 0x560));
                  }
                  else {
                    lVar10 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                    lVar7 = (**(code **)(*plVar12 + 0x2c8))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x2d0));
                    if ((lVar7 == 0) || (lVar10 == 0)) goto LAB_05415b58;
                    iVar3 = FUN_053c77c0(lVar10,*(undefined8 *)(lVar7 + 0x90),0);
                    if (iVar3 == -3) goto LAB_05415360;
                  }
                  plVar14 = plVar12;
                  if (plVar13 != (long *)0x0) {
                    plVar14 = plVar13;
                  }
                  uVar8 = FUN_053b56cc(plVar14,0);
                  if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                  }
                  uVar8 = FUN_0566e328(uVar8,0);
                  (**(code **)(*plVar15 + 0x518))
                            (plVar15,*(undefined8 *)PTR_DAT_06790b00,uVar8,
                             *(undefined8 *)(*plVar15 + 0x520));
                  lVar7 = plVar12[6];
                  uVar8 = *(undefined8 *)PTR_DAT_06791188;
                  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar8 = FUN_05015c2c(uVar8,0);
                  FUN_0540ade0(lVar7,plVar15,uVar8);
                  uVar8 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180))
                  ;
                  uVar9 = FUN_053b56cc(plVar12,0);
                  uVar6 = FUN_04e8c024(uVar8,uVar9,0);
                  if ((uVar6 & 1) != 0) {
                    uVar8 = (**(code **)(*plVar12 + 0x178))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x180));
                    (**(code **)(*plVar15 + 0x558))
                              (plVar15,*(undefined8 *)
                                        Unity_VisualScripting_DoNotSerializeAttribute_var,
                               *(undefined8 *)PTR_DAT_067900f8,uVar8,
                               *(undefined8 *)(*plVar15 + 0x560));
                  }
                  if (plVar5 == (long *)0x0) {
                    lVar7 = *plVar15;
                    uVar9 = *(undefined8 *)Firebase_Firestore_DocumentReference_var;
                    uVar18 = *(undefined8 *)PTR_DAT_067900f8;
                    uVar19 = *(undefined8 *)(lVar7 + 0x560);
                    uVar8 = *(undefined8 *)PTR_DAT_06771b30;
LAB_0541562c:
                    (**(code **)(lVar7 + 0x558))(plVar15,uVar9,uVar18,uVar8,uVar19);
                  }
                  else {
                    uVar6 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
                    if ((uVar6 & 1) != 0) {
                      (**(code **)(*plVar15 + 0x558))
                                (plVar15,*(undefined8 *)
                                          System_Runtime_CompilerServices_DecimalConstantAttribute_var
                                 ,*(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                                 *(undefined8 *)(*plVar15 + 0x560));
                    }
                    lVar7 = plVar5[3];
                    uVar8 = *(undefined8 *)
                             UnityEngine_XR_ARFoundation_ARTrackedObjectsChangedEventArgs_var;
                    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar8 = FUN_05015c2c(uVar8,0);
                    FUN_0540ade0(lVar7,plVar15,uVar8);
                    uVar8 = (**(code **)(*plVar12 + 0x178))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x180));
                    uVar9 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
                    uVar6 = FUN_04e8c024(uVar8,uVar9,0);
                    if ((uVar6 & 1) != 0) {
                      uVar8 = (**(code **)(*plVar5 + 0x1c8))
                                        (plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
                      if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                      }
                      uVar8 = FUN_0566e328(uVar8,0);
                      lVar7 = *plVar15;
                      uVar9 = *(undefined8 *)System_Runtime_InteropServices_DllImportAttribute_var;
                      uVar19 = *(undefined8 *)(lVar7 + 0x560);
                      uVar18 = *(undefined8 *)PTR_DAT_067900f8;
                      goto LAB_0541562c;
                    }
                  }
                  plVar5 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar8 = FUN_053868f0(in_stack_00000020,0);
                  uVar8 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                       uStack0000000000000030,uVar8,0);
                  if (plVar5 == (long *)0x0) goto LAB_05415b58;
                  (**(code **)(*plVar5 + 0x518))
                            (plVar5,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar8,
                             *(undefined8 *)(*plVar5 + 0x520));
                  (**(code **)(*plVar15 + 0x2d8))(plVar15,plVar5,*(undefined8 *)(*plVar15 + 0x2e0));
                  iVar3 = (**(code **)(*plVar12 + 0x278))(plVar12,*(undefined8 *)(*plVar12 + 0x280))
                  ;
                  if (iVar3 != 0) {
                    (**(code **)(*plVar12 + 0x278))(plVar12,*(undefined8 *)(*plVar12 + 0x280));
                    uVar8 = FUN_05417bfc();
                    (**(code **)(*plVar15 + 0x558))
                              (plVar15,*(undefined8 *)UnityEngine_UIElements_DragAndDropArgs_var,
                               *(undefined8 *)PTR_DAT_067900f8,uVar8,
                               *(undefined8 *)(*plVar15 + 0x560));
                  }
                  iVar3 = (**(code **)(*plVar12 + 0x2d8))(plVar12,*(undefined8 *)(*plVar12 + 0x2e0))
                  ;
                  if (iVar3 != 1) {
                    (**(code **)(*plVar12 + 0x2d8))(plVar12,*(undefined8 *)(*plVar12 + 0x2e0));
                    uVar8 = FUN_05417c6c();
                    (**(code **)(*plVar15 + 0x558))
                              (plVar15,*(undefined8 *)
                                        UnityEngine_InputSystem_Controls_DoubleControl_var,
                               *(undefined8 *)PTR_DAT_067900f8,uVar8,
                               *(undefined8 *)(*plVar15 + 0x560));
                  }
                  iVar3 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0))
                  ;
                  if (iVar3 != 1) {
                    (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
                    uVar8 = FUN_05417c6c();
                    (**(code **)(*plVar15 + 0x558))
                              (plVar15,*(undefined8 *)
                                        UnityEngine_InputSystem_Controls_DpadControl_var,
                               *(undefined8 *)PTR_DAT_067900f8,uVar8,
                               *(undefined8 *)(*plVar15 + 0x560));
                  }
                  lVar7 = (**(code **)(*plVar12 + 0x268))(plVar12,*(undefined8 *)(*plVar12 + 0x270))
                  ;
                  if (lVar7 == 0) goto LAB_05415b58;
                  if (*(long *)(lVar7 + 0x18) != 0) {
                    plVar5 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                    FUN_04e9624c(plVar5,0);
                    if (0 < *(int *)(lVar7 + 0x18)) {
                      if (plVar5 == (long *)0x0) goto LAB_05415b58;
                      lVar10 = 0;
                      do {
                        FUN_04e97278(plVar5,0,0);
                        uVar21 = (uint)lVar10;
                        if (*(int *)(unaff_x22 + 0x5c) == 2) {
                          lVar16 = FUN_04e97bc4(plVar5,uStack0000000000000030,0);
                          if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_05415b5c;
                          lVar17 = *(long *)(lVar7 + 0x20 + lVar10 * 8);
                          if ((lVar17 == 0) || (uVar8 = FUN_05397bec(lVar17,0), lVar16 == 0))
                          goto LAB_05415b58;
                          FUN_04e97bc4(lVar16,uVar8,0);
                        }
                        else {
                          if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_05415b5c;
                          plVar11 = (long *)(lVar7 + (long)(int)uVar21 * 8 + 0x20);
                          if (*plVar11 == 0) goto LAB_05415b58;
                          FUN_05399824(*plVar11,0);
                          FUN_05416194();
                          if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_05415b5c;
                          if (*plVar11 == 0) goto LAB_05415b58;
                          uVar8 = FUN_05399824(*plVar11,0);
                          uVar6 = FUN_04e8cf70(uVar8,0);
                          if ((uVar6 & 1) == 0) {
                            if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_05415b5c;
                            if (*plVar11 == 0) goto LAB_05415b58;
                            plVar12 = *(long **)(unaff_x22 + 0x28);
                            uVar8 = FUN_05399824(*plVar11,0);
                            if (plVar12 == (long *)0x0) goto LAB_05415b58;
                            uVar8 = (**(code **)(*plVar12 + 0x308))
                                              (plVar12,uVar8,*(undefined8 *)(*plVar12 + 0x310));
                            lVar16 = FUN_04e98bb0(plVar5,uVar8,0);
                            if (lVar16 == 0) goto LAB_05415b58;
                            FUN_04e98a58(lVar16,0x3a,0);
                          }
                          if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_05415b5c;
                          if (*plVar11 == 0) goto LAB_05415b58;
                          uVar8 = FUN_05397bec(*plVar11,0);
                          FUN_04e97bc4(plVar5,uVar8,0);
                          plVar11 = (long *)PTR_DAT_0678fcf8;
                        }
                        if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_05415b5c;
                        plVar13 = (long *)(lVar7 + (long)(int)uVar21 * 8 + 0x20);
                        plVar12 = (long *)*plVar13;
                        if (plVar12 == (long *)0x0) goto LAB_05415b58;
                        iVar3 = (**(code **)(*plVar12 + 0x1d8))
                                          (plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
                        if (iVar3 == 2) {
LAB_054159fc:
                          FUN_04e98e18(plVar5,0,0x40,0);
                        }
                        else {
                          if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_05415b5c;
                          plVar13 = (long *)*plVar13;
                          if (plVar13 == (long *)0x0) goto LAB_05415b58;
                          iVar3 = (**(code **)(*plVar13 + 0x1d8))
                                            (plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
                          if (iVar3 == 4) goto LAB_054159fc;
                        }
                        plVar12 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                        uVar8 = (**(code **)(*plVar5 + 0x168))
                                          (plVar5,*(undefined8 *)(*plVar5 + 0x170));
                        if (plVar12 == (long *)0x0) goto LAB_05415b58;
                        (**(code **)(*plVar12 + 0x518))
                                  (plVar12,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,
                                   uVar8,*(undefined8 *)(*plVar12 + 0x520));
                        (**(code **)(*plVar15 + 0x2d8))
                                  (plVar15,plVar12,*(undefined8 *)(*plVar15 + 0x2e0));
                        lVar10 = lVar10 + 1;
                      } while ((int)lVar10 < *(int *)(lVar7 + 0x18));
                    }
                  }
                  plVar5 = *(long **)(unaff_x22 + 0x78);
                  if (plVar5 == (long *)0x0) goto LAB_05415b58;
                  (**(code **)(*plVar5 + 0x2a8))
                            (plVar5,plVar15,*(undefined8 *)(unaff_x22 + 0x80),
                             *(undefined8 *)(*plVar5 + 0x2b0));
                  plVar5 = (long *)PTR_DAT_0678fd00;
                  unaff_x20 = in_stack_00000020;
                }
              }
              else {
                if (plVar12 == (long *)0x0) goto LAB_05415b58;
                plVar5 = *(long **)(unaff_x22 + 0x38);
                uVar8 = (**(code **)(*plVar12 + 0x2c8))(plVar12,*(undefined8 *)(*plVar12 + 0x2d0));
                if (plVar5 == (long *)0x0) goto LAB_05415b58;
                uVar6 = (**(code **)(*plVar5 + 0x348))
                                  (plVar5,uVar8,*(undefined8 *)(*plVar5 + 0x350));
                plVar5 = (long *)PTR_DAT_0678fd00;
                if ((uVar6 & 1) != 0) {
                  plVar5 = *(long **)(unaff_x22 + 0x38);
                  uVar8 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0))
                  ;
                  if (plVar5 == (long *)0x0) goto LAB_05415b58;
                  uVar6 = (**(code **)(*plVar5 + 0x348))
                                    (plVar5,uVar8,*(undefined8 *)(*plVar5 + 0x350));
                  plVar5 = (long *)PTR_DAT_0678fd00;
                  if (((uVar6 & 1) != 0) && (uVar6 = FUN_054182e0(), (uVar6 & 1) == 0))
                  goto LAB_05414d3c;
                }
              }
            }
          }
        }
        else {
          bVar1 = *(byte *)(*plVar5 + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *plVar5))
          goto System_Runtime_Diagnostics_EtwDiagnosticTrace__get_DefaultEtwProviderId;
          plVar12 = (long *)FUN_053b5a7c(plVar4,iVar2,0);
          if (plVar12 == (long *)0x0) {
            uVar6 = FUN_054182e0();
            if ((uVar6 & 1) == 0) goto LAB_05415b58;
          }
          else {
            bVar1 = *(byte *)(*plVar5 + 0x130);
            if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *plVar5)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60e88(plVar12);
            }
            uVar6 = FUN_054182e0();
            if ((uVar6 & 1) == 0) {
              lVar7 = plVar12[7];
              plVar5 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414860:
                uVar8 = FUN_0537e8d8(unaff_x20,0);
                if (plVar5 == (long *)0x0) goto LAB_05415b58;
                (**(code **)(*plVar5 + 0x558))
                          (plVar5,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                           *(undefined8 *)PTR_DAT_067900f8,uVar8,*(undefined8 *)(*plVar5 + 0x560));
              }
              else {
                lVar10 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                if (lVar10 == 0) goto LAB_05415b58;
                iVar3 = FUN_053c77c0(lVar10,*(undefined8 *)(unaff_x20 + 0x90),0);
                if (iVar3 == -3) goto LAB_05414860;
              }
              uVar8 = FUN_053b56cc(plVar12,0);
              if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
              }
              uVar8 = FUN_0566e328(uVar8,0);
              if (plVar5 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar5 + 0x518))
                        (plVar5,*(undefined8 *)PTR_DAT_0676b5d0,uVar8,
                         *(undefined8 *)(*plVar5 + 0x520));
              uVar8 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
              uVar9 = FUN_053b56cc(plVar12,0);
              uVar6 = FUN_04e8c024(uVar8,uVar9,0);
              if ((uVar6 & 1) != 0) {
                uVar8 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
                (**(code **)(*plVar5 + 0x558))
                          (plVar5,*(undefined8 *)Unity_VisualScripting_DoNotSerializeAttribute_var,
                           *(undefined8 *)PTR_DAT_067900f8,uVar8,*(undefined8 *)(*plVar5 + 0x560));
              }
              FUN_0540ade0(plVar12[6],plVar5,0);
              plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              uVar8 = FUN_053868f0(unaff_x20,0);
              uVar8 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                   uStack0000000000000030,uVar8,0);
              if (plVar11 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar11 + 0x518))
                        (plVar11,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar8,
                         *(undefined8 *)(*plVar11 + 0x520));
              (**(code **)(*plVar5 + 0x2d8))(plVar5,plVar11,*(undefined8 *)(*plVar5 + 0x2e0));
              uVar6 = System_Runtime_Serialization_XmlObjectSerializerContext__get_IgnoreExtensionDataObject
                                (plVar12,0);
              if ((uVar6 & 1) != 0) {
                (**(code **)(*plVar5 + 0x558))
                          (plVar5,*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_var,
                           *(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                           *(undefined8 *)(*plVar5 + 0x560));
              }
              if (lVar7 == 0) goto LAB_05415b58;
              if (*(long *)(lVar7 + 0x18) != 0) {
                plVar11 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                FUN_04e9624c(plVar11,0);
                if (0 < *(int *)(lVar7 + 0x18)) {
                  if (plVar11 == (long *)0x0) goto LAB_05415b58;
                  lVar10 = 0;
                  do {
                    FUN_04e97278(plVar11,0,0);
                    uVar21 = (uint)lVar10;
                    if (*(int *)(unaff_x22 + 0x5c) == 2) {
                      plVar12 = (long *)FUN_04e97bc4(plVar11,uStack0000000000000030,0);
                      if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_05415b5c;
                      lVar16 = *(long *)(lVar7 + 0x20 + lVar10 * 8);
                      if ((lVar16 == 0) || (uVar8 = FUN_05397bec(lVar16,0), plVar12 == (long *)0x0))
                      goto LAB_05415b58;
                    }
                    else {
                      if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_05415b5c;
                      plVar12 = (long *)(lVar7 + (long)(int)uVar21 * 8 + 0x20);
                      if (*plVar12 == 0) goto LAB_05415b58;
                      FUN_05399824(*plVar12,0);
                      FUN_05416194();
                      if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_05415b5c;
                      if (*plVar12 == 0) goto LAB_05415b58;
                      uVar8 = FUN_05399824(*plVar12,0);
                      uVar6 = FUN_04e8cf70(uVar8,0);
                      if ((uVar6 & 1) == 0) {
                        if (*(uint *)(lVar7 + 0x18) <= uVar21) {
LAB_05415b5c:
                    /* WARNING: Subroutine does not return */
                          FUN_02d60af0();
                        }
                        if (*plVar12 == 0) goto LAB_05415b58;
                        plVar13 = *(long **)(unaff_x22 + 0x28);
                        uVar8 = FUN_05399824(*plVar12,0);
                        if (plVar13 == (long *)0x0) goto LAB_05415b58;
                        uVar8 = (**(code **)(*plVar13 + 0x308))
                                          (plVar13,uVar8,*(undefined8 *)(*plVar13 + 0x310));
                        lVar16 = FUN_04e98bb0(plVar11,uVar8,0);
                        if (lVar16 == 0) goto LAB_05415b58;
                        FUN_04e98a58(lVar16,0x3a,0);
                      }
                      if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_05415b5c;
                      if (*plVar12 == 0) goto LAB_05415b58;
                      uVar8 = FUN_05397bec(*plVar12,0);
                      plVar12 = plVar11;
                    }
                    FUN_04e97bc4(plVar12,uVar8,0);
                    if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_05415b5c;
                    plVar13 = (long *)(lVar7 + (long)(int)uVar21 * 8 + 0x20);
                    plVar12 = (long *)*plVar13;
                    if (plVar12 == (long *)0x0) goto LAB_05415b58;
                    iVar3 = (**(code **)(*plVar12 + 0x1d8))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
                    if (iVar3 == 2) {
LAB_05414c38:
                      FUN_04e98e18(plVar11,0,0x40,0);
                    }
                    else {
                      if (*(uint *)(lVar7 + 0x18) <= uVar21) goto LAB_05415b5c;
                      plVar13 = (long *)*plVar13;
                      if (plVar13 == (long *)0x0) goto LAB_05415b58;
                      iVar3 = (**(code **)(*plVar13 + 0x1d8))
                                        (plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
                      if (iVar3 == 4) goto LAB_05414c38;
                    }
                    plVar12 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar8 = (**(code **)(*plVar11 + 0x168))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x170));
                    if (plVar12 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar12 + 0x518))
                              (plVar12,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,
                               uVar8,*(undefined8 *)(*plVar12 + 0x520));
                    (**(code **)(*plVar5 + 0x2d8))(plVar5,plVar12,*(undefined8 *)(*plVar5 + 0x2e0));
                    lVar10 = lVar10 + 1;
                  } while ((int)lVar10 < *(int *)(lVar7 + 0x18));
                }
              }
              plVar11 = *(long **)(unaff_x22 + 0x78);
              if (plVar11 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar11 + 0x298))
                        (plVar11,plVar5,*(undefined8 *)(unaff_x22 + 0x80),
                         *(undefined8 *)(*plVar11 + 0x2a0));
              plVar5 = (long *)PTR_DAT_0678fd00;
              unaff_x20 = in_stack_00000020;
              plVar11 = (long *)PTR_DAT_0678fcf8;
            }
          }
        }
        iVar2 = iVar2 + 1;
        iVar3 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      } while (iVar2 < iVar3);
    }
    FUN_0540ade0(*(undefined8 *)(unaff_x20 + 0x88),in_stack_00000018,0);
    return in_stack_00000018;
  }
LAB_05415b58:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


