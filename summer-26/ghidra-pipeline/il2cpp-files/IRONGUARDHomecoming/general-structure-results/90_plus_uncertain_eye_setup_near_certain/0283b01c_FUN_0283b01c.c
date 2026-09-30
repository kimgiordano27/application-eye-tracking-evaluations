/*
FUNCTION_NAME: FUN_0283b01c
ENTRY_POINT: 0283b01c
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


/* WARNING: Removing unreachable block (ram,0x0283b27c) */

void FUN_0283b01c(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_70;
  long lStack_68;
  long local_60;
  long local_50;
  long lStack_48;
  long local_40;
  
  if ((DAT_04830835 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04830835 = 1;
  }
  plVar1 = (long *)FUN_02853310(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28))
  ;
  local_40 = param_1[0x80];
  lStack_48 = param_1[0x7f];
  local_50 = param_1[0x7e];
  local_60 = param_2[2];
  lStack_68 = param_2[1];
  local_70 = *param_2;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = (**(code **)(*plVar1 + 0x1b8))
                    (plVar1,&local_50,&local_70,*(undefined8 *)(*plVar1 + 0x1c0));
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_04224ea4(param_1,0);
    if (lVar3 == 0) {
      local_40 = param_2[2];
      lStack_48 = param_2[1];
      local_50 = *param_2;
      (**(code **)(*param_1 + 0x838))(param_1,&local_50,*(undefined8 *)(*param_1 + 0x840));
    }
    else {
      lVar5 = param_1[0x80];
      lVar10 = param_1[0x7f];
      lVar8 = param_1[0x7e];
      local_40 = param_2[2];
      lStack_48 = param_2[1];
      local_50 = *param_2;
      (**(code **)(*param_1 + 0x838))(param_1,&local_50,*(undefined8 *)(*param_1 + 0x840));
      lVar6 = param_1[0x80];
      lVar11 = param_1[0x7f];
      lVar9 = param_1[0x7e];
      lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      local_70 = lVar9;
      lStack_68 = lVar11;
      local_60 = lVar6;
      local_50 = lVar8;
      lStack_48 = lVar10;
      local_40 = lVar5;
      plVar1 = (long *)FUN_029e4ab8(&local_50,&local_70,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x50));
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar1,param_1,0);
      (**(code **)(*param_1 + 0x198))(param_1,plVar1,*(undefined8 *)(*param_1 + 0x1a0));
      lVar3 = *plVar1;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0283b250;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(plVar1,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0283b250:
      (*(code *)*puVar4)(plVar1,puVar4[1]);
    }
  }
  return;
}


