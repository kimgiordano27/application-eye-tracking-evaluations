/*
FUNCTION_NAME: FUN_0572831c
ENTRY_POINT: 0572831c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0572831c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_06bc07df & 1) == 0) {
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000963_BurstDirectCall_TypeInfo
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float2>__ctor__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>__ctor__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float3>__ctor__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_ContainsKey__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_Add__
                );
    FUN_02f08768(PTR_DAT_067cd778);
    FUN_02f08768(PTR_DAT_067ca7d0);
    DAT_06bc07df = 1;
  }
  puVar1 = 
  UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000963_BurstDirectCall_TypeInfo
  ;
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x98) == 0) {
      FUN_05857240(param_1,*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_ContainsKey__
                   ,*(undefined8 *)PTR_DAT_067cd778,param_2,0);
    }
    else {
      FUN_057294bc(param_1,param_2);
      uVar6 = *(undefined8 *)(param_2 + 0x98);
      uVar7 = *(undefined8 *)(param_1 + 0x50);
      uVar2 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_0582534c(uVar2,uVar6,uVar7,0);
      *(undefined8 *)(param_2 + 0xc0) = uVar2;
    }
    FUN_0572a09c(param_1,param_2);
    uVar5 = *(uint *)(param_2 + 0x80);
    if (uVar5 != 0xff) {
      if (uVar5 == 0x100) {
        uVar5 = *(uint *)(param_1 + 0x74);
        if (uVar5 != 0xff) {
          uVar5 = uVar5 & 6;
        }
      }
      else {
        if ((uVar5 & 0xfffffff9) != 0) {
          FUN_058572c8(param_1,*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<StyleSheetCache_SheetHandleKey,_StylePropertyId[]>__ctor__
                       ,param_2,0);
          uVar5 = *(uint *)(param_2 + 0x80);
        }
        uVar5 = uVar5 & 6;
      }
    }
    puVar1 = 
    Method_System_Collections_Generic_Dictionary<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_Add__
    ;
    *(uint *)(param_2 + 0xd4) = uVar5;
    if (*(int *)(param_2 + 0x84) != 0) {
      FUN_05857240(param_1,*(undefined8 *)puVar1,
                   *(undefined8 *)
                    Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>_TryGetBodyJointId__
                   ,param_2,0);
    }
    lVar3 = FUN_05772dd8(param_2,0);
    if (lVar3 != 0) {
      FUN_05857240(param_1,*(undefined8 *)puVar1,
                   *(undefined8 *)
                    Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float2>__ctor__
                   ,param_2,0);
    }
    lVar3 = FUN_05772fa4(param_2,0);
    if (lVar3 != 0) {
      FUN_05857240(param_1,*(undefined8 *)puVar1,
                   *(undefined8 *)
                    Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAsyncAffordanceStateReceiver<float3>__ctor__
                   ,param_2,0);
    }
    if (*(long *)(param_2 + 0xa8) != 0) {
      uVar4 = FUN_05825608(*(long *)(param_2 + 0xa8),0);
      if ((uVar4 & 1) == 0) {
        FUN_05729b28(param_1,param_2,*(undefined8 *)PTR_DAT_067ca7d0,*(undefined8 *)(param_2 + 0xa8)
                    );
      }
      FUN_05725d60(param_1,param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


