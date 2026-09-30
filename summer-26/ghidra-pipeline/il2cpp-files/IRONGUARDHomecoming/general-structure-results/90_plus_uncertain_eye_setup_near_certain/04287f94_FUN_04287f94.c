/*
FUNCTION_NAME: FUN_04287f94
ENTRY_POINT: 04287f94
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 108
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x042880d8) */

void FUN_04287f94(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_04841804 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0458f320);
    DAT_04841804 = 1;
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (uVar1 = FUN_04286ea0(param_1,*(undefined8 *)(param_1 + 0x28),param_2,0), (uVar1 & 1) != 0)) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    fVar7 = *(float *)(param_2 + 0x13c);
    fVar8 = *(float *)(param_2 + 0x140);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_0458f320 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar2 = (long *)FUN_041dea08(fVar7 / 20.0,fVar8 / -20.0,0,uVar6,0);
    FUN_04286fe0(param_1,plVar2,param_2);
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_042880b4;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(plVar2,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_042880b4:
      (*(code *)*puVar3)(plVar2,puVar3[1]);
    }
  }
  return;
}


