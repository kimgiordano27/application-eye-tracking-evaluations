/*
FUNCTION_NAME: Unity.Serialization.Json.SerializedArrayViewPropertyBag$$Unity.Properties.ICollectionPropertyBagAccept<Unity.Serialization.Json.SerializedArrayView>.Accept
ENTRY_POINT: 0338b8d4
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


void Unity_Serialization_Json_SerializedArrayViewPropertyBag__Unity_Properties_ICollectionPropertyBagAccept<Unity_Serialization_Json_SerializedArrayView>_Accept
               (void)

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
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long unaff_x19;
  undefined8 uVar17;
  undefined8 uVar18;
  int unaff_w20;
  long *unaff_x21;
  int iVar19;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  int iVar20;
  undefined8 *unaff_x28;
  uint uVar21;
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
  
  while( true ) {
    if (*(char *)((long)unaff_x21 + 0x1c) == '\0') {
      uVar21 = 0;
      do {
        lVar10 = *(long *)(unaff_x19 + 0x78);
        if (lVar10 == 0) goto LAB_0338bee0;
        if (*(uint *)(lVar10 + 0x18) <= uVar21) goto LAB_0338bee4;
        if ((*unaff_x21 == 0) || (lVar16 = *(long *)(*unaff_x21 + 0x50), lVar16 == 0))
        goto LAB_0338bee0;
        if (*(uint *)(lVar16 + 0x18) <= uVar21) goto LAB_0338bee4;
        lVar13 = (long)(int)uVar21;
        lVar16 = *(long *)(lVar16 + lVar13 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_0338bee0;
        lVar10 = *(long *)(lVar10 + lVar13 * 8 + 0x20);
        Animancer_FadeGroup__get_TargetWeight
                  (lVar16,&stack0x00000008,
                   *(undefined8 *)
                    UnityEngine_Networking_PlayerConnection_IEditorPlayerConnection_TypeInfo);
        in_stack_00000040 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
        in_stack_00000048 = in_stack_00000010;
        in_stack_00000050 = in_stack_00000018;
        while (uVar11 = FUN_021b51c8(&stack0x00000040,*unaff_x24), (uVar11 & 1) != 0) {
          FUN_01b7a454(&stack0x00000040,&stack0x00000060,*unaff_x25);
          uVar14 = in_stack_00000060;
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_03389790(uVar14);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c(uVar11,uVar11 & 0xffffffff);
          }
          FUN_021a228c(lVar10,uVar11 & 0xffffffff,*unaff_x28);
          FUN_0338a394();
        }
        FUN_021b51c4(&stack0x00000040,
                     *(undefined8 *)Unity_Services_Economy_IEconomyPurchasesApiClientApi_TypeInfo);
        if ((*unaff_x21 == 0) || (lVar16 = *(long *)(*unaff_x21 + 0x58), lVar16 == 0))
        goto LAB_0338bee0;
        if (*(uint *)(lVar16 + 0x18) <= uVar21) goto LAB_0338bee4;
        lVar16 = *(long *)(lVar16 + lVar13 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_0338bee0;
        Animancer_FadeGroup__get_TargetWeight
                  (lVar16,&stack0x00000008,
                   *(undefined8 *)
                    UnityEngine_Networking_PlayerConnection_IEditorPlayerConnection_TypeInfo);
        in_stack_00000040 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
        in_stack_00000048 = in_stack_00000010;
        in_stack_00000050 = in_stack_00000018;
        while (uVar11 = FUN_021b51c8(&stack0x00000040,*unaff_x24), (uVar11 & 1) != 0) {
          FUN_01b7a454(&stack0x00000040,&stack0x00000068,*unaff_x25);
          uVar14 = in_stack_00000068;
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar11 = FUN_03389790(uVar14);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c(uVar11,uVar11 & 0xffffffff);
          }
          FUN_021a228c(lVar10,uVar11 & 0xffffffff,*unaff_x28);
          FUN_0338a394();
        }
        FUN_021b51c4(&stack0x00000040,
                     *(undefined8 *)Unity_Services_Economy_IEconomyPurchasesApiClientApi_TypeInfo);
        uVar21 = uVar21 + 1;
      } while (uVar21 != 2);
    }
    lVar10 = *(long *)(unaff_x19 + 0x80);
    unaff_w20 = unaff_w20 + 1;
    if (lVar10 == 0) goto LAB_0338bee0;
    if (*(int *)(lVar10 + 0x18) <= unaff_w20) break;
    unaff_x21 = (long *)FUN_021a228c(lVar10,unaff_w20,
                                     *(undefined8 *)System_Xml_IDtdAttributeInfo_TypeInfo);
    if (*(char *)((long)unaff_x21 + 0x1d) != '\0') {
      FUN_0338b218();
    }
  }
  uVar21 = 0;
  puVar23 = (undefined8 *)System_Xml_IDtdAttributeInfo_TypeInfo;
  while (lVar10 = *(long *)(unaff_x19 + 0x78), lVar10 != 0) {
    if (*(uint *)(lVar10 + 0x18) <= uVar21) {
LAB_0338bee4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar16 = (long)(int)uVar21;
    lVar10 = *(long *)(lVar10 + lVar16 * 8 + 0x20);
    if (lVar10 == 0) break;
    if (0 < *(int *)(lVar10 + 0x18)) {
      iVar19 = 0;
      do {
        puVar12 = (undefined8 *)FUN_021a228c(lVar10,iVar19,*unaff_x28);
        in_stack_00000030 = puVar12[2];
        in_stack_00000028 = puVar12[1];
        in_stack_00000020 = *puVar12;
        if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0338bee0;
        uVar5 = FUN_0338c01c(*(long *)(unaff_x19 + 0x10),uVar21,iVar19);
        uVar11 = in_stack_00000030;
        if (((uVar5 & 1) != 0) || ((in_stack_00000030 & 0x100000000) == 0)) {
          iVar6 = FUN_0338aa1c();
          if (iVar6 != -1) {
            if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0338bee0;
            lVar13 = FUN_021a228c(*(long *)(unaff_x19 + 0x80),iVar6,*puVar23);
            lVar13 = *(long *)(lVar13 + 8);
            if (lVar13 == 0) goto LAB_0338bee0;
            if (*(uint *)(lVar13 + 0x18) <= uVar21) goto LAB_0338bee4;
            lVar13 = *(long *)(lVar13 + lVar16 * 8 + 0x20);
            if (lVar13 == 0) goto LAB_0338bee0;
            uStack0000000000000008 = iVar19;
            FUN_01b5f01c(lVar13,&stack0x00000008,*(undefined8 *)PTR_DAT_03cbe508);
          }
          uVar7 = FUN_0338a938();
          uVar8 = FUN_0338ab10();
          if (((uVar11 & 0x100000000) == 0) && (iVar6 == -1)) {
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
            lVar13 = FUN_021a228c(*(long *)(unaff_x19 + 0x80),iVar9,*puVar23);
            if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0338bee0;
            cVar2 = *(char *)(lVar13 + 0x40);
            lVar13 = FUN_021a228c(*(long *)(unaff_x19 + 0x80),iVar9,*puVar23);
            if (cVar2 != '\0') {
              iVar20 = *(int *)(lVar13 + 0x24);
              iVar22 = iVar9;
              iVar1 = iVar9;
              if (iVar20 == -1) {
                do {
                  iVar22 = iVar1;
                  lVar13 = *(long *)(unaff_x19 + 0x80);
                  if (lVar13 == 0) goto LAB_0338bee0;
                  if (*(int *)(lVar13 + 0x18) + -1 <= iVar22) {
                    iVar20 = -1;
                    break;
                  }
                  iVar1 = iVar22 + 1;
                  lVar13 = FUN_021a228c(lVar13,iVar1,
                                        *(undefined8 *)System_Xml_IDtdAttributeInfo_TypeInfo);
                  if (*(char *)(lVar13 + 0x40) == '\0') {
                    iVar20 = -1;
                  }
                  else {
                    if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0338bee0;
                    lVar13 = FUN_021a228c(*(long *)(unaff_x19 + 0x80),iVar1,
                                          *(undefined8 *)System_Xml_IDtdAttributeInfo_TypeInfo);
                    iVar20 = *(int *)(lVar13 + 0x24);
                  }
                } while (iVar20 == -1);
                iVar22 = iVar22 + 1;
              }
              puVar4 = PTR_DAT_03cbdee0;
              lVar13 = *(long *)(unaff_x19 + 0x80);
              if (lVar13 == 0) goto LAB_0338bee0;
              if ((iVar22 == *(int *)(lVar13 + 0x18)) &&
                 (lVar13 = FUN_021a228c(lVar13,iVar9,
                                        *(undefined8 *)System_Xml_IDtdAttributeInfo_TypeInfo),
                 iVar20 = iVar22, *(char *)(lVar13 + 0x1e) == '\0')) {
                uVar17 = *(undefined8 *)(unaff_x19 + 0x20);
                FUN_018748a8(uVar17);
                uVar14 = thunk_FUN_01a6ca08(
                                           Unity_Services_Economy_IEconomyPlayerInventoryApiClient_TypeInfo
                                           );
                lVar10 = FUN_0199976c(uVar17,iVar9,uVar14);
                uVar14 = thunk_FUN_01a6ca08(UnityEngine_EventSystems_IEventSystemHandler_TypeInfo);
                uStack0000000000000008 = uVar21;
                uVar17 = thunk_FUN_01a6ca08(Unity_Properties_IExcludePropertyAdapter_TypeInfo);
                uVar17 = thunk_FUN_01a89a98(uVar17,&stack0x00000008);
                FUN_018748a8(lVar10);
                uVar18 = *(undefined8 *)(lVar10 + 0x10);
                uVar15 = thunk_FUN_01a6ca08(UnityEngine_UIElements_IExperimentalFeatures_TypeInfo);
                uVar14 = FUN_025be8b0(uVar15,uVar17,uVar14,uVar18,0);
                thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
                uVar17 = thunk_FUN_01a89e68();
                FUN_0276a4a8(uVar17,uVar14,0);
                uVar14 = thunk_FUN_01a6ca08(UnityEngine_IExposedPropertyTable_TypeInfo);
                    /* WARNING: Subroutine does not return */
                FUN_01ab6b14(uVar17,uVar14);
              }
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              iVar9 = FUN_0276c0cc(0,iVar20 + -1,0);
              puVar23 = (undefined8 *)System_Xml_IDtdAttributeInfo_TypeInfo;
              lVar13 = *(long *)(unaff_x19 + 0x80);
              while( true ) {
                if (lVar13 == 0) goto LAB_0338bee0;
                lVar13 = FUN_021a228c(lVar13,iVar9,*puVar23);
                if (*(char *)(lVar13 + 0x1c) == '\0') break;
                if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                iVar9 = FUN_0276c0cc(0,iVar9 + -1,0);
                lVar13 = *(long *)(unaff_x19 + 0x80);
              }
              if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_0338bee0;
              lVar13 = FUN_021a228c(*(long *)(unaff_x19 + 0x80),iVar9,*puVar23);
            }
            lVar13 = *(long *)(lVar13 + 0x10);
            if (lVar13 == 0) goto LAB_0338bee0;
            if (*(uint *)(lVar13 + 0x18) <= uVar21) goto LAB_0338bee4;
            lVar13 = *(long *)(lVar13 + lVar16 * 8 + 0x20);
            if (lVar13 == 0) goto LAB_0338bee0;
            uStack0000000000000008 = iVar19;
            FUN_01b5f01c(lVar13,&stack0x00000008,*(undefined8 *)PTR_DAT_03cbe508);
            bVar3 = 0;
          }
          if ((!(bool)(iVar6 == -1 & bVar3)) && (((uVar5 ^ 1) & 1) == 0)) {
            if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0338bee0;
            Unity_Serialization_Json_SerializedMemberView__Name
                      (*(long *)(unaff_x19 + 0x10),uVar21,iVar19);
          }
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < *(int *)(lVar10 + 0x18));
    }
    uVar21 = uVar21 + 1;
    if (uVar21 == 2) {
      return;
    }
  }
LAB_0338bee0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


