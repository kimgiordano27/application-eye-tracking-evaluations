/*
FUNCTION_NAME: FUN_03f8ac20
ENTRY_POINT: 03f8ac20
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_03f8ac20(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  if ((DAT_0483b6bf & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
    thunk_FUN_01efb3a4(PTR_DAT_04581b58);
    thunk_FUN_01efb3a4(Method_System_Net_WebRequestStream_TryReadFromBufferedContent__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GraphicsBuffer_SetData<float4>__);
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_GraphicsFence_InitPostAllocation__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04581b70);
    thunk_FUN_01efb3a4(PTR_DAT_04581b78);
    thunk_FUN_01efb3a4(PTR_DAT_04581b80);
    thunk_FUN_01efb3a4(PTR_DAT_04581b88);
    thunk_FUN_01efb3a4(PTR_DAT_04581b90);
    thunk_FUN_01efb3a4(PTR_DAT_04581b50);
    thunk_FUN_01efb3a4(PTR_DAT_04581b98);
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToDecimal__);
    DAT_0483b6bf = 1;
  }
  local_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((DAT_0483b73e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    DAT_0483b73e = 1;
  }
  puVar4 = PTR_DAT_04581b80;
  puVar3 = PTR_DAT_04581b50;
  puVar2 = Method_System_DBNull_System_IConvertible_ToDecimal__;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((*(long **)(param_2 + 0x10) == (long *)0x0) ||
     (**(long **)(param_2 + 0x10) !=
      *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)) {
    local_60 = FUN_03f8b264(param_2);
    local_70 = *(undefined8 *)puVar3;
    uStack_68 = 0xffffffffffffffff;
    uVar5 = FUN_0359ff90(&local_70,0);
    uVar5 = FUN_03405678(*(undefined8 *)puVar4,uVar5,0);
    goto LAB_03f8adb4;
  }
  uVar5 = *(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData<float4>__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_03579868(uVar5,0);
  uVar6 = FUN_03582560(param_4,uVar5,0);
  if ((uVar6 & 1) == 0) {
    uVar5 = *(undefined8 *)PTR_DAT_04581b58;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_03579868(uVar5,0);
    uVar6 = FUN_03582560(param_4,uVar5,0);
    if ((uVar6 & 1) == 0) {
      uVar5 = *(undefined8 *)Method_UnityEngine_Rendering_GraphicsFence_InitPostAllocation__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_03579868(uVar5,0);
      uVar6 = FUN_03582560(param_4,uVar5,0);
      if ((uVar6 & 1) == 0) {
        thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
        uVar5 = thunk_FUN_01f117cc();
        uVar7 = thunk_FUN_01efb3a4(PTR_DAT_04581ba0);
        FUN_0356adc8(uVar5,uVar7,0);
        uVar7 = thunk_FUN_01efb3a4(PTR_DAT_04581ba8);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar5,uVar7);
      }
      uVar5 = FUN_03f8b518(param_2);
      puVar9 = (undefined8 *)
               Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                          );
      }
      uVar6 = FUN_03581bfc(uVar5,&local_58,0);
      uVar5 = local_58;
      if ((uVar6 & 1) != 0) goto LAB_03f8b018;
      uVar5 = FUN_03f8b518(param_2);
      puVar9 = (undefined8 *)PTR_DAT_04581b90;
    }
    else {
      uVar5 = FUN_03f8b518(param_2);
      puVar1 = Method_System_Net_WebRequestStream_TryReadFromBufferedContent__;
      if (*(int *)(*(long *)Method_System_Net_WebRequestStream_TryReadFromBufferedContent__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c(*(long *)Method_System_Net_WebRequestStream_TryReadFromBufferedContent__)
        ;
      }
      uVar6 = FUN_035524c0(uVar5,0,0x80,&local_50,0);
      if ((uVar6 & 1) != 0) {
        uVar7 = *(undefined8 *)puVar1;
        uStack_68 = uStack_48;
        local_70 = local_50;
        goto LAB_03f8b020;
      }
      uVar5 = FUN_03f8b518(param_2);
      puVar9 = (undefined8 *)PTR_DAT_04581b70;
    }
LAB_03f8b0a8:
    uVar5 = FUN_0340ebc0(*(undefined8 *)PTR_DAT_04581b78,uVar5,*puVar9,0);
LAB_03f8adb4:
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar5 = FUN_03f8b40c(uVar5);
    return uVar5;
  }
  uVar5 = FUN_03f8b518(param_2);
  puVar9 = (undefined8 *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
  }
  uVar6 = FUN_0354f870(uVar5,0,0x80,&local_38,0);
  puVar1 = PTR_DAT_04581b98;
  uVar5 = local_38;
  if ((uVar6 & 1) == 0) {
    lVar8 = *(long *)PTR_DAT_04581b98;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar8 = *(long *)puVar1;
    }
    if (*(char *)(*(long *)(lVar8 + 0xb8) + 1) == '\0') {
      uVar5 = FUN_03f8b518(param_2);
      puVar9 = (undefined8 *)PTR_DAT_04581b88;
      goto LAB_03f8b0a8;
    }
    uVar5 = FUN_03f8b518(param_2);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    local_70 = FUN_03503e30(uVar5,0);
    uVar5 = thunk_FUN_01f113fc(*puVar9,&local_70);
    *param_3 = uVar5;
    thunk_FUN_01f51358(param_3);
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe0) != 0) goto LAB_03f8b04c;
    thunk_FUN_01ee6d7c();
  }
  else {
LAB_03f8b018:
    uVar7 = *puVar9;
    local_70 = uVar5;
LAB_03f8b020:
    uVar5 = thunk_FUN_01f113fc(uVar7,&local_70);
    *param_3 = uVar5;
    thunk_FUN_01f51358(param_3,uVar5);
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe0) != 0) goto LAB_03f8b04c;
    thunk_FUN_01ee6d7c();
  }
  lVar8 = *(long *)puVar2;
LAB_03f8b04c:
  return *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
}


