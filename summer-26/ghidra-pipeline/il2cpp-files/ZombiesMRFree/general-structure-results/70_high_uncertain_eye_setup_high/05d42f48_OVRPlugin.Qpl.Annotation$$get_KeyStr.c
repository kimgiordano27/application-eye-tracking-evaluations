/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation$$get_KeyStr
ENTRY_POINT: 05d42f48
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


long OVRPlugin_Qpl_Annotation__get_KeyStr(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long *plVar4;
  long unaff_x21;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  
  puVar5 = *(undefined8 **)(unaff_x21 + 0x960);
  plVar4 = *(long **)(unaff_x20 + 0xa40);
  if ((*(byte *)(unaff_x19 + 0xb17) & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb4a40);
    FUN_02fe925c(PTR_DAT_06f6d960);
    *(undefined1 *)(unaff_x19 + 0xb17) = 1;
  }
  lVar1 = FUN_02fe9340(*puVar5,0x1a);
  lVar2 = *plVar4;
  uVar6 = 0;
  while( true ) {
    iVar7 = -1;
    uVar9 = uVar6 & 0xffffffff;
    while( true ) {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar2 = *plVar4;
      }
      lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_05d4304c;
      uVar8 = (uint)uVar9;
      if (*(uint *)(lVar3 + 0x18) <= uVar8) goto LAB_05d43048;
      if (*(int *)(lVar3 + (long)(int)uVar8 * 4 + 0x20) == -1) break;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar2 = *plVar4;
      }
      lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
      if (lVar3 == 0) goto LAB_05d4304c;
      if (*(uint *)(lVar3 + 0x18) <= uVar8) goto LAB_05d43048;
      uVar9 = (ulong)*(uint *)(lVar3 + (long)(int)uVar8 * 4 + 0x20);
      iVar7 = iVar7 + 1;
    }
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= uVar6) {
LAB_05d43048:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar3 = uVar6 * 4;
    uVar6 = uVar6 + 1;
    *(int *)(lVar1 + lVar3 + 0x20) = iVar7;
    if (uVar6 == 0x1a) {
      return lVar1;
    }
  }
LAB_05d4304c:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


