/*
FUNCTION_NAME: FUN_041445b0
ENTRY_POINT: 041445b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 102
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x04144700) */

void FUN_041445b0(long *param_1,byte param_2)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_0484089d & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0458b360);
    thunk_FUN_01efb3a4(PTR_DAT_0458b368);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_0484089d = 1;
  }
  puVar2 = PTR_DAT_0458b360;
  bVar1 = *(byte *)(param_1 + 0x7d);
  if (bVar1 != (param_2 & 1)) {
    if (*(int *)(*(long *)PTR_DAT_0458b368 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar3 = (long *)FUN_029e476c(bVar1 != 0,param_2 & 1,*(undefined8 *)puVar2);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar3,param_1,0);
    FUN_041447bc(param_1,param_2 & 1);
    (**(code **)(*param_1 + 0x198))(param_1,plVar3,*(undefined8 *)(*param_1 + 0x1a0));
    FUN_0422b58c(param_1,0);
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_041446dc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_041446dc:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return;
}


