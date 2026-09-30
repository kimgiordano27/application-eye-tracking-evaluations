/*
FUNCTION_NAME: FUN_041d7c48
ENTRY_POINT: 041d7c48
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x041d7d78) */
/* WARNING: Removing unreachable block (ram,0x041d7e44) */
/* WARNING: Removing unreachable block (ram,0x041d7e50) */

void FUN_041d7c48(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_04840f46 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0458f8f0);
    thunk_FUN_01efb3a4(PTR_DAT_0458f8f8);
    DAT_04840f46 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if ((param_3 != (long *)0x0) && (lVar2 = FUN_04224ea4(param_3,0), lVar2 != 0)) {
    plVar3 = (long *)FUN_032b9ee8(param_1,param_2,param_5,0,*(undefined8 *)PTR_DAT_0458f8f0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar3,param_3);
    (**(code **)(*param_3 + 0x198))(param_3,plVar3,*(undefined8 *)(*param_3 + 0x1a0));
    lVar5 = *plVar3;
    lVar2 = *(long *)puVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_041d7d60;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,lVar2,0);
LAB_041d7d60:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  if (param_4 != (long *)0x0) {
    plVar3 = (long *)FUN_032b9ee8(param_1,param_2,param_5,0,*(undefined8 *)PTR_DAT_0458f8f8);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar3,param_4);
    (**(code **)(*param_4 + 0x198))(param_4,plVar3,*(undefined8 *)(*param_4 + 0x1a0));
    lVar5 = *plVar3;
    lVar2 = *(long *)puVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_041d7e18;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,lVar2,0);
LAB_041d7e18:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return;
}


