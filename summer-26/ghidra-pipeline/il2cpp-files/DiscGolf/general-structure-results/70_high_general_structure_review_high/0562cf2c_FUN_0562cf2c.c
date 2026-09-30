/*
FUNCTION_NAME: FUN_0562cf2c
ENTRY_POINT: 0562cf2c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_10;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void FUN_0562cf2c(long param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_58;
  long local_48;
  
  puVar2 = System_Func<StyleValues,_StyleValues,_float,_StyleValues>_TypeInfo;
  if ((DAT_06dbbad8 & 1) == 0) {
    FUN_02d965b8(
                System_Func<UpdateBackfillTicketRequest,_string,_Configuration,_Task<Response>>_TypeInfo
                );
    FUN_02d965b8(System_Func<Vector2,_TrackableType,_Allocator,_NativeArray<XRRaycastHit>>_TypeInfo)
    ;
    FUN_02d965b8(System_Func<StyleValues,_StyleValues,_float,_StyleValues>_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0e8c0);
    FUN_02d965b8(
                System_Func<Vector3,_Vector3,_ValueTuple<EventModifiers,_Nullable<int>>,_EventBase>_TypeInfo
                );
    DAT_06dbbad8 = 1;
  }
  local_48 = 0;
  local_58 = 0;
  FUN_0552aca4(param_1,0);
  FUN_0562d130();
  uVar7 = param_3[1];
  uVar4 = *param_3;
  *(undefined8 *)(param_1 + 0x58) = param_6;
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  LeanTween__value((undefined8 *)(param_1 + 0x58),param_6);
  *(undefined8 *)(param_1 + 0x48) = param_4;
  LeanTween__value((undefined8 *)(param_1 + 0x48),param_4);
  *(undefined8 *)(param_1 + 0x50) = param_5;
  LeanTween__value((undefined8 *)(param_1 + 0x50),param_5);
  lVar6 = *(long *)puVar2;
  *(undefined4 *)(param_1 + 0x60) = param_2;
  puVar1 = PTR_DAT_06a0e8c0;
  lVar6 = **(long **)(lVar6 + 0xb8);
  if (lVar6 != 0) {
    uVar3 = FUN_04dfa0cc(lVar6,param_2,&local_48,
                         *(undefined8 *)
                          System_Func<UpdateBackfillTicketRequest,_string,_Configuration,_Task<Response>>_TypeInfo
                        );
    if ((uVar3 & 1) == 0) {
      lVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                  System_Func<Vector3,_Vector3,_ValueTuple<EventModifiers,_Nullable<int>>,_EventBase>_TypeInfo
                                );
      FUN_0552aca4(lVar6,0);
      lVar5 = **(long **)(*(long *)puVar2 + 0xb8);
      local_48 = lVar6;
      if (lVar5 == 0) goto LAB_0562d12c;
      FUN_04df85dc(lVar5,param_2,lVar6,
                   *(undefined8 *)
                    System_Func<Vector2,_TrackableType,_Allocator,_NativeArray<XRRaycastHit>>_TypeInfo
                  );
    }
    else {
      if (local_48 == 0) goto LAB_0562d12c;
      uVar3 = FUN_0562d1e4(local_48,&local_58);
      if ((uVar3 & 1) != 0) {
        FUN_0562d258(param_1,&local_58,&local_48);
        uVar4 = FUN_0562d28c(param_1);
        goto LAB_0562d0dc;
      }
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
    if (local_48 != 0) {
      OVR_OpenVR_IVRScreenshots__HookScreenshot___ctor(local_48,param_1,param_2);
      uVar4 = FUN_0562d650(param_1);
LAB_0562d0dc:
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)puVar1);
      }
      uVar4 = FUN_0563d448(uVar4,0);
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      LeanTween__value((undefined8 *)(param_1 + 0x10),0);
      return;
    }
  }
LAB_0562d12c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


