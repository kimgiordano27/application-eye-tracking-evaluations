/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$SetGlobalMatrixArray
ENTRY_POINT: 03f8aca4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


undefined8 UnityEngine_Rendering_CommandBuffer__SetGlobalMatrixArray(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xb38));
  thunk_FUN_01efb3a4(PTR_DAT_04581b70);
  thunk_FUN_01efb3a4(PTR_DAT_04581b78);
  thunk_FUN_01efb3a4(PTR_DAT_04581b80);
  thunk_FUN_01efb3a4(PTR_DAT_04581b88);
  thunk_FUN_01efb3a4(PTR_DAT_04581b90);
  thunk_FUN_01efb3a4(PTR_DAT_04581b50);
  thunk_FUN_01efb3a4(PTR_DAT_04581b98);
  thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToDecimal__);
  *(undefined1 *)(unaff_x22 + 0x6bf) = 1;
  in_stack_00000038 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((DAT_0483b73e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    DAT_0483b73e = 1;
  }
  puVar3 = PTR_DAT_04581b80;
  puVar2 = Method_System_DBNull_System_IConvertible_ToDecimal__;
  puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((*(long **)(unaff_x19 + 0x10) == (long *)0x0) ||
     (**(long **)(unaff_x19 + 0x10) !=
      *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)) {
    FUN_03f8b264();
    uVar4 = FUN_0359ff90();
    uVar4 = FUN_03405678(*(undefined8 *)puVar3,uVar4,0);
    goto LAB_03f8adb4;
  }
  uVar4 = *(undefined8 *)Method_UnityEngine_GraphicsBuffer_SetData<float4>__;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_03579868(uVar4,0);
  uVar5 = FUN_03582560();
  if ((uVar5 & 1) == 0) {
    uVar4 = *(undefined8 *)PTR_DAT_04581b58;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03579868(uVar4,0);
    uVar5 = FUN_03582560();
    if ((uVar5 & 1) == 0) {
      uVar4 = *(undefined8 *)Method_UnityEngine_Rendering_GraphicsFence_InitPostAllocation__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_03579868(uVar4,0);
      uVar5 = FUN_03582560();
      if ((uVar5 & 1) == 0) {
        thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
        uVar4 = thunk_FUN_01f117cc();
        uVar7 = thunk_FUN_01efb3a4(PTR_DAT_04581ba0);
        FUN_0356adc8(uVar4,uVar7,0);
        uVar7 = thunk_FUN_01efb3a4(PTR_DAT_04581ba8);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar4,uVar7);
      }
      uVar4 = FUN_03f8b518();
      puVar8 = (undefined8 *)
               Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                          );
      }
      uVar5 = FUN_03581bfc(uVar4,&stack0x00000018,0);
      if ((uVar5 & 1) != 0) goto LAB_03f8b018;
      uVar4 = FUN_03f8b518();
      puVar8 = (undefined8 *)PTR_DAT_04581b90;
    }
    else {
      uVar4 = FUN_03f8b518();
      puVar1 = Method_System_Net_WebRequestStream_TryReadFromBufferedContent__;
      if (*(int *)(*(long *)Method_System_Net_WebRequestStream_TryReadFromBufferedContent__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c(*(long *)Method_System_Net_WebRequestStream_TryReadFromBufferedContent__)
        ;
      }
      uVar5 = FUN_035524c0(uVar4,0,0x80,&stack0x00000020,0);
      if ((uVar5 & 1) != 0) {
        uVar4 = *(undefined8 *)puVar1;
        goto LAB_03f8b020;
      }
      uVar4 = FUN_03f8b518();
      puVar8 = (undefined8 *)PTR_DAT_04581b70;
    }
LAB_03f8b0a8:
    uVar4 = FUN_0340ebc0(*(undefined8 *)PTR_DAT_04581b78,uVar4,*puVar8,0);
LAB_03f8adb4:
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar4 = FUN_03f8b40c(uVar4);
    return uVar4;
  }
  uVar4 = FUN_03f8b518();
  puVar8 = (undefined8 *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
  }
  uVar5 = FUN_0354f870(uVar4,0,0x80,&stack0x00000038,0);
  puVar1 = PTR_DAT_04581b98;
  if ((uVar5 & 1) == 0) {
    lVar6 = *(long *)PTR_DAT_04581b98;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *(long *)puVar1;
    }
    if (*(char *)(*(long *)(lVar6 + 0xb8) + 1) == '\0') {
      uVar4 = FUN_03f8b518();
      puVar8 = (undefined8 *)PTR_DAT_04581b88;
      goto LAB_03f8b0a8;
    }
    uVar4 = FUN_03f8b518();
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03503e30(uVar4,0);
    uVar4 = thunk_FUN_01f113fc(*puVar8);
    *unaff_x20 = uVar4;
    thunk_FUN_01f51358();
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) != 0) goto LAB_03f8b04c;
    thunk_FUN_01ee6d7c();
  }
  else {
LAB_03f8b018:
    uVar4 = *puVar8;
LAB_03f8b020:
    uVar4 = thunk_FUN_01f113fc(uVar4);
    *unaff_x20 = uVar4;
    thunk_FUN_01f51358();
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) != 0) goto LAB_03f8b04c;
    thunk_FUN_01ee6d7c();
  }
  lVar6 = *(long *)puVar2;
LAB_03f8b04c:
  return *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
}


