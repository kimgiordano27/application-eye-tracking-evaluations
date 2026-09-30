/*
FUNCTION_NAME: FUN_03fc7808
ENTRY_POINT: 03fc7808
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


/* WARNING: Removing unreachable block (ram,0x03fc7920) */

void FUN_03fc7808(undefined8 param_1,long param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  puVar1 = PTR_DAT_04583ba8;
  if ((DAT_0483b984 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04583ba8);
    thunk_FUN_01efb3a4(PTR_DAT_04583bb0);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_0483b984 = 1;
  }
  FUN_02dfc658(param_1,param_2,param_3,*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_04583bb0;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar3 = (long *)thunk_FUN_03ed4570(param_2,0);
  FUN_02dfc1b4(param_1,plVar3,*(undefined8 *)puVar2);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03fc78fc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_03fc78fc:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return;
}


