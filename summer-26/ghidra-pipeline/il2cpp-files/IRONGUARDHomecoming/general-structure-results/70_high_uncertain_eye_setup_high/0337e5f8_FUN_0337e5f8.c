/*
FUNCTION_NAME: FUN_0337e5f8
ENTRY_POINT: 0337e5f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0337e5f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar2 = Method_UnityEngine_GameObject_GetComponent<OVRLipSyncContextTextureFlip>__;
  if ((DAT_048321be & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OVRManager>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OVRMesh>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OVRMeshRenderer>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OVRPassthroughLayer>__);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0337e5a4 with catch @ 0337e660
                       try { // try from 0337e660 to 0347e677 has its CatchHandler @ 0337e560 */
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OVRSkeleton>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OVRSkeletonRenderer>__);
                    /* try { // try from 0337e678 to 0347e68f has its CatchHandler @ 0337e6fc */
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<UnityAudioSystem>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OculusRestarter>__);
                    /* try { // try from 0337e690 to 0347e6eb has its CatchHandler @ 0337e560 */
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OVRLipSyncContextTextureFlip>__);
    DAT_048321be = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_048321c0 == '\0') {
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OVRLipSyncContextTextureFlip>__);
    DAT_048321c0 = '\x01';
  }
  puVar3 = Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__;
  puVar1 = Method_UnityEngine_GameObject_GetComponent<OVRMeshRenderer>__;
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar10 = *(long *)puVar2;
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18);
  uVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_02b6aa94(uVar11,uVar12,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x10) = uVar11;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x10),uVar11);
  if (DAT_048321c0 == '\0') {
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponent<OVRLipSyncContextTextureFlip>__);
    DAT_048321c0 = '\x01';
  }
  puVar9 = Method_UnityEngine_GameObject_GetComponent<RectTransform>__;
  puVar8 = Method_UnityEngine_GameObject_GetComponent<OculusRestarter>__;
  puVar7 = Method_UnityEngine_GameObject_GetComponent<OVRSkeletonRenderer>__;
  puVar6 = Method_UnityEngine_GameObject_GetComponent<OVRSkeleton>__;
  puVar5 = Method_UnityEngine_GameObject_GetComponent<OVRPassthroughLayer>__;
  puVar4 = Method_UnityEngine_GameObject_GetComponent<OVRMesh>__;
  puVar3 = Method_UnityEngine_GameObject_GetComponent<OVRManager>__;
  puVar1 = Method_UnityEngine_GameObject_AddComponent<UnityAudioSystem>__;
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar10 = *(long *)puVar2;
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18);
  uVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_02b6aa94(uVar11,uVar12,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x18) = uVar11;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x18),uVar11);
  uVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar8);
  FUN_02b6aa68(uVar11,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x20) = uVar11;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x20),uVar11);
  uVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar9);
  FUN_02b6aa68(uVar11,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x28) = uVar11;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x28),uVar11);
  uVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar7);
  FUN_02b6aa68(uVar11,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x30) = uVar11;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x30),uVar11);
  FUN_035ac8e8(param_1,0);
  return;
}


