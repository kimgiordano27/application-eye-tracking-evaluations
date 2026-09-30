/*
FUNCTION_NAME: FUN_0855cd30
ENTRY_POINT: 0855cd30
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_0855cd30(void *param_1,undefined4 param_2,long param_3,long param_4,long param_5,
                 undefined4 param_6)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined1 auStack_240 [96];
  undefined1 auStack_1e0 [96];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_11c [196];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((DAT_0989da64 & 1) == 0) {
    FUN_04077588(PTR_DAT_0932c678);
    DAT_0989da64 = 1;
  }
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  memset(auStack_11c,0,0xc4);
  puVar2 = PTR_DAT_0932c678;
  if (param_4 != 0) {
    lVar4 = *(long *)(param_4 + 0xd8);
    FUN_08a08278(&local_180,lVar4,0);
    FUN_08a082e4(&local_180,param_6,0);
    memcpy(auStack_1e0,&local_180,0x60);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    memcpy(auStack_240,auStack_1e0,0x60);
    FUN_08a00754(auStack_11c,param_2,auStack_240,0);
    if ((param_3 != 0) &&
       (FUN_08a00820(auStack_11c,*(undefined4 *)(param_3 + 0x2c),0), param_5 != 0)) {
      FUN_08a008c0(auStack_11c,*(undefined4 *)(param_5 + 0x10),0);
      FUN_08a00828(auStack_11c,*(undefined1 *)(param_3 + 0x28),0);
      if (lVar4 != 0) {
        iVar3 = FUN_08978cd4(lVar4,0);
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_040d65a8(lVar4);
        }
        FUN_08a00838(auStack_11c,iVar3 != 4,0);
        memcpy(param_1,auStack_11c,0xc4);
        if (*(long *)(lVar1 + 0x28) == local_58) {
          return;
        }
        goto 
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_connect_audio_set
        ;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_connect_audio_set:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


