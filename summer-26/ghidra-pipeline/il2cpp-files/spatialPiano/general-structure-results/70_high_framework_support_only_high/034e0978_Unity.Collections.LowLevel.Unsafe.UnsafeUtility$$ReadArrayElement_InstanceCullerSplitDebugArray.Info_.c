/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ReadArrayElement<InstanceCullerSplitDebugArray.Info>
ENTRY_POINT: 034e0978
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<InstanceCullerSplitDebugArray_Info>
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  
  if (param_1 == 0) {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      FUN_02f41e9c(lVar2);
    }
    unaff_x23 = (long *)thunk_FUN_02f45174();
    if ((unaff_x23 == (long *)0x0) || (lVar2 = thunk_FUN_02f45174(), lVar2 == 0)) {
      lVar2 = **(long **)(unaff_x22 + 0x38);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02f41e9c(lVar2);
      }
      lVar3 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar2) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_034e0b14;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_02f421d0();
LAB_034e0b14:
      UNRECOVERED_JUMPTABLE = (code *)*puVar1;
      goto LAB_034e0a90;
    }
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c(lVar2);
    }
    lVar3 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) goto LAB_034e0a78;
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
  }
  else {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c(lVar2);
    }
    lVar3 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) goto LAB_034e0a78;
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
  }
  puVar1 = (undefined8 *)FUN_02f421d0(unaff_x23,lVar2,0);
  goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<OVRPlugin_Vector4s>;
LAB_034e0a78:
  puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<OVRPlugin_Vector4s>:
  UNRECOVERED_JUMPTABLE = (code *)*puVar1;
LAB_034e0a90:
                    /* WARNING: Could not recover jumptable at 0x034e0aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


