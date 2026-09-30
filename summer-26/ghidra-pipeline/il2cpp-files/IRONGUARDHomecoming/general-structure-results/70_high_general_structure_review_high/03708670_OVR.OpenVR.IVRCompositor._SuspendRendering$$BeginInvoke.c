/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._SuspendRendering$$BeginInvoke
ENTRY_POINT: 03708670
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRCompositor__SuspendRendering__BeginInvoke(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  
  plVar7 = *(long **)(unaff_x19 + 0x3e0);
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__0__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_GetEnumerator__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(
                      Method_System_TimeZoneInfo_AdjustmentRule_System_Runtime_Serialization_ISerializable_GetObjectData__
                      );
    thunk_FUN_01efb3a4(Method_System_TimeZoneInfo_AdjustmentRule_ValidateAdjustmentRule__);
    *(undefined1 *)(unaff_x20 + 0x49) = 1;
  }
  if (*(int *)(*plVar7 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_0482f042 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_GetEnumerator__
                      );
    DAT_0482f042 = '\x01';
  }
  lVar3 = *plVar7;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *plVar7;
  }
  puVar2 = Method_System_TimeZoneInfo_AdjustmentRule_ValidateAdjustmentRule__;
  puVar1 = 
  Method_System_TimeZoneInfo_AdjustmentRule_System_Runtime_Serialization_ISerializable_GetObjectData__
  ;
  pcVar6 = *(char **)(lVar3 + 0xb8);
  if (*pcVar6 == '\0') {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      pcVar6 = *(char **)(*plVar7 + 0xb8);
    }
    uVar5 = *(undefined8 *)(pcVar6 + 8);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ed64(uVar5,0);
    uVar5 = 0;
  }
  else {
    if (*(int *)(*(long *)
                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__0__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_036e9a34();
    uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_026ddee0(uVar5,uVar4,*(undefined8 *)puVar1);
  }
  return uVar5;
}


