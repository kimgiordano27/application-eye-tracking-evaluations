/*
FUNCTION_NAME: FUN_020c3974
ENTRY_POINT: 020c3974
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_020c3974(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar6 = Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__;
  if ((DAT_03780ec2 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<VisualElement>__ctor__);
    thunk_FUN_00d48444(Method_Meta_WitAi_Requests_VRequest_<Dispose>b__101_0__);
    DAT_03780ec2 = 1;
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar2 = FUN_01fc7e94(param_2,0,0);
  if ((uVar2 & 1) != 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar3 = thunk_FUN_00d48444(Method_System_Threading_Tasks_Task<int>_GetAwaiter__);
    FUN_016ec5b8(uVar5,uVar3,0);
    goto LAB_020c3be4;
  }
  if (param_2 == 0) goto LAB_020c3b04;
  uVar2 = FUN_01fc3c28(param_2,0);
  puVar6 = Method_Meta_WitAi_Requests_VRequest_<Dispose>b__101_0__;
  if ((uVar2 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar6 = Method_System_Data_Common_Int32Storage_Aggregate__;
LAB_020c3bbc:
    uVar3 = thunk_FUN_00d48444(puVar6);
    uVar7 = thunk_FUN_00d48444(Method_System_Threading_Tasks_Task<int>_GetAwaiter__);
    FUN_016ec624(uVar5,uVar3,uVar7,0);
  }
  else {
    uVar3 = FUN_01fc72ec(param_2,0);
    uVar2 = FUN_015fe7e8(uVar3,*(undefined8 *)puVar6,0);
    puVar6 = Method_System_Collections_Generic_List<VisualElement>__ctor__;
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_01fc72ec(param_2,0);
      uVar2 = FUN_015fe7e8(uVar3,*(undefined8 *)puVar6,0);
      if ((uVar2 & 1) != 0) {
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        uVar5 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        puVar6 = Method_System_ThrowHelper_ThrowWrongKeyTypeArgumentException__;
        goto LAB_020c3bbc;
      }
    }
    iVar1 = thunk_FUN_00d74568(param_1 + 0x20,1,0,0);
    if (iVar1 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x10) = 1;
        FUN_020c3c08(param_1,param_2,param_3);
        return;
      }
LAB_020c3b04:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (iVar1 == 3) {
      plVar4 = (long *)thunk_FUN_00d93c64(param_1,0);
      FUN_00ac2be8();
      uVar3 = (**(code **)(*plVar4 + 0x308))(plVar4,*(undefined8 *)(*plVar4 + 0x310));
      thunk_FUN_00d48444(StringLiteral_7734);
      uVar5 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_017800f4(uVar5,uVar3,0);
      uVar3 = thunk_FUN_00d48444(Method_System_RuntimeType_CreateInstanceImpl__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar5,uVar3);
    }
    thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar3 = thunk_FUN_00d48444(
                              Method_Oculus_Interaction_PoseDetection_TransformFeatureConfigBuilder_<>c_<_cctor>b__29_5__
                              );
    FUN_017713a8(uVar5,uVar3,0);
  }
LAB_020c3be4:
  uVar3 = thunk_FUN_00d48444(Method_System_RuntimeType_CreateInstanceImpl__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar5,uVar3);
}


