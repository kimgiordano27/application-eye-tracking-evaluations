/*
FUNCTION_NAME: FUN_05cec858
ENTRY_POINT: 05cec858
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


undefined8 FUN_05cec858(long param_1,long param_2,undefined8 *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  undefined8 local_70;
  int local_64;
  
  if ((DAT_06a57d90 & 1) == 0) {
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<BackgroundPosition>__);
    FUN_02d4dc40(PTR_DAT_0664e058);
    FUN_02d4dc40(PTR_DAT_0664e078);
    FUN_02d4dc40(PTR_DAT_0664e050);
    FUN_02d4dc40(PTR_DAT_0664e048);
    FUN_02d4dc40(PTR_DAT_0664a8b0);
    FUN_02d4dc40(Method_System_Security_Claims_ClaimsPrincipal__ctor__);
    FUN_02d4dc40(Method_System_Security_Claims_ClaimsIdentity_AddClaim__);
    FUN_02d4dc40(Method_PlayFab_PlayFabProgressionInstanceAPI_IncrementLeaderboardVersion__);
    FUN_02d4dc40(Method_PlayFab_Json_PocoJsonSerializerStrategy_DeserializeObject__);
    FUN_02d4dc40(Method_ExitGames_Client_Photon_Protocol16_SerializeCustom__);
    FUN_02d4dc40(PTR_DAT_066462d0);
    FUN_02d4dc40(Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__
                );
    FUN_02d4dc40(PTR_DAT_06649a88);
    FUN_02d4dc40(Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__);
    DAT_06a57d90 = 1;
  }
  local_64 = 0;
  local_70 = 0;
  *param_3 = 0;
  thunk_FUN_02dc1ef0(param_3,0);
  if ((*(long *)(param_1 + 0x138) == 0) && (FUN_05ce7b24(param_1), *(long *)(param_1 + 0x138) == 0))
  {
    return 0;
  }
  lVar11 = *(long *)(param_1 + 0x220);
  if (lVar11 != 0) {
    local_64 = 0;
    *(undefined4 *)(lVar11 + 0x18) = 0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    puVar5 = Method_ExitGames_Client_Photon_Protocol16_SerializeCustom__;
    puVar4 = Method_PlayFab_PlayFabMultiplayerInstanceAPI_ListContainerImages__;
    puVar3 = PTR_DAT_0664e058;
    puVar2 = PTR_DAT_06649a88;
    if (param_2 != 0) {
      if (0 < *(int *)(param_2 + 0x10)) {
        do {
          if (*(int *)(*(long *)
                        Method_PlayFab_PlayFabProgressionInstanceAPI_UnlinkAggregationSourceFromStatistic__
                      + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uVar6 = FUN_05cf507c(param_2,&local_64,0);
          if (*(long *)(param_1 + 0x138) == 0) goto LAB_05cecf08;
          uVar8 = FUN_048bddc4(*(long *)(param_1 + 0x138),uVar6,
                               *(undefined8 *)
                                Method_Unity_Properties_PropertyBag_Register<BackgroundPosition>__);
          if (((uVar8 & 1) == 0) &&
             ((((param_5 & 1) == 0 || (1 < *(int *)(param_1 + 0x110) - 1U)) ||
              (uVar8 = FUN_05ceba44(param_1,uVar6,&local_70), (uVar8 & 1) == 0)))) {
            if ((param_4 & 1) != 0) {
              lVar11 = *(long *)puVar2;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar11 = *(long *)puVar2;
              }
              lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x60);
              if (lVar12 == 0) {
                uVar10 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0664e048);
                FUN_04c9b148(uVar10,*(undefined8 *)PTR_DAT_0664e050);
                lVar11 = *(long *)puVar2;
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                  lVar11 = *(long *)puVar2;
                }
                puVar9 = (undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x60);
                *puVar9 = uVar10;
                thunk_FUN_02dc1ef0(puVar9,uVar10);
              }
              else {
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                  lVar12 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x60);
                  if (lVar12 == 0) goto LAB_05cecf08;
                }
                FUN_04c9b7ec(lVar12,*(undefined8 *)PTR_DAT_0664e078);
              }
              lVar11 = *(long *)puVar2;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar11 = *(long *)puVar2;
              }
              lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x60);
              uVar7 = FUN_05ee6bc0(param_1,0);
              if (lVar11 == 0) goto LAB_05cecf08;
              FUN_04c9c388(lVar11,uVar7,*(undefined8 *)puVar3);
              lVar11 = *(long *)(param_1 + 0x188);
              if ((lVar11 != 0) && (0 < *(int *)(lVar11 + 0x18))) {
                iVar14 = 0;
                while (iVar14 < *(int *)(lVar11 + 0x18)) {
                  uVar10 = FUN_036a5b38(lVar11,iVar14,*(undefined8 *)puVar5);
                  if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
                    thunk_FUN_02dabd98(*(long *)PTR_DAT_066462d0);
                  }
                  uVar8 = FUN_05ee1474(uVar10,0,0);
                  if ((uVar8 & 1) == 0) break;
                  if ((*(long *)(param_1 + 0x188) == 0) ||
                     (lVar11 = FUN_036a5b38(*(long *)(param_1 + 0x188),iVar14,*(undefined8 *)puVar5)
                     , lVar11 == 0)) goto LAB_05cecf08;
                  uVar7 = FUN_05ee6bc0(lVar11,0);
                  lVar12 = *(long *)puVar2;
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    thunk_FUN_02dabd98(lVar12);
                    lVar12 = *(long *)puVar2;
                  }
                  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x60);
                  if (lVar12 == 0) goto LAB_05cecf08;
                  uVar8 = FUN_04c9c388(lVar12,uVar7,*(undefined8 *)puVar3);
                  if (((uVar8 & 1) != 0) &&
                     (uVar8 = FUN_05cec44c(lVar11,uVar6,1,param_5 & 1), (uVar8 & 1) != 0))
                  goto LAB_05cece8c;
                  lVar11 = *(long *)(param_1 + 0x188);
                  iVar14 = iVar14 + 1;
                  if (lVar11 == 0) goto LAB_05cecf08;
                }
              }
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              lVar11 = FUN_05d2c604(0);
              if (lVar11 != 0) {
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                lVar11 = FUN_05d2c604(0);
                if (lVar11 == 0) goto LAB_05cecf08;
                if (0 < *(int *)(lVar11 + 0x18)) {
                  iVar14 = 0;
                  while( true ) {
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      thunk_FUN_02dabd98();
                    }
                    lVar11 = FUN_05d2c604(0);
                    if (lVar11 == 0) goto LAB_05cecf08;
                    if (*(int *)(lVar11 + 0x18) <= iVar14) goto LAB_05cecd68;
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      thunk_FUN_02dabd98();
                    }
                    lVar11 = FUN_05d2c604(0);
                    if (lVar11 == 0) goto LAB_05cecf08;
                    uVar10 = FUN_036a5b38(lVar11,iVar14,*(undefined8 *)puVar5);
                    if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
                      thunk_FUN_02dabd98(*(long *)PTR_DAT_066462d0);
                    }
                    uVar8 = FUN_05ee1474(uVar10,0,0);
                    if ((uVar8 & 1) == 0) goto LAB_05cecd68;
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      thunk_FUN_02dabd98();
                    }
                    lVar11 = FUN_05d2c604(0);
                    if ((lVar11 == 0) ||
                       (lVar11 = FUN_036a5b38(lVar11,iVar14,*(undefined8 *)puVar5), lVar11 == 0))
                    goto LAB_05cecf08;
                    uVar7 = FUN_05ee6bc0(lVar11,0);
                    lVar12 = *(long *)puVar2;
                    if (*(int *)(lVar12 + 0xe4) == 0) {
                      thunk_FUN_02dabd98(lVar12);
                      lVar12 = *(long *)puVar2;
                    }
                    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x60);
                    if (lVar12 == 0) goto LAB_05cecf08;
                    uVar8 = FUN_04c9c388(lVar12,uVar7,*(undefined8 *)puVar3);
                    if (((uVar8 & 1) != 0) &&
                       (uVar8 = FUN_05cec44c(lVar11,uVar6,1,param_5 & 1), (uVar8 & 1) != 0)) break;
                    iVar14 = iVar14 + 1;
                  }
                  goto LAB_05cece8c;
                }
              }
LAB_05cecd68:
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              uVar10 = FUN_05d2c200(0);
              if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
                thunk_FUN_02dabd98(*(long *)PTR_DAT_066462d0);
              }
              uVar8 = FUN_05ee1474(uVar10,0,0);
              if ((uVar8 & 1) != 0) {
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                }
                lVar11 = FUN_05d2c200(0);
                if (lVar11 == 0) goto LAB_05cecf08;
                uVar7 = FUN_05ee6bc0(lVar11,0);
                lVar12 = *(long *)puVar2;
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_02dabd98(lVar12);
                  lVar12 = *(long *)puVar2;
                }
                lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x60);
                if (lVar12 == 0) goto LAB_05cecf08;
                uVar8 = FUN_04c9c388(lVar12,uVar7,*(undefined8 *)puVar3);
                if (((uVar8 & 1) != 0) &&
                   (uVar8 = FUN_05cec44c(lVar11,uVar6,1,param_5 & 1), (uVar8 & 1) != 0))
                goto LAB_05cece8c;
              }
            }
            lVar11 = *(long *)(param_1 + 0x220);
            if (lVar11 == 0) goto LAB_05cecf08;
            lVar12 = *(long *)(lVar11 + 0x10);
            lVar13 = *(long *)PTR_DAT_0664a8b0;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_05cecf08;
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar12 + (long)(int)uVar1 * 4 + 0x20) = uVar6;
            }
            else {
              FUN_0370970c(lVar11,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
          }
LAB_05cece8c:
          local_64 = local_64 + 1;
        } while (local_64 < *(int *)(param_2 + 0x10));
      }
      lVar11 = *(long *)(param_1 + 0x220);
      if (lVar11 != 0) {
        if (0 < *(int *)(lVar11 + 0x18)) {
          uVar10 = FUN_0370b084(lVar11,*(undefined8 *)
                                        Method_System_Security_Claims_ClaimsIdentity_AddClaim__);
          *param_3 = uVar10;
          thunk_FUN_02dc1ef0(param_3,uVar10);
          return 0;
        }
        return 1;
      }
    }
  }
LAB_05cecf08:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


