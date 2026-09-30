/*
FUNCTION_NAME: FUN_05e61d14
ENTRY_POINT: 05e61d14
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05e61d14(long param_1,void *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_3e8;
  undefined1 local_3e0 [464];
  undefined8 local_210;
  undefined1 auStack_208 [287];
  undefined1 auStack_e9 [177];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((DAT_066dc655 & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_75__);
    DAT_066dc655 = 1;
  }
  local_3e8 = 0;
  memset(auStack_208,0,0x1cf);
  memcpy(auStack_e9,param_2,0xb0);
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_05f4dc70(*(long *)(param_1 + 0x10),&local_3e8,0);
    uVar3 = local_3e8;
    lVar6 = *(long *)(param_1 + 0x90);
    if (lVar6 != 0) {
      lVar4 = *(long *)(lVar6 + 0x10);
      lVar5 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_75__;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar1 * 0x1d8;
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined1 *)(lVar4 + 0x20) = 1;
          memcpy((void *)(lVar4 + 0x21),auStack_208,0x1cf);
          *(undefined8 *)(lVar4 + 0x1f0) = uVar3;
        }
        else {
          uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70);
          local_3e0[0] = 1;
          memcpy((void *)((ulong)local_3e0 | 1),auStack_208,0x1cf);
          local_210 = uVar3;
          FUN_038e3044(lVar6,local_3e0,uVar7);
        }
        if (*(long *)(lVar2 + 0x28) == local_38) {
          return;
        }
        goto LAB_05e61e74;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_05e61e74:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


