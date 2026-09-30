/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02913568
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


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x21;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x25;
  long *plVar11;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000068;
  
  plVar11 = *(long **)(unaff_x25 + 0xd50);
  if ((*(byte *)(unaff_x21 + 0xeb8) & 1) == 0) {
    FUN_01c5d288(Photon_Pun_PhotonNetwork_TypeInfo);
    FUN_01c5d288(ExitGames_Client_Photon_PhotonPeer_TypeInfo);
    FUN_01c5d288(System_Threading_Tasks_Parallel_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(PhotonCustomGamePortal_TypeInfo);
    FUN_01c5d288(Photon_Pun_PhotonHandler_TypeInfo);
    FUN_01c5d288(PhotonManager_TypeInfo);
    FUN_01c5d288(Photon_Pun_PhotonMessageInfo_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0xeb8) = 1;
  }
  in_stack_00000068 = 0;
  if (*(int *)(*plVar11 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  lVar4 = FUN_0329f684(0);
  if (lVar4 != 0) {
    FUN_0282c06c(lVar4,param_1,&stack0x00000068,
                 *(undefined8 *)ExitGames_Client_Photon_PhotonPeer_TypeInfo);
    if (in_stack_00000068 == 0) {
      return;
    }
    uVar2 = FUN_031e78c4(in_stack_00000068,*(undefined8 *)Photon_Pun_PhotonMessageInfo_TypeInfo,0);
    puVar1 = PTR_DAT_0422fb28;
    if (in_stack_00000068 == 0) goto LAB_029138c8;
    iVar3 = FUN_031e78c4(in_stack_00000068,*(undefined8 *)PhotonCustomGamePortal_TypeInfo,0);
    lVar4 = in_stack_00000068;
    lVar6 = *(long *)puVar1;
    uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x168);
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar6);
    }
    uVar9 = FUN_032e04b8(uVar9,0);
    if (lVar4 == 0) goto LAB_029138c8;
    lVar4 = FUN_031e5740(lVar4,*(undefined8 *)Photon_Pun_PhotonHandler_TypeInfo,uVar9,0);
    lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01c72394(lVar6);
    }
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = thunk_FUN_01c495e4(lVar4,lVar6);
      if (lVar5 == 0) goto FUN_029138cc;
    }
    *(long *)(param_1 + 0x30) = lVar5;
    lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01c72394(lVar6);
    }
    if ((lVar4 != 0) && (lVar5 = thunk_FUN_01c495e4(lVar4,lVar6), lVar5 == 0)) {
FUN_029138cc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(lVar4,lVar6);
    }
    if (iVar3 == 0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      FUN_02913024(param_1,iVar3,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10)
                  );
      lVar4 = in_stack_00000068;
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x180);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar9 = FUN_032e04b8(uVar9,0);
      if (lVar4 == 0) goto LAB_029138c8;
      lVar4 = FUN_031e5740(lVar4,*(undefined8 *)PhotonManager_TypeInfo,uVar9,0);
      lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x140);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01c72394(lVar6);
      }
      if (lVar4 == 0) {
        FUN_032f25c4(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar5 = thunk_FUN_01c495e4(lVar4,lVar6);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(lVar4,lVar6);
      }
      if (0 < *(int *)(lVar5 + 0x18)) {
        uVar8 = 0;
        plVar10 = (long *)(lVar5 + 0x20);
        do {
          uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
          if (uVar7 <= uVar8) {
LAB_029138c4:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          if (*plVar10 == 0) {
            FUN_032f25c4(0x11,0);
            uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
          }
          if (uVar7 <= uVar8) goto LAB_029138c4;
          in_stack_00000038 = plVar10[2];
          in_stack_00000030 = plVar10[1];
          in_stack_00000058 = plVar10[6];
          in_stack_00000050 = plVar10[5];
          in_stack_00000048 = plVar10[4];
          in_stack_00000040 = plVar10[3];
          Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector2f>__Reset
                    (param_1,*plVar10,&stack0x00000030,2,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                    0x80) + 0x20) + 0xc0) + 0x110));
          uVar8 = uVar8 + 1;
          plVar10 = plVar10 + 7;
        } while ((long)uVar8 < (long)*(int *)(lVar5 + 0x18));
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    if (*(int *)(*plVar11 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar4 = FUN_0329f684(0);
    if (lVar4 != 0) {
      FUN_0282be2c(lVar4,param_1,*(undefined8 *)Photon_Pun_PhotonNetwork_TypeInfo);
      return;
    }
  }
LAB_029138c8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


