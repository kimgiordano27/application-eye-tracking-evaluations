/*
FUNCTION_NAME: FUN_051cb6ec
ENTRY_POINT: 051cb6ec
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


long FUN_051cb6ec(undefined8 param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 local_44;
  long local_40;
  uint local_34;
  
  if ((DAT_06a51eb7 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06646288);
    FUN_02d4dc40(PlayFab_ClientModels_UpdateUserDataRequest_var);
    FUN_02d4dc40(ExitGames_Client_Photon_SocketUdp_var);
    param_1 = FUN_02d4dc40(System_Xml_XmlReader_var);
    DAT_06a51eb7 = 1;
  }
  local_34 = 0;
  local_40 = 0;
  local_44 = 0;
  if ((param_3 & 0xff) == 0) {
    if (param_2 == 0) goto LAB_051cb968;
    param_1 = FUN_051db254(param_2,0);
    param_3 = (uint)param_1;
  }
  else {
    param_3 = param_3 ^ 0xffffff80;
  }
  uVar2 = FUN_051cd1a8(param_1,param_2);
  local_34 = uVar2;
  if ((int)uVar2 < 0) {
    uVar7 = FUN_05000654(&local_34,0);
    FUN_0291d7ec(param_2);
    local_44 = FUN_051d45d0(param_2,0);
    uVar8 = FUN_05000654(&local_44,0);
    uVar9 = thunk_FUN_02db45e8(System_Xml_Schema_XmlSchema_var);
    uVar10 = thunk_FUN_02db45e8(PlayFab_ClientModels_UpdateUserTitleDisplayNameRequest_var);
    uVar7 = FUN_04e80bdc(uVar9,uVar7,uVar10,uVar8,0);
    thunk_FUN_02db45e8(PlayFab_ClientModels_UpdateUserTitleDisplayNameResult_var);
    uVar8 = thunk_FUN_02d8a638();
    FUN_051c47c8(uVar8,uVar7);
    uVar7 = thunk_FUN_02db45e8(System_Xml_Schema_XmlSchemaChoice_var);
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar8,uVar7);
  }
  if (param_2 == 0) goto LAB_051cb968;
  iVar3 = FUN_051db104(param_2,0);
  puVar1 = ExitGames_Client_Photon_SocketUdp_var;
  if (((int)uVar2 <= iVar3) && (uVar2 >> 0xf == 0)) {
    lVar5 = *(long *)ExitGames_Client_Photon_SocketUdp_var;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_051cb968;
    uVar6 = FUN_0479bf18(lVar5,param_3,&local_40,
                         *(undefined8 *)PlayFab_ClientModels_UpdateUserDataRequest_var);
    if ((uVar6 & 1) != 0) {
      if (local_40 != 0) {
        if (*(long *)(local_40 + 0x38) == 0) {
          uVar7 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06646288,uVar2);
          FUN_051db1ec(param_2,uVar7,0,uVar2,0);
          if ((local_40 != 0) && (lVar5 = *(long *)(local_40 + 0x28), lVar5 != 0)) {
            lVar5 = (**(code **)(lVar5 + 0x18))
                              (*(undefined8 *)(lVar5 + 0x40),uVar7,*(undefined8 *)(lVar5 + 0x28));
            return lVar5;
          }
        }
        else {
          iVar3 = FUN_051d45d0(param_2,0);
          if ((local_40 != 0) && (lVar5 = *(long *)(local_40 + 0x38), lVar5 != 0)) {
            lVar5 = (**(code **)(lVar5 + 0x18))
                              (*(undefined8 *)(lVar5 + 0x40),param_2,uVar2,
                               *(undefined8 *)(lVar5 + 0x28));
            iVar4 = FUN_051d45d0(param_2,0);
            if (iVar4 - iVar3 == uVar2) {
              return lVar5;
            }
            FUN_051d45d8(param_2,uVar2 + iVar3,0);
            return lVar5;
          }
        }
      }
      goto LAB_051cb968;
    }
  }
  lVar5 = thunk_FUN_02d8a638(*(undefined8 *)System_Xml_XmlReader_var);
  FUN_051ad344(lVar5,0);
  if (lVar5 != 0) {
    *(char *)(lVar5 + 0x10) = (char)param_3;
    *(uint *)(lVar5 + 0x14) = uVar2;
    if (iVar3 < (int)uVar2) {
      uVar2 = FUN_051db104(param_2,0);
    }
    if (0 < (int)uVar2) {
      uVar7 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06646288,uVar2);
      FUN_051db1ec(param_2,uVar7,0,uVar2,0);
      *(undefined8 *)(lVar5 + 0x18) = uVar7;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar5 + 0x18),uVar7);
    }
    return lVar5;
  }
LAB_051cb968:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


