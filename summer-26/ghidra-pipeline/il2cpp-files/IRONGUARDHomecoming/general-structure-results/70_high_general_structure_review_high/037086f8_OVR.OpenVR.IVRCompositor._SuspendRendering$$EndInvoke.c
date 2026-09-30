/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._SuspendRendering$$EndInvoke
ENTRY_POINT: 037086f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRCompositor__SuspendRendering__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long *unaff_x19;
  
  thunk_FUN_01ee6d7c();
  puVar2 = Method_System_TimeZoneInfo_AdjustmentRule_ValidateAdjustmentRule__;
  puVar1 = 
  Method_System_TimeZoneInfo_AdjustmentRule_System_Runtime_Serialization_ISerializable_GetObjectData__
  ;
  pcVar5 = *(char **)(*unaff_x19 + 0xb8);
  if (*pcVar5 == '\0') {
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      pcVar5 = *(char **)(*unaff_x19 + 0xb8);
    }
    uVar4 = *(undefined8 *)(pcVar5 + 8);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ed64(uVar4,0);
    uVar4 = 0;
  }
  else {
    if (*(int *)(*(long *)
                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__0__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_036e9a34();
    uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_026ddee0(uVar4,uVar3,*(undefined8 *)puVar1);
  }
  return uVar4;
}


