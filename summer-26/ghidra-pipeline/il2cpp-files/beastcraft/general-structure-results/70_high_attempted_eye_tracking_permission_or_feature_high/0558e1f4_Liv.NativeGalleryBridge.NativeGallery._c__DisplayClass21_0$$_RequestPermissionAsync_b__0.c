/*
FUNCTION_NAME: Liv.NativeGalleryBridge.NativeGallery.<>c__DisplayClass21_0$$<RequestPermissionAsync>b__0
ENTRY_POINT: 0558e1f4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void Liv_NativeGalleryBridge_NativeGallery_<>c__DisplayClass21_0__<RequestPermissionAsync>b__0
               (long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int unaff_w20;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  FUN_05565cb0();
  if (0x62 < unaff_w20) {
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    if (unaff_w20 <= *(int *)(*(long *)(param_1 + 0x20) + 0x10)) {
      *(int *)(param_1 + 0x18) = unaff_w20;
      return;
    }
  }
  thunk_FUN_02ea289c(PTR_DAT_06a300b0);
  FUN_02a73238();
  uVar2 = FUN_0558a8a8();
  uVar3 = thunk_FUN_02ea289c(PTR_DAT_06a7af50);
  uVar3 = FUN_05648560(uVar3,0);
  puVar1 = PTR_DAT_06a2f000;
  uStack000000000000000c = 99;
  uVar4 = thunk_FUN_02e786f0(*(undefined8 *)(PTR_DAT_06a2f000 + 0x48),&stack0x0000000c);
  lVar6 = *(long *)(param_1 + 0x20);
  FUN_02a71e6c(lVar6);
  in_stack_00000008 = *(undefined4 *)(lVar6 + 0x10);
  uVar5 = thunk_FUN_02e786f0(*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
  uVar2 = FUN_0548e088(uVar2,uVar3,uVar4,uVar5,0);
  thunk_FUN_02ea289c(PTR_DAT_06a32848);
  uVar3 = thunk_FUN_02e78ab8();
  uVar4 = thunk_FUN_02ea289c(PTR_DAT_06a7fe68);
  FUN_05576434(uVar3,uVar4,uVar2,0);
  uVar2 = thunk_FUN_02ea289c(PTR_DAT_06a80d48);
                    /* WARNING: Subroutine does not return */
  FUN_02e3cb88(uVar3,uVar2);
}


