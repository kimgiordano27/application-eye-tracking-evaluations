/*
FUNCTION_NAME: FUN_041e8d9c
ENTRY_POINT: 041e8d9c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x041e8ec0) */

void FUN_041e8d9c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  puVar2 = PTR_DAT_045904d0;
  if ((DAT_04840ff7 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_045904d0);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04840ff7 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar3 = (long *)FUN_02e5fc2c(param_2,param_3,param_4,param_1,param_5 & 1,*(undefined8 *)puVar2);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*param_2 + 0x1a8))(param_2,plVar3,param_6,*(undefined8 *)(*param_2 + 0x1b0));
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_041e8e94;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_041e8e94:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return;
}


