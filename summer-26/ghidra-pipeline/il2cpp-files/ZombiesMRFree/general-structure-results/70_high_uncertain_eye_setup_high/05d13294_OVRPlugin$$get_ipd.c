/*
FUNCTION_NAME: OVRPlugin$$get_ipd
ENTRY_POINT: 05d13294
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


void OVRPlugin__get_ipd(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined4 param_6,long *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  ulong uStack_cc;
  ulong uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  if ((DAT_07398852 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f98e20);
    DAT_07398852 = 1;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(long *)(param_2 + 0x140) != 0) {
    uVar3 = FUN_05d114a8(param_1,*(undefined4 *)(param_2 + 0xdc),*(long *)(param_2 + 0x140),param_3,
                         param_4,param_6,param_7);
    if ((uVar3 & 1) != 0) {
      return;
    }
    FUN_05cc3570(&uStack_c0,param_3,param_4,0);
    lVar5 = *param_7;
    if (lVar5 != 0) {
      uVar7 = (undefined4)(uStack_c0 >> 0x20);
      uVar3 = uStack_ac & 0xffffffff;
      uVar1 = uStack_ac._4_4_;
      *(undefined1 *)(lVar5 + 0x10) = 0;
      uVar6 = FUN_05d12e6c(uStack_c0 & 0xffffffff,*(undefined8 *)(param_2 + 0x138),&uStack_80);
      uVar2 = uStack_78;
      *(undefined4 *)(lVar5 + 0x3c) = uVar6;
      *(undefined4 *)(lVar5 + 0x40) = uVar7;
      *(undefined4 *)(lVar5 + 0x44) = uStack_b8;
      uVar8 = uStack_80 & 0xffffffff;
      uVar6 = uStack_80._4_4_;
      if (*(int *)(*(long *)PTR_DAT_06f98e20 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_06902890(uVar8,uVar6,uVar2,uStack_b4,uStack_b0,uVar3,uVar1,&uStack_a0,0);
      if (*(long *)(param_2 + 200) != 0) {
        lVar5 = *param_7;
        uVar4 = FUN_068f5d7c(*(long *)(param_2 + 200),0);
        FUN_05cc37e4(&uStack_e0,uVar4,&uStack_a0,0);
        uStack_c0 = uStack_e0;
        uStack_ac = uStack_cc;
        if (lVar5 != 0) {
          *(ulong *)(lVar5 + 0x34) = uStack_cc;
          *(ulong *)(lVar5 + 0x2c) = CONCAT44(uStack_d0,uStack_d4);
          *(ulong *)(lVar5 + 0x28) = CONCAT44(uStack_d4,uStack_d8);
          *(ulong *)(lVar5 + 0x20) = uStack_e0;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


