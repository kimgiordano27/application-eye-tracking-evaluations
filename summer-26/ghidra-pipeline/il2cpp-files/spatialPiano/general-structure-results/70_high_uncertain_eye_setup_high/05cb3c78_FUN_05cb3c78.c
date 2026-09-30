/*
FUNCTION_NAME: FUN_05cb3c78
ENTRY_POINT: 05cb3c78
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05cb3c78(void)

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
  undefined *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  
  puVar10 = Method_UnityEngine_GameObject_GetComponent<OpenXRRestarter>__;
  puVar9 = Method_UnityEngine_GameObject_GetComponent<OVRManager>__;
  puVar8 = Method_UnityEngine_GameObject_GetComponent<OVRCameraRig>__;
  puVar7 = Method_UnityEngine_GameObject_GetComponent<NavMeshSurface>__;
  puVar6 = Method_UnityEngine_GameObject_GetComponent<NavMeshObstacle>__;
  puVar5 = Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__;
  puVar4 = Method_UnityEngine_GameObject_GetComponent<MetaXRAcousticMaterial>__;
  puVar3 = Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__;
  puVar2 = Method_UnityEngine_GameObject_GetComponent<MeshFilter>__;
  puVar1 = Method_UnityEngine_GameObject_GetComponent<CharacterController>__;
  if ((DAT_06bc3285 & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_GameObject_GetComponent<CharacterController>__);
    FUN_02f08768(Method_UnityEngine_GameObject_GetComponent<NavMeshObstacle>__);
    FUN_02f08768(Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__);
    FUN_02f08768(Method_UnityEngine_GameObject_GetComponent<MetaXRAcousticMaterial>__);
    FUN_02f08768(Method_UnityEngine_GameObject_GetComponent<OVRManager>__);
    FUN_02f08768(Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__);
    FUN_02f08768(Method_UnityEngine_GameObject_GetComponent<OpenXRRestarter>__);
    FUN_02f08768(Method_UnityEngine_GameObject_GetComponent<NavMeshSurface>__);
    FUN_02f08768(Method_UnityEngine_GameObject_GetComponent<MeshFilter>__);
    FUN_02f08768(Method_UnityEngine_GameObject_GetComponent<OVRCameraRig>__);
    DAT_06bc3285 = 1;
  }
  uVar11 = FUN_060ba26c(*(undefined8 *)puVar2,0);
  uVar12 = *(undefined8 *)puVar3;
  **(undefined4 **)(*(long *)puVar1 + 0xb8) = uVar11;
  uVar11 = FUN_060ba26c(uVar12,0);
  uVar12 = *(undefined8 *)puVar4;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 4) = uVar11;
  uVar11 = FUN_060ba26c(uVar12,0);
  uVar12 = *(undefined8 *)puVar5;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_060ba26c(uVar12,0);
  uVar12 = *(undefined8 *)puVar6;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc) = uVar11;
  uVar11 = FUN_060ba26c(uVar12,0);
  uVar12 = *(undefined8 *)puVar7;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_060ba26c(uVar12,0);
  uVar12 = *(undefined8 *)puVar8;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x14) = uVar11;
  uVar11 = FUN_060ba26c(uVar12,0);
  uVar12 = *(undefined8 *)puVar9;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = uVar11;
  uVar11 = FUN_060ba26c(uVar12,0);
  uVar12 = *(undefined8 *)puVar10;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1c) = uVar11;
  uVar11 = FUN_060ba26c(uVar12,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = uVar11;
  return;
}


