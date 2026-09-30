/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Vector2f>
ENTRY_POINT: 047852c8
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


uint System_Array__Empty<OVRPlugin_Vector2f>(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  long lVar8;
  long lVar9;
  undefined2 *unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 *unaff_x22;
  long lVar11;
  long unaff_x23;
  undefined8 unaff_d8;
  undefined8 in_stack_00000008;
  long lStack0000000000000010;
  
  lStack0000000000000010 = 0;
  uVar10 = *unaff_x22;
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  plVar4 = (long *)FUN_0675ff58(uVar10,0);
  uVar10 = FUN_0675ff58(**(undefined8 **)(unaff_x20 + 0x38),0);
  if (plVar4 == (long *)0x0) goto LAB_04785628;
  uVar5 = (**(code **)(*plVar4 + 0x2b8))(plVar4,uVar10,*(undefined8 *)(*plVar4 + 0x2c0));
  if ((uVar5 & 1) != 0) {
    uVar10 = *unaff_x22;
    if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    plVar4 = (long *)FUN_0675ff58(uVar10,0);
    uVar10 = FUN_0675ff58(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x18),0);
    if (plVar4 == (long *)0x0) goto LAB_04785628;
    uVar5 = (**(code **)(*plVar4 + 0x2b8))(plVar4,uVar10,*(undefined8 *)(*plVar4 + 0x2c0));
    if ((uVar5 & 1) == 0) {
      in_stack_00000008 = unaff_d8;
      plVar4 = (long *)thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20),
                                          &stack0x00000008);
      if (plVar4 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_08486738 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_08486738
           )) goto LAB_04785378;
      }
    }
    else {
LAB_04785378:
      uVar10 = **(undefined8 **)(unaff_x20 + 0x38);
      if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_0675ff58(uVar10,0);
      uVar6 = FUN_0675ff58(*unaff_x22,0);
      uVar5 = FUN_067690d8(uVar10,uVar6,0);
      if ((uVar5 & 1) != 0) {
        in_stack_00000008 = unaff_d8;
        plVar4 = (long *)thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x20),
                                            &stack0x00000008);
        lVar9 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_03ac4090(lVar9);
        }
        if (plVar4 == (long *)0x0) goto LAB_04785628;
        if (*(long *)(*plVar4 + 0x40) != *(long *)(lVar9 + 0x40)) goto LAB_04785638;
        puVar7 = (undefined2 *)thunk_FUN_03ac7604(plVar4);
        uVar3 = 1;
        *unaff_x19 = *puVar7;
        goto LAB_04785608;
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
    uVar6 = FUN_0675ff58(*unaff_x22,0);
    if (*(int *)(*(long *)PTR_DAT_084935c8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_084935c8);
    }
    uVar5 = FUN_07d3734c(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar10,uVar6,&stack0x00000010,0);
    lVar9 = lStack0000000000000010;
    if ((uVar5 & 1) != 0) {
      lVar11 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03ac4090(lVar11);
      }
      if (lVar9 == 0) {
LAB_04785628:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar8 = thunk_FUN_03ac73c0(lVar9,lVar11);
      if (lVar8 == 0) {
LAB_0478562c:
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(lVar9,lVar11);
      }
      lVar11 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03ac4090(lVar11);
      }
      lVar8 = thunk_FUN_03ac73c0(lVar9,lVar11);
      if (lVar8 == 0) goto LAB_0478562c;
      plVar4 = (long *)(**(code **)(lVar8 + 0x18))
                                 (*(undefined8 *)(lVar8 + 0x40),&stack0x00000018,
                                  *(undefined8 *)(lVar8 + 0x28));
      lVar9 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03ac4090(lVar9);
      }
      if (plVar4 == (long *)0x0) goto LAB_04785628;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(lVar9 + 0x40)) {
LAB_04785638:
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(plVar4);
      }
      puVar7 = (undefined2 *)thunk_FUN_03ac7604(plVar4);
      puVar2 = PTR_DAT_08486738;
      *unaff_x19 = *puVar7;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar3 = FUN_07ca21f0(plVar4,0);
      goto LAB_04785608;
    }
  }
  uVar3 = 0;
  *unaff_x19 = 0;
LAB_04785608:
  return uVar3 & 1;
}


