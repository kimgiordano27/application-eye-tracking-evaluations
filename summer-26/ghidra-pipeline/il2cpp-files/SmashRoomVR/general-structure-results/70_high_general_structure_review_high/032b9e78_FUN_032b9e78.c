/*
FUNCTION_NAME: FUN_032b9e78
ENTRY_POINT: 032b9e78
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_032b9e78(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 local_200 [2];
  undefined8 uStack_1ec;
  undefined8 local_1e0 [2];
  undefined8 uStack_1cc;
  undefined8 local_1c0 [2];
  undefined8 uStack_1ac;
  undefined8 local_1a0 [2];
  undefined8 uStack_18c;
  undefined8 local_180 [2];
  undefined8 uStack_16c;
  undefined8 local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  undefined8 local_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined8 local_c0;
  double dStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_80;
  double local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  
  if ((DAT_03ff58b1 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d83258);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_3836);
    thunk_FUN_01ad9084(PTR_DAT_03d869c8);
    thunk_FUN_01ad9084(PTR_DAT_03d869d0);
    DAT_03ff58b1 = 1;
  }
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  local_c8 = 0;
  local_d0 = 0;
  uStack_cc = 0;
  local_100 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  local_e8 = 0;
  local_f0 = 0;
  uStack_ec = 0;
  local_120 = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  local_108 = 0;
  local_110 = 0;
  uStack_10c = 0;
  local_140 = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  local_128 = 0;
  local_130 = 0;
  uStack_12c = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  local_9c = 0;
  dStack_b8 = 0.0;
  local_c0 = 0;
  local_80 = 1;
  fVar9 = (float)FUN_03925ca4(0);
  local_78 = (double)fVar9;
  if (*(long *)(param_1 + 0x28) != 0) {
    fVar9 = (float)FUN_038f07e0(*(long *)(param_1 + 0x28),0);
    fVar9 = tanf(fVar9 * DAT_00b552c8 * 0.5);
    fVar10 = atanf(fVar9 * DAT_00b55460);
    local_68 = tanf((fVar10 + fVar10) * 0.5);
    local_70 = fVar9;
    local_6c = fVar9;
    local_64 = local_68;
    if (*(long *)(param_1 + 0x28) != 0) {
      local_60 = FUN_038f06d0(*(long *)(param_1 + 0x28),0);
      if (*(long *)(param_1 + 0x28) != 0) {
        local_5c = FUN_038f0758(*(long *)(param_1 + 0x28),0);
        local_58 = DAT_00b921b0;
        local_c0 = CONCAT44(local_c0._4_4_,1);
        fVar9 = (float)FUN_03925ca4(0);
        dStack_b8 = (double)fVar9;
        local_b0 = DAT_00b922f8;
        lVar4 = FUN_038f1768(0);
        puVar3 = PTR_DAT_03d869c8;
        puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
        if (lVar4 != 0) {
          lVar4 = FUN_01e8b0b4(lVar4,*(undefined8 *)PTR_DAT_03d83258);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar1);
          }
          puVar1 = 
          Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
          ;
          uVar5 = FUN_03923030(lVar4,0);
          puVar2 = StringLiteral_3836;
          uVar8 = *(undefined8 *)puVar3;
          if ((uVar5 & 1) == 0) {
            lVar4 = *(long *)StringLiteral_3836;
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar4 = *(long *)puVar2;
            }
            puVar7 = *(undefined8 **)(lVar4 + 0xb8);
            uStack_90 = *(undefined4 *)(puVar7 + 3);
            uStack_a8 = *puVar7;
            uStack_98 = (undefined4)puVar7[2];
            uStack_94 = (undefined4)((ulong)puVar7[2] >> 0x20);
            uStack_a0 = (undefined4)puVar7[1];
            local_9c = (undefined4)((ulong)puVar7[1] >> 0x20);
LAB_032ba214:
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar5 = FUN_0325487c(uVar8,&local_80,&local_c0,0);
            if ((uVar5 & 1) == 0) {
              if (*(int *)(*(long *)
                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_038f2e04(*(undefined8 *)PTR_DAT_03d869d0,0);
            }
            return;
          }
          if (lVar4 != 0) {
            System_Linq_Expressions_Error__CoercionOperatorNotDefined
                      (&local_160,*(undefined8 *)(lVar4 + 0x20),0,0);
            uStack_d8 = uStack_158;
            local_e0 = local_160;
            uStack_cc = (undefined4)uStack_14c;
            local_c8 = (undefined4)((ulong)uStack_14c >> 0x20);
            uStack_d4 = uStack_154;
            local_d0 = uStack_150;
            if (*(long *)(param_1 + 0x28) != 0) {
              uVar6 = FUN_0391c27c(*(long *)(param_1 + 0x28),0);
              System_Linq_Expressions_Error__CoercionOperatorNotDefined(&local_160,uVar6,0,0);
              uStack_f8 = uStack_158;
              local_100 = local_160;
              uStack_ec = (undefined4)uStack_14c;
              local_e8 = (undefined4)((ulong)uStack_14c >> 0x20);
              uStack_f4 = uStack_154;
              local_f0 = uStack_150;
              FUN_03209c60(&local_160,&local_e0,0);
              uStack_18c = CONCAT44(local_e8,uStack_ec);
              local_180[0] = local_160;
              uStack_16c = uStack_14c;
              local_1a0[0] = local_100;
              FUN_03206250(&local_160,local_180,local_1a0,0);
              local_120 = local_160;
              uStack_10c = (undefined4)uStack_14c;
              local_108 = (undefined4)((ulong)uStack_14c >> 0x20);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_03251f2c(&local_160,2,0);
              local_1c0[0] = local_160;
              uStack_1ac = uStack_14c;
              FUN_03206228(&local_160,local_1c0,0);
              uStack_138 = uStack_158;
              local_140 = local_160;
              uStack_12c = (undefined4)uStack_14c;
              local_128 = (undefined4)((ulong)uStack_14c >> 0x20);
              uStack_134 = uStack_154;
              local_130 = uStack_150;
              FUN_03209c60(&local_160,&local_140,0);
              uStack_1ec = CONCAT44(local_108,uStack_10c);
              local_1e0[0] = local_160;
              uStack_1cc = uStack_14c;
              local_200[0] = local_120;
              FUN_03206250(&local_160,local_1e0,local_200,0);
              uStack_118 = uStack_158;
              local_120 = local_160;
              uStack_10c = (undefined4)uStack_14c;
              local_108 = (undefined4)((ulong)uStack_14c >> 0x20);
              uStack_114 = uStack_154;
              local_110 = uStack_150;
              FUN_03209ce4(&local_160,&local_120,0);
              uStack_a0 = uStack_158;
              uStack_a8 = local_160;
              uStack_94 = (undefined4)uStack_14c;
              uStack_90 = (undefined4)((ulong)uStack_14c >> 0x20);
              local_9c = uStack_154;
              uStack_98 = uStack_150;
              goto LAB_032ba214;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


