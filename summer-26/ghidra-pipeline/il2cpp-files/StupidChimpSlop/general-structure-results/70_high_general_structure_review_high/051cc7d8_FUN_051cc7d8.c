/*
FUNCTION_NAME: FUN_051cc7d8
ENTRY_POINT: 051cc7d8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


long * FUN_051cc7d8(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar14;
  int iVar15;
  undefined4 local_50;
  int iStack_4c;
  long local_48;
  undefined *puVar13;
  
  if ((DAT_06a51ec0 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_06646288);
    FUN_02d4dc40(PlayFab_ClientModels_UpdateUserDataRequest_var);
    FUN_02d4dc40(ExitGames_Client_Photon_SocketUdp_var);
    FUN_02d4dc40(System_Xml_Schema_XmlSchemaSimpleType_var);
    param_1 = FUN_02d4dc40(System_Xml_XmlReader_var);
    DAT_06a51ec0 = 1;
  }
  local_50 = 0;
  iStack_4c = 0;
  local_48 = 0;
  iVar1 = FUN_051cd1a8(param_1,param_2);
  puVar13 = ExitGames_Client_Photon_SocketUdp_var;
  if (param_2 != 0) {
    uVar2 = FUN_051db254(param_2,0);
    lVar14 = *(long *)puVar13;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02dabd98(lVar14);
      lVar14 = *(long *)puVar13;
    }
    lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
    if (lVar14 != 0) {
      uVar5 = FUN_0479bf18(lVar14,uVar2,&local_48,
                           *(undefined8 *)PlayFab_ClientModels_UpdateUserDataRequest_var);
      if ((uVar5 & 1) == 0) {
        uVar8 = FUN_051d45d0(param_2,0);
        iVar15 = (int)uVar8;
        for (; iVar1 != 0; iVar1 = iVar1 + -1) {
          iVar3 = FUN_051cd1a8(uVar8,param_2);
          iVar4 = FUN_051db104(param_2,0);
          if (iVar4 <= iVar3) {
            iVar3 = iVar4;
          }
          iVar4 = FUN_051d45d0(param_2,0);
          uVar8 = FUN_051d45d8(param_2,iVar3 + iVar4,0);
        }
        plVar6 = (long *)FUN_02d4dd2c(*(undefined8 *)System_Xml_Schema_XmlSchemaSimpleType_var,1);
        lVar14 = thunk_FUN_02d8a638(*(undefined8 *)System_Xml_XmlReader_var);
        FUN_051ad344(lVar14,0);
        if (lVar14 != 0) {
          *(char *)(lVar14 + 0x10) = (char)uVar2;
          iVar1 = FUN_051d45d0(param_2,0);
          *(int *)(lVar14 + 0x14) = iVar1 - iVar15;
          if (plVar6 != (long *)0x0) {
            lVar9 = thunk_FUN_02d8a53c(lVar14,*(undefined8 *)(*plVar6 + 0x40));
            if (lVar9 == 0) {
              uVar8 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
              FUN_02d4ddac(uVar8,0);
            }
            if ((int)plVar6[3] != 0) {
              plVar6[4] = lVar14;
              thunk_FUN_02dc1ef0(plVar6 + 4,lVar14);
              return plVar6;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02d4def0();
          }
        }
      }
      else if (local_48 != 0) {
        plVar6 = (long *)FUN_05028a08(*(undefined8 *)(local_48 + 0x18),iVar1,0);
        puVar13 = PTR_DAT_06646288;
        if (iVar1 != 0) {
          iVar15 = 0;
          plVar7 = plVar6;
          do {
            iVar3 = FUN_051cd1a8(plVar7,param_2);
            iStack_4c = iVar3;
            if (iVar3 < 0) {
              uVar8 = FUN_05000654(&iStack_4c,0);
              FUN_0291d7ec(param_2);
              uVar2 = FUN_051d45d0(param_2,0);
              _local_50 = CONCAT44(iStack_4c,uVar2);
              uVar10 = FUN_05000654(&local_50,0);
              uVar11 = thunk_FUN_02db45e8(System_Xml_XmlText_var);
              puVar13 = PlayFab_ClientModels_UpdateUserTitleDisplayNameRequest_var;
LAB_051ccc0c:
              uVar12 = thunk_FUN_02db45e8(puVar13);
              uVar8 = FUN_04e80bdc(uVar11,uVar8,uVar12,uVar10,0);
              thunk_FUN_02db45e8(PlayFab_ClientModels_UpdateUserTitleDisplayNameResult_var);
              uVar10 = thunk_FUN_02d8a638();
              FUN_051c47c8(uVar10,uVar8);
              uVar8 = thunk_FUN_02db45e8(System_Xml_Serialization_XmlTypeMapMemberAnyElement_var);
                    /* WARNING: Subroutine does not return */
              FUN_02d4ddac(uVar10,uVar8);
            }
            iVar4 = FUN_051db104(param_2,0);
            if ((iVar4 < iVar3) || (0x7fff < iStack_4c)) {
              FUN_0291d7ec(param_2);
              uVar2 = FUN_051d4668(param_2,0);
              FUN_0291d7ec(param_2);
              FUN_051d45d8(param_2,uVar2,0);
              uVar8 = FUN_05000654(&iStack_4c,0);
              FUN_0291d7ec(param_2);
              uVar2 = FUN_051db104(param_2,0);
              _local_50 = CONCAT44(iStack_4c,uVar2);
              uVar10 = FUN_05000654(&local_50,0);
              uVar11 = thunk_FUN_02db45e8(System_Xml_XmlTextReader_var);
              puVar13 = System_Xml_Serialization_XmlTypeMapMemberAnyAttribute_var;
              goto LAB_051ccc0c;
            }
            if (local_48 == 0) goto LAB_051ccb34;
            if (*(long *)(local_48 + 0x38) == 0) {
              uVar8 = FUN_02d4dd2c(*(undefined8 *)puVar13);
              FUN_051db1ec(param_2,uVar8,0,iStack_4c,0);
              if ((local_48 == 0) || (lVar14 = *(long *)(local_48 + 0x28), lVar14 == 0))
              goto LAB_051ccb34;
              lVar14 = (**(code **)(lVar14 + 0x18))
                                 (*(undefined8 *)(lVar14 + 0x40),uVar8,
                                  *(undefined8 *)(lVar14 + 0x28));
              plVar7 = (long *)0x0;
            }
            else {
              iVar3 = FUN_051d45d0(param_2,0);
              if ((local_48 == 0) || (lVar14 = *(long *)(local_48 + 0x38), lVar14 == 0))
              goto LAB_051ccb34;
              lVar14 = (**(code **)(lVar14 + 0x18))
                                 (*(undefined8 *)(lVar14 + 0x40),param_2,iStack_4c,
                                  *(undefined8 *)(lVar14 + 0x28));
              plVar7 = (long *)FUN_051d45d0(param_2,0);
              if ((int)plVar7 - iVar3 != iStack_4c) {
                plVar7 = (long *)FUN_051d45d8(param_2,iStack_4c + iVar3,0);
              }
            }
            if (lVar14 != 0) {
              if (local_48 == 0) goto LAB_051ccb34;
              plVar7 = *(long **)(local_48 + 0x18);
              uVar8 = thunk_FUN_02d5dae8(lVar14,0);
              if (plVar7 == (long *)0x0) goto LAB_051ccb34;
              plVar7 = (long *)(**(code **)(*plVar7 + 0x298))
                                         (plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x2a0));
              if (((ulong)plVar7 & 1) != 0) {
                if (plVar6 == (long *)0x0) goto LAB_051ccb34;
                plVar7 = (long *)FUN_050253f8(plVar6,lVar14,iVar15,0);
              }
            }
            iVar15 = iVar15 + 1;
          } while (iVar1 != iVar15);
        }
        return plVar6;
      }
    }
  }
LAB_051ccb34:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


