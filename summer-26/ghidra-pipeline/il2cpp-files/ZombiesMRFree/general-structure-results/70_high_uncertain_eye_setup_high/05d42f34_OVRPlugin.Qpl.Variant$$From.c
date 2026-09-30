/*
FUNCTION_NAME: OVRPlugin.Qpl.Variant$$From
ENTRY_POINT: 05d42f34
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Qpl_Variant__From(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  
  puVar2 = PTR_DAT_06fb4a40;
  puVar1 = PTR_DAT_06f6d960;
  if ((DAT_07398b17 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb4a40);
    FUN_02fe925c(PTR_DAT_06f6d960);
    DAT_07398b17 = 1;
  }
  lVar3 = FUN_02fe9340(*(undefined8 *)puVar1,0x1a);
  lVar4 = *(long *)puVar2;
  uVar6 = 0;
  while( true ) {
    iVar7 = -1;
    uVar9 = uVar6 & 0xffffffff;
    while( true ) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar4 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar5 == 0) goto LAB_05d4304c;
      uVar8 = (uint)uVar9;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_05d43048;
      if (*(int *)(lVar5 + (long)(int)uVar8 * 4 + 0x20) == -1) break;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar4 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
      if (lVar5 == 0) goto LAB_05d4304c;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_05d43048;
      uVar9 = (ulong)*(uint *)(lVar5 + (long)(int)uVar8 * 4 + 0x20);
      iVar7 = iVar7 + 1;
    }
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) {
LAB_05d43048:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar5 = uVar6 * 4;
    uVar6 = uVar6 + 1;
    *(int *)(lVar3 + lVar5 + 0x20) = iVar7;
    if (uVar6 == 0x1a) {
      return lVar3;
    }
  }
LAB_05d4304c:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


