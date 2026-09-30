/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnInstanceCreate
ENTRY_POINT: 074432c0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Meta_XR_MetaXRFeature__OnInstanceCreate(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar6 = PTR_DAT_092229a8;
  if ((bRam000000000984570c & 1) == 0) {
    FUN_03d2d2b0(PTR_StringLiteral_51903_09222968);
    FUN_03d2d2b0(PTR_DAT_09220338);
    FUN_03d2d2b0(PTR_DAT_092229b0);
    FUN_03d2d2b0(PTR_DAT_092229b8);
    FUN_03d2d2b0(PTR_DAT_092229c0);
    FUN_03d2d2b0(PTR_DAT_092229c8);
    FUN_03d2d2b0(PTR_DAT_092229a8);
    FUN_03d2d2b0(PTR_DAT_091a0ef0);
    bRam000000000984570c = 1;
  }
  *(undefined4 *)(param_1 + 0x28) = 0x3ca3d70a;
  uVar9 = FUN_08a51c6c(0xffffffff,0);
  uVar3 = _UNK_01917328;
  uVar2 = _UNK_01917320;
  uVar13 = _UNK_01910dc0;
  *(undefined8 *)(param_1 + 0x40) = 0x3e99999a3e99999a;
  uVar4 = _UNK_01919648;
  uVar1 = _UNK_01919640;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x74) = uVar4;
  *(undefined8 *)(param_1 + 0x6c) = uVar1;
  uVar1 = DAT_019127f0;
  *(undefined8 *)(param_1 + 0x4c) = uVar13;
  *(undefined8 *)(param_1 + 100) = uVar3;
  *(undefined8 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar9;
  *(undefined4 *)(param_1 + 0x54) = 0x3fb33333;
  *(undefined8 *)(param_1 + 0x7c) = uVar1;
  *(undefined4 *)(param_1 + 0x84) = 3;
  lVar10 = *(long *)puVar6;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar10 = *(long *)puVar6;
  }
  lVar12 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
  if (lVar12 == 0) {
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar10 = *(long *)puVar6;
    }
    uVar13 = **(undefined8 **)(lVar10 + 0xb8);
    lVar12 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_09220338);
    FUN_054ae3d4(lVar12,uVar13,*(undefined8 *)PTR_DAT_092229c0,0);
    plVar11 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
    *plVar11 = lVar12;
    thunk_FUN_03d1023c(plVar11,lVar12);
  }
  *(long *)(param_1 + 0xa0) = lVar12;
  thunk_FUN_03d1023c((long *)(param_1 + 0xa0),lVar12);
  lVar10 = *(long *)puVar6;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar10 = *(long *)puVar6;
  }
  puVar8 = PTR_DAT_092229b8;
  puVar7 = PTR_DAT_092229b0;
  puVar5 = PTR_DAT_091a0ef0;
  lVar12 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
  if (lVar12 == 0) {
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar10 = *(long *)puVar6;
    }
    uVar13 = **(undefined8 **)(lVar10 + 0xb8);
    lVar12 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_StringLiteral_51903_09222968);
    FUN_06bd9960(lVar12,uVar13,*(undefined8 *)PTR_DAT_092229c8,0);
    plVar11 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10);
    *plVar11 = lVar12;
    thunk_FUN_03d1023c(plVar11,lVar12);
  }
  *(long *)(param_1 + 0xa8) = lVar12;
  thunk_FUN_03d1023c((long *)(param_1 + 0xa8),lVar12);
  uVar13 = thunk_FUN_03d2ef40(*(undefined8 *)puVar8);
  FUN_0606d744(uVar13,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x120) = uVar13;
  thunk_FUN_03d1023c(param_1 + 0x120,uVar13);
  uVar13 = thunk_FUN_03d2ef40(*(undefined8 *)puVar5);
  FUN_08a57758(uVar13,0);
  *(undefined8 *)(param_1 + 0x128) = uVar13;
  thunk_FUN_03d1023c(param_1 + 0x128,uVar13);
  thunk_FUN_08a4cf1c(param_1,0);
  return;
}


