/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcFrameImageFlipped
ENTRY_POINT: 07c9d9a8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Media__GetMrcFrameImageFlipped(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  
  puVar1 = PTR_DAT_09f50df0;
  puVar10 = *(undefined8 **)(unaff_x21 + 0x6a8);
  if ((*(byte *)(unaff_x20 + 0x9b4) & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f50df8);
    FUN_04447ba8(PTR_DAT_09f4e7b0);
    FUN_04447ba8(PTR_DAT_09f1e6a8);
    FUN_04447ba8(PTR_DAT_09f50e00);
    FUN_04447ba8(PTR_DAT_09f50e08);
    FUN_04447ba8(PTR_DAT_09f50df0);
    *(undefined1 *)(unaff_x20 + 0x9b4) = 1;
  }
  lVar6 = FUN_04447c90(*puVar10,0x1a);
  lVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
  FUN_07a80df4(lVar7,0);
  puVar4 = PTR_DAT_09f50e08;
  puVar3 = PTR_DAT_09f50e00;
  puVar2 = PTR_DAT_09f50df8;
  puVar1 = PTR_DAT_09f4e7b0;
  if (lVar7 != 0) {
    uVar12 = 0;
    *(undefined4 *)(lVar7 + 0x10) = 0;
    while( true ) {
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar8 = *(long *)puVar1;
      }
      uVar11 = **(undefined8 **)(lVar8 + 0xb8);
      uVar9 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
      FUN_062f8aa8(uVar9,lVar7,*(undefined8 *)puVar4,0);
      uVar5 = FUN_046f1e58(uVar11,uVar9,*(undefined8 *)puVar2);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *(undefined4 *)(lVar6 + (long)(int)uVar12 * 4 + 0x20) = uVar5;
      uVar12 = *(int *)(lVar7 + 0x10) + 1;
      *(uint *)(lVar7 + 0x10) = uVar12;
      if (0x19 < (int)uVar12) {
        return lVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


