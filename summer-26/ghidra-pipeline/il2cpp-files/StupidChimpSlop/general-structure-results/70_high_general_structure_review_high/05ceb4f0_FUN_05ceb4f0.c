/*
FUNCTION_NAME: FUN_05ceb4f0
ENTRY_POINT: 05ceb4f0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


undefined4 FUN_05ceb4f0(long param_1,undefined2 param_2,ulong param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  undefined8 local_58;
  
  if ((DAT_06a57d8d & 1) == 0) {
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<BackgroundPosition>__);
    FUN_02d4dc40(PTR_DAT_0664e058);
    FUN_02d4dc40(PTR_DAT_0664e078);
    FUN_02d4dc40(PTR_DAT_0664e050);
    FUN_02d4dc40(PTR_DAT_0664e048);
    FUN_02d4dc40(Method_PlayFab_PlayFabProgressionInstanceAPI_IncrementLeaderboardVersion__);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_Protocol16_SerializeCustom__);
    FUN_02d4dc40(PTR_DAT_066462d0);
    FUN_02d4dc40(PTR_DAT_06649a88);
    FUN_02d4dc40(Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__);
    DAT_06a57d8d = 1;
  }
  lVar7 = *(long *)(param_1 + 0x138);
  local_58 = 0;
  if (lVar7 == 0) {
    FUN_05ce7b24(param_1);
    lVar7 = *(long *)(param_1 + 0x138);
    if (lVar7 == 0) {
      return 0;
    }
  }
  uVar8 = FUN_048bddc4(lVar7,param_2,
                       *(undefined8 *)
                        Method_Unity_Properties_PropertyBag_Register<BackgroundPosition>__);
  if (((uVar8 & 1) != 0) ||
     ((((param_4 & 1) != 0 && (*(int *)(param_1 + 0x110) - 1U < 2)) &&
      (uVar8 = FUN_05ceba44(param_1,param_2,&local_58), (uVar8 & 1) != 0)))) {
    return 1;
  }
  puVar3 = PTR_DAT_06649a88;
  if ((param_3 & 1) == 0) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_06649a88;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar7 = *(long *)puVar3;
  }
  lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x60);
  if (lVar11 == 0) {
    uVar10 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0664e048);
    FUN_04c9b148(uVar10,*(undefined8 *)PTR_DAT_0664e050);
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar7 = *(long *)puVar3;
    }
    puVar9 = (undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x60);
    *puVar9 = uVar10;
    thunk_FUN_02dc1ef0(puVar9,uVar10);
  }
  else {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar11 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x60);
      if (lVar11 == 0) goto LAB_05ceb7e4;
    }
    FUN_04c9b7ec(lVar11,*(undefined8 *)PTR_DAT_0664e078);
  }
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar7 = *(long *)puVar3;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x60);
  uVar6 = FUN_05ee6bc0(param_1,0);
  puVar4 = PTR_DAT_0664e058;
  if (lVar7 != 0) {
    FUN_04c9c388(lVar7,uVar6,*(undefined8 *)PTR_DAT_0664e058);
    puVar2 = Method_ExitGames_Client_Photon_Protocol16_SerializeCustom__;
    puVar1 = PTR_DAT_066462d0;
    lVar7 = *(long *)(param_1 + 0x188);
    if ((lVar7 == 0) || (*(int *)(lVar7 + 0x18) < 1)) {
LAB_05ceb7e8:
      puVar1 = Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__;
      if (*(int *)(*(long *)Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__ +
                  0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar7 = FUN_05d2c604(0);
      if (lVar7 != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        lVar7 = FUN_05d2c604(0);
        puVar5 = Method_ExitGames_Client_Photon_Protocol16_SerializeCustom__;
        puVar2 = PTR_DAT_066462d0;
        if (lVar7 == 0) goto LAB_05ceb7e4;
        if (0 < *(int *)(lVar7 + 0x18)) {
          iVar12 = 0;
          while( true ) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            lVar7 = FUN_05d2c604(0);
            if (lVar7 == 0) break;
            if (*(int *)(lVar7 + 0x18) <= iVar12) goto LAB_05ceb958;
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            lVar7 = FUN_05d2c604(0);
            if (lVar7 == 0) break;
            uVar10 = FUN_036a5b38(lVar7,iVar12,*(undefined8 *)puVar5);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02dabd98(*(long *)puVar2);
            }
            uVar8 = FUN_05ee1474(uVar10,0,0);
            if ((uVar8 & 1) == 0) goto LAB_05ceb958;
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            lVar7 = FUN_05d2c604(0);
            if ((lVar7 == 0) ||
               (lVar7 = FUN_036a5b38(lVar7,iVar12,*(undefined8 *)puVar5), lVar7 == 0)) break;
            uVar6 = FUN_05ee6bc0(lVar7,0);
            lVar11 = *(long *)puVar3;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_02dabd98(lVar11);
              lVar11 = *(long *)puVar3;
            }
            lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x60);
            if (lVar11 == 0) break;
            uVar8 = FUN_04c9c388(lVar11,uVar6,*(undefined8 *)puVar4);
            if (((uVar8 & 1) != 0) &&
               (uVar8 = FUN_05cec44c(lVar7,param_2,1,param_4 & 1), (uVar8 & 1) != 0)) {
              return 1;
            }
            iVar12 = iVar12 + 1;
          }
          goto LAB_05ceb7e4;
        }
      }
LAB_05ceb958:
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar10 = FUN_05d2c200(0);
      if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
        thunk_FUN_02dabd98(*(long *)PTR_DAT_066462d0);
      }
      uVar8 = FUN_05ee1474(uVar10,0,0);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar7 = FUN_05d2c200(0);
      if (lVar7 != 0) {
        uVar6 = FUN_05ee6bc0(lVar7,0);
        lVar11 = *(long *)puVar3;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dabd98(lVar11);
          lVar11 = *(long *)puVar3;
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x60);
        if (lVar11 != 0) {
          uVar8 = FUN_04c9c388(lVar11,uVar6,*(undefined8 *)puVar4);
          if ((uVar8 & 1) == 0) {
            return 0;
          }
          uVar8 = FUN_05cec44c(lVar7,param_2,1,param_4 & 1);
          if ((uVar8 & 1) == 0) {
            return 0;
          }
          return 1;
        }
      }
    }
    else {
      iVar12 = 0;
      do {
        if (*(int *)(lVar7 + 0x18) <= iVar12) goto LAB_05ceb7e8;
        uVar10 = FUN_036a5b38(lVar7,iVar12,*(undefined8 *)puVar2);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02dabd98(*(long *)puVar1);
        }
        uVar8 = FUN_05ee1474(uVar10,0,0);
        if ((uVar8 & 1) == 0) goto LAB_05ceb7e8;
        if ((*(long *)(param_1 + 0x188) == 0) ||
           (lVar7 = FUN_036a5b38(*(long *)(param_1 + 0x188),iVar12,*(undefined8 *)puVar2),
           lVar7 == 0)) break;
        uVar6 = FUN_05ee6bc0(lVar7,0);
        lVar11 = *(long *)puVar3;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02dabd98(lVar11);
          lVar11 = *(long *)puVar3;
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x60);
        if (lVar11 == 0) break;
        uVar8 = FUN_04c9c388(lVar11,uVar6,*(undefined8 *)puVar4);
        if (((uVar8 & 1) != 0) &&
           (uVar8 = FUN_05cec44c(lVar7,param_2,1,param_4 & 1), (uVar8 & 1) != 0)) {
          return 1;
        }
        lVar7 = *(long *)(param_1 + 0x188);
        iVar12 = iVar12 + 1;
      } while (lVar7 != 0);
    }
  }
LAB_05ceb7e4:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


