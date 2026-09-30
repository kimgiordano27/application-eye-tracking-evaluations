/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._PostPresentHandoff$$EndInvoke
ENTRY_POINT: 03706a74
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


long OVR_OpenVR_IVRCompositor__PostPresentHandoff__EndInvoke(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int in_w8;
  char *pcVar4;
  long *unaff_x20;
  
  if (in_w8 == 0) {
    thunk_FUN_01ee6d7c();
    param_1 = *unaff_x20;
  }
  puVar1 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__1__;
  pcVar4 = *(char **)(param_1 + 0xb8);
  if (*pcVar4 == '\0') {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      pcVar4 = *(char **)(*unaff_x20 + 0xb8);
    }
    uVar2 = *(undefined8 *)(pcVar4 + 8);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ed64(uVar2,0);
    lVar3 = 0;
  }
  else {
    if (*(int *)(*(long *)
                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__0__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar2 = FUN_036e4f9c();
    lVar3 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_035ac8e8(lVar3,0);
    *(undefined8 *)(lVar3 + 0x18) = uVar2;
  }
  return lVar3;
}


