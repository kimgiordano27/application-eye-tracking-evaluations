/*
FUNCTION_NAME: _GameLobby.Scripts.GameUI.UI.AvatarScrollView$$OnEnable
ENTRY_POINT: 01d1d340
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d1d484) */

undefined8 _GameLobby_Scripts_GameUI_UI_AvatarScrollView__OnEnable(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long in_x9;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_stack_00000008;
  char cStack000000000000000c;
  
  puVar1 = PTR_DAT_03cca050;
  if (*(long *)(in_x9 + 0x40) != *(long *)(param_2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0();
  }
  puVar2 = (undefined4 *)thunk_FUN_01a89fbc();
  lVar3 = *(long *)puVar1;
  uVar8 = *puVar2;
  uVar7 = puVar2[1];
  uVar6 = puVar2[2];
  uVar9 = puVar2[3];
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar1;
  }
  uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar4,&stack0x0000000c,0);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar1;
  }
  uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  in_stack_00000008 = 0;
  if (*(int *)(*(long *)PTR_DAT_03cca318 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_029a2674(uVar9,uVar5,&stack0x00000008,0);
  FUN_029a2674(uVar8,uVar5,&stack0x00000008,0);
  FUN_029a2674(uVar7,uVar5,&stack0x00000008,0);
  FUN_029a2674(uVar6,uVar5,&stack0x00000008,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_029b3ef8();
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
  }
  return 0x10;
}


