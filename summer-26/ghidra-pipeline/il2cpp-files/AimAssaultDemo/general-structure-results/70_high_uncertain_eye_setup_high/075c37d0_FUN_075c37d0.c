/*
FUNCTION_NAME: FUN_075c37d0
ENTRY_POINT: 075c37d0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_5
*/


int FUN_075c37d0(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int local_60;
  undefined4 uStack_5c;
  
  if ((DAT_0826e82d & 1) == 0) {
    FUN_0373b518(OVRPlugin_OVRP_1_47_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_48_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_49_0_TypeInfo);
    DAT_0826e82d = 1;
  }
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  if (*param_2 != 0) {
    uVar2 = *(undefined4 *)(*param_2 + 0x18);
    local_d0 = 0;
    uStack_e8 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    local_f0 = *param_1;
    thunk_FUN_037aeb94(&local_f0);
    uStack_e8 = param_1[2];
    thunk_FUN_037aeb94((ulong)&local_f0 | 8);
    uStack_f8 = param_1[4];
    uStack_100 = param_1[3];
    uVar4 = (undefined4)(local_d0 >> 0x20);
    local_d0 = local_d0 & 0xffffffff00000000;
    uStack_b8 = uStack_e8;
    local_c0 = local_f0;
    lVar6 = *param_2;
    uStack_108 = uStack_e8;
    local_110 = local_f0;
    local_e0 = uStack_100;
    uStack_d8 = uStack_f8;
    uStack_b0 = uStack_100;
    uStack_a8 = uStack_f8;
    if (lVar6 != 0) {
      uStack_98 = uStack_e8;
      local_a0 = local_f0;
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *(long *)OVRPlugin_OVRP_1_47_0_TypeInfo;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      uStack_90 = uStack_100;
      uStack_88 = uStack_f8;
      if (lVar7 != 0) {
        uVar3 = *(uint *)(lVar6 + 0x18);
        if (uVar3 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar3 + 1;
          lVar7 = lVar7 + (long)(int)uVar3 * 0x28;
          *(undefined8 *)(lVar7 + 0x28) = uStack_e8;
          *(undefined8 *)(lVar7 + 0x20) = local_f0;
          *(undefined8 *)(lVar7 + 0x38) = uStack_f8;
          *(undefined8 *)(lVar7 + 0x30) = uStack_100;
          *(undefined4 *)(lVar7 + 0x40) = 0;
          *(undefined4 *)(lVar7 + 0x44) = uVar4;
          thunk_FUN_037aeb94(lVar7 + 0x20,0);
        }
        else {
          uStack_78 = uStack_e8;
          local_80 = local_f0;
          local_60 = 0;
          uStack_70 = uStack_100;
          uStack_68 = uStack_f8;
          uStack_5c = uVar4;
          FUN_049f0fa8(lVar6,&local_80,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        lVar6 = param_1[1];
        if (lVar6 == 0) {
          iVar9 = 0;
LAB_075c3980:
          uStack_98 = uStack_b8;
          local_a0 = local_c0;
          uStack_88 = uStack_a8;
          uStack_90 = uStack_b0;
          if (*param_2 != 0) {
            uStack_78 = uStack_b8;
            local_80 = local_c0;
            uStack_68 = uStack_a8;
            uStack_70 = uStack_b0;
            local_60 = iVar9;
            uStack_5c = uVar4;
            FUN_049f0c50(*param_2,uVar2,&local_80,*(undefined8 *)OVRPlugin_OVRP_1_49_0_TypeInfo);
            return iVar9 + 1;
          }
        }
        else {
          uVar10 = 0;
          iVar9 = 0;
          lVar7 = 0x20;
          do {
            if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar10) goto LAB_075c3980;
            if (*(uint *)(lVar6 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            puVar1 = (undefined8 *)(lVar6 + lVar7);
            local_120 = puVar1[4];
            uStack_138 = puVar1[1];
            local_140 = *puVar1;
            uStack_128 = puVar1[3];
            uStack_130 = puVar1[2];
            uVar10 = uVar10 + 1;
            lVar7 = lVar7 + 0x28;
            iVar5 = FUN_075c37d0(&local_140,param_2);
            lVar6 = param_1[1];
            iVar9 = iVar5 + iVar9;
          } while (lVar6 != 0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


