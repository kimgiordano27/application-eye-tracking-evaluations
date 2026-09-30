/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 04785f48
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array__Empty<OVRPlugin_Qpl_Annotation>(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 *unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 *unaff_x22;
  long lVar11;
  long unaff_x23;
  undefined8 unaff_d8;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  
  uVar4 = (**(code **)(param_1 + 0x2b8))();
  if ((uVar4 & 1) == 0) {
    in_stack_00000008 = unaff_d8;
    plVar6 = (long *)thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20),
                                        &stack0x00000008);
    if (plVar6 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_08486738 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_08486738))
      goto LAB_04785f60;
    }
  }
  else {
LAB_04785f60:
    uVar10 = **(undefined8 **)(unaff_x20 + 0x38);
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar10 = FUN_0675ff58(uVar10,0);
    uVar5 = FUN_0675ff58(*unaff_x22,0);
    uVar4 = FUN_067690d8(uVar10,uVar5,0);
    if ((uVar4 & 1) != 0) {
      in_stack_00000008 = unaff_d8;
      plVar6 = (long *)thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20),
                                          &stack0x00000008);
      lVar9 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03ac4090(lVar9);
      }
      if (plVar6 == (long *)0x0) goto LAB_04786210;
      if (*(long *)(*plVar6 + 0x40) != *(long *)(lVar9 + 0x40)) goto LAB_04786220;
      puVar7 = (undefined1 *)thunk_FUN_03ac7604(plVar6);
      uVar3 = 1;
      *unaff_x19 = *puVar7;
      goto LAB_047861f0;
    }
  }
  puVar2 = PTR_DAT_084914e0;
  if (*(int *)(*(long *)PTR_DAT_084914e0 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x18);
  if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar10 = FUN_0675ff58(uVar10,0);
  uVar5 = FUN_0675ff58(*unaff_x22,0);
  if (*(int *)(*(long *)PTR_DAT_084935c8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)PTR_DAT_084935c8);
  }
  uVar4 = FUN_07d3734c(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar10,uVar5,&stack0x00000010,0);
  lVar9 = in_stack_00000010;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    *unaff_x19 = 0;
LAB_047861f0:
    return uVar3 & 1;
  }
  lVar11 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_03ac4090(lVar11);
  }
  if (lVar9 != 0) {
    lVar8 = thunk_FUN_03ac73c0(lVar9,lVar11);
    if (lVar8 != 0) {
      lVar11 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03ac4090(lVar11);
      }
      lVar8 = thunk_FUN_03ac73c0(lVar9,lVar11);
      if (lVar8 != 0) {
        plVar6 = (long *)(**(code **)(lVar8 + 0x18))
                                   (*(undefined8 *)(lVar8 + 0x40),&stack0x00000018,
                                    *(undefined8 *)(lVar8 + 0x28));
        lVar9 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_03ac4090(lVar9);
        }
        if (plVar6 != (long *)0x0) {
          if (*(long *)(*plVar6 + 0x40) != *(long *)(lVar9 + 0x40)) {
LAB_04786220:
                    /* WARNING: Subroutine does not return */
            FUN_03a8ad40(plVar6);
          }
          puVar7 = (undefined1 *)thunk_FUN_03ac7604(plVar6);
          puVar2 = PTR_DAT_08486738;
          *unaff_x19 = *puVar7;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar3 = FUN_07ca21f0(plVar6,0);
          goto LAB_047861f0;
        }
        goto LAB_04786210;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8ad40(lVar9,lVar11);
  }
LAB_04786210:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


