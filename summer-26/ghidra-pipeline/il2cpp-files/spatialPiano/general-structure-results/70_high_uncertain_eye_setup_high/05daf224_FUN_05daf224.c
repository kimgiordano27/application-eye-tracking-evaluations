/*
FUNCTION_NAME: FUN_05daf224
ENTRY_POINT: 05daf224
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint FUN_05daf224(undefined4 param_1,long *param_2,undefined8 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 uVar10;
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
  
  puVar1 = Method_System_Collections_Specialized_ReadOnlyList_set_Item__;
  if ((DAT_06bc3b43 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_System_Collections_Specialized_ReadOnlyList_set_Item__);
    FUN_02f08768(Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(PTR_DAT_067cb280);
    DAT_06bc3b43 = 1;
  }
  plVar9 = (long *)
           Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  local_210 = *(undefined4 *)(param_3 + 6);
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
  uStack_238 = param_3[1];
  local_240 = *param_3;
  uStack_228 = param_3[3];
  uStack_230 = param_3[2];
  uStack_218 = param_3[5];
  local_220 = param_3[4];
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uStack_128 = uStack_238;
  local_130 = local_240;
  uStack_118 = uStack_228;
  uStack_120 = uStack_230;
  local_100 = local_210;
  uStack_108 = uStack_218;
  local_110 = local_220;
  FUN_05dae6a0(&local_f0,0,&local_130,0,param_6,param_4,param_5,param_7);
  lVar7 = *param_2;
  if (*(int *)(*plVar9 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar2 = FUN_05dade18(lVar7,&local_f0,0);
  if ((uVar2 & 1) != 0) {
    if (*param_2 != 0) {
      uVar8 = *(undefined8 *)(*param_2 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar6 = FUN_060f078c(uVar8,0,0);
      if ((uVar6 & 1) != 0) {
        if ((*param_2 == 0) || (lVar7 = *(long *)(*param_2 + 0x18), lVar7 == 0)) goto LAB_05daf594;
        FUN_060d597c(&local_240,lVar7,0);
        if ((*param_2 == 0) || (lVar7 = *(long *)(*param_2 + 0x18), lVar7 == 0)) goto LAB_05daf594;
        uVar3 = FUN_060cc0f0(lVar7,0);
        if (*param_2 == 0) goto LAB_05daf594;
        lVar7 = *(long *)(*param_2 + 0x18);
        if (lVar7 == 0) goto LAB_05daf594;
        uVar10 = FUN_060cc2b8(lVar7,0);
        if ((*param_2 == 0) || (lVar7 = *(long *)(*param_2 + 0x18), lVar7 == 0)) goto LAB_05daf594;
        uVar4 = FUN_060cbf28(lVar7,0);
        if (*param_2 == 0) goto LAB_05daf594;
        lVar7 = *(long *)(*param_2 + 0x18);
        if (lVar7 == 0) goto LAB_05daf594;
        uVar5 = FUN_060cba90(lVar7,0);
        if (*param_2 == 0) goto LAB_05daf594;
        uVar8 = *(undefined8 *)(*param_2 + 0x58);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uStack_1e8 = uStack_238;
        local_1f0 = local_240;
        uStack_1d8 = uStack_228;
        uStack_1e0 = uStack_230;
        local_1c0 = local_210;
        uStack_1c8 = uStack_218;
        local_1d0 = local_220;
        FUN_05dae6a0(auStack_1b0,uVar10,&local_1f0,0,uVar3,uVar4,uVar5,uVar8);
        plVar9 = (long *)
                 Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
        ;
        lVar7 = *param_2;
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dae808(auStack_1b0,lVar7);
      }
    }
    puVar1 = PTR_DAT_067cb280;
    lVar7 = *(long *)PTR_DAT_067cb280;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar7 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if (lVar7 == 0) {
LAB_05daf594:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar6 = FUN_05dae8d4(lVar7,&local_f0,param_2,1);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*plVar9 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05dc1380(&local_240,param_1,param_3,param_4,param_5,param_6,param_7,0);
      uVar3 = *(undefined4 *)param_3;
      uVar10 = *(undefined4 *)((long)param_3 + 4);
      memcpy(auStack_288,&local_240,0x48);
      if (*(int *)(*(long *)
                    Method_Unity_Collections_FixedStringMethods_Append<FixedString128Bytes>__ + 0xe4
                  ) == 0) {
        thunk_FUN_02f6670c();
      }
      memcpy(auStack_2d0,auStack_288,0x48);
      lVar7 = FUN_05c9ddb0(uVar3,uVar10,auStack_2d0,0);
      *param_2 = lVar7;
    }
  }
  return uVar2 & 1;
}


