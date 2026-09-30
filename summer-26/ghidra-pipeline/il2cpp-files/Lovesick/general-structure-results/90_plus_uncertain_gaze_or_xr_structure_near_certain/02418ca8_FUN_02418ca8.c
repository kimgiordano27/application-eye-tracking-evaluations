/*
FUNCTION_NAME: FUN_02418ca8
ENTRY_POINT: 02418ca8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_02418ca8(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar8 = StringLiteral_12181;
  puVar7 = 
  Method_UnityEngine_XR_ARFoundation_TrackableCollection<__Il2CppFullySharedGenericType>_get_count__
  ;
  puVar6 = Method_System_Collections_Generic_List<BoneCapsule>_AsReadOnly__;
  puVar5 = Method_System_Collections_Generic_LinkedList<UIRenderDevice_DeviceToFree>_get_First__;
  puVar4 = Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>_Dispose__;
  puVar3 = Obi_MeshVoxelizer_<Voxelize>d__29_TypeInfo;
  puVar2 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000938_PostfixBurstDelegate_var
  ;
  puVar1 = PTR_DAT_033f0bd8;
  if ((DAT_03782322 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IGroupBoxOption>_GetEnumerator__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<BoneCapsule>_AsReadOnly__);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<ConfigurationDescriptor>_Dispose__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vdupq_lane_s16__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_LinkedList<UIRenderDevice_DeviceToFree>_get_First__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARFoundation_TrackableCollection<__Il2CppFullySharedGenericType>_get_count__
                      );
    thunk_FUN_00d48444(Obi_MeshVoxelizer_<Voxelize>d__29_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f0bd8);
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000938_PostfixBurstDelegate_var
                      );
    thunk_FUN_00d48444(StringLiteral_12181);
    thunk_FUN_00d48444(Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>_Dispose__);
    thunk_FUN_00d48444(Mono_Math_BigInteger___TypeInfo);
    DAT_03782322 = 1;
  }
  FUN_010b1220(param_1 + 0x48,param_2,*(undefined8 *)puVar4);
  FUN_010b1220(param_1 + 0x58,param_2,*(undefined8 *)puVar4);
  FUN_010b1220(param_1 + 0x68,param_2,*(undefined8 *)puVar4);
  FUN_010b1220(param_1 + 0x78,param_2,*(undefined8 *)puVar1);
  FUN_010b1220(param_1 + 0x88,param_2,*(undefined8 *)puVar1);
  FUN_010b1220(param_1 + 0x98,param_2,*(undefined8 *)puVar8);
  FUN_010b1220(param_1 + 0xa8,param_2,*(undefined8 *)puVar5);
  FUN_010b1220(param_1 + 0xb8,param_2,*(undefined8 *)puVar3);
  FUN_010b1220(param_1 + 200,param_2,*(undefined8 *)puVar7);
  FUN_010b1220(param_1 + 0xd8,param_2,*(undefined8 *)puVar6);
  FUN_010b1220(param_1 + 0xe8,param_2,
               *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vdupq_lane_s16__);
  FUN_010b1220(param_1 + 0xf8,param_2,*(undefined8 *)puVar2);
  FUN_010b1220(param_1 + 0x108,param_2,*(undefined8 *)Mono_Math_BigInteger___TypeInfo);
  FUN_010b1220(param_1 + 0x118,param_2,*(undefined8 *)puVar2);
  FUN_010b1220(param_1 + 0x128,param_2,
               *(undefined8 *)
                Method_System_Collections_Generic_List<IGroupBoxOption>_GetEnumerator__);
  FUN_010b1368(param_1 + 0x138,param_2,
               *(undefined8 *)
                Method_Unity_Collections_NativeArray<ConfigurationDescriptor>_Dispose__);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


