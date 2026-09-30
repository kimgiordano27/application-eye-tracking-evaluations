/*
FUNCTION_NAME: FUN_05dae370
ENTRY_POINT: 05dae370
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_05dae370(undefined4 param_1,long *param_2,undefined8 *param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
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
  
  puVar1 = Method_System_Collections_Specialized_ReadOnlyList_set_Item__;
  if ((DAT_06bc3b40 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_System_Collections_Specialized_ReadOnlyList_set_Item__);
    FUN_02f08768(Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(PTR_DAT_067cb280);
    DAT_06bc3b40 = 1;
  }
  puVar2 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  local_100 = *(undefined4 *)(param_3 + 6);
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
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
  uStack_128 = param_3[1];
  local_130 = *param_3;
  uStack_118 = param_3[3];
  uStack_120 = param_3[2];
  uStack_108 = param_3[5];
  local_110 = param_3[4];
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uStack_168 = uStack_128;
  local_170 = local_130;
  uStack_158 = uStack_118;
  uStack_160 = uStack_120;
  local_140 = local_100;
  uStack_148 = uStack_108;
  local_150 = local_110;
  FUN_05dae6a0(&local_f0,0,&local_170,0,param_7,param_4,param_5,param_8);
  lVar8 = *param_2;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar3 = FUN_05dade18(lVar8,&local_f0,0);
  if ((uVar3 & 1) != 0) {
    if (*param_2 != 0) {
      uVar9 = *(undefined8 *)(*param_2 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar7 = FUN_060f078c(uVar9,0,0);
      if ((uVar7 & 1) != 0) {
        if ((*param_2 == 0) || (lVar8 = *(long *)(*param_2 + 0x18), lVar8 == 0)) goto LAB_05dae69c;
        FUN_060d597c(&local_130,lVar8,0);
        if ((*param_2 == 0) || (lVar8 = *(long *)(*param_2 + 0x18), lVar8 == 0)) goto LAB_05dae69c;
        uVar4 = FUN_060cc0f0(lVar8,0);
        if (*param_2 == 0) goto LAB_05dae69c;
        lVar8 = *(long *)(*param_2 + 0x18);
        if (lVar8 == 0) goto LAB_05dae69c;
        uVar10 = FUN_060cc2b8(lVar8,0);
        if ((*param_2 == 0) || (lVar8 = *(long *)(*param_2 + 0x18), lVar8 == 0)) goto LAB_05dae69c;
        uVar5 = FUN_060cbf28(lVar8,0);
        if (*param_2 == 0) goto LAB_05dae69c;
        lVar8 = *(long *)(*param_2 + 0x18);
        if (lVar8 == 0) goto LAB_05dae69c;
        uVar6 = FUN_060cba90(lVar8,0);
        if (*param_2 == 0) goto LAB_05dae69c;
        uVar9 = *(undefined8 *)(*param_2 + 0x58);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uStack_228 = uStack_128;
        local_230 = local_130;
        uStack_218 = uStack_118;
        uStack_220 = uStack_120;
        local_200 = local_100;
        uStack_208 = uStack_108;
        local_210 = local_110;
        FUN_05dae6a0(auStack_1f0,uVar10,&local_230,0,uVar4,uVar5,uVar6,uVar9);
        lVar8 = *param_2;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dae808(auStack_1f0,lVar8);
      }
    }
    puVar1 = PTR_DAT_067cb280;
    lVar8 = *(long *)PTR_DAT_067cb280;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar8 = *(long *)puVar1;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
    if (lVar8 == 0) {
LAB_05dae69c:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar7 = FUN_05dae8d4(lVar8,&local_f0,param_2,1);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(*(long *)
                    Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__ + 0xe4
                  ) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar8 = FUN_05c9de50(param_1,param_3,param_4,param_5,param_6 & 1,param_7,param_8,0);
      *param_2 = lVar8;
    }
  }
  return uVar3 & 1;
}


