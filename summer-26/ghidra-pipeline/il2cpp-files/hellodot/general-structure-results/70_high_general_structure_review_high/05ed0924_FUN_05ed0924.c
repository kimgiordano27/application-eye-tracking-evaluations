/*
FUNCTION_NAME: FUN_05ed0924
ENTRY_POINT: 05ed0924
PROGRAM: hellodot-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_05ed0924(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_54;
  undefined *puVar7;
  
  if (DAT_06a7e378 == (code *)0x0) {
    DAT_06a7e378 = (code *)FUN_02ce79f8("UnityEngine.Mesh::get_canAccess()");
  }
  uVar2 = (*DAT_06a7e378)(param_1);
  if ((uVar2 & 1) != 0) {
    local_54 = param_7;
    if (param_7 < 0) {
      uVar3 = thunk_FUN_02c7737c(PTR_DAT_065c8a08);
      uVar3 = thunk_FUN_02cea4e8(uVar3,&local_54);
      thunk_FUN_02c7737c(PTR_DAT_065cb038);
      uVar4 = thunk_FUN_02cea894();
      uVar5 = thunk_FUN_02c7737c(UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo);
      puVar7 = UnityEngine_XR_ARFoundation_ARSessionStateChangedEventArgs_TypeInfo;
    }
    else if (param_8 < 0) {
      local_54 = param_8;
      uVar3 = thunk_FUN_02c7737c(PTR_DAT_065c8a08);
      uVar3 = thunk_FUN_02cea4e8(uVar3,&local_54);
      thunk_FUN_02c7737c(PTR_DAT_065cb038);
      uVar4 = thunk_FUN_02cea894();
      uVar5 = thunk_FUN_02c7737c(UnityEngine_XR_ARFoundation_ARTextureInfo_TypeInfo);
      puVar7 = Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs_TypeInfo;
    }
    else if ((param_7 < param_6) || (param_8 == 0)) {
      local_54 = param_8 + param_7;
      if (local_54 <= param_6) {
        iVar1 = 0;
        if (param_5 != 0) {
          iVar1 = param_7;
        }
        if (DAT_06a7e228 == (code *)0x0) {
          DAT_06a7e228 = (code *)FUN_02ce79f8(
                                             "UnityEngine.Mesh::SetArrayForChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.Array,System.Int32,System.Int32,System.Int32,UnityEngine.Rendering.MeshUpdateFlags)"
                                             );
        }
                    /* WARNING: Could not recover jumptable at 0x05ed0a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_06a7e228)(param_1,param_2,param_3,param_4,param_5,param_6,iVar1,param_8);
        return;
      }
      uVar3 = thunk_FUN_02c7737c(PTR_DAT_065c8a08);
      uVar3 = thunk_FUN_02cea4e8(uVar3,&local_54);
      thunk_FUN_02c7737c(PTR_DAT_065cb038);
      uVar4 = thunk_FUN_02cea894();
      uVar5 = thunk_FUN_02c7737c(UnityEngine_XR_ARFoundation_ARTextureInfo_TypeInfo);
      puVar7 = UnityEngine_XR_ARFoundation_ARTrackedObjectsChangedEventArgs_TypeInfo;
    }
    else {
      uVar3 = thunk_FUN_02c7737c(PTR_DAT_065c8a08);
      uVar3 = thunk_FUN_02cea4e8(uVar3,&local_54);
      thunk_FUN_02c7737c(PTR_DAT_065cb038);
      uVar4 = thunk_FUN_02cea894();
      uVar5 = thunk_FUN_02c7737c(UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo);
      puVar7 = UnityEngine_XR_ARFoundation_ARTrackedImagesChangedEventArgs_TypeInfo;
    }
    uVar6 = thunk_FUN_02c7737c(puVar7);
    FUN_04e9caf8(uVar4,uVar5,uVar3,uVar6,0);
    uVar3 = thunk_FUN_02c7737c(System_Text_ASCIIEncoding_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar4,uVar3);
  }
  if (DAT_06a7e1f8 == (code *)0x0) {
    DAT_06a7e1f8 = (code *)FUN_02ce79f8(
                                       "UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute)"
                                       );
  }
                    /* WARNING: Could not recover jumptable at 0x05ed0a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_06a7e1f8)(param_1,param_2);
  return;
}


