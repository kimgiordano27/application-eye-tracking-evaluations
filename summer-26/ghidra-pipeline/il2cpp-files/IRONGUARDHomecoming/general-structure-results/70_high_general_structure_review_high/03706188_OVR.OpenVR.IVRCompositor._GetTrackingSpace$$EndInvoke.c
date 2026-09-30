/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._GetTrackingSpace$$EndInvoke
ENTRY_POINT: 03706188
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRCompositor__GetTrackingSpace__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  long unaff_x19;
  undefined8 uVar6;
  long *unaff_x20;
  long unaff_x21;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_TemporalAA_<>c_<Render>b__11_0__);
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_TemporalAA_<>c_<Render>b__11_1__);
  *(undefined1 *)(unaff_x21 + 0x26) = 1;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (DAT_0482f042 == '\0') {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_GetEnumerator__
                      );
    DAT_0482f042 = '\x01';
  }
  lVar3 = *unaff_x20;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *unaff_x20;
  }
  puVar2 = Method_UnityEngine_Rendering_Universal_TemporalAA_<>c_<Render>b__11_1__;
  puVar1 = Method_UnityEngine_Rendering_Universal_TemporalAA_<>c_<Render>b__11_0__;
  pcVar5 = *(char **)(lVar3 + 0xb8);
  if (*pcVar5 == '\0') {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      pcVar5 = *(char **)(*unaff_x20 + 0xb8);
    }
    uVar6 = *(undefined8 *)(pcVar5 + 8);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ed64(uVar6,0);
    uVar6 = 0;
  }
  else {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = *(undefined8 *)(unaff_x19 + 0x18);
    if (*(int *)(*(long *)
                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__0__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_036e1940(uVar6,0x7f4ca0c6);
    uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_026ddee0(uVar6,uVar4,*(undefined8 *)puVar1);
  }
  return uVar6;
}


