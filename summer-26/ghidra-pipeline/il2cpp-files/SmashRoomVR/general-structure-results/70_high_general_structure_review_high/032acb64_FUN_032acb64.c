/*
FUNCTION_NAME: FUN_032acb64
ENTRY_POINT: 032acb64
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_18;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_3
*/


void FUN_032acb64(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined8 uStack_23c;
  undefined8 local_230 [4];
  undefined8 local_210 [2];
  undefined8 uStack_1fc;
  undefined8 local_1f0 [2];
  undefined8 uStack_1dc;
  undefined8 local_1d0 [2];
  undefined8 uStack_1bc;
  undefined8 local_1b0 [2];
  undefined8 uStack_19c;
  undefined8 local_190 [2];
  undefined8 uStack_17c;
  undefined8 local_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined8 uStack_15c;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  
  puVar8 = &local_250;
  if ((DAT_03ff5855 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d869d8);
    thunk_FUN_01ad9084(PTR_DAT_03d83258);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_0__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Current__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_3836);
    thunk_FUN_01ad9084(PTR_DAT_03d869e0);
    thunk_FUN_01ad9084(PTR_DAT_03d869e8);
    thunk_FUN_01ad9084(PTR_DAT_03d869f0);
    DAT_03ff5855 = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  local_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_58 = 0;
  local_60 = 0;
  uStack_5c = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_78 = 0;
  local_80 = 0;
  uStack_7c = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_98 = 0;
  local_a0 = 0;
  uStack_9c = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  local_b8 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  local_d8 = 0;
  local_e0 = 0;
  uStack_dc = 0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  if (*(char *)(param_1 + 0x20) == '\0') {
    FUN_032ac518(param_1);
    return;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03923030(uVar10,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  uVar4 = FUN_03265574(0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)
                Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_0322e00c(1,0x80000000,0);
  if ((uVar4 & 1) != 0) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x24) != 2) {
      iVar1 = *(int *)(param_1 + 0x24) + 1;
    }
    *(int *)(param_1 + 0x24) = iVar1;
    plVar5 = (long *)FUN_01b47fd0(*(undefined8 *)
                                   Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                  ,1);
    local_170 = CONCAT44(local_170._4_4_,*(undefined4 *)(param_1 + 0x24));
    lVar6 = thunk_FUN_01afa70c(*(undefined8 *)PTR_DAT_03d869d8,&local_170);
    if (plVar5 == (long *)0x0) goto LAB_032ad2c0;
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_01afa9e0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
      uVar10 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar10,0);
    }
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    plVar5[4] = lVar6;
    thunk_FUN_01b4f09c(plVar5 + 4,lVar6);
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038f2cec(*(undefined8 *)PTR_DAT_03d869f0,plVar5,0);
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 2) {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return;
      }
      FUN_032ac754(param_1);
      if (*(int *)(*(long *)
                    Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_03254420(0,0,0,0,0,0,0);
      puVar2 = StringLiteral_3836;
      lVar6 = *(long *)StringLiteral_3836;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *(long *)puVar2;
      }
      puVar8 = *(undefined8 **)(lVar6 + 0xb8);
      local_118 = *(undefined4 *)(puVar8 + 3);
      local_120 = puVar8[2];
      uStack_128 = puVar8[1];
      local_130 = *puVar8;
      FUN_032545f4(0,0,&local_130,0);
      return;
    }
    fVar11 = *(float *)(param_1 + 0x38);
    fVar12 = *(float *)(param_1 + 0x3c);
    fVar13 = *(float *)(param_1 + 0x30);
    fVar14 = *(float *)(param_1 + 0x34);
    if (*(int *)(*(long *)
                  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03254420(fVar13 + fVar13,fVar14 + fVar14,fVar11 + fVar11,fVar12 + fVar12,0,1,0);
    puVar2 = StringLiteral_3836;
    lVar6 = *(long *)StringLiteral_3836;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *(long *)puVar2;
    }
    puVar8 = *(undefined8 **)(lVar6 + 0xb8);
    local_138 = *(undefined4 *)(puVar8 + 3);
    local_140 = puVar8[2];
    uStack_148 = puVar8[1];
    local_150 = *puVar8;
    FUN_032545f4(0,0,&local_150,0);
    uVar4 = FUN_0325450c(0,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
    puVar8 = (undefined8 *)PTR_DAT_03d869e8;
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
      puVar8 = (undefined8 *)PTR_DAT_03d869e8;
    }
LAB_032ad2b0:
    FUN_038f336c(*puVar8,0);
    return;
  }
  lVar6 = FUN_01e8a9f8(param_1,*(undefined8 *)
                                Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_0__
                      );
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar7);
  }
  uVar4 = FUN_03922f24(lVar6,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (lVar6 != 0) {
    fVar11 = (float)FUN_038f07e0(lVar6,0);
    fVar11 = tanf(fVar11 * DAT_00b552c8 * 0.5);
    fVar12 = (float)FUN_038f0a90(lVar6,0);
    fVar12 = atanf(fVar11 * fVar12);
    fVar12 = tanf((fVar12 + fVar12) * 0.5);
    puVar3 = 
    Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
    ;
    if (*(int *)(*(long *)
                  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03254420(fVar11,fVar11,fVar12,fVar12,0,1,0);
    lVar6 = FUN_038f1768(0);
    if (lVar6 != 0) {
      lVar6 = FUN_01e8b0b4(lVar6,*(undefined8 *)PTR_DAT_03d83258);
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar7);
      }
      uVar4 = FUN_03923030(lVar6,0);
      puVar2 = StringLiteral_3836;
      if ((uVar4 & 1) == 0) {
        lVar6 = *(long *)StringLiteral_3836;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar6 = *(long *)puVar2;
        }
        puVar9 = *(undefined8 **)(lVar6 + 0xb8);
        uStack_15c = *(undefined8 *)((long)puVar9 + 0x14);
        local_170 = *puVar9;
        uStack_160 = (undefined4)((ulong)*(undefined8 *)((long)puVar9 + 0xc) >> 0x20);
        uStack_168 = (undefined4)puVar9[1];
        uStack_164 = (undefined4)((ulong)puVar9[1] >> 0x20);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar10 = 0;
        uStack_248 = uStack_168;
        local_250 = local_170;
        uStack_23c = uStack_15c;
        uStack_244 = uStack_164;
        uStack_240 = uStack_160;
      }
      else {
        if (lVar6 == 0) goto LAB_032ad2c0;
        System_Linq_Expressions_Error__CoercionOperatorNotDefined
                  (&local_170,*(undefined8 *)(lVar6 + 0x20),0,0);
        uStack_68 = uStack_168;
        local_70 = local_170;
        uStack_5c = (undefined4)uStack_15c;
        local_58 = (undefined4)((ulong)uStack_15c >> 0x20);
        uStack_64 = uStack_164;
        local_60 = uStack_160;
        uVar10 = FUN_0391c27c(param_1,0);
        System_Linq_Expressions_Error__CoercionOperatorNotDefined(&local_170,uVar10,0,0);
        uStack_88 = uStack_168;
        local_90 = local_170;
        uStack_7c = (undefined4)uStack_15c;
        local_78 = (undefined4)((ulong)uStack_15c >> 0x20);
        uStack_84 = uStack_164;
        local_80 = uStack_160;
        FUN_03209c60(&local_170,&local_70,0);
        uStack_19c = CONCAT44(local_78,uStack_7c);
        local_190[0] = local_170;
        uStack_17c = uStack_15c;
        local_1b0[0] = local_90;
        FUN_03206250(&local_170,local_190,local_1b0,0);
        uStack_a8 = uStack_168;
        local_b0 = local_170;
        uStack_9c = (undefined4)uStack_15c;
        local_98 = (undefined4)((ulong)uStack_15c >> 0x20);
        uStack_a4 = uStack_164;
        local_a0 = uStack_160;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_03251f2c(&local_170,2,0);
        local_1d0[0] = local_170;
        uStack_1bc = uStack_15c;
        FUN_03206228(&local_170,local_1d0,0);
        uStack_c8 = uStack_168;
        local_d0 = local_170;
        uStack_bc = (undefined4)uStack_15c;
        local_b8 = (undefined4)((ulong)uStack_15c >> 0x20);
        uStack_c4 = uStack_164;
        local_c0 = uStack_160;
        FUN_03209c60(&local_170,&local_d0,0);
        uStack_1fc = CONCAT44(local_98,uStack_9c);
        local_1f0[0] = local_170;
        uStack_1dc = uStack_15c;
        local_210[0] = local_b0;
        FUN_03206250(&local_170,local_1f0,local_210,0);
        uStack_e8 = uStack_168;
        local_f0 = local_170;
        uStack_dc = (undefined4)uStack_15c;
        local_d8 = (undefined4)((ulong)uStack_15c >> 0x20);
        uStack_e4 = uStack_164;
        local_e0 = uStack_160;
        FUN_03209ce4(&local_170,&local_f0,0);
        puVar8 = local_230;
        uVar10 = 1;
        uStack_fc = (undefined4)uStack_15c;
        uStack_f8 = (undefined4)((ulong)uStack_15c >> 0x20);
        uStack_100 = uStack_160;
        uStack_108 = uStack_168;
        uStack_104 = uStack_164;
        local_110 = local_170;
        local_230[0] = local_170;
      }
      FUN_032545f4(0,uVar10,puVar8,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_0325450c(0,0);
      if ((uVar4 & 1) == 0) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f336c(*(undefined8 *)PTR_DAT_03d869e8,0);
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_032546d4(0,0);
      if ((uVar4 & 1) != 0) {
        return;
      }
      puVar8 = (undefined8 *)PTR_DAT_03d869e0;
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        puVar8 = (undefined8 *)PTR_DAT_03d869e0;
      }
      goto LAB_032ad2b0;
    }
  }
LAB_032ad2c0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


