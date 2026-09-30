/*
FUNCTION_NAME: FUN_058d731c
ENTRY_POINT: 058d731c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_13;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_13
*/


void FUN_058d731c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_68;
  
  puVar1 = PTR_DAT_06767838;
  local_68 = param_1;
  if ((DAT_06b80b00 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_EyeTextureFormat_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_100_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_101_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_102_0_TypeInfo);
    FUN_02d6084c(UnityEngine_UIElements_MouseOverEvent_<>c_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_103_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_06767838);
    FUN_02d6084c(OVRPlugin_OVRP_1_104_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_105_0_TypeInfo);
    DAT_06b80b00 = 1;
  }
  lVar11 = *(long *)puVar1;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_108 = 0;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar11 = *(long *)puVar1;
  }
  if (*(int *)(*(long *)(lVar11 + 0xb8) + 0x174) != 0) {
    iVar9 = FUN_058eca00(&local_68,0);
    if ((iVar9 == 0x53544154) || (iVar9 == 0x444c5441)) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar12 = FUN_058636b0(param_2,0);
      if ((uVar12 & 1) != 0) {
        lVar11 = *(long *)puVar1;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar11 = *(long *)puVar1;
        }
        uVar12 = FUN_032dc1a0(*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x38),
                              *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x1c),param_2,
                              *(undefined8 *)OVRPlugin_EyeTextureFormat_TypeInfo);
        if ((uVar12 & 1) == 0) {
          lVar11 = *(long *)puVar1;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar11 = *(long *)puVar1;
          }
          uVar12 = FUN_033880c4(*(long *)(lVar11 + 0xb8) + 0x108,param_2,local_68,
                                *(undefined8 *)OVRPlugin_OVRP_1_105_0_TypeInfo,0,
                                *(undefined8 *)OVRPlugin_OVRP_1_103_0_TypeInfo);
          if ((uVar12 & 1) != 0) {
            FUN_0585d9b0(&local_180,DAT_01208248,local_68,param_2,0);
            local_f0 = local_170;
            uStack_f8 = uStack_178;
            local_100 = local_180;
            FUN_0585da04(&local_180,&local_100,0);
            memcpy(&local_e0,&local_180,0x70);
            uVar6 = local_108;
            puVar5 = OVRPlugin_OVRP_1_102_0_TypeInfo;
            puVar4 = OVRPlugin_OVRP_1_101_0_TypeInfo;
            puVar3 = OVRPlugin_OVRP_1_100_0_TypeInfo;
            puVar2 = UnityEngine_UIElements_MouseOverEvent_<>c_TypeInfo;
            do {
              uVar12 = FUN_0585da2c(&local_e0,0);
              uVar7 = local_98;
              if ((uVar12 & 1) == 0) break;
              lVar11 = *(long *)puVar1;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar11 = *(long *)puVar1;
              }
              FUN_0436dca4(*(long *)(lVar11 + 0xb8) + 0xb8,*(undefined8 *)puVar3);
              iVar9 = 0;
              while( true ) {
                lVar11 = *(long *)puVar1;
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar11 = *(long *)puVar1;
                }
                iVar10 = FUN_0436d8f4(*(long *)(lVar11 + 0xb8) + 0xb8,*(undefined8 *)puVar2);
                if (iVar10 <= iVar9) break;
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                  lVar11 = *(long *)(*(long *)puVar1 + 0xb8);
                  iVar13 = *(int *)(lVar11 + 0x10);
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                    lVar11 = *(long *)(*(long *)puVar1 + 0xb8);
                  }
                }
                else {
                  lVar11 = *(long *)(*(long *)puVar1 + 0xb8);
                  iVar13 = *(int *)(lVar11 + 0x10);
                }
                lVar11 = FUN_0436d8fc(lVar11 + 0xb8,iVar9,*(undefined8 *)puVar5);
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                (**(code **)(lVar11 + 0x18))
                          (*(undefined8 *)(lVar11 + 0x40),uVar7,local_68,
                           *(undefined8 *)(lVar11 + 0x28));
                lVar11 = *(long *)puVar1;
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4(lVar11);
                  lVar11 = *(long *)puVar1;
                }
                if (iVar13 != *(int *)(*(long *)(lVar11 + 0xb8) + 0x10)) {
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(lVar11);
                  }
                  cVar8 = FUN_058d53c8(param_2);
                  if (cVar8 != '\0') break;
                }
                iVar9 = iVar9 + 1;
              }
              lVar11 = *(long *)puVar1;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar11 = *(long *)puVar1;
              }
              FUN_0436dcb0(*(long *)(lVar11 + 0xb8) + 0xb8,*(undefined8 *)puVar4);
            } while (iVar10 <= iVar9);
            local_108 = uVar6;
            FUN_0585e9d4(&local_e0,0);
          }
        }
      }
    }
  }
  return;
}


