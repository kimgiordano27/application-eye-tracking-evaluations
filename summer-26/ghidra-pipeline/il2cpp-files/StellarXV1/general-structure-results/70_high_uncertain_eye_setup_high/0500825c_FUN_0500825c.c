/*
FUNCTION_NAME: FUN_0500825c
ENTRY_POINT: 0500825c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0500825c(long *param_1,long *param_2,undefined4 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_04077588(PTR_DAT_092a61b8);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_040b1b28(param_4);
    }
  }
  if (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_092a61b8) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_050082f8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00(param_1,*(long *)PTR_DAT_092a61b8,1);
LAB_050082f8:
    param_3 = (*(code *)*puVar1)(param_1,puVar1[1]);
  }
  if (*param_2 == 0) {
    if ((*(ushort *)(*(long *)(*(long *)(param_4 + 0x38) + 8) + 0x135) & 1) == 0) {
      FUN_040b1acc();
    }
    lVar2 = thunk_FUN_040b4efc();
    System_Array_EmptyInternalEnumerator<JsonUnmarshallerContext_PathSegment>__Dispose
              (lVar2,param_3,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x10));
    *param_2 = lVar2;
    thunk_FUN_040ec700(param_2,lVar2);
    return;
  }
  FUN_06fcfb70(*param_2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x18));
  if (*param_2 != 0) {
    System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__get_Current
              (*param_2,param_3,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


