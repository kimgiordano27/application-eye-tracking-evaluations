/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04785264
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array__Empty<OVRPlugin_SpaceQueryResult>(undefined2 *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 unaff_d8;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_03a8a718(PTR_DAT_084935c8);
    FUN_03a8a718(PTR_DAT_08491518);
    FUN_03a8a718(PTR_DAT_08486738);
    FUN_03a8a718(PTR_DAT_084914e0);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_03ac40ec(param_2);
    }
  }
  puVar4 = PTR_DAT_08491518;
  puVar2 = PTR_DAT_08486760;
  in_stack_00000010 = 0;
  uVar12 = *(undefined8 *)PTR_DAT_08491518;
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  plVar6 = (long *)FUN_0675ff58(uVar12,0);
  uVar12 = FUN_0675ff58(**(undefined8 **)(param_2 + 0x38),0);
  if (plVar6 == (long *)0x0) goto LAB_04785628;
  uVar7 = (**(code **)(*plVar6 + 0x2b8))(plVar6,uVar12,*(undefined8 *)(*plVar6 + 0x2c0));
  if ((uVar7 & 1) != 0) {
    uVar12 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    plVar6 = (long *)FUN_0675ff58(uVar12,0);
    uVar12 = FUN_0675ff58(*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18),0);
    if (plVar6 == (long *)0x0) goto LAB_04785628;
    uVar7 = (**(code **)(*plVar6 + 0x2b8))(plVar6,uVar12,*(undefined8 *)(*plVar6 + 0x2c0));
    if ((uVar7 & 1) == 0) {
      in_stack_00000008 = unaff_d8;
      plVar6 = (long *)thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x20),
                                          &stack0x00000008);
      if (plVar6 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_08486738 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_08486738
           )) goto LAB_04785378;
      }
    }
    else {
LAB_04785378:
      uVar12 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar12 = FUN_0675ff58(uVar12,0);
      uVar8 = FUN_0675ff58(*(undefined8 *)puVar4,0);
      uVar7 = FUN_067690d8(uVar12,uVar8,0);
      if ((uVar7 & 1) != 0) {
        in_stack_00000008 = unaff_d8;
        plVar6 = (long *)thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x20),
                                            &stack0x00000008);
        lVar11 = *(long *)(*(long *)(param_2 + 0x38) + 0x10);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_03ac4090(lVar11);
        }
        if (plVar6 == (long *)0x0) goto LAB_04785628;
        if (*(long *)(*plVar6 + 0x40) != *(long *)(lVar11 + 0x40)) goto LAB_04785638;
        puVar9 = (undefined2 *)thunk_FUN_03ac7604(plVar6);
        uVar5 = 1;
        *param_1 = *puVar9;
        goto LAB_04785608;
      }
    }
    puVar3 = PTR_DAT_084914e0;
    if (*(int *)(*(long *)PTR_DAT_084914e0 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar12 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar12 = FUN_0675ff58(uVar12,0);
    uVar8 = FUN_0675ff58(*(undefined8 *)puVar4,0);
    if (*(int *)(*(long *)PTR_DAT_084935c8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_084935c8);
    }
    uVar7 = FUN_07d3734c(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar12,uVar8,&stack0x00000010,0);
    lVar11 = in_stack_00000010;
    if ((uVar7 & 1) != 0) {
      lVar13 = *(long *)(*(long *)(param_2 + 0x38) + 0x28);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03ac4090(lVar13);
      }
      if (lVar11 == 0) {
LAB_04785628:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar10 = thunk_FUN_03ac73c0(lVar11,lVar13);
      if (lVar10 == 0) {
LAB_0478562c:
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(lVar11,lVar13);
      }
      lVar13 = *(long *)(*(long *)(param_2 + 0x38) + 0x28);
      if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_03ac4090(lVar13);
      }
      lVar10 = thunk_FUN_03ac73c0(lVar11,lVar13);
      if (lVar10 == 0) goto LAB_0478562c;
      plVar6 = (long *)(**(code **)(lVar10 + 0x18))
                                 (*(undefined8 *)(lVar10 + 0x40),&stack0x00000018,
                                  *(undefined8 *)(lVar10 + 0x28));
      lVar11 = *(long *)(*(long *)(param_2 + 0x38) + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03ac4090(lVar11);
      }
      if (plVar6 == (long *)0x0) goto LAB_04785628;
      if (*(long *)(*plVar6 + 0x40) != *(long *)(lVar11 + 0x40)) {
LAB_04785638:
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(plVar6);
      }
      puVar9 = (undefined2 *)thunk_FUN_03ac7604(plVar6);
      puVar2 = PTR_DAT_08486738;
      *param_1 = *puVar9;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar5 = FUN_07ca21f0(plVar6,0);
      goto LAB_04785608;
    }
  }
  uVar5 = 0;
  *param_1 = 0;
LAB_04785608:
  return uVar5 & 1;
}


