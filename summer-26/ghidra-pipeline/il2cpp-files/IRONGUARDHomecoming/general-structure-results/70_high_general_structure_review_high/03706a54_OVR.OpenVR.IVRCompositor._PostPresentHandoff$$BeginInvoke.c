/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._PostPresentHandoff$$BeginInvoke
ENTRY_POINT: 03706a54
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


long OVR_OpenVR_IVRCompositor__PostPresentHandoff__BeginInvoke(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  int in_w8;
  char *pcVar4;
  long *unaff_x20;
  long unaff_x21;
  
  if (in_w8 == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>_GetEnumerator__
                      );
    *(undefined1 *)(unaff_x21 + 0x42) = 1;
  }
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar2 = *unaff_x20;
  }
  puVar1 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__1__;
  pcVar4 = *(char **)(lVar2 + 0xb8);
  if (*pcVar4 == '\0') {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      pcVar4 = *(char **)(*unaff_x20 + 0xb8);
    }
    uVar3 = *(undefined8 *)(pcVar4 + 8);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ed64(uVar3,0);
    lVar2 = 0;
  }
  else {
    if (*(int *)(*(long *)
                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__0__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_036e4f9c();
    lVar2 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_035ac8e8(lVar2,0);
    *(undefined8 *)(lVar2 + 0x18) = uVar3;
  }
  return lVar2;
}


