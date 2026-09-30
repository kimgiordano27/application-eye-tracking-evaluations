/*
FUNCTION_NAME: FUN_051c3f40
ENTRY_POINT: 051c3f40
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


uint FUN_051c3f40(undefined8 param_1,long param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_54;
  long local_50;
  short local_48 [2];
  undefined1 local_44 [4];
  long local_38;
  
  if ((DAT_06a51e91 & 1) == 0) {
    FUN_02d4dc40(PlayFab_ClientModels_UpdatePlayerCustomPropertiesResult_var);
    FUN_02d4dc40(ExitGames_Client_Photon_SocketUdp_var);
    FUN_02d4dc40(PTR_DAT_0664b8a0);
    FUN_02d4dc40(PlayFab_ClientModels_UpdatePlayerStatisticsRequest_var);
    DAT_06a51e91 = 1;
  }
  puVar2 = ExitGames_Client_Photon_SocketUdp_var;
  local_38 = 0;
  local_44[0] = 0;
  local_48[0] = 0;
  local_50 = 0;
  local_54 = 0;
  if (param_3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0664b8a0 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0664b8a0))
    {
      lVar8 = thunk_FUN_02d5dae8(param_3,0);
    }
    else {
      lVar8 = param_3[3];
    }
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar9 = *(long *)puVar2;
    }
    if (**(long **)(lVar9 + 0xb8) != 0) {
      uVar4 = FUN_0483dd8c(**(long **)(lVar9 + 0xb8),lVar8,&local_38,
                           *(undefined8 *)
                            PlayFab_ClientModels_UpdatePlayerCustomPropertiesResult_var);
      if ((uVar4 & 1) == 0) {
LAB_051c4364:
        return uVar4 & 1;
      }
      if (local_38 != 0) {
        if (*(long *)(local_38 + 0x30) == 0) {
          lVar8 = *(long *)(local_38 + 0x20);
          if ((lVar8 != 0) &&
             (lVar8 = (**(code **)(lVar8 + 0x18))
                                (*(undefined8 *)(lVar8 + 0x40),param_3,*(undefined8 *)(lVar8 + 0x28)
                                ), param_2 != 0)) {
            FUN_051db33c(param_2,99,0);
            if ((local_38 != 0) &&
               ((FUN_051db33c(param_2,*(undefined1 *)(local_38 + 0x10),0), lVar8 != 0 &&
                (local_38 != 0)))) {
              local_44[0] = *(undefined1 *)(local_38 + 0x10);
              uVar10 = FUN_04f73bf4(local_44,0);
              uVar10 = FUN_04e723e0(*(undefined8 *)
                                     PlayFab_ClientModels_UpdatePlayerStatisticsRequest_var,uVar10,0
                                   );
              FUN_051c4384(param_1,param_2,*(undefined4 *)(lVar8 + 0x18),uVar10);
              FUN_051d455c(param_2,lVar8,0,*(undefined4 *)(lVar8 + 0x18),0);
              goto LAB_051c4364;
            }
          }
        }
        else if (param_2 != 0) {
          FUN_051db33c(param_2,99,0);
          if (local_38 != 0) {
            FUN_051db33c(param_2,*(undefined1 *)(local_38 + 0x10),0);
            uVar5 = FUN_051d45d0(param_2,0);
            iVar6 = FUN_051d45d0(param_2,0);
            FUN_051d45d8(param_2,iVar6 + 2,0);
            if ((local_38 != 0) && (lVar8 = *(long *)(local_38 + 0x30), lVar8 != 0)) {
              sVar3 = (**(code **)(lVar8 + 0x18))
                                (*(undefined8 *)(lVar8 + 0x40),param_2,param_3,
                                 *(undefined8 *)(lVar8 + 0x28));
              local_48[0] = sVar3;
              iVar6 = FUN_051d45d0(param_2,0);
              local_50 = (long)iVar6;
              FUN_051d45d8(param_2,uVar5,0);
              if (local_38 != 0) {
                local_44[0] = *(undefined1 *)(local_38 + 0x10);
                uVar10 = FUN_04f73bf4(local_44,0);
                uVar10 = FUN_04e723e0(*(undefined8 *)
                                       PlayFab_ClientModels_UpdatePlayerStatisticsRequest_var,uVar10
                                      ,0);
                FUN_051c4384(param_1,param_2,(int)sVar3,uVar10);
                iVar7 = FUN_051d45d0(param_2,0);
                FUN_051d45d8(param_2,iVar7 + sVar3,0);
                iVar7 = FUN_051d45d0(param_2,0);
                if (iVar6 != iVar7) {
                  uVar10 = thunk_FUN_02db45e8(PTR_DAT_06646310);
                  uVar10 = FUN_02d4dd2c(uVar10,6);
                  FUN_0291d7ec();
                  uVar11 = thunk_FUN_02db45e8(PlayFab_ClientModels_UpdatePlayerStatisticsResult_var)
                  ;
                  FUN_0291b630(uVar10,0,uVar11);
                  uVar11 = FUN_050016e8(&local_50,0);
                  FUN_0291b630(uVar10,1,uVar11);
                  uVar11 = thunk_FUN_02db45e8(PlayFab_ClientModels_UpdateSharedGroupDataRequest_var)
                  ;
                  FUN_0291b630(uVar10,2,uVar11);
                  FUN_0291d7ec(param_2);
                  local_54 = FUN_051d45d0(param_2,0);
                  uVar11 = FUN_05000654(&local_54,0);
                  FUN_0291b630(uVar10,3,uVar11);
                  uVar11 = thunk_FUN_02db45e8(PlayFab_ClientModels_UpdateSharedGroupDataResult_var);
                  FUN_0291b630(uVar10,4,uVar11);
                  uVar11 = FUN_04ffe748(local_48,0);
                  FUN_0291b630(uVar10,5,uVar11);
                  uVar10 = FUN_04e80ce4(uVar10,0);
                  thunk_FUN_02db45e8(PTR_DAT_06647b18);
                  uVar11 = thunk_FUN_02d8a638();
                  FUN_0503a078(uVar11,uVar10,0);
                  uVar10 = thunk_FUN_02db45e8(
                                             PlayFab_ProgressionModels_UpdateStatisticDefinitionRequest_var
                                             );
                    /* WARNING: Subroutine does not return */
                  FUN_02d4ddac(uVar11,uVar10);
                }
                goto LAB_051c4364;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


