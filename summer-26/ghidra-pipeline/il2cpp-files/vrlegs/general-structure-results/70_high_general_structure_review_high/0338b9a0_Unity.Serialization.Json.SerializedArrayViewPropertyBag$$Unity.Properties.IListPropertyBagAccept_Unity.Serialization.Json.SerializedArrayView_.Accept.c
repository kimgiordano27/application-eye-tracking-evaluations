/*
FUNCTION_NAME: Unity.Serialization.Json.SerializedArrayViewPropertyBag$$Unity.Properties.IListPropertyBagAccept<Unity.Serialization.Json.SerializedArrayView>.Accept
ENTRY_POINT: 0338b9a0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_5
*/


void Unity_Serialization_Json_SerializedArrayViewPropertyBag__Unity_Properties_IListPropertyBagAccept<Unity_Serialization_Json_SerializedArrayView>_Accept
               (ulong param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long unaff_x19;
  undefined8 uVar17;
  undefined8 uVar18;
  int unaff_w20;
  uint uVar19;
  long *unaff_x21;
  int iVar20;
  long unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  int iVar21;
  long unaff_x27;
  undefined8 *unaff_x28;
  uint unaff_w29;
  int iVar22;
  undefined8 *puVar23;
  uint uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  do {
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c(param_1,param_1 & 0xffffffff);
    }
    FUN_021a228c(unaff_x22,param_1 & 0xffffffff,*unaff_x28);
    FUN_0338a394();
    while (uVar10 = FUN_021b51c8(&stack0x00000040,*unaff_x24), (uVar10 & 1) == 0) {
      FUN_021b51c4(&stack0x00000040,
                   *(undefined8 *)Unity_Services_Economy_IEconomyPurchasesApiClientApi_TypeInfo);
      if ((*unaff_x21 == 0) || (lVar15 = *(long *)(*unaff_x21 + 0x58), lVar15 == 0))
      goto LAB_0338bee0;
      if (*(uint *)(lVar15 + 0x18) <= unaff_w29) goto LAB_0338bee4;
      lVar15 = *(long *)(lVar15 + unaff_x27 * 8 + 0x20);
      if (lVar15 == 0) goto LAB_0338bee0;
      Animancer_FadeGroup__get_TargetWeight
                (lVar15,&stack0x00000008,
                 *(undefined8 *)
                  UnityEngine_Networking_PlayerConnection_IEditorPlayerConnection_TypeInfo);
      in_stack_00000040 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000050 = in_stack_00000018;
      while (uVar10 = FUN_021b51c8(&stack0x00000040,*unaff_x24), (uVar10 & 1) != 0) {
        FUN_01b7a454(&stack0x00000040,&stack0x00000068,*unaff_x25);
        uVar13 = in_stack_00000068;
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar10 = FUN_03389790(uVar13);
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c(uVar10,uVar10 & 0xffffffff);
        }
        FUN_021a228c(unaff_x22,uVar10 & 0xffffffff,*unaff_x28);
        FUN_0338a394();
      }
      FUN_021b51c4(&stack0x00000040,
                   *(undefined8 *)Unity_Services_Economy_IEconomyPurchasesApiClientApi_TypeInfo);
      unaff_w29 = unaff_w29 + 1;
      if (unaff_w29 == 2) {
        do {
          lVar15 = *(long *)(unaff_x19 + 0x80);
          unaff_w20 = unaff_w20 + 1;
          if (lVar15 == 0) goto LAB_0338bee0;
          if (*(int *)(lVar15 + 0x18) <= unaff_w20) {
            uVar19 = 0;
            puVar23 = (undefined8 *)System_Xml_IDtdAttributeInfo_TypeInfo;
            goto LAB_0338bb60;
          }
          unaff_x21 = (long *)FUN_021a228c(lVar15,unaff_w20,
                                           *(undefined8 *)System_Xml_IDtdAttributeInfo_TypeInfo);
          if (*(char *)((long)unaff_x21 + 0x1d) != '\0') {
            FUN_0338b218();
          }
        } while (*(char *)((long)unaff_x21 + 0x1c) != '\0');
        unaff_w29 = 0;
      }
      lVar15 = *(long *)(unaff_x19 + 0x78);
      if (lVar15 == 0) goto LAB_0338bee0;
      if (*(uint *)(lVar15 + 0x18) <= unaff_w29) goto LAB_0338bee4;
      if ((*unaff_x21 == 0) || (lVar16 = *(long *)(*unaff_x21 + 0x50), lVar16 == 0))
      goto LAB_0338bee0;
      if (*(uint *)(lVar16 + 0x18) <= unaff_w29) goto LAB_0338bee4;
      unaff_x27 = (long)(int)unaff_w29;
      lVar16 = *(long *)(lVar16 + unaff_x27 * 8 + 0x20);
      if (lVar16 == 0) goto LAB_0338bee0;
      unaff_x22 = *(long *)(lVar15 + unaff_x27 * 8 + 0x20);
      Animancer_FadeGroup__get_TargetWeight
                (lVar16,&stack0x00000008,
                 *(undefined8 *)
                  UnityEngine_Networking_PlayerConnection_IEditorPlayerConnection_TypeInfo);
      in_stack_00000040 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000050 = in_stack_00000018;
    }
    FUN_01b7a454(&stack0x00000040,&stack0x00000060,*unaff_x25);
    uVar13 = in_stack_00000060;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    param_1 = FUN_03389790(uVar13);
  } while( true );
LAB_0338bb60:
  lVar15 = *(long *)(unaff_x19 + 0x78);
  if (lVar15 == 0) {
LAB_0338bee0:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar15 + 0x18) <= uVar19) {
LAB_0338bee4:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  lVar16 = (long)(int)uVar19;
  lVar15 = *(long *)(lVar15 + lVar16 * 8 + 0x20);
  if (lVar15 == 0) goto LAB_0338bee0;
  if (0 < *(int *)(lVar15 + 0x18)) {
    iVar20 = 0;
    do {
      puVar11 = (undefined8 *)FUN_021a228c(lVar15,iVar20,*unaff_x28);
      in_stack_00000030 = puVar11[2];
      in_stack_00000028 = puVar11[1];
      in_stack_00000020 = *puVar11;
      if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0338bee0;
      uVar5 = FUN_0338c01c(*(long *)(unaff_x19 + 0x10),uVar19,iVar20);
      uVar10 = in_stack_00000030;
      if (((uVar5 & 1) != 0) || ((in_stack_00000030 & 0x100000000) == 0)) {
        iVar6 = FUN_0338aa1c();
        if (iVar6 != -1) {
          if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0338bee0;
          lVar12 = FUN_021a228c(*(long *)(unaff_x19 + 0x80),iVar6,*puVar23);
          lVar12 = *(long *)(lVar12 + 8);
          if (lVar12 == 0) goto LAB_0338bee0;
          if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_0338bee4;
          lVar12 = *(long *)(lVar12 + lVar16 * 8 + 0x20);
          if (lVar12 == 0) goto LAB_0338bee0;
          uStack0000000000000008 = iVar20;
          FUN_01b5f01c(lVar12,&stack0x00000008,*(undefined8 *)PTR_DAT_03cbe508);
        }
        uVar7 = FUN_0338a938();
        uVar8 = FUN_0338ab10();
        if (((uVar10 & 0x100000000) == 0) && (iVar6 == -1)) {
LAB_0338bd5c:
          bVar3 = 1;
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          iVar9 = FUN_0276c0cc(uVar8,uVar7,0);
          if (iVar9 == -1) goto LAB_0338bd5c;
          if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0338bee0;
          lVar12 = FUN_021a228c(*(long *)(unaff_x19 + 0x80),iVar9,*puVar23);
          if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0338bee0;
          cVar2 = *(char *)(lVar12 + 0x40);
          lVar12 = FUN_021a228c(*(long *)(unaff_x19 + 0x80),iVar9,*puVar23);
          if (cVar2 != '\0') {
            iVar21 = *(int *)(lVar12 + 0x24);
            iVar22 = iVar9;
            iVar1 = iVar9;
            if (iVar21 == -1) {
              do {
                iVar22 = iVar1;
                lVar12 = *(long *)(unaff_x19 + 0x80);
                if (lVar12 == 0) goto LAB_0338bee0;
                if (*(int *)(lVar12 + 0x18) + -1 <= iVar22) {
                  iVar21 = -1;
                  break;
                }
                iVar1 = iVar22 + 1;
                lVar12 = FUN_021a228c(lVar12,iVar1,
                                      *(undefined8 *)System_Xml_IDtdAttributeInfo_TypeInfo);
                if (*(char *)(lVar12 + 0x40) == '\0') {
                  iVar21 = -1;
                }
                else {
                  if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0338bee0;
                  lVar12 = FUN_021a228c(*(long *)(unaff_x19 + 0x80),iVar1,
                                        *(undefined8 *)System_Xml_IDtdAttributeInfo_TypeInfo);
                  iVar21 = *(int *)(lVar12 + 0x24);
                }
              } while (iVar21 == -1);
              iVar22 = iVar22 + 1;
            }
            puVar4 = PTR_DAT_03cbdee0;
            lVar12 = *(long *)(unaff_x19 + 0x80);
            if (lVar12 == 0) goto LAB_0338bee0;
            if ((iVar22 == *(int *)(lVar12 + 0x18)) &&
               (lVar12 = FUN_021a228c(lVar12,iVar9,
                                      *(undefined8 *)System_Xml_IDtdAttributeInfo_TypeInfo),
               iVar21 = iVar22, *(char *)(lVar12 + 0x1e) == '\0')) {
              uVar17 = *(undefined8 *)(unaff_x19 + 0x20);
              FUN_018748a8(uVar17);
              uVar13 = thunk_FUN_01a6ca08(
                                         Unity_Services_Economy_IEconomyPlayerInventoryApiClient_TypeInfo
                                         );
              lVar15 = FUN_0199976c(uVar17,iVar9,uVar13);
              uVar13 = thunk_FUN_01a6ca08(UnityEngine_EventSystems_IEventSystemHandler_TypeInfo);
              uStack0000000000000008 = uVar19;
              uVar17 = thunk_FUN_01a6ca08(Unity_Properties_IExcludePropertyAdapter_TypeInfo);
              uVar17 = thunk_FUN_01a89a98(uVar17,&stack0x00000008);
              FUN_018748a8(lVar15);
              uVar18 = *(undefined8 *)(lVar15 + 0x10);
              uVar14 = thunk_FUN_01a6ca08(UnityEngine_UIElements_IExperimentalFeatures_TypeInfo);
              uVar13 = FUN_025be8b0(uVar14,uVar17,uVar13,uVar18,0);
              thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
              uVar17 = thunk_FUN_01a89e68();
              FUN_0276a4a8(uVar17,uVar13,0);
              uVar13 = thunk_FUN_01a6ca08(UnityEngine_IExposedPropertyTable_TypeInfo);
                    /* WARNING: Subroutine does not return */
              FUN_01ab6b14(uVar17,uVar13);
            }
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            iVar9 = FUN_0276c0cc(0,iVar21 + -1,0);
            puVar23 = (undefined8 *)System_Xml_IDtdAttributeInfo_TypeInfo;
            lVar12 = *(long *)(unaff_x19 + 0x80);
            while( true ) {
              if (lVar12 == 0) goto LAB_0338bee0;
              lVar12 = FUN_021a228c(lVar12,iVar9,*puVar23);
              if (*(char *)(lVar12 + 0x1c) == '\0') break;
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              iVar9 = FUN_0276c0cc(0,iVar9 + -1,0);
              lVar12 = *(long *)(unaff_x19 + 0x80);
            }
            if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0338bee0;
            lVar12 = FUN_021a228c(*(long *)(unaff_x19 + 0x80),iVar9,*puVar23);
          }
          lVar12 = *(long *)(lVar12 + 0x10);
          if (lVar12 == 0) goto LAB_0338bee0;
          if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_0338bee4;
          lVar12 = *(long *)(lVar12 + lVar16 * 8 + 0x20);
          if (lVar12 == 0) goto LAB_0338bee0;
          uStack0000000000000008 = iVar20;
          FUN_01b5f01c(lVar12,&stack0x00000008,*(undefined8 *)PTR_DAT_03cbe508);
          bVar3 = 0;
        }
        if ((!(bool)(iVar6 == -1 & bVar3)) && (((uVar5 ^ 1) & 1) == 0)) {
          if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0338bee0;
          Unity_Serialization_Json_SerializedMemberView__Name
                    (*(long *)(unaff_x19 + 0x10),uVar19,iVar20);
        }
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < *(int *)(lVar15 + 0x18));
  }
  uVar19 = uVar19 + 1;
  if (uVar19 == 2) {
    return;
  }
  goto LAB_0338bb60;
}


