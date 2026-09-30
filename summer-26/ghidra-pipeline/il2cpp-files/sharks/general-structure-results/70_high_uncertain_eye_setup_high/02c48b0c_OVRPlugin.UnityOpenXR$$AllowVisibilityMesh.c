/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$AllowVisibilityMesh
ENTRY_POINT: 02c48b0c
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__AllowVisibilityMesh(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  *(undefined1 *)(unaff_x20 + 0xce) = in_w8;
  if (unaff_x19 == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar3 = thunk_FUN_01861bbc();
    uVar5 = thunk_FUN_01851c08(PTR_DAT_037f9770);
    FUN_02b3cbec(uVar3,uVar5,0);
    uVar5 = thunk_FUN_01851c08(PTR_DAT_0380c7f8);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar3,uVar5);
  }
  if (*(int *)(*(long *)PTR_DAT_037f9758 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar2 = FUN_02c303dc(&stack0x00000008,0);
  uVar3 = in_stack_00000008;
  puVar1 = PTR_DAT_037f45f0;
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_037f45f0 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    if (DAT_03a226ba == '\0') {
      FUN_017fc350(PTR_DAT_037f45f0);
      DAT_03a226ba = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar4 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_037f8790;
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
    if (*(int *)(*(long *)PTR_DAT_037f8790 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    if (DAT_03a226b9 == '\0') {
      FUN_017fc350(PTR_DAT_037f8790);
      DAT_03a226b9 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar5 = FUN_01bc7e0c(lVar4);
    uVar3 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380c7f0);
    FUN_01ebc820(uVar3,uVar5,1,*(undefined8 *)PTR_DAT_0380c7e8);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_037f45f0 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar3 = FUN_02c48894(uVar3);
  }
  return uVar3;
}


