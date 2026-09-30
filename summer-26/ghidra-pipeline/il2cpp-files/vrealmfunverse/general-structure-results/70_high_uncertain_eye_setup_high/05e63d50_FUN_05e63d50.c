/*
FUNCTION_NAME: FUN_05e63d50
ENTRY_POINT: 05e63d50
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_12
*/


void FUN_05e63d50(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 local_240;
  undefined1 auStack_238 [16];
  undefined8 local_68;
  undefined1 auStack_60 [16];
  
  if ((DAT_066dc659 & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_90__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_91__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_92__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_93__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_94__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_95__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_96__);
    DAT_066dc659 = 1;
  }
  local_68 = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  auVar5 = ZEXT816(0);
  if (*(long *)(param_1 + 0x90) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x90) + 0x18);
    if (uVar1 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x38) < (int)uVar1) {
      FUN_03a94a40(param_1 + 0x30,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_94__);
      local_240 = 0;
      auStack_238._0_8_ = 0;
      FUN_03a94714(&local_240,uVar1,4,0,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_95__);
      *(undefined8 *)(param_1 + 0x38) = auStack_238._0_8_;
      *(undefined8 *)(param_1 + 0x30) = local_240;
    }
    puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_92__;
    if (0 < (int)uVar1) {
      lVar4 = 0;
      iVar3 = 0;
      do {
        auVar5._8_8_ = auStack_60._8_8_;
        auVar5._0_8_ = auStack_60._0_8_;
        if (*(long *)(param_1 + 0x90) == 0) goto LAB_05e63f70;
        FUN_038e2cc4(&local_240,*(long *)(param_1 + 0x90),iVar3,*(undefined8 *)puVar2);
        memcpy((void *)(*(long *)(param_1 + 0x30) + lVar4),&local_240,0x1d8);
        lVar4 = lVar4 + 0x1d8;
        iVar3 = iVar3 + 1;
      } while ((ulong)uVar1 * 0x1d8 - lVar4 != 0);
    }
    puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_96__;
    auVar5._8_8_ = auStack_60._8_8_;
    auVar5._0_8_ = auStack_60._0_8_;
    lVar4 = *(long *)(param_1 + 0x90);
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0x18) = 0;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      auStack_60 = FUN_0322bdf0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),0,
                                uVar1,*(undefined8 *)puVar2);
      puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_93__;
      local_68 = 0;
      auVar5 = auStack_60;
      if (param_2 != 0) {
        FUN_05f4dbe8(param_2,&local_68,0);
        local_240 = local_68;
        auStack_238 = auStack_60;
        auVar5 = FUN_0321d010(&local_240,uVar1,1,0,0,*(undefined8 *)puVar2);
        FUN_05f4dce0(param_2,auVar5._0_8_,auVar5._8_8_,0);
        FUN_05f4dcf8(param_2,*(undefined8 *)(param_1 + 0x88),0,2,1,0);
        return;
      }
    }
  }
LAB_05e63f70:
  auStack_60 = auVar5;
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


