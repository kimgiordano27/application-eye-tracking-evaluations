/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ReadArrayElement<OVRLocatable.TrackingSpacePose>
ENTRY_POINT: 034e0a00
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<OVRLocatable_TrackingSpacePose>
               (long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x21;
  long unaff_x22;
  
  lVar1 = thunk_FUN_02f45174();
  if (lVar1 == 0) {
    lVar1 = **(long **)(unaff_x22 + 0x38);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02f41e9c(lVar1);
    }
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_034e0b14;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0();
LAB_034e0b14:
    UNRECOVERED_JUMPTABLE = (code *)*puVar2;
  }
  else {
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02f41e9c(lVar1);
    }
    lVar3 = *param_1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<OVRPlugin_Vector4s>
          ;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(param_1,lVar1,0);
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<OVRPlugin_Vector4s>:
    UNRECOVERED_JUMPTABLE = (code *)*puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x034e0aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


