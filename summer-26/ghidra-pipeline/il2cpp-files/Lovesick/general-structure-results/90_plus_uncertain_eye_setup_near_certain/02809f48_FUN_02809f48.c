/*
FUNCTION_NAME: FUN_02809f48
ENTRY_POINT: 02809f48
PROGRAM: Lovesick-libil2cpp.so
SCORE: 127
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_02809f48(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6,int param_7)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  
  if ((DAT_03788b53 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_137);
    thunk_FUN_00d48444(StringLiteral_10902);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_114_0_TypeInfo);
    DAT_03788b53 = 1;
  }
  if (param_7 < 0x1000a) {
    if (param_7 == 0x10000) {
      puVar1 = (undefined4 *)FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
      *puVar1 = param_1;
      puVar1[1] = param_2;
      puVar1[2] = param_3;
      puVar1[3] = param_4;
    }
    else {
      if (param_7 != 0x10009) goto switchD_02809fec_caseD_70001;
      lVar2 = FUN_013b3bbc(param_5,*(undefined8 *)StringLiteral_10902);
      *(undefined4 *)(lVar2 + 0x68) = param_1;
      *(undefined4 *)(lVar2 + 0x6c) = param_2;
      *(undefined4 *)(lVar2 + 0x70) = param_3;
      *(undefined4 *)(lVar2 + 0x74) = param_4;
    }
    if (param_6 == 0) goto LAB_0280a0b4;
    uVar5 = 0x810;
  }
  else {
    switch(param_7) {
    case 0x70000:
      puVar1 = (undefined4 *)
               FUN_013b3bbc(param_5 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      *puVar1 = param_1;
      puVar1[1] = param_2;
      puVar1[2] = param_3;
      puVar1[3] = param_4;
      break;
    case 0x70001:
    case 0x70003:
    case 0x70004:
switchD_02809fec_caseD_70001:
      local_68 = thunk_FUN_00d48444(
                                   Method_UnityEngine_Timeline_Extrapolation_<>c_<SortClipsByStartTime>b__2_0__
                                   );
      uStack_60 = 0xffffffffffffffff;
      local_58 = param_7;
      uVar5 = FUN_017a7f78(&local_68,0);
      uVar3 = thunk_FUN_00d48444(
                                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_List<MB3_MeshCombinerSingle_MBBlendShape>>_Dispose__
                                );
      uVar4 = thunk_FUN_00d48444(StringLiteral_5497);
      uVar5 = FUN_01600424(uVar3,uVar5,uVar4,0);
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      uVar3 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar4 = thunk_FUN_00d48444(System_Func<JsonProperty,_int>_TypeInfo);
      FUN_016ec624(uVar3,uVar5,uVar4,0);
      uVar5 = thunk_FUN_00d48444(
                                Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceDiscoveryCompleteData>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar3,uVar5);
    case 0x70002:
      lVar2 = FUN_013b3bbc(param_5 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      *(undefined4 *)(lVar2 + 0x30) = param_1;
      *(undefined4 *)(lVar2 + 0x34) = param_2;
      *(undefined4 *)(lVar2 + 0x38) = param_3;
      *(undefined4 *)(lVar2 + 0x3c) = param_4;
      break;
    case 0x70005:
      lVar2 = FUN_013b3bbc(param_5 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      *(undefined4 *)(lVar2 + 0x50) = param_1;
      *(undefined4 *)(lVar2 + 0x54) = param_2;
      *(undefined4 *)(lVar2 + 0x58) = param_3;
      *(undefined4 *)(lVar2 + 0x5c) = param_4;
      break;
    case 0x70006:
      lVar2 = FUN_013b3bbc(param_5 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      *(undefined4 *)(lVar2 + 0x60) = param_1;
      *(undefined4 *)(lVar2 + 100) = param_2;
      *(undefined4 *)(lVar2 + 0x68) = param_3;
      *(undefined4 *)(lVar2 + 0x6c) = param_4;
      break;
    case 0x70007:
      lVar2 = FUN_013b3bbc(param_5 + 0x28,*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
      *(undefined4 *)(lVar2 + 0x70) = param_1;
      *(undefined4 *)(lVar2 + 0x74) = param_2;
      *(undefined4 *)(lVar2 + 0x78) = param_3;
      *(undefined4 *)(lVar2 + 0x7c) = param_4;
      break;
    default:
      if (param_7 != 0x30002) goto switchD_02809fec_caseD_70001;
      lVar2 = FUN_013b3bbc(param_5 + 0x10,*(undefined8 *)StringLiteral_137);
      *(undefined4 *)(lVar2 + 0x1c) = param_1;
      *(undefined4 *)(lVar2 + 0x20) = param_2;
      *(undefined4 *)(lVar2 + 0x24) = param_3;
      *(undefined4 *)(lVar2 + 0x28) = param_4;
    }
    if (param_6 == 0) {
LAB_0280a0b4:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar5 = 0x2000;
  }
  FUN_0274a398(param_6,uVar5,0);
  return;
}


