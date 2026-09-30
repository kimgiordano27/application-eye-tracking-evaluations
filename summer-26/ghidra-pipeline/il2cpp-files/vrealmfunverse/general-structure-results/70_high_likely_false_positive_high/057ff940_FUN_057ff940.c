/*
FUNCTION_NAME: FUN_057ff940
ENTRY_POINT: 057ff940
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_8
*/


long FUN_057ff940(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  long *plVar24;
  undefined4 local_64;
  
  puVar4 = Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_GetEnumerator__;
  puVar1 = Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_Add__;
  if ((DAT_066d2bba & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631d6a8);
    FUN_02b3c81c(Method_System_Collections_Generic_List<XRControllerState>_get_Count__);
    FUN_02b3c81c(PTR_DAT_06322580);
    FUN_02b3c81c(Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_get_Item__)
    ;
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_GetEnumerator__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_Add__);
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<ControllerButtonsMapper_ButtonClickAction>_GetEnumerator__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<CreationContext_AttributeOverrideRange>__ctor__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<CreationContext_AttributeOverrideRange>_Add__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<CreationContext_AttributeOverrideRange>_AddRange__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<CreationContext_AttributeOverrideRange>_GetEnumerator__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<CreationContext_AttributeOverrideRange>_get_Count__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<CreationContext_SerializedDataOverrideRange>_Add__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<CreationContext_SerializedDataOverrideRange>_AddRange__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<CreationContext_SerializedDataOverrideRange>_get_Count__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<CreationContext_SerializedDataOverrideRange>_get_Item__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_List<DataBindingManager_BindingData>__ctor__);
    FUN_02b3c81c(PTR_DAT_063225a8);
    DAT_066d2bba = 1;
  }
  local_64 = 0;
  lVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_0580039c();
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar1 = Method_System_Collections_Generic_List<ClickDetector_ButtonClickStatus>_get_Item__;
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x30) = **(undefined8 **)(*(long *)puVar4 + 0xb8);
    thunk_FUN_02bb0e9c((undefined8 *)(lVar5 + 0x30));
    uVar6 = *(undefined8 *)puVar1;
    *(undefined1 *)(lVar5 + 0x58) = 1;
    lVar7 = thunk_FUN_02b79644(uVar6);
    FUN_058003f0();
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18);
      thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x30));
      uVar6 = *(undefined8 *)puVar1;
      *(undefined1 *)(lVar7 + 0x58) = 1;
      lVar8 = thunk_FUN_02b79644(uVar6);
      FUN_058003f0();
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20);
        thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x30));
        uVar6 = *(undefined8 *)puVar1;
        *(undefined1 *)(lVar8 + 0x58) = 1;
        lVar9 = thunk_FUN_02b79644(uVar6);
        FUN_058003f0();
        if (lVar9 != 0) {
          *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
          thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x30));
          uVar6 = *(undefined8 *)puVar1;
          *(undefined1 *)(lVar9 + 0x58) = 0;
          lVar10 = thunk_FUN_02b79644(uVar6);
          FUN_058003f0();
          if (lVar10 != 0) {
            *(undefined8 *)(lVar10 + 0x30) =
                 *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
            thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x30));
            uVar6 = *(undefined8 *)puVar1;
            *(undefined1 *)(lVar10 + 0x58) = 0;
            lVar11 = thunk_FUN_02b79644(uVar6);
            FUN_058003f0();
            if (lVar11 != 0) {
              *(undefined8 *)(lVar11 + 0x30) =
                   *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
              thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x30));
              uVar6 = *(undefined8 *)puVar1;
              *(undefined1 *)(lVar11 + 0x58) = 0;
              lVar12 = thunk_FUN_02b79644(uVar6);
              FUN_058003f0();
              if (lVar12 != 0) {
                *(undefined8 *)(lVar12 + 0x30) =
                     *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
                thunk_FUN_02bb0e9c((undefined8 *)(lVar12 + 0x30));
                uVar6 = *(undefined8 *)puVar1;
                *(undefined1 *)(lVar12 + 0x58) = 0;
                lVar13 = thunk_FUN_02b79644(uVar6);
                FUN_058003f0();
                if (lVar13 != 0) {
                  *(undefined8 *)(lVar13 + 0x30) =
                       *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x30));
                  uVar6 = *(undefined8 *)puVar1;
                  *(undefined1 *)(lVar13 + 0x58) = 0;
                  lVar14 = thunk_FUN_02b79644(uVar6);
                  FUN_058003f0();
                  if (lVar14 != 0) {
                    *(undefined8 *)(lVar14 + 0x30) =
                         *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
                    thunk_FUN_02bb0e9c((undefined8 *)(lVar14 + 0x30));
                    uVar6 = *(undefined8 *)puVar1;
                    *(undefined1 *)(lVar14 + 0x58) = 0;
                    lVar15 = thunk_FUN_02b79644(uVar6);
                    FUN_058003f0();
                    if (lVar15 != 0) {
                      *(undefined8 *)(lVar15 + 0x30) =
                           *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58);
                      thunk_FUN_02bb0e9c((undefined8 *)(lVar15 + 0x30));
                      uVar6 = *(undefined8 *)puVar1;
                      *(undefined1 *)(lVar15 + 0x58) = 0;
                      lVar16 = thunk_FUN_02b79644(uVar6);
                      FUN_058003f0();
                      plVar24 = (long *)
                                Method_System_Collections_Generic_List<XRControllerState>_get_Count__
                      ;
                      if (lVar16 != 0) {
                        *(undefined8 *)(lVar16 + 0x30) =
                             *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60);
                        thunk_FUN_02bb0e9c((undefined8 *)(lVar16 + 0x30));
                        lVar17 = *plVar24;
                        *(undefined1 *)(lVar16 + 0x58) = 0;
                        if (*(int *)(lVar17 + 0xe4) == 0) {
                          thunk_FUN_02b9ad44();
                          lVar17 = *plVar24;
                        }
                        puVar3 = PTR_DAT_063225a8;
                        puVar2 = PTR_DAT_06322580;
                        puVar1 = PTR_DAT_0631d6a8;
                        lVar17 = **(long **)(lVar17 + 0xb8);
                        if (lVar17 != 0) {
                          if (0 < *(int *)(lVar17 + 0x18)) {
                            uVar23 = 0;
                            do {
                              lVar18 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                      
                                                  Method_System_Collections_Generic_List<DataBindingManager_BindingData>__ctor__
                                                  );
                              FUN_04dbdb8c(lVar18,0);
                              if (*(uint *)(lVar17 + 0x18) <= uVar23) {
                    /* WARNING: Subroutine does not return */
                                FUN_02b3cacc();
                              }
                              if (lVar18 == 0) goto LAB_05800394;
                              plVar20 = (long *)(lVar18 + 0x10);
                              *plVar20 = *(long *)(lVar17 + 0x20 + uVar23 * 8);
                              thunk_FUN_02bb0e9c(plVar20);
                              lVar19 = *(long *)puVar4;
                              uVar23 = uVar23 + 1;
                              local_64 = (undefined4)uVar23;
                              if (*(int *)(lVar19 + 0xe4) == 0) {
                                thunk_FUN_02b9ad44();
                                lVar19 = *(long *)puVar4;
                              }
                              uVar22 = *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 8);
                              uVar6 = FUN_04d78c14(&local_64,0);
                              uVar6 = FUN_04bffdac(uVar22,uVar6,0);
                              if (*(int *)(*plVar24 + 0xe4) == 0) {
                                thunk_FUN_02b9ad44(*plVar24);
                              }
                              lVar19 = FUN_05c51a0c(0);
                              if (lVar19 == *plVar20) {
                                lVar19 = *(long *)puVar4;
                                if (*(int *)(lVar19 + 0xe4) == 0) {
                                  thunk_FUN_02b9ad44();
                                  lVar19 = *(long *)puVar4;
                                }
                                uVar6 = FUN_04bffdac(uVar6,*(undefined8 *)
                                                            (*(long *)(lVar19 + 0xb8) + 0x10),0);
                              }
                              lVar21 = *(long *)(lVar7 + 0x50);
                              lVar19 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                              FUN_0580044c();
                              if (lVar19 == 0) goto LAB_05800394;
                              *(undefined8 *)(lVar19 + 0x30) = uVar6;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar19 + 0x30),uVar6);
                              uVar22 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
                              FUN_049b7e3c(uVar22,lVar18,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<ControllerButtonsMapper_ButtonClickAction>_GetEnumerator__
                                           ,0);
                              *(undefined8 *)(lVar19 + 0x50) = uVar22;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar19 + 0x50),uVar22);
                              if (lVar21 == 0) goto LAB_05800394;
                              FUN_03bdb384(lVar21,lVar19,*(undefined8 *)puVar2);
                              lVar21 = *(long *)(lVar8 + 0x50);
                              lVar19 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                              FUN_0580044c();
                              if (lVar19 == 0) goto LAB_05800394;
                              *(undefined8 *)(lVar19 + 0x30) = uVar6;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar19 + 0x30),uVar6);
                              uVar22 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
                              FUN_049b7e3c(uVar22,lVar18,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<CreationContext_AttributeOverrideRange>__ctor__
                                           ,0);
                              *(undefined8 *)(lVar19 + 0x50) = uVar22;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar19 + 0x50),uVar22);
                              if (lVar21 == 0) goto LAB_05800394;
                              FUN_03bdb384(lVar21,lVar19,*(undefined8 *)puVar2);
                              lVar21 = *(long *)(lVar9 + 0x50);
                              lVar19 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                              FUN_0580044c();
                              if (lVar19 == 0) goto LAB_05800394;
                              *(undefined8 *)(lVar19 + 0x30) = uVar6;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar19 + 0x30),uVar6);
                              uVar22 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
                              FUN_049b7e3c(uVar22,lVar18,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<CreationContext_AttributeOverrideRange>_Add__
                                           ,0);
                              *(undefined8 *)(lVar19 + 0x50) = uVar22;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar19 + 0x50),uVar22);
                              if (lVar21 == 0) goto LAB_05800394;
                              FUN_03bdb384(lVar21,lVar19,*(undefined8 *)puVar2);
                              lVar21 = *(long *)(lVar10 + 0x50);
                              lVar19 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                              FUN_0580044c();
                              if (lVar19 == 0) goto LAB_05800394;
                              *(undefined8 *)(lVar19 + 0x30) = uVar6;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar19 + 0x30),uVar6);
                              uVar22 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
                              FUN_049b7e3c(uVar22,lVar18,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<CreationContext_AttributeOverrideRange>_AddRange__
                                           ,0);
                              *(undefined8 *)(lVar19 + 0x50) = uVar22;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar19 + 0x50),uVar22);
                              if (lVar21 == 0) goto LAB_05800394;
                              FUN_03bdb384(lVar21,lVar19,*(undefined8 *)puVar2);
                              lVar21 = *(long *)(lVar11 + 0x50);
                              lVar19 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                              FUN_0580044c();
                              if (lVar19 == 0) goto LAB_05800394;
                              *(undefined8 *)(lVar19 + 0x30) = uVar6;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar19 + 0x30),uVar6);
                              uVar22 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
                              FUN_049b7e3c(uVar22,lVar18,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<CreationContext_AttributeOverrideRange>_GetEnumerator__
                                           ,0);
                              *(undefined8 *)(lVar19 + 0x50) = uVar22;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar19 + 0x50),uVar22);
                              if (lVar21 == 0) goto LAB_05800394;
                              FUN_03bdb384(lVar21,lVar19,*(undefined8 *)puVar2);
                              lVar21 = *(long *)(lVar12 + 0x50);
                              lVar19 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                              FUN_0580044c();
                              if (lVar19 == 0) goto LAB_05800394;
                              *(undefined8 *)(lVar19 + 0x30) = uVar6;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar19 + 0x30),uVar6);
                              uVar22 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
                              FUN_049b7e3c(uVar22,lVar18,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<CreationContext_AttributeOverrideRange>_get_Count__
                                           ,0);
                              *(undefined8 *)(lVar19 + 0x50) = uVar22;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar19 + 0x50),uVar22);
                              if (lVar21 == 0) goto LAB_05800394;
                              FUN_03bdb384(lVar21,lVar19,*(undefined8 *)puVar2);
                              lVar21 = *(long *)(lVar13 + 0x50);
                              lVar19 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                              FUN_0580044c();
                              if (lVar19 == 0) goto LAB_05800394;
                              *(undefined8 *)(lVar19 + 0x30) = uVar6;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar19 + 0x30),uVar6);
                              uVar22 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
                              FUN_049b7e3c(uVar22,lVar18,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<CreationContext_SerializedDataOverrideRange>_Add__
                                           ,0);
                              *(undefined8 *)(lVar19 + 0x50) = uVar22;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar19 + 0x50),uVar22);
                              if (lVar21 == 0) goto LAB_05800394;
                              FUN_03bdb384(lVar21,lVar19,*(undefined8 *)puVar2);
                              lVar21 = *(long *)(lVar14 + 0x50);
                              lVar19 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                              FUN_0580044c();
                              if (lVar19 == 0) goto LAB_05800394;
                              *(undefined8 *)(lVar19 + 0x30) = uVar6;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar19 + 0x30),uVar6);
                              uVar22 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
                              FUN_049b7e3c(uVar22,lVar18,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<CreationContext_SerializedDataOverrideRange>_AddRange__
                                           ,0);
                              *(undefined8 *)(lVar19 + 0x50) = uVar22;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar19 + 0x50),uVar22);
                              if (lVar21 == 0) goto LAB_05800394;
                              FUN_03bdb384(lVar21,lVar19,*(undefined8 *)puVar2);
                              lVar21 = *(long *)(lVar15 + 0x50);
                              lVar19 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                              FUN_0580044c();
                              if (lVar19 == 0) goto LAB_05800394;
                              *(undefined8 *)(lVar19 + 0x30) = uVar6;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar19 + 0x30),uVar6);
                              uVar22 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
                              FUN_049b7e3c(uVar22,lVar18,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<CreationContext_SerializedDataOverrideRange>_get_Count__
                                           ,0);
                              *(undefined8 *)(lVar19 + 0x50) = uVar22;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar19 + 0x50),uVar22);
                              if (lVar21 == 0) goto LAB_05800394;
                              FUN_03bdb384(lVar21,lVar19,*(undefined8 *)puVar2);
                              lVar21 = *(long *)(lVar16 + 0x50);
                              lVar19 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                              FUN_0580044c();
                              if (lVar19 == 0) goto LAB_05800394;
                              *(undefined8 *)(lVar19 + 0x30) = uVar6;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar19 + 0x30),uVar6);
                              uVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
                              FUN_049b7e3c(uVar6,lVar18,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<CreationContext_SerializedDataOverrideRange>_get_Item__
                                           ,0);
                              *(undefined8 *)(lVar19 + 0x50) = uVar6;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar19 + 0x50),uVar6);
                              plVar24 = (long *)
                                        Method_System_Collections_Generic_List<XRControllerState>_get_Count__
                              ;
                              if (lVar21 == 0) goto LAB_05800394;
                              FUN_03bdb384(lVar21,lVar19,*(undefined8 *)puVar2);
                            } while ((long)uVar23 < (long)*(int *)(lVar17 + 0x18));
                          }
                          if (*(long *)(lVar5 + 0x50) != 0) {
                            FUN_03bdb384(*(long *)(lVar5 + 0x50),lVar7,*(undefined8 *)puVar2);
                            if (*(long *)(lVar5 + 0x50) != 0) {
                              FUN_03bdb384(*(long *)(lVar5 + 0x50),lVar8,*(undefined8 *)puVar2);
                              if (*(long *)(lVar5 + 0x50) != 0) {
                                FUN_03bdb384(*(long *)(lVar5 + 0x50),lVar9,*(undefined8 *)puVar2);
                                if (*(long *)(lVar5 + 0x50) != 0) {
                                  FUN_03bdb384(*(long *)(lVar5 + 0x50),lVar10,*(undefined8 *)puVar2)
                                  ;
                                  if (*(long *)(lVar5 + 0x50) != 0) {
                                    FUN_03bdb384(*(long *)(lVar5 + 0x50),lVar11,
                                                 *(undefined8 *)puVar2);
                                    if (*(long *)(lVar5 + 0x50) != 0) {
                                      FUN_03bdb384(*(long *)(lVar5 + 0x50),lVar12,
                                                   *(undefined8 *)puVar2);
                                      if (*(long *)(lVar5 + 0x50) != 0) {
                                        FUN_03bdb384(*(long *)(lVar5 + 0x50),lVar13,
                                                     *(undefined8 *)puVar2);
                                        if (*(long *)(lVar5 + 0x50) != 0) {
                                          FUN_03bdb384(*(long *)(lVar5 + 0x50),lVar14,
                                                       *(undefined8 *)puVar2);
                                          if (*(long *)(lVar5 + 0x50) != 0) {
                                            FUN_03bdb384(*(long *)(lVar5 + 0x50),lVar15,
                                                         *(undefined8 *)puVar2);
                                            if (*(long *)(lVar5 + 0x50) != 0) {
                                              FUN_03bdb384(*(long *)(lVar5 + 0x50),lVar16,
                                                           *(undefined8 *)puVar2);
                                              return lVar5;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_05800394:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


