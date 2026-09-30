/*
FUNCTION_NAME: FUN_05daeaa0
ENTRY_POINT: 05daeaa0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4
FUN_05daeaa0(float param_1,float param_2,undefined4 param_3,long *param_4,undefined8 *param_5,
            undefined4 param_6,undefined4 param_7,uint param_8,undefined4 param_9,
            undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined1 auStack_200 [128];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((DAT_06bc3b41 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_System_Collections_Specialized_ReadOnlyList_set_Item__);
    FUN_02f08768(Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(PTR_DAT_067cb280);
    FUN_02f08768(PTR_DAT_067cbf00);
    DAT_06bc3b41 = 1;
  }
  puVar3 = Method_System_Collections_Specialized_ReadOnlyList_set_Item__;
  puVar1 = PTR_DAT_067cbf00;
  lVar9 = *param_4;
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
  uStack_90 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if ((lVar9 == 0) || (*(char *)(lVar9 + 0xa8) == '\0')) {
    bVar4 = true;
  }
  else {
    fVar11 = *(float *)(lVar9 + 0x94) - param_1;
    fVar13 = *(float *)(lVar9 + 0x98) - param_2;
    bVar4 = DAT_011afbb8 <= fVar11 * fVar11 + fVar13 * fVar13;
  }
  uStack_138 = param_5[1];
  local_140 = *param_5;
  uStack_128 = param_5[3];
  uStack_130 = param_5[2];
  uStack_118 = param_5[5];
  local_120 = param_5[4];
  local_110 = *(undefined4 *)(param_5 + 6);
  if (*(int *)(*(long *)Method_System_Collections_Specialized_ReadOnlyList_set_Item__ + 0xe4) == 0)
  {
    thunk_FUN_02f6670c();
  }
  puVar2 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  uStack_178 = uStack_138;
  local_180 = local_140;
  uStack_168 = uStack_128;
  uStack_170 = uStack_130;
  local_150 = local_110;
  uStack_158 = uStack_118;
  local_160 = local_120;
  FUN_05dae6a0(&local_100,0,&local_180,1,param_9,param_6,param_7,*(undefined8 *)puVar1);
  if (!bVar4) {
    lVar9 = *param_4;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar8 = FUN_05dade18(lVar9,&local_100,1);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  }
  if (*param_4 != 0) {
    uVar10 = *(undefined8 *)(*param_4 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar8 = FUN_060f078c(uVar10,0,0);
    if ((uVar8 & 1) != 0) {
      if ((*param_4 == 0) || (lVar9 = *(long *)(*param_4 + 0x18), lVar9 == 0)) goto LAB_05daee50;
      FUN_060d597c(&local_140,lVar9,0);
      if ((*param_4 == 0) || (lVar9 = *(long *)(*param_4 + 0x18), lVar9 == 0)) goto LAB_05daee50;
      uVar5 = FUN_060cc0f0(lVar9,0);
      if ((*param_4 == 0) || (lVar9 = *(long *)(*param_4 + 0x18), lVar9 == 0)) goto LAB_05daee50;
      uVar12 = FUN_060cc2b8(lVar9,0);
      if ((*param_4 == 0) || (lVar9 = *(long *)(*param_4 + 0x18), lVar9 == 0)) goto LAB_05daee50;
      uVar6 = FUN_060cbf28(lVar9,0);
      if ((*param_4 == 0) || (lVar9 = *(long *)(*param_4 + 0x18), lVar9 == 0)) goto LAB_05daee50;
      uVar7 = FUN_060cba90(lVar9,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)puVar3);
      }
      uStack_238 = uStack_138;
      local_240 = local_140;
      uStack_228 = uStack_128;
      uStack_230 = uStack_130;
      local_210 = local_110;
      uStack_218 = uStack_118;
      local_220 = local_120;
      FUN_05dae6a0(auStack_200,uVar12,&local_240,1,uVar5,uVar6,uVar7,*(undefined8 *)puVar1);
      lVar9 = *param_4;
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dae808(auStack_200,lVar9);
    }
  }
  puVar1 = PTR_DAT_067cb280;
  lVar9 = *(long *)PTR_DAT_067cb280;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar9 = *(long *)puVar1;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
  if (lVar9 != 0) {
    uVar8 = FUN_05dae8d4(lVar9,&local_100,param_4,1);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__ + 0xe4
                  ) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar9 = FUN_05c9e71c(param_1,param_2,param_3,param_5,param_6,param_7,param_8 & 1,param_9,
                           param_10,0);
      *param_4 = lVar9;
    }
    return 1;
  }
LAB_05daee50:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


