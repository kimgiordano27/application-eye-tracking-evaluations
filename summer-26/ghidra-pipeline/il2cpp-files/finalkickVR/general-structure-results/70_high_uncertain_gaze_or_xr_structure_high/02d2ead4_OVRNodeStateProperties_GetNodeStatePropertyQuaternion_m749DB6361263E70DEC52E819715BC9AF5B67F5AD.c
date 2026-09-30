/*
FUNCTION_NAME: OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
ENTRY_POINT: 02d2ead4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_7;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_possible_biometrics_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1
OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined8 *param_9,
          undefined8 param_10)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  undefined1 local_130 [48];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 local_cc;
  undefined8 local_b0;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 *local_80;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  local_48 = param_10;
  local_40 = param_9;
  local_34 = param_8;
  local_30 = param_7;
  local_2c = param_6;
  local_28 = param_5;
  if ((OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_laneq_s32__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRNodeStateProperties_GetNodeStatePropertyQuaternion_m749DB6361263E70DEC52E819715BC9AF5B67F5AD
    ::s_Il2CppMethodInitialized = 1;
  }
  local_50 = local_40;
  local_70 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                       ((MethodInfo *)0x0);
  uStack_58 = CONCAT44(param_4,param_3);
  local_60 = CONCAT44(param_2,local_70);
  local_50[1] = uStack_58;
  *local_50 = local_60;
  local_74 = local_2c;
                    /* try { // try from 02d2eb94 to 02e2ec6f has its CatchHandler @ 02d2ec8c */
  if (local_2c == 5) {
    uStack_6c = param_2;
    uStack_68 = param_3;
    uStack_64 = param_4;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uVar3 = local_28;
    puVar2 = local_40;
    local_78 = *(int *)(lVar5 + 0x100);
    if (local_78 == 1) {
      local_80 = local_40;
      local_84 = local_30;
      local_88 = local_34;
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
      OVRPlugin_GetNodePose_m973B3CA31C019465A53494EB440C13C2AE229CB3(local_84,local_88);
      local_b0 = local_cc;
      OVRExtensions_ToOVRPose_m2D557CFD8B775C88FDED26B3D31A67E8AB53B14F(local_130,0);
                    /* try { // try from 02d2ec70 to 02e2ecb7 has its CatchHandler @ 02d2ea90 */
      local_80[1] = uStack_f8;
      *local_80 = CONCAT44(uStack_fc,uStack_100);
      return 1;
                    /* catch(type#1 @ 0474a728) { ... } // from try @ 02d2eb94 with catch @ 02d2ec8c
                        */
    }
                    /* try { // try from 02d2ecb8 to 02e2ecbf has its CatchHandler @ 02d2ecf4 */
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_Unity_Burst_Intrinsics_Arm_Neon_vmla_laneq_s32__);
                    /* try { // try from 02d2ecc0 to 02e2ecc3 has its CatchHandler @ 02d2ed0c */
                    /* try { // try from 02d2ecc4 to 02e2ed03 has its CatchHandler @ 02d2ea90 */
    bVar4 = OVRNodeStateProperties_GetUnityXRNodeStateQuaternion_m40E36460805902B63D5D9708D09A06480AF8B852
                      (uVar3,5,puVar2,0);
    if ((bVar4 & 1) != 0) {
      return 1;
    }
  }
                    /* try { // try from 02d2ed04 to 02e2ed23 has its CatchHandler @ 02d2ed2c */
                    /* catch() { ... } // from try @ 02d2ecc0 with catch @ 02d2ed0c */
  return 0;
}


