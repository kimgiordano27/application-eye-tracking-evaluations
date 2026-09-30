/*
FUNCTION_NAME: System.Runtime.Diagnostics.EtwDiagnosticTrace$$get_EtwTracingEnabled
ENTRY_POINT: 05414660
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 System_Runtime_Diagnostics_EtwDiagnosticTrace__get_EtwTracingEnabled(long param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long in_x9;
  ulong in_x10;
  long *unaff_x19;
  long unaff_x20;
  long *plVar18;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  int unaff_w26;
  long *unaff_x28;
  uint uVar19;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  
code_r0x05414660:
  if (*(long *)(in_x9 + in_x10 * 8 + -8) != param_1)
  goto System_Runtime_Diagnostics_EtwDiagnosticTrace__get_DefaultEtwProviderId;
  plVar3 = (long *)FUN_053b5a7c();
  if (plVar3 == (long *)0x0) {
    uVar6 = FUN_054182e0();
    if ((uVar6 & 1) != 0) goto LAB_05415ae0;
    goto LAB_05415b58;
  }
  bVar1 = *(byte *)(*unaff_x19 + 0x130);
  if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x19)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60e88(plVar3);
  }
  uVar6 = FUN_054182e0();
  if ((uVar6 & 1) != 0) goto LAB_05415ae0;
  lVar7 = plVar3[7];
  plVar4 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
  if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414860:
    uVar5 = FUN_0537e8d8(unaff_x20,0);
    if (plVar4 == (long *)0x0) goto LAB_05415b58;
    (**(code **)(*plVar4 + 0x558))
              (plVar4,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
               *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar4 + 0x560));
  }
  else {
    lVar8 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
    if (lVar8 == 0) goto LAB_05415b58;
    iVar2 = FUN_053c77c0(lVar8,*(undefined8 *)(unaff_x20 + 0x90),0);
    if (iVar2 == -3) goto LAB_05414860;
  }
  uVar5 = FUN_053b56cc(plVar3,0);
  if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
  }
  uVar5 = FUN_0566e328(uVar5,0);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x518))
              (plVar4,*(undefined8 *)PTR_DAT_0676b5d0,uVar5,*(undefined8 *)(*plVar4 + 0x520));
    uVar5 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
    uVar13 = FUN_053b56cc(plVar3,0);
    uVar6 = FUN_04e8c024(uVar5,uVar13,0);
    if ((uVar6 & 1) != 0) {
      uVar5 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
      (**(code **)(*plVar4 + 0x558))
                (plVar4,*(undefined8 *)Unity_VisualScripting_DoNotSerializeAttribute_var,
                 *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar4 + 0x560));
    }
    FUN_0540ade0(plVar3[6],plVar4,0);
    plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
    uVar5 = FUN_053868f0(unaff_x20,0);
    uVar5 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,in_stack_00000030,
                         uVar5,0);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x518))
                (plVar9,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar5,
                 *(undefined8 *)(*plVar9 + 0x520));
      (**(code **)(*plVar4 + 0x2d8))(plVar4,plVar9,*(undefined8 *)(*plVar4 + 0x2e0));
      uVar6 = System_Runtime_Serialization_XmlObjectSerializerContext__get_IgnoreExtensionDataObject
                        (plVar3,0);
      if ((uVar6 & 1) != 0) {
        (**(code **)(*plVar4 + 0x558))
                  (plVar4,*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_var,
                   *(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                   *(undefined8 *)(*plVar4 + 0x560));
      }
      if (lVar7 != 0) {
        if (*(long *)(lVar7 + 0x18) != 0) {
          plVar3 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
          FUN_04e9624c(plVar3,0);
          if (0 < *(int *)(lVar7 + 0x18)) {
            if (plVar3 == (long *)0x0) goto LAB_05415b58;
            lVar8 = 0;
            do {
              FUN_04e97278(plVar3,0,0);
              uVar19 = (uint)lVar8;
              if (*(int *)(unaff_x22 + 0x5c) == 2) {
                plVar9 = (long *)FUN_04e97bc4(plVar3,in_stack_00000030,0);
                if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_05415b5c;
                lVar14 = *(long *)(lVar7 + 0x20 + lVar8 * 8);
                if ((lVar14 == 0) || (uVar5 = FUN_05397bec(lVar14,0), plVar9 == (long *)0x0))
                goto LAB_05415b58;
              }
              else {
                if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_05415b5c;
                plVar9 = (long *)(lVar7 + (long)(int)uVar19 * 8 + 0x20);
                if (*plVar9 == 0) goto LAB_05415b58;
                FUN_05399824(*plVar9,0);
                FUN_05416194();
                if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_05415b5c;
                if (*plVar9 == 0) goto LAB_05415b58;
                uVar5 = FUN_05399824(*plVar9,0);
                uVar6 = FUN_04e8cf70(uVar5,0);
                if ((uVar6 & 1) == 0) {
                  if (*(uint *)(lVar7 + 0x18) <= uVar19) {
LAB_05415b5c:
                    /* WARNING: Subroutine does not return */
                    FUN_02d60af0();
                  }
                  if (*plVar9 == 0) goto LAB_05415b58;
                  plVar12 = *(long **)(unaff_x22 + 0x28);
                  uVar5 = FUN_05399824(*plVar9,0);
                  if (plVar12 == (long *)0x0) goto LAB_05415b58;
                  uVar5 = (**(code **)(*plVar12 + 0x308))
                                    (plVar12,uVar5,*(undefined8 *)(*plVar12 + 0x310));
                  lVar14 = FUN_04e98bb0(plVar3,uVar5,0);
                  if (lVar14 == 0) goto LAB_05415b58;
                  FUN_04e98a58(lVar14,0x3a,0);
                }
                if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_05415b5c;
                if (*plVar9 == 0) goto LAB_05415b58;
                uVar5 = FUN_05397bec(*plVar9,0);
                plVar9 = plVar3;
              }
              FUN_04e97bc4(plVar9,uVar5,0);
              if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_05415b5c;
              plVar12 = (long *)(lVar7 + (long)(int)uVar19 * 8 + 0x20);
              plVar9 = (long *)*plVar12;
              if (plVar9 == (long *)0x0) goto LAB_05415b58;
              iVar2 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
              if (iVar2 == 2) {
LAB_05414c38:
                FUN_04e98e18(plVar3,0,0x40,0);
              }
              else {
                if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_05415b5c;
                plVar12 = (long *)*plVar12;
                if (plVar12 == (long *)0x0) goto LAB_05415b58;
                iVar2 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
                if (iVar2 == 4) goto LAB_05414c38;
              }
              plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
              if (plVar9 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar9 + 0x518))
                        (plVar9,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar5,
                         *(undefined8 *)(*plVar9 + 0x520));
              (**(code **)(*plVar4 + 0x2d8))(plVar4,plVar9,*(undefined8 *)(*plVar4 + 0x2e0));
              lVar8 = lVar8 + 1;
            } while ((int)lVar8 < *(int *)(lVar7 + 0x18));
          }
        }
        plVar3 = *(long **)(unaff_x22 + 0x78);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x298))
                    (plVar3,plVar4,*(undefined8 *)(unaff_x22 + 0x80),
                     *(undefined8 *)(*plVar3 + 0x2a0));
          unaff_x19 = (long *)PTR_DAT_0678fd00;
          unaff_x20 = in_stack_00000020;
          unaff_x28 = (long *)PTR_DAT_0678fcf8;
LAB_05415ae0:
          unaff_w26 = unaff_w26 + 1;
          iVar2 = (**(code **)(*unaff_x24 + 0x1c8))();
          if (iVar2 <= unaff_w26) {
            FUN_0540ade0(*(undefined8 *)(unaff_x20 + 0x88),in_stack_00000018,0);
            return in_stack_00000018;
          }
          plVar3 = (long *)FUN_053b5a7c();
          if (plVar3 != (long *)0x0) {
            param_1 = *unaff_x19;
            in_x10 = (ulong)*(byte *)(param_1 + 0x130);
            if (*(byte *)(param_1 + 0x130) <= *(byte *)(*plVar3 + 0x130)) goto code_r0x0541465c;
          }
System_Runtime_Diagnostics_EtwDiagnosticTrace__get_DefaultEtwProviderId:
          plVar3 = (long *)FUN_053b5a7c();
          if (plVar3 != (long *)0x0) {
            bVar1 = *(byte *)(*unaff_x28 + 0x130);
            if (((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
                (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x28)) &&
               ((in_stack_00000028 & 0x100000000) != 0)) {
              plVar3 = (long *)FUN_053b5a7c();
              if (plVar3 != (long *)0x0) {
                bVar1 = *(byte *)(*unaff_x28 + 0x130);
                if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60e88(plVar3);
                }
              }
              plVar4 = *(long **)(unaff_x22 + 0x38);
              if (plVar4 == (long *)0x0) goto LAB_05415b58;
              iVar2 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
              if (iVar2 < 1) {
                uVar6 = FUN_054182e0();
                if ((uVar6 & 1) != 0) goto LAB_05415ae0;
                if (plVar3 == (long *)0x0) goto LAB_05415b58;
              }
              else {
                if (plVar3 == (long *)0x0) goto LAB_05415b58;
                plVar4 = *(long **)(unaff_x22 + 0x38);
                uVar5 = (**(code **)(*plVar3 + 0x2c8))(plVar3,*(undefined8 *)(*plVar3 + 0x2d0));
                if (plVar4 == (long *)0x0) goto LAB_05415b58;
                uVar6 = (**(code **)(*plVar4 + 0x348))
                                  (plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x350));
                unaff_x19 = (long *)PTR_DAT_0678fd00;
                if ((uVar6 & 1) == 0) goto LAB_05415ae0;
                plVar4 = *(long **)(unaff_x22 + 0x38);
                uVar5 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
                if (plVar4 == (long *)0x0) goto LAB_05415b58;
                uVar6 = (**(code **)(*plVar4 + 0x348))
                                  (plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x350));
                unaff_x19 = (long *)PTR_DAT_0678fd00;
                if (((uVar6 & 1) == 0) || (uVar6 = FUN_054182e0(), (uVar6 & 1) != 0))
                goto LAB_05415ae0;
              }
              plVar4 = (long *)FUN_053e1128(plVar3,0);
              lVar7 = FUN_053e0970(plVar3,0);
              lVar8 = (**(code **)(*plVar3 + 0x2c8))(plVar3,*(undefined8 *)(*plVar3 + 0x2d0));
              if (lVar8 == 0) goto LAB_05415b58;
              lVar8 = *(long *)(lVar8 + 0x48);
              uVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0678fd00);
              FUN_053eb24c(uVar5,*(undefined8 *)UnityEngine_GUILayoutGroup_var,lVar7,0);
              if (lVar8 == 0) goto LAB_05415b58;
              plVar9 = (long *)FUN_053b6184(lVar8,uVar5,0);
              if (plVar9 == (long *)0x0) {
                plVar12 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                uVar5 = FUN_053b56cc(plVar3,0);
                if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                }
                uVar5 = FUN_0566e328(uVar5,0);
                if (plVar12 == (long *)0x0) goto LAB_05415b58;
                (**(code **)(*plVar12 + 0x518))
                          (plVar12,*(undefined8 *)PTR_DAT_0676b5d0,uVar5,
                           *(undefined8 *)(*plVar12 + 0x520));
                if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414edc:
                  uVar5 = FUN_0537e8d8(in_stack_00000020,0);
                  (**(code **)(*plVar12 + 0x558))
                            (plVar12,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                             *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar12 + 0x560)
                            );
                }
                else {
                  lVar8 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                  if (lVar8 == 0) goto LAB_05415b58;
                  iVar2 = FUN_053c77c0(lVar8,*(undefined8 *)(in_stack_00000020 + 0x90),0);
                  if (iVar2 == -3) goto LAB_05414edc;
                }
                plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                lVar8 = (**(code **)(*plVar3 + 0x2c8))(plVar3,*(undefined8 *)(*plVar3 + 0x2d0));
                if (lVar8 == 0) goto LAB_05415b58;
                uVar5 = FUN_053868f0(lVar8,0);
                uVar5 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                     in_stack_00000030,uVar5,0);
                if (plVar10 == (long *)0x0) goto LAB_05415b58;
                (**(code **)(*plVar10 + 0x518))
                          (plVar10,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar5,
                           *(undefined8 *)(*plVar10 + 0x520));
                (**(code **)(*plVar12 + 0x2d8))(plVar12,plVar10,*(undefined8 *)(*plVar12 + 0x2e0));
                if (lVar7 == 0) goto LAB_05415b58;
                if (*(long *)(lVar7 + 0x18) != 0) {
                  plVar10 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                  FUN_04e9624c(plVar10,0);
                  if (0 < *(int *)(lVar7 + 0x18)) {
                    if (plVar10 == (long *)0x0) goto LAB_05415b58;
                    lVar8 = 0;
                    do {
                      FUN_04e97278(plVar10,0,0);
                      uVar19 = (uint)lVar8;
                      if (*(int *)(unaff_x22 + 0x5c) == 2) {
                        plVar11 = (long *)FUN_04e97bc4(plVar10,in_stack_00000030,0);
                        if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_05415b5c;
                        lVar14 = *(long *)(lVar7 + 0x20 + lVar8 * 8);
                        if ((lVar14 == 0) ||
                           (uVar5 = FUN_05397bec(lVar14,0), plVar11 == (long *)0x0))
                        goto LAB_05415b58;
                      }
                      else {
                        if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_05415b5c;
                        plVar11 = (long *)(lVar7 + (long)(int)uVar19 * 8 + 0x20);
                        if (*plVar11 == 0) goto LAB_05415b58;
                        FUN_05399824(*plVar11,0);
                        FUN_05416194();
                        if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_05415b5c;
                        if (*plVar11 == 0) goto LAB_05415b58;
                        uVar5 = FUN_05399824(*plVar11,0);
                        uVar6 = FUN_04e8cf70(uVar5,0);
                        if ((uVar6 & 1) == 0) {
                          if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_05415b5c;
                          if (*plVar11 == 0) goto LAB_05415b58;
                          plVar18 = *(long **)(unaff_x22 + 0x28);
                          uVar5 = FUN_05399824(*plVar11,0);
                          if (plVar18 == (long *)0x0) goto LAB_05415b58;
                          uVar5 = (**(code **)(*plVar18 + 0x308))
                                            (plVar18,uVar5,*(undefined8 *)(*plVar18 + 0x310));
                          lVar14 = FUN_04e98bb0(plVar10,uVar5,0);
                          if (lVar14 == 0) goto LAB_05415b58;
                          FUN_04e98a58(lVar14,0x3a,0);
                        }
                        if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_05415b5c;
                        if (*plVar11 == 0) goto LAB_05415b58;
                        uVar5 = FUN_05397bec(*plVar11,0);
                        plVar11 = plVar10;
                      }
                      FUN_04e97bc4(plVar11,uVar5,0);
                      if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_05415b5c;
                      plVar18 = (long *)(lVar7 + (long)(int)uVar19 * 8 + 0x20);
                      plVar11 = (long *)*plVar18;
                      if (plVar11 == (long *)0x0) goto LAB_05415b58;
                      iVar2 = (**(code **)(*plVar11 + 0x1d8))
                                        (plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
                      if (iVar2 == 2) {
LAB_054151a8:
                        FUN_04e98e18(plVar10,0,0x40,0);
                      }
                      else {
                        if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_05415b5c;
                        plVar18 = (long *)*plVar18;
                        if (plVar18 == (long *)0x0) goto LAB_05415b58;
                        iVar2 = (**(code **)(*plVar18 + 0x1d8))
                                          (plVar18,*(undefined8 *)(*plVar18 + 0x1e0));
                        if (iVar2 == 4) goto LAB_054151a8;
                      }
                      plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                      uVar5 = (**(code **)(*plVar10 + 0x168))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x170));
                      if (plVar11 == (long *)0x0) goto LAB_05415b58;
                      (**(code **)(*plVar11 + 0x518))
                                (plVar11,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,
                                 uVar5,*(undefined8 *)(*plVar11 + 0x520));
                      (**(code **)(*plVar12 + 0x2d8))
                                (plVar12,plVar11,*(undefined8 *)(*plVar12 + 0x2e0));
                      lVar8 = lVar8 + 1;
                    } while ((int)lVar8 < *(int *)(lVar7 + 0x18));
                  }
                }
                plVar10 = *(long **)(unaff_x22 + 0x78);
                if (plVar10 == (long *)0x0) goto LAB_05415b58;
                (**(code **)(*plVar10 + 0x298))
                          (plVar10,plVar12,*(undefined8 *)(unaff_x22 + 0x80),
                           *(undefined8 *)(*plVar10 + 0x2a0));
                unaff_x28 = (long *)PTR_DAT_0678fcf8;
              }
              else {
                bVar1 = *(byte *)(*(long *)PTR_DAT_0678fd00 + 0x130);
                if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)PTR_DAT_0678fd00)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60e88(plVar9);
                }
              }
              plVar12 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              uVar5 = FUN_053b56cc(plVar3,0);
              if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
              }
              uVar5 = FUN_0566e328(uVar5,0);
              if (plVar12 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar12 + 0x518))
                        (plVar12,*(undefined8 *)PTR_DAT_0676b5d0,uVar5,
                         *(undefined8 *)(*plVar12 + 0x520));
              if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05415360:
                lVar7 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
                if (lVar7 == 0) goto LAB_05415b58;
                uVar5 = FUN_0537e8d8(lVar7,0);
                (**(code **)(*plVar12 + 0x558))
                          (plVar12,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                           *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar12 + 0x560));
              }
              else {
                lVar8 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                lVar7 = (**(code **)(*plVar3 + 0x2c8))(plVar3,*(undefined8 *)(*plVar3 + 0x2d0));
                if ((lVar7 == 0) || (lVar8 == 0)) goto LAB_05415b58;
                iVar2 = FUN_053c77c0(lVar8,*(undefined8 *)(lVar7 + 0x90),0);
                if (iVar2 == -3) goto LAB_05415360;
              }
              plVar10 = plVar3;
              if (plVar9 != (long *)0x0) {
                plVar10 = plVar9;
              }
              uVar5 = FUN_053b56cc(plVar10,0);
              if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
              }
              uVar5 = FUN_0566e328(uVar5,0);
              (**(code **)(*plVar12 + 0x518))
                        (plVar12,*(undefined8 *)PTR_DAT_06790b00,uVar5,
                         *(undefined8 *)(*plVar12 + 0x520));
              lVar7 = plVar3[6];
              uVar5 = *(undefined8 *)PTR_DAT_06791188;
              if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar5 = FUN_05015c2c(uVar5,0);
              FUN_0540ade0(lVar7,plVar12,uVar5);
              uVar5 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
              uVar13 = FUN_053b56cc(plVar3,0);
              uVar6 = FUN_04e8c024(uVar5,uVar13,0);
              if ((uVar6 & 1) != 0) {
                uVar5 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
                (**(code **)(*plVar12 + 0x558))
                          (plVar12,*(undefined8 *)Unity_VisualScripting_DoNotSerializeAttribute_var,
                           *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar12 + 0x560));
              }
              if (plVar4 == (long *)0x0) {
                lVar7 = *plVar12;
                uVar13 = *(undefined8 *)Firebase_Firestore_DocumentReference_var;
                uVar16 = *(undefined8 *)PTR_DAT_067900f8;
                uVar17 = *(undefined8 *)(lVar7 + 0x560);
                uVar5 = *(undefined8 *)PTR_DAT_06771b30;
LAB_0541562c:
                (**(code **)(lVar7 + 0x558))(plVar12,uVar13,uVar16,uVar5,uVar17);
              }
              else {
                uVar6 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
                if ((uVar6 & 1) != 0) {
                  (**(code **)(*plVar12 + 0x558))
                            (plVar12,*(undefined8 *)
                                      System_Runtime_CompilerServices_DecimalConstantAttribute_var,
                             *(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                             *(undefined8 *)(*plVar12 + 0x560));
                }
                lVar7 = plVar4[3];
                uVar5 = *(undefined8 *)
                         UnityEngine_XR_ARFoundation_ARTrackedObjectsChangedEventArgs_var;
                if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar5 = FUN_05015c2c(uVar5,0);
                FUN_0540ade0(lVar7,plVar12,uVar5);
                uVar5 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
                uVar13 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
                uVar6 = FUN_04e8c024(uVar5,uVar13,0);
                if ((uVar6 & 1) != 0) {
                  uVar5 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
                  if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                  }
                  uVar5 = FUN_0566e328(uVar5,0);
                  lVar7 = *plVar12;
                  uVar13 = *(undefined8 *)System_Runtime_InteropServices_DllImportAttribute_var;
                  uVar17 = *(undefined8 *)(lVar7 + 0x560);
                  uVar16 = *(undefined8 *)PTR_DAT_067900f8;
                  goto LAB_0541562c;
                }
              }
              plVar4 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              uVar5 = FUN_053868f0(in_stack_00000020,0);
              uVar5 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                   in_stack_00000030,uVar5,0);
              if (plVar4 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar4 + 0x518))
                        (plVar4,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar5,
                         *(undefined8 *)(*plVar4 + 0x520));
              (**(code **)(*plVar12 + 0x2d8))(plVar12,plVar4,*(undefined8 *)(*plVar12 + 0x2e0));
              iVar2 = (**(code **)(*plVar3 + 0x278))(plVar3,*(undefined8 *)(*plVar3 + 0x280));
              if (iVar2 != 0) {
                (**(code **)(*plVar3 + 0x278))(plVar3,*(undefined8 *)(*plVar3 + 0x280));
                uVar5 = FUN_05417bfc();
                (**(code **)(*plVar12 + 0x558))
                          (plVar12,*(undefined8 *)UnityEngine_UIElements_DragAndDropArgs_var,
                           *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar12 + 0x560));
              }
              iVar2 = (**(code **)(*plVar3 + 0x2d8))(plVar3,*(undefined8 *)(*plVar3 + 0x2e0));
              if (iVar2 != 1) {
                (**(code **)(*plVar3 + 0x2d8))(plVar3,*(undefined8 *)(*plVar3 + 0x2e0));
                uVar5 = FUN_05417c6c();
                (**(code **)(*plVar12 + 0x558))
                          (plVar12,*(undefined8 *)UnityEngine_InputSystem_Controls_DoubleControl_var
                           ,*(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar12 + 0x560))
                ;
              }
              iVar2 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
              if (iVar2 != 1) {
                (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
                uVar5 = FUN_05417c6c();
                (**(code **)(*plVar12 + 0x558))
                          (plVar12,*(undefined8 *)UnityEngine_InputSystem_Controls_DpadControl_var,
                           *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar12 + 0x560));
              }
              lVar7 = (**(code **)(*plVar3 + 0x268))(plVar3,*(undefined8 *)(*plVar3 + 0x270));
              if (lVar7 == 0) goto LAB_05415b58;
              if (*(long *)(lVar7 + 0x18) != 0) {
                plVar3 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                FUN_04e9624c(plVar3,0);
                if (0 < *(int *)(lVar7 + 0x18)) {
                  if (plVar3 == (long *)0x0) goto LAB_05415b58;
                  lVar8 = 0;
                  do {
                    FUN_04e97278(plVar3,0,0);
                    uVar19 = (uint)lVar8;
                    if (*(int *)(unaff_x22 + 0x5c) == 2) {
                      lVar14 = FUN_04e97bc4(plVar3,in_stack_00000030,0);
                      if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_05415b5c;
                      lVar15 = *(long *)(lVar7 + 0x20 + lVar8 * 8);
                      if ((lVar15 == 0) || (uVar5 = FUN_05397bec(lVar15,0), lVar14 == 0))
                      goto LAB_05415b58;
                      FUN_04e97bc4(lVar14,uVar5,0);
                    }
                    else {
                      if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_05415b5c;
                      plVar4 = (long *)(lVar7 + (long)(int)uVar19 * 8 + 0x20);
                      if (*plVar4 == 0) goto LAB_05415b58;
                      FUN_05399824(*plVar4,0);
                      FUN_05416194();
                      if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_05415b5c;
                      if (*plVar4 == 0) goto LAB_05415b58;
                      uVar5 = FUN_05399824(*plVar4,0);
                      uVar6 = FUN_04e8cf70(uVar5,0);
                      if ((uVar6 & 1) == 0) {
                        if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_05415b5c;
                        if (*plVar4 == 0) goto LAB_05415b58;
                        plVar9 = *(long **)(unaff_x22 + 0x28);
                        uVar5 = FUN_05399824(*plVar4,0);
                        if (plVar9 == (long *)0x0) goto LAB_05415b58;
                        uVar5 = (**(code **)(*plVar9 + 0x308))
                                          (plVar9,uVar5,*(undefined8 *)(*plVar9 + 0x310));
                        lVar14 = FUN_04e98bb0(plVar3,uVar5,0);
                        if (lVar14 == 0) goto LAB_05415b58;
                        FUN_04e98a58(lVar14,0x3a,0);
                      }
                      if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_05415b5c;
                      if (*plVar4 == 0) goto LAB_05415b58;
                      uVar5 = FUN_05397bec(*plVar4,0);
                      FUN_04e97bc4(plVar3,uVar5,0);
                      unaff_x28 = (long *)PTR_DAT_0678fcf8;
                    }
                    if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_05415b5c;
                    plVar9 = (long *)(lVar7 + (long)(int)uVar19 * 8 + 0x20);
                    plVar4 = (long *)*plVar9;
                    if (plVar4 == (long *)0x0) goto LAB_05415b58;
                    iVar2 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
                    if (iVar2 == 2) {
LAB_054159fc:
                      FUN_04e98e18(plVar3,0,0x40,0);
                    }
                    else {
                      if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_05415b5c;
                      plVar9 = (long *)*plVar9;
                      if (plVar9 == (long *)0x0) goto LAB_05415b58;
                      iVar2 = (**(code **)(*plVar9 + 0x1d8))
                                        (plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
                      if (iVar2 == 4) goto LAB_054159fc;
                    }
                    plVar4 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
                    if (plVar4 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar4 + 0x518))
                              (plVar4,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar5
                               ,*(undefined8 *)(*plVar4 + 0x520));
                    (**(code **)(*plVar12 + 0x2d8))
                              (plVar12,plVar4,*(undefined8 *)(*plVar12 + 0x2e0));
                    lVar8 = lVar8 + 1;
                  } while ((int)lVar8 < *(int *)(lVar7 + 0x18));
                }
              }
              plVar3 = *(long **)(unaff_x22 + 0x78);
              if (plVar3 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar3 + 0x2a8))
                        (plVar3,plVar12,*(undefined8 *)(unaff_x22 + 0x80),
                         *(undefined8 *)(*plVar3 + 0x2b0));
              unaff_x19 = (long *)PTR_DAT_0678fd00;
              unaff_x20 = in_stack_00000020;
            }
          }
          goto LAB_05415ae0;
        }
      }
    }
  }
LAB_05415b58:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
code_r0x0541465c:
  in_x9 = *(long *)(*plVar3 + 200);
  goto code_r0x05414660;
}


