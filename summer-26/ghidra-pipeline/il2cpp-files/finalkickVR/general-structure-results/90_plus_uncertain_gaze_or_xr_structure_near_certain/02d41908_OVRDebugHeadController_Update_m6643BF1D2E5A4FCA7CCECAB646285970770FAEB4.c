/*
FUNCTION_NAME: OVRDebugHeadController_Update_m6643BF1D2E5A4FCA7CCECAB646285970770FAEB4
ENTRY_POINT: 02d41908
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRDebugHeadController_Update_m6643BF1D2E5A4FCA7CCECAB646285970770FAEB4
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  undefined *puVar1;
  void *pvVar2;
  OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 *pOVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uStack_5ec;
  undefined4 uStack_5ac;
  float local_84;
  ulong local_80;
  float fStack_78;
  float fStack_74;
  byte local_31;
  
  puVar1 = 
  Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
  ;
  if ((OVRDebugHeadController_Update_m6643BF1D2E5A4FCA7CCECAB646285970770FAEB4::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRDebugHeadController_Update_m6643BF1D2E5A4FCA7CCECAB646285970770FAEB4::
    s_Il2CppMethodInitialized = 1;
  }
  if ((*(byte *)(param_5 + 0x2c) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    OVRInput_Get_mB457003E7F3A6A8901B7A1D6CB6A167A5829E304();
    fVar12 = param_2;
    uVar4 = OVRInput_Get_mB457003E7F3A6A8901B7A1D6CB6A167A5829E304(1,0x80000000,0);
    pOVar3 = *(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)(param_5 + 0x38);
    NullCheck(pOVar3);
    pvVar2 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                               (pOVar3,(MethodInfo *)0x0);
    NullCheck(pvVar2);
    uVar8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar2,0);
    fVar11 = fVar12;
    fVar9 = param_3;
    uVar5 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline((MethodInfo *)0x0);
    uVar8 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C
                      (uVar8,fVar12,param_3,param_4,uVar5,fVar11,fVar9,0);
    uVar8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline
                      (uVar8,fVar12,param_3,param_2,0);
    uVar5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(0);
    uVar5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline
                      (uVar8,fVar12,param_3,uVar5,0);
    uVar8 = *(undefined4 *)(param_5 + 0x30);
    uVar5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(uVar5,0);
    pOVar3 = *(OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9 **)(param_5 + 0x38);
    fVar11 = fVar12;
    fVar10 = param_3;
    NullCheck(pOVar3);
    pvVar2 = (void *)OVRCameraRig_get_centerEyeAnchor_mAD81013ECF2681FB19E07FFF32861CD7F4BA2357_inline
                               (pOVar3,(MethodInfo *)0x0);
    NullCheck(pvVar2);
    uVar6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar2,0);
    fVar9 = fVar11;
    fVar13 = fVar10;
    uVar7 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline((MethodInfo *)0x0);
    uVar8 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C
                      (uVar6,fVar11,fVar10,uVar8,uVar7,fVar9,fVar13,0);
    uVar8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline
                      (uVar8,fVar11,fVar10,uVar4,0);
    uVar4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(0);
    uVar8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline
                      (uVar8,fVar11,fVar10,uVar4,0);
    uVar8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline
                      (uVar8,fVar11,fVar10,*(undefined4 *)(param_5 + 0x34),0);
    param_2 = fVar11;
    fVar9 = fVar10;
    pvVar2 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(param_5,0);
    NullCheck(pvVar2);
    uVar4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(pvVar2,0);
    param_4 = (float)Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline
                               (uVar5,fVar12,param_3,uVar8,fVar11,fVar10,0);
    uVar8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(uVar4,0);
    NullCheck(pvVar2);
    Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(uVar8,pvVar2,0);
    param_3 = fVar9;
  }
  local_31 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  pvVar2 = (void *)OVRManager_GetCurrentDisplaySubsystem_m9DF732778B060759D2E11E04E49A39A43451CAA8
                             (0);
  if (pvVar2 != (void *)0x0) {
    NullCheck(pvVar2);
    local_31 = IntegratedSubsystem_get_running_m18AA0D7AD1CB593DC9EE5F3DC79643717509D6E8(pvVar2,0);
    local_31 = local_31 & 1;
  }
  if ((local_31 == 0) &&
     (((*(byte *)(param_5 + 0x21) & 1) != 0 || ((*(byte *)(param_5 + 0x20) & 1) != 0)))) {
    pvVar2 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(param_5);
    NullCheck(pvVar2);
    uVar8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar2,0);
    local_80 = CONCAT44(param_2,uVar8);
    fStack_74 = param_4;
    if ((*(byte *)(param_5 + 0x21) & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      fVar11 = (float)OVRInput_Get_mB457003E7F3A6A8901B7A1D6CB6A167A5829E304(2,0x80000000);
      fVar9 = (float)Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(0);
      fVar12 = *(float *)(param_5 + 0x28);
      fVar10 = (float)Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline
                                ((MethodInfo *)0x0);
      fVar11 = (float)il2cpp_codegen_multiply<float,float>(fVar11,fVar9);
      il2cpp_codegen_multiply<float,float>(fVar11,fVar12);
      fStack_74 = param_3;
      uVar8 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(0);
      param_3 = param_2;
      uVar8 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(uVar8,0);
      local_80 = CONCAT44(fVar10,uVar8);
      param_2 = fVar10;
    }
    fStack_78 = param_3;
    if ((*(byte *)(param_5 + 0x20) & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      OVRInput_Get_mB457003E7F3A6A8901B7A1D6CB6A167A5829E304(2,0x80000000,0);
      if (0.0001 < ABS(param_2)) {
        local_84 = param_2;
        if ((*(byte *)(param_5 + 0x22) & 1) != 0) {
          local_84 = (float)il2cpp_codegen_multiply<float,float>(param_2,-1.0);
        }
        fVar11 = (float)Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865();
        fVar12 = *(float *)(param_5 + 0x24);
        Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline((MethodInfo *)0x0);
        fVar11 = (float)il2cpp_codegen_multiply<float,float>(local_84,fVar11);
        il2cpp_codegen_multiply<float,float>(fVar11,fVar12);
        Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(0);
        uStack_5ac = (undefined4)(local_80 >> 0x20);
        uVar8 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline
                          (local_80 & 0xffffffff,0);
        local_80 = CONCAT44(uStack_5ac,uVar8);
        fStack_78 = param_3;
      }
    }
    pvVar2 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(param_5);
    NullCheck(pvVar2);
    uStack_5ec = (undefined4)(local_80 >> 0x20);
    Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D
              (local_80 & 0xffffffff,uStack_5ec,fStack_78,fStack_74,pvVar2,0);
  }
  return;
}


