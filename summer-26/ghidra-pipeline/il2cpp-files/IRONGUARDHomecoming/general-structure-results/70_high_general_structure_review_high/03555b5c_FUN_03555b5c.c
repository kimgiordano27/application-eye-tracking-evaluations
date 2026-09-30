/*
FUNCTION_NAME: FUN_03555b5c
ENTRY_POINT: 03555b5c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03555b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,uint param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar2 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__;
                    /* try { // try from 03555b70 to 03655b77 has its CatchHandler @ 03555ce8 */
                    /* try { // try from 03555b88 to 03655bbf has its CatchHandler @ 03555da0 */
  local_50 = param_2;
  uStack_48 = param_1;
  if ((DAT_048331ea & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_36__);
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(Method_System_Net_WebConnectionStream_set_WriteTimeout__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_s8__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u16__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
    DAT_048331ea = 1;
  }
  puVar3 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar2;
  }
  uVar9 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar3);
  }
  uVar6 = FUN_035820a4(param_2,uVar9,0);
  puVar2 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  if ((uVar6 & 1) == 0) goto LAB_03555d44;
  if ((param_6 & 1) == 0) {
LAB_03555c94:
    if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
    iVar4 = FUN_0354dfec(&uStack_48);
    if (iVar4 == 1) {
      lVar5 = *(long *)puVar3;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar3;
      }
      param_2 = **(undefined8 **)(lVar5 + 0xb8);
      local_50 = param_2;
      goto LAB_03555d44;
    }
    lVar5 = *(long *)Method_System_Net_WebConnectionStream_set_WriteTimeout__;
    iVar4 = *(int *)(lVar5 + 0xe0);
  }
  else {
    if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
    lVar5 = FUN_0354e060(&uStack_48);
    if (863999999999 < lVar5) goto LAB_03555c94;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    param_1 = FUN_0354e6e4();
    lVar5 = *(long *)Method_System_Net_WebConnectionStream_set_WriteTimeout__;
    iVar4 = *(int *)(lVar5 + 0xe0);
  }
  if (iVar4 == 0) {
    thunk_FUN_01ee6d7c(lVar5);
  }
  param_2 = FUN_034ef434(param_1,2,0);
  local_50 = param_2;
LAB_03555d44:
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar3;
  }
  uVar6 = FUN_035820e0(param_2,**(undefined8 **)(lVar5 + 0xb8),0);
  puVar2 = Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__;
  if (param_7 != 0) {
    if ((uVar6 & 1) == 0) {
      FUN_03419060(param_7,0x2d,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      local_50 = FUN_03581a80(&local_50,0);
    }
    else {
      FUN_03419060(param_7,0x2b,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = FUN_03532f80(0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar3);
    }
    local_54 = FUN_03581488(&local_50,0);
    puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    if (param_5 < 2) {
      uVar7 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                 ,&local_54);
      puVar8 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__;
    }
    else {
      uVar7 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                 ,&local_54);
      FUN_0341a130(param_7,uVar9,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u16__,
                   uVar7,0);
      if (param_5 == 2) {
        return;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar9 = FUN_03532f80(0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar3);
      }
      local_54 = FUN_03581518(&local_50,0);
      uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_54);
      puVar8 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_s8__;
    }
    FUN_0341a130(param_7,uVar9,*puVar8,uVar7,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


