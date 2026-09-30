/*
FUNCTION_NAME: FUN_05d7cd00
ENTRY_POINT: 05d7cd00
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


long FUN_05d7cd00(long param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  long local_38;
  
  puVar3 = PTR_DAT_067693f0;
  if ((DAT_06b82cd7 & 1) == 0) {
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetResult__
                );
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__
                );
    FUN_02d6084c(Method_OVRResult<OVRPlugin_Result>_get_Success__);
    FUN_02d6084c(Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Status__);
    FUN_02d6084c(PTR_DAT_06769410);
    FUN_02d6084c(PTR_DAT_06769418);
    FUN_02d6084c(Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Success__);
    FUN_02d6084c(Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_Task__
                );
    FUN_02d6084c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                );
    FUN_02d6084c(PTR_DAT_067693f0);
    DAT_06b82cd7 = 1;
  }
  puVar4 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
  ;
  local_38 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  lVar5 = FUN_0360959c(param_2,*(undefined8 *)puVar4);
  if (lVar5 != 0) {
    uVar12 = *(undefined8 *)(lVar5 + 0x30);
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_0501fa14(uVar12,0,0);
    if ((uVar6 & 1) != 0) {
      plVar7 = (long *)FUN_05031494(*(undefined8 *)(lVar5 + 0x30),0);
      if (plVar7 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_Task__
                         + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)
             Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_Task__)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(plVar7);
        }
      }
      lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                  Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Success__
                                );
      FUN_03aabc60(lVar5,*(undefined8 *)
                          Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Status__);
      local_38 = lVar5;
      if (lVar5 != 0) {
        lVar9 = *(long *)(lVar5 + 0x10);
        lVar10 = *(long *)Method_OVRResult<OVRPlugin_Result>_get_Success__;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar9 != 0) {
          uVar2 = *(uint *)(lVar5 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar2 + 1;
            plVar8 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
            *plVar8 = (long)plVar7;
            thunk_FUN_02dd37b4(plVar8,plVar7);
            uVar12 = extraout_x1;
          }
          else {
            FUN_03aac494(lVar5,plVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            uVar12 = extraout_x1_03;
          }
LAB_05d7cff4:
          if (*(long *)(param_1 + 0x50) != 0) {
            lVar5 = FUN_0638a55c(&Method_System_Nullable<Vector3>_get_Value__,
                                 *(long *)(param_1 + 0x50),uVar12,local_38);
            return lVar5;
          }
        }
      }
      goto LAB_05d7cfd8;
    }
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar6 = FUN_0489720c(*(long *)(param_1 + 0x50),param_2,&local_38,
                         *(undefined8 *)
                          Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetResult__
                        );
    if ((uVar6 & 1) != 0) {
      return local_38;
    }
    lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Success__
                              );
    FUN_03aabc60(lVar5,*(undefined8 *)
                        Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Status__);
    puVar4 = Method_OVRResult<OVRPlugin_Result>_get_Success__;
    puVar3 = PTR_DAT_06769418;
    lVar9 = *(long *)(param_1 + 0x20);
    local_38 = lVar5;
    if (lVar9 != 0) {
      iVar11 = 0;
      uVar12 = extraout_x1_00;
      do {
        if (*(int *)(lVar9 + 0x18) <= iVar11) goto LAB_05d7cff4;
        plVar7 = (long *)FUN_03aac1c4(lVar9,iVar11,*(undefined8 *)puVar3);
        if (plVar7 == (long *)0x0) break;
        auVar13 = (**(code **)(*plVar7 + 0x178))(plVar7,param_2,*(undefined8 *)(*plVar7 + 0x180));
        uVar12 = auVar13._8_8_;
        if ((auVar13._0_8_ & 1) != 0) {
          if (local_38 == 0) break;
          lVar5 = *(long *)(local_38 + 0x10);
          lVar9 = *(long *)puVar4;
          *(int *)(local_38 + 0x1c) = *(int *)(local_38 + 0x1c) + 1;
          if (lVar5 == 0) break;
          uVar2 = *(uint *)(local_38 + 0x18);
          if (uVar2 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(local_38 + 0x18) = uVar2 + 1;
            plVar8 = (long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
            *plVar8 = (long)plVar7;
            thunk_FUN_02dd37b4(plVar8,plVar7);
            uVar12 = extraout_x1_01;
          }
          else {
            FUN_03aac494(local_38,plVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            uVar12 = extraout_x1_02;
          }
        }
        lVar9 = *(long *)(param_1 + 0x20);
        iVar11 = iVar11 + 1;
      } while (lVar9 != 0);
    }
  }
LAB_05d7cfd8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


