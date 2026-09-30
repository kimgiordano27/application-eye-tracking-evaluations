/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._GetOverlayTextureColorSpace$$Invoke
ENTRY_POINT: 0370c124
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVROverlay__GetOverlayTextureColorSpace__Invoke(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  long unaff_x19;
  undefined8 uVar5;
  long *unaff_x20;
  
  puVar2 = Method_System_TimeZoneInfo_AdjustmentRule_ValidateAdjustmentRule__;
  puVar1 = 
  Method_System_TimeZoneInfo_AdjustmentRule_System_Runtime_Serialization_ISerializable_GetObjectData__
  ;
  pcVar4 = *(char **)(param_1 + 0xb8);
  if (*pcVar4 == '\0') {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      pcVar4 = *(char **)(*unaff_x20 + 0xb8);
    }
    uVar5 = *(undefined8 *)(pcVar4 + 8);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ed64(uVar5,0);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (unaff_x19 != 0) {
      uVar5 = *(undefined8 *)(unaff_x19 + 0x10);
    }
    if (*(int *)(*(long *)
                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass62_0_<DOLocalJump>b__0__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_036e5e2c(uVar5);
    uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_026ddee0(uVar5,uVar3,*(undefined8 *)puVar1);
  }
  return uVar5;
}


