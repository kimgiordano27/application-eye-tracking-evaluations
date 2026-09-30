/*
FUNCTION_NAME: FUN_02c71974
ENTRY_POINT: 02c71974
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 114
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_02c71974(undefined4 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_048314f2 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_048314f2 = 1;
  }
  if (param_1[1] != 4) {
    if (param_1[1] == 1) {
      lVar1 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ecaf44();
      }
      FUN_02c74138(param_1,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0xa0));
      *param_1 = 0xffffffff;
    }
    return;
  }
  plVar5 = *(long **)(param_1 + 4);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar1 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar2 = (undefined8 *)(lVar1 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_02c71a4c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,2);
LAB_02c71a4c:
                    /* WARNING: Could not recover jumptable at 0x02c71a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar5,puVar2[1]);
  return;
}


