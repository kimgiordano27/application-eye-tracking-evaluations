/*
FUNCTION_NAME: System.Runtime.Diagnostics.EtwDiagnosticTrace$$CreateEtwProvider
ENTRY_POINT: 05414304
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


undefined8
System_Runtime_Diagnostics_EtwDiagnosticTrace__CreateEtwProvider
          (long param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  code *in_x9;
  long *unaff_x19;
  long *plVar21;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  int unaff_w26;
  long unaff_x27;
  long *unaff_x28;
  long *plVar22;
  uint uVar23;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 uStack0000000000000030;
  
  do {
    plVar5 = (long *)(*in_x9)(param_2,param_3,*(undefined8 *)(param_1 + 0x310));
    uVar6 = FUN_053868f0(unaff_x27,0);
    if ((plVar5 != (long *)0x0) && (*plVar5 != *(long *)(PTR_DAT_0675e258 + 0x90))) {
LAB_05415b7c:
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(plVar5);
    }
    uVar6 = FUN_04e8db00(plVar5,*(undefined8 *)PTR_DAT_067646b8,uVar6,0);
    if (unaff_x23 == (long *)0x0) goto LAB_05415b58;
    (**(code **)(*unaff_x23 + 0x518))
              (unaff_x23,*(undefined8 *)PTR_DAT_06772fc8,uVar6,*(undefined8 *)(*unaff_x23 + 0x520));
    puVar2 = VLB_BlendingMode_var;
    do {
      do {
        if (unaff_x28 == (long *)0x0) goto LAB_05415b58;
        (**(code **)(*unaff_x28 + 0x2d8))();
        plVar5 = (long *)(**(code **)(*unaff_x19 + 0x208))();
        if (plVar5 == (long *)0x0) goto LAB_05415b58;
        lVar7 = (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
        if (lVar7 == 0) {
          plVar5 = *(long **)(unaff_x22 + 0x48);
          if ((plVar5 == (long *)0x0) ||
             (plVar5 = (long *)(**(code **)(*plVar5 + 0x5f8))
                                         (plVar5,*(undefined8 *)puVar2,
                                          *(undefined8 *)PTR_DAT_06781a48,
                                          *(undefined8 *)PTR_DAT_0676b520,
                                          *(undefined8 *)(*plVar5 + 0x600)),
             unaff_x23 == (long *)0x0)) goto LAB_05415b58;
          (**(code **)(*unaff_x23 + 0x2c8))(unaff_x23,plVar5,*(undefined8 *)(*unaff_x23 + 0x2d0));
          plVar8 = *(long **)(unaff_x22 + 0x48);
          if ((plVar8 == (long *)0x0) ||
             (plVar8 = (long *)(**(code **)(*plVar8 + 0x5f8))
                                         (plVar8,*(undefined8 *)puVar2,
                                          *(undefined8 *)UnityEngine_GameObject_var,
                                          *(undefined8 *)PTR_DAT_0676b520,
                                          *(undefined8 *)(*plVar8 + 0x600)), plVar5 == (long *)0x0))
          goto LAB_05415b58;
          (**(code **)(*plVar5 + 0x2d8))(plVar5,plVar8,*(undefined8 *)(*plVar5 + 0x2e0));
          (**(code **)(*unaff_x19 + 0x208))();
          uVar6 = FUN_0541273c();
          if (plVar8 == (long *)0x0) goto LAB_05415b58;
          (**(code **)(*plVar8 + 0x2d8))(plVar8,uVar6,*(undefined8 *)(*plVar8 + 0x2e0));
        }
        do {
          unaff_w26 = unaff_w26 + 1;
          iVar3 = (**(code **)(*unaff_x19 + 0x1c8))();
          if (iVar3 <= unaff_w26) {
            if ((unaff_x28 != (long *)0x0) &&
               (uVar9 = (**(code **)(*unaff_x28 + 0x328))(), (uVar9 & 1) == 0)) {
              (**(code **)(*unaff_x25 + 0x2b8))();
            }
            plVar8 = *(long **)(in_stack_00000020 + 0x48);
            if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414538:
              puVar20 = *(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
            }
            else {
              lVar7 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x50);
              if (lVar7 == 0) goto LAB_05415b58;
              puVar20 = (undefined8 *)UnityEngine_InputSystem_HID_HID_var;
              if (*(int *)(lVar7 + 0x10) == 0) goto LAB_05414538;
            }
            if (*(int *)(unaff_x22 + 0x5c) == 2) {
LAB_054145f8:
              uStack0000000000000030 = *puVar20;
            }
            else {
              FUN_0537e8d8(in_stack_00000020,0);
              FUN_05416194();
              lVar7 = FUN_0537e8d8(in_stack_00000020,0);
              if (lVar7 == 0) goto LAB_05415b58;
              if (*(int *)(lVar7 + 0x10) == 0) {
                puVar20 = *(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
                goto LAB_054145f8;
              }
              plVar5 = *(long **)(unaff_x22 + 0x28);
              uVar6 = FUN_0537e8d8(in_stack_00000020,0);
              if (plVar5 == (long *)0x0) goto LAB_05415b58;
              plVar5 = (long *)(**(code **)(*plVar5 + 0x308))
                                         (plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x310));
              if ((plVar5 != (long *)0x0) && (*plVar5 != *(long *)(PTR_DAT_0675e258 + 0x90)))
              goto LAB_05415b7c;
              uStack0000000000000030 = FUN_04e83184(plVar5,*(undefined8 *)PTR_DAT_067646b8,0);
            }
            if (plVar8 == (long *)0x0) goto LAB_05415b58;
            iVar3 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
            if (iVar3 < 1) goto LAB_05415afc;
            iVar3 = 0;
            plVar5 = (long *)PTR_DAT_0678fd00;
            plVar22 = (long *)PTR_DAT_0678fcf8;
            goto LAB_05414630;
          }
          plVar5 = (long *)(**(code **)(*unaff_x19 + 0x208))();
          if (plVar5 == (long *)0x0) goto LAB_05415b58;
          uVar9 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
        } while ((uVar9 & 1) == 0);
        plVar5 = (long *)(**(code **)(*unaff_x19 + 0x208))();
        if (plVar5 == (long *)0x0) goto LAB_05415b58;
        unaff_x27 = (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
        if (unaff_x27 == in_stack_00000020) {
          unaff_x23 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
          uVar6 = FUN_053868f0(in_stack_00000020,0);
          if ((unaff_x23 == (long *)0x0) ||
             ((**(code **)(*unaff_x23 + 0x518))
                        (unaff_x23,*(undefined8 *)PTR_DAT_06772fc8,uVar6,
                         *(undefined8 *)(*unaff_x23 + 0x520)), unaff_x27 == 0)) goto LAB_05415b58;
        }
        else {
          if (unaff_x27 == 0) goto LAB_05415b58;
          iVar3 = FUN_05385b20(unaff_x27,0);
          if (iVar3 < 2) {
            unaff_x23 = (long *)FUN_054131cc();
          }
          else {
            unaff_x23 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar6 = FUN_053868f0(unaff_x27,0);
            if (unaff_x23 == (long *)0x0) goto LAB_05415b58;
            (**(code **)(*unaff_x23 + 0x518))
                      (unaff_x23,*(undefined8 *)PTR_DAT_06772fc8,uVar6,
                       *(undefined8 *)(*unaff_x23 + 0x520));
          }
        }
        uVar6 = FUN_0537e8d8(unaff_x27,0);
        uVar15 = FUN_0537e8d8(in_stack_00000020,0);
        uVar9 = thunk_FUN_04e8bd3c(uVar6,uVar15,0);
        if ((uVar9 & 1) != 0) {
          if (unaff_x23 == (long *)0x0) goto LAB_05415b58;
          (**(code **)(*unaff_x23 + 0x518))
                    (unaff_x23,*(undefined8 *)UnityEngine_InputSystem_Controls_ButtonControl_var,
                     *(undefined8 *)PTR_DAT_067706c8,*(undefined8 *)(*unaff_x23 + 0x520));
          (**(code **)(*unaff_x23 + 0x518))
                    (unaff_x23,
                     *(undefined8 *)UnityEngine_InputSystem_Composites_ButtonWithOneModifier_var,
                     *(undefined8 *)System_IO_Compression_GZipStream_var,
                     *(undefined8 *)(*unaff_x23 + 0x520));
        }
        uVar6 = FUN_0537e8d8(unaff_x27,0);
        uVar15 = FUN_0537e8d8(in_stack_00000020,0);
        uVar9 = thunk_FUN_04e8bd3c(uVar6,uVar15,0);
      } while ((uVar9 & 1) != 0);
      lVar7 = FUN_0537e8d8(unaff_x27,0);
      if (lVar7 == 0) goto LAB_05415b58;
    } while ((*(int *)(lVar7 + 0x10) == 0) || (*(int *)(unaff_x22 + 0x5c) == 2));
    iVar3 = FUN_05385b20(unaff_x27,0);
    if (iVar3 < 2) {
      FUN_0537e8d8(unaff_x27,0);
      plVar5 = (long *)FUN_05416194();
      if (plVar5 == (long *)0x0) goto LAB_05415b58;
      (**(code **)(*plVar5 + 0x2d8))(plVar5,unaff_x23,*(undefined8 *)(*plVar5 + 0x2e0));
    }
    unaff_x23 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
    param_2 = *(long **)(unaff_x22 + 0x28);
    param_3 = FUN_0537e8d8(unaff_x27,0);
    if (param_2 == (long *)0x0) goto LAB_05415b58;
    param_1 = *param_2;
    in_x9 = *(code **)(param_1 + 0x308);
  } while( true );
LAB_05414630:
  plVar10 = (long *)FUN_053b5a7c(plVar8,iVar3,0);
  if (plVar10 == (long *)0x0) {
System_Runtime_Diagnostics_EtwDiagnosticTrace__get_DefaultEtwProviderId:
    plVar10 = (long *)FUN_053b5a7c(plVar8,iVar3,0);
    if (plVar10 != (long *)0x0) {
      bVar1 = *(byte *)(*plVar22 + 0x130);
      if (((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
          (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == *plVar22)) &&
         ((in_stack_00000028 & 0x100000000) != 0)) {
        plVar10 = (long *)FUN_053b5a7c(plVar8,iVar3,0);
        if (plVar10 != (long *)0x0) {
          bVar1 = *(byte *)(*plVar22 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *plVar22)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60e88(plVar10);
          }
        }
        plVar11 = *(long **)(unaff_x22 + 0x38);
        if (plVar11 == (long *)0x0) goto LAB_05415b58;
        iVar4 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
        if (iVar4 < 1) {
          uVar9 = FUN_054182e0();
          if ((uVar9 & 1) == 0) {
            if (plVar10 == (long *)0x0) goto LAB_05415b58;
LAB_05414d3c:
            plVar5 = (long *)FUN_053e1128(plVar10,0);
            lVar7 = FUN_053e0970(plVar10,0);
            lVar12 = (**(code **)(*plVar10 + 0x2c8))(plVar10,*(undefined8 *)(*plVar10 + 0x2d0));
            if (lVar12 == 0) goto LAB_05415b58;
            lVar12 = *(long *)(lVar12 + 0x48);
            uVar6 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0678fd00);
            FUN_053eb24c(uVar6,*(undefined8 *)UnityEngine_GUILayoutGroup_var,lVar7,0);
            if (lVar12 == 0) goto LAB_05415b58;
            plVar11 = (long *)FUN_053b6184(lVar12,uVar6,0);
            if (plVar11 == (long *)0x0) {
              plVar22 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              uVar6 = FUN_053b56cc(plVar10,0);
              if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
              }
              uVar6 = FUN_0566e328(uVar6,0);
              if (plVar22 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar22 + 0x518))
                        (plVar22,*(undefined8 *)PTR_DAT_0676b5d0,uVar6,
                         *(undefined8 *)(*plVar22 + 0x520));
              if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414edc:
                uVar6 = FUN_0537e8d8(in_stack_00000020,0);
                (**(code **)(*plVar22 + 0x558))
                          (plVar22,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                           *(undefined8 *)PTR_DAT_067900f8,uVar6,*(undefined8 *)(*plVar22 + 0x560));
              }
              else {
                lVar12 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                if (lVar12 == 0) goto LAB_05415b58;
                iVar4 = FUN_053c77c0(lVar12,*(undefined8 *)(in_stack_00000020 + 0x90),0);
                if (iVar4 == -3) goto LAB_05414edc;
              }
              plVar14 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              lVar12 = (**(code **)(*plVar10 + 0x2c8))(plVar10,*(undefined8 *)(*plVar10 + 0x2d0));
              if (lVar12 == 0) goto LAB_05415b58;
              uVar6 = FUN_053868f0(lVar12,0);
              uVar6 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                   uStack0000000000000030,uVar6,0);
              if (plVar14 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar14 + 0x518))
                        (plVar14,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar6,
                         *(undefined8 *)(*plVar14 + 0x520));
              (**(code **)(*plVar22 + 0x2d8))(plVar22,plVar14,*(undefined8 *)(*plVar22 + 0x2e0));
              if (lVar7 == 0) goto LAB_05415b58;
              if (*(long *)(lVar7 + 0x18) != 0) {
                plVar14 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                FUN_04e9624c(plVar14,0);
                if (0 < *(int *)(lVar7 + 0x18)) {
                  if (plVar14 == (long *)0x0) {
LAB_05415b58:
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  lVar12 = 0;
                  do {
                    FUN_04e97278(plVar14,0,0);
                    uVar23 = (uint)lVar12;
                    if (*(int *)(unaff_x22 + 0x5c) == 2) {
                      plVar13 = (long *)FUN_04e97bc4(plVar14,uStack0000000000000030,0);
                      if (*(uint *)(lVar7 + 0x18) <= uVar23) goto LAB_05415b5c;
                      lVar16 = *(long *)(lVar7 + 0x20 + lVar12 * 8);
                      if ((lVar16 == 0) || (uVar6 = FUN_05397bec(lVar16,0), plVar13 == (long *)0x0))
                      goto LAB_05415b58;
                    }
                    else {
                      if (*(uint *)(lVar7 + 0x18) <= uVar23) goto LAB_05415b5c;
                      plVar13 = (long *)(lVar7 + (long)(int)uVar23 * 8 + 0x20);
                      if (*plVar13 == 0) goto LAB_05415b58;
                      FUN_05399824(*plVar13,0);
                      FUN_05416194();
                      if (*(uint *)(lVar7 + 0x18) <= uVar23) goto LAB_05415b5c;
                      if (*plVar13 == 0) goto LAB_05415b58;
                      uVar6 = FUN_05399824(*plVar13,0);
                      uVar9 = FUN_04e8cf70(uVar6,0);
                      if ((uVar9 & 1) == 0) {
                        if (*(uint *)(lVar7 + 0x18) <= uVar23) goto LAB_05415b5c;
                        if (*plVar13 == 0) goto LAB_05415b58;
                        plVar21 = *(long **)(unaff_x22 + 0x28);
                        uVar6 = FUN_05399824(*plVar13,0);
                        if (plVar21 == (long *)0x0) goto LAB_05415b58;
                        uVar6 = (**(code **)(*plVar21 + 0x308))
                                          (plVar21,uVar6,*(undefined8 *)(*plVar21 + 0x310));
                        lVar16 = FUN_04e98bb0(plVar14,uVar6,0);
                        if (lVar16 == 0) goto LAB_05415b58;
                        FUN_04e98a58(lVar16,0x3a,0);
                      }
                      if (*(uint *)(lVar7 + 0x18) <= uVar23) goto LAB_05415b5c;
                      if (*plVar13 == 0) goto LAB_05415b58;
                      uVar6 = FUN_05397bec(*plVar13,0);
                      plVar13 = plVar14;
                    }
                    FUN_04e97bc4(plVar13,uVar6,0);
                    if (*(uint *)(lVar7 + 0x18) <= uVar23) goto LAB_05415b5c;
                    plVar21 = (long *)(lVar7 + (long)(int)uVar23 * 8 + 0x20);
                    plVar13 = (long *)*plVar21;
                    if (plVar13 == (long *)0x0) goto LAB_05415b58;
                    iVar4 = (**(code **)(*plVar13 + 0x1d8))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
                    if (iVar4 == 2) {
LAB_054151a8:
                      FUN_04e98e18(plVar14,0,0x40,0);
                    }
                    else {
                      if (*(uint *)(lVar7 + 0x18) <= uVar23) goto LAB_05415b5c;
                      plVar21 = (long *)*plVar21;
                      if (plVar21 == (long *)0x0) goto LAB_05415b58;
                      iVar4 = (**(code **)(*plVar21 + 0x1d8))
                                        (plVar21,*(undefined8 *)(*plVar21 + 0x1e0));
                      if (iVar4 == 4) goto LAB_054151a8;
                    }
                    plVar13 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar6 = (**(code **)(*plVar14 + 0x168))
                                      (plVar14,*(undefined8 *)(*plVar14 + 0x170));
                    if (plVar13 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar13 + 0x518))
                              (plVar13,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,
                               uVar6,*(undefined8 *)(*plVar13 + 0x520));
                    (**(code **)(*plVar22 + 0x2d8))
                              (plVar22,plVar13,*(undefined8 *)(*plVar22 + 0x2e0));
                    lVar12 = lVar12 + 1;
                  } while ((int)lVar12 < *(int *)(lVar7 + 0x18));
                }
              }
              plVar14 = *(long **)(unaff_x22 + 0x78);
              if (plVar14 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar14 + 0x298))
                        (plVar14,plVar22,*(undefined8 *)(unaff_x22 + 0x80),
                         *(undefined8 *)(*plVar14 + 0x2a0));
              plVar22 = (long *)PTR_DAT_0678fcf8;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_0678fd00 + 0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_0678fd00)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60e88(plVar11);
              }
            }
            plVar14 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar6 = FUN_053b56cc(plVar10,0);
            if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
            }
            uVar6 = FUN_0566e328(uVar6,0);
            if (plVar14 == (long *)0x0) goto LAB_05415b58;
            (**(code **)(*plVar14 + 0x518))
                      (plVar14,*(undefined8 *)PTR_DAT_0676b5d0,uVar6,
                       *(undefined8 *)(*plVar14 + 0x520));
            if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05415360:
              lVar7 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
              if (lVar7 == 0) goto LAB_05415b58;
              uVar6 = FUN_0537e8d8(lVar7,0);
              (**(code **)(*plVar14 + 0x558))
                        (plVar14,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                         *(undefined8 *)PTR_DAT_067900f8,uVar6,*(undefined8 *)(*plVar14 + 0x560));
            }
            else {
              lVar12 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
              lVar7 = (**(code **)(*plVar10 + 0x2c8))(plVar10,*(undefined8 *)(*plVar10 + 0x2d0));
              if ((lVar7 == 0) || (lVar12 == 0)) goto LAB_05415b58;
              iVar4 = FUN_053c77c0(lVar12,*(undefined8 *)(lVar7 + 0x90),0);
              if (iVar4 == -3) goto LAB_05415360;
            }
            plVar13 = plVar10;
            if (plVar11 != (long *)0x0) {
              plVar13 = plVar11;
            }
            uVar6 = FUN_053b56cc(plVar13,0);
            if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
            }
            uVar6 = FUN_0566e328(uVar6,0);
            (**(code **)(*plVar14 + 0x518))
                      (plVar14,*(undefined8 *)PTR_DAT_06790b00,uVar6,
                       *(undefined8 *)(*plVar14 + 0x520));
            lVar7 = plVar10[6];
            uVar6 = *(undefined8 *)PTR_DAT_06791188;
            if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar6 = FUN_05015c2c(uVar6,0);
            FUN_0540ade0(lVar7,plVar14,uVar6);
            uVar6 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
            uVar15 = FUN_053b56cc(plVar10,0);
            uVar9 = FUN_04e8c024(uVar6,uVar15,0);
            if ((uVar9 & 1) != 0) {
              uVar6 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
              (**(code **)(*plVar14 + 0x558))
                        (plVar14,*(undefined8 *)Unity_VisualScripting_DoNotSerializeAttribute_var,
                         *(undefined8 *)PTR_DAT_067900f8,uVar6,*(undefined8 *)(*plVar14 + 0x560));
            }
            if (plVar5 == (long *)0x0) {
              lVar7 = *plVar14;
              uVar15 = *(undefined8 *)Firebase_Firestore_DocumentReference_var;
              uVar18 = *(undefined8 *)PTR_DAT_067900f8;
              uVar19 = *(undefined8 *)(lVar7 + 0x560);
              uVar6 = *(undefined8 *)PTR_DAT_06771b30;
LAB_0541562c:
              (**(code **)(lVar7 + 0x558))(plVar14,uVar15,uVar18,uVar6,uVar19);
            }
            else {
              uVar9 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
              if ((uVar9 & 1) != 0) {
                (**(code **)(*plVar14 + 0x558))
                          (plVar14,*(undefined8 *)
                                    System_Runtime_CompilerServices_DecimalConstantAttribute_var,
                           *(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                           *(undefined8 *)(*plVar14 + 0x560));
              }
              lVar7 = plVar5[3];
              uVar6 = *(undefined8 *)
                       UnityEngine_XR_ARFoundation_ARTrackedObjectsChangedEventArgs_var;
              if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar6 = FUN_05015c2c(uVar6,0);
              FUN_0540ade0(lVar7,plVar14,uVar6);
              uVar6 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
              uVar15 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
              uVar9 = FUN_04e8c024(uVar6,uVar15,0);
              if ((uVar9 & 1) != 0) {
                uVar6 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
                if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                }
                uVar6 = FUN_0566e328(uVar6,0);
                lVar7 = *plVar14;
                uVar15 = *(undefined8 *)System_Runtime_InteropServices_DllImportAttribute_var;
                uVar19 = *(undefined8 *)(lVar7 + 0x560);
                uVar18 = *(undefined8 *)PTR_DAT_067900f8;
                goto LAB_0541562c;
              }
            }
            plVar5 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar6 = FUN_053868f0(in_stack_00000020,0);
            uVar6 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                 uStack0000000000000030,uVar6,0);
            if (plVar5 == (long *)0x0) goto LAB_05415b58;
            (**(code **)(*plVar5 + 0x518))
                      (plVar5,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar6,
                       *(undefined8 *)(*plVar5 + 0x520));
            (**(code **)(*plVar14 + 0x2d8))(plVar14,plVar5,*(undefined8 *)(*plVar14 + 0x2e0));
            iVar4 = (**(code **)(*plVar10 + 0x278))(plVar10,*(undefined8 *)(*plVar10 + 0x280));
            if (iVar4 != 0) {
              (**(code **)(*plVar10 + 0x278))(plVar10,*(undefined8 *)(*plVar10 + 0x280));
              uVar6 = FUN_05417bfc();
              (**(code **)(*plVar14 + 0x558))
                        (plVar14,*(undefined8 *)UnityEngine_UIElements_DragAndDropArgs_var,
                         *(undefined8 *)PTR_DAT_067900f8,uVar6,*(undefined8 *)(*plVar14 + 0x560));
            }
            iVar4 = (**(code **)(*plVar10 + 0x2d8))(plVar10,*(undefined8 *)(*plVar10 + 0x2e0));
            if (iVar4 != 1) {
              (**(code **)(*plVar10 + 0x2d8))(plVar10,*(undefined8 *)(*plVar10 + 0x2e0));
              uVar6 = FUN_05417c6c();
              (**(code **)(*plVar14 + 0x558))
                        (plVar14,*(undefined8 *)UnityEngine_InputSystem_Controls_DoubleControl_var,
                         *(undefined8 *)PTR_DAT_067900f8,uVar6,*(undefined8 *)(*plVar14 + 0x560));
            }
            iVar4 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
            if (iVar4 != 1) {
              (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
              uVar6 = FUN_05417c6c();
              (**(code **)(*plVar14 + 0x558))
                        (plVar14,*(undefined8 *)UnityEngine_InputSystem_Controls_DpadControl_var,
                         *(undefined8 *)PTR_DAT_067900f8,uVar6,*(undefined8 *)(*plVar14 + 0x560));
            }
            lVar7 = (**(code **)(*plVar10 + 0x268))(plVar10,*(undefined8 *)(*plVar10 + 0x270));
            if (lVar7 == 0) goto LAB_05415b58;
            if (*(long *)(lVar7 + 0x18) != 0) {
              plVar5 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
              FUN_04e9624c(plVar5,0);
              if (0 < *(int *)(lVar7 + 0x18)) {
                if (plVar5 == (long *)0x0) goto LAB_05415b58;
                lVar12 = 0;
                do {
                  FUN_04e97278(plVar5,0,0);
                  uVar23 = (uint)lVar12;
                  if (*(int *)(unaff_x22 + 0x5c) == 2) {
                    lVar16 = FUN_04e97bc4(plVar5,uStack0000000000000030,0);
                    if (*(uint *)(lVar7 + 0x18) <= uVar23) goto LAB_05415b5c;
                    lVar17 = *(long *)(lVar7 + 0x20 + lVar12 * 8);
                    if ((lVar17 == 0) || (uVar6 = FUN_05397bec(lVar17,0), lVar16 == 0))
                    goto LAB_05415b58;
                    FUN_04e97bc4(lVar16,uVar6,0);
                  }
                  else {
                    if (*(uint *)(lVar7 + 0x18) <= uVar23) goto LAB_05415b5c;
                    plVar22 = (long *)(lVar7 + (long)(int)uVar23 * 8 + 0x20);
                    if (*plVar22 == 0) goto LAB_05415b58;
                    FUN_05399824(*plVar22,0);
                    FUN_05416194();
                    if (*(uint *)(lVar7 + 0x18) <= uVar23) goto LAB_05415b5c;
                    if (*plVar22 == 0) goto LAB_05415b58;
                    uVar6 = FUN_05399824(*plVar22,0);
                    uVar9 = FUN_04e8cf70(uVar6,0);
                    if ((uVar9 & 1) == 0) {
                      if (*(uint *)(lVar7 + 0x18) <= uVar23) goto LAB_05415b5c;
                      if (*plVar22 == 0) goto LAB_05415b58;
                      plVar10 = *(long **)(unaff_x22 + 0x28);
                      uVar6 = FUN_05399824(*plVar22,0);
                      if (plVar10 == (long *)0x0) goto LAB_05415b58;
                      uVar6 = (**(code **)(*plVar10 + 0x308))
                                        (plVar10,uVar6,*(undefined8 *)(*plVar10 + 0x310));
                      lVar16 = FUN_04e98bb0(plVar5,uVar6,0);
                      if (lVar16 == 0) goto LAB_05415b58;
                      FUN_04e98a58(lVar16,0x3a,0);
                    }
                    if (*(uint *)(lVar7 + 0x18) <= uVar23) goto LAB_05415b5c;
                    if (*plVar22 == 0) goto LAB_05415b58;
                    uVar6 = FUN_05397bec(*plVar22,0);
                    FUN_04e97bc4(plVar5,uVar6,0);
                    plVar22 = (long *)PTR_DAT_0678fcf8;
                  }
                  if (*(uint *)(lVar7 + 0x18) <= uVar23) goto LAB_05415b5c;
                  plVar11 = (long *)(lVar7 + (long)(int)uVar23 * 8 + 0x20);
                  plVar10 = (long *)*plVar11;
                  if (plVar10 == (long *)0x0) goto LAB_05415b58;
                  iVar4 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0))
                  ;
                  if (iVar4 == 2) {
LAB_054159fc:
                    FUN_04e98e18(plVar5,0,0x40,0);
                  }
                  else {
                    if (*(uint *)(lVar7 + 0x18) <= uVar23) goto LAB_05415b5c;
                    plVar11 = (long *)*plVar11;
                    if (plVar11 == (long *)0x0) goto LAB_05415b58;
                    iVar4 = (**(code **)(*plVar11 + 0x1d8))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
                    if (iVar4 == 4) goto LAB_054159fc;
                  }
                  plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
                  if (plVar10 == (long *)0x0) goto LAB_05415b58;
                  (**(code **)(*plVar10 + 0x518))
                            (plVar10,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar6,
                             *(undefined8 *)(*plVar10 + 0x520));
                  (**(code **)(*plVar14 + 0x2d8))(plVar14,plVar10,*(undefined8 *)(*plVar14 + 0x2e0))
                  ;
                  lVar12 = lVar12 + 1;
                } while ((int)lVar12 < *(int *)(lVar7 + 0x18));
              }
            }
            plVar5 = *(long **)(unaff_x22 + 0x78);
            if (plVar5 == (long *)0x0) goto LAB_05415b58;
            (**(code **)(*plVar5 + 0x2a8))
                      (plVar5,plVar14,*(undefined8 *)(unaff_x22 + 0x80),
                       *(undefined8 *)(*plVar5 + 0x2b0));
            plVar5 = (long *)PTR_DAT_0678fd00;
          }
        }
        else {
          if (plVar10 == (long *)0x0) goto LAB_05415b58;
          plVar5 = *(long **)(unaff_x22 + 0x38);
          uVar6 = (**(code **)(*plVar10 + 0x2c8))(plVar10,*(undefined8 *)(*plVar10 + 0x2d0));
          if (plVar5 == (long *)0x0) goto LAB_05415b58;
          uVar9 = (**(code **)(*plVar5 + 0x348))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x350));
          plVar5 = (long *)PTR_DAT_0678fd00;
          if ((uVar9 & 1) != 0) {
            plVar5 = *(long **)(unaff_x22 + 0x38);
            uVar6 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
            if (plVar5 == (long *)0x0) goto LAB_05415b58;
            uVar9 = (**(code **)(*plVar5 + 0x348))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x350));
            plVar5 = (long *)PTR_DAT_0678fd00;
            if (((uVar9 & 1) != 0) && (uVar9 = FUN_054182e0(), (uVar9 & 1) == 0)) goto LAB_05414d3c;
          }
        }
      }
    }
  }
  else {
    bVar1 = *(byte *)(*plVar5 + 0x130);
    if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *plVar5))
    goto System_Runtime_Diagnostics_EtwDiagnosticTrace__get_DefaultEtwProviderId;
    plVar10 = (long *)FUN_053b5a7c(plVar8,iVar3,0);
    if (plVar10 == (long *)0x0) {
      uVar9 = FUN_054182e0();
      if ((uVar9 & 1) == 0) goto LAB_05415b58;
    }
    else {
      bVar1 = *(byte *)(*plVar5 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *plVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar10);
      }
      uVar9 = FUN_054182e0();
      if ((uVar9 & 1) == 0) {
        lVar7 = plVar10[7];
        plVar5 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
        if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414860:
          uVar6 = FUN_0537e8d8(in_stack_00000020,0);
          if (plVar5 == (long *)0x0) goto LAB_05415b58;
          (**(code **)(*plVar5 + 0x558))
                    (plVar5,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                     *(undefined8 *)PTR_DAT_067900f8,uVar6,*(undefined8 *)(*plVar5 + 0x560));
        }
        else {
          lVar12 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
          if (lVar12 == 0) goto LAB_05415b58;
          iVar4 = FUN_053c77c0(lVar12,*(undefined8 *)(in_stack_00000020 + 0x90),0);
          if (iVar4 == -3) goto LAB_05414860;
        }
        uVar6 = FUN_053b56cc(plVar10,0);
        if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
        }
        uVar6 = FUN_0566e328(uVar6,0);
        if (plVar5 == (long *)0x0) goto LAB_05415b58;
        (**(code **)(*plVar5 + 0x518))
                  (plVar5,*(undefined8 *)PTR_DAT_0676b5d0,uVar6,*(undefined8 *)(*plVar5 + 0x520));
        uVar6 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        uVar15 = FUN_053b56cc(plVar10,0);
        uVar9 = FUN_04e8c024(uVar6,uVar15,0);
        if ((uVar9 & 1) != 0) {
          uVar6 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
          (**(code **)(*plVar5 + 0x558))
                    (plVar5,*(undefined8 *)Unity_VisualScripting_DoNotSerializeAttribute_var,
                     *(undefined8 *)PTR_DAT_067900f8,uVar6,*(undefined8 *)(*plVar5 + 0x560));
        }
        FUN_0540ade0(plVar10[6],plVar5,0);
        plVar22 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
        uVar6 = FUN_053868f0(in_stack_00000020,0);
        uVar6 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                             uStack0000000000000030,uVar6,0);
        if (plVar22 == (long *)0x0) goto LAB_05415b58;
        (**(code **)(*plVar22 + 0x518))
                  (plVar22,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar6,
                   *(undefined8 *)(*plVar22 + 0x520));
        (**(code **)(*plVar5 + 0x2d8))(plVar5,plVar22,*(undefined8 *)(*plVar5 + 0x2e0));
        uVar9 = System_Runtime_Serialization_XmlObjectSerializerContext__get_IgnoreExtensionDataObject
                          (plVar10,0);
        if ((uVar9 & 1) != 0) {
          (**(code **)(*plVar5 + 0x558))
                    (plVar5,*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_var,
                     *(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                     *(undefined8 *)(*plVar5 + 0x560));
        }
        if (lVar7 == 0) goto LAB_05415b58;
        if (*(long *)(lVar7 + 0x18) != 0) {
          plVar22 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
          FUN_04e9624c(plVar22,0);
          if (0 < *(int *)(lVar7 + 0x18)) {
            if (plVar22 == (long *)0x0) goto LAB_05415b58;
            lVar12 = 0;
            do {
              FUN_04e97278(plVar22,0,0);
              uVar23 = (uint)lVar12;
              if (*(int *)(unaff_x22 + 0x5c) == 2) {
                plVar10 = (long *)FUN_04e97bc4(plVar22,uStack0000000000000030,0);
                if (*(uint *)(lVar7 + 0x18) <= uVar23) goto LAB_05415b5c;
                lVar16 = *(long *)(lVar7 + 0x20 + lVar12 * 8);
                if ((lVar16 == 0) || (uVar6 = FUN_05397bec(lVar16,0), plVar10 == (long *)0x0))
                goto LAB_05415b58;
              }
              else {
                if (*(uint *)(lVar7 + 0x18) <= uVar23) goto LAB_05415b5c;
                plVar10 = (long *)(lVar7 + (long)(int)uVar23 * 8 + 0x20);
                if (*plVar10 == 0) goto LAB_05415b58;
                FUN_05399824(*plVar10,0);
                FUN_05416194();
                if (*(uint *)(lVar7 + 0x18) <= uVar23) goto LAB_05415b5c;
                if (*plVar10 == 0) goto LAB_05415b58;
                uVar6 = FUN_05399824(*plVar10,0);
                uVar9 = FUN_04e8cf70(uVar6,0);
                if ((uVar9 & 1) == 0) {
                  if (*(uint *)(lVar7 + 0x18) <= uVar23) {
LAB_05415b5c:
                    /* WARNING: Subroutine does not return */
                    FUN_02d60af0();
                  }
                  if (*plVar10 == 0) goto LAB_05415b58;
                  plVar11 = *(long **)(unaff_x22 + 0x28);
                  uVar6 = FUN_05399824(*plVar10,0);
                  if (plVar11 == (long *)0x0) goto LAB_05415b58;
                  uVar6 = (**(code **)(*plVar11 + 0x308))
                                    (plVar11,uVar6,*(undefined8 *)(*plVar11 + 0x310));
                  lVar16 = FUN_04e98bb0(plVar22,uVar6,0);
                  if (lVar16 == 0) goto LAB_05415b58;
                  FUN_04e98a58(lVar16,0x3a,0);
                }
                if (*(uint *)(lVar7 + 0x18) <= uVar23) goto LAB_05415b5c;
                if (*plVar10 == 0) goto LAB_05415b58;
                uVar6 = FUN_05397bec(*plVar10,0);
                plVar10 = plVar22;
              }
              FUN_04e97bc4(plVar10,uVar6,0);
              if (*(uint *)(lVar7 + 0x18) <= uVar23) goto LAB_05415b5c;
              plVar11 = (long *)(lVar7 + (long)(int)uVar23 * 8 + 0x20);
              plVar10 = (long *)*plVar11;
              if (plVar10 == (long *)0x0) goto LAB_05415b58;
              iVar4 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
              if (iVar4 == 2) {
LAB_05414c38:
                FUN_04e98e18(plVar22,0,0x40,0);
              }
              else {
                if (*(uint *)(lVar7 + 0x18) <= uVar23) goto LAB_05415b5c;
                plVar11 = (long *)*plVar11;
                if (plVar11 == (long *)0x0) goto LAB_05415b58;
                iVar4 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
                if (iVar4 == 4) goto LAB_05414c38;
              }
              plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              uVar6 = (**(code **)(*plVar22 + 0x168))(plVar22,*(undefined8 *)(*plVar22 + 0x170));
              if (plVar10 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar10 + 0x518))
                        (plVar10,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar6,
                         *(undefined8 *)(*plVar10 + 0x520));
              (**(code **)(*plVar5 + 0x2d8))(plVar5,plVar10,*(undefined8 *)(*plVar5 + 0x2e0));
              lVar12 = lVar12 + 1;
            } while ((int)lVar12 < *(int *)(lVar7 + 0x18));
          }
        }
        plVar22 = *(long **)(unaff_x22 + 0x78);
        if (plVar22 == (long *)0x0) goto LAB_05415b58;
        (**(code **)(*plVar22 + 0x298))
                  (plVar22,plVar5,*(undefined8 *)(unaff_x22 + 0x80),
                   *(undefined8 *)(*plVar22 + 0x2a0));
        plVar5 = (long *)PTR_DAT_0678fd00;
        plVar22 = (long *)PTR_DAT_0678fcf8;
      }
    }
  }
  iVar3 = iVar3 + 1;
  iVar4 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
  if (iVar4 <= iVar3) {
LAB_05415afc:
    FUN_0540ade0(*(undefined8 *)(in_stack_00000020 + 0x88),in_stack_00000018,0);
    return in_stack_00000018;
  }
  goto LAB_05414630;
}


