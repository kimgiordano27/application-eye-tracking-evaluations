/*
FUNCTION_NAME: FUN_05e618b0
ENTRY_POINT: 05e618b0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05e618b0(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_3e8;
  undefined1 auStack_3e0 [8];
  undefined1 auStack_3d8 [72];
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  uint local_2c8;
  undefined8 local_210;
  undefined1 auStack_208 [472];
  
  if ((DAT_066dc654 & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_75__);
    FUN_02b3c81c(PTR_DAT_06312520);
    DAT_066dc654 = 1;
  }
  memset(auStack_3e0,0,0x1d8);
  local_3e8 = 0;
  if ((*(float *)(param_2 + 8) < DAT_010321cc) || (*(float *)(param_2 + 0xc) < DAT_010321cc)) {
    return;
  }
  memset(auStack_3e0,0,0x1d8);
  FUN_05e61bec(param_2,auStack_3d8);
  if (*(long *)(param_1 + 0x28) != 0) {
    local_350 = FUN_05e53420(*(long *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x98),0);
    if (*(long *)(param_1 + 0x28) != 0) {
      local_348 = FUN_05e53420(*(long *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0xa0),0);
      puVar1 = PTR_DAT_06312520;
      uVar7 = *(undefined8 *)(param_2 + 0xa0);
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar2 = FUN_05c8c45c(uVar7,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_2 + 0xa0) == 0) goto LAB_05e61be8;
        uVar7 = FUN_05c3a704(*(long *)(param_2 + 0xa0),0);
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(lVar3);
        }
        uVar2 = FUN_05c8c45c(uVar7,0,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_2 + 0xa0) == 0) goto LAB_05e61be8;
          lVar3 = *(long *)(param_1 + 0x28);
          uVar7 = FUN_05c3a704(*(long *)(param_2 + 0xa0),0);
          if (lVar3 == 0) goto LAB_05e61be8;
          local_338 = FUN_05e53420(lVar3,uVar7,0);
          if (*(long *)(param_2 + 0xa0) == 0) goto LAB_05e61be8;
          lVar3 = *(long *)(param_1 + 0x28);
          uVar7 = FUN_05c3abe8(*(long *)(param_2 + 0xa0),0);
          if (lVar3 == 0) goto LAB_05e61be8;
          local_330 = FUN_05e53420(lVar3,uVar7,0);
          if (*(long *)(param_2 + 0xa0) == 0) goto LAB_05e61be8;
          lVar3 = *(long *)(param_1 + 0x28);
          uVar7 = FUN_05c3ad50(*(long *)(param_2 + 0xa0),0);
          if (lVar3 == 0) goto LAB_05e61be8;
          local_328 = FUN_05e53420(lVar3,uVar7,0);
          if (*(long *)(param_2 + 0xa0) == 0) goto LAB_05e61be8;
          lVar3 = *(long *)(param_1 + 0x28);
          uVar7 = FUN_05c3ac9c(*(long *)(param_2 + 0xa0),0);
          if (lVar3 == 0) goto LAB_05e61be8;
          local_320 = FUN_05e53420(lVar3,uVar7,0);
        }
      }
      if (*(long *)(param_2 + 0x50) != 0) {
        local_388 = *(undefined8 *)(param_2 + 0x58);
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_05e61be8;
        local_390 = FUN_05e53420(*(long *)(param_1 + 0x28),*(long *)(param_2 + 0x50),0);
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        local_340 = FUN_05e53420(*(long *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0xa8),0);
        if (*(long *)(param_2 + 0xa8) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(*(long *)(param_2 + 0xa8) + 0x20);
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar2 = FUN_05c8c45c(uVar7,0,0);
        uVar5 = 4;
        if ((uVar2 & 1) == 0) {
          uVar5 = 0;
        }
        local_2c8 = local_2c8 | uVar5;
        if (*(long *)(param_1 + 0x10) != 0) {
          FUN_05f4dc70(*(long *)(param_1 + 0x10),&local_3e8,0);
          lVar3 = *(long *)(param_1 + 0x90);
          local_210 = local_3e8;
          if (lVar3 != 0) {
            lVar4 = *(long *)(lVar3 + 0x10);
            lVar6 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_75__;
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (lVar4 != 0) {
              uVar5 = *(uint *)(lVar3 + 0x18);
              if (uVar5 < *(uint *)(lVar4 + 0x18)) {
                *(uint *)(lVar3 + 0x18) = uVar5 + 1;
                memcpy((void *)(lVar4 + (long)(int)uVar5 * 0x1d8 + 0x20),auStack_3e0,0x1d8);
                return;
              }
              uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
              memcpy(auStack_208,auStack_3e0,0x1d8);
              FUN_038e3044(lVar3,auStack_208,uVar7);
              return;
            }
          }
        }
      }
    }
  }
LAB_05e61be8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


