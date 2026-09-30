/*
FUNCTION_NAME: FUN_032488e8
ENTRY_POINT: 032488e8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8
FUN_032488e8(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((DAT_03ff47cd & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_System_Collections_Stack_StackEnumerator_get_Current__);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d84628);
    thunk_FUN_01ad9084(PTR_DAT_03d84630);
    thunk_FUN_01ad9084(PTR_DAT_03d84638);
    DAT_03ff47cd = 1;
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  *param_3 = 0;
  *param_4 = 0;
  if ((param_2 != 0) &&
     (lVar4 = FUN_0391fab4(param_2,0),
     puVar3 = Method_System_Collections_Stack_StackEnumerator_get_Current__,
     puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__, lVar4 != 0)) {
    FUN_03928848(&local_110,lVar4,0);
    uStack_a8 = uStack_e8;
    local_b0 = local_f0;
    uStack_98 = uStack_d8;
    uStack_a0 = uStack_e0;
    uStack_c8 = uStack_108;
    local_d0 = local_110;
    uStack_b8 = uStack_f8;
    uStack_c0 = uStack_100;
    param_5[5] = uStack_e8;
    param_5[4] = local_f0;
    param_5[7] = uStack_d8;
    param_5[6] = uStack_e0;
    param_5[1] = uStack_108;
    *param_5 = local_110;
    param_5[3] = uStack_f8;
    param_5[2] = uStack_100;
    lVar4 = FUN_01ed712c(param_2,*(undefined8 *)puVar3);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar2);
    }
    uVar5 = FUN_03922f24(lVar4,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f2e04(*(undefined8 *)PTR_DAT_03d84638,0);
      return 0;
    }
    if ((lVar4 != 0) && (lVar4 = FUN_03900d8c(lVar4,0), lVar4 != 0)) {
      uVar6 = FUN_039025e0(lVar4,0);
      uVar7 = FUN_03903f58(lVar4,0);
      uStack_128 = param_5[5];
      local_130 = param_5[4];
      uStack_118 = param_5[7];
      uStack_120 = param_5[6];
      uStack_148 = param_5[1];
      local_150 = *param_5;
      uStack_138 = param_5[3];
      uStack_140 = param_5[2];
      FUN_03248ba4(&local_90,param_1,&local_150);
      puVar2 = 
      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
      ;
      if (*(long *)(param_1 + 0xd0) != 0) {
        uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x124);
        if (*(int *)(*(long *)
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = System_Linq_Expressions_Interpreter_ArrayByRefUpdater__UndefineTemps
                          (uVar1,uVar6,uVar7,param_3);
        if ((uVar5 & 1) == 0) {
          puVar8 = (undefined8 *)PTR_DAT_03d84630;
          if (*(int *)(*(long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            puVar8 = (undefined8 *)PTR_DAT_03d84630;
          }
        }
        else {
          if (*(long *)(param_1 + 0xd0) == 0) goto LAB_03248ba0;
          uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x124);
          uVar6 = *param_3;
          uStack_c8 = uStack_88;
          local_d0 = local_90;
          uStack_b8 = uStack_78;
          uStack_c0 = uStack_80;
          uStack_a8 = uStack_68;
          local_b0 = local_70;
          uStack_98 = uStack_58;
          uStack_a0 = uStack_60;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uStack_188 = uStack_c8;
          local_190 = local_d0;
          uStack_178 = uStack_b8;
          uStack_180 = uStack_c0;
          uStack_168 = uStack_a8;
          local_170 = local_b0;
          uStack_158 = uStack_98;
          uStack_160 = uStack_a0;
          uVar5 = FUN_03249070(uVar1,uVar6,&local_190,param_4);
          if ((uVar5 & 1) != 0) {
            return 1;
          }
          puVar8 = (undefined8 *)PTR_DAT_03d84628;
          if (*(int *)(*(long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            puVar8 = (undefined8 *)PTR_DAT_03d84628;
          }
        }
        FUN_038f336c(*puVar8,0);
        return 0;
      }
    }
  }
LAB_03248ba0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


