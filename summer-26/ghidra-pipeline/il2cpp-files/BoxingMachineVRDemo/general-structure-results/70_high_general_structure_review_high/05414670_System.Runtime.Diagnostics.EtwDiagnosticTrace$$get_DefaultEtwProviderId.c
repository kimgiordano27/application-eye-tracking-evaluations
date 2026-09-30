/*
FUNCTION_NAME: System.Runtime.Diagnostics.EtwDiagnosticTrace$$get_DefaultEtwProviderId
ENTRY_POINT: 05414670
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


undefined8 System_Runtime_Diagnostics_EtwDiagnosticTrace__get_DefaultEtwProviderId(void)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *unaff_x19;
  long unaff_x20;
  long *plVar16;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  long *plVar17;
  int unaff_w26;
  long *unaff_x28;
  long lVar18;
  uint uVar19;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  
  do {
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
          if ((uVar6 & 1) == 0) {
            if (plVar3 == (long *)0x0) goto LAB_05415b58;
LAB_05414d3c:
            plVar4 = (long *)FUN_053e1128(plVar3,0);
            lVar18 = FUN_053e0970(plVar3,0);
            lVar7 = (**(code **)(*plVar3 + 0x2c8))(plVar3,*(undefined8 *)(*plVar3 + 0x2d0));
            if (lVar7 == 0) goto LAB_05415b58;
            lVar7 = *(long *)(lVar7 + 0x48);
            uVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0678fd00);
            FUN_053eb24c(uVar5,*(undefined8 *)UnityEngine_GUILayoutGroup_var,lVar18,0);
            if (lVar7 == 0) goto LAB_05415b58;
            plVar9 = (long *)FUN_053b6184(lVar7,uVar5,0);
            if (plVar9 == (long *)0x0) {
              plVar17 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              uVar5 = FUN_053b56cc(plVar3,0);
              if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
              }
              uVar5 = FUN_0566e328(uVar5,0);
              if (plVar17 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar17 + 0x518))
                        (plVar17,*(undefined8 *)PTR_DAT_0676b5d0,uVar5,
                         *(undefined8 *)(*plVar17 + 0x520));
              if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414edc:
                uVar5 = FUN_0537e8d8(in_stack_00000020,0);
                (**(code **)(*plVar17 + 0x558))
                          (plVar17,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                           *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar17 + 0x560));
              }
              else {
                lVar7 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                if (lVar7 == 0) goto LAB_05415b58;
                iVar2 = FUN_053c77c0(lVar7,*(undefined8 *)(in_stack_00000020 + 0x90),0);
                if (iVar2 == -3) goto LAB_05414edc;
              }
              plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              lVar7 = (**(code **)(*plVar3 + 0x2c8))(plVar3,*(undefined8 *)(*plVar3 + 0x2d0));
              if (lVar7 == 0) goto LAB_05415b58;
              uVar5 = FUN_053868f0(lVar7,0);
              uVar5 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                   in_stack_00000030,uVar5,0);
              if (plVar11 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar11 + 0x518))
                        (plVar11,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar5,
                         *(undefined8 *)(*plVar11 + 0x520));
              (**(code **)(*plVar17 + 0x2d8))(plVar17,plVar11,*(undefined8 *)(*plVar17 + 0x2e0));
              if (lVar18 == 0) goto LAB_05415b58;
              if (*(long *)(lVar18 + 0x18) != 0) {
                plVar11 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                FUN_04e9624c(plVar11,0);
                if (0 < *(int *)(lVar18 + 0x18)) {
                  if (plVar11 == (long *)0x0) goto LAB_05415b58;
                  lVar7 = 0;
                  do {
                    FUN_04e97278(plVar11,0,0);
                    uVar19 = (uint)lVar7;
                    if (*(int *)(unaff_x22 + 0x5c) == 2) {
                      plVar12 = (long *)FUN_04e97bc4(plVar11,in_stack_00000030,0);
                      if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_05415b5c;
                      lVar10 = *(long *)(lVar18 + 0x20 + lVar7 * 8);
                      if ((lVar10 == 0) || (uVar5 = FUN_05397bec(lVar10,0), plVar12 == (long *)0x0))
                      goto LAB_05415b58;
                    }
                    else {
                      if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_05415b5c;
                      plVar12 = (long *)(lVar18 + (long)(int)uVar19 * 8 + 0x20);
                      if (*plVar12 == 0) goto LAB_05415b58;
                      FUN_05399824(*plVar12,0);
                      FUN_05416194();
                      if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_05415b5c;
                      if (*plVar12 == 0) goto LAB_05415b58;
                      uVar5 = FUN_05399824(*plVar12,0);
                      uVar6 = FUN_04e8cf70(uVar5,0);
                      if ((uVar6 & 1) == 0) {
                        if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_05415b5c;
                        if (*plVar12 == 0) goto LAB_05415b58;
                        plVar16 = *(long **)(unaff_x22 + 0x28);
                        uVar5 = FUN_05399824(*plVar12,0);
                        if (plVar16 == (long *)0x0) goto LAB_05415b58;
                        uVar5 = (**(code **)(*plVar16 + 0x308))
                                          (plVar16,uVar5,*(undefined8 *)(*plVar16 + 0x310));
                        lVar10 = FUN_04e98bb0(plVar11,uVar5,0);
                        if (lVar10 == 0) goto LAB_05415b58;
                        FUN_04e98a58(lVar10,0x3a,0);
                      }
                      if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_05415b5c;
                      if (*plVar12 == 0) goto LAB_05415b58;
                      uVar5 = FUN_05397bec(*plVar12,0);
                      plVar12 = plVar11;
                    }
                    FUN_04e97bc4(plVar12,uVar5,0);
                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_05415b5c;
                    plVar16 = (long *)(lVar18 + (long)(int)uVar19 * 8 + 0x20);
                    plVar12 = (long *)*plVar16;
                    if (plVar12 == (long *)0x0) goto LAB_05415b58;
                    iVar2 = (**(code **)(*plVar12 + 0x1d8))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
                    if (iVar2 == 2) {
LAB_054151a8:
                      FUN_04e98e18(plVar11,0,0x40,0);
                    }
                    else {
                      if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_05415b5c;
                      plVar16 = (long *)*plVar16;
                      if (plVar16 == (long *)0x0) goto LAB_05415b58;
                      iVar2 = (**(code **)(*plVar16 + 0x1d8))
                                        (plVar16,*(undefined8 *)(*plVar16 + 0x1e0));
                      if (iVar2 == 4) goto LAB_054151a8;
                    }
                    plVar12 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar5 = (**(code **)(*plVar11 + 0x168))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x170));
                    if (plVar12 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar12 + 0x518))
                              (plVar12,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,
                               uVar5,*(undefined8 *)(*plVar12 + 0x520));
                    (**(code **)(*plVar17 + 0x2d8))
                              (plVar17,plVar12,*(undefined8 *)(*plVar17 + 0x2e0));
                    lVar7 = lVar7 + 1;
                  } while ((int)lVar7 < *(int *)(lVar18 + 0x18));
                }
              }
              plVar11 = *(long **)(unaff_x22 + 0x78);
              if (plVar11 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar11 + 0x298))
                        (plVar11,plVar17,*(undefined8 *)(unaff_x22 + 0x80),
                         *(undefined8 *)(*plVar11 + 0x2a0));
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
            plVar17 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar5 = FUN_053b56cc(plVar3,0);
            if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
            }
            uVar5 = FUN_0566e328(uVar5,0);
            if (plVar17 == (long *)0x0) goto LAB_05415b58;
            (**(code **)(*plVar17 + 0x518))
                      (plVar17,*(undefined8 *)PTR_DAT_0676b5d0,uVar5,
                       *(undefined8 *)(*plVar17 + 0x520));
            if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05415360:
              lVar18 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
              if (lVar18 == 0) goto LAB_05415b58;
              uVar5 = FUN_0537e8d8(lVar18,0);
              (**(code **)(*plVar17 + 0x558))
                        (plVar17,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                         *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar17 + 0x560));
            }
            else {
              lVar7 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
              lVar18 = (**(code **)(*plVar3 + 0x2c8))(plVar3,*(undefined8 *)(*plVar3 + 0x2d0));
              if ((lVar18 == 0) || (lVar7 == 0)) goto LAB_05415b58;
              iVar2 = FUN_053c77c0(lVar7,*(undefined8 *)(lVar18 + 0x90),0);
              if (iVar2 == -3) goto LAB_05415360;
            }
            plVar11 = plVar3;
            if (plVar9 != (long *)0x0) {
              plVar11 = plVar9;
            }
            uVar5 = FUN_053b56cc(plVar11,0);
            if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
            }
            uVar5 = FUN_0566e328(uVar5,0);
            (**(code **)(*plVar17 + 0x518))
                      (plVar17,*(undefined8 *)PTR_DAT_06790b00,uVar5,
                       *(undefined8 *)(*plVar17 + 0x520));
            lVar18 = plVar3[6];
            uVar5 = *(undefined8 *)PTR_DAT_06791188;
            if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar5 = FUN_05015c2c(uVar5,0);
            FUN_0540ade0(lVar18,plVar17,uVar5);
            uVar5 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
            uVar8 = FUN_053b56cc(plVar3,0);
            uVar6 = FUN_04e8c024(uVar5,uVar8,0);
            if ((uVar6 & 1) != 0) {
              uVar5 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
              (**(code **)(*plVar17 + 0x558))
                        (plVar17,*(undefined8 *)Unity_VisualScripting_DoNotSerializeAttribute_var,
                         *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar17 + 0x560));
            }
            if (plVar4 == (long *)0x0) {
              lVar18 = *plVar17;
              uVar8 = *(undefined8 *)Firebase_Firestore_DocumentReference_var;
              uVar14 = *(undefined8 *)PTR_DAT_067900f8;
              uVar15 = *(undefined8 *)(lVar18 + 0x560);
              uVar5 = *(undefined8 *)PTR_DAT_06771b30;
LAB_0541562c:
              (**(code **)(lVar18 + 0x558))(plVar17,uVar8,uVar14,uVar5,uVar15);
            }
            else {
              uVar6 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
              if ((uVar6 & 1) != 0) {
                (**(code **)(*plVar17 + 0x558))
                          (plVar17,*(undefined8 *)
                                    System_Runtime_CompilerServices_DecimalConstantAttribute_var,
                           *(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                           *(undefined8 *)(*plVar17 + 0x560));
              }
              lVar18 = plVar4[3];
              uVar5 = *(undefined8 *)
                       UnityEngine_XR_ARFoundation_ARTrackedObjectsChangedEventArgs_var;
              if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar5 = FUN_05015c2c(uVar5,0);
              FUN_0540ade0(lVar18,plVar17,uVar5);
              uVar5 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
              uVar8 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
              uVar6 = FUN_04e8c024(uVar5,uVar8,0);
              if ((uVar6 & 1) != 0) {
                uVar5 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
                if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                }
                uVar5 = FUN_0566e328(uVar5,0);
                lVar18 = *plVar17;
                uVar8 = *(undefined8 *)System_Runtime_InteropServices_DllImportAttribute_var;
                uVar15 = *(undefined8 *)(lVar18 + 0x560);
                uVar14 = *(undefined8 *)PTR_DAT_067900f8;
                goto LAB_0541562c;
              }
            }
            plVar4 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar5 = FUN_053868f0(in_stack_00000020,0);
            uVar5 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                 in_stack_00000030,uVar5,0);
            if (plVar4 == (long *)0x0) {
LAB_05415b58:
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            (**(code **)(*plVar4 + 0x518))
                      (plVar4,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar5,
                       *(undefined8 *)(*plVar4 + 0x520));
            (**(code **)(*plVar17 + 0x2d8))(plVar17,plVar4,*(undefined8 *)(*plVar17 + 0x2e0));
            iVar2 = (**(code **)(*plVar3 + 0x278))(plVar3,*(undefined8 *)(*plVar3 + 0x280));
            if (iVar2 != 0) {
              (**(code **)(*plVar3 + 0x278))(plVar3,*(undefined8 *)(*plVar3 + 0x280));
              uVar5 = FUN_05417bfc();
              (**(code **)(*plVar17 + 0x558))
                        (plVar17,*(undefined8 *)UnityEngine_UIElements_DragAndDropArgs_var,
                         *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar17 + 0x560));
            }
            iVar2 = (**(code **)(*plVar3 + 0x2d8))(plVar3,*(undefined8 *)(*plVar3 + 0x2e0));
            if (iVar2 != 1) {
              (**(code **)(*plVar3 + 0x2d8))(plVar3,*(undefined8 *)(*plVar3 + 0x2e0));
              uVar5 = FUN_05417c6c();
              (**(code **)(*plVar17 + 0x558))
                        (plVar17,*(undefined8 *)UnityEngine_InputSystem_Controls_DoubleControl_var,
                         *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar17 + 0x560));
            }
            iVar2 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
            if (iVar2 != 1) {
              (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
              uVar5 = FUN_05417c6c();
              (**(code **)(*plVar17 + 0x558))
                        (plVar17,*(undefined8 *)UnityEngine_InputSystem_Controls_DpadControl_var,
                         *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar17 + 0x560));
            }
            lVar18 = (**(code **)(*plVar3 + 0x268))(plVar3,*(undefined8 *)(*plVar3 + 0x270));
            if (lVar18 == 0) goto LAB_05415b58;
            if (*(long *)(lVar18 + 0x18) != 0) {
              plVar3 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
              FUN_04e9624c(plVar3,0);
              if (0 < *(int *)(lVar18 + 0x18)) {
                if (plVar3 == (long *)0x0) goto LAB_05415b58;
                lVar7 = 0;
                do {
                  FUN_04e97278(plVar3,0,0);
                  uVar19 = (uint)lVar7;
                  if (*(int *)(unaff_x22 + 0x5c) == 2) {
                    lVar10 = FUN_04e97bc4(plVar3,in_stack_00000030,0);
                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_05415b5c;
                    lVar13 = *(long *)(lVar18 + 0x20 + lVar7 * 8);
                    if ((lVar13 == 0) || (uVar5 = FUN_05397bec(lVar13,0), lVar10 == 0))
                    goto LAB_05415b58;
                    FUN_04e97bc4(lVar10,uVar5,0);
                  }
                  else {
                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_05415b5c;
                    plVar4 = (long *)(lVar18 + (long)(int)uVar19 * 8 + 0x20);
                    if (*plVar4 == 0) goto LAB_05415b58;
                    FUN_05399824(*plVar4,0);
                    FUN_05416194();
                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_05415b5c;
                    if (*plVar4 == 0) goto LAB_05415b58;
                    uVar5 = FUN_05399824(*plVar4,0);
                    uVar6 = FUN_04e8cf70(uVar5,0);
                    if ((uVar6 & 1) == 0) {
                      if (*(uint *)(lVar18 + 0x18) <= uVar19) {
LAB_05415b5c:
                    /* WARNING: Subroutine does not return */
                        FUN_02d60af0();
                      }
                      if (*plVar4 == 0) goto LAB_05415b58;
                      plVar9 = *(long **)(unaff_x22 + 0x28);
                      uVar5 = FUN_05399824(*plVar4,0);
                      if (plVar9 == (long *)0x0) goto LAB_05415b58;
                      uVar5 = (**(code **)(*plVar9 + 0x308))
                                        (plVar9,uVar5,*(undefined8 *)(*plVar9 + 0x310));
                      lVar10 = FUN_04e98bb0(plVar3,uVar5,0);
                      if (lVar10 == 0) goto LAB_05415b58;
                      FUN_04e98a58(lVar10,0x3a,0);
                    }
                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_05415b5c;
                    if (*plVar4 == 0) goto LAB_05415b58;
                    uVar5 = FUN_05397bec(*plVar4,0);
                    FUN_04e97bc4(plVar3,uVar5,0);
                    unaff_x28 = (long *)PTR_DAT_0678fcf8;
                  }
                  if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_05415b5c;
                  plVar9 = (long *)(lVar18 + (long)(int)uVar19 * 8 + 0x20);
                  plVar4 = (long *)*plVar9;
                  if (plVar4 == (long *)0x0) goto LAB_05415b58;
                  iVar2 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
                  if (iVar2 == 2) {
LAB_054159fc:
                    FUN_04e98e18(plVar3,0,0x40,0);
                  }
                  else {
                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_05415b5c;
                    plVar9 = (long *)*plVar9;
                    if (plVar9 == (long *)0x0) goto LAB_05415b58;
                    iVar2 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
                    if (iVar2 == 4) goto LAB_054159fc;
                  }
                  plVar4 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
                  if (plVar4 == (long *)0x0) goto LAB_05415b58;
                  (**(code **)(*plVar4 + 0x518))
                            (plVar4,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar5,
                             *(undefined8 *)(*plVar4 + 0x520));
                  (**(code **)(*plVar17 + 0x2d8))(plVar17,plVar4,*(undefined8 *)(*plVar17 + 0x2e0));
                  lVar7 = lVar7 + 1;
                } while ((int)lVar7 < *(int *)(lVar18 + 0x18));
              }
            }
            plVar3 = *(long **)(unaff_x22 + 0x78);
            if (plVar3 == (long *)0x0) goto LAB_05415b58;
            (**(code **)(*plVar3 + 0x2a8))
                      (plVar3,plVar17,*(undefined8 *)(unaff_x22 + 0x80),
                       *(undefined8 *)(*plVar3 + 0x2b0));
            unaff_x19 = (long *)PTR_DAT_0678fd00;
            unaff_x20 = in_stack_00000020;
          }
        }
        else {
          if (plVar3 == (long *)0x0) goto LAB_05415b58;
          plVar4 = *(long **)(unaff_x22 + 0x38);
          uVar5 = (**(code **)(*plVar3 + 0x2c8))(plVar3,*(undefined8 *)(*plVar3 + 0x2d0));
          if (plVar4 == (long *)0x0) goto LAB_05415b58;
          uVar6 = (**(code **)(*plVar4 + 0x348))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x350));
          unaff_x19 = (long *)PTR_DAT_0678fd00;
          if ((uVar6 & 1) != 0) {
            plVar4 = *(long **)(unaff_x22 + 0x38);
            uVar5 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
            if (plVar4 == (long *)0x0) goto LAB_05415b58;
            uVar6 = (**(code **)(*plVar4 + 0x348))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x350));
            unaff_x19 = (long *)PTR_DAT_0678fd00;
            if (((uVar6 & 1) != 0) && (uVar6 = FUN_054182e0(), (uVar6 & 1) == 0)) goto LAB_05414d3c;
          }
        }
      }
    }
    while( true ) {
      unaff_w26 = unaff_w26 + 1;
      iVar2 = (**(code **)(*unaff_x24 + 0x1c8))();
      if (iVar2 <= unaff_w26) {
        FUN_0540ade0(*(undefined8 *)(unaff_x20 + 0x88),in_stack_00000018,0);
        return in_stack_00000018;
      }
      plVar3 = (long *)FUN_053b5a7c();
      if (plVar3 == (long *)0x0) break;
      bVar1 = *(byte *)(*unaff_x19 + 0x130);
      if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x19)) break;
      plVar3 = (long *)FUN_053b5a7c();
      if (plVar3 == (long *)0x0) {
        uVar6 = FUN_054182e0();
        if ((uVar6 & 1) == 0) goto LAB_05415b58;
      }
      else {
        bVar1 = *(byte *)(*unaff_x19 + 0x130);
        if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x19)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(plVar3);
        }
        uVar6 = FUN_054182e0();
        if ((uVar6 & 1) == 0) {
          lVar18 = plVar3[7];
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
            lVar7 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
            if (lVar7 == 0) goto LAB_05415b58;
            iVar2 = FUN_053c77c0(lVar7,*(undefined8 *)(unaff_x20 + 0x90),0);
            if (iVar2 == -3) goto LAB_05414860;
          }
          uVar5 = FUN_053b56cc(plVar3,0);
          if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
          }
          uVar5 = FUN_0566e328(uVar5,0);
          if (plVar4 == (long *)0x0) goto LAB_05415b58;
          (**(code **)(*plVar4 + 0x518))
                    (plVar4,*(undefined8 *)PTR_DAT_0676b5d0,uVar5,*(undefined8 *)(*plVar4 + 0x520));
          uVar5 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
          uVar8 = FUN_053b56cc(plVar3,0);
          uVar6 = FUN_04e8c024(uVar5,uVar8,0);
          if ((uVar6 & 1) != 0) {
            uVar5 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
            (**(code **)(*plVar4 + 0x558))
                      (plVar4,*(undefined8 *)Unity_VisualScripting_DoNotSerializeAttribute_var,
                       *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar4 + 0x560));
          }
          FUN_0540ade0(plVar3[6],plVar4,0);
          plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
          uVar5 = FUN_053868f0(unaff_x20,0);
          uVar5 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                               in_stack_00000030,uVar5,0);
          if (plVar9 == (long *)0x0) goto LAB_05415b58;
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
          if (lVar18 == 0) goto LAB_05415b58;
          if (*(long *)(lVar18 + 0x18) != 0) {
            plVar3 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
            FUN_04e9624c(plVar3,0);
            if (0 < *(int *)(lVar18 + 0x18)) {
              if (plVar3 == (long *)0x0) goto LAB_05415b58;
              lVar7 = 0;
              do {
                FUN_04e97278(plVar3,0,0);
                uVar19 = (uint)lVar7;
                if (*(int *)(unaff_x22 + 0x5c) == 2) {
                  plVar9 = (long *)FUN_04e97bc4(plVar3,in_stack_00000030,0);
                  if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_05415b5c;
                  lVar10 = *(long *)(lVar18 + 0x20 + lVar7 * 8);
                  if ((lVar10 == 0) || (uVar5 = FUN_05397bec(lVar10,0), plVar9 == (long *)0x0))
                  goto LAB_05415b58;
                }
                else {
                  if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_05415b5c;
                  plVar9 = (long *)(lVar18 + (long)(int)uVar19 * 8 + 0x20);
                  if (*plVar9 == 0) goto LAB_05415b58;
                  FUN_05399824(*plVar9,0);
                  FUN_05416194();
                  if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_05415b5c;
                  if (*plVar9 == 0) goto LAB_05415b58;
                  uVar5 = FUN_05399824(*plVar9,0);
                  uVar6 = FUN_04e8cf70(uVar5,0);
                  if ((uVar6 & 1) == 0) {
                    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_05415b5c;
                    if (*plVar9 == 0) goto LAB_05415b58;
                    plVar17 = *(long **)(unaff_x22 + 0x28);
                    uVar5 = FUN_05399824(*plVar9,0);
                    if (plVar17 == (long *)0x0) goto LAB_05415b58;
                    uVar5 = (**(code **)(*plVar17 + 0x308))
                                      (plVar17,uVar5,*(undefined8 *)(*plVar17 + 0x310));
                    lVar10 = FUN_04e98bb0(plVar3,uVar5,0);
                    if (lVar10 == 0) goto LAB_05415b58;
                    FUN_04e98a58(lVar10,0x3a,0);
                  }
                  if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_05415b5c;
                  if (*plVar9 == 0) goto LAB_05415b58;
                  uVar5 = FUN_05397bec(*plVar9,0);
                  plVar9 = plVar3;
                }
                FUN_04e97bc4(plVar9,uVar5,0);
                if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_05415b5c;
                plVar17 = (long *)(lVar18 + (long)(int)uVar19 * 8 + 0x20);
                plVar9 = (long *)*plVar17;
                if (plVar9 == (long *)0x0) goto LAB_05415b58;
                iVar2 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
                if (iVar2 == 2) {
LAB_05414c38:
                  FUN_04e98e18(plVar3,0,0x40,0);
                }
                else {
                  if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_05415b5c;
                  plVar17 = (long *)*plVar17;
                  if (plVar17 == (long *)0x0) goto LAB_05415b58;
                  iVar2 = (**(code **)(*plVar17 + 0x1d8))(plVar17,*(undefined8 *)(*plVar17 + 0x1e0))
                  ;
                  if (iVar2 == 4) goto LAB_05414c38;
                }
                plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
                if (plVar9 == (long *)0x0) goto LAB_05415b58;
                (**(code **)(*plVar9 + 0x518))
                          (plVar9,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar5,
                           *(undefined8 *)(*plVar9 + 0x520));
                (**(code **)(*plVar4 + 0x2d8))(plVar4,plVar9,*(undefined8 *)(*plVar4 + 0x2e0));
                lVar7 = lVar7 + 1;
              } while ((int)lVar7 < *(int *)(lVar18 + 0x18));
            }
          }
          plVar3 = *(long **)(unaff_x22 + 0x78);
          if (plVar3 == (long *)0x0) goto LAB_05415b58;
          (**(code **)(*plVar3 + 0x298))
                    (plVar3,plVar4,*(undefined8 *)(unaff_x22 + 0x80),
                     *(undefined8 *)(*plVar3 + 0x2a0));
          unaff_x19 = (long *)PTR_DAT_0678fd00;
          unaff_x20 = in_stack_00000020;
          unaff_x28 = (long *)PTR_DAT_0678fcf8;
        }
      }
    }
  } while( true );
}


