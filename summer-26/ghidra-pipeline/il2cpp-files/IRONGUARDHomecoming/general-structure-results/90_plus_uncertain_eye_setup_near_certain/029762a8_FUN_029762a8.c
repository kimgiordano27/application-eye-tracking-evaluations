/*
FUNCTION_NAME: FUN_029762a8
ENTRY_POINT: 029762a8
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


/* WARNING: Removing unreachable block (ram,0x0297647c) */

void FUN_029762a8(long *param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  
  if ((DAT_04830cae & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04830cae = 1;
  }
  plVar2 = (long *)FUN_02704f84(*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28))
  ;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = (**(code **)(*plVar2 + 0x1b8))
                    (plVar2,param_1[0x7e],(int)param_1[0x7f],param_2,param_3,
                     *(undefined8 *)(*plVar2 + 0x1c0));
  if ((uVar3 & 1) == 0) {
    lVar4 = FUN_04224ea4(param_1,0);
    if (lVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02976440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x838))(param_1,param_2,param_3,*(undefined8 *)(*param_1 + 0x840));
      return;
    }
    lVar9 = param_1[0x7e];
    lVar4 = param_1[0x7f];
    (**(code **)(*param_1 + 0x838))(param_1,param_2,param_3,*(undefined8 *)(*param_1 + 0x840));
    lVar8 = param_1[0x7e];
    lVar1 = param_1[0x7f];
    lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar2 = (long *)FUN_029e7998(lVar9,(int)lVar4,lVar8,(int)lVar1,
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x50));
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar2,param_1,0);
    (**(code **)(*param_1 + 0x198))(param_1,plVar2,*(undefined8 *)(*param_1 + 0x1a0));
    lVar4 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02976450;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02976450:
    (*(code *)*puVar6)(plVar2,puVar6[1]);
  }
  return;
}


