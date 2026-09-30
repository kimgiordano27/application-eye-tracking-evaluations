/*
FUNCTION_NAME: FUN_065433bc
ENTRY_POINT: 065433bc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined1  [16] FUN_065433bc(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  
  if ((DAT_076dfad6 & 1) == 0) {
    thunk_FUN_032e1da0(Method_OVRTask_Awaiter<bool>_get_IsCompleted__);
    thunk_FUN_032e1da0(Method_OVRTask_Awaiter<OVRPlugin_Result>_GetResult__);
    thunk_FUN_032e1da0(Method_OVRTask_Awaiter<OVRPlugin_Result>_get_IsCompleted__);
    thunk_FUN_032e1da0(Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_GetResult__);
    thunk_FUN_032e1da0(
                      Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_get_IsCompleted__
                      );
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_Average<Vector3>__ctor__);
    thunk_FUN_032e1da0(Method_OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>_GetResult__);
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    DAT_076dfad6 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_a8 = param_2[3];
  local_b0 = param_2[2];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  local_90 = param_2[6];
  uStack_b8 = param_2[1];
  local_c0 = *param_2;
  local_70 = FUN_06599188(param_1 + 0x18,&local_c0,0);
  uVar8 = FUN_064d86a8(local_70,0);
  if ((uVar8 & 1) != 0) {
    uVar8 = FUN_057ab1f0(param_2[1],0);
    if ((uVar8 & 1) == 0) {
      FUN_064cfea8(&local_80,param_2[1],0);
      uVar9 = FUN_06599e30(param_1 + 0x18,local_80,uStack_78,0);
      puVar3 = PTR_DAT_07279510;
      if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)PTR_DAT_07279510);
      }
      uVar8 = FUN_0593c20c(uVar9,0,0);
      if ((uVar8 & 1) != 0) {
        uVar12 = *(undefined8 *)Method_Unity_VisualScripting_Average<Vector3>__ctor__;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        plVar10 = (long *)FUN_059324dc(uVar12,0);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar8 = (**(code **)(*plVar10 + 0x2b8))(plVar10,uVar9,*(undefined8 *)(*plVar10 + 0x2c0));
        if ((uVar8 & 1) != 0) {
          FUN_064cfea8(local_70,param_2[1],0);
        }
      }
    }
  }
  puVar4 = Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_GetResult__;
  lVar1 = param_1 + 0x180;
  iVar5 = FUN_04bf7000(lVar1,*(undefined8 *)
                              Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_GetResult__
                      );
  puVar3 = Method_OVRTask_Awaiter<bool>_get_IsCompleted__;
  if (0 < iVar5) {
    if (*(long *)(param_1 + 0x430) == 0) {
      uVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>_get_IsCompleted__
                                );
      FUN_0657f1d0(uVar9,param_1,
                   *(undefined8 *)Method_OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>_GetResult__,0)
      ;
      *(undefined8 *)(param_1 + 0x430) = uVar9;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0x430),uVar9);
    }
    *(undefined4 *)(param_1 + 0x438) = param_3;
    FUN_04bf73b0(lVar1,*(undefined8 *)puVar3);
    iVar5 = FUN_04bf7000(lVar1,*(undefined8 *)puVar4);
    puVar3 = Method_OVRTask_Awaiter<OVRPlugin_Result>_get_IsCompleted__;
    if (0 < iVar5) {
      bVar2 = false;
      iVar5 = 0;
      do {
        lVar11 = FUN_04bf7008(lVar1,iVar5,*(undefined8 *)puVar3);
        uVar9 = FUN_064d02f4(local_70._0_8_,local_70._8_8_,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar9 = (**(code **)(lVar11 + 0x18))
                          (*(undefined8 *)(lVar11 + 0x40),param_2,uVar9,
                           *(undefined8 *)(param_1 + 0x430),*(undefined8 *)(lVar11 + 0x28));
        uVar6 = FUN_057ab1f0(uVar9,0);
        if (!bVar2 && (uVar6 & 1) == 0) {
          local_d0 = 0;
          uStack_c8 = 0;
          FUN_064cfea8(&local_d0,uVar9,0);
          bVar2 = true;
          local_70._8_8_ = uStack_c8;
          local_70._0_8_ = local_d0;
        }
        iVar5 = iVar5 + 1;
        iVar7 = FUN_04bf7000(lVar1,*(undefined8 *)puVar4);
      } while (iVar5 < iVar7);
    }
    FUN_04bf73bc(lVar1,*(undefined8 *)Method_OVRTask_Awaiter<OVRPlugin_Result>_GetResult__);
  }
  return local_70;
}


