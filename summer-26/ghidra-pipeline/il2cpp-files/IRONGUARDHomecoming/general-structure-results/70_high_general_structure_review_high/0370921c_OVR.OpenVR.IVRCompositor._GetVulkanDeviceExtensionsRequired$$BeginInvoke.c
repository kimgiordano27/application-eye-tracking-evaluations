/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._GetVulkanDeviceExtensionsRequired$$BeginInvoke
ENTRY_POINT: 0370921c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRCompositor__GetVulkanDeviceExtensionsRequired__BeginInvoke(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  long unaff_x19;
  undefined8 uVar5;
  
  puVar1 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_GetEnumerator__;
  if ((param_1 & 1) == 0) {
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403f2cc(*(undefined8 *)
                  Method_Oculus_Interaction_TouchHandGrabInteractor_<>c_<Awake>b__39_0__,0);
  }
  else {
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_GetEnumerator__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (DAT_0482f042 == '\0') {
      thunk_FUN_01efb3a4(
                        Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_GetEnumerator__
                        );
      DAT_0482f042 = '\x01';
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar2 = *(long *)puVar1;
    }
    pcVar4 = *(char **)(lVar2 + 0xb8);
    if (*pcVar4 != '\0') {
      uVar5 = *(undefined8 *)(unaff_x19 + 0x18);
      if (*(int *)(*(long *)
                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__0__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_036e1940(uVar5,0x267cf743);
      uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_TimeZoneInfo_AdjustmentRule_ValidateAdjustmentRule__
                                );
      FUN_026ddee0(uVar3,uVar5,
                   *(undefined8 *)
                    Method_System_TimeZoneInfo_AdjustmentRule_System_Runtime_Serialization_ISerializable_GetObjectData__
                  );
      return uVar3;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      pcVar4 = *(char **)(*(long *)puVar1 + 0xb8);
    }
    uVar5 = *(undefined8 *)(pcVar4 + 8);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ed64(uVar5,0);
  }
  return 0;
}


