/*
FUNCTION_NAME: FUN_051c93c4
ENTRY_POINT: 051c93c4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


long FUN_051c93c4(long *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long local_70;
  undefined4 local_68;
  ushort local_64 [2];
  long local_60;
  undefined1 local_54 [4];
  
  if ((DAT_06a51ea6 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_0664f680);
    FUN_02d4dc40(PTR_DAT_06646288);
    FUN_02d4dc40(PlayFab_ClientModels_UpdateUserDataRequest_var);
    FUN_02d4dc40(ExitGames_Client_Photon_SocketUdp_var);
    DAT_06a51ea6 = 1;
  }
  local_60 = 0;
  local_70 = 0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_68 = 0;
  sVar3 = (**(code **)(*param_1 + 0x218))(param_1,param_2,*(undefined8 *)(*param_1 + 0x220));
  if (param_2 != 0) {
    iVar1 = (int)sVar3;
    uVar8 = FUN_051db254(param_2,0);
    uVar5 = (uint)uVar8 & 0xff;
    if (uVar5 < 0x69) {
      if (uVar5 == 0x44) {
        local_70 = 0;
        FUN_051c9b94(param_1,param_2,iVar1,&local_70);
        return local_70;
      }
      if (uVar5 == 0x62) {
        lVar13 = FUN_051c894c(param_1,param_2,iVar1);
        return lVar13;
      }
      if (uVar5 != 99) {
LAB_051c9718:
        uVar9 = FUN_051c4830(uVar8,uVar8 & 0xffffffff);
        lVar13 = FUN_05028a08(uVar9,iVar1,0);
        if (0 < iVar1) {
          iVar15 = 0;
          do {
            uVar9 = (**(code **)(*param_1 + 0x208))
                              (param_1,param_2,uVar8 & 0xffffffff,0,
                               *(undefined8 *)(*param_1 + 0x210));
            if (lVar13 == 0) goto LAB_051c9854;
            FUN_050253f8(lVar13,uVar9,iVar15,0);
            iVar15 = (int)(short)((short)iVar15 + 1);
          } while (iVar15 < iVar1);
        }
        return lVar13;
      }
      uVar4 = FUN_051db254(param_2,0);
      puVar2 = ExitGames_Client_Photon_SocketUdp_var;
      local_54[0] = (undefined1)uVar4;
      lVar13 = *(long *)ExitGames_Client_Photon_SocketUdp_var;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02dabd98(lVar13);
        lVar13 = *(long *)puVar2;
      }
      lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
      if (lVar13 != 0) {
        uVar8 = FUN_0479bf18(lVar13,uVar4,&local_60,
                             *(undefined8 *)PlayFab_ClientModels_UpdateUserDataRequest_var);
        if ((uVar8 & 1) == 0) {
          uVar9 = FUN_04f73bf4(local_54,0);
          uVar10 = thunk_FUN_02db45e8(System_Xml_XPath_XPathNavigator_var);
          uVar10 = FUN_04e723e0(uVar10,uVar9,0);
          thunk_FUN_02db45e8(PTR_DAT_06647b18);
          uVar9 = thunk_FUN_02d8a638();
          FUN_0503a078(uVar9,uVar10,0);
        }
        else {
          if (local_60 == 0) goto LAB_051c9854;
          lVar13 = FUN_05028a08(*(undefined8 *)(local_60 + 0x18),iVar1,0);
          puVar2 = PTR_DAT_06646288;
          if (iVar1 < 1) {
            return lVar13;
          }
          iVar15 = 0;
          while( true ) {
            uVar5 = (**(code **)(*param_1 + 0x218))
                              (param_1,param_2,*(undefined8 *)(*param_1 + 0x220));
            local_64[0] = (ushort)uVar5;
            if ((uVar5 >> 0xf & 1) != 0) break;
            if (local_60 == 0) goto LAB_051c9854;
            iVar7 = (int)(short)local_64[0];
            if (*(long *)(local_60 + 0x38) == 0) {
              uVar9 = FUN_02d4dd2c(*(undefined8 *)puVar2,uVar5 & 0xffff);
              FUN_051db1ec(param_2,uVar9,0,uVar5 & 0xffff,0);
              if ((local_60 == 0) || (lVar14 = *(long *)(local_60 + 0x28), lVar14 == 0))
              goto LAB_051c9854;
              uVar9 = (**(code **)(lVar14 + 0x18))
                                (*(undefined8 *)(lVar14 + 0x40),uVar9,*(undefined8 *)(lVar14 + 0x28)
                                );
            }
            else {
              iVar6 = FUN_051d45d0(param_2,0);
              if ((local_60 == 0) || (lVar14 = *(long *)(local_60 + 0x38), lVar14 == 0))
              goto LAB_051c9854;
              uVar9 = (**(code **)(lVar14 + 0x18))
                                (*(undefined8 *)(lVar14 + 0x40),param_2,iVar7,
                                 *(undefined8 *)(lVar14 + 0x28));
              iVar7 = FUN_051d45d0(param_2,0);
              if (iVar7 - iVar6 != (uVar5 & 0xffff)) {
                FUN_051d45d8(param_2,iVar6 + (uVar5 & 0xffff),0);
              }
            }
            if (lVar13 == 0) goto LAB_051c9854;
            FUN_050253f8(lVar13,uVar9,iVar15,0);
            iVar15 = iVar15 + 1;
            if (iVar1 == iVar15) {
              return lVar13;
            }
          }
          uVar9 = FUN_04ffe748(local_64,0);
          FUN_0291d7ec(param_2);
          local_68 = FUN_051d45d0(param_2,0);
          uVar10 = FUN_05000654(&local_68,0);
          uVar11 = thunk_FUN_02db45e8(System_Xml_Linq_XObject_var);
          uVar12 = thunk_FUN_02db45e8(PlayFab_ClientModels_UpdateUserTitleDisplayNameRequest_var);
          uVar10 = FUN_04e80bdc(uVar11,uVar9,uVar12,uVar10,0);
          thunk_FUN_02db45e8(PlayFab_ClientModels_UpdateUserTitleDisplayNameResult_var);
          uVar9 = thunk_FUN_02d8a638();
          FUN_051c47c8(uVar9,uVar10);
        }
        uVar10 = thunk_FUN_02db45e8(System_Xml_XPath_XPathItem_var);
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(uVar9,uVar10);
      }
    }
    else {
      if (uVar5 == 0x69) {
        lVar13 = FUN_051c89e8(param_1,param_2,iVar1);
        return lVar13;
      }
      if (uVar5 == 0x78) {
        uVar9 = *(undefined8 *)PTR_DAT_0664f680;
        if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar9 = FUN_050121a8(uVar9,0);
        lVar13 = FUN_05028a08(uVar9,iVar1,0);
        if (iVar1 < 1) {
          return lVar13;
        }
        iVar15 = 0;
        while (uVar9 = FUN_051c894c(param_1,param_2,0xffffffff), lVar13 != 0) {
          FUN_050253f8(lVar13,uVar9,iVar15,0);
          iVar15 = (int)(short)((short)iVar15 + 1);
          if (iVar1 <= iVar15) {
            return lVar13;
          }
        }
      }
      else {
        if (uVar5 != 0x79) goto LAB_051c9718;
        lVar13 = FUN_051c93c4(param_1,param_2);
        if (lVar13 != 0) {
          uVar9 = thunk_FUN_02d5dae8(lVar13,0);
          lVar14 = FUN_05028a08(uVar9,iVar1,0);
          if (lVar14 != 0) {
            FUN_050253f8(lVar14,lVar13,0,0);
            if (iVar1 < 2) {
              return lVar14;
            }
            iVar15 = 1;
            do {
              uVar9 = FUN_051c93c4(param_1,param_2);
              FUN_050253f8(lVar14,uVar9,iVar15,0);
              iVar15 = (int)(short)((short)iVar15 + 1);
            } while (iVar15 < iVar1);
            return lVar14;
          }
        }
      }
    }
  }
LAB_051c9854:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


