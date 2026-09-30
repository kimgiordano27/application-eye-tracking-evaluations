/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4f>$$get_Current
ENTRY_POINT: 0291355c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4f>__get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000068;
  
  puVar2 = System_Threading_Tasks_Parallel_TypeInfo;
  if ((DAT_04530eb8 & 1) == 0) {
    FUN_01c5d288(Photon_Pun_PhotonNetwork_TypeInfo);
    FUN_01c5d288(ExitGames_Client_Photon_PhotonPeer_TypeInfo);
    FUN_01c5d288(System_Threading_Tasks_Parallel_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(PhotonCustomGamePortal_TypeInfo);
    FUN_01c5d288(Photon_Pun_PhotonHandler_TypeInfo);
    FUN_01c5d288(PhotonManager_TypeInfo);
    FUN_01c5d288(Photon_Pun_PhotonMessageInfo_TypeInfo);
    DAT_04530eb8 = 1;
  }
  in_stack_00000068 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  lVar5 = FUN_0329f684(0);
  if (lVar5 != 0) {
    FUN_0282c06c(lVar5,param_1,&stack0x00000068,
                 *(undefined8 *)ExitGames_Client_Photon_PhotonPeer_TypeInfo);
    if (in_stack_00000068 == 0) {
      return;
    }
    uVar3 = FUN_031e78c4(in_stack_00000068,*(undefined8 *)Photon_Pun_PhotonMessageInfo_TypeInfo,0);
    puVar1 = PTR_DAT_0422fb28;
    if (in_stack_00000068 == 0) goto LAB_029138c8;
    iVar4 = FUN_031e78c4(in_stack_00000068,*(undefined8 *)PhotonCustomGamePortal_TypeInfo,0);
    lVar5 = in_stack_00000068;
    lVar7 = *(long *)puVar1;
    uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x168);
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar7);
    }
    uVar10 = FUN_032e04b8(uVar10,0);
    if (lVar5 == 0) goto LAB_029138c8;
    lVar5 = FUN_031e5740(lVar5,*(undefined8 *)Photon_Pun_PhotonHandler_TypeInfo,uVar10,0);
    lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01c72394(lVar7);
    }
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = thunk_FUN_01c495e4(lVar5,lVar7);
      if (lVar6 == 0) goto FUN_029138cc;
    }
    *(long *)(param_1 + 0x30) = lVar6;
    lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01c72394(lVar7);
    }
    if ((lVar5 != 0) && (lVar6 = thunk_FUN_01c495e4(lVar5,lVar7), lVar6 == 0)) {
FUN_029138cc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(lVar5,lVar7);
    }
    if (iVar4 == 0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      FUN_02913024(param_1,iVar4,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10)
                  );
      lVar5 = in_stack_00000068;
      uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x180);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar10 = FUN_032e04b8(uVar10,0);
      if (lVar5 == 0) goto LAB_029138c8;
      lVar5 = FUN_031e5740(lVar5,*(undefined8 *)PhotonManager_TypeInfo,uVar10,0);
      lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x140);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01c72394(lVar7);
      }
      if (lVar5 == 0) {
        FUN_032f25c4(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar6 = thunk_FUN_01c495e4(lVar5,lVar7);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(lVar5,lVar7);
      }
      if (0 < *(int *)(lVar6 + 0x18)) {
        uVar9 = 0;
        plVar11 = (long *)(lVar6 + 0x20);
        do {
          uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
          if (uVar8 <= uVar9) {
LAB_029138c4:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          if (*plVar11 == 0) {
            FUN_032f25c4(0x11,0);
            uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
          }
          if (uVar8 <= uVar9) goto LAB_029138c4;
          in_stack_00000038 = plVar11[2];
          in_stack_00000030 = plVar11[1];
          in_stack_00000058 = plVar11[6];
          in_stack_00000050 = plVar11[5];
          in_stack_00000048 = plVar11[4];
          in_stack_00000040 = plVar11[3];
          Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector2f>__Reset
                    (param_1,*plVar11,&stack0x00000030,2,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                    0x80) + 0x20) + 0xc0) + 0x110));
          uVar9 = uVar9 + 1;
          plVar11 = plVar11 + 7;
        } while ((long)uVar9 < (long)*(int *)(lVar6 + 0x18));
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar5 = FUN_0329f684(0);
    if (lVar5 != 0) {
      FUN_0282be2c(lVar5,param_1,*(undefined8 *)Photon_Pun_PhotonNetwork_TypeInfo);
      return;
    }
  }
LAB_029138c8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


