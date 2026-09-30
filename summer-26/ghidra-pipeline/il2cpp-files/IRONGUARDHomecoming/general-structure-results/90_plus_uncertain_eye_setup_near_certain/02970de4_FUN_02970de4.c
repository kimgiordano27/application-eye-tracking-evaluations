/*
FUNCTION_NAME: FUN_02970de4
ENTRY_POINT: 02970de4
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


/* WARNING: Removing unreachable block (ram,0x02970fa8) */

void FUN_02970de4(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((DAT_04830c99 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* try { // try from 02970e18 to 02a70fc7 has its CatchHandler @ 02970e18
                       catch() { ... } // from try @ 02970e18 with catch @ 02970e18
                       catch() { ... } // from try @ 02971050 with catch @ 02970e18
                       catch() { ... } // from try @ 02971064 with catch @ 02970e18
                       catch() { ... } // from try @ 029710a0 with catch @ 02970e18
                       catch() { ... } // from try @ 029710dc with catch @ 02970e18 */
    DAT_04830c99 = 1;
  }
  if (param_1 == (long *)0x0) {
LAB_02970fa0:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0422b6c0(param_1,0);
  if (param_1[0x7d] != 0) {
    uVar2 = FUN_0422b208(param_1,0);
    lVar7 = param_1[0x7e];
    uVar9 = *(undefined4 *)((long)param_1 + 0x3f4);
    FUN_0422b27c(param_1,param_1,uVar2,0);
    plVar3 = (long *)FUN_0249b418(*(undefined8 *)
                                   (*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28));
    if (plVar3 == (long *)0x0) goto LAB_02970fa0;
    uVar4 = (**(code **)(*plVar3 + 0x1b8))
                      ((int)lVar7,uVar9,(int)param_1[0x7e],*(undefined4 *)((long)param_1 + 0x3f4),
                       plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if ((uVar4 & 1) == 0) {
      lVar1 = param_1[0x7e];
      uVar10 = *(undefined4 *)((long)param_1 + 0x3f4);
      lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar3 = (long *)FUN_029e7034((int)lVar7,uVar9,(int)lVar1,uVar10,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x50));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar3,param_1,0);
      (**(code **)(*param_1 + 0x838))
                ((int)param_1[0x7e],*(undefined4 *)((long)param_1 + 0x3f4),param_1,
                 *(undefined8 *)(*param_1 + 0x840));
      (**(code **)(*param_1 + 0x198))(param_1,plVar3,*(undefined8 *)(*param_1 + 0x1a0));
      lVar7 = *plVar3;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02970f7c;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar3,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02970f7c:
      (*(code *)*puVar6)(plVar3,puVar6[1]);
    }
  }
  return;
}


