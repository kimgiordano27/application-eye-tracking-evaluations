/*
FUNCTION_NAME: System.Runtime.Diagnostics.EtwDiagnosticTrace$$GenerateMsdnTraceCode
ENTRY_POINT: 05415240
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


undefined8
System_Runtime_Diagnostics_EtwDiagnosticTrace__GenerateMsdnTraceCode
          (long param_1,long *param_2,long *param_3)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  code *in_x9;
  long *unaff_x19;
  long lVar15;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *plVar16;
  int unaff_w26;
  long *unaff_x27;
  long unaff_x28;
  uint uVar17;
  long unaff_x29;
  long *in_stack_00000000;
  long *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  
code_r0x05415240:
  (*in_x9)(param_2,param_3,*(undefined8 *)(param_1 + 0x2e0));
  unaff_x28 = unaff_x28 + 1;
  param_2 = unaff_x23;
  if (*(int *)(unaff_x29 + 0x18) <= (int)unaff_x28) {
LAB_05415258:
    plVar3 = *(long **)(unaff_x22 + 0x78);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x298))
                (plVar3,unaff_x23,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(*plVar3 + 0x2a0)
                );
      plVar3 = (long *)PTR_DAT_0678fcf8;
      do {
        plVar4 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
        uVar5 = FUN_053b56cc(unaff_x27,0);
        if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
        }
        uVar5 = FUN_0566e328(uVar5,0);
        if (plVar4 == (long *)0x0) break;
        (**(code **)(*plVar4 + 0x518))
                  (plVar4,*(undefined8 *)PTR_DAT_0676b5d0,uVar5,*(undefined8 *)(*plVar4 + 0x520));
        if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05415360:
          lVar6 = (**(code **)(*unaff_x27 + 0x1b8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1c0));
          if (lVar6 == 0) break;
          uVar5 = FUN_0537e8d8(lVar6,0);
          (**(code **)(*plVar4 + 0x558))
                    (plVar4,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                     *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar4 + 0x560));
        }
        else {
          lVar15 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
          lVar6 = (**(code **)(*unaff_x27 + 0x2c8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
          if ((lVar6 == 0) || (lVar15 == 0)) break;
          iVar2 = FUN_053c77c0(lVar15,*(undefined8 *)(lVar6 + 0x90),0);
          if (iVar2 == -3) goto LAB_05415360;
        }
        plVar9 = unaff_x27;
        if (in_stack_00000000 != (long *)0x0) {
          plVar9 = in_stack_00000000;
        }
        uVar5 = FUN_053b56cc(plVar9,0);
        if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
        }
        uVar5 = FUN_0566e328(uVar5,0);
        (**(code **)(*plVar4 + 0x518))
                  (plVar4,*(undefined8 *)PTR_DAT_06790b00,uVar5,*(undefined8 *)(*plVar4 + 0x520));
        lVar6 = unaff_x27[6];
        uVar5 = *(undefined8 *)PTR_DAT_06791188;
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar5 = FUN_05015c2c(uVar5,0);
        FUN_0540ade0(lVar6,plVar4,uVar5);
        uVar5 = (**(code **)(*unaff_x27 + 0x178))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x180));
        uVar7 = FUN_053b56cc(unaff_x27,0);
        uVar8 = FUN_04e8c024(uVar5,uVar7,0);
        if ((uVar8 & 1) != 0) {
          uVar5 = (**(code **)(*unaff_x27 + 0x178))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x180));
          (**(code **)(*plVar4 + 0x558))
                    (plVar4,*(undefined8 *)Unity_VisualScripting_DoNotSerializeAttribute_var,
                     *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar4 + 0x560));
        }
        if (in_stack_00000008 == (long *)0x0) {
          lVar6 = *plVar4;
          uVar7 = *(undefined8 *)Firebase_Firestore_DocumentReference_var;
          uVar13 = *(undefined8 *)PTR_DAT_067900f8;
          uVar14 = *(undefined8 *)(lVar6 + 0x560);
          uVar5 = *(undefined8 *)PTR_DAT_06771b30;
LAB_0541562c:
          (**(code **)(lVar6 + 0x558))(plVar4,uVar7,uVar13,uVar5,uVar14);
        }
        else {
          uVar8 = (**(code **)(*in_stack_00000008 + 0x1d8))
                            (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x1e0));
          if ((uVar8 & 1) != 0) {
            (**(code **)(*plVar4 + 0x558))
                      (plVar4,*(undefined8 *)
                               System_Runtime_CompilerServices_DecimalConstantAttribute_var,
                       *(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                       *(undefined8 *)(*plVar4 + 0x560));
          }
          lVar6 = in_stack_00000008[3];
          uVar5 = *(undefined8 *)UnityEngine_XR_ARFoundation_ARTrackedObjectsChangedEventArgs_var;
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar5 = FUN_05015c2c(uVar5,0);
          FUN_0540ade0(lVar6,plVar4,uVar5);
          uVar5 = (**(code **)(*unaff_x27 + 0x178))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x180));
          uVar7 = (**(code **)(*in_stack_00000008 + 0x1c8))
                            (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x1d0));
          uVar8 = FUN_04e8c024(uVar5,uVar7,0);
          if ((uVar8 & 1) != 0) {
            uVar5 = (**(code **)(*in_stack_00000008 + 0x1c8))
                              (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x1d0));
            if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
            }
            uVar5 = FUN_0566e328(uVar5,0);
            lVar6 = *plVar4;
            uVar7 = *(undefined8 *)System_Runtime_InteropServices_DllImportAttribute_var;
            uVar14 = *(undefined8 *)(lVar6 + 0x560);
            uVar13 = *(undefined8 *)PTR_DAT_067900f8;
            goto LAB_0541562c;
          }
        }
        plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
        uVar5 = FUN_053868f0(in_stack_00000020,0);
        uVar5 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                             in_stack_00000030,uVar5,0);
        if (plVar9 == (long *)0x0) break;
        (**(code **)(*plVar9 + 0x518))
                  (plVar9,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar5,
                   *(undefined8 *)(*plVar9 + 0x520));
        (**(code **)(*plVar4 + 0x2d8))(plVar4,plVar9,*(undefined8 *)(*plVar4 + 0x2e0));
        iVar2 = (**(code **)(*unaff_x27 + 0x278))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x280));
        if (iVar2 != 0) {
          (**(code **)(*unaff_x27 + 0x278))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x280));
          uVar5 = FUN_05417bfc();
          (**(code **)(*plVar4 + 0x558))
                    (plVar4,*(undefined8 *)UnityEngine_UIElements_DragAndDropArgs_var,
                     *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar4 + 0x560));
        }
        iVar2 = (**(code **)(*unaff_x27 + 0x2d8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2e0));
        if (iVar2 != 1) {
          (**(code **)(*unaff_x27 + 0x2d8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2e0));
          uVar5 = FUN_05417c6c();
          (**(code **)(*plVar4 + 0x558))
                    (plVar4,*(undefined8 *)UnityEngine_InputSystem_Controls_DoubleControl_var,
                     *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar4 + 0x560));
        }
        iVar2 = (**(code **)(*unaff_x27 + 0x298))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2a0));
        if (iVar2 != 1) {
          (**(code **)(*unaff_x27 + 0x298))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2a0));
          uVar5 = FUN_05417c6c();
          (**(code **)(*plVar4 + 0x558))
                    (plVar4,*(undefined8 *)UnityEngine_InputSystem_Controls_DpadControl_var,
                     *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar4 + 0x560));
        }
        lVar6 = (**(code **)(*unaff_x27 + 0x268))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x270));
        if (lVar6 == 0) break;
        if (*(long *)(lVar6 + 0x18) != 0) {
          plVar9 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
          FUN_04e9624c(plVar9,0);
          if (0 < *(int *)(lVar6 + 0x18)) {
            if (plVar9 == (long *)0x0) break;
            lVar15 = 0;
            do {
              FUN_04e97278(plVar9,0,0);
              uVar17 = (uint)lVar15;
              if (*(int *)(unaff_x22 + 0x5c) == 2) {
                lVar10 = FUN_04e97bc4(plVar9,in_stack_00000030,0);
                if (*(uint *)(lVar6 + 0x18) <= uVar17) goto LAB_05415b5c;
                lVar11 = *(long *)(lVar6 + 0x20 + lVar15 * 8);
                if ((lVar11 == 0) || (uVar5 = FUN_05397bec(lVar11,0), lVar10 == 0))
                goto LAB_05415b58;
                FUN_04e97bc4(lVar10,uVar5,0);
              }
              else {
                if (*(uint *)(lVar6 + 0x18) <= uVar17) goto LAB_05415b5c;
                plVar3 = (long *)(lVar6 + (long)(int)uVar17 * 8 + 0x20);
                if (*plVar3 == 0) goto LAB_05415b58;
                FUN_05399824(*plVar3,0);
                FUN_05416194();
                if (*(uint *)(lVar6 + 0x18) <= uVar17) goto LAB_05415b5c;
                if (*plVar3 == 0) goto LAB_05415b58;
                uVar5 = FUN_05399824(*plVar3,0);
                uVar8 = FUN_04e8cf70(uVar5,0);
                if ((uVar8 & 1) == 0) {
                  if (*(uint *)(lVar6 + 0x18) <= uVar17) goto LAB_05415b5c;
                  if (*plVar3 == 0) goto LAB_05415b58;
                  plVar12 = *(long **)(unaff_x22 + 0x28);
                  uVar5 = FUN_05399824(*plVar3,0);
                  if (plVar12 == (long *)0x0) goto LAB_05415b58;
                  uVar5 = (**(code **)(*plVar12 + 0x308))
                                    (plVar12,uVar5,*(undefined8 *)(*plVar12 + 0x310));
                  lVar10 = FUN_04e98bb0(plVar9,uVar5,0);
                  if (lVar10 == 0) goto LAB_05415b58;
                  FUN_04e98a58(lVar10,0x3a,0);
                }
                if (*(uint *)(lVar6 + 0x18) <= uVar17) goto LAB_05415b5c;
                if (*plVar3 == 0) goto LAB_05415b58;
                uVar5 = FUN_05397bec(*plVar3,0);
                FUN_04e97bc4(plVar9,uVar5,0);
                plVar3 = (long *)PTR_DAT_0678fcf8;
              }
              if (*(uint *)(lVar6 + 0x18) <= uVar17) goto LAB_05415b5c;
              plVar16 = (long *)(lVar6 + (long)(int)uVar17 * 8 + 0x20);
              plVar12 = (long *)*plVar16;
              if (plVar12 == (long *)0x0) goto LAB_05415b58;
              iVar2 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
              if (iVar2 == 2) {
LAB_054159fc:
                FUN_04e98e18(plVar9,0,0x40,0);
              }
              else {
                if (*(uint *)(lVar6 + 0x18) <= uVar17) goto LAB_05415b5c;
                plVar16 = (long *)*plVar16;
                if (plVar16 == (long *)0x0) goto LAB_05415b58;
                iVar2 = (**(code **)(*plVar16 + 0x1d8))(plVar16,*(undefined8 *)(*plVar16 + 0x1e0));
                if (iVar2 == 4) goto LAB_054159fc;
              }
              plVar12 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              uVar5 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
              if (plVar12 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar12 + 0x518))
                        (plVar12,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar5,
                         *(undefined8 *)(*plVar12 + 0x520));
              (**(code **)(*plVar4 + 0x2d8))(plVar4,plVar12,*(undefined8 *)(*plVar4 + 0x2e0));
              lVar15 = lVar15 + 1;
            } while ((int)lVar15 < *(int *)(lVar6 + 0x18));
          }
        }
        plVar9 = *(long **)(unaff_x22 + 0x78);
        if (plVar9 == (long *)0x0) break;
        (**(code **)(*plVar9 + 0x2a8))
                  (plVar9,plVar4,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(*plVar9 + 0x2b0))
        ;
        plVar4 = (long *)PTR_DAT_0678fd00;
LAB_05415ae0:
        do {
          do {
            do {
              do {
                unaff_w26 = unaff_w26 + 1;
                iVar2 = (**(code **)(*unaff_x24 + 0x1c8))();
                if (iVar2 <= unaff_w26) {
                  FUN_0540ade0(*(undefined8 *)(in_stack_00000020 + 0x88),in_stack_00000018,0);
                  return in_stack_00000018;
                }
                plVar9 = (long *)FUN_053b5a7c();
                if (plVar9 != (long *)0x0) {
                  bVar1 = *(byte *)(*plVar4 + 0x130);
                  if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
                     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) == *plVar4)) {
                    plVar9 = (long *)FUN_053b5a7c();
                    if (plVar9 == (long *)0x0) {
                      uVar8 = FUN_054182e0();
                      if ((uVar8 & 1) == 0) goto LAB_05415b58;
                    }
                    else {
                      bVar1 = *(byte *)(*plVar4 + 0x130);
                      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *plVar4)) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d60e88(plVar9);
                      }
                      uVar8 = FUN_054182e0();
                      if ((uVar8 & 1) == 0) {
                        lVar6 = plVar9[7];
                        plVar3 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                        if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414860:
                          uVar5 = FUN_0537e8d8(in_stack_00000020,0);
                          if (plVar3 == (long *)0x0) goto LAB_05415b58;
                          (**(code **)(*plVar3 + 0x558))
                                    (plVar3,*(undefined8 *)System_ComponentModel_DoubleConverter_var
                                     ,*(undefined8 *)PTR_DAT_067900f8,uVar5,
                                     *(undefined8 *)(*plVar3 + 0x560));
                        }
                        else {
                          lVar15 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                          if (lVar15 == 0) goto LAB_05415b58;
                          iVar2 = FUN_053c77c0(lVar15,*(undefined8 *)(in_stack_00000020 + 0x90),0);
                          if (iVar2 == -3) goto LAB_05414860;
                        }
                        uVar5 = FUN_053b56cc(plVar9,0);
                        if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                        }
                        uVar5 = FUN_0566e328(uVar5,0);
                        if (plVar3 == (long *)0x0) goto LAB_05415b58;
                        (**(code **)(*plVar3 + 0x518))
                                  (plVar3,*(undefined8 *)PTR_DAT_0676b5d0,uVar5,
                                   *(undefined8 *)(*plVar3 + 0x520));
                        uVar5 = (**(code **)(*plVar9 + 0x178))
                                          (plVar9,*(undefined8 *)(*plVar9 + 0x180));
                        uVar7 = FUN_053b56cc(plVar9,0);
                        uVar8 = FUN_04e8c024(uVar5,uVar7,0);
                        if ((uVar8 & 1) != 0) {
                          uVar5 = (**(code **)(*plVar9 + 0x178))
                                            (plVar9,*(undefined8 *)(*plVar9 + 0x180));
                          (**(code **)(*plVar3 + 0x558))
                                    (plVar3,*(undefined8 *)
                                             Unity_VisualScripting_DoNotSerializeAttribute_var,
                                     *(undefined8 *)PTR_DAT_067900f8,uVar5,
                                     *(undefined8 *)(*plVar3 + 0x560));
                        }
                        FUN_0540ade0(plVar9[6],plVar3,0);
                        plVar4 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                        uVar5 = FUN_053868f0(in_stack_00000020,0);
                        uVar5 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                             in_stack_00000030,uVar5,0);
                        if (plVar4 == (long *)0x0) goto LAB_05415b58;
                        (**(code **)(*plVar4 + 0x518))
                                  (plVar4,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,
                                   uVar5,*(undefined8 *)(*plVar4 + 0x520));
                        (**(code **)(*plVar3 + 0x2d8))
                                  (plVar3,plVar4,*(undefined8 *)(*plVar3 + 0x2e0));
                        uVar8 = System_Runtime_Serialization_XmlObjectSerializerContext__get_IgnoreExtensionDataObject
                                          (plVar9,0);
                        if ((uVar8 & 1) != 0) {
                          (**(code **)(*plVar3 + 0x558))
                                    (plVar3,*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_var,
                                     *(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30
                                     ,*(undefined8 *)(*plVar3 + 0x560));
                        }
                        if (lVar6 == 0) goto LAB_05415b58;
                        if (*(long *)(lVar6 + 0x18) != 0) {
                          plVar4 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                          FUN_04e9624c(plVar4,0);
                          if (0 < *(int *)(lVar6 + 0x18)) {
                            if (plVar4 == (long *)0x0) goto LAB_05415b58;
                            lVar15 = 0;
                            do {
                              FUN_04e97278(plVar4,0,0);
                              uVar17 = (uint)lVar15;
                              if (*(int *)(unaff_x22 + 0x5c) == 2) {
                                plVar9 = (long *)FUN_04e97bc4(plVar4,in_stack_00000030,0);
                                if (*(uint *)(lVar6 + 0x18) <= uVar17) goto LAB_05415b5c;
                                lVar10 = *(long *)(lVar6 + 0x20 + lVar15 * 8);
                                if ((lVar10 == 0) ||
                                   (uVar5 = FUN_05397bec(lVar10,0), plVar9 == (long *)0x0))
                                goto LAB_05415b58;
                              }
                              else {
                                if (*(uint *)(lVar6 + 0x18) <= uVar17) goto LAB_05415b5c;
                                plVar9 = (long *)(lVar6 + (long)(int)uVar17 * 8 + 0x20);
                                if (*plVar9 == 0) goto LAB_05415b58;
                                FUN_05399824(*plVar9,0);
                                FUN_05416194();
                                if (*(uint *)(lVar6 + 0x18) <= uVar17) goto LAB_05415b5c;
                                if (*plVar9 == 0) goto LAB_05415b58;
                                uVar5 = FUN_05399824(*plVar9,0);
                                uVar8 = FUN_04e8cf70(uVar5,0);
                                if ((uVar8 & 1) == 0) {
                                  if (*(uint *)(lVar6 + 0x18) <= uVar17) goto LAB_05415b5c;
                                  if (*plVar9 == 0) goto LAB_05415b58;
                                  plVar12 = *(long **)(unaff_x22 + 0x28);
                                  uVar5 = FUN_05399824(*plVar9,0);
                                  if (plVar12 == (long *)0x0) goto LAB_05415b58;
                                  uVar5 = (**(code **)(*plVar12 + 0x308))
                                                    (plVar12,uVar5,*(undefined8 *)(*plVar12 + 0x310)
                                                    );
                                  lVar10 = FUN_04e98bb0(plVar4,uVar5,0);
                                  if (lVar10 == 0) goto LAB_05415b58;
                                  FUN_04e98a58(lVar10,0x3a,0);
                                }
                                if (*(uint *)(lVar6 + 0x18) <= uVar17) goto LAB_05415b5c;
                                if (*plVar9 == 0) goto LAB_05415b58;
                                uVar5 = FUN_05397bec(*plVar9,0);
                                plVar9 = plVar4;
                              }
                              FUN_04e97bc4(plVar9,uVar5,0);
                              if (*(uint *)(lVar6 + 0x18) <= uVar17) goto LAB_05415b5c;
                              plVar12 = (long *)(lVar6 + (long)(int)uVar17 * 8 + 0x20);
                              plVar9 = (long *)*plVar12;
                              if (plVar9 == (long *)0x0) goto LAB_05415b58;
                              iVar2 = (**(code **)(*plVar9 + 0x1d8))
                                                (plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
                              if (iVar2 == 2) {
LAB_05414c38:
                                FUN_04e98e18(plVar4,0,0x40,0);
                              }
                              else {
                                if (*(uint *)(lVar6 + 0x18) <= uVar17) goto LAB_05415b5c;
                                plVar12 = (long *)*plVar12;
                                if (plVar12 == (long *)0x0) goto LAB_05415b58;
                                iVar2 = (**(code **)(*plVar12 + 0x1d8))
                                                  (plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
                                if (iVar2 == 4) goto LAB_05414c38;
                              }
                              plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                              uVar5 = (**(code **)(*plVar4 + 0x168))
                                                (plVar4,*(undefined8 *)(*plVar4 + 0x170));
                              if (plVar9 == (long *)0x0) goto LAB_05415b58;
                              (**(code **)(*plVar9 + 0x518))
                                        (plVar9,*(undefined8 *)
                                                 UnityEngine_InputSystem_GravitySensor_var,uVar5,
                                         *(undefined8 *)(*plVar9 + 0x520));
                              (**(code **)(*plVar3 + 0x2d8))
                                        (plVar3,plVar9,*(undefined8 *)(*plVar3 + 0x2e0));
                              lVar15 = lVar15 + 1;
                            } while ((int)lVar15 < *(int *)(lVar6 + 0x18));
                          }
                        }
                        plVar4 = *(long **)(unaff_x22 + 0x78);
                        if (plVar4 == (long *)0x0) goto LAB_05415b58;
                        (**(code **)(*plVar4 + 0x298))
                                  (plVar4,plVar3,*(undefined8 *)(unaff_x22 + 0x80),
                                   *(undefined8 *)(*plVar4 + 0x2a0));
                        plVar4 = (long *)PTR_DAT_0678fd00;
                        plVar3 = (long *)PTR_DAT_0678fcf8;
                      }
                    }
                    goto LAB_05415ae0;
                  }
                }
                plVar9 = (long *)FUN_053b5a7c();
              } while (plVar9 == (long *)0x0);
              bVar1 = *(byte *)(*plVar3 + 0x130);
            } while (((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *plVar3)) ||
                    ((in_stack_00000028 & 0x100000000) == 0));
            unaff_x27 = (long *)FUN_053b5a7c();
            if (unaff_x27 != (long *)0x0) {
              bVar1 = *(byte *)(*plVar3 + 0x130);
              if ((*(byte *)(*unaff_x27 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*unaff_x27 + 200) + (ulong)bVar1 * 8 + -8) != *plVar3)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60e88(unaff_x27);
              }
            }
            plVar9 = *(long **)(unaff_x22 + 0x38);
            if (plVar9 == (long *)0x0) goto LAB_05415b58;
            iVar2 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
            if (iVar2 < 1) {
              uVar8 = FUN_054182e0();
              if ((uVar8 & 1) == 0) {
                if (unaff_x27 == (long *)0x0) goto LAB_05415b58;
                goto LAB_05414d3c;
              }
              goto LAB_05415ae0;
            }
            if (unaff_x27 == (long *)0x0) goto LAB_05415b58;
            plVar4 = *(long **)(unaff_x22 + 0x38);
            uVar5 = (**(code **)(*unaff_x27 + 0x2c8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0))
            ;
            if (plVar4 == (long *)0x0) goto LAB_05415b58;
            uVar8 = (**(code **)(*plVar4 + 0x348))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x350));
            plVar4 = (long *)PTR_DAT_0678fd00;
          } while ((uVar8 & 1) == 0);
          plVar4 = *(long **)(unaff_x22 + 0x38);
          uVar5 = (**(code **)(*unaff_x27 + 0x1b8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1c0));
          if (plVar4 == (long *)0x0) goto LAB_05415b58;
          uVar8 = (**(code **)(*plVar4 + 0x348))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x350));
          plVar4 = (long *)PTR_DAT_0678fd00;
        } while (((uVar8 & 1) == 0) || (uVar8 = FUN_054182e0(), (uVar8 & 1) != 0));
LAB_05414d3c:
        in_stack_00000008 = (long *)FUN_053e1128(unaff_x27,0);
        unaff_x29 = FUN_053e0970(unaff_x27,0);
        lVar6 = (**(code **)(*unaff_x27 + 0x2c8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
        if (lVar6 == 0) break;
        lVar6 = *(long *)(lVar6 + 0x48);
        uVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0678fd00);
        FUN_053eb24c(uVar5,*(undefined8 *)UnityEngine_GUILayoutGroup_var,unaff_x29,0);
        if (lVar6 == 0) break;
        in_stack_00000000 = (long *)FUN_053b6184(lVar6,uVar5,0);
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
LAB_05414e14:
  unaff_x23 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
  uVar5 = FUN_053b56cc(unaff_x27,0);
  if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
  }
  uVar5 = FUN_0566e328(uVar5,0);
  if (unaff_x23 == (long *)0x0) goto LAB_05415b58;
  (**(code **)(*unaff_x23 + 0x518))
            (unaff_x23,*(undefined8 *)PTR_DAT_0676b5d0,uVar5,*(undefined8 *)(*unaff_x23 + 0x520));
  if (*(long *)(unaff_x22 + 0x30) != 0) {
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
    if (lVar6 == 0) goto LAB_05415b58;
    iVar2 = FUN_053c77c0(lVar6,*(undefined8 *)(in_stack_00000020 + 0x90),0);
    if (iVar2 != -3) goto LAB_05414f18;
  }
  uVar5 = FUN_0537e8d8(in_stack_00000020,0);
  (**(code **)(*unaff_x23 + 0x558))
            (unaff_x23,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
             *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*unaff_x23 + 0x560));
LAB_05414f18:
  plVar3 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
  lVar6 = (**(code **)(*unaff_x27 + 0x2c8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
  if (lVar6 == 0) goto LAB_05415b58;
  uVar5 = FUN_053868f0(lVar6,0);
  uVar5 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,in_stack_00000030,
                       uVar5,0);
  if (plVar3 == (long *)0x0) goto LAB_05415b58;
  (**(code **)(*plVar3 + 0x518))
            (plVar3,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar5,
             *(undefined8 *)(*plVar3 + 0x520));
  (**(code **)(*unaff_x23 + 0x2d8))(unaff_x23,plVar3,*(undefined8 *)(*unaff_x23 + 0x2e0));
  if (unaff_x29 == 0) goto LAB_05415b58;
  if (*(long *)(unaff_x29 + 0x18) == 0) goto LAB_05415258;
  unaff_x19 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
  FUN_04e9624c(unaff_x19,0);
  if (0 < *(int *)(unaff_x29 + 0x18)) goto code_r0x05415008;
  goto LAB_05415258;
code_r0x05415008:
  if (unaff_x19 == (long *)0x0) goto LAB_05415b58;
  unaff_x28 = 0;
  in_stack_00000010 = unaff_x29 + 0x20;
  param_2 = unaff_x23;
LAB_05415018:
  FUN_04e97278(unaff_x19,0,0);
  uVar17 = (uint)unaff_x28;
  if (*(int *)(unaff_x22 + 0x5c) == 2) {
    plVar3 = (long *)FUN_04e97bc4(unaff_x19,in_stack_00000030,0);
    if (*(uint *)(unaff_x29 + 0x18) <= uVar17) goto LAB_05415b5c;
    lVar6 = *(long *)(in_stack_00000010 + unaff_x28 * 8);
    if ((lVar6 == 0) || (uVar5 = FUN_05397bec(lVar6,0), plVar3 == (long *)0x0)) goto LAB_05415b58;
  }
  else {
    if (*(uint *)(unaff_x29 + 0x18) <= uVar17) goto LAB_05415b5c;
    plVar3 = (long *)(unaff_x29 + (long)(int)uVar17 * 8 + 0x20);
    if (*plVar3 == 0) goto LAB_05415b58;
    FUN_05399824(*plVar3,0);
    FUN_05416194();
    if (*(uint *)(unaff_x29 + 0x18) <= uVar17) goto LAB_05415b5c;
    if (*plVar3 == 0) goto LAB_05415b58;
    uVar5 = FUN_05399824(*plVar3,0);
    uVar8 = FUN_04e8cf70(uVar5,0);
    if ((uVar8 & 1) == 0) {
      if (*(uint *)(unaff_x29 + 0x18) <= uVar17) goto LAB_05415b5c;
      if (*plVar3 == 0) {
LAB_05415b58:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      plVar4 = *(long **)(unaff_x22 + 0x28);
      uVar5 = FUN_05399824(*plVar3,0);
      if (plVar4 == (long *)0x0) goto LAB_05415b58;
      uVar5 = (**(code **)(*plVar4 + 0x308))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x310));
      lVar6 = FUN_04e98bb0(unaff_x19,uVar5,0);
      if (lVar6 == 0) goto LAB_05415b58;
      FUN_04e98a58(lVar6,0x3a,0);
    }
    if (*(uint *)(unaff_x29 + 0x18) <= uVar17) goto LAB_05415b5c;
    if (*plVar3 == 0) goto LAB_05415b58;
    uVar5 = FUN_05397bec(*plVar3,0);
    plVar3 = unaff_x19;
  }
  FUN_04e97bc4(plVar3,uVar5,0);
  if (*(uint *)(unaff_x29 + 0x18) <= uVar17) {
LAB_05415b5c:
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
  plVar4 = (long *)(unaff_x29 + (long)(int)uVar17 * 8 + 0x20);
  plVar3 = (long *)*plVar4;
  if (plVar3 == (long *)0x0) goto LAB_05415b58;
  iVar2 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
  if (iVar2 != 2) {
    if (*(uint *)(unaff_x29 + 0x18) <= uVar17) goto LAB_05415b5c;
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) goto LAB_05415b58;
    iVar2 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
    if (iVar2 != 4) goto LAB_054151bc;
  }
  FUN_04e98e18(unaff_x19,0,0x40,0);
LAB_054151bc:
  param_3 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
  uVar5 = (**(code **)(*unaff_x19 + 0x168))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x170));
  if (param_3 == (long *)0x0) goto LAB_05415b58;
  (**(code **)(*param_3 + 0x518))
            (param_3,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar5,
             *(undefined8 *)(*param_3 + 0x520));
  param_1 = *param_2;
  in_x9 = *(code **)(param_1 + 0x2d8);
  unaff_x23 = param_2;
  goto code_r0x05415240;
}


