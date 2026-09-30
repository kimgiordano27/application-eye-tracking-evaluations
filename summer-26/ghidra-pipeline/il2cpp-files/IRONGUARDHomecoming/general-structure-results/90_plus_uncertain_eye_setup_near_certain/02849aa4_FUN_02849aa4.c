/*
FUNCTION_NAME: FUN_02849aa4
ENTRY_POINT: 02849aa4
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


/* WARNING: Removing unreachable block (ram,0x02849c44) */

void FUN_02849aa4(long *param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_04830871 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04830871 = 1;
  }
  if (param_1 == (long *)0x0) {
LAB_02849c3c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0422b6c0(param_1,0);
  if (param_1[0x7d] != 0) {
    uVar1 = FUN_0422b208(param_1,0);
    lVar7 = param_1[0x7e];
    FUN_0422b27c(param_1,param_1,uVar1,0);
    plVar2 = (long *)FUN_02249368(*(undefined8 *)
                                   (*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28));
    if (plVar2 == (long *)0x0) goto LAB_02849c3c;
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,lVar7,param_1[0x7e],*(undefined8 *)(*plVar2 + 0x1c0));
    if ((uVar3 & 1) == 0) {
      lVar8 = param_1[0x7e];
      lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar2 = (long *)FUN_029e5dc8(lVar7,lVar8,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x50));
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar2,param_1,0);
      (**(code **)(*param_1 + 0x838))(param_1,param_1[0x7e],*(undefined8 *)(*param_1 + 0x840));
      (**(code **)(*param_1 + 0x198))(param_1,plVar2,*(undefined8 *)(*param_1 + 0x1a0));
      lVar7 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_02849c1c;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar2,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02849c1c:
      (*(code *)*puVar5)(plVar2,puVar5[1]);
    }
  }
  return;
}


