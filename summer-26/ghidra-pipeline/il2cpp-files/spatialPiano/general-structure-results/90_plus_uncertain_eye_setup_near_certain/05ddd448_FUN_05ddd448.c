/*
FUNCTION_NAME: FUN_05ddd448
ENTRY_POINT: 05ddd448
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_05ddd448(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 local_3c [4];
  ulong local_38;
  
  puVar1 = Method_System_Resources_ResourceSet_GetCaseInsensitiveObjectInternal__;
  local_38 = param_3;
  if ((DAT_06bc3c7b & 1) == 0) {
    FUN_02f08768(Method_Oculus_Interaction_DistanceReticles_ReticleGhostDrawer_<Start>b__18_0__);
    FUN_02f08768(Method_Oculus_Interaction_DistanceReticles_ReticleIconDrawer_<Start>b__24_0__);
    FUN_02f08768(Method_System_Resources_ResourceSet_GetCaseInsensitiveObjectInternal__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    DAT_06bc3c7b = 1;
  }
  lVar4 = *(long *)puVar1;
  local_3c[0] = 0;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *(long *)puVar1;
  }
  FUN_05c5cb44(local_3c,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x38),0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar5 = FUN_05d36fdc(param_2,0);
  if ((param_3 & 0xff) == 0) {
    bVar2 = false;
    uVar6 = 0x51b;
  }
  else {
    iVar3 = FUN_03e1bd38(&local_38,
                         *(undefined8 *)
                          Method_Oculus_Interaction_DistanceReticles_ReticleIconDrawer_<Start>b__24_0__
                        );
    uVar6 = 0x509;
    if ((uVar5 & 1) == 0) {
      uVar6 = 0x50b;
    }
    bVar2 = iVar3 == 2;
    if (!bVar2) {
      uVar6 = 0x51b;
    }
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(int *)(param_1 + 0x14) < 1) {
    bVar2 = true;
  }
  if (!bVar2) {
    if (*(int *)(*(long *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar5 = FUN_05dab444(0);
    if ((uVar5 & 1) == 0) {
      uVar6 = uVar6 | 0x40;
    }
  }
  FUN_05c5cb50(local_3c,0);
  return uVar6;
}


