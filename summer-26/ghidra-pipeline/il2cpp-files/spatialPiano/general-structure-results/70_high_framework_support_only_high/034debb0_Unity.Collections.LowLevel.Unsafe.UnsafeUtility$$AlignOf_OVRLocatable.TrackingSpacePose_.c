/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$AlignOf<OVRLocatable.TrackingSpacePose>
ENTRY_POINT: 034debb0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__AlignOf<OVRLocatable_TrackingSpacePose>
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x23;
  
  lVar1 = FUN_02f41e9c(param_2);
  lVar3 = *unaff_x23;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar1) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__AlignOf<OVRPlugin_Vector2f>;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02f421d0();
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__AlignOf<OVRPlugin_Vector2f>:
                    /* WARNING: Could not recover jumptable at 0x034dec24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)();
  return;
}


