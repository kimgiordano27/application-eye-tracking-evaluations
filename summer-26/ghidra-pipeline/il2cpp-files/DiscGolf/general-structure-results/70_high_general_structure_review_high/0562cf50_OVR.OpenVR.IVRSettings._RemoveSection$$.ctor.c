/*
FUNCTION_NAME: OVR.OpenVR.IVRSettings._RemoveSection$$.ctor
ENTRY_POINT: 0562cf50
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


void OVR_OpenVR_IVRSettings__RemoveSection___ctor
               (long param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 unaff_x23;
  long unaff_x25;
  long *plVar6;
  long unaff_x26;
  undefined8 uVar7;
  undefined8 in_stack_00000008;
  long in_stack_00000018;
  
  plVar6 = *(long **)(unaff_x25 + 0x368);
  if ((*(byte *)(unaff_x26 + 0xad8) & 1) == 0) {
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
    *(undefined1 *)(unaff_x26 + 0xad8) = 1;
  }
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  FUN_0552aca4(param_1,0);
  FUN_0562d130();
  uVar7 = param_3[1];
  uVar3 = *param_3;
  *(undefined8 *)(param_1 + 0x58) = unaff_x23;
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  LeanTween__value();
  *(undefined8 *)(param_1 + 0x48) = param_4;
  LeanTween__value((undefined8 *)(param_1 + 0x48),param_4);
  *(undefined8 *)(param_1 + 0x50) = param_5;
  LeanTween__value((undefined8 *)(param_1 + 0x50),param_5);
  lVar5 = *plVar6;
  *(undefined4 *)(param_1 + 0x60) = param_2;
  puVar1 = PTR_DAT_06a0e8c0;
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (lVar5 != 0) {
    uVar2 = FUN_04dfa0cc(lVar5,param_2,&stack0x00000018,
                         *(undefined8 *)
                          System_Func<UpdateBackfillTicketRequest,_string,_Configuration,_Task<Response>>_TypeInfo
                        );
    if ((uVar2 & 1) == 0) {
      lVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                  System_Func<Vector3,_Vector3,_ValueTuple<EventModifiers,_Nullable<int>>,_EventBase>_TypeInfo
                                );
      FUN_0552aca4(lVar5,0);
      lVar4 = **(long **)(*plVar6 + 0xb8);
      in_stack_00000018 = lVar5;
      if (lVar4 == 0) goto LAB_0562d12c;
      FUN_04df85dc(lVar4,param_2,lVar5,
                   *(undefined8 *)
                    System_Func<Vector2,_TrackableType,_Allocator,_NativeArray<XRRaycastHit>>_TypeInfo
                  );
    }
    else {
      if (in_stack_00000018 == 0) goto LAB_0562d12c;
      uVar2 = FUN_0562d1e4(in_stack_00000018,&stack0x00000008);
      if ((uVar2 & 1) != 0) {
        FUN_0562d258(param_1,&stack0x00000008,&stack0x00000018);
        uVar3 = FUN_0562d28c(param_1);
        goto LAB_0562d0dc;
      }
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
    if (in_stack_00000018 != 0) {
      OVR_OpenVR_IVRScreenshots__HookScreenshot___ctor(in_stack_00000018,param_1,param_2);
      uVar3 = FUN_0562d650(param_1);
LAB_0562d0dc:
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)puVar1);
      }
      uVar3 = FUN_0563d448(uVar3,0);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      LeanTween__value((undefined8 *)(param_1 + 0x10),0);
      return;
    }
  }
LAB_0562d12c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


