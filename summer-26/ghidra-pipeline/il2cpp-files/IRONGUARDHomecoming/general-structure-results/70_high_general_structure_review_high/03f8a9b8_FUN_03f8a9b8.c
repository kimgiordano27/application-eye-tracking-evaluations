/*
FUNCTION_NAME: FUN_03f8a9b8
ENTRY_POINT: 03f8a9b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1  [16] FUN_03f8a9b8(undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  
  if ((DAT_0483b6be & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Net_WebRequestStream_TryReadFromBufferedContent__);
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(StringLiteral_12631);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__)
    ;
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToDecimal__);
    DAT_0483b6be = 1;
  }
  puVar3 = Method_System_Net_WebRequestStream_TryReadFromBufferedContent__;
  puVar2 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
  puVar1 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  local_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  if (param_2 != (long *)0x0) {
    lVar7 = *param_2;
    if (lVar7 == *(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__) {
      puVar4 = (undefined8 *)thunk_FUN_01f11920(param_2);
      local_28 = *puVar4;
      uVar5 = FUN_03f8a828(param_1);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar1);
      }
      uVar5 = FUN_0354f368(&local_28,uVar5,0);
    }
    else if (lVar7 == *(long *)Method_System_Net_WebRequestStream_TryReadFromBufferedContent__) {
      puVar4 = (undefined8 *)thunk_FUN_01f11920(param_2);
      uStack_38 = puVar4[1];
      local_40 = *puVar4;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_03551d78(&local_40,*(undefined8 *)StringLiteral_12631,0);
    }
    else {
      if (lVar7 != *(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
         ) goto LAB_03f8aba8;
      puVar4 = (undefined8 *)thunk_FUN_01f11920(param_2);
      local_48 = *puVar4;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_03581d3c(&local_48,0);
    }
    lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_System_Linq_Enumerable_GroupBy<KeyValuePair<Vector3,_int>,_Vector3>__
                              );
    FUN_035ac8e8(lVar7,0);
    *(undefined8 *)(lVar7 + 0x10) = uVar5;
    thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x10),uVar5);
    *param_3 = lVar7;
    thunk_FUN_01f51358(param_3,lVar7);
    puVar1 = Method_System_DBNull_System_IConvertible_ToDecimal__;
    lVar7 = *(long *)Method_System_DBNull_System_IConvertible_ToDecimal__;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar7 = *(long *)puVar1;
    }
    return *(undefined1 (*) [16])(*(long *)(lVar7 + 0xb8) + 8);
  }
LAB_03f8aba8:
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
  uVar5 = thunk_FUN_01f117cc();
  uVar6 = thunk_FUN_01efb3a4(PTR_DAT_04581b60);
  FUN_0356adc8(uVar5,uVar6,0);
  uVar6 = thunk_FUN_01efb3a4(PTR_DAT_04581b68);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar6);
}


