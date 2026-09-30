/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.DepthProviderOpenXR$$Meta.XR.EnvironmentDepth.IDepthProvider.set_RemoveHands
ENTRY_POINT: 04d04424
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentDepth_DepthProviderOpenXR__Meta_XR_EnvironmentDepth_IDepthProvider_set_RemoveHands
               (ulong param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x23;
  undefined8 *unaff_x24;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0676c3d8);
    FUN_02d6084c(PTR_DAT_0676c3e0);
    FUN_02d6084c(PTR_DAT_0676c3e8);
    FUN_02d6084c(PTR_DAT_0676c3f0);
    FUN_02d6084c(PTR_DAT_0676c3c0);
    FUN_02d6084c(PTR_DAT_0676c3f8);
    FUN_02d6084c(PTR_DAT_067616e8);
    FUN_02d6084c(PTR_DAT_06763e10);
    FUN_02d6084c(PTR_DAT_0676c400);
    *(undefined1 *)(unaff_x23 + 0xd88) = 1;
  }
  uVar4 = thunk_FUN_02d9d534(*unaff_x24);
  FUN_0504920c(uVar4,0);
  *(undefined8 *)(param_2 + 0x28) = uVar4;
  thunk_FUN_02dd37b4((undefined8 *)(param_2 + 0x28),uVar4);
  FUN_04f28754(param_2,0);
  puVar2 = PTR_DAT_0676c3f8;
  puVar1 = PTR_DAT_067616e8;
  if (param_3 == 0) {
    thunk_FUN_02dc61f4(PTR_DAT_06764070);
    uVar4 = thunk_FUN_02d9d534();
    uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0676c3c8);
    FUN_04f77010(uVar4,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar4,param_5);
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  *(long *)(param_2 + 0x10) = param_3;
  thunk_FUN_02dd37b4((long *)(param_2 + 0x10),param_3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar4 = FUN_04fda94c(param_3,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar2);
  }
  uVar4 = FUN_04fb7344(uVar4,0);
  *(undefined8 *)(param_2 + 0x18) = uVar4;
  thunk_FUN_02dd37b4();
  puVar1 = PTR_DAT_0676c3c0;
  if (param_4 == 0) {
    if (*(int *)(*(long *)PTR_DAT_0676c3c0 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (DAT_06b77dac == '\0') {
      FUN_02d6084c(PTR_DAT_0676c3c0);
      DAT_06b77dac = '\x01';
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar5 = *(long *)puVar1;
    }
    param_4 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  }
  puVar1 = PTR_DAT_0676c3e8;
  *(long *)(param_2 + 0x20) = param_4;
  thunk_FUN_02dd37b4((long *)(param_2 + 0x20),param_4);
  lVar5 = FUN_04d04990(param_2,*(undefined8 *)(param_2 + 0x18),0,
                       *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8));
  *(long *)(param_2 + 0x38) = lVar5;
  if (lVar5 == 0) {
    *(undefined1 *)(param_2 + 0x40) = 1;
  }
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
  thunk_FUN_02dd37b4();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar8 = *(long *)PTR_DAT_0676c3e0;
  lVar5 = *(long *)(lVar8 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02d9a2e0();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02d9a2e0();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar5 = *(long *)(lVar8 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02d9a2e0();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02d9a2e0();
  }
  plVar6 = (long *)**(long **)(lVar5 + 0xb8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar4 = (**(code **)(*plVar6 + 0x178))(plVar6,0x1000,*(undefined8 *)(*plVar6 + 0x180));
  *(undefined8 *)(param_2 + 0x68) = uVar4;
  thunk_FUN_02dd37b4();
  if (*(int *)(*(long *)PTR_DAT_0676c400 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  iVar3 = SystemNative_GetReadDirRBufferSize(0);
  if (iVar3 < 1) {
    uVar4 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_0676c3f0 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar8 = *(long *)PTR_DAT_0676c3d8;
    lVar5 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d9a2e0();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d9a2e0();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar5 = *(long *)(lVar8 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d9a2e0();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d9a2e0();
    }
    plVar6 = (long *)**(long **)(lVar5 + 0xb8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar4 = (**(code **)(*plVar6 + 0x178))(plVar6,iVar3,*(undefined8 *)(*plVar6 + 0x180));
  }
  *(undefined8 *)(param_2 + 0x70) = uVar4;
  thunk_FUN_02dd37b4();
  return;
}


