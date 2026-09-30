/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._GetVulkanDeviceExtensionsRequired$$Invoke
ENTRY_POINT: 03709208
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


undefined8 OVR_OpenVR_IVRCompositor__GetVulkanDeviceExtensionsRequired__Invoke(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  long unaff_x19;
  undefined8 uVar6;
  
  uVar2 = FUN_02a857e0();
  puVar1 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_GetEnumerator__;
  if ((uVar2 & 1) == 0) {
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
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar1;
    }
    pcVar5 = *(char **)(lVar3 + 0xb8);
    if (*pcVar5 != '\0') {
      uVar6 = *(undefined8 *)(unaff_x19 + 0x18);
      if (*(int *)(*(long *)
                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__0__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar6 = FUN_036e1940(uVar6,0x267cf743);
      uVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_TimeZoneInfo_AdjustmentRule_ValidateAdjustmentRule__
                                );
      FUN_026ddee0(uVar4,uVar6,
                   *(undefined8 *)
                    Method_System_TimeZoneInfo_AdjustmentRule_System_Runtime_Serialization_ISerializable_GetObjectData__
                  );
      return uVar4;
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      pcVar5 = *(char **)(*(long *)puVar1 + 0xb8);
    }
    uVar6 = *(undefined8 *)(pcVar5 + 8);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ed64(uVar6,0);
  }
  return 0;
}


