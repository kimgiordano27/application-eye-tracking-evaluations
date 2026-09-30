/*
FUNCTION_NAME: FUN_041b24b4
ENTRY_POINT: 041b24b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x041b2674) */

void FUN_041b24b4(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  
  puVar1 = PTR_DAT_0458e998;
  if ((DAT_04840d77 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0458e9a0);
    thunk_FUN_01efb3a4(PTR_DAT_0458e9a8);
    thunk_FUN_01efb3a4(PTR_DAT_0458e998);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04840d77 = 1;
  }
  plVar2 = (long *)FUN_0231acc0(*(undefined8 *)puVar1);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = (**(code **)(*plVar2 + 0x1b8))
                    ((int)param_2[0x7f],param_1,plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
  if ((uVar3 & 1) == 0) {
    lVar4 = FUN_04224ea4(param_2,0);
    if (lVar4 == 0) {
      *(int *)(param_2 + 0x7f) = (int)param_1;
      (**(code **)(*param_2 + 0x7c8))(param_2,*(undefined8 *)(*param_2 + 2000));
      FUN_041b2080(param_2);
      return;
    }
    lVar4 = param_2[0x7f];
    if (*(int *)(*(long *)PTR_DAT_0458e9a8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar2 = (long *)FUN_029e6758((int)lVar4,param_1,*(undefined8 *)PTR_DAT_0458e9a0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar2,param_2,0);
    *(int *)(param_2 + 0x7f) = (int)param_1;
    (**(code **)(*param_2 + 0x7c8))(param_2,*(undefined8 *)(*param_2 + 2000));
    FUN_041b2080(param_2);
    (**(code **)(*param_2 + 0x198))(param_2,plVar2,*(undefined8 *)(*param_2 + 0x1a0));
    lVar4 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_041b264c;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_041b264c:
    (*(code *)*puVar5)(plVar2,puVar5[1]);
  }
  return;
}


