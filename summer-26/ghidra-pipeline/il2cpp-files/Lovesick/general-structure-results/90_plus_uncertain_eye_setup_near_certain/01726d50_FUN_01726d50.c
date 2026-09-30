/*
FUNCTION_NAME: FUN_01726d50
ENTRY_POINT: 01726d50
PROGRAM: Lovesick-libil2cpp.so
SCORE: 192
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1 FUN_01726d50(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  undefined2 local_2c [2];
  byte local_28 [4];
  undefined1 local_24 [4];
  
  puVar1 = System_Security_Cryptography_X509Certificates_X509CertificateImpl_TypeInfo;
  if ((DAT_03778ab0 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_9027);
    thunk_FUN_00d48444(System_Security_Cryptography_X509Certificates_X509CertificateImpl_TypeInfo);
    thunk_FUN_00d48444(
                      Method_RCG_Lovesick_InteractiveObjects_GrabbableObject_<>c_<OnCollisionEnter>b__105_1__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Playables_PlayableExtensions_SetDuration<Playable>__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_get_IsCreated__
                      );
    DAT_03778ab0 = 1;
  }
  lVar3 = *(long *)(*(long *)puVar1 + 0x20);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c();
  }
  pcVar4 = (char *)thunk_FUN_00d32ed4(param_1 + 0x38,*(undefined8 *)(lVar3 + 0x80));
  if (*pcVar4 == '\0') {
    if (*(long *)(param_1 + 0x28) == 0) {
LAB_01726ea0:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar5 = thunk_FUN_015fe514(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50),
                               *(undefined8 *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_get_IsCreated__
                               ,0);
    if ((uVar5 & 1) == 0) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_01726ea0;
      bVar2 = thunk_FUN_015fe514(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50),
                                 *(undefined8 *)
                                  Method_UnityEngine_Playables_PlayableExtensions_SetDuration<Playable>__
                                 ,0);
      local_28[0] = ~bVar2 & 1;
    }
    else {
      local_28[0] = 0;
    }
    local_2c[0] = 0;
    FUN_01347274(local_2c,local_28,*(undefined8 *)StringLiteral_9027);
    *(undefined2 *)(param_1 + 0x38) = local_2c[0];
  }
  FUN_01347408(param_1 + 0x38,local_24,
               *(undefined8 *)
                Method_RCG_Lovesick_InteractiveObjects_GrabbableObject_<>c_<OnCollisionEnter>b__105_1__
              );
  return local_24[0];
}


