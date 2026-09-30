/*
FUNCTION_NAME: FUN_064304e4
ENTRY_POINT: 064304e4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_6;telemetry_or_network_hits_14;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_064304e4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uStack_88;
  long lStack_78;
  undefined8 local_70;
  ulong uStack_68;
  ulong local_60;
  long lStack_58;
  
  if ((DAT_06dccb9c & 1) == 0) {
    FUN_02d965b8(Method_System_Xml_XmlTextWriter_ValidateName__);
    FUN_02d965b8(
                Method_Unity_Services_Vivox_ChannelSession_<>c__DisplayClass42_0_<HandleSessionArchiveQueryEnd>b__1__
                );
    FUN_02d965b8(
                Method_Unity_Services_Vivox_ChannelSession_<>c__DisplayClass47_0_<BeginConnect>b__0__
                );
    FUN_02d965b8(Method_Unity_Services_Vivox_ChannelSession_<>c__DisplayClass50_0_<Disconnect>b__0__
                );
    FUN_02d965b8(Method_System_Xml_XmlTextWriter_VerifyPrefixXml__);
    FUN_02d965b8(Method_Unity_Services_Vivox_ChannelSession_<ConnectAsync>d__45_MoveNext__);
    FUN_02d965b8(Method_System_Xml_Schema_XmlUntypedConverter_ToDecimal__);
    FUN_02d965b8(Method_Unity_Services_Vivox_ChannelSession_<DisconnectAsync>d__49_MoveNext__);
    FUN_02d965b8(
                Method_System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_System_Collections_IEnumerator_Reset__
                );
    FUN_02d965b8(
                Method_System_Runtime_Serialization_ClassDataContract_ClassDataContractCriticalHelper__ctor__
                );
    FUN_02d965b8(Method_System_Xml_Schema_XmlUntypedConverter_ChangeType__);
    DAT_06dccb9c = 1;
  }
  puVar2 = Method_System_Xml_Schema_XmlUntypedConverter_ChangeType__;
  lStack_78 = 0;
  if (param_1 != 0) {
    uVar4 = FUN_0641fbe8(param_1,0);
    lVar12 = *(long *)puVar2;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar12);
      lVar12 = *(long *)puVar2;
    }
    if (**(long **)(lVar12 + 0xb8) != 0) {
      uVar11 = FUN_04de75a0(**(long **)(lVar12 + 0xb8),uVar4,
                            *(undefined8 *)
                             Method_Unity_Services_Vivox_ChannelSession_<>c__DisplayClass50_0_<Disconnect>b__0__
                           );
      if ((uVar11 & 1) == 0) {
        uVar9 = FUN_0641fc10(param_1,0);
        uVar10 = FUN_063fa358(param_1,0);
        uVar11 = FUN_063fa390(param_1,0);
        uStack_88 = uVar11 & 0xffffffff;
        uVar11 = (ulong)uVar10 | uVar11 << 0x20;
        uVar1 = uVar10;
        if (uVar9 != 0) {
          uVar1 = uVar9;
        }
        lStack_78 = param_1;
        LeanTween__value(&lStack_78,param_1);
        lVar12 = *(long *)puVar2;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar12 = *(long *)puVar2;
        }
        if (**(long **)(lVar12 + 0xb8) != 0) {
          uStack_68 = uStack_88;
          lStack_58 = lStack_78;
          local_70 = CONCAT44(uVar10,uVar1);
          local_60 = uVar11;
          FUN_04de7310(**(long **)(lVar12 + 0xb8),uVar4,&local_70,
                       *(undefined8 *)
                        Method_Unity_Services_Vivox_ChannelSession_<>c__DisplayClass42_0_<HandleSessionArchiveQueryEnd>b__1__
                      );
          lVar12 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          if (lVar12 != 0) {
            uVar14 = FUN_04d968ac(lVar12,uVar1,
                                  *(undefined8 *)Method_System_Xml_XmlTextWriter_VerifyPrefixXml__);
            if ((uVar14 & 1) == 0) {
              lVar12 = *(long *)puVar2;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar12 = *(long *)puVar2;
              }
              lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
              if (lVar12 == 0) goto LAB_06430a04;
              FUN_04d966b8(lVar12,uVar1,param_1,
                           *(undefined8 *)Method_System_Xml_XmlTextWriter_ValidateName__);
            }
            lVar12 = *(long *)puVar2;
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar12 = *(long *)puVar2;
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
            if (lVar12 != 0) {
              uVar14 = FUN_04e223e8(lVar12,uVar11,
                                    *(undefined8 *)
                                     Method_Unity_Services_Vivox_ChannelSession_<ConnectAsync>d__45_MoveNext__
                                   );
              if ((uVar14 & 1) != 0) {
                return;
              }
              lVar12 = *(long *)puVar2;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar12 = *(long *)puVar2;
              }
              lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
              if (lVar12 != 0) {
                FUN_04e221f4(lVar12,uVar11,param_1,
                             *(undefined8 *)
                              Method_Unity_Services_Vivox_ChannelSession_<>c__DisplayClass47_0_<BeginConnect>b__0__
                            );
                return;
              }
            }
          }
        }
      }
      else {
        lVar12 = *(long *)puVar2;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar12 = *(long *)puVar2;
        }
        if (**(long **)(lVar12 + 0xb8) != 0) {
          FUN_04de7244(&local_70,**(long **)(lVar12 + 0xb8),uVar4,
                       *(undefined8 *)
                        Method_System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_System_Collections_IEnumerator_Reset__
                      );
          uVar14 = local_60;
          uVar11 = local_70;
          iVar6 = (int)local_70;
          iVar7 = local_70._4_4_;
          iVar8 = (int)uStack_68;
          uVar3 = uStack_68._4_4_;
          iVar5 = FUN_0641fc10(param_1,0);
          if (((iVar6 == iVar5) && (iVar5 = FUN_063fa358(param_1,0), iVar7 == iVar5)) &&
             (iVar5 = FUN_063fa390(param_1,0), iVar8 == iVar5)) {
            return;
          }
          iVar5 = FUN_0641fc10(param_1,0);
          if (iVar6 != iVar5) {
            lVar12 = *(long *)puVar2;
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar12 = *(long *)puVar2;
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
            if (lVar12 == 0) goto LAB_06430a04;
            FUN_04d97b60(lVar12,uVar11 & 0xffffffff,
                         *(undefined8 *)Method_System_Xml_Schema_XmlUntypedConverter_ToDecimal__);
            iVar6 = FUN_0641fc10(param_1,0);
            lVar12 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
            if (lVar12 == 0) goto LAB_06430a04;
            uVar11 = FUN_04d968ac(lVar12,iVar6,
                                  *(undefined8 *)Method_System_Xml_XmlTextWriter_VerifyPrefixXml__);
            if ((uVar11 & 1) == 0) {
              lVar12 = *(long *)puVar2;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar12 = *(long *)puVar2;
              }
              lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
              if (lVar12 == 0) goto LAB_06430a04;
              FUN_04d966b8(lVar12,iVar6,param_1,
                           *(undefined8 *)Method_System_Xml_XmlTextWriter_ValidateName__);
            }
          }
          iVar5 = FUN_063fa358(param_1,0);
          if ((iVar7 != iVar5) || (iVar5 = FUN_063fa390(param_1,0), iVar8 != iVar5)) {
            lVar12 = *(long *)puVar2;
            if (*(int *)(lVar12 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar12 = *(long *)puVar2;
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
            if (lVar12 == 0) goto LAB_06430a04;
            FUN_04e23684(lVar12,uVar14,
                         *(undefined8 *)
                          Method_Unity_Services_Vivox_ChannelSession_<DisconnectAsync>d__49_MoveNext__
                        );
            iVar7 = FUN_063fa358(param_1,0);
            iVar8 = FUN_063fa390(param_1,0);
            lVar12 = FUN_063fa390(param_1,0);
            uVar11 = FUN_063fa358(param_1,0);
            lVar13 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
            if (lVar13 == 0) goto LAB_06430a04;
            uVar14 = uVar11 & 0xffffffff | lVar12 << 0x20;
            uVar11 = FUN_04e223e8(lVar13,uVar14,
                                  *(undefined8 *)
                                   Method_Unity_Services_Vivox_ChannelSession_<ConnectAsync>d__45_MoveNext__
                                 );
            if ((uVar11 & 1) == 0) {
              lVar12 = *(long *)puVar2;
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar12 = *(long *)puVar2;
              }
              lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
              if (lVar12 == 0) goto LAB_06430a04;
              FUN_04e221f4(lVar12,uVar14,param_1,
                           *(undefined8 *)
                            Method_Unity_Services_Vivox_ChannelSession_<>c__DisplayClass47_0_<BeginConnect>b__0__
                          );
            }
          }
          lVar12 = *(long *)puVar2;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar12 = *(long *)puVar2;
          }
          if (**(long **)(lVar12 + 0xb8) != 0) {
            local_70 = CONCAT44(iVar7,iVar6);
            uStack_68 = CONCAT44(uVar3,iVar8);
            local_60 = uVar14;
            FUN_04de72dc(**(long **)(lVar12 + 0xb8),uVar4,&local_70,
                         *(undefined8 *)
                          Method_System_Runtime_Serialization_ClassDataContract_ClassDataContractCriticalHelper__ctor__
                        );
            return;
          }
        }
      }
    }
  }
LAB_06430a04:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


