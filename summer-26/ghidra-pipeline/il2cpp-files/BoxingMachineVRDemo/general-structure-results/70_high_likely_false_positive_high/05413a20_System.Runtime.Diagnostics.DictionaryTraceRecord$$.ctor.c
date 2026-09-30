/*
FUNCTION_NAME: System.Runtime.Diagnostics.DictionaryTraceRecord$$.ctor
ENTRY_POINT: 05413a20
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


undefined8 System_Runtime_Diagnostics_DictionaryTraceRecord___ctor(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int in_w8;
  undefined8 *puVar18;
  long *plVar19;
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
  
  if (in_w8 == 2) {
    (**(code **)(*unaff_x20 + 0x2d8))();
  }
  else {
    lVar4 = FUN_0538116c();
    if (lVar4 == 0) goto LAB_05415b58;
    plVar19 = (long *)FUN_05416194();
    lVar4 = FUN_0538116c();
    if (lVar4 == 0) goto LAB_05415b58;
    uVar5 = FUN_04e8cf70(*(undefined8 *)(lVar4 + 0x18),0);
    if ((uVar5 & 1) != 0) {
      if ((*(long *)(unaff_x22 + 0x30) == 0) || ((unaff_x24 & 1) == 0)) {
        FUN_0537e8d8();
      }
      plVar19 = (long *)FUN_05416194();
    }
    lVar4 = FUN_0538116c();
    if (lVar4 == 0) goto LAB_05415b58;
    lVar4 = FUN_05417a34(lVar4,plVar19,*(undefined8 *)(lVar4 + 0x10));
    if (lVar4 == 0) {
      if (plVar19 == (long *)0x0) goto LAB_05415b58;
      (**(code **)(*plVar19 + 0x2d8))(plVar19);
    }
    lVar4 = FUN_0538116c();
    if ((lVar4 == 0) || (unaff_x25 == (long *)0x0)) goto LAB_05415b58;
    (**(code **)(*unaff_x25 + 0x518))();
  }
  lVar4 = FUN_0538116c();
  if (lVar4 == 0) goto LAB_05415b58;
  uVar5 = FUN_05679f04(lVar4,0);
  if (((uVar5 & 1) == 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
    plVar19 = *(long **)(unaff_x22 + 0x28);
    lVar4 = FUN_0538116c();
    if ((lVar4 == 0) || (plVar19 == (long *)0x0)) goto LAB_05415b58;
    plVar19 = (long *)(**(code **)(*plVar19 + 0x308))
                                (plVar19,*(undefined8 *)(lVar4 + 0x18),
                                 *(undefined8 *)(*plVar19 + 0x310));
    lVar4 = FUN_0538116c();
    if (lVar4 == 0) goto LAB_05415b58;
    if ((plVar19 != (long *)0x0) && (*plVar19 != *(long *)(PTR_DAT_0675e258 + 0x90))) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(plVar19,*(long *)(PTR_DAT_0675e258 + 0x90));
    }
    FUN_05418324(plVar19,*(undefined8 *)(lVar4 + 0x10));
    (**(code **)(*unaff_x20 + 0x518))();
  }
  lVar4 = *(long *)(unaff_x29 + 0xf8);
  if (lVar4 != 0) {
    plVar19 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
    uVar6 = thunk_FUN_02d709fc(lVar4,0);
    uVar22 = *(undefined8 *)UnityEngine_Gradient_var;
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)(PTR_DAT_0675e258 + 0xe0));
    }
    uVar22 = FUN_05015c2c(uVar22,0);
    uVar5 = FUN_0501fa14(uVar6,uVar22,0);
    if ((uVar5 & 1) == 0) {
      FUN_05416878();
    }
    else {
      FUN_0540b510();
    }
    FUN_0540ade0(*(undefined8 *)(lVar4 + 0xa0),plVar19,0);
    if (*(char *)(lVar4 + 0x20) != '\0') {
      (**(code **)(*unaff_x20 + 0x558))();
    }
    if (*(char *)(lVar4 + 0x95) == '\0') {
      FUN_0540da50(*(undefined8 *)(lVar4 + 0x38));
      uVar6 = FUN_05398174(lVar4,0);
      uVar6 = FUN_05397f08(lVar4,uVar6,0);
      puVar18 = (undefined8 *)PTR_DAT_067900f8;
      if (plVar19 == (long *)0x0) goto LAB_05415b58;
      (**(code **)(*plVar19 + 0x558))
                (plVar19,*(undefined8 *)PTR_DAT_0678d060,*(undefined8 *)PTR_DAT_067900f8,uVar6,
                 *(undefined8 *)(*plVar19 + 0x560));
    }
    else {
      puVar18 = (undefined8 *)PTR_DAT_067900f8;
      if (plVar19 == (long *)0x0) goto LAB_05415b58;
    }
    (**(code **)(*plVar19 + 0x558))
              (plVar19,*(undefined8 *)PTR_DAT_067902e8,*puVar18,*(undefined8 *)(lVar4 + 0x30),
               *(undefined8 *)(*plVar19 + 0x560));
    in_stack_00000038 = *(undefined4 *)(lVar4 + 100);
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_04f8e414(0);
    uVar6 = FUN_05004a00(&stack0x00000038,uVar6,0);
    (**(code **)(*plVar19 + 0x558))
              (plVar19,*(undefined8 *)
                        Unity_XR_CompositionLayers_Layers_CustomTransformCameraData_var,*puVar18,
               uVar6,*(undefined8 *)(*plVar19 + 0x560));
    if (unaff_x25 == (long *)0x0) goto LAB_05415b58;
    (**(code **)(*unaff_x25 + 0x2d8))();
    unaff_x25 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
    (**(code **)(*plVar19 + 0x2d8))(plVar19,unaff_x25,*(undefined8 *)(*plVar19 + 0x2e0));
    FUN_05416428();
  }
  plVar19 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
  if (unaff_x25 == (long *)0x0) goto LAB_05415b58;
  uVar6 = (**(code **)(*unaff_x25 + 0x2d8))(unaff_x25,plVar19,*(undefined8 *)(*unaff_x25 + 0x2e0));
  FUN_05417d24(uVar6,unaff_x29);
  if (0 < unaff_w27) {
    iVar3 = 0;
    do {
      plVar7 = (long *)FUN_053b8bc8();
      if (plVar7 == (long *)0x0) goto LAB_05415b58;
      iVar2 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
      if ((iVar2 != 3) &&
         ((((iVar2 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0)),
            iVar2 == 2 ||
            (iVar2 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0)),
            iVar2 == 1)) ||
           (iVar2 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0)),
           iVar2 == 4)) && (uVar5 = FUN_054182e0(), (uVar5 & 1) == 0)))) {
        iVar2 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
        uVar6 = FUN_05416f78();
        plVar7 = plVar19;
        if (iVar2 != 1) {
          plVar7 = unaff_x25;
        }
        if (plVar7 == (long *)0x0) goto LAB_05415b58;
        (**(code **)(*plVar7 + 0x2d8))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x2e0));
      }
      iVar3 = iVar3 + 1;
    } while (unaff_w27 != iVar3);
  }
  puVar18 = (undefined8 *)VLB_BlendingMode_var;
  if ((*(long *)(unaff_x29 + 0xf8) == 0) && ((in_stack_00000028 & 0x100000000) != 0)) {
    plVar7 = (long *)FUN_05384820(unaff_x29,0);
    if (plVar7 == (long *)0x0) goto LAB_05415b58;
    iVar3 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        plVar8 = (long *)(**(code **)(*plVar7 + 0x208))
                                   (plVar7,iVar3,*(undefined8 *)(*plVar7 + 0x210));
        if (plVar8 == (long *)0x0) goto LAB_05415b58;
        uVar5 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
        if ((uVar5 & 1) != 0) {
          plVar8 = (long *)(**(code **)(*plVar7 + 0x208))
                                     (plVar7,iVar3,*(undefined8 *)(*plVar7 + 0x210));
          if (plVar8 == (long *)0x0) goto LAB_05415b58;
          lVar4 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
          if (lVar4 == unaff_x29) {
            plVar8 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
            uVar6 = FUN_053868f0(unaff_x29,0);
            if ((plVar8 == (long *)0x0) ||
               ((**(code **)(*plVar8 + 0x518))
                          (plVar8,*(undefined8 *)PTR_DAT_06772fc8,uVar6,
                           *(undefined8 *)(*plVar8 + 0x520)), lVar4 == 0)) goto LAB_05415b58;
          }
          else {
            if (lVar4 == 0) goto LAB_05415b58;
            iVar2 = FUN_05385b20(lVar4,0);
            if (iVar2 < 2) {
              plVar8 = (long *)FUN_054131cc();
            }
            else {
              plVar8 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              uVar6 = FUN_053868f0(lVar4,0);
              if (plVar8 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar8 + 0x518))
                        (plVar8,*(undefined8 *)PTR_DAT_06772fc8,uVar6,
                         *(undefined8 *)(*plVar8 + 0x520));
            }
          }
          uVar6 = FUN_0537e8d8(lVar4,0);
          uVar22 = FUN_0537e8d8(unaff_x29,0);
          uVar5 = thunk_FUN_04e8bd3c(uVar6,uVar22,0);
          if ((uVar5 & 1) != 0) {
            if (plVar8 == (long *)0x0) goto LAB_05415b58;
            (**(code **)(*plVar8 + 0x518))
                      (plVar8,*(undefined8 *)UnityEngine_InputSystem_Controls_ButtonControl_var,
                       *(undefined8 *)PTR_DAT_067706c8,*(undefined8 *)(*plVar8 + 0x520));
            (**(code **)(*plVar8 + 0x518))
                      (plVar8,*(undefined8 *)
                               UnityEngine_InputSystem_Composites_ButtonWithOneModifier_var,
                       *(undefined8 *)System_IO_Compression_GZipStream_var,
                       *(undefined8 *)(*plVar8 + 0x520));
          }
          uVar6 = FUN_0537e8d8(lVar4,0);
          uVar22 = FUN_0537e8d8(unaff_x29,0);
          uVar5 = thunk_FUN_04e8bd3c(uVar6,uVar22,0);
          if ((uVar5 & 1) == 0) {
            lVar9 = FUN_0537e8d8(lVar4,0);
            if (lVar9 == 0) goto LAB_05415b58;
            if ((*(int *)(lVar9 + 0x10) != 0) && (*(int *)(unaff_x22 + 0x5c) != 2)) {
              iVar2 = FUN_05385b20(lVar4,0);
              if (iVar2 < 2) {
                FUN_0537e8d8(lVar4,0);
                plVar10 = (long *)FUN_05416194();
                if (plVar10 == (long *)0x0) goto LAB_05415b58;
                (**(code **)(*plVar10 + 0x2d8))(plVar10,plVar8,*(undefined8 *)(*plVar10 + 0x2e0));
              }
              plVar8 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              plVar10 = *(long **)(unaff_x22 + 0x28);
              uVar6 = FUN_0537e8d8(lVar4,0);
              if (plVar10 == (long *)0x0) goto LAB_05415b58;
              plVar10 = (long *)(**(code **)(*plVar10 + 0x308))
                                          (plVar10,uVar6,*(undefined8 *)(*plVar10 + 0x310));
              uVar6 = FUN_053868f0(lVar4,0);
              if ((plVar10 != (long *)0x0) && (*plVar10 != *(long *)(PTR_DAT_0675e258 + 0x90)))
              goto LAB_05415b7c;
              uVar6 = FUN_04e8db00(plVar10,*(undefined8 *)PTR_DAT_067646b8,uVar6,0);
              if (plVar8 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar8 + 0x518))
                        (plVar8,*(undefined8 *)PTR_DAT_06772fc8,uVar6,
                         *(undefined8 *)(*plVar8 + 0x520));
              puVar18 = (undefined8 *)VLB_BlendingMode_var;
            }
          }
          if (plVar19 == (long *)0x0) goto LAB_05415b58;
          (**(code **)(*plVar19 + 0x2d8))(plVar19,plVar8,*(undefined8 *)(*plVar19 + 0x2e0));
          plVar10 = (long *)(**(code **)(*plVar7 + 0x208))
                                      (plVar7,iVar3,*(undefined8 *)(*plVar7 + 0x210));
          if (plVar10 == (long *)0x0) goto LAB_05415b58;
          lVar4 = (**(code **)(*plVar10 + 0x208))(plVar10,*(undefined8 *)(*plVar10 + 0x210));
          if (lVar4 == 0) {
            plVar10 = *(long **)(unaff_x22 + 0x48);
            if ((plVar10 == (long *)0x0) ||
               (plVar10 = (long *)(**(code **)(*plVar10 + 0x5f8))
                                            (plVar10,*puVar18,*(undefined8 *)PTR_DAT_06781a48,
                                             *(undefined8 *)PTR_DAT_0676b520,
                                             *(undefined8 *)(*plVar10 + 0x600)),
               plVar8 == (long *)0x0)) goto LAB_05415b58;
            (**(code **)(*plVar8 + 0x2c8))(plVar8,plVar10,*(undefined8 *)(*plVar8 + 0x2d0));
            plVar8 = *(long **)(unaff_x22 + 0x48);
            if ((plVar8 == (long *)0x0) ||
               (plVar8 = (long *)(**(code **)(*plVar8 + 0x5f8))
                                           (plVar8,*puVar18,
                                            *(undefined8 *)UnityEngine_GameObject_var,
                                            *(undefined8 *)PTR_DAT_0676b520,
                                            *(undefined8 *)(*plVar8 + 0x600)),
               plVar10 == (long *)0x0)) goto LAB_05415b58;
            (**(code **)(*plVar10 + 0x2d8))(plVar10,plVar8,*(undefined8 *)(*plVar10 + 0x2e0));
            (**(code **)(*plVar7 + 0x208))(plVar7,iVar3,*(undefined8 *)(*plVar7 + 0x210));
            uVar6 = FUN_0541273c();
            if (plVar8 == (long *)0x0) goto LAB_05415b58;
            (**(code **)(*plVar8 + 0x2d8))(plVar8,uVar6,*(undefined8 *)(*plVar8 + 0x2e0));
          }
        }
        iVar3 = iVar3 + 1;
        iVar2 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
      } while (iVar3 < iVar2);
    }
  }
  if ((plVar19 != (long *)0x0) &&
     (uVar5 = (**(code **)(*plVar19 + 0x328))(plVar19,*(undefined8 *)(*plVar19 + 0x330)),
     (uVar5 & 1) == 0)) {
    (**(code **)(*unaff_x25 + 0x2b8))(unaff_x25,plVar19,*(undefined8 *)(*unaff_x25 + 0x2c0));
  }
  plVar19 = *(long **)(unaff_x29 + 0x48);
  if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414538:
    puVar18 = *(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
  }
  else {
    lVar4 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x50);
    if (lVar4 == 0) goto LAB_05415b58;
    puVar18 = (undefined8 *)UnityEngine_InputSystem_HID_HID_var;
    if (*(int *)(lVar4 + 0x10) == 0) goto LAB_05414538;
  }
  if (*(int *)(unaff_x22 + 0x5c) == 2) {
LAB_054145f8:
    uStack0000000000000030 = *puVar18;
  }
  else {
    FUN_0537e8d8(unaff_x29,0);
    FUN_05416194();
    lVar4 = FUN_0537e8d8(unaff_x29,0);
    if (lVar4 == 0) goto LAB_05415b58;
    if (*(int *)(lVar4 + 0x10) == 0) {
      puVar18 = *(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
      goto LAB_054145f8;
    }
    plVar7 = *(long **)(unaff_x22 + 0x28);
    uVar6 = FUN_0537e8d8(unaff_x29,0);
    if (plVar7 == (long *)0x0) goto LAB_05415b58;
    plVar10 = (long *)(**(code **)(*plVar7 + 0x308))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x310));
    if ((plVar10 != (long *)0x0) && (*plVar10 != *(long *)(PTR_DAT_0675e258 + 0x90))) {
LAB_05415b7c:
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(plVar10);
    }
    uStack0000000000000030 = FUN_04e83184(plVar10,*(undefined8 *)PTR_DAT_067646b8,0);
  }
  if (plVar19 != (long *)0x0) {
    iVar3 = (**(code **)(*plVar19 + 0x1c8))(plVar19,*(undefined8 *)(*plVar19 + 0x1d0));
    if (0 < iVar3) {
      iVar3 = 0;
      plVar7 = (long *)PTR_DAT_0678fd00;
      plVar8 = (long *)PTR_DAT_0678fcf8;
      do {
        plVar10 = (long *)FUN_053b5a7c(plVar19,iVar3,0);
        if (plVar10 == (long *)0x0) {
System_Runtime_Diagnostics_EtwDiagnosticTrace__get_DefaultEtwProviderId:
          plVar10 = (long *)FUN_053b5a7c(plVar19,iVar3,0);
          if (plVar10 != (long *)0x0) {
            bVar1 = *(byte *)(*plVar8 + 0x130);
            if (((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
                (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == *plVar8)) &&
               ((in_stack_00000028 & 0x100000000) != 0)) {
              plVar10 = (long *)FUN_053b5a7c(plVar19,iVar3,0);
              if (plVar10 != (long *)0x0) {
                bVar1 = *(byte *)(*plVar8 + 0x130);
                if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *plVar8)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60e88(plVar10);
                }
              }
              plVar11 = *(long **)(unaff_x22 + 0x38);
              if (plVar11 == (long *)0x0) goto LAB_05415b58;
              iVar2 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
              if (iVar2 < 1) {
                uVar5 = FUN_054182e0();
                if ((uVar5 & 1) == 0) {
                  if (plVar10 == (long *)0x0) goto LAB_05415b58;
LAB_05414d3c:
                  plVar7 = (long *)FUN_053e1128(plVar10,0);
                  lVar4 = FUN_053e0970(plVar10,0);
                  lVar9 = (**(code **)(*plVar10 + 0x2c8))(plVar10,*(undefined8 *)(*plVar10 + 0x2d0))
                  ;
                  if (lVar9 == 0) goto LAB_05415b58;
                  lVar9 = *(long *)(lVar9 + 0x48);
                  uVar6 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0678fd00);
                  FUN_053eb24c(uVar6,*(undefined8 *)UnityEngine_GUILayoutGroup_var,lVar4,0);
                  if (lVar9 == 0) goto LAB_05415b58;
                  plVar11 = (long *)FUN_053b6184(lVar9,uVar6,0);
                  if (plVar11 == (long *)0x0) {
                    plVar8 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar6 = FUN_053b56cc(plVar10,0);
                    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                    }
                    uVar6 = FUN_0566e328(uVar6,0);
                    if (plVar8 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar8 + 0x518))
                              (plVar8,*(undefined8 *)PTR_DAT_0676b5d0,uVar6,
                               *(undefined8 *)(*plVar8 + 0x520));
                    if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414edc:
                      uVar6 = FUN_0537e8d8(unaff_x29,0);
                      (**(code **)(*plVar8 + 0x558))
                                (plVar8,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                                 *(undefined8 *)PTR_DAT_067900f8,uVar6,
                                 *(undefined8 *)(*plVar8 + 0x560));
                    }
                    else {
                      lVar9 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                      if (lVar9 == 0) goto LAB_05415b58;
                      iVar2 = FUN_053c77c0(lVar9,*(undefined8 *)(unaff_x29 + 0x90),0);
                      if (iVar2 == -3) goto LAB_05414edc;
                    }
                    plVar13 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    lVar9 = (**(code **)(*plVar10 + 0x2c8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x2d0));
                    if (lVar9 == 0) goto LAB_05415b58;
                    uVar6 = FUN_053868f0(lVar9,0);
                    uVar6 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                         uStack0000000000000030,uVar6,0);
                    if (plVar13 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar13 + 0x518))
                              (plVar13,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,
                               uVar6,*(undefined8 *)(*plVar13 + 0x520));
                    (**(code **)(*plVar8 + 0x2d8))(plVar8,plVar13,*(undefined8 *)(*plVar8 + 0x2e0));
                    if (lVar4 == 0) goto LAB_05415b58;
                    if (*(long *)(lVar4 + 0x18) != 0) {
                      plVar13 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                      FUN_04e9624c(plVar13,0);
                      if (0 < *(int *)(lVar4 + 0x18)) {
                        if (plVar13 == (long *)0x0) goto LAB_05415b58;
                        lVar9 = 0;
                        do {
                          FUN_04e97278(plVar13,0,0);
                          uVar21 = (uint)lVar9;
                          if (*(int *)(unaff_x22 + 0x5c) == 2) {
                            plVar12 = (long *)FUN_04e97bc4(plVar13,uStack0000000000000030,0);
                            if (*(uint *)(lVar4 + 0x18) <= uVar21) goto LAB_05415b5c;
                            lVar14 = *(long *)(lVar4 + 0x20 + lVar9 * 8);
                            if ((lVar14 == 0) ||
                               (uVar6 = FUN_05397bec(lVar14,0), plVar12 == (long *)0x0))
                            goto LAB_05415b58;
                          }
                          else {
                            if (*(uint *)(lVar4 + 0x18) <= uVar21) goto LAB_05415b5c;
                            plVar12 = (long *)(lVar4 + (long)(int)uVar21 * 8 + 0x20);
                            if (*plVar12 == 0) goto LAB_05415b58;
                            FUN_05399824(*plVar12,0);
                            FUN_05416194();
                            if (*(uint *)(lVar4 + 0x18) <= uVar21) goto LAB_05415b5c;
                            if (*plVar12 == 0) goto LAB_05415b58;
                            uVar6 = FUN_05399824(*plVar12,0);
                            uVar5 = FUN_04e8cf70(uVar6,0);
                            if ((uVar5 & 1) == 0) {
                              if (*(uint *)(lVar4 + 0x18) <= uVar21) goto LAB_05415b5c;
                              if (*plVar12 == 0) goto LAB_05415b58;
                              plVar20 = *(long **)(unaff_x22 + 0x28);
                              uVar6 = FUN_05399824(*plVar12,0);
                              if (plVar20 == (long *)0x0) goto LAB_05415b58;
                              uVar6 = (**(code **)(*plVar20 + 0x308))
                                                (plVar20,uVar6,*(undefined8 *)(*plVar20 + 0x310));
                              lVar14 = FUN_04e98bb0(plVar13,uVar6,0);
                              if (lVar14 == 0) goto LAB_05415b58;
                              FUN_04e98a58(lVar14,0x3a,0);
                            }
                            if (*(uint *)(lVar4 + 0x18) <= uVar21) goto LAB_05415b5c;
                            if (*plVar12 == 0) goto LAB_05415b58;
                            uVar6 = FUN_05397bec(*plVar12,0);
                            plVar12 = plVar13;
                          }
                          FUN_04e97bc4(plVar12,uVar6,0);
                          if (*(uint *)(lVar4 + 0x18) <= uVar21) goto LAB_05415b5c;
                          plVar20 = (long *)(lVar4 + (long)(int)uVar21 * 8 + 0x20);
                          plVar12 = (long *)*plVar20;
                          if (plVar12 == (long *)0x0) goto LAB_05415b58;
                          iVar2 = (**(code **)(*plVar12 + 0x1d8))
                                            (plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
                          if (iVar2 == 2) {
LAB_054151a8:
                            FUN_04e98e18(plVar13,0,0x40,0);
                          }
                          else {
                            if (*(uint *)(lVar4 + 0x18) <= uVar21) goto LAB_05415b5c;
                            plVar20 = (long *)*plVar20;
                            if (plVar20 == (long *)0x0) goto LAB_05415b58;
                            iVar2 = (**(code **)(*plVar20 + 0x1d8))
                                              (plVar20,*(undefined8 *)(*plVar20 + 0x1e0));
                            if (iVar2 == 4) goto LAB_054151a8;
                          }
                          plVar12 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                          uVar6 = (**(code **)(*plVar13 + 0x168))
                                            (plVar13,*(undefined8 *)(*plVar13 + 0x170));
                          if (plVar12 == (long *)0x0) goto LAB_05415b58;
                          (**(code **)(*plVar12 + 0x518))
                                    (plVar12,*(undefined8 *)
                                              UnityEngine_InputSystem_GravitySensor_var,uVar6,
                                     *(undefined8 *)(*plVar12 + 0x520));
                          (**(code **)(*plVar8 + 0x2d8))
                                    (plVar8,plVar12,*(undefined8 *)(*plVar8 + 0x2e0));
                          lVar9 = lVar9 + 1;
                        } while ((int)lVar9 < *(int *)(lVar4 + 0x18));
                      }
                    }
                    plVar13 = *(long **)(unaff_x22 + 0x78);
                    if (plVar13 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar13 + 0x298))
                              (plVar13,plVar8,*(undefined8 *)(unaff_x22 + 0x80),
                               *(undefined8 *)(*plVar13 + 0x2a0));
                    plVar8 = (long *)PTR_DAT_0678fcf8;
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
                  plVar13 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar6 = FUN_053b56cc(plVar10,0);
                  if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                  }
                  uVar6 = FUN_0566e328(uVar6,0);
                  if (plVar13 == (long *)0x0) goto LAB_05415b58;
                  (**(code **)(*plVar13 + 0x518))
                            (plVar13,*(undefined8 *)PTR_DAT_0676b5d0,uVar6,
                             *(undefined8 *)(*plVar13 + 0x520));
                  if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05415360:
                    lVar4 = (**(code **)(*plVar10 + 0x1b8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
                    if (lVar4 == 0) goto LAB_05415b58;
                    uVar6 = FUN_0537e8d8(lVar4,0);
                    (**(code **)(*plVar13 + 0x558))
                              (plVar13,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                               *(undefined8 *)PTR_DAT_067900f8,uVar6,
                               *(undefined8 *)(*plVar13 + 0x560));
                  }
                  else {
                    lVar9 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                    lVar4 = (**(code **)(*plVar10 + 0x2c8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x2d0));
                    if ((lVar4 == 0) || (lVar9 == 0)) goto LAB_05415b58;
                    iVar2 = FUN_053c77c0(lVar9,*(undefined8 *)(lVar4 + 0x90),0);
                    if (iVar2 == -3) goto LAB_05415360;
                  }
                  plVar12 = plVar10;
                  if (plVar11 != (long *)0x0) {
                    plVar12 = plVar11;
                  }
                  uVar6 = FUN_053b56cc(plVar12,0);
                  if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                  }
                  uVar6 = FUN_0566e328(uVar6,0);
                  (**(code **)(*plVar13 + 0x518))
                            (plVar13,*(undefined8 *)PTR_DAT_06790b00,uVar6,
                             *(undefined8 *)(*plVar13 + 0x520));
                  lVar4 = plVar10[6];
                  uVar6 = *(undefined8 *)PTR_DAT_06791188;
                  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar6 = FUN_05015c2c(uVar6,0);
                  FUN_0540ade0(lVar4,plVar13,uVar6);
                  uVar6 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180))
                  ;
                  uVar22 = FUN_053b56cc(plVar10,0);
                  uVar5 = FUN_04e8c024(uVar6,uVar22,0);
                  if ((uVar5 & 1) != 0) {
                    uVar6 = (**(code **)(*plVar10 + 0x178))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                    (**(code **)(*plVar13 + 0x558))
                              (plVar13,*(undefined8 *)
                                        Unity_VisualScripting_DoNotSerializeAttribute_var,
                               *(undefined8 *)PTR_DAT_067900f8,uVar6,
                               *(undefined8 *)(*plVar13 + 0x560));
                  }
                  if (plVar7 == (long *)0x0) {
                    lVar4 = *plVar13;
                    uVar22 = *(undefined8 *)Firebase_Firestore_DocumentReference_var;
                    uVar16 = *(undefined8 *)PTR_DAT_067900f8;
                    uVar17 = *(undefined8 *)(lVar4 + 0x560);
                    uVar6 = *(undefined8 *)PTR_DAT_06771b30;
LAB_0541562c:
                    (**(code **)(lVar4 + 0x558))(plVar13,uVar22,uVar16,uVar6,uVar17);
                  }
                  else {
                    uVar5 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
                    if ((uVar5 & 1) != 0) {
                      (**(code **)(*plVar13 + 0x558))
                                (plVar13,*(undefined8 *)
                                          System_Runtime_CompilerServices_DecimalConstantAttribute_var
                                 ,*(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                                 *(undefined8 *)(*plVar13 + 0x560));
                    }
                    lVar4 = plVar7[3];
                    uVar6 = *(undefined8 *)
                             UnityEngine_XR_ARFoundation_ARTrackedObjectsChangedEventArgs_var;
                    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar6 = FUN_05015c2c(uVar6,0);
                    FUN_0540ade0(lVar4,plVar13,uVar6);
                    uVar6 = (**(code **)(*plVar10 + 0x178))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                    uVar22 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0))
                    ;
                    uVar5 = FUN_04e8c024(uVar6,uVar22,0);
                    if ((uVar5 & 1) != 0) {
                      uVar6 = (**(code **)(*plVar7 + 0x1c8))
                                        (plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
                      if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                      }
                      uVar6 = FUN_0566e328(uVar6,0);
                      lVar4 = *plVar13;
                      uVar22 = *(undefined8 *)System_Runtime_InteropServices_DllImportAttribute_var;
                      uVar17 = *(undefined8 *)(lVar4 + 0x560);
                      uVar16 = *(undefined8 *)PTR_DAT_067900f8;
                      goto LAB_0541562c;
                    }
                  }
                  plVar7 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                  uVar6 = FUN_053868f0(unaff_x29,0);
                  uVar6 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                       uStack0000000000000030,uVar6,0);
                  if (plVar7 == (long *)0x0) goto LAB_05415b58;
                  (**(code **)(*plVar7 + 0x518))
                            (plVar7,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar6,
                             *(undefined8 *)(*plVar7 + 0x520));
                  (**(code **)(*plVar13 + 0x2d8))(plVar13,plVar7,*(undefined8 *)(*plVar13 + 0x2e0));
                  iVar2 = (**(code **)(*plVar10 + 0x278))(plVar10,*(undefined8 *)(*plVar10 + 0x280))
                  ;
                  if (iVar2 != 0) {
                    (**(code **)(*plVar10 + 0x278))(plVar10,*(undefined8 *)(*plVar10 + 0x280));
                    uVar6 = FUN_05417bfc();
                    (**(code **)(*plVar13 + 0x558))
                              (plVar13,*(undefined8 *)UnityEngine_UIElements_DragAndDropArgs_var,
                               *(undefined8 *)PTR_DAT_067900f8,uVar6,
                               *(undefined8 *)(*plVar13 + 0x560));
                  }
                  iVar2 = (**(code **)(*plVar10 + 0x2d8))(plVar10,*(undefined8 *)(*plVar10 + 0x2e0))
                  ;
                  if (iVar2 != 1) {
                    (**(code **)(*plVar10 + 0x2d8))(plVar10,*(undefined8 *)(*plVar10 + 0x2e0));
                    uVar6 = FUN_05417c6c();
                    (**(code **)(*plVar13 + 0x558))
                              (plVar13,*(undefined8 *)
                                        UnityEngine_InputSystem_Controls_DoubleControl_var,
                               *(undefined8 *)PTR_DAT_067900f8,uVar6,
                               *(undefined8 *)(*plVar13 + 0x560));
                  }
                  iVar2 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0))
                  ;
                  if (iVar2 != 1) {
                    (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
                    uVar6 = FUN_05417c6c();
                    (**(code **)(*plVar13 + 0x558))
                              (plVar13,*(undefined8 *)
                                        UnityEngine_InputSystem_Controls_DpadControl_var,
                               *(undefined8 *)PTR_DAT_067900f8,uVar6,
                               *(undefined8 *)(*plVar13 + 0x560));
                  }
                  lVar4 = (**(code **)(*plVar10 + 0x268))(plVar10,*(undefined8 *)(*plVar10 + 0x270))
                  ;
                  if (lVar4 == 0) goto LAB_05415b58;
                  if (*(long *)(lVar4 + 0x18) != 0) {
                    plVar7 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                    FUN_04e9624c(plVar7,0);
                    if (0 < *(int *)(lVar4 + 0x18)) {
                      if (plVar7 == (long *)0x0) goto LAB_05415b58;
                      lVar9 = 0;
                      do {
                        FUN_04e97278(plVar7,0,0);
                        uVar21 = (uint)lVar9;
                        if (*(int *)(unaff_x22 + 0x5c) == 2) {
                          lVar14 = FUN_04e97bc4(plVar7,uStack0000000000000030,0);
                          if (*(uint *)(lVar4 + 0x18) <= uVar21) goto LAB_05415b5c;
                          lVar15 = *(long *)(lVar4 + 0x20 + lVar9 * 8);
                          if ((lVar15 == 0) || (uVar6 = FUN_05397bec(lVar15,0), lVar14 == 0))
                          goto LAB_05415b58;
                          FUN_04e97bc4(lVar14,uVar6,0);
                        }
                        else {
                          if (*(uint *)(lVar4 + 0x18) <= uVar21) goto LAB_05415b5c;
                          plVar8 = (long *)(lVar4 + (long)(int)uVar21 * 8 + 0x20);
                          if (*plVar8 == 0) goto LAB_05415b58;
                          FUN_05399824(*plVar8,0);
                          FUN_05416194();
                          if (*(uint *)(lVar4 + 0x18) <= uVar21) goto LAB_05415b5c;
                          if (*plVar8 == 0) goto LAB_05415b58;
                          uVar6 = FUN_05399824(*plVar8,0);
                          uVar5 = FUN_04e8cf70(uVar6,0);
                          if ((uVar5 & 1) == 0) {
                            if (*(uint *)(lVar4 + 0x18) <= uVar21) goto LAB_05415b5c;
                            if (*plVar8 == 0) goto LAB_05415b58;
                            plVar10 = *(long **)(unaff_x22 + 0x28);
                            uVar6 = FUN_05399824(*plVar8,0);
                            if (plVar10 == (long *)0x0) goto LAB_05415b58;
                            uVar6 = (**(code **)(*plVar10 + 0x308))
                                              (plVar10,uVar6,*(undefined8 *)(*plVar10 + 0x310));
                            lVar14 = FUN_04e98bb0(plVar7,uVar6,0);
                            if (lVar14 == 0) goto LAB_05415b58;
                            FUN_04e98a58(lVar14,0x3a,0);
                          }
                          if (*(uint *)(lVar4 + 0x18) <= uVar21) goto LAB_05415b5c;
                          if (*plVar8 == 0) goto LAB_05415b58;
                          uVar6 = FUN_05397bec(*plVar8,0);
                          FUN_04e97bc4(plVar7,uVar6,0);
                          plVar8 = (long *)PTR_DAT_0678fcf8;
                        }
                        if (*(uint *)(lVar4 + 0x18) <= uVar21) goto LAB_05415b5c;
                        plVar11 = (long *)(lVar4 + (long)(int)uVar21 * 8 + 0x20);
                        plVar10 = (long *)*plVar11;
                        if (plVar10 == (long *)0x0) goto LAB_05415b58;
                        iVar2 = (**(code **)(*plVar10 + 0x1d8))
                                          (plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
                        if (iVar2 == 2) {
LAB_054159fc:
                          FUN_04e98e18(plVar7,0,0x40,0);
                        }
                        else {
                          if (*(uint *)(lVar4 + 0x18) <= uVar21) goto LAB_05415b5c;
                          plVar11 = (long *)*plVar11;
                          if (plVar11 == (long *)0x0) goto LAB_05415b58;
                          iVar2 = (**(code **)(*plVar11 + 0x1d8))
                                            (plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
                          if (iVar2 == 4) goto LAB_054159fc;
                        }
                        plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                        uVar6 = (**(code **)(*plVar7 + 0x168))
                                          (plVar7,*(undefined8 *)(*plVar7 + 0x170));
                        if (plVar10 == (long *)0x0) goto LAB_05415b58;
                        (**(code **)(*plVar10 + 0x518))
                                  (plVar10,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,
                                   uVar6,*(undefined8 *)(*plVar10 + 0x520));
                        (**(code **)(*plVar13 + 0x2d8))
                                  (plVar13,plVar10,*(undefined8 *)(*plVar13 + 0x2e0));
                        lVar9 = lVar9 + 1;
                      } while ((int)lVar9 < *(int *)(lVar4 + 0x18));
                    }
                  }
                  plVar7 = *(long **)(unaff_x22 + 0x78);
                  if (plVar7 == (long *)0x0) goto LAB_05415b58;
                  (**(code **)(*plVar7 + 0x2a8))
                            (plVar7,plVar13,*(undefined8 *)(unaff_x22 + 0x80),
                             *(undefined8 *)(*plVar7 + 0x2b0));
                  plVar7 = (long *)PTR_DAT_0678fd00;
                }
              }
              else {
                if (plVar10 == (long *)0x0) goto LAB_05415b58;
                plVar7 = *(long **)(unaff_x22 + 0x38);
                uVar6 = (**(code **)(*plVar10 + 0x2c8))(plVar10,*(undefined8 *)(*plVar10 + 0x2d0));
                if (plVar7 == (long *)0x0) goto LAB_05415b58;
                uVar5 = (**(code **)(*plVar7 + 0x348))
                                  (plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x350));
                plVar7 = (long *)PTR_DAT_0678fd00;
                if ((uVar5 & 1) != 0) {
                  plVar7 = *(long **)(unaff_x22 + 0x38);
                  uVar6 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0))
                  ;
                  if (plVar7 == (long *)0x0) goto LAB_05415b58;
                  uVar5 = (**(code **)(*plVar7 + 0x348))
                                    (plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x350));
                  plVar7 = (long *)PTR_DAT_0678fd00;
                  if (((uVar5 & 1) != 0) && (uVar5 = FUN_054182e0(), (uVar5 & 1) == 0))
                  goto LAB_05414d3c;
                }
              }
            }
          }
        }
        else {
          bVar1 = *(byte *)(*plVar7 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *plVar7))
          goto System_Runtime_Diagnostics_EtwDiagnosticTrace__get_DefaultEtwProviderId;
          plVar10 = (long *)FUN_053b5a7c(plVar19,iVar3,0);
          if (plVar10 == (long *)0x0) {
            uVar5 = FUN_054182e0();
            if ((uVar5 & 1) == 0) goto LAB_05415b58;
          }
          else {
            bVar1 = *(byte *)(*plVar7 + 0x130);
            if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *plVar7)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60e88(plVar10);
            }
            uVar5 = FUN_054182e0();
            if ((uVar5 & 1) == 0) {
              lVar4 = plVar10[7];
              plVar7 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              if (*(long *)(unaff_x22 + 0x30) == 0) {
LAB_05414860:
                uVar6 = FUN_0537e8d8(unaff_x29,0);
                if (plVar7 == (long *)0x0) goto LAB_05415b58;
                (**(code **)(*plVar7 + 0x558))
                          (plVar7,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                           *(undefined8 *)PTR_DAT_067900f8,uVar6,*(undefined8 *)(*plVar7 + 0x560));
              }
              else {
                lVar9 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x28);
                if (lVar9 == 0) goto LAB_05415b58;
                iVar2 = FUN_053c77c0(lVar9,*(undefined8 *)(unaff_x29 + 0x90),0);
                if (iVar2 == -3) goto LAB_05414860;
              }
              uVar6 = FUN_053b56cc(plVar10,0);
              if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
              }
              uVar6 = FUN_0566e328(uVar6,0);
              if (plVar7 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar7 + 0x518))
                        (plVar7,*(undefined8 *)PTR_DAT_0676b5d0,uVar6,
                         *(undefined8 *)(*plVar7 + 0x520));
              uVar6 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
              uVar22 = FUN_053b56cc(plVar10,0);
              uVar5 = FUN_04e8c024(uVar6,uVar22,0);
              if ((uVar5 & 1) != 0) {
                uVar6 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
                (**(code **)(*plVar7 + 0x558))
                          (plVar7,*(undefined8 *)Unity_VisualScripting_DoNotSerializeAttribute_var,
                           *(undefined8 *)PTR_DAT_067900f8,uVar6,*(undefined8 *)(*plVar7 + 0x560));
              }
              FUN_0540ade0(plVar10[6],plVar7,0);
              plVar8 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
              uVar6 = FUN_053868f0(unaff_x29,0);
              uVar6 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                   uStack0000000000000030,uVar6,0);
              if (plVar8 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar8 + 0x518))
                        (plVar8,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar6,
                         *(undefined8 *)(*plVar8 + 0x520));
              (**(code **)(*plVar7 + 0x2d8))(plVar7,plVar8,*(undefined8 *)(*plVar7 + 0x2e0));
              uVar5 = System_Runtime_Serialization_XmlObjectSerializerContext__get_IgnoreExtensionDataObject
                                (plVar10,0);
              if ((uVar5 & 1) != 0) {
                (**(code **)(*plVar7 + 0x558))
                          (plVar7,*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_var,
                           *(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                           *(undefined8 *)(*plVar7 + 0x560));
              }
              if (lVar4 == 0) goto LAB_05415b58;
              if (*(long *)(lVar4 + 0x18) != 0) {
                plVar8 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                FUN_04e9624c(plVar8,0);
                if (0 < *(int *)(lVar4 + 0x18)) {
                  if (plVar8 == (long *)0x0) goto LAB_05415b58;
                  lVar9 = 0;
                  do {
                    FUN_04e97278(plVar8,0,0);
                    uVar21 = (uint)lVar9;
                    if (*(int *)(unaff_x22 + 0x5c) == 2) {
                      plVar10 = (long *)FUN_04e97bc4(plVar8,uStack0000000000000030,0);
                      if (*(uint *)(lVar4 + 0x18) <= uVar21) goto LAB_05415b5c;
                      lVar14 = *(long *)(lVar4 + 0x20 + lVar9 * 8);
                      if ((lVar14 == 0) || (uVar6 = FUN_05397bec(lVar14,0), plVar10 == (long *)0x0))
                      goto LAB_05415b58;
                    }
                    else {
                      if (*(uint *)(lVar4 + 0x18) <= uVar21) goto LAB_05415b5c;
                      plVar10 = (long *)(lVar4 + (long)(int)uVar21 * 8 + 0x20);
                      if (*plVar10 == 0) goto LAB_05415b58;
                      FUN_05399824(*plVar10,0);
                      FUN_05416194();
                      if (*(uint *)(lVar4 + 0x18) <= uVar21) goto LAB_05415b5c;
                      if (*plVar10 == 0) goto LAB_05415b58;
                      uVar6 = FUN_05399824(*plVar10,0);
                      uVar5 = FUN_04e8cf70(uVar6,0);
                      if ((uVar5 & 1) == 0) {
                        if (*(uint *)(lVar4 + 0x18) <= uVar21) {
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
                        lVar14 = FUN_04e98bb0(plVar8,uVar6,0);
                        if (lVar14 == 0) goto LAB_05415b58;
                        FUN_04e98a58(lVar14,0x3a,0);
                      }
                      if (*(uint *)(lVar4 + 0x18) <= uVar21) goto LAB_05415b5c;
                      if (*plVar10 == 0) goto LAB_05415b58;
                      uVar6 = FUN_05397bec(*plVar10,0);
                      plVar10 = plVar8;
                    }
                    FUN_04e97bc4(plVar10,uVar6,0);
                    if (*(uint *)(lVar4 + 0x18) <= uVar21) goto LAB_05415b5c;
                    plVar11 = (long *)(lVar4 + (long)(int)uVar21 * 8 + 0x20);
                    plVar10 = (long *)*plVar11;
                    if (plVar10 == (long *)0x0) goto LAB_05415b58;
                    iVar2 = (**(code **)(*plVar10 + 0x1d8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
                    if (iVar2 == 2) {
LAB_05414c38:
                      FUN_04e98e18(plVar8,0,0x40,0);
                    }
                    else {
                      if (*(uint *)(lVar4 + 0x18) <= uVar21) goto LAB_05415b5c;
                      plVar11 = (long *)*plVar11;
                      if (plVar11 == (long *)0x0) goto LAB_05415b58;
                      iVar2 = (**(code **)(*plVar11 + 0x1d8))
                                        (plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
                      if (iVar2 == 4) goto LAB_05414c38;
                    }
                    plVar10 = (long *)(**(code **)(*unaff_x21 + 0x5f8))();
                    uVar6 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
                    if (plVar10 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar10 + 0x518))
                              (plVar10,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,
                               uVar6,*(undefined8 *)(*plVar10 + 0x520));
                    (**(code **)(*plVar7 + 0x2d8))(plVar7,plVar10,*(undefined8 *)(*plVar7 + 0x2e0));
                    lVar9 = lVar9 + 1;
                  } while ((int)lVar9 < *(int *)(lVar4 + 0x18));
                }
              }
              plVar8 = *(long **)(unaff_x22 + 0x78);
              if (plVar8 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar8 + 0x298))
                        (plVar8,plVar7,*(undefined8 *)(unaff_x22 + 0x80),
                         *(undefined8 *)(*plVar8 + 0x2a0));
              plVar7 = (long *)PTR_DAT_0678fd00;
              plVar8 = (long *)PTR_DAT_0678fcf8;
            }
          }
        }
        iVar3 = iVar3 + 1;
        iVar2 = (**(code **)(*plVar19 + 0x1c8))(plVar19,*(undefined8 *)(*plVar19 + 0x1d0));
      } while (iVar3 < iVar2);
    }
    FUN_0540ade0(*(undefined8 *)(unaff_x29 + 0x88),in_stack_00000018,0);
    return in_stack_00000018;
  }
LAB_05415b58:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


