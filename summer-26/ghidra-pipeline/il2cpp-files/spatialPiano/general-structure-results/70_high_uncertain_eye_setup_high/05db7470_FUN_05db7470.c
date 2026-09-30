/*
FUNCTION_NAME: FUN_05db7470
ENTRY_POINT: 05db7470
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_05db7470(undefined4 param_1,long param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  
  if ((DAT_06bc3bb3 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_System_Collections_Specialized_ReadOnlyList_set_Item__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_Mono_Security_Cryptography_PKCS1_Encode_v15__);
    DAT_06bc3bb3 = 1;
  }
  local_60 = 0;
  local_120 = 0;
  local_160 = 0;
  local_1a0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  if (param_2 != 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = FUN_060f245c(uVar8,0,0);
    puVar3 = Method_Mono_Security_Cryptography_PKCS1_Encode_v15__;
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*(long *)Method_Mono_Security_Cryptography_PKCS1_Encode_v15__ + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05db72ac(&local_90,param_3,param_4,param_5);
      lVar7 = *(long *)(param_2 + 0x18);
      if (**(char **)(*(long *)puVar3 + 0xb8) == '\0') {
        if (lVar7 == 0) goto LAB_05db76c0;
        iVar4 = FUN_060cbf28(lVar7,0);
        if (iVar4 == 1) goto LAB_05db75f0;
      }
      else {
        if (lVar7 == 0) {
LAB_05db76c0:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        iVar4 = FUN_060cbf28(lVar7,0);
        if (iVar4 == 0) {
LAB_05db75f0:
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar7 = *(long *)puVar3;
          }
          bVar2 = **(byte **)(lVar7 + 0xb8);
          local_1a0 = local_60;
          puVar1 = &local_190;
          if (bVar2 != 0) {
            puVar1 = &local_150;
          }
          *(undefined4 *)(puVar1 + 6) = local_60;
          puVar1[1] = uStack_88;
          *puVar1 = local_90;
          puVar1[3] = uStack_78;
          puVar1[2] = local_80;
          uStack_1c8 = uStack_88;
          local_1d0 = local_90;
          uStack_1b8 = uStack_78;
          local_1c0 = local_80;
          lVar7 = *(long *)Method_System_Collections_Specialized_ReadOnlyList_set_Item__;
          puVar1[5] = uStack_68;
          puVar1[4] = local_70;
          uStack_1a8 = uStack_68;
          local_1b0 = local_70;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uStack_208 = uStack_1c8;
          local_210 = local_1d0;
          uStack_1f8 = uStack_1b8;
          uStack_200 = local_1c0;
          local_1e0 = local_1a0;
          uStack_1e8 = uStack_1a8;
          local_1f0 = local_1b0;
          FUN_05dae6a0(&local_110,param_1,&local_210,0,param_6,bVar2 ^ 1,1,param_7);
          if (*(int *)(*(long *)
                        Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                      + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar5 = FUN_05dade18(param_2,&local_110,0);
          goto LAB_05db75b8;
        }
      }
    }
  }
  uVar5 = 1;
LAB_05db75b8:
  return uVar5 & 1;
}


