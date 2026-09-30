/*
FUNCTION_NAME: OVR.OpenVR.IVRSettings._RemoveSection$$Invoke
ENTRY_POINT: 0562d004
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_5;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void OVR_OpenVR_IVRSettings__RemoveSection__Invoke(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x22;
  long *unaff_x25;
  long in_stack_00000018;
  
  LeanTween__value();
  lVar4 = *unaff_x25;
  *(undefined4 *)(unaff_x22 + 0x10) = unaff_w20;
  puVar1 = PTR_DAT_06a0e8c0;
  if (**(long **)(lVar4 + 0xb8) != 0) {
    uVar2 = FUN_04dfa0cc(**(long **)(lVar4 + 0xb8),unaff_w20,&stack0x00000018,
                         *(undefined8 *)
                          System_Func<UpdateBackfillTicketRequest,_string,_Configuration,_Task<Response>>_TypeInfo
                        );
    if ((uVar2 & 1) == 0) {
      lVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                  System_Func<Vector3,_Vector3,_ValueTuple<EventModifiers,_Nullable<int>>,_EventBase>_TypeInfo
                                );
      FUN_0552aca4(lVar4,0);
      in_stack_00000018 = lVar4;
      if (**(long **)(*unaff_x25 + 0xb8) == 0) goto LAB_0562d12c;
      FUN_04df85dc(**(long **)(*unaff_x25 + 0xb8),unaff_w20,lVar4,
                   *(undefined8 *)
                    System_Func<Vector2,_TrackableType,_Allocator,_NativeArray<XRRaycastHit>>_TypeInfo
                  );
    }
    else {
      if (in_stack_00000018 == 0) goto LAB_0562d12c;
      uVar2 = FUN_0562d1e4(in_stack_00000018,&stack0x00000008);
      if ((uVar2 & 1) != 0) {
        FUN_0562d258();
        uVar3 = FUN_0562d28c();
        goto LAB_0562d0dc;
      }
    }
    *(undefined1 *)(unaff_x19 + 0x18) = 1;
    if (in_stack_00000018 != 0) {
      OVR_OpenVR_IVRScreenshots__HookScreenshot___ctor();
      uVar3 = FUN_0562d650();
LAB_0562d0dc:
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)puVar1);
      }
      uVar3 = FUN_0563d448(uVar3,0);
      *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
      LeanTween__value((undefined8 *)(unaff_x19 + 0x10),0);
      return;
    }
  }
LAB_0562d12c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


