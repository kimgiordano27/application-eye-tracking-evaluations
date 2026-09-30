/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureData
ENTRY_POINT: 02c47e70
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


undefined8 OVRPlugin_Ktx__GetKtxTextureData(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 unaff_w19;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000008;
  undefined *puVar3;
  
  FUN_017fc350(*(undefined8 *)(param_1 + 0x5f0));
  *(undefined1 *)(unaff_x24 + 0xc3) = 1;
  puVar3 = PTR_DAT_0380c778;
  in_stack_00000008 = 0;
  if (unaff_x23 == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar1 = thunk_FUN_01861bbc();
    puVar3 = PTR_DAT_037f9f18;
  }
  else {
    if (unaff_x21 != 0) {
      if (*(int *)(*(long *)PTR_DAT_037f45f0 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      FUN_02c47f94(unaff_w19,(long)&stack0x00000008 + 4,&stack0x00000008);
      uVar1 = thunk_FUN_01861bbc(*(undefined8 *)puVar3);
      FUN_02c480b4();
      FUN_02c48170();
      return uVar1;
    }
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar1 = thunk_FUN_01861bbc();
    puVar3 = PTR_DAT_037f87a0;
  }
  uVar2 = thunk_FUN_01851c08(puVar3);
  FUN_02b3cbec(uVar1,uVar2,0);
  uVar2 = thunk_FUN_01851c08(PTR_DAT_0380c780);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar1,uVar2);
}


