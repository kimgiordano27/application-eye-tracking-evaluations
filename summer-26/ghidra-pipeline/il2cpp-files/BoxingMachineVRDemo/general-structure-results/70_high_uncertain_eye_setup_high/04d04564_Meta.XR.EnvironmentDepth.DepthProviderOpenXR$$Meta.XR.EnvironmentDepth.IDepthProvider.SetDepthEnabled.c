/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.DepthProviderOpenXR$$Meta.XR.EnvironmentDepth.IDepthProvider.SetDepthEnabled
ENTRY_POINT: 04d04564
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentDepth_DepthProviderOpenXR__Meta_XR_EnvironmentDepth_IDepthProvider_SetDepthEnabled
               (void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar5;
  long lVar6;
  
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  if (DAT_06b77dac == '\0') {
    FUN_02d6084c(PTR_DAT_0676c3c0);
    DAT_06b77dac = '\x01';
  }
  lVar3 = *unaff_x21;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar3 = *unaff_x21;
  }
  puVar1 = PTR_DAT_0676c3e8;
  uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar5;
  thunk_FUN_02dd37b4((undefined8 *)(unaff_x20 + 0x20),uVar5);
  lVar3 = FUN_04d04990();
  *(long *)(unaff_x20 + 0x38) = lVar3;
  if (lVar3 == 0) {
    *(undefined1 *)(unaff_x20 + 0x40) = 1;
  }
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x20 + 0x18);
  thunk_FUN_02dd37b4();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar6 = *(long *)PTR_DAT_0676c3e0;
  lVar3 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar3 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0();
  }
  plVar4 = (long *)**(long **)(lVar3 + 0xb8);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x178))(plVar4,0x1000,*(undefined8 *)(*plVar4 + 0x180));
    *(undefined8 *)(unaff_x20 + 0x68) = uVar5;
    thunk_FUN_02dd37b4();
    if (*(int *)(*(long *)PTR_DAT_0676c400 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    iVar2 = SystemNative_GetReadDirRBufferSize(0);
    if (iVar2 < 1) {
      uVar5 = 0;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_0676c3f0 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar6 = *(long *)PTR_DAT_0676c3d8;
      lVar3 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      lVar3 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02d9a2e0();
      }
      plVar4 = (long *)**(long **)(lVar3 + 0xb8);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar5 = (**(code **)(*plVar4 + 0x178))(plVar4,iVar2,*(undefined8 *)(*plVar4 + 0x180));
    }
    *(undefined8 *)(unaff_x20 + 0x70) = uVar5;
    thunk_FUN_02dd37b4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


