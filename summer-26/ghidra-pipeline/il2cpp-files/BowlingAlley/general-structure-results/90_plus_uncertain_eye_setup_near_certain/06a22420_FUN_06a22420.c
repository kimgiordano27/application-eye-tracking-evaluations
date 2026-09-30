/*
FUNCTION_NAME: FUN_06a22420
ENTRY_POINT: 06a22420
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06a22420(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_50 [16];
  undefined4 local_38;
  undefined4 local_34;
  
  puVar1 = Method_Unity_Properties_Property<Bounds,_Vector3>__ctor__;
  if ((DAT_076e2a21 & 1) == 0) {
    thunk_FUN_032e1da0(Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__);
    thunk_FUN_032e1da0(Method_Unity_Properties_Property<BoundsInt,_Vector3Int>__ctor__);
    thunk_FUN_032e1da0(Method_Unity_Properties_Property<Bounds,_Vector3>__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(PTR_DAT_0727fcb8);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureEvent>_get_pointerId__
                      );
    thunk_FUN_032e1da0(Method_Unity_Properties_Property<Rect,_float>__ctor__);
    DAT_076e2a21 = 1;
  }
  *(undefined4 *)(param_1 + 0x28) = param_2;
  lVar4 = FUN_03958adc(param_1,*(undefined8 *)puVar1);
  puVar3 = 
  Method_UnityEngine_UIElements_PointerCaptureEventBase<PointerCaptureEvent>_get_pointerId__;
  puVar2 = PTR_DAT_0727fcb8;
  if (lVar4 != 0) {
    local_50 = FUN_05013cdc(lVar4,*(undefined8 *)
                                   Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__
                           );
    uVar5 = thunk_FUN_032a52d0(*(undefined8 *)puVar2,local_50);
    local_34 = *(undefined4 *)(param_1 + 0x28);
    uVar6 = thunk_FUN_032a52d0(*(undefined8 *)puVar3,&local_34);
    lVar4 = FUN_03958adc(param_1,*(undefined8 *)puVar1);
    puVar2 = Method_Unity_Properties_Property<Rect,_float>__ctor__;
    puVar1 = PTR_DAT_072798f8;
    if (lVar4 != 0) {
      local_38 = FUN_05013d38(lVar4,*(undefined8 *)
                                     Method_Unity_Properties_Property<BoundsInt,_Vector3Int>__ctor__
                             );
      uVar7 = thunk_FUN_032a52d0(*(undefined8 *)puVar3,&local_38);
      uVar5 = FUN_057ab660(*(undefined8 *)puVar2,uVar5,uVar6,uVar7,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)puVar1);
      }
      FUN_06bb23f0(uVar5,0);
      FUN_06a225b8(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


