/*
FUNCTION_NAME: FUN_0284ccd0
ENTRY_POINT: 0284ccd0
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


/* WARNING: Removing unreachable block (ram,0x0284cea0) */

void FUN_0284ccd0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if ((DAT_0483087d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_0483087d = 1;
  }
  plVar1 = (long *)FUN_02499e28(*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28))
  ;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = (**(code **)(*plVar1 + 0x1b8))
                    (plVar1,param_1[0x7e],param_1[0x7f],param_2,param_3,
                     *(undefined8 *)(*plVar1 + 0x1c0));
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_04224ea4(param_1,0);
    if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0284ce64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x838))(param_1,param_2,param_3,*(undefined8 *)(*param_1 + 0x840));
      return;
    }
    lVar9 = param_1[0x7e];
    lVar8 = param_1[0x7f];
    (**(code **)(*param_1 + 0x838))(param_1,param_2,param_3,*(undefined8 *)(*param_1 + 0x840));
    lVar6 = param_1[0x7e];
    lVar7 = param_1[0x7f];
    lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar1 = (long *)FUN_029e6444(lVar9,lVar8,lVar6,lVar7,
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x50));
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar1,param_1,0);
    (**(code **)(*param_1 + 0x198))(param_1,plVar1,*(undefined8 *)(*param_1 + 0x1a0));
    lVar3 = *plVar1;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0284ce74;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar1,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0284ce74:
    (*(code *)*puVar4)(plVar1,puVar4[1]);
  }
  return;
}


