/*
FUNCTION_NAME: System.Runtime.Diagnostics.TraceRecord$$.ctor
ENTRY_POINT: 05413a50
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


undefined8 System_Runtime_Diagnostics_TraceRecord___ctor(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long *unaff_x20;
  long *plVar20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x24;
  long *unaff_x25;
  int unaff_w27;
  uint uVar21;
  long unaff_x29;
  undefined8 uVar22;
  undefined8 in_stack_00000018;
  ulong in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined4 in_stack_00000038;
  
  if (param_1 == 0) goto LAB_05415b58;
  plVar4 = (long *)FUN_05416194();
  lVar5 = FUN_0538116c();
  if (lVar5 == 0) goto LAB_05415b58;
  uVar6 = FUN_04e8cf70(*(undefined8 *)(lVar5 + 0x18),0);
  if ((uVar6 & 1) != 0) {
    if ((*(long *)(unaff_x22 + 0x30) == 0) || ((unaff_x24 & 1) == 0)) {
      FUN_0537e8d8();
    }
    plVar4 = (long *)FUN_05416194();
  }
  lVar5 = FUN_0538116c();
  if (lVar5 == 0) goto LAB_05415b58;
  lVar5 = FUN_05417a34(lVar5,plVar4,*(undefined8 *)(lVar5 + 0x10));
  if (lVar5 == 0) {
    if (plVar4 == (long *)0x0) goto LAB_05415b58;
    (**(code **)(*plVar4 + 0x2d8))(plVar4);
  }
  lVar5 = FUN_0538116c();
  if ((lVar5 == 0) || (unaff_x25 == (long *)0x0)) goto LAB_05415b58;
  (**(code **)(*unaff_x25 + 0x518))();
  lVar5 = FUN_0538116c();
  if (lVar5 == 0) goto LAB_05415b58;
  uVar6 = FUN_05679f04(lVar5,0);
  if (((uVar6 & 1) == 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
    plVar4 = *(long **)(unaff_x22 + 0x28);
    lVar5 = FUN_0538116c();
    if ((lVar5 == 0) || (plVar4 == (long *)0x0)) goto LAB_05415b58;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x308))
                               (plVar4,*(undefined8 *)(lVar5 + 0x18),
                                *(undefined8 *)(*plVar4 + 0x310));
    lVar5 = FUN_0538116c();
    if (lVar5 == 0) goto LAB_05415b58;
    if ((plVar4 != (long *)0x0) && (*plVar4 != *(long *)(PTR_DAT_0675e258 + 0x90))) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(plVar4,*(long *)(PTR_DAT_0675e258 + 0x90));
    }
    FUN_05418324(plVar4,*(undefined8 *)(lVar5 + 0x10));
    (**(code **)(*unaff_x20 + 0x518))();
  }
  lVar5 = *(long *)(unaff_x29 + 0xf8);
  if (lVar5 != 0) {
    plVar4 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
    uVar7 = thunk_FUN_02d709fc(lVar5,0);
    uVar22 = *(undefined8 *)UnityEngine_Gradient_var;
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)(PTR_DAT_0675e258 + 0xe0));
    }
    uVar22 = FUN_05015c2c(uVar22,0);
    uVar6 = FUN_0501fa14(uVar7,uVar22,0);
    if ((uVar6 & 1) == 0) {
      FUN_05416878();
    }
    else {
      FUN_0540b510();
    }
    FUN_0540ade0(*(undefined8 *)(lVar5 + 0xa0),plVar4,0);
    if (*(char *)(lVar5 + 0x20) != '\0') {
      (**(code **)(*unaff_x20 + 0x558))();
    }
    if (*(char *)(lVar5 + 0x95) == '\0') {
      FUN_0540da50(*(undefined8 *)(lVar5 + 0x38));
      uVar7 = FUN_05398174(lVar5,0);
      uVar7 = FUN_05397f08(lVar5,uVar7,0);
      puVar19 = (undefined8 *)PTR_DAT_067900f8;
      if (plVar4 == (long *)0x0) goto LAB_05415b58;
      (**(code **)(*plVar4 + 0x558))
                (plVar4,*(undefined8 *)PTR_DAT_0678d060,*(undefined8 *)PTR_DAT_067900f8,uVar7,
                 *(undefined8 *)(*plVar4 + 0x560));
    }
    else {
      puVar19 = (undefined8 *)PTR_DAT_067900f8;
      if (plVar4 == (long *)0x0) goto LAB_05415b58;
    }
    (**(code **)(*plVar4 + 0x558))
              (plVar4,*(undefined8 *)PTR_DAT_067902e8,*puVar19,*(undefined8 *)(lVar5 + 0x30),
               *(undefined8 *)(*plVar4 + 0x560));
    in_stack_00000038 = *(undefined4 *)(lVar5 + 100);
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar7 = FUN_04f8e414(0);
    uVar7 = FUN_05004a00(&stack0x00000038,uVar7,0);
    (**(code **)(*plVar4 + 0x558))
              (plVar4,*(undefined8 *)Unity_XR_CompositionLayers_Layers_CustomTransformCameraData_var
               ,*puVar19,uVar7,*(undefined8 *)(*plVar4 + 0x560));
    if (unaff_x25 == (long *)0x0) goto LAB_05415b58;
    (**(code **)(*unaff_x25 + 0x2d8))();
    unaff_x25 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
    (**(code **)(*plVar4 + 0x2d8))(plVar4,unaff_x25,*(undefined8 *)(*plVar4 + 0x2e0));
    FUN_05416428();
  }
  plVar4 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
  if (unaff_x25 == (long *)0x0) goto LAB_05415b58;
  uVar7 = (**(code **)(*unaff_x25 + 0x2d8))(unaff_x25,plVar4,*(undefined8 *)(*unaff_x25 + 0x2e0));
  FUN_05417d24(uVar7,unaff_x29);
  if (0 < unaff_w27) {
    iVar3 = 0;
    do {
      plVar8 = (long *)FUN_053b8bc8();
      if (plVar8 == (long *)0x0) goto LAB_05415b58;
      iVar2 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
      if ((iVar2 != 3) &&
         ((((iVar2 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
            iVar2 == 2 ||
            (iVar2 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
            iVar2 == 1)) ||
           (iVar2 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
           iVar2 == 4)) && (uVar6 = FUN_054182e0(), (uVar6 & 1) == 0)))) {
        iVar2 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
        uVar7 = FUN_05416f78();
        plVar8 = plVar4;
        if (iVar2 != 1) {
          plVar8 = unaff_x25;
        }
        if (plVar8 == (long *)0x0) goto LAB_05415b58;
        (**(code **)(*plVar8 + 0x2d8))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x2e0));
      }
      iVar3 = iVar3 + 1;
    } while (unaff_w27 != iVar3);
  }
  puVar19 = (undefined8 *)VLB_BlendingMode_var;
  if ((*(long *)(unaff_x29 + 0xf8) == 0) && ((in_stack_00000028 & 0x100000000) != 0)) {
    plVar8 = (long *)FUN_05384820(unaff_x29,0);
    if (plVar8 == (long *)0x0) goto LAB_05415b58;
    iVar3 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        plVar9 = (long *)(**(code **)(*plVar8 + 0x208))
                                   (plVar8,iVar3,*(undefined8 *)(*plVar8 + 0x210));
        if (plVar9 == (long *)0x0) goto LAB_05415b58;
        uVar6 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
        if ((uVar6 & 1) != 0) {
          plVar9 = (long *)(**(code **)(*plVar8 + 0x208))
                                     (plVar8,iVar3,*(undefined8 *)(*plVar8 + 0x210));
          if (plVar9 == (long *)0x0) goto LAB_05415b58;
          lVar5 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
          if (lVar5 == unaff_x29) {
            plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar7 = FUN_053868f0(unaff_x29,0);
            if ((plVar9 == (long *)0x0) ||
               ((**(code **)(*plVar9 + 0x518))
                          (plVar9,*(undefined8 *)PTR_DAT_06772fc8,uVar7,
                           *(undefined8 *)(*plVar9 + 0x520)), lVar5 == 0)) goto LAB_05415b58;
          }
          else {
            if (lVar5 == 0) goto LAB_05415b58;
            iVar2 = FUN_05385b20(lVar5,0);
            if (iVar2 < 2) {
              plVar9 = (long *)FUN_054131cc();
            }
            else {
              plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              uVar7 = FUN_053868f0(lVar5,0);
              if (plVar9 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar9 + 0x518))
                        (plVar9,*(undefined8 *)PTR_DAT_06772fc8,uVar7,
                         *(undefined8 *)(*plVar9 + 0x520));
            }
          }
          uVar7 = FUN_0537e8d8(lVar5,0);
          uVar22 = FUN_0537e8d8(unaff_x29,0);
          uVar6 = thunk_FUN_04e8bd3c(uVar7,uVar22,0);
          if ((uVar6 & 1) != 0) {
            if (plVar9 == (long *)0x0) goto LAB_05415b58;
            (**(code **)(*plVar9 + 0x518))
                      (plVar9,*(undefined8 *)UnityEngine_InputSystem_Controls_ButtonControl_var,
                       *(undefined8 *)PTR_DAT_067706c8,*(undefined8 *)(*plVar9 + 0x520));
            (**(code **)(*plVar9 + 0x518))
                      (plVar9,*(undefined8 *)
                               UnityEngine_InputSystem_Composites_ButtonWithOneModifier_var,
                       *(undefined8 *)System_IO_Compression_GZipStream_var,
                       *(undefined8 *)(*plVar9 + 0x520));
          }
          uVar7 = FUN_0537e8d8(lVar5,0);
          uVar22 = FUN_0537e8d8(unaff_x29,0);
          uVar6 = thunk_FUN_04e8bd3c(uVar7,uVar22,0);
          if ((uVar6 & 1) == 0) {
            lVar10 = FUN_0537e8d8(lVar5,0);
            if (lVar10 == 0) goto LAB_05415b58;
            if ((*(int *)(lVar10 + 0x10) != 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
              iVar2 = FUN_05385b20(lVar5,0);
              if (iVar2 < 2) {
                FUN_0537e8d8(lVar5,0);
                plVar11 = (long *)FUN_05416194();
                if (plVar11 == (long *)0x0) goto LAB_05415b58;
                (**(code **)(*plVar11 + 0x2d8))(plVar11,plVar9,*(undefined8 *)(*plVar11 + 0x2e0));
              }
              plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              plVar11 = *(long **)(unaff_x22 + 0x28);
              uVar7 = FUN_0537e8d8(lVar5,0);
              if (plVar11 == (long *)0x0) goto LAB_05415b58;
              plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                          (plVar11,uVar7,*(undefined8 *)(*plVar11 + 0x310));
              uVar7 = FUN_053868f0(lVar5,0);
              if ((plVar11 != (long *)0x0) && (*plVar11 != *(long *)(PTR_DAT_0675e258 + 0x90)))
              goto LAB_05415b7c;
              uVar7 = FUN_04e8db00(plVar11,*(undefined8 *)PTR_DAT_067646b8,uVar7,0);
              if (plVar9 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar9 + 0x518))
                        (plVar9,*(undefined8 *)PTR_DAT_06772fc8,uVar7,
                         *(undefined8 *)(*plVar9 + 0x520));
              puVar19 = (undefined8 *)VLB_BlendingMode_var;
            }
          }
          if (plVar4 == (long *)0x0) goto LAB_05415b58;
          (**(code **)(*plVar4 + 0x2d8))(plVar4,plVar9,*(undefined8 *)(*plVar4 + 0x2e0));
          plVar11 = (long *)(**(code **)(*plVar8 + 0x208))
                                      (plVar8,iVar3,*(undefined8 *)(*plVar8 + 0x210));
          if (plVar11 == (long *)0x0) goto LAB_05415b58;
          lVar5 = (**(code **)(*plVar11 + 0x208))(plVar11,*(undefined8 *)(*plVar11 + 0x210));
          if (lVar5 == 0) {
            plVar11 = *(long **)(unaff_x22 + 0x48);
            if ((plVar11 == (long *)0x0) ||
               (plVar11 = (long *)(**(code **)(*plVar11 + 0x5f8))
                                            (plVar11,*puVar19,*(undefined8 *)PTR_DAT_06781a48,
                                             *(undefined8 *)PTR_DAT_0676b520,
                                             *(undefined8 *)(*plVar11 + 0x600)),
               plVar9 == (long *)0x0)) goto LAB_05415b58;
            (**(code **)(*plVar9 + 0x2c8))(plVar9,plVar11,*(undefined8 *)(*plVar9 + 0x2d0));
            plVar9 = *(long **)(unaff_x22 + 0x48);
            if ((plVar9 == (long *)0x0) ||
               (plVar9 = (long *)(**(code **)(*plVar9 + 0x5f8))
                                           (plVar9,*puVar19,
                                            *(undefined8 *)UnityEngine_GameObject_var,
                                            *(undefined8 *)PTR_DAT_0676b520,
                                            *(undefined8 *)(*plVar9 + 0x600)),
               plVar11 == (long *)0x0)) goto LAB_05415b58;
            (**(code **)(*plVar11 + 0x2d8))(plVar11,plVar9,*(undefined8 *)(*plVar11 + 0x2e0));
            (**(code **)(*plVar8 + 0x208))(plVar8,iVar3,*(undefined8 *)(*plVar8 + 0x210));
            uVar7 = FUN_0541273c();
            if (plVar9 == (long *)0x0) goto LAB_05415b58;
            (**(code **)(*plVar9 + 0x2d8))(plVar9,uVar7,*(undefined8 *)(*plVar9 + 0x2e0));
          }
        }
        iVar3 = iVar3 + 1;
        iVar2 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
      } while (iVar3 < iVar2);
    }
  }
  if ((plVar4 != (long *)0x0) &&
     (uVar6 = (**(code **)(*plVar4 + 0x328))(plVar4,*(undefined8 *)(*plVar4 + 0x330)),
     (uVar6 & 1) == 0)) {
    (**(code **)(*unaff_x25 + 0x2b8))(unaff_x25,plVar4,*(undefined8 *)(*unaff_x25 + 0x2c0));
  }
  plVar4 = *(long **)(unaff_x29 + 0x48);
  if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414538:
    puVar19 = *(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
  }
  else {
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x50);
    if (lVar5 == 0) goto LAB_05415b58;
    puVar19 = (undefined8 *)UnityEngine_InputSystem_HID_HID_var;
    if (*(int *)(lVar5 + 0x10) == 0) goto LAB_05414538;
  }
  if (*(int *)(unaff_x22 + 0x5c) == 2) {
LAB_054145f8:
    uStack0000000000000030 = *puVar19;
  }
  else {
    FUN_0537e8d8(unaff_x29,0);
    FUN_05416194();
    lVar5 = FUN_0537e8d8(unaff_x29,0);
    if (lVar5 == 0) goto LAB_05415b58;
    if (*(int *)(lVar5 + 0x10) == 0) {
      puVar19 = *(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
      goto LAB_054145f8;
    }
    plVar8 = *(long **)(unaff_x22 + 0x28);
    uVar7 = FUN_0537e8d8(unaff_x29,0);
    if (plVar8 == (long *)0x0) goto LAB_05415b58;
    plVar11 = (long *)(**(code **)(*plVar8 + 0x308))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x310));
    if ((plVar11 != (long *)0x0) && (*plVar11 != *(long *)(PTR_DAT_0675e258 + 0x90))) {
LAB_05415b7c:
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(plVar11);
    }
    uStack0000000000000030 = FUN_04e83184(plVar11,*(undefined8 *)PTR_DAT_067646b8,0);
  }
  if (plVar4 != (long *)0x0) {
    iVar3 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
    if (0 < iVar3) {
      iVar3 = 0;
      plVar8 = (long *)PTR_DAT_0678fd00;
      plVar9 = (long *)PTR_DAT_0678fcf8;
      do {
        plVar11 = (long *)FUN_053b5a7c(plVar4,iVar3,0);
        if (plVar11 == (long *)0x0) {
System_Runtime_Diagnostics_EtwDiagnosticTrace__get_DefaultEtwProviderId:
          plVar11 = (long *)FUN_053b5a7c(plVar4,iVar3,0);
          if (plVar11 != (long *)0x0) {
            bVar1 = *(byte *)(*plVar9 + 0x130);
            if (((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
                (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *plVar9)) &&
               ((in_stack_00000028 & 0x100000000) != 0)) {
              plVar11 = (long *)FUN_053b5a7c(plVar4,iVar3,0);
              if (plVar11 != (long *)0x0) {
                bVar1 = *(byte *)(*plVar9 + 0x130);
                if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *plVar9)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60e88(plVar11);
                }
              }
              plVar12 = *(long **)(unaff_x22 + 0x38);
              if (plVar12 == (long *)0x0) goto LAB_05415b58;
              iVar2 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
              if (iVar2 < 1) {
                uVar6 = FUN_054182e0();
                if ((uVar6 & 1) == 0) {
                  if (plVar11 == (long *)0x0) goto LAB_05415b58;
LAB_05414d3c:
                  plVar8 = (long *)FUN_053e1128(plVar11,0);
                  lVar5 = FUN_053e0970(plVar11,0);
                  lVar10 = (**(code **)(*plVar11 + 0x2c8))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
                  if (lVar10 == 0) goto LAB_05415b58;
                  lVar10 = *(long *)(lVar10 + 0x48);
                  uVar7 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0678fd00);
                  FUN_053eb24c(uVar7,*(undefined8 *)UnityEngine_GUILayoutGroup_var,lVar5,0);
                  if (lVar10 == 0) goto LAB_05415b58;
                  plVar12 = (long *)FUN_053b6184(lVar10,uVar7,0);
                  if (plVar12 == (long *)0x0) {
                    plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar7 = FUN_053b56cc(plVar11,0);
                    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                    }
                    uVar7 = FUN_0566e328(uVar7,0);
                    if (plVar9 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar9 + 0x518))
                              (plVar9,*(undefined8 *)PTR_DAT_0676b5d0,uVar7,
                               *(undefined8 *)(*plVar9 + 0x520));
                    if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414edc:
                      uVar7 = FUN_0537e8d8(unaff_x29,0);
                      (**(code **)(*plVar9 + 0x558))
                                (plVar9,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                                 *(undefined8 *)PTR_DAT_067900f8,uVar7,
                                 *(undefined8 *)(*plVar9 + 0x560));
                    }
                    else {
                      lVar10 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                      if (lVar10 == 0) goto LAB_05415b58;
                      iVar2 = FUN_053c77c0(lVar10,*(undefined8 *)(unaff_x29 + 0x90),0);
                      if (iVar2 == -3) goto LAB_05414edc;
                    }
                    plVar14 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    lVar10 = (**(code **)(*plVar11 + 0x2c8))
                                       (plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
                    if (lVar10 == 0) goto LAB_05415b58;
                    uVar7 = FUN_053868f0(lVar10,0);
                    uVar7 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                         uStack0000000000000030,uVar7,0);
                    if (plVar14 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar14 + 0x518))
                              (plVar14,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,
                               uVar7,*(undefined8 *)(*plVar14 + 0x520));
                    (**(code **)(*plVar9 + 0x2d8))(plVar9,plVar14,*(undefined8 *)(*plVar9 + 0x2e0));
                    if (lVar5 == 0) goto LAB_05415b58;
                    if (*(long *)(lVar5 + 0x18) != 0) {
                      plVar14 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                      FUN_04e9624c(plVar14,0);
                      if (0 < *(int *)(lVar5 + 0x18)) {
                        if (plVar14 == (long *)0x0) goto LAB_05415b58;
                        lVar10 = 0;
                        do {
                          FUN_04e97278(plVar14,0,0);
                          uVar21 = (uint)lVar10;
                          if (*(int *)(unaff_x22 + 0x5c) == 2) {
                            plVar13 = (long *)FUN_04e97bc4(plVar14,uStack0000000000000030,0);
                            if (*(uint *)(lVar5 + 0x18) <= uVar21) goto LAB_05415b5c;
                            lVar15 = *(long *)(lVar5 + 0x20 + lVar10 * 8);
                            if ((lVar15 == 0) ||
                               (uVar7 = FUN_05397bec(lVar15,0), plVar13 == (long *)0x0))
                            goto LAB_05415b58;
                          }
                          else {
                            if (*(uint *)(lVar5 + 0x18) <= uVar21) goto LAB_05415b5c;
                            plVar13 = (long *)(lVar5 + (long)(int)uVar21 * 8 + 0x20);
                            if (*plVar13 == 0) goto LAB_05415b58;
                            FUN_05399824(*plVar13,0);
                            FUN_05416194();
                            if (*(uint *)(lVar5 + 0x18) <= uVar21) goto LAB_05415b5c;
                            if (*plVar13 == 0) goto LAB_05415b58;
                            uVar7 = FUN_05399824(*plVar13,0);
                            uVar6 = FUN_04e8cf70(uVar7,0);
                            if ((uVar6 & 1) == 0) {
                              if (*(uint *)(lVar5 + 0x18) <= uVar21) goto LAB_05415b5c;
                              if (*plVar13 == 0) goto LAB_05415b58;
                              plVar20 = *(long **)(unaff_x22 + 0x28);
                              uVar7 = FUN_05399824(*plVar13,0);
                              if (plVar20 == (long *)0x0) goto LAB_05415b58;
                              uVar7 = (**(code **)(*plVar20 + 0x308))
                                                (plVar20,uVar7,*(undefined8 *)(*plVar20 + 0x310));
                              lVar15 = FUN_04e98bb0(plVar14,uVar7,0);
                              if (lVar15 == 0) goto LAB_05415b58;
                              FUN_04e98a58(lVar15,0x3a,0);
                            }
                            if (*(uint *)(lVar5 + 0x18) <= uVar21) goto LAB_05415b5c;
                            if (*plVar13 == 0) goto LAB_05415b58;
                            uVar7 = FUN_05397bec(*plVar13,0);
                            plVar13 = plVar14;
                          }
                          FUN_04e97bc4(plVar13,uVar7,0);
                          if (*(uint *)(lVar5 + 0x18) <= uVar21) goto LAB_05415b5c;
                          plVar20 = (long *)(lVar5 + (long)(int)uVar21 * 8 + 0x20);
                          plVar13 = (long *)*plVar20;
                          if (plVar13 == (long *)0x0) goto LAB_05415b58;
                          iVar2 = (**(code **)(*plVar13 + 0x1d8))
                                            (plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
                          if (iVar2 == 2) {
LAB_054151a8:
                            FUN_04e98e18(plVar14,0,0x40,0);
                          }
                          else {
                            if (*(uint *)(lVar5 + 0x18) <= uVar21) goto LAB_05415b5c;
                            plVar20 = (long *)*plVar20;
                            if (plVar20 == (long *)0x0) goto LAB_05415b58;
                            iVar2 = (**(code **)(*plVar20 + 0x1d8))
                                              (plVar20,*(undefined8 *)(*plVar20 + 0x1e0));
                            if (iVar2 == 4) goto LAB_054151a8;
                          }
                          plVar13 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                          uVar7 = (**(code **)(*plVar14 + 0x168))
                                            (plVar14,*(undefined8 *)(*plVar14 + 0x170));
                          if (plVar13 == (long *)0x0) goto LAB_05415b58;
                          (**(code **)(*plVar13 + 0x518))
                                    (plVar13,*(undefined8 *)
                                              UnityEngine_InputSystem_GravitySensor_var,uVar7,
                                     *(undefined8 *)(*plVar13 + 0x520));
                          (**(code **)(*plVar9 + 0x2d8))
                                    (plVar9,plVar13,*(undefined8 *)(*plVar9 + 0x2e0));
                          lVar10 = lVar10 + 1;
                        } while ((int)lVar10 < *(int *)(lVar5 + 0x18));
                      }
                    }
                    plVar14 = *(long **)(unaff_x22 + 0x78);
                    if (plVar14 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar14 + 0x298))
                              (plVar14,plVar9,*(undefined8 *)(unaff_x22 + 0x80),
                               *(undefined8 *)(*plVar14 + 0x2a0));
                    plVar9 = (long *)PTR_DAT_0678fcf8;
                  }
                  else {
                    bVar1 = *(byte *)(*(long *)PTR_DAT_0678fd00 + 0x130);
                    if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)PTR_DAT_0678fd00)) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d60e88(plVar12);
                    }
                  }
                  plVar14 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar7 = FUN_053b56cc(plVar11,0);
                  if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                  }
                  uVar7 = FUN_0566e328(uVar7,0);
                  if (plVar14 == (long *)0x0) goto LAB_05415b58;
                  (**(code **)(*plVar14 + 0x518))
                            (plVar14,*(undefined8 *)PTR_DAT_0676b5d0,uVar7,
                             *(undefined8 *)(*plVar14 + 0x520));
                  if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05415360:
                    lVar5 = (**(code **)(*plVar11 + 0x1b8))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
                    if (lVar5 == 0) goto LAB_05415b58;
                    uVar7 = FUN_0537e8d8(lVar5,0);
                    (**(code **)(*plVar14 + 0x558))
                              (plVar14,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                               *(undefined8 *)PTR_DAT_067900f8,uVar7,
                               *(undefined8 *)(*plVar14 + 0x560));
                  }
                  else {
                    lVar10 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                    lVar5 = (**(code **)(*plVar11 + 0x2c8))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
                    if ((lVar5 == 0) || (lVar10 == 0)) goto LAB_05415b58;
                    iVar2 = FUN_053c77c0(lVar10,*(undefined8 *)(lVar5 + 0x90),0);
                    if (iVar2 == -3) goto LAB_05415360;
                  }
                  plVar13 = plVar11;
                  if (plVar12 != (long *)0x0) {
                    plVar13 = plVar12;
                  }
                  uVar7 = FUN_053b56cc(plVar13,0);
                  if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                  }
                  uVar7 = FUN_0566e328(uVar7,0);
                  (**(code **)(*plVar14 + 0x518))
                            (plVar14,*(undefined8 *)PTR_DAT_06790b00,uVar7,
                             *(undefined8 *)(*plVar14 + 0x520));
                  lVar5 = plVar11[6];
                  uVar7 = *(undefined8 *)PTR_DAT_06791188;
                  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar7 = FUN_05015c2c(uVar7,0);
                  FUN_0540ade0(lVar5,plVar14,uVar7);
                  uVar7 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180))
                  ;
                  uVar22 = FUN_053b56cc(plVar11,0);
                  uVar6 = FUN_04e8c024(uVar7,uVar22,0);
                  if ((uVar6 & 1) != 0) {
                    uVar7 = (**(code **)(*plVar11 + 0x178))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x180));
                    (**(code **)(*plVar14 + 0x558))
                              (plVar14,*(undefined8 *)
                                        Unity_VisualScripting_DoNotSerializeAttribute_var,
                               *(undefined8 *)PTR_DAT_067900f8,uVar7,
                               *(undefined8 *)(*plVar14 + 0x560));
                  }
                  if (plVar8 == (long *)0x0) {
                    lVar5 = *plVar14;
                    uVar22 = *(undefined8 *)Firebase_Firestore_DocumentReference_var;
                    uVar17 = *(undefined8 *)PTR_DAT_067900f8;
                    uVar18 = *(undefined8 *)(lVar5 + 0x560);
                    uVar7 = *(undefined8 *)PTR_DAT_06771b30;
LAB_0541562c:
                    (**(code **)(lVar5 + 0x558))(plVar14,uVar22,uVar17,uVar7,uVar18);
                  }
                  else {
                    uVar6 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
                    if ((uVar6 & 1) != 0) {
                      (**(code **)(*plVar14 + 0x558))
                                (plVar14,*(undefined8 *)
                                          System_Runtime_CompilerServices_DecimalConstantAttribute_var
                                 ,*(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                                 *(undefined8 *)(*plVar14 + 0x560));
                    }
                    lVar5 = plVar8[3];
                    uVar7 = *(undefined8 *)
                             UnityEngine_XR_ARFoundation_ARTrackedObjectsChangedEventArgs_var;
                    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar7 = FUN_05015c2c(uVar7,0);
                    FUN_0540ade0(lVar5,plVar14,uVar7);
                    uVar7 = (**(code **)(*plVar11 + 0x178))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x180));
                    uVar22 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0))
                    ;
                    uVar6 = FUN_04e8c024(uVar7,uVar22,0);
                    if ((uVar6 & 1) != 0) {
                      uVar7 = (**(code **)(*plVar8 + 0x1c8))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
                      if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                      }
                      uVar7 = FUN_0566e328(uVar7,0);
                      lVar5 = *plVar14;
                      uVar22 = *(undefined8 *)System_Runtime_InteropServices_DllImportAttribute_var;
                      uVar18 = *(undefined8 *)(lVar5 + 0x560);
                      uVar17 = *(undefined8 *)PTR_DAT_067900f8;
                      goto LAB_0541562c;
                    }
                  }
                  plVar8 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar7 = FUN_053868f0(unaff_x29,0);
                  uVar7 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                       uStack0000000000000030,uVar7,0);
                  if (plVar8 == (long *)0x0) goto LAB_05415b58;
                  (**(code **)(*plVar8 + 0x518))
                            (plVar8,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar7,
                             *(undefined8 *)(*plVar8 + 0x520));
                  (**(code **)(*plVar14 + 0x2d8))(plVar14,plVar8,*(undefined8 *)(*plVar14 + 0x2e0));
                  iVar2 = (**(code **)(*plVar11 + 0x278))(plVar11,*(undefined8 *)(*plVar11 + 0x280))
                  ;
                  if (iVar2 != 0) {
                    (**(code **)(*plVar11 + 0x278))(plVar11,*(undefined8 *)(*plVar11 + 0x280));
                    uVar7 = FUN_05417bfc();
                    (**(code **)(*plVar14 + 0x558))
                              (plVar14,*(undefined8 *)UnityEngine_UIElements_DragAndDropArgs_var,
                               *(undefined8 *)PTR_DAT_067900f8,uVar7,
                               *(undefined8 *)(*plVar14 + 0x560));
                  }
                  iVar2 = (**(code **)(*plVar11 + 0x2d8))(plVar11,*(undefined8 *)(*plVar11 + 0x2e0))
                  ;
                  if (iVar2 != 1) {
                    (**(code **)(*plVar11 + 0x2d8))(plVar11,*(undefined8 *)(*plVar11 + 0x2e0));
                    uVar7 = FUN_05417c6c();
                    (**(code **)(*plVar14 + 0x558))
                              (plVar14,*(undefined8 *)
                                        UnityEngine_InputSystem_Controls_DoubleControl_var,
                               *(undefined8 *)PTR_DAT_067900f8,uVar7,
                               *(undefined8 *)(*plVar14 + 0x560));
                  }
                  iVar2 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0))
                  ;
                  if (iVar2 != 1) {
                    (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
                    uVar7 = FUN_05417c6c();
                    (**(code **)(*plVar14 + 0x558))
                              (plVar14,*(undefined8 *)
                                        UnityEngine_InputSystem_Controls_DpadControl_var,
                               *(undefined8 *)PTR_DAT_067900f8,uVar7,
                               *(undefined8 *)(*plVar14 + 0x560));
                  }
                  lVar5 = (**(code **)(*plVar11 + 0x268))(plVar11,*(undefined8 *)(*plVar11 + 0x270))
                  ;
                  if (lVar5 == 0) goto LAB_05415b58;
                  if (*(long *)(lVar5 + 0x18) != 0) {
                    plVar8 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                    FUN_04e9624c(plVar8,0);
                    if (0 < *(int *)(lVar5 + 0x18)) {
                      if (plVar8 == (long *)0x0) goto LAB_05415b58;
                      lVar10 = 0;
                      do {
                        FUN_04e97278(plVar8,0,0);
                        uVar21 = (uint)lVar10;
                        if (*(int *)(unaff_x22 + 0x5c) == 2) {
                          lVar15 = FUN_04e97bc4(plVar8,uStack0000000000000030,0);
                          if (*(uint *)(lVar5 + 0x18) <= uVar21) goto LAB_05415b5c;
                          lVar16 = *(long *)(lVar5 + 0x20 + lVar10 * 8);
                          if ((lVar16 == 0) || (uVar7 = FUN_05397bec(lVar16,0), lVar15 == 0))
                          goto LAB_05415b58;
                          FUN_04e97bc4(lVar15,uVar7,0);
                        }
                        else {
                          if (*(uint *)(lVar5 + 0x18) <= uVar21) goto LAB_05415b5c;
                          plVar9 = (long *)(lVar5 + (long)(int)uVar21 * 8 + 0x20);
                          if (*plVar9 == 0) goto LAB_05415b58;
                          FUN_05399824(*plVar9,0);
                          FUN_05416194();
                          if (*(uint *)(lVar5 + 0x18) <= uVar21) goto LAB_05415b5c;
                          if (*plVar9 == 0) goto LAB_05415b58;
                          uVar7 = FUN_05399824(*plVar9,0);
                          uVar6 = FUN_04e8cf70(uVar7,0);
                          if ((uVar6 & 1) == 0) {
                            if (*(uint *)(lVar5 + 0x18) <= uVar21) goto LAB_05415b5c;
                            if (*plVar9 == 0) goto LAB_05415b58;
                            plVar11 = *(long **)(unaff_x22 + 0x28);
                            uVar7 = FUN_05399824(*plVar9,0);
                            if (plVar11 == (long *)0x0) goto LAB_05415b58;
                            uVar7 = (**(code **)(*plVar11 + 0x308))
                                              (plVar11,uVar7,*(undefined8 *)(*plVar11 + 0x310));
                            lVar15 = FUN_04e98bb0(plVar8,uVar7,0);
                            if (lVar15 == 0) goto LAB_05415b58;
                            FUN_04e98a58(lVar15,0x3a,0);
                          }
                          if (*(uint *)(lVar5 + 0x18) <= uVar21) goto LAB_05415b5c;
                          if (*plVar9 == 0) goto LAB_05415b58;
                          uVar7 = FUN_05397bec(*plVar9,0);
                          FUN_04e97bc4(plVar8,uVar7,0);
                          plVar9 = (long *)PTR_DAT_0678fcf8;
                        }
                        if (*(uint *)(lVar5 + 0x18) <= uVar21) goto LAB_05415b5c;
                        plVar12 = (long *)(lVar5 + (long)(int)uVar21 * 8 + 0x20);
                        plVar11 = (long *)*plVar12;
                        if (plVar11 == (long *)0x0) goto LAB_05415b58;
                        iVar2 = (**(code **)(*plVar11 + 0x1d8))
                                          (plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
                        if (iVar2 == 2) {
LAB_054159fc:
                          FUN_04e98e18(plVar8,0,0x40,0);
                        }
                        else {
                          if (*(uint *)(lVar5 + 0x18) <= uVar21) goto LAB_05415b5c;
                          plVar12 = (long *)*plVar12;
                          if (plVar12 == (long *)0x0) goto LAB_05415b58;
                          iVar2 = (**(code **)(*plVar12 + 0x1d8))
                                            (plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
                          if (iVar2 == 4) goto LAB_054159fc;
                        }
                        plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                        uVar7 = (**(code **)(*plVar8 + 0x168))
                                          (plVar8,*(undefined8 *)(*plVar8 + 0x170));
                        if (plVar11 == (long *)0x0) goto LAB_05415b58;
                        (**(code **)(*plVar11 + 0x518))
                                  (plVar11,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,
                                   uVar7,*(undefined8 *)(*plVar11 + 0x520));
                        (**(code **)(*plVar14 + 0x2d8))
                                  (plVar14,plVar11,*(undefined8 *)(*plVar14 + 0x2e0));
                        lVar10 = lVar10 + 1;
                      } while ((int)lVar10 < *(int *)(lVar5 + 0x18));
                    }
                  }
                  plVar8 = *(long **)(unaff_x22 + 0x78);
                  if (plVar8 == (long *)0x0) goto LAB_05415b58;
                  (**(code **)(*plVar8 + 0x2a8))
                            (plVar8,plVar14,*(undefined8 *)(unaff_x22 + 0x80),
                             *(undefined8 *)(*plVar8 + 0x2b0));
                  plVar8 = (long *)PTR_DAT_0678fd00;
                }
              }
              else {
                if (plVar11 == (long *)0x0) goto LAB_05415b58;
                plVar8 = *(long **)(unaff_x22 + 0x38);
                uVar7 = (**(code **)(*plVar11 + 0x2c8))(plVar11,*(undefined8 *)(*plVar11 + 0x2d0));
                if (plVar8 == (long *)0x0) goto LAB_05415b58;
                uVar6 = (**(code **)(*plVar8 + 0x348))
                                  (plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x350));
                plVar8 = (long *)PTR_DAT_0678fd00;
                if ((uVar6 & 1) != 0) {
                  plVar8 = *(long **)(unaff_x22 + 0x38);
                  uVar7 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0))
                  ;
                  if (plVar8 == (long *)0x0) goto LAB_05415b58;
                  uVar6 = (**(code **)(*plVar8 + 0x348))
                                    (plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x350));
                  plVar8 = (long *)PTR_DAT_0678fd00;
                  if (((uVar6 & 1) != 0) && (uVar6 = FUN_054182e0(), (uVar6 & 1) == 0))
                  goto LAB_05414d3c;
                }
              }
            }
          }
        }
        else {
          bVar1 = *(byte *)(*plVar8 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *plVar8))
          goto System_Runtime_Diagnostics_EtwDiagnosticTrace__get_DefaultEtwProviderId;
          plVar11 = (long *)FUN_053b5a7c(plVar4,iVar3,0);
          if (plVar11 == (long *)0x0) {
            uVar6 = FUN_054182e0();
            if ((uVar6 & 1) == 0) goto LAB_05415b58;
          }
          else {
            bVar1 = *(byte *)(*plVar8 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *plVar8)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60e88(plVar11);
            }
            uVar6 = FUN_054182e0();
            if ((uVar6 & 1) == 0) {
              lVar5 = plVar11[7];
              plVar8 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414860:
                uVar7 = FUN_0537e8d8(unaff_x29,0);
                if (plVar8 == (long *)0x0) goto LAB_05415b58;
                (**(code **)(*plVar8 + 0x558))
                          (plVar8,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                           *(undefined8 *)PTR_DAT_067900f8,uVar7,*(undefined8 *)(*plVar8 + 0x560));
              }
              else {
                lVar10 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                if (lVar10 == 0) goto LAB_05415b58;
                iVar2 = FUN_053c77c0(lVar10,*(undefined8 *)(unaff_x29 + 0x90),0);
                if (iVar2 == -3) goto LAB_05414860;
              }
              uVar7 = FUN_053b56cc(plVar11,0);
              if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
              }
              uVar7 = FUN_0566e328(uVar7,0);
              if (plVar8 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar8 + 0x518))
                        (plVar8,*(undefined8 *)PTR_DAT_0676b5d0,uVar7,
                         *(undefined8 *)(*plVar8 + 0x520));
              uVar7 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
              uVar22 = FUN_053b56cc(plVar11,0);
              uVar6 = FUN_04e8c024(uVar7,uVar22,0);
              if ((uVar6 & 1) != 0) {
                uVar7 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
                (**(code **)(*plVar8 + 0x558))
                          (plVar8,*(undefined8 *)Unity_VisualScripting_DoNotSerializeAttribute_var,
                           *(undefined8 *)PTR_DAT_067900f8,uVar7,*(undefined8 *)(*plVar8 + 0x560));
              }
              FUN_0540ade0(plVar11[6],plVar8,0);
              plVar9 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              uVar7 = FUN_053868f0(unaff_x29,0);
              uVar7 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                   uStack0000000000000030,uVar7,0);
              if (plVar9 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar9 + 0x518))
                        (plVar9,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar7,
                         *(undefined8 *)(*plVar9 + 0x520));
              (**(code **)(*plVar8 + 0x2d8))(plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x2e0));
              uVar6 = System_Runtime_Serialization_XmlObjectSerializerContext__get_IgnoreExtensionDataObject
                                (plVar11,0);
              if ((uVar6 & 1) != 0) {
                (**(code **)(*plVar8 + 0x558))
                          (plVar8,*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_var,
                           *(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                           *(undefined8 *)(*plVar8 + 0x560));
              }
              if (lVar5 == 0) goto LAB_05415b58;
              if (*(long *)(lVar5 + 0x18) != 0) {
                plVar9 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                FUN_04e9624c(plVar9,0);
                if (0 < *(int *)(lVar5 + 0x18)) {
                  if (plVar9 == (long *)0x0) goto LAB_05415b58;
                  lVar10 = 0;
                  do {
                    FUN_04e97278(plVar9,0,0);
                    uVar21 = (uint)lVar10;
                    if (*(int *)(unaff_x22 + 0x5c) == 2) {
                      plVar11 = (long *)FUN_04e97bc4(plVar9,uStack0000000000000030,0);
                      if (*(uint *)(lVar5 + 0x18) <= uVar21) goto LAB_05415b5c;
                      lVar15 = *(long *)(lVar5 + 0x20 + lVar10 * 8);
                      if ((lVar15 == 0) || (uVar7 = FUN_05397bec(lVar15,0), plVar11 == (long *)0x0))
                      goto LAB_05415b58;
                    }
                    else {
                      if (*(uint *)(lVar5 + 0x18) <= uVar21) goto LAB_05415b5c;
                      plVar11 = (long *)(lVar5 + (long)(int)uVar21 * 8 + 0x20);
                      if (*plVar11 == 0) goto LAB_05415b58;
                      FUN_05399824(*plVar11,0);
                      FUN_05416194();
                      if (*(uint *)(lVar5 + 0x18) <= uVar21) goto LAB_05415b5c;
                      if (*plVar11 == 0) goto LAB_05415b58;
                      uVar7 = FUN_05399824(*plVar11,0);
                      uVar6 = FUN_04e8cf70(uVar7,0);
                      if ((uVar6 & 1) == 0) {
                        if (*(uint *)(lVar5 + 0x18) <= uVar21) {
LAB_05415b5c:
                    /* WARNING: Subroutine does not return */
                          FUN_02d60af0();
                        }
                        if (*plVar11 == 0) goto LAB_05415b58;
                        plVar12 = *(long **)(unaff_x22 + 0x28);
                        uVar7 = FUN_05399824(*plVar11,0);
                        if (plVar12 == (long *)0x0) goto LAB_05415b58;
                        uVar7 = (**(code **)(*plVar12 + 0x308))
                                          (plVar12,uVar7,*(undefined8 *)(*plVar12 + 0x310));
                        lVar15 = FUN_04e98bb0(plVar9,uVar7,0);
                        if (lVar15 == 0) goto LAB_05415b58;
                        FUN_04e98a58(lVar15,0x3a,0);
                      }
                      if (*(uint *)(lVar5 + 0x18) <= uVar21) goto LAB_05415b5c;
                      if (*plVar11 == 0) goto LAB_05415b58;
                      uVar7 = FUN_05397bec(*plVar11,0);
                      plVar11 = plVar9;
                    }
                    FUN_04e97bc4(plVar11,uVar7,0);
                    if (*(uint *)(lVar5 + 0x18) <= uVar21) goto LAB_05415b5c;
                    plVar12 = (long *)(lVar5 + (long)(int)uVar21 * 8 + 0x20);
                    plVar11 = (long *)*plVar12;
                    if (plVar11 == (long *)0x0) goto LAB_05415b58;
                    iVar2 = (**(code **)(*plVar11 + 0x1d8))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
                    if (iVar2 == 2) {
LAB_05414c38:
                      FUN_04e98e18(plVar9,0,0x40,0);
                    }
                    else {
                      if (*(uint *)(lVar5 + 0x18) <= uVar21) goto LAB_05415b5c;
                      plVar12 = (long *)*plVar12;
                      if (plVar12 == (long *)0x0) goto LAB_05415b58;
                      iVar2 = (**(code **)(*plVar12 + 0x1d8))
                                        (plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
                      if (iVar2 == 4) goto LAB_05414c38;
                    }
                    plVar11 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar7 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
                    if (plVar11 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar11 + 0x518))
                              (plVar11,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,
                               uVar7,*(undefined8 *)(*plVar11 + 0x520));
                    (**(code **)(*plVar8 + 0x2d8))(plVar8,plVar11,*(undefined8 *)(*plVar8 + 0x2e0));
                    lVar10 = lVar10 + 1;
                  } while ((int)lVar10 < *(int *)(lVar5 + 0x18));
                }
              }
              plVar9 = *(long **)(unaff_x22 + 0x78);
              if (plVar9 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar9 + 0x298))
                        (plVar9,plVar8,*(undefined8 *)(unaff_x22 + 0x80),
                         *(undefined8 *)(*plVar9 + 0x2a0));
              plVar8 = (long *)PTR_DAT_0678fd00;
              plVar9 = (long *)PTR_DAT_0678fcf8;
            }
          }
        }
        iVar3 = iVar3 + 1;
        iVar2 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      } while (iVar3 < iVar2);
    }
    FUN_0540ade0(*(undefined8 *)(unaff_x29 + 0x88),in_stack_00000018,0);
    return in_stack_00000018;
  }
LAB_05415b58:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


