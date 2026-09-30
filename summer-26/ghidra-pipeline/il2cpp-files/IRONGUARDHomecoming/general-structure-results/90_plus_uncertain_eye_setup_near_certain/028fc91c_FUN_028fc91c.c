/*
FUNCTION_NAME: FUN_028fc91c
ENTRY_POINT: 028fc91c
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


/* WARNING: Removing unreachable block (ram,0x028fca24) */

void FUN_028fc91c(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  long in_x10;
  int *piVar6;
  long *unaff_x20;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  iVar1 = *(int *)(param_1 + in_x9 * 0x28 + 0x44);
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  FUN_0423eb70();
  plVar2 = (long *)FUN_027c4708((double)((float)(in_x10 + (-iVar1 & iVar1 >> 0x1f)) / 1000.0),
                                uStack0000000000000000,uStack0000000000000008,
                                *(undefined8 *)
                                 Method_System_Linq_Enumerable_All<KeyValuePair<TurretType,_TurretBase>>__
                               );
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_041d4560(plVar2);
  (**(code **)(*unaff_x20 + 0x198))();
  lVar4 = *plVar2;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_028fc9f0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_028fc9f0:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


