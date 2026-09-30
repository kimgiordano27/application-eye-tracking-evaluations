/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._ShouldApplicationPause$$BeginInvoke
ENTRY_POINT: 02d82860
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void OVR_OpenVR_IVRSystem__ShouldApplicationPause__BeginInvoke
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  long lVar1;
  undefined4 in_w11;
  undefined4 in_w12;
  undefined4 in_w13;
  undefined4 in_w14;
  undefined4 in_w15;
  long unaff_x29;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uStack0000000000000004;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000014;
  undefined4 uStack000000000000001c;
  undefined8 *in_stack_00000030;
  ulong *puStack0000000000000038;
  undefined4 uStack0000000000000044;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000054;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000074;
  
  puStack0000000000000038 =
       (ulong *)Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  *(undefined4 *)(unaff_x29 + -0xc) = param_1;
  *(undefined4 *)(unaff_x29 + -8) = param_2;
  *(undefined4 *)(unaff_x29 + -4) = param_3;
  *(undefined4 *)(unaff_x29 + -0x18) = param_4;
  *(undefined4 *)(unaff_x29 + -0x14) = param_5;
  *(undefined4 *)(unaff_x29 + -0x10) = param_6;
  *(undefined4 *)(unaff_x29 + -0x28) = in_w15;
  *(undefined4 *)(unaff_x29 + -0x24) = in_w14;
  *(undefined4 *)(unaff_x29 + -0x20) = in_w13;
  *(undefined4 *)(unaff_x29 + -0x1c) = in_w12;
  *(undefined4 *)(unaff_x29 + -0x38) = in_w11;
  *(undefined4 *)(unaff_x29 + -0x34) = *(undefined4 *)(unaff_x29 + 0x34);
  *(undefined4 *)(unaff_x29 + -0x30) = *(undefined4 *)(unaff_x29 + 0x38);
  *(undefined4 *)(unaff_x29 + -0x2c) = *(undefined4 *)(unaff_x29 + 0x3c);
  *(undefined8 *)(unaff_x29 + -0x40) = param_7;
  if ((OVRManager_SetOpenVRLocalPose_m249ED4C08F44B43E368E9F1B235430493041CBF5::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000038);
    OVRManager_SetOpenVRLocalPose_m249ED4C08F44B43E368E9F1B235430493041CBF5::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000038);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000038);
  *(undefined4 *)(unaff_x29 + -0x44) = *(undefined4 *)(lVar1 + 0x100);
  if (*(int *)(unaff_x29 + -0x44) == 2) {
    *(undefined8 *)(unaff_x29 + -0x50) = *(undefined8 *)((long)in_stack_00000030 + 0x2c);
    *(undefined4 *)(unaff_x29 + -0x48) = *(undefined4 *)(unaff_x29 + -4);
    *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x18);
    *(undefined4 *)(unaff_x29 + -0x58) = *(undefined4 *)(unaff_x29 + -0x10);
    uVar2 = in_stack_00000030[2];
    *(undefined8 *)(unaff_x29 + -0x68) = in_stack_00000030[3];
    *(undefined8 *)(unaff_x29 + -0x70) = uVar2;
    uVar3 = in_stack_00000030[1];
    uVar2 = *in_stack_00000030;
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
              );
    uStack0000000000000074 = (undefined4)(*(ulong *)(unaff_x29 + -0x50) >> 0x20);
    uStack0000000000000060 = (undefined4)*(undefined8 *)(unaff_x29 + -0x60);
    uStack0000000000000064 = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x60) >> 0x20);
    uStack0000000000000054 = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x70) >> 0x20);
    uStack000000000000005c = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x68) >> 0x20);
    uStack0000000000000044 = (undefined4)((ulong)uVar2 >> 0x20);
    uStack000000000000004c = (undefined4)((ulong)uVar3 >> 0x20);
    uStack0000000000000004 = uStack0000000000000054;
    uStack000000000000000c = uStack000000000000005c;
    uStack0000000000000014 = uStack0000000000000044;
    uStack000000000000001c = uStack000000000000004c;
    OVRInput_SetOpenVRLocalPose_m27E4294B7780884FF0BC1A8605403289A12C8894
              (*(ulong *)(unaff_x29 + -0x50) & 0xffffffff,uStack0000000000000074,
               *(undefined4 *)(unaff_x29 + -0x48),uStack0000000000000060,uStack0000000000000064,
               *(undefined4 *)(unaff_x29 + -0x58),0);
  }
  return;
}


