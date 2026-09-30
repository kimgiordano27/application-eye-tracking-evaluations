/*
FUNCTION_NAME: FUN_041e323c
ENTRY_POINT: 041e323c
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


/* WARNING: Removing unreachable block (ram,0x041e3404) */

void FUN_041e323c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_04840f80 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0458a568);
    thunk_FUN_01efb3a4(PTR_DAT_0458fbf0);
    thunk_FUN_01efb3a4(PTR_DAT_04590058);
    thunk_FUN_01efb3a4(Method_UnityEngine_EventSystems_ExecuteEvents_Execute__);
    DAT_04840f80 = 1;
  }
  if ((*(byte *)(param_1 + 0x40) >> 2 & 1) == 0) {
    uVar1 = FUN_041f7fb0(param_2,param_1,0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_0458fbf0 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar2 = (long *)FUN_041ddc18(param_1);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar2,*(undefined8 *)(param_1 + 0x50));
      plVar6 = (long *)plVar2[10];
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *plVar6;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0458a568) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_041e3360;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)PTR_DAT_0458a568,0);
LAB_041e3360:
      (*(code *)*puVar3)(plVar6,plVar2,puVar3[1]);
      if (plVar2 != (long *)0x0) {
        lVar4 = *plVar2;
        uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar1 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_041e33cc;
            }
            uVar1 = uVar1 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_01ecb238(plVar2,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_041e33cc:
        (*(code *)*puVar3)(plVar2,puVar3[1]);
      }
    }
  }
  else {
    FUN_041f7ebc(param_2,*(undefined4 *)(param_1 + 0x9c),0);
  }
  FUN_025ebc08(param_1,param_2,*(undefined8 *)PTR_DAT_04590058);
  return;
}


