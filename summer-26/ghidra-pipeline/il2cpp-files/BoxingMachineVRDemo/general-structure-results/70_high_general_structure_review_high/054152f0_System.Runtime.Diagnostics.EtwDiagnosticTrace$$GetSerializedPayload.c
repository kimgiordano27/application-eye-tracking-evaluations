/*
FUNCTION_NAME: System.Runtime.Diagnostics.EtwDiagnosticTrace$$GetSerializedPayload
ENTRY_POINT: 054152f0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_7;frame_or_lifecycle_behavior
*/


undefined8 System_Runtime_Diagnostics_EtwDiagnosticTrace__GetSerializedPayload(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  long *plVar15;
  int unaff_w26;
  long *unaff_x27;
  long *unaff_x28;
  uint uVar16;
  long *unaff_x29;
  long *in_stack_00000008;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  
  while (uVar3 = FUN_0566e328(param_1,0), unaff_x29 != (long *)0x0) {
    (**(code **)(*unaff_x29 + 0x518))
              (unaff_x29,*(undefined8 *)PTR_DAT_0676b5d0,uVar3,*(undefined8 *)(*unaff_x29 + 0x520));
    if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05415360:
      lVar4 = (**(code **)(*unaff_x27 + 0x1b8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1c0));
      if (lVar4 == 0) break;
      uVar3 = FUN_0537e8d8(lVar4,0);
      (**(code **)(*unaff_x29 + 0x558))
                (unaff_x29,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                 *(undefined8 *)PTR_DAT_067900f8,uVar3,*(undefined8 *)(*unaff_x29 + 0x560));
    }
    else {
      lVar13 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
      lVar4 = (**(code **)(*unaff_x27 + 0x2c8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
      if ((lVar4 == 0) || (lVar13 == 0)) break;
      iVar2 = FUN_053c77c0(lVar13,*(undefined8 *)(lVar4 + 0x90),0);
      if (iVar2 == -3) goto LAB_05415360;
    }
    plVar7 = unaff_x27;
    if (unaff_x20 != (long *)0x0) {
      plVar7 = unaff_x20;
    }
    uVar3 = FUN_053b56cc(plVar7,0);
    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
    }
    uVar3 = FUN_0566e328(uVar3,0);
    (**(code **)(*unaff_x29 + 0x518))
              (unaff_x29,*(undefined8 *)PTR_DAT_06790b00,uVar3,*(undefined8 *)(*unaff_x29 + 0x520));
    lVar4 = unaff_x27[6];
    uVar3 = *(undefined8 *)PTR_DAT_06791188;
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar3 = FUN_05015c2c(uVar3,0);
    FUN_0540ade0(lVar4,unaff_x29,uVar3);
    uVar3 = (**(code **)(*unaff_x27 + 0x178))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x180));
    uVar5 = FUN_053b56cc(unaff_x27,0);
    uVar6 = FUN_04e8c024(uVar3,uVar5,0);
    if ((uVar6 & 1) != 0) {
      uVar3 = (**(code **)(*unaff_x27 + 0x178))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x180));
      (**(code **)(*unaff_x29 + 0x558))
                (unaff_x29,*(undefined8 *)Unity_VisualScripting_DoNotSerializeAttribute_var,
                 *(undefined8 *)PTR_DAT_067900f8,uVar3,*(undefined8 *)(*unaff_x29 + 0x560));
    }
    if (in_stack_00000008 == (long *)0x0) {
      lVar4 = *unaff_x29;
      uVar5 = *(undefined8 *)Firebase_Firestore_DocumentReference_var;
      uVar11 = *(undefined8 *)PTR_DAT_067900f8;
      uVar12 = *(undefined8 *)(lVar4 + 0x560);
      uVar3 = *(undefined8 *)PTR_DAT_06771b30;
LAB_0541562c:
      (**(code **)(lVar4 + 0x558))(unaff_x29,uVar5,uVar11,uVar3,uVar12);
    }
    else {
      uVar6 = (**(code **)(*in_stack_00000008 + 0x1d8))
                        (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x1e0));
      if ((uVar6 & 1) != 0) {
        (**(code **)(*unaff_x29 + 0x558))
                  (unaff_x29,
                   *(undefined8 *)System_Runtime_CompilerServices_DecimalConstantAttribute_var,
                   *(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                   *(undefined8 *)(*unaff_x29 + 0x560));
      }
      lVar4 = in_stack_00000008[3];
      uVar3 = *(undefined8 *)UnityEngine_XR_ARFoundation_ARTrackedObjectsChangedEventArgs_var;
      if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar3 = FUN_05015c2c(uVar3,0);
      FUN_0540ade0(lVar4,unaff_x29,uVar3);
      uVar3 = (**(code **)(*unaff_x27 + 0x178))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x180));
      uVar5 = (**(code **)(*in_stack_00000008 + 0x1c8))
                        (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x1d0));
      uVar6 = FUN_04e8c024(uVar3,uVar5,0);
      if ((uVar6 & 1) != 0) {
        uVar3 = (**(code **)(*in_stack_00000008 + 0x1c8))
                          (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x1d0));
        if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
        }
        uVar3 = FUN_0566e328(uVar3,0);
        lVar4 = *unaff_x29;
        uVar5 = *(undefined8 *)System_Runtime_InteropServices_DllImportAttribute_var;
        uVar12 = *(undefined8 *)(lVar4 + 0x560);
        uVar11 = *(undefined8 *)PTR_DAT_067900f8;
        goto LAB_0541562c;
      }
    }
    plVar7 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
    uVar3 = FUN_053868f0(in_stack_00000020,0);
    uVar3 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,in_stack_00000030,
                         uVar3,0);
    if (plVar7 == (long *)0x0) break;
    (**(code **)(*plVar7 + 0x518))
              (plVar7,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar3,
               *(undefined8 *)(*plVar7 + 0x520));
    (**(code **)(*unaff_x29 + 0x2d8))(unaff_x29,plVar7,*(undefined8 *)(*unaff_x29 + 0x2e0));
    iVar2 = (**(code **)(*unaff_x27 + 0x278))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x280));
    if (iVar2 != 0) {
      (**(code **)(*unaff_x27 + 0x278))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x280));
      uVar3 = FUN_05417bfc();
      (**(code **)(*unaff_x29 + 0x558))
                (unaff_x29,*(undefined8 *)UnityEngine_UIElements_DragAndDropArgs_var,
                 *(undefined8 *)PTR_DAT_067900f8,uVar3,*(undefined8 *)(*unaff_x29 + 0x560));
    }
    iVar2 = (**(code **)(*unaff_x27 + 0x2d8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2e0));
    if (iVar2 != 1) {
      (**(code **)(*unaff_x27 + 0x2d8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2e0));
      uVar3 = FUN_05417c6c();
      (**(code **)(*unaff_x29 + 0x558))
                (unaff_x29,*(undefined8 *)UnityEngine_InputSystem_Controls_DoubleControl_var,
                 *(undefined8 *)PTR_DAT_067900f8,uVar3,*(undefined8 *)(*unaff_x29 + 0x560));
    }
    iVar2 = (**(code **)(*unaff_x27 + 0x298))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2a0));
    if (iVar2 != 1) {
      (**(code **)(*unaff_x27 + 0x298))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2a0));
      uVar3 = FUN_05417c6c();
      (**(code **)(*unaff_x29 + 0x558))
                (unaff_x29,*(undefined8 *)UnityEngine_InputSystem_Controls_DpadControl_var,
                 *(undefined8 *)PTR_DAT_067900f8,uVar3,*(undefined8 *)(*unaff_x29 + 0x560));
    }
    lVar4 = (**(code **)(*unaff_x27 + 0x268))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x270));
    if (lVar4 == 0) break;
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar7 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                    /* try { // try from 05415840 to 0551594f has its CatchHandler @ 05415840
                       catch() { ... } // from try @ 05415840 with catch @ 05415840
                       catch() { ... } // from try @ 05415a14 with catch @ 05415840
                       catch() { ... } // from try @ 05415abc with catch @ 05415840
                       catch() { ... } // from try @ 05415ac4 with catch @ 05415840
                       catch() { ... } // from try @ 05415b64 with catch @ 05415840 */
      FUN_04e9624c(plVar7,0);
      if (0 < *(int *)(lVar4 + 0x18)) {
        if (plVar7 == (long *)0x0) break;
        lVar13 = 0;
        do {
          FUN_04e97278(plVar7,0,0);
          uVar16 = (uint)lVar13;
          if (*(int *)(unaff_x22 + 0x5c) == 2) {
            lVar8 = FUN_04e97bc4(plVar7,in_stack_00000030,0);
            if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_05415b5c;
            lVar9 = *(long *)(lVar4 + 0x20 + lVar13 * 8);
            if ((lVar9 == 0) || (uVar3 = FUN_05397bec(lVar9,0), lVar8 == 0)) goto LAB_05415b58;
            FUN_04e97bc4(lVar8,uVar3,0);
          }
          else {
            if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_05415b5c;
            plVar10 = (long *)(lVar4 + (long)(int)uVar16 * 8 + 0x20);
            if (*plVar10 == 0) goto LAB_05415b58;
            FUN_05399824(*plVar10,0);
            FUN_05416194();
            if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_05415b5c;
            if (*plVar10 == 0) goto LAB_05415b58;
            uVar3 = FUN_05399824(*plVar10,0);
            uVar6 = FUN_04e8cf70(uVar3,0);
            if ((uVar6 & 1) == 0) {
              if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_05415b5c;
              if (*plVar10 == 0) goto LAB_05415b58;
              plVar15 = *(long **)(unaff_x22 + 0x28);
              uVar3 = FUN_05399824(*plVar10,0);
              if (plVar15 == (long *)0x0) goto LAB_05415b58;
                    /* try { // try from 05415950 to 05515977 has its CatchHandler @ 05415ad8 */
              uVar3 = (**(code **)(*plVar15 + 0x308))
                                (plVar15,uVar3,*(undefined8 *)(*plVar15 + 0x310));
              lVar8 = FUN_04e98bb0(plVar7,uVar3,0);
              if (lVar8 == 0) goto LAB_05415b58;
              FUN_04e98a58(lVar8,0x3a,0);
            }
            if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_05415b5c;
            if (*plVar10 == 0) goto LAB_05415b58;
            uVar3 = FUN_05397bec(*plVar10,0);
            FUN_04e97bc4(plVar7,uVar3,0);
            unaff_x28 = (long *)PTR_DAT_0678fcf8;
          }
          if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_05415b5c;
          plVar15 = (long *)(lVar4 + (long)(int)uVar16 * 8 + 0x20);
          plVar10 = (long *)*plVar15;
          if (plVar10 == (long *)0x0) goto LAB_05415b58;
          iVar2 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
          if (iVar2 == 2) {
LAB_054159fc:
            FUN_04e98e18(plVar7,0,0x40,0);
          }
          else {
            if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_05415b5c;
            plVar15 = (long *)*plVar15;
            if (plVar15 == (long *)0x0) goto LAB_05415b58;
            iVar2 = (**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
            if (iVar2 == 4) goto LAB_054159fc;
          }
          plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
          uVar3 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          if (plVar10 == (long *)0x0) goto LAB_05415b58;
          (**(code **)(*plVar10 + 0x518))
                    (plVar10,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar3,
                     *(undefined8 *)(*plVar10 + 0x520));
          (**(code **)(*unaff_x29 + 0x2d8))(unaff_x29,plVar10,*(undefined8 *)(*unaff_x29 + 0x2e0));
          lVar13 = lVar13 + 1;
        } while ((int)lVar13 < *(int *)(lVar4 + 0x18));
      }
    }
    plVar7 = *(long **)(unaff_x22 + 0x78);
    if (plVar7 == (long *)0x0) break;
    (**(code **)(*plVar7 + 0x2a8))
              (plVar7,unaff_x29,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(*plVar7 + 0x2b0));
    plVar7 = (long *)PTR_DAT_0678fd00;
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
            plVar10 = (long *)FUN_053b5a7c();
            if (plVar10 != (long *)0x0) {
              bVar1 = *(byte *)(*plVar7 + 0x130);
              if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
                 (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == *plVar7)) {
                plVar10 = (long *)FUN_053b5a7c();
                if (plVar10 == (long *)0x0) {
                  uVar6 = FUN_054182e0();
                  if ((uVar6 & 1) == 0) goto LAB_05415b58;
                }
                else {
                  bVar1 = *(byte *)(*plVar7 + 0x130);
                  if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *plVar7)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60e88(plVar10);
                  }
                  uVar6 = FUN_054182e0();
                  if ((uVar6 & 1) == 0) {
                    lVar4 = plVar10[7];
                    plVar7 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414860:
                      uVar3 = FUN_0537e8d8(in_stack_00000020,0);
                      if (plVar7 == (long *)0x0) goto LAB_05415b58;
                      (**(code **)(*plVar7 + 0x558))
                                (plVar7,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                                 *(undefined8 *)PTR_DAT_067900f8,uVar3,
                                 *(undefined8 *)(*plVar7 + 0x560));
                    }
                    else {
                      lVar13 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                      if (lVar13 == 0) goto LAB_05415b58;
                      iVar2 = FUN_053c77c0(lVar13,*(undefined8 *)(in_stack_00000020 + 0x90),0);
                      if (iVar2 == -3) goto LAB_05414860;
                    }
                    uVar3 = FUN_053b56cc(plVar10,0);
                    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                    }
                    uVar3 = FUN_0566e328(uVar3,0);
                    if (plVar7 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar7 + 0x518))
                              (plVar7,*(undefined8 *)PTR_DAT_0676b5d0,uVar3,
                               *(undefined8 *)(*plVar7 + 0x520));
                    uVar3 = (**(code **)(*plVar10 + 0x178))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                    uVar5 = FUN_053b56cc(plVar10,0);
                    uVar6 = FUN_04e8c024(uVar3,uVar5,0);
                    if ((uVar6 & 1) != 0) {
                      uVar3 = (**(code **)(*plVar10 + 0x178))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                      (**(code **)(*plVar7 + 0x558))
                                (plVar7,*(undefined8 *)
                                         Unity_VisualScripting_DoNotSerializeAttribute_var,
                                 *(undefined8 *)PTR_DAT_067900f8,uVar3,
                                 *(undefined8 *)(*plVar7 + 0x560));
                    }
                    FUN_0540ade0(plVar10[6],plVar7,0);
                    plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar3 = FUN_053868f0(in_stack_00000020,0);
                    uVar3 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                         in_stack_00000030,uVar3,0);
                    if (plVar15 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar15 + 0x518))
                              (plVar15,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,
                               uVar3,*(undefined8 *)(*plVar15 + 0x520));
                    (**(code **)(*plVar7 + 0x2d8))(plVar7,plVar15,*(undefined8 *)(*plVar7 + 0x2e0));
                    uVar6 = System_Runtime_Serialization_XmlObjectSerializerContext__get_IgnoreExtensionDataObject
                                      (plVar10,0);
                    if ((uVar6 & 1) != 0) {
                      (**(code **)(*plVar7 + 0x558))
                                (plVar7,*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_var,
                                 *(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                                 *(undefined8 *)(*plVar7 + 0x560));
                    }
                    if (lVar4 == 0) goto LAB_05415b58;
                    if (*(long *)(lVar4 + 0x18) != 0) {
                      plVar10 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                      FUN_04e9624c(plVar10,0);
                      if (0 < *(int *)(lVar4 + 0x18)) {
                        if (plVar10 == (long *)0x0) goto LAB_05415b58;
                        lVar13 = 0;
                        do {
                          FUN_04e97278(plVar10,0,0);
                          uVar16 = (uint)lVar13;
                          if (*(int *)(unaff_x22 + 0x5c) == 2) {
                            plVar15 = (long *)FUN_04e97bc4(plVar10,in_stack_00000030,0);
                            if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_05415b5c;
                            lVar8 = *(long *)(lVar4 + 0x20 + lVar13 * 8);
                            if ((lVar8 == 0) ||
                               (uVar3 = FUN_05397bec(lVar8,0), plVar15 == (long *)0x0))
                            goto LAB_05415b58;
                          }
                          else {
                            if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_05415b5c;
                            plVar15 = (long *)(lVar4 + (long)(int)uVar16 * 8 + 0x20);
                            if (*plVar15 == 0) goto LAB_05415b58;
                            FUN_05399824(*plVar15,0);
                            FUN_05416194();
                            if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_05415b5c;
                            if (*plVar15 == 0) goto LAB_05415b58;
                            uVar3 = FUN_05399824(*plVar15,0);
                            uVar6 = FUN_04e8cf70(uVar3,0);
                            if ((uVar6 & 1) == 0) {
                              if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_05415b5c;
                              if (*plVar15 == 0) goto LAB_05415b58;
                              plVar14 = *(long **)(unaff_x22 + 0x28);
                              uVar3 = FUN_05399824(*plVar15,0);
                              if (plVar14 == (long *)0x0) goto LAB_05415b58;
                              uVar3 = (**(code **)(*plVar14 + 0x308))
                                                (plVar14,uVar3,*(undefined8 *)(*plVar14 + 0x310));
                              lVar8 = FUN_04e98bb0(plVar10,uVar3,0);
                              if (lVar8 == 0) goto LAB_05415b58;
                              FUN_04e98a58(lVar8,0x3a,0);
                            }
                            if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_05415b5c;
                            if (*plVar15 == 0) goto LAB_05415b58;
                            uVar3 = FUN_05397bec(*plVar15,0);
                            plVar15 = plVar10;
                          }
                          FUN_04e97bc4(plVar15,uVar3,0);
                          if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_05415b5c;
                          plVar14 = (long *)(lVar4 + (long)(int)uVar16 * 8 + 0x20);
                          plVar15 = (long *)*plVar14;
                          if (plVar15 == (long *)0x0) goto LAB_05415b58;
                          iVar2 = (**(code **)(*plVar15 + 0x1d8))
                                            (plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
                          if (iVar2 == 2) {
LAB_05414c38:
                            FUN_04e98e18(plVar10,0,0x40,0);
                          }
                          else {
                            if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_05415b5c;
                            plVar14 = (long *)*plVar14;
                            if (plVar14 == (long *)0x0) goto LAB_05415b58;
                            iVar2 = (**(code **)(*plVar14 + 0x1d8))
                                              (plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
                            if (iVar2 == 4) goto LAB_05414c38;
                          }
                          plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                          uVar3 = (**(code **)(*plVar10 + 0x168))
                                            (plVar10,*(undefined8 *)(*plVar10 + 0x170));
                          if (plVar15 == (long *)0x0) goto LAB_05415b58;
                          (**(code **)(*plVar15 + 0x518))
                                    (plVar15,*(undefined8 *)
                                              UnityEngine_InputSystem_GravitySensor_var,uVar3,
                                     *(undefined8 *)(*plVar15 + 0x520));
                          (**(code **)(*plVar7 + 0x2d8))
                                    (plVar7,plVar15,*(undefined8 *)(*plVar7 + 0x2e0));
                          lVar13 = lVar13 + 1;
                        } while ((int)lVar13 < *(int *)(lVar4 + 0x18));
                      }
                    }
                    plVar10 = *(long **)(unaff_x22 + 0x78);
                    if (plVar10 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar10 + 0x298))
                              (plVar10,plVar7,*(undefined8 *)(unaff_x22 + 0x80),
                               *(undefined8 *)(*plVar10 + 0x2a0));
                    plVar7 = (long *)PTR_DAT_0678fd00;
                    unaff_x28 = (long *)PTR_DAT_0678fcf8;
                  }
                }
                goto LAB_05415ae0;
              }
            }
            plVar10 = (long *)FUN_053b5a7c();
          } while (plVar10 == (long *)0x0);
          bVar1 = *(byte *)(*unaff_x28 + 0x130);
        } while (((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28)) ||
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
        plVar10 = *(long **)(unaff_x22 + 0x38);
        if (plVar10 == (long *)0x0) goto LAB_05415b58;
        iVar2 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
        if (iVar2 < 1) {
          uVar6 = FUN_054182e0();
          if ((uVar6 & 1) == 0) {
            if (unaff_x27 == (long *)0x0) goto LAB_05415b58;
            goto LAB_05414d3c;
          }
          goto LAB_05415ae0;
        }
        if (unaff_x27 == (long *)0x0) goto LAB_05415b58;
        plVar7 = *(long **)(unaff_x22 + 0x38);
        uVar3 = (**(code **)(*unaff_x27 + 0x2c8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
        if (plVar7 == (long *)0x0) goto LAB_05415b58;
        uVar6 = (**(code **)(*plVar7 + 0x348))(plVar7,uVar3,*(undefined8 *)(*plVar7 + 0x350));
        plVar7 = (long *)PTR_DAT_0678fd00;
      } while ((uVar6 & 1) == 0);
      plVar7 = *(long **)(unaff_x22 + 0x38);
      uVar3 = (**(code **)(*unaff_x27 + 0x1b8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x1c0));
      if (plVar7 == (long *)0x0) goto LAB_05415b58;
      uVar6 = (**(code **)(*plVar7 + 0x348))(plVar7,uVar3,*(undefined8 *)(*plVar7 + 0x350));
      plVar7 = (long *)PTR_DAT_0678fd00;
    } while (((uVar6 & 1) == 0) || (uVar6 = FUN_054182e0(), (uVar6 & 1) != 0));
LAB_05414d3c:
    in_stack_00000008 = (long *)FUN_053e1128(unaff_x27,0);
    lVar4 = FUN_053e0970(unaff_x27,0);
    lVar13 = (**(code **)(*unaff_x27 + 0x2c8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
    if (lVar13 == 0) break;
    lVar13 = *(long *)(lVar13 + 0x48);
    uVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0678fd00);
    FUN_053eb24c(uVar3,*(undefined8 *)UnityEngine_GUILayoutGroup_var,lVar4,0);
    if (lVar13 == 0) break;
    unaff_x20 = (long *)FUN_053b6184(lVar13,uVar3,0);
    if (unaff_x20 == (long *)0x0) {
      plVar7 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
      uVar3 = FUN_053b56cc(unaff_x27,0);
      if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
      }
      uVar3 = FUN_0566e328(uVar3,0);
      if (plVar7 == (long *)0x0) break;
      (**(code **)(*plVar7 + 0x518))
                (plVar7,*(undefined8 *)PTR_DAT_0676b5d0,uVar3,*(undefined8 *)(*plVar7 + 0x520));
      if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414edc:
        uVar3 = FUN_0537e8d8(in_stack_00000020,0);
        (**(code **)(*plVar7 + 0x558))
                  (plVar7,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                   *(undefined8 *)PTR_DAT_067900f8,uVar3,*(undefined8 *)(*plVar7 + 0x560));
      }
      else {
        lVar13 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
        if (lVar13 == 0) break;
        iVar2 = FUN_053c77c0(lVar13,*(undefined8 *)(in_stack_00000020 + 0x90),0);
        if (iVar2 == -3) goto LAB_05414edc;
      }
      plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
      lVar13 = (**(code **)(*unaff_x27 + 0x2c8))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x2d0));
      if (lVar13 == 0) break;
      uVar3 = FUN_053868f0(lVar13,0);
      uVar3 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,in_stack_00000030,
                           uVar3,0);
      if (plVar10 == (long *)0x0) break;
      (**(code **)(*plVar10 + 0x518))
                (plVar10,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar3,
                 *(undefined8 *)(*plVar10 + 0x520));
      (**(code **)(*plVar7 + 0x2d8))(plVar7,plVar10,*(undefined8 *)(*plVar7 + 0x2e0));
      if (lVar4 == 0) break;
      if (*(long *)(lVar4 + 0x18) != 0) {
        plVar10 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
        FUN_04e9624c(plVar10,0);
        if (0 < *(int *)(lVar4 + 0x18)) {
          if (plVar10 == (long *)0x0) break;
          lVar13 = 0;
          do {
            FUN_04e97278(plVar10,0,0);
            uVar16 = (uint)lVar13;
            if (*(int *)(unaff_x22 + 0x5c) == 2) {
              plVar15 = (long *)FUN_04e97bc4(plVar10,in_stack_00000030,0);
              if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_05415b5c;
              lVar8 = *(long *)(lVar4 + 0x20 + lVar13 * 8);
              if ((lVar8 == 0) || (uVar3 = FUN_05397bec(lVar8,0), plVar15 == (long *)0x0))
              goto LAB_05415b58;
            }
            else {
              if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_05415b5c;
              plVar15 = (long *)(lVar4 + (long)(int)uVar16 * 8 + 0x20);
              if (*plVar15 == 0) goto LAB_05415b58;
              FUN_05399824(*plVar15,0);
              FUN_05416194();
              if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_05415b5c;
              if (*plVar15 == 0) goto LAB_05415b58;
              uVar3 = FUN_05399824(*plVar15,0);
              uVar6 = FUN_04e8cf70(uVar3,0);
              if ((uVar6 & 1) == 0) {
                if (*(uint *)(lVar4 + 0x18) <= uVar16) {
LAB_05415b5c:
                    /* WARNING: Subroutine does not return */
                  FUN_02d60af0();
                }
                if (*plVar15 == 0) goto LAB_05415b58;
                plVar14 = *(long **)(unaff_x22 + 0x28);
                uVar3 = FUN_05399824(*plVar15,0);
                if (plVar14 == (long *)0x0) goto LAB_05415b58;
                uVar3 = (**(code **)(*plVar14 + 0x308))
                                  (plVar14,uVar3,*(undefined8 *)(*plVar14 + 0x310));
                lVar8 = FUN_04e98bb0(plVar10,uVar3,0);
                if (lVar8 == 0) goto LAB_05415b58;
                FUN_04e98a58(lVar8,0x3a,0);
              }
              if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_05415b5c;
              if (*plVar15 == 0) goto LAB_05415b58;
              uVar3 = FUN_05397bec(*plVar15,0);
              plVar15 = plVar10;
            }
            FUN_04e97bc4(plVar15,uVar3,0);
            if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_05415b5c;
            plVar14 = (long *)(lVar4 + (long)(int)uVar16 * 8 + 0x20);
            plVar15 = (long *)*plVar14;
            if (plVar15 == (long *)0x0) goto LAB_05415b58;
            iVar2 = (**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
            if (iVar2 == 2) {
LAB_054151a8:
              FUN_04e98e18(plVar10,0,0x40,0);
            }
            else {
              if (*(uint *)(lVar4 + 0x18) <= uVar16) goto LAB_05415b5c;
              plVar14 = (long *)*plVar14;
              if (plVar14 == (long *)0x0) goto LAB_05415b58;
              iVar2 = (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
              if (iVar2 == 4) goto LAB_054151a8;
            }
            plVar15 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar3 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
            if (plVar15 == (long *)0x0) goto LAB_05415b58;
            (**(code **)(*plVar15 + 0x518))
                      (plVar15,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar3,
                       *(undefined8 *)(*plVar15 + 0x520));
            (**(code **)(*plVar7 + 0x2d8))(plVar7,plVar15,*(undefined8 *)(*plVar7 + 0x2e0));
            lVar13 = lVar13 + 1;
          } while ((int)lVar13 < *(int *)(lVar4 + 0x18));
        }
      }
      plVar10 = *(long **)(unaff_x22 + 0x78);
      if (plVar10 == (long *)0x0) break;
      (**(code **)(*plVar10 + 0x298))
                (plVar10,plVar7,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(*plVar10 + 0x2a0))
      ;
      unaff_x28 = (long *)PTR_DAT_0678fcf8;
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0678fd00 + 0x130);
      if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)PTR_DAT_0678fd00)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(unaff_x20);
      }
    }
    unaff_x29 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
    param_1 = FUN_053b56cc(unaff_x27,0);
    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
    }
  }
LAB_05415b58:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


