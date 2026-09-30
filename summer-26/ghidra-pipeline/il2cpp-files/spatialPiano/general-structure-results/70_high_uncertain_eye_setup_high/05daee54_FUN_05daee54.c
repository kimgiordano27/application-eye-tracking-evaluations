/*
FUNCTION_NAME: FUN_05daee54
ENTRY_POINT: 05daee54
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
FUN_05daee54(undefined4 param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
            undefined4 param_5,undefined4 param_6,uint param_7,undefined4 param_8,undefined8 param_9
            )

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
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined4 local_200;
  undefined1 auStack_1f0 [128];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((DAT_06bc3b42 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_System_Collections_Specialized_ReadOnlyList_set_Item__);
    FUN_02f08768(Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(PTR_DAT_067cb280);
    FUN_02f08768(PTR_DAT_067cbf00);
    DAT_06bc3b42 = 1;
  }
  puVar1 = Method_System_Collections_Specialized_ReadOnlyList_set_Item__;
  lVar9 = *param_2;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if ((lVar9 == 0) || (*(char *)(lVar9 + 0xa8) == '\0')) {
    bVar4 = true;
  }
  else {
    uVar13 = *(undefined8 *)(lVar9 + 0x94);
    if (DAT_06bb435f == '\0') {
      FUN_02f08768(PTR_DAT_067c9848);
      DAT_06bb435f = '\x01';
    }
    fVar10 = (float)uVar13 - (float)**(undefined8 **)(*(long *)PTR_DAT_067c9848 + 0xb8);
    fVar12 = (float)((ulong)uVar13 >> 0x20) -
             (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_067c9848 + 0xb8) >> 0x20);
    bVar4 = DAT_011afbb8 <= fVar10 * fVar10 + fVar12 * fVar12;
  }
  puVar2 = PTR_DAT_067cbf00;
  uStack_128 = param_4[1];
  local_130 = *param_4;
  uStack_118 = param_4[3];
  uStack_120 = param_4[2];
  uStack_108 = param_4[5];
  local_110 = param_4[4];
  local_100 = *(undefined4 *)(param_4 + 6);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar3 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  uStack_168 = uStack_128;
  local_170 = local_130;
  uStack_158 = uStack_118;
  uStack_160 = uStack_120;
  local_140 = local_100;
  uStack_148 = uStack_108;
  local_150 = local_110;
  FUN_05dae6a0(&local_f0,0,&local_170,2,param_8,param_5,param_6,*(undefined8 *)puVar2);
  if (!bVar4) {
    lVar9 = *param_2;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar8 = FUN_05dade18(lVar9,&local_f0,1);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  }
  if (*param_2 != 0) {
    uVar13 = *(undefined8 *)(*param_2 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar8 = FUN_060f078c(uVar13,0,0);
    if ((uVar8 & 1) != 0) {
      if ((*param_2 == 0) || (lVar9 = *(long *)(*param_2 + 0x18), lVar9 == 0)) goto LAB_05daf220;
      FUN_060d597c(&local_130,lVar9,0);
      if ((*param_2 == 0) || (lVar9 = *(long *)(*param_2 + 0x18), lVar9 == 0)) goto LAB_05daf220;
      uVar5 = FUN_060cc0f0(lVar9,0);
      if ((*param_2 == 0) || (lVar9 = *(long *)(*param_2 + 0x18), lVar9 == 0)) goto LAB_05daf220;
      uVar11 = FUN_060cc2b8(lVar9,0);
      if ((*param_2 == 0) || (lVar9 = *(long *)(*param_2 + 0x18), lVar9 == 0)) goto LAB_05daf220;
      uVar6 = FUN_060cbf28(lVar9,0);
      if ((*param_2 == 0) || (lVar9 = *(long *)(*param_2 + 0x18), lVar9 == 0)) goto LAB_05daf220;
      uVar7 = FUN_060cba90(lVar9,0);
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar9);
      }
      uStack_228 = uStack_128;
      local_230 = local_130;
      uStack_218 = uStack_118;
      uStack_220 = uStack_120;
      local_200 = local_100;
      uStack_208 = uStack_108;
      local_210 = local_110;
      FUN_05dae6a0(auStack_1f0,uVar11,&local_230,2,uVar5,uVar6,uVar7,*(undefined8 *)puVar2);
      lVar9 = *param_2;
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dae808(auStack_1f0,lVar9);
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
    uVar8 = FUN_05dae8d4(lVar9,&local_f0,param_2,1);
    if ((uVar8 & 1) == 0) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__ + 0xe4
                  ) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar9 = FUN_05c9f030(param_1,param_3,param_4,param_5,param_6,param_7 & 1,param_8,param_9,0);
      *param_2 = lVar9;
    }
    return 1;
  }
LAB_05daf220:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


