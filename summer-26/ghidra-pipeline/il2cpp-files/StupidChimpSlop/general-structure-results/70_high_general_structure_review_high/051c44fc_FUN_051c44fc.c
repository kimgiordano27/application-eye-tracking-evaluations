/*
FUNCTION_NAME: FUN_051c44fc
ENTRY_POINT: 051c44fc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_9;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


undefined8 FUN_051c44fc(long *param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 local_44;
  long local_40;
  ushort local_34 [2];
  
  if ((DAT_06a51e92 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06646288);
    FUN_02d4dc40(PlayFab_ClientModels_UpdateUserDataRequest_var);
    FUN_02d4dc40(ExitGames_Client_Photon_SocketUdp_var);
    DAT_06a51e92 = 1;
  }
  local_40 = 0;
  local_34[0] = 0;
  local_44 = 0;
  uVar4 = (**(code **)(*param_1 + 0x218))(param_1,param_2,*(undefined8 *)(*param_1 + 0x220));
  puVar1 = PTR_DAT_06646288;
  local_34[0] = (ushort)uVar4;
  if ((uVar4 >> 0xf & 1) != 0) {
    uVar9 = FUN_04ffe748(local_34,0);
    FUN_0291d7ec(param_2);
    local_44 = FUN_051d45d0(param_2,0);
    uVar10 = FUN_05000654(&local_44,0);
    uVar11 = thunk_FUN_02db45e8(PlayFab_ClientModels_UpdateUserDataResult_var);
    uVar12 = thunk_FUN_02db45e8(PlayFab_ClientModels_UpdateUserTitleDisplayNameRequest_var);
    uVar9 = FUN_04e80bdc(uVar11,uVar9,uVar12,uVar10,0);
    thunk_FUN_02db45e8(PlayFab_ClientModels_UpdateUserTitleDisplayNameResult_var);
    uVar10 = thunk_FUN_02d8a638();
    FUN_051c47c8(uVar10,uVar9);
    uVar9 = thunk_FUN_02db45e8(PlayFab_MultiplayerModels_UploadCertificateRequest_var);
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar10,uVar9);
  }
  if (param_2 != 0) {
    iVar6 = (int)(short)local_34[0];
    iVar5 = FUN_051db104(param_2,0);
    puVar2 = ExitGames_Client_Photon_SocketUdp_var;
    if (iVar5 < (int)(uVar4 & 0xffff)) {
LAB_051c4660:
      iVar6 = FUN_051db104(param_2,0);
      if (iVar6 < (int)(uVar4 & 0xffff)) {
        sVar3 = FUN_051db104(param_2,0);
        uVar4 = (uint)sVar3;
      }
      else {
        uVar4 = uVar4 & 0xffff;
      }
      uVar9 = FUN_02d4dd2c(*(undefined8 *)puVar1,uVar4);
      FUN_051db1ec(param_2,uVar9,0,uVar4,0);
      return uVar9;
    }
    lVar7 = *(long *)ExitGames_Client_Photon_SocketUdp_var;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar7 = *(long *)puVar2;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar7 != 0) {
      uVar8 = FUN_0479bf18(lVar7,param_3,&local_40,
                           *(undefined8 *)PlayFab_ClientModels_UpdateUserDataRequest_var);
      if ((uVar8 & 1) == 0) goto LAB_051c4660;
      if (local_40 != 0) {
        if (*(long *)(local_40 + 0x38) == 0) {
          uVar9 = FUN_02d4dd2c(*(undefined8 *)puVar1,uVar4 & 0xffff);
          FUN_051db1ec(param_2,uVar9,0,uVar4 & 0xffff,0);
          if ((local_40 != 0) && (lVar7 = *(long *)(local_40 + 0x28), lVar7 != 0)) {
            uVar9 = (**(code **)(lVar7 + 0x18))
                              (*(undefined8 *)(lVar7 + 0x40),uVar9,*(undefined8 *)(lVar7 + 0x28));
            return uVar9;
          }
        }
        else {
          iVar5 = FUN_051d45d0(param_2,0);
          if ((local_40 != 0) && (lVar7 = *(long *)(local_40 + 0x38), lVar7 != 0)) {
            uVar9 = (**(code **)(lVar7 + 0x18))
                              (*(undefined8 *)(lVar7 + 0x40),param_2,iVar6,
                               *(undefined8 *)(lVar7 + 0x28));
            iVar6 = FUN_051d45d0(param_2,0);
            if (iVar6 - iVar5 == (uVar4 & 0xffff)) {
              return uVar9;
            }
            FUN_051d45d8(param_2,iVar5 + (uVar4 & 0xffff),0);
            return uVar9;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


