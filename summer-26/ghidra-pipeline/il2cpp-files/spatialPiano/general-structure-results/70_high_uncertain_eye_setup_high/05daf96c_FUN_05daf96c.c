/*
FUNCTION_NAME: FUN_05daf96c
ENTRY_POINT: 05daf96c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4
FUN_05daf96c(undefined4 param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined1 auStack_2d0 [72];
  undefined1 auStack_288 [72];
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined1 auStack_1b0 [128];
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
  
  if ((DAT_06bc3b45 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_System_Collections_Specialized_ReadOnlyList_set_Item__);
    FUN_02f08768(Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(PTR_DAT_067cb280);
    FUN_02f08768(PTR_DAT_067cbf00);
    DAT_06bc3b45 = 1;
  }
  puVar1 = Method_System_Collections_Specialized_ReadOnlyList_set_Item__;
  lVar8 = *param_2;
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
  if ((lVar8 == 0) || (*(char *)(lVar8 + 0xa8) == '\0')) {
    bVar3 = true;
  }
  else {
    uVar13 = *(undefined8 *)(lVar8 + 0x94);
    if (DAT_06bb435f == '\0') {
      FUN_02f08768(PTR_DAT_067c9848);
      DAT_06bb435f = '\x01';
    }
    fVar10 = (float)uVar13 - (float)**(undefined8 **)(*(long *)PTR_DAT_067c9848 + 0xb8);
    fVar12 = (float)((ulong)uVar13 >> 0x20) -
             (float)((ulong)**(undefined8 **)(*(long *)PTR_DAT_067c9848 + 0xb8) >> 0x20);
    bVar3 = DAT_011afbb8 <= fVar10 * fVar10 + fVar12 * fVar12;
  }
  puVar2 = PTR_DAT_067cbf00;
  uStack_238 = param_4[1];
  local_240 = *param_4;
  uStack_228 = param_4[3];
  uStack_230 = param_4[2];
  uStack_218 = param_4[5];
  local_220 = param_4[4];
  local_210 = *(undefined4 *)(param_4 + 6);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  plVar9 = (long *)
           Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  uStack_128 = uStack_238;
  local_130 = local_240;
  uStack_118 = uStack_228;
  uStack_120 = uStack_230;
  local_100 = local_210;
  uStack_108 = uStack_218;
  local_110 = local_220;
  FUN_05dae6a0(&local_f0,0,&local_130,2,param_7,param_5,param_6,*(undefined8 *)puVar2);
  if (!bVar3) {
    lVar8 = *param_2;
    if (*(int *)(*plVar9 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar7 = FUN_05dade18(lVar8,&local_f0,1);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  if (*param_2 != 0) {
    uVar13 = *(undefined8 *)(*param_2 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar7 = FUN_060f078c(uVar13,0,0);
    if ((uVar7 & 1) != 0) {
      if ((*param_2 == 0) || (lVar8 = *(long *)(*param_2 + 0x18), lVar8 == 0)) goto LAB_05dafd78;
      FUN_060d597c(&local_240,lVar8,0);
      if ((*param_2 == 0) || (lVar8 = *(long *)(*param_2 + 0x18), lVar8 == 0)) goto LAB_05dafd78;
      uVar4 = FUN_060cc0f0(lVar8,0);
      if ((*param_2 == 0) || (lVar8 = *(long *)(*param_2 + 0x18), lVar8 == 0)) goto LAB_05dafd78;
      uVar11 = FUN_060cc2b8(lVar8,0);
      if ((*param_2 == 0) || (lVar8 = *(long *)(*param_2 + 0x18), lVar8 == 0)) goto LAB_05dafd78;
      uVar5 = FUN_060cbf28(lVar8,0);
      if ((*param_2 == 0) || (lVar8 = *(long *)(*param_2 + 0x18), lVar8 == 0)) goto LAB_05dafd78;
      uVar6 = FUN_060cba90(lVar8,0);
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c(lVar8);
      }
      uStack_1e8 = uStack_238;
      local_1f0 = local_240;
      uStack_1d8 = uStack_228;
      uStack_1e0 = uStack_230;
      local_1c0 = local_210;
      uStack_1c8 = uStack_218;
      local_1d0 = local_220;
      FUN_05dae6a0(auStack_1b0,uVar11,&local_1f0,2,uVar4,uVar5,uVar6,*(undefined8 *)puVar2);
      lVar8 = *param_2;
      if (*(int *)(*(long *)
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dae808(auStack_1b0,lVar8);
      plVar9 = (long *)
               Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
      ;
    }
  }
  puVar1 = PTR_DAT_067cb280;
  lVar8 = *(long *)PTR_DAT_067cb280;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar8 = *(long *)puVar1;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (lVar8 != 0) {
    uVar7 = FUN_05dae8d4(lVar8,&local_f0,param_2,1);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(*plVar9 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dc1380(&local_240,param_1,param_4,param_5,param_6,param_7,param_8,0);
      memcpy(auStack_288,&local_240,0x48);
      if (*(int *)(*(long *)
                    Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__ + 0xe4
                  ) == 0) {
        thunk_FUN_02f6670c();
      }
      memcpy(auStack_2d0,auStack_288,0x48);
      lVar8 = FUN_05c9f248(param_3,auStack_2d0,0);
      *param_2 = lVar8;
    }
    return 1;
  }
LAB_05dafd78:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


