/*
FUNCTION_NAME: System.Runtime.Diagnostics.EtwDiagnosticTrace$$BuildTrace
ENTRY_POINT: 054149a8
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


undefined8 System_Runtime_Diagnostics_EtwDiagnosticTrace__BuildTrace(long param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *unaff_x19;
  long unaff_x20;
  long *plVar16;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *plVar17;
  int unaff_w26;
  long unaff_x28;
  uint uVar18;
  long lVar19;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  
  while( true ) {
    plVar4 = (long *)(**(code **)(param_1 + 0x5f8))();
    uVar5 = FUN_053868f0(unaff_x20,0);
    uVar5 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,in_stack_00000030,
                         uVar5,0);
    if (plVar4 == (long *)0x0) break;
    (**(code **)(*plVar4 + 0x518))
              (plVar4,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar5,
               *(undefined8 *)(*plVar4 + 0x520));
    (**(code **)(*unaff_x19 + 0x2d8))(unaff_x19,plVar4,*(undefined8 *)(*unaff_x19 + 0x2e0));
    uVar6 = System_Runtime_Serialization_XmlObjectSerializerContext__get_IgnoreExtensionDataObject
                      (unaff_x23,0);
    if ((uVar6 & 1) != 0) {
      (**(code **)(*unaff_x19 + 0x558))
                (unaff_x19,*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_var,
                 *(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                 *(undefined8 *)(*unaff_x19 + 0x560));
    }
    if (unaff_x28 == 0) break;
    if (*(long *)(unaff_x28 + 0x18) != 0) {
      plVar4 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
      FUN_04e9624c(plVar4,0);
      if (0 < *(int *)(unaff_x28 + 0x18)) {
        if (plVar4 == (long *)0x0) break;
        lVar19 = 0;
        do {
          FUN_04e97278(plVar4,0,0);
          uVar18 = (uint)lVar19;
          if (*(int *)(unaff_x22 + 0x5c) == 2) {
            plVar7 = (long *)FUN_04e97bc4(plVar4,in_stack_00000030,0);
            if (*(uint *)(unaff_x28 + 0x18) <= uVar18) goto LAB_05415b5c;
            lVar8 = *(long *)(unaff_x28 + 0x20 + lVar19 * 8);
            if ((lVar8 == 0) || (uVar5 = FUN_05397bec(lVar8,0), plVar7 == (long *)0x0))
            goto LAB_05415b58;
          }
          else {
            if (*(uint *)(unaff_x28 + 0x18) <= uVar18) goto LAB_05415b5c;
            plVar7 = (long *)(unaff_x28 + (long)(int)uVar18 * 8 + 0x20);
            if (*plVar7 == 0) goto LAB_05415b58;
            FUN_05399824(*plVar7,0);
            FUN_05416194();
            if (*(uint *)(unaff_x28 + 0x18) <= uVar18) goto LAB_05415b5c;
            if (*plVar7 == 0) goto LAB_05415b58;
            uVar5 = FUN_05399824(*plVar7,0);
            uVar6 = FUN_04e8cf70(uVar5,0);
            if ((uVar6 & 1) == 0) {
              if (*(uint *)(unaff_x28 + 0x18) <= uVar18) {
LAB_05415b5c:
                    /* WARNING: Subroutine does not return */
                FUN_02d60af0();
              }
              if (*plVar7 == 0) goto LAB_05415b58;
              plVar17 = *(long **)(unaff_x22 + 0x28);
              uVar5 = FUN_05399824(*plVar7,0);
              if (plVar17 == (long *)0x0) goto LAB_05415b58;
              uVar5 = (**(code **)(*plVar17 + 0x308))
                                (plVar17,uVar5,*(undefined8 *)(*plVar17 + 0x310));
              lVar8 = FUN_04e98bb0(plVar4,uVar5,0);
              if (lVar8 == 0) goto LAB_05415b58;
              FUN_04e98a58(lVar8,0x3a,0);
            }
            if (*(uint *)(unaff_x28 + 0x18) <= uVar18) goto LAB_05415b5c;
            if (*plVar7 == 0) goto LAB_05415b58;
            uVar5 = FUN_05397bec(*plVar7,0);
            plVar7 = plVar4;
          }
          FUN_04e97bc4(plVar7,uVar5,0);
          if (*(uint *)(unaff_x28 + 0x18) <= uVar18) goto LAB_05415b5c;
          plVar17 = (long *)(unaff_x28 + (long)(int)uVar18 * 8 + 0x20);
          plVar7 = (long *)*plVar17;
          if (plVar7 == (long *)0x0) goto LAB_05415b58;
          iVar2 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
          if (iVar2 == 2) {
LAB_05414c38:
            FUN_04e98e18(plVar4,0,0x40,0);
          }
          else {
            if (*(uint *)(unaff_x28 + 0x18) <= uVar18) goto LAB_05415b5c;
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) goto LAB_05415b58;
            iVar2 = (**(code **)(*plVar17 + 0x1d8))(plVar17,*(undefined8 *)(*plVar17 + 0x1e0));
            if (iVar2 == 4) goto LAB_05414c38;
          }
          plVar7 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
          uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          if (plVar7 == (long *)0x0) goto LAB_05415b58;
          (**(code **)(*plVar7 + 0x518))
                    (plVar7,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar5,
                     *(undefined8 *)(*plVar7 + 0x520));
          (**(code **)(*unaff_x19 + 0x2d8))(unaff_x19,plVar7,*(undefined8 *)(*unaff_x19 + 0x2e0));
          lVar19 = lVar19 + 1;
        } while ((int)lVar19 < *(int *)(unaff_x28 + 0x18));
      }
    }
    plVar4 = *(long **)(unaff_x22 + 0x78);
    if (plVar4 == (long *)0x0) break;
    (**(code **)(*plVar4 + 0x298))
              (plVar4,unaff_x19,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(*plVar4 + 0x2a0));
    plVar4 = (long *)PTR_DAT_0678fd00;
    plVar7 = (long *)PTR_DAT_0678fcf8;
LAB_05415ae0:
    do {
      unaff_w26 = unaff_w26 + 1;
      iVar2 = (**(code **)(*unaff_x24 + 0x1c8))();
      if (iVar2 <= unaff_w26) {
        FUN_0540ade0(*(undefined8 *)(in_stack_00000020 + 0x88),in_stack_00000018,0);
        return in_stack_00000018;
      }
      plVar17 = (long *)FUN_053b5a7c();
      if (plVar17 == (long *)0x0) {
System_Runtime_Diagnostics_EtwDiagnosticTrace__get_DefaultEtwProviderId:
        plVar17 = (long *)FUN_053b5a7c();
        if (plVar17 == (long *)0x0) goto LAB_05415ae0;
        bVar1 = *(byte *)(*plVar7 + 0x130);
        if (((bVar1 <= *(byte *)(*plVar17 + 0x130)) &&
            (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) == *plVar7)) &&
           ((in_stack_00000028 & 0x100000000) != 0)) {
          plVar17 = (long *)FUN_053b5a7c();
          if (plVar17 != (long *)0x0) {
            bVar1 = *(byte *)(*plVar7 + 0x130);
            if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != *plVar7)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60e88(plVar17);
            }
          }
          plVar3 = *(long **)(unaff_x22 + 0x38);
          if (plVar3 == (long *)0x0) goto LAB_05415b58;
          iVar2 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
          if (iVar2 < 1) {
            uVar6 = FUN_054182e0();
            if ((uVar6 & 1) != 0) goto LAB_05415ae0;
            if (plVar17 == (long *)0x0) goto LAB_05415b58;
          }
          else {
            if (plVar17 == (long *)0x0) goto LAB_05415b58;
            plVar4 = *(long **)(unaff_x22 + 0x38);
            uVar5 = (**(code **)(*plVar17 + 0x2c8))(plVar17,*(undefined8 *)(*plVar17 + 0x2d0));
            if (plVar4 == (long *)0x0) goto LAB_05415b58;
            uVar6 = (**(code **)(*plVar4 + 0x348))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x350));
            plVar4 = (long *)PTR_DAT_0678fd00;
            if ((uVar6 & 1) == 0) goto LAB_05415ae0;
            plVar4 = *(long **)(unaff_x22 + 0x38);
            uVar5 = (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
            if (plVar4 == (long *)0x0) goto LAB_05415b58;
            uVar6 = (**(code **)(*plVar4 + 0x348))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x350));
            plVar4 = (long *)PTR_DAT_0678fd00;
            if (((uVar6 & 1) == 0) || (uVar6 = FUN_054182e0(), (uVar6 & 1) != 0)) goto LAB_05415ae0;
          }
          plVar4 = (long *)FUN_053e1128(plVar17,0);
          lVar19 = FUN_053e0970(plVar17,0);
          lVar8 = (**(code **)(*plVar17 + 0x2c8))(plVar17,*(undefined8 *)(*plVar17 + 0x2d0));
          if (lVar8 == 0) goto LAB_05415b58;
          lVar8 = *(long *)(lVar8 + 0x48);
          uVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0678fd00);
          FUN_053eb24c(uVar5,*(undefined8 *)UnityEngine_GUILayoutGroup_var,lVar19,0);
          if (lVar8 == 0) goto LAB_05415b58;
          plVar3 = (long *)FUN_053b6184(lVar8,uVar5,0);
          if (plVar3 == (long *)0x0) {
            plVar7 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar5 = FUN_053b56cc(plVar17,0);
            if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
            }
            uVar5 = FUN_0566e328(uVar5,0);
            if (plVar7 == (long *)0x0) goto LAB_05415b58;
            (**(code **)(*plVar7 + 0x518))
                      (plVar7,*(undefined8 *)PTR_DAT_0676b5d0,uVar5,*(undefined8 *)(*plVar7 + 0x520)
                      );
            if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414edc:
              uVar5 = FUN_0537e8d8(in_stack_00000020,0);
              (**(code **)(*plVar7 + 0x558))
                        (plVar7,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                         *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar7 + 0x560));
            }
            else {
              lVar8 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
              if (lVar8 == 0) goto LAB_05415b58;
              iVar2 = FUN_053c77c0(lVar8,*(undefined8 *)(in_stack_00000020 + 0x90),0);
              if (iVar2 == -3) goto LAB_05414edc;
            }
            plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            lVar8 = (**(code **)(*plVar17 + 0x2c8))(plVar17,*(undefined8 *)(*plVar17 + 0x2d0));
            if (lVar8 == 0) goto LAB_05415b58;
            uVar5 = FUN_053868f0(lVar8,0);
            uVar5 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                 in_stack_00000030,uVar5,0);
            if (plVar10 == (long *)0x0) goto LAB_05415b58;
            (**(code **)(*plVar10 + 0x518))
                      (plVar10,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar5,
                       *(undefined8 *)(*plVar10 + 0x520));
            (**(code **)(*plVar7 + 0x2d8))(plVar7,plVar10,*(undefined8 *)(*plVar7 + 0x2e0));
            if (lVar19 == 0) goto LAB_05415b58;
            if (*(long *)(lVar19 + 0x18) != 0) {
              plVar10 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
              FUN_04e9624c(plVar10,0);
              if (0 < *(int *)(lVar19 + 0x18)) {
                if (plVar10 == (long *)0x0) goto LAB_05415b58;
                lVar8 = 0;
                do {
                  FUN_04e97278(plVar10,0,0);
                  uVar18 = (uint)lVar8;
                  if (*(int *)(unaff_x22 + 0x5c) == 2) {
                    plVar9 = (long *)FUN_04e97bc4(plVar10,in_stack_00000030,0);
                    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_05415b5c;
                    lVar12 = *(long *)(lVar19 + 0x20 + lVar8 * 8);
                    if ((lVar12 == 0) || (uVar5 = FUN_05397bec(lVar12,0), plVar9 == (long *)0x0))
                    goto LAB_05415b58;
                  }
                  else {
                    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_05415b5c;
                    plVar9 = (long *)(lVar19 + (long)(int)uVar18 * 8 + 0x20);
                    if (*plVar9 == 0) goto LAB_05415b58;
                    FUN_05399824(*plVar9,0);
                    FUN_05416194();
                    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_05415b5c;
                    if (*plVar9 == 0) goto LAB_05415b58;
                    uVar5 = FUN_05399824(*plVar9,0);
                    uVar6 = FUN_04e8cf70(uVar5,0);
                    if ((uVar6 & 1) == 0) {
                      if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_05415b5c;
                      if (*plVar9 == 0) goto LAB_05415b58;
                      plVar16 = *(long **)(unaff_x22 + 0x28);
                      uVar5 = FUN_05399824(*plVar9,0);
                      if (plVar16 == (long *)0x0) goto LAB_05415b58;
                      uVar5 = (**(code **)(*plVar16 + 0x308))
                                        (plVar16,uVar5,*(undefined8 *)(*plVar16 + 0x310));
                      lVar12 = FUN_04e98bb0(plVar10,uVar5,0);
                      if (lVar12 == 0) goto LAB_05415b58;
                      FUN_04e98a58(lVar12,0x3a,0);
                    }
                    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_05415b5c;
                    if (*plVar9 == 0) goto LAB_05415b58;
                    uVar5 = FUN_05397bec(*plVar9,0);
                    plVar9 = plVar10;
                  }
                  FUN_04e97bc4(plVar9,uVar5,0);
                  if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_05415b5c;
                  plVar16 = (long *)(lVar19 + (long)(int)uVar18 * 8 + 0x20);
                  plVar9 = (long *)*plVar16;
                  if (plVar9 == (long *)0x0) goto LAB_05415b58;
                  iVar2 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
                  if (iVar2 == 2) {
LAB_054151a8:
                    FUN_04e98e18(plVar10,0,0x40,0);
                  }
                  else {
                    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_05415b5c;
                    plVar16 = (long *)*plVar16;
                    if (plVar16 == (long *)0x0) goto LAB_05415b58;
                    iVar2 = (**(code **)(*plVar16 + 0x1d8))
                                      (plVar16,*(undefined8 *)(*plVar16 + 0x1e0));
                    if (iVar2 == 4) goto LAB_054151a8;
                  }
                  plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar5 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170))
                  ;
                  if (plVar9 == (long *)0x0) goto LAB_05415b58;
                  (**(code **)(*plVar9 + 0x518))
                            (plVar9,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar5,
                             *(undefined8 *)(*plVar9 + 0x520));
                  (**(code **)(*plVar7 + 0x2d8))(plVar7,plVar9,*(undefined8 *)(*plVar7 + 0x2e0));
                  lVar8 = lVar8 + 1;
                } while ((int)lVar8 < *(int *)(lVar19 + 0x18));
              }
            }
            plVar10 = *(long **)(unaff_x22 + 0x78);
            if (plVar10 == (long *)0x0) goto LAB_05415b58;
            (**(code **)(*plVar10 + 0x298))
                      (plVar10,plVar7,*(undefined8 *)(unaff_x22 + 0x80),
                       *(undefined8 *)(*plVar10 + 0x2a0));
            plVar7 = (long *)PTR_DAT_0678fcf8;
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
          plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
          uVar5 = FUN_053b56cc(plVar17,0);
          if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
          }
          uVar5 = FUN_0566e328(uVar5,0);
          if (plVar10 == (long *)0x0) goto LAB_05415b58;
          (**(code **)(*plVar10 + 0x518))
                    (plVar10,*(undefined8 *)PTR_DAT_0676b5d0,uVar5,*(undefined8 *)(*plVar10 + 0x520)
                    );
          if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05415360:
            lVar19 = (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
            if (lVar19 == 0) goto LAB_05415b58;
            uVar5 = FUN_0537e8d8(lVar19,0);
            (**(code **)(*plVar10 + 0x558))
                      (plVar10,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                       *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar10 + 0x560));
          }
          else {
            lVar8 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
            lVar19 = (**(code **)(*plVar17 + 0x2c8))(plVar17,*(undefined8 *)(*plVar17 + 0x2d0));
            if ((lVar19 == 0) || (lVar8 == 0)) goto LAB_05415b58;
            iVar2 = FUN_053c77c0(lVar8,*(undefined8 *)(lVar19 + 0x90),0);
            if (iVar2 == -3) goto LAB_05415360;
          }
          plVar9 = plVar17;
          if (plVar3 != (long *)0x0) {
            plVar9 = plVar3;
          }
          uVar5 = FUN_053b56cc(plVar9,0);
          if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
          }
          uVar5 = FUN_0566e328(uVar5,0);
          (**(code **)(*plVar10 + 0x518))
                    (plVar10,*(undefined8 *)PTR_DAT_06790b00,uVar5,*(undefined8 *)(*plVar10 + 0x520)
                    );
          lVar19 = plVar17[6];
          uVar5 = *(undefined8 *)PTR_DAT_06791188;
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar5 = FUN_05015c2c(uVar5,0);
          FUN_0540ade0(lVar19,plVar10,uVar5);
          uVar5 = (**(code **)(*plVar17 + 0x178))(plVar17,*(undefined8 *)(*plVar17 + 0x180));
          uVar11 = FUN_053b56cc(plVar17,0);
          uVar6 = FUN_04e8c024(uVar5,uVar11,0);
          if ((uVar6 & 1) != 0) {
            uVar5 = (**(code **)(*plVar17 + 0x178))(plVar17,*(undefined8 *)(*plVar17 + 0x180));
            (**(code **)(*plVar10 + 0x558))
                      (plVar10,*(undefined8 *)Unity_VisualScripting_DoNotSerializeAttribute_var,
                       *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar10 + 0x560));
          }
          if (plVar4 == (long *)0x0) {
            lVar19 = *plVar10;
            uVar11 = *(undefined8 *)Firebase_Firestore_DocumentReference_var;
            uVar14 = *(undefined8 *)PTR_DAT_067900f8;
            uVar15 = *(undefined8 *)(lVar19 + 0x560);
            uVar5 = *(undefined8 *)PTR_DAT_06771b30;
LAB_0541562c:
            (**(code **)(lVar19 + 0x558))(plVar10,uVar11,uVar14,uVar5,uVar15);
          }
          else {
            uVar6 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
            if ((uVar6 & 1) != 0) {
              (**(code **)(*plVar10 + 0x558))
                        (plVar10,*(undefined8 *)
                                  System_Runtime_CompilerServices_DecimalConstantAttribute_var,
                         *(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                         *(undefined8 *)(*plVar10 + 0x560));
            }
            lVar19 = plVar4[3];
            uVar5 = *(undefined8 *)UnityEngine_XR_ARFoundation_ARTrackedObjectsChangedEventArgs_var;
            if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar5 = FUN_05015c2c(uVar5,0);
            FUN_0540ade0(lVar19,plVar10,uVar5);
            uVar5 = (**(code **)(*plVar17 + 0x178))(plVar17,*(undefined8 *)(*plVar17 + 0x180));
            uVar11 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
            uVar6 = FUN_04e8c024(uVar5,uVar11,0);
            if ((uVar6 & 1) != 0) {
              uVar5 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
              if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
              }
              uVar5 = FUN_0566e328(uVar5,0);
              lVar19 = *plVar10;
              uVar11 = *(undefined8 *)System_Runtime_InteropServices_DllImportAttribute_var;
              uVar15 = *(undefined8 *)(lVar19 + 0x560);
              uVar14 = *(undefined8 *)PTR_DAT_067900f8;
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
          (**(code **)(*plVar10 + 0x2d8))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x2e0));
          iVar2 = (**(code **)(*plVar17 + 0x278))(plVar17,*(undefined8 *)(*plVar17 + 0x280));
          if (iVar2 != 0) {
            (**(code **)(*plVar17 + 0x278))(plVar17,*(undefined8 *)(*plVar17 + 0x280));
            uVar5 = FUN_05417bfc();
            (**(code **)(*plVar10 + 0x558))
                      (plVar10,*(undefined8 *)UnityEngine_UIElements_DragAndDropArgs_var,
                       *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar10 + 0x560));
          }
          iVar2 = (**(code **)(*plVar17 + 0x2d8))(plVar17,*(undefined8 *)(*plVar17 + 0x2e0));
          if (iVar2 != 1) {
            (**(code **)(*plVar17 + 0x2d8))(plVar17,*(undefined8 *)(*plVar17 + 0x2e0));
            uVar5 = FUN_05417c6c();
            (**(code **)(*plVar10 + 0x558))
                      (plVar10,*(undefined8 *)UnityEngine_InputSystem_Controls_DoubleControl_var,
                       *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar10 + 0x560));
          }
          iVar2 = (**(code **)(*plVar17 + 0x298))(plVar17,*(undefined8 *)(*plVar17 + 0x2a0));
          if (iVar2 != 1) {
            (**(code **)(*plVar17 + 0x298))(plVar17,*(undefined8 *)(*plVar17 + 0x2a0));
            uVar5 = FUN_05417c6c();
            (**(code **)(*plVar10 + 0x558))
                      (plVar10,*(undefined8 *)UnityEngine_InputSystem_Controls_DpadControl_var,
                       *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*plVar10 + 0x560));
          }
          lVar19 = (**(code **)(*plVar17 + 0x268))(plVar17,*(undefined8 *)(*plVar17 + 0x270));
          if (lVar19 == 0) goto LAB_05415b58;
          if (*(long *)(lVar19 + 0x18) != 0) {
            plVar4 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
            FUN_04e9624c(plVar4,0);
            if (0 < *(int *)(lVar19 + 0x18)) {
              if (plVar4 == (long *)0x0) goto LAB_05415b58;
              lVar8 = 0;
              do {
                FUN_04e97278(plVar4,0,0);
                uVar18 = (uint)lVar8;
                if (*(int *)(unaff_x22 + 0x5c) == 2) {
                  lVar12 = FUN_04e97bc4(plVar4,in_stack_00000030,0);
                  if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_05415b5c;
                  lVar13 = *(long *)(lVar19 + 0x20 + lVar8 * 8);
                  if ((lVar13 == 0) || (uVar5 = FUN_05397bec(lVar13,0), lVar12 == 0))
                  goto LAB_05415b58;
                  FUN_04e97bc4(lVar12,uVar5,0);
                }
                else {
                  if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_05415b5c;
                  plVar7 = (long *)(lVar19 + (long)(int)uVar18 * 8 + 0x20);
                  if (*plVar7 == 0) goto LAB_05415b58;
                  FUN_05399824(*plVar7,0);
                  FUN_05416194();
                  if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_05415b5c;
                  if (*plVar7 == 0) goto LAB_05415b58;
                  uVar5 = FUN_05399824(*plVar7,0);
                  uVar6 = FUN_04e8cf70(uVar5,0);
                  if ((uVar6 & 1) == 0) {
                    if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_05415b5c;
                    if (*plVar7 == 0) goto LAB_05415b58;
                    plVar17 = *(long **)(unaff_x22 + 0x28);
                    uVar5 = FUN_05399824(*plVar7,0);
                    if (plVar17 == (long *)0x0) goto LAB_05415b58;
                    uVar5 = (**(code **)(*plVar17 + 0x308))
                                      (plVar17,uVar5,*(undefined8 *)(*plVar17 + 0x310));
                    lVar12 = FUN_04e98bb0(plVar4,uVar5,0);
                    if (lVar12 == 0) goto LAB_05415b58;
                    FUN_04e98a58(lVar12,0x3a,0);
                  }
                  if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_05415b5c;
                  if (*plVar7 == 0) goto LAB_05415b58;
                  uVar5 = FUN_05397bec(*plVar7,0);
                  FUN_04e97bc4(plVar4,uVar5,0);
                  plVar7 = (long *)PTR_DAT_0678fcf8;
                }
                if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_05415b5c;
                plVar3 = (long *)(lVar19 + (long)(int)uVar18 * 8 + 0x20);
                plVar17 = (long *)*plVar3;
                if (plVar17 == (long *)0x0) goto LAB_05415b58;
                iVar2 = (**(code **)(*plVar17 + 0x1d8))(plVar17,*(undefined8 *)(*plVar17 + 0x1e0));
                if (iVar2 == 2) {
LAB_054159fc:
                  FUN_04e98e18(plVar4,0,0x40,0);
                }
                else {
                  if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_05415b5c;
                  plVar3 = (long *)*plVar3;
                  if (plVar3 == (long *)0x0) goto LAB_05415b58;
                  iVar2 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
                  if (iVar2 == 4) goto LAB_054159fc;
                }
                plVar17 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
                if (plVar17 == (long *)0x0) goto LAB_05415b58;
                (**(code **)(*plVar17 + 0x518))
                          (plVar17,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar5,
                           *(undefined8 *)(*plVar17 + 0x520));
                (**(code **)(*plVar10 + 0x2d8))(plVar10,plVar17,*(undefined8 *)(*plVar10 + 0x2e0));
                lVar8 = lVar8 + 1;
              } while ((int)lVar8 < *(int *)(lVar19 + 0x18));
            }
          }
          plVar4 = *(long **)(unaff_x22 + 0x78);
          if (plVar4 == (long *)0x0) goto LAB_05415b58;
          (**(code **)(*plVar4 + 0x2a8))
                    (plVar4,plVar10,*(undefined8 *)(unaff_x22 + 0x80),
                     *(undefined8 *)(*plVar4 + 0x2b0));
          plVar4 = (long *)PTR_DAT_0678fd00;
        }
        goto LAB_05415ae0;
      }
      bVar1 = *(byte *)(*plVar4 + 0x130);
      if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) != *plVar4))
      goto System_Runtime_Diagnostics_EtwDiagnosticTrace__get_DefaultEtwProviderId;
      unaff_x23 = (long *)FUN_053b5a7c();
      if (unaff_x23 == (long *)0x0) {
        uVar6 = FUN_054182e0();
        if ((uVar6 & 1) == 0) goto LAB_05415b58;
        goto LAB_05415ae0;
      }
      bVar1 = *(byte *)(*plVar4 + 0x130);
      if ((*(byte *)(*unaff_x23 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) != *plVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(unaff_x23);
      }
      uVar6 = FUN_054182e0();
    } while ((uVar6 & 1) != 0);
    unaff_x28 = unaff_x23[7];
    unaff_x19 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
    if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414860:
      uVar5 = FUN_0537e8d8(in_stack_00000020,0);
      if (unaff_x19 == (long *)0x0) break;
      (**(code **)(*unaff_x19 + 0x558))
                (unaff_x19,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                 *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*unaff_x19 + 0x560));
    }
    else {
      lVar19 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
      if (lVar19 == 0) break;
      iVar2 = FUN_053c77c0(lVar19,*(undefined8 *)(in_stack_00000020 + 0x90),0);
      if (iVar2 == -3) goto LAB_05414860;
    }
    uVar5 = FUN_053b56cc(unaff_x23,0);
    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
    }
    uVar5 = FUN_0566e328(uVar5,0);
    if (unaff_x19 == (long *)0x0) break;
    (**(code **)(*unaff_x19 + 0x518))
              (unaff_x19,*(undefined8 *)PTR_DAT_0676b5d0,uVar5,*(undefined8 *)(*unaff_x19 + 0x520));
    uVar5 = (**(code **)(*unaff_x23 + 0x178))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x180));
    uVar11 = FUN_053b56cc(unaff_x23,0);
    uVar6 = FUN_04e8c024(uVar5,uVar11,0);
    if ((uVar6 & 1) != 0) {
      uVar5 = (**(code **)(*unaff_x23 + 0x178))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x180));
      (**(code **)(*unaff_x19 + 0x558))
                (unaff_x19,*(undefined8 *)Unity_VisualScripting_DoNotSerializeAttribute_var,
                 *(undefined8 *)PTR_DAT_067900f8,uVar5,*(undefined8 *)(*unaff_x19 + 0x560));
    }
    FUN_0540ade0(unaff_x23[6],unaff_x19,0);
    param_1 = *unaff_x21;
    unaff_x20 = in_stack_00000020;
  }
LAB_05415b58:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


