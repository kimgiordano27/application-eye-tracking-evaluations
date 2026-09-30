/*
FUNCTION_NAME: OVRHand$$get_IsDataHighConfidence
ENTRY_POINT: 036daa8c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: confirmed_gaze_retrieval_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: weak_source_state;validity_gate;pose_vector;active_gaze_retrieval
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;active_gaze_state_retrieval_with_validity_and_pose;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long OVRHand__get_IsDataHighConfidence(void)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  long unaff_x19;
  undefined8 uVar4;
  long *unaff_x20;
  long unaff_x21;
  
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
  thunk_FUN_01efb3a4(Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__1__
                    );
  *(undefined1 *)(unaff_x21 + 0x7b) = 1;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_0482f042 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_GetEnumerator__
                      );
    DAT_0482f042 = '\x01';
  }
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar2 = *unaff_x20;
  }
  puVar1 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__1__;
  pcVar3 = *(char **)(lVar2 + 0xb8);
  if (*pcVar3 == '\0') {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      pcVar3 = *(char **)(*unaff_x20 + 0xb8);
    }
    uVar4 = *(undefined8 *)(pcVar3 + 8);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ed64(uVar4,0);
    lVar2 = 0;
  }
  else {
    uVar4 = 0;
    if (unaff_x19 != 0) {
      uVar4 = *(undefined8 *)(unaff_x19 + 0x10);
    }
    if (*(int *)(*(long *)
                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__0__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_036e6184(uVar4);
    lVar2 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_035ac8e8(lVar2,0);
    *(undefined8 *)(lVar2 + 0x18) = uVar4;
  }
  return lVar2;
}


