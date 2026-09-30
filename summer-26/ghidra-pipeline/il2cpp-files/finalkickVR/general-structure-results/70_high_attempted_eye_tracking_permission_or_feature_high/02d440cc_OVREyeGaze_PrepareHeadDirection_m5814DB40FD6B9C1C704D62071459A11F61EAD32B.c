/*
FUNCTION_NAME: OVREyeGaze_PrepareHeadDirection_m5814DB40FD6B9C1C704D62071459A11F61EAD32B
ENTRY_POINT: 02d440cc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_1
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVREyeGaze_PrepareHeadDirection_m5814DB40FD6B9C1C704D62071459A11F61EAD32B
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  byte bVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((OVREyeGaze_PrepareHeadDirection_m5814DB40FD6B9C1C704D62071459A11F61EAD32B::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_TryGetValue__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_TiradorArcade_<MostrarDianaYaSiHaceFalta>d__24_System_Collections_IEnumerator_Reset__
              );
    OVREyeGaze_PrepareHeadDirection_m5814DB40FD6B9C1C704D62071459A11F61EAD32B::
    s_Il2CppMethodInitialized = 1;
  }
  uVar3 = *(undefined8 *)
           Method_TiradorArcade_<MostrarDianaYaSiHaceFalta>d__24_System_Collections_IEnumerator_Reset__
  ;
  pvVar2 = (void *)il2cpp_codegen_object_new
                             (*(Il2CppClass **)
                               Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_TryGetValue__
                             );
  GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(pvVar2,uVar3,0);
  NullCheck(pvVar2);
  pvVar2 = (void *)GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(pvVar2,0);
  *(void **)(param_4 + 0x60) = pvVar2;
  Il2CppCodeGenWriteBarrier((void **)(param_4 + 0x60),pvVar2);
  uVar3 = *(undefined8 *)(param_4 + 0x40);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  bVar1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(uVar3,0);
  if ((bVar1 & 1) == 0) {
    pvVar4 = *(void **)(param_4 + 0x60);
    pvVar2 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(param_4);
    NullCheck(pvVar2);
    uVar5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(pvVar2,0);
    uVar6 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline
                      ((MethodInfo *)0x0);
    NullCheck(pvVar4);
    Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(uVar5,pvVar4,0);
  }
  else {
    pvVar2 = *(void **)(param_4 + 0x60);
    pvVar4 = *(void **)(param_4 + 0x40);
    NullCheck(pvVar4);
    uVar5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(pvVar4);
    pvVar4 = *(void **)(param_4 + 0x40);
    NullCheck(pvVar4);
    uVar6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar4,0);
    NullCheck(pvVar2);
    Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(uVar5,pvVar2,0);
  }
  pvVar4 = *(void **)(param_4 + 0x60);
  pvVar2 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(param_4);
  NullCheck(pvVar2);
  uVar3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(pvVar2,0);
  NullCheck(pvVar4);
  Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(pvVar4,uVar3,0);
  pvVar2 = *(void **)(param_4 + 0x60);
  NullCheck(pvVar2);
  uVar5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar2,0);
  uVar5 = Quaternion_Inverse_mD9C060AC626A7B406F4984AC98F8358DC89EF512(uVar5,0);
  pvVar2 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(param_4,0);
  NullCheck(pvVar2);
  Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(pvVar2,0);
  uVar5 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(uVar5,0);
  *(ulong *)(param_4 + 0x54) = CONCAT44(uVar6,param_3);
  *(ulong *)(param_4 + 0x4c) = CONCAT44(param_2,uVar5);
  return;
}


