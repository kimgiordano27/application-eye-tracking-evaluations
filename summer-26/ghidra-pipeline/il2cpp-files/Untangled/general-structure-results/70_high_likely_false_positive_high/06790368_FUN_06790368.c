/*
FUNCTION_NAME: FUN_06790368
ENTRY_POINT: 06790368
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


long FUN_06790368(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
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
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  puVar4 = System_TypeSpec_TypeInfo;
  if ((DAT_071d60a4 & 1) == 0) {
    FUN_02f07e70(System_TypeSpec_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_UIElementsRuntimeUtilityNative_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_UIElementsUtility_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d102a8);
    FUN_02f07e70(UnityEngine_UIElements_UIEventRegistration_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3ca50);
    FUN_02f07e70(Gley_UrbanSystem_Internal_UIInput_TypeInfo);
    FUN_02f07e70(
                System_Runtime_CompilerServices_ConditionalWeakTable_CreateValueCallback<HttpWebRequest,_NtlmSession>_TypeInfo
                );
    FUN_02f07e70(PTR_DAT_06d143d0);
    FUN_02f07e70(PixelCrushers_DialogueSystem_UIAutonumberSettings_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d04518);
    FUN_02f07e70(PTR_DAT_06d368e0);
    FUN_02f07e70(PixelCrushers_UILocalizationManager_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d368c8);
    FUN_02f07e70(PTR_DAT_06d05848);
    FUN_02f07e70(UnityEngine_UINumericFieldsUtils_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d04a48);
    FUN_02f07e70(PixelCrushers_UIButtonKeyTrigger_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d06088);
    FUN_02f07e70(PTR_DAT_06d01eb0);
    FUN_02f07e70(PixelCrushers_UIPanel_TypeInfo);
    FUN_02f07e70(
                System_Runtime_CompilerServices_ConditionalWeakTable_CreateValueCallback<object,_OSSpecificSynchronizationContext>_TypeInfo
                );
    FUN_02f07e70(System_Runtime_Serialization_DataNode<byte[]>_TypeInfo);
    FUN_02f07e70(System_Runtime_Serialization_DataNode<bool>_TypeInfo);
    FUN_02f07e70(System_Runtime_Serialization_DataNode<byte>_TypeInfo);
    FUN_02f07e70(System_Runtime_Serialization_DataNode<char>_TypeInfo);
    FUN_02f07e70(System_Runtime_Serialization_DataNode<DateTime>_TypeInfo);
    FUN_02f07e70(System_Runtime_Serialization_DataNode<Decimal>_TypeInfo);
    FUN_02f07e70(System_Runtime_Serialization_DataNode<double>_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d03e90);
    FUN_02f07e70(PTR_DAT_06d7ec78);
    FUN_02f07e70(System_Runtime_Serialization_DataNode<Guid>_TypeInfo);
    FUN_02f07e70(System_Runtime_Serialization_DataNode<short>_TypeInfo);
    FUN_02f07e70(
                System_Runtime_CompilerServices_ConditionalWeakTable<object,_OSSpecificSynchronizationContext>_TypeInfo
                );
    DAT_071d60a4 = 1;
  }
  puVar5 = PTR_DAT_06d06088;
  puVar3 = PTR_DAT_06d04518;
  puVar2 = PTR_DAT_06d01eb0;
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar7 = *(long *)puVar4;
  }
  uVar25 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 8);
  uVar26 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0xc);
  plVar8 = (long *)FUN_02f07f14(*(undefined8 *)puVar5,2);
  uVar24 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)puVar2);
  }
  lVar7 = FUN_056109c0(uVar24,0);
  if (plVar8 == (long *)0x0) goto LAB_06791688;
  if ((lVar7 != 0) &&
     (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_06791690:
    uVar24 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar24,0);
  }
  puVar4 = UnityEngine_UIElements_UIElementsRuntimeUtilityNative_TypeInfo;
  if ((int)plVar8[3] != 0) {
    plVar8[4] = lVar7;
    thunk_FUN_02f411dc(plVar8 + 4,lVar7);
    lVar7 = FUN_056109c0(*(undefined8 *)puVar4,0);
    if ((lVar7 != 0) &&
       (lVar9 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
    goto LAB_06791690;
    puVar2 = PixelCrushers_UIPanel_TypeInfo;
    puVar4 = PTR_DAT_06d04a48;
    if (1 < *(uint *)(plVar8 + 3)) {
      plVar8[5] = lVar7;
      thunk_FUN_02f411dc(plVar8 + 5,lVar7);
      lVar7 = FUN_0678d7a4(uVar25,uVar26,*(undefined8 *)puVar2,plVar8);
      plVar8 = (long *)FUN_02f07f14(*(undefined8 *)puVar5,1);
      lVar9 = FUN_056109c0(*(undefined8 *)puVar4,0);
      if (plVar8 == (long *)0x0) {
LAB_06791688:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_02ef170c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_06791690;
      puVar2 = System_Runtime_Serialization_DataNode<byte>_TypeInfo;
      if ((int)plVar8[3] == 0) goto LAB_0679168c;
      plVar8[4] = lVar9;
      thunk_FUN_02f411dc(plVar8 + 4,lVar9);
      lVar9 = FUN_0678d904(*(undefined8 *)puVar2,lVar7,plVar8);
      plVar8 = (long *)FUN_02f07f14(*(undefined8 *)puVar5,1);
      lVar10 = FUN_056109c0(*(undefined8 *)puVar3,0);
      if (plVar8 == (long *)0x0) goto LAB_06791688;
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_02ef170c(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
      goto LAB_06791690;
      puVar2 = System_Runtime_Serialization_DataNode<char>_TypeInfo;
      if ((int)plVar8[3] == 0) goto LAB_0679168c;
      plVar8[4] = lVar10;
      thunk_FUN_02f411dc(plVar8 + 4,lVar10);
      lVar10 = FUN_0678d904(*(undefined8 *)puVar2,lVar7,plVar8);
      plVar8 = (long *)FUN_02f07f14(*(undefined8 *)puVar5,2);
      lVar11 = FUN_056109c0(*(undefined8 *)puVar3,0);
      if (plVar8 == (long *)0x0) goto LAB_06791688;
      if ((lVar11 != 0) &&
         (lVar12 = thunk_FUN_02ef170c(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
      goto LAB_06791690;
      puVar2 = UnityEngine_UINumericFieldsUtils_TypeInfo;
      if ((int)plVar8[3] != 0) {
        plVar8[4] = lVar11;
        thunk_FUN_02f411dc(plVar8 + 4,lVar11);
        lVar11 = FUN_056109c0(*(undefined8 *)puVar2,0);
        if ((lVar11 != 0) &&
           (lVar12 = thunk_FUN_02ef170c(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
        goto LAB_06791690;
        puVar2 = System_Runtime_Serialization_DataNode<Guid>_TypeInfo;
        if (1 < *(uint *)(plVar8 + 3)) {
          plVar8[5] = lVar11;
          thunk_FUN_02f411dc(plVar8 + 5,lVar11);
          lVar11 = FUN_0678d904(*(undefined8 *)puVar2,lVar7,plVar8);
          plVar8 = (long *)FUN_02f07f14(*(undefined8 *)puVar5,2);
          lVar12 = FUN_056109c0(*(undefined8 *)puVar3,0);
          if (plVar8 == (long *)0x0) goto LAB_06791688;
          if ((lVar12 != 0) &&
             (lVar13 = thunk_FUN_02ef170c(lVar12,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0))
          goto LAB_06791690;
          puVar2 = PixelCrushers_UILocalizationManager_TypeInfo;
          if ((int)plVar8[3] != 0) {
            plVar8[4] = lVar12;
            thunk_FUN_02f411dc(plVar8 + 4,lVar12);
            lVar12 = FUN_056109c0(*(undefined8 *)puVar2,0);
            if ((lVar12 != 0) &&
               (lVar13 = thunk_FUN_02ef170c(lVar12,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0))
            goto LAB_06791690;
            puVar6 = System_Runtime_Serialization_DataNode<DateTime>_TypeInfo;
            puVar2 = PTR_DAT_06d05848;
            if (1 < *(uint *)(plVar8 + 3)) {
              plVar8[5] = lVar12;
              thunk_FUN_02f411dc(plVar8 + 5,lVar12);
              lVar12 = FUN_0678d904(*(undefined8 *)puVar6,lVar11,plVar8);
              plVar8 = (long *)FUN_02f07f14(*(undefined8 *)puVar5,1);
              lVar13 = FUN_056109c0(*(undefined8 *)puVar2,0);
              if (plVar8 != (long *)0x0) {
                if ((lVar13 != 0) &&
                   (lVar14 = thunk_FUN_02ef170c(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar14 == 0
                   )) goto LAB_06791690;
                puVar6 = PixelCrushers_UIButtonKeyTrigger_TypeInfo;
                puVar2 = PTR_DAT_06d7ec78;
                if ((int)plVar8[3] == 0) goto LAB_0679168c;
                plVar8[4] = lVar13;
                thunk_FUN_02f411dc(plVar8 + 4,lVar13);
                lVar13 = FUN_0678d904(*(undefined8 *)puVar2,lVar12,plVar8);
                plVar8 = (long *)FUN_02f07f14(*(undefined8 *)puVar5,1);
                lVar14 = FUN_056109c0(*(undefined8 *)puVar6,0);
                if (plVar8 != (long *)0x0) {
                  if ((lVar14 != 0) &&
                     (lVar15 = thunk_FUN_02ef170c(lVar14,*(undefined8 *)(*plVar8 + 0x40)),
                     lVar15 == 0)) goto LAB_06791690;
                  puVar2 = PTR_DAT_06d03e90;
                  if ((int)plVar8[3] == 0) goto LAB_0679168c;
                  plVar8[4] = lVar14;
                  thunk_FUN_02f411dc(plVar8 + 4,lVar14);
                  lVar14 = FUN_0678d904(*(undefined8 *)puVar2,lVar13,plVar8);
                  plVar8 = (long *)FUN_02f07f14(*(undefined8 *)puVar5,1);
                  lVar15 = FUN_056109c0(*(undefined8 *)puVar3,0);
                  if (plVar8 != (long *)0x0) {
                    if ((lVar15 != 0) &&
                       (lVar16 = thunk_FUN_02ef170c(lVar15,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar16 == 0)) goto LAB_06791690;
                    puVar2 = System_Runtime_Serialization_DataNode<short>_TypeInfo;
                    if ((int)plVar8[3] == 0) goto LAB_0679168c;
                    plVar8[4] = lVar15;
                    thunk_FUN_02f411dc(plVar8 + 4,lVar15);
                    lVar15 = FUN_0678d904(*(undefined8 *)puVar2,lVar14,plVar8);
                    plVar8 = (long *)FUN_02f07f14(*(undefined8 *)puVar5,1);
                    lVar16 = FUN_056109c0(*(undefined8 *)puVar3,0);
                    if (plVar8 != (long *)0x0) {
                      if ((lVar16 != 0) &&
                         (lVar17 = thunk_FUN_02ef170c(lVar16,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar17 == 0)) goto LAB_06791690;
                      puVar2 = 
                      System_Runtime_CompilerServices_ConditionalWeakTable_CreateValueCallback<object,_OSSpecificSynchronizationContext>_TypeInfo
                      ;
                      if ((int)plVar8[3] == 0) goto LAB_0679168c;
                      plVar8[4] = lVar16;
                      thunk_FUN_02f411dc(plVar8 + 4,lVar16);
                      lVar16 = FUN_0678d904(*(undefined8 *)puVar2,lVar14,plVar8);
                      plVar8 = (long *)FUN_02f07f14(*(undefined8 *)puVar5,1);
                      lVar17 = FUN_056109c0(*(undefined8 *)puVar4,0);
                      if (plVar8 != (long *)0x0) {
                        if ((lVar17 != 0) &&
                           (lVar18 = thunk_FUN_02ef170c(lVar17,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar18 == 0)) goto LAB_06791690;
                        puVar4 = System_Runtime_Serialization_DataNode<double>_TypeInfo;
                        if ((int)plVar8[3] == 0) goto LAB_0679168c;
                        plVar8[4] = lVar17;
                        thunk_FUN_02f411dc(plVar8 + 4,lVar17);
                        lVar17 = FUN_0678d904(*(undefined8 *)puVar4,lVar14,plVar8);
                        local_80 = param_1[6];
                        uStack_98 = param_1[3];
                        local_a0 = param_1[2];
                        uStack_88 = param_1[5];
                        uStack_90 = param_1[4];
                        uStack_a8 = param_1[1];
                        local_b0 = *param_1;
                        lVar18 = FUN_0678f2b0(&local_b0);
                        puVar4 = 
                        System_Runtime_CompilerServices_ConditionalWeakTable_CreateValueCallback<HttpWebRequest,_NtlmSession>_TypeInfo
                        ;
                        if (lVar18 != 0) {
                          FUN_066cd448(lVar18,*(undefined8 *)
                                               System_Runtime_CompilerServices_ConditionalWeakTable<object,_OSSpecificSynchronizationContext>_TypeInfo
                                       ,0);
                          FUN_0678da2c(lVar18,lVar11);
                          lVar19 = FUN_03a8638c(lVar18,*(undefined8 *)puVar4);
                          puVar4 = PTR_DAT_06d3ca50;
                          if (lVar19 != 0) {
                            FUN_06903e34(lVar19,2,1,0);
                            lVar18 = FUN_03a8638c(lVar18,*(undefined8 *)puVar4);
                            if (DAT_071bd04c == '\0') {
                              FUN_02f07e70(PTR_DAT_06d03888);
                              DAT_071bd04c = '\x01';
                            }
                            puVar2 = PTR_DAT_06d03888;
                            if (lVar18 != 0) {
                              FUN_066d39a0(*(undefined4 *)
                                            (*(long *)(*(long *)PTR_DAT_06d03888 + 0xb8) + 0x28),
                                           *(undefined4 *)
                                            (*(long *)(*(long *)PTR_DAT_06d03888 + 0xb8) + 0x2c),
                                           lVar18,0);
                              if (DAT_071bb655 == '\0') {
                                FUN_02f07e70(PTR_DAT_06d03888);
                                DAT_071bb655 = '\x01';
                              }
                              lVar21 = *(long *)(*(long *)puVar2 + 0xb8);
                              FUN_066d3abc(*(undefined4 *)(lVar21 + 8),*(undefined4 *)(lVar21 + 0xc)
                                           ,lVar18,0);
                              if (DAT_071bb655 == '\0') {
                                FUN_02f07e70(PTR_DAT_06d03888);
                                DAT_071bb655 = '\x01';
                              }
                              lVar21 = *(long *)(*(long *)puVar2 + 0xb8);
                              FUN_066d3e10(*(undefined4 *)(lVar21 + 8),*(undefined4 *)(lVar21 + 0xc)
                                           ,lVar18,0);
                              uVar24 = FUN_066d3c64(lVar18,0);
                              FUN_066d3cf4(uVar24,0,lVar18,0);
                              if (lVar17 != 0) {
                                plVar8 = (long *)FUN_03a8638c(lVar17,*(undefined8 *)PTR_DAT_06d143d0
                                                             );
                                FUN_0678db2c();
                                if ((plVar8 != (long *)0x0) &&
                                   (FUN_0690c8e8(plVar8,3,0), puVar2 = PTR_DAT_06d102a8, lVar15 != 0
                                   )) {
                                  plVar20 = (long *)FUN_03a8638c(lVar15,*(undefined8 *)
                                                                         PTR_DAT_06d102a8);
                                  if (plVar20 != (long *)0x0) {
                                    (**(code **)(*plVar20 + 0x2a8))
                                              (DAT_013f6c7c,DAT_013f6c7c,DAT_013f6c7c,0x3f800000,
                                               plVar20,*(undefined8 *)(*plVar20 + 0x2b0));
                                    if ((((lVar16 != 0) &&
                                         (lVar18 = FUN_03a8638c(lVar16,*(undefined8 *)puVar2),
                                         lVar18 != 0)) &&
                                        (FUN_0678e014(lVar18,param_1[4]), lVar14 != 0)) &&
                                       (lVar21 = FUN_03a8638c(lVar14,*(undefined8 *)
                                                                                                                                            
                                                  PixelCrushers_DialogueSystem_UIAutonumberSettings_TypeInfo
                                                  ), lVar21 != 0)) {
                                      FUN_06907fc8(lVar21,plVar20,0);
                                      *(long *)(lVar21 + 0x108) = lVar18;
                                      thunk_FUN_02f411dc(lVar21 + 0x108,lVar18);
                                      FUN_0690e768(lVar21,1,0);
                                      if ((lVar11 != 0) &&
                                         (lVar18 = FUN_03a8638c(lVar11,*(undefined8 *)puVar2),
                                         puVar3 = Gley_UrbanSystem_Internal_UIInput_TypeInfo,
                                         lVar18 != 0)) {
                                        FUN_0678e014(lVar18,*param_1);
                                        FUN_0678e2d8(lVar18,1);
                                        lVar18 = FUN_03a8638c(lVar11,*(undefined8 *)puVar3);
                                        if (lVar13 != 0) {
                                          uVar24 = FUN_03a8638c(lVar13,*(undefined8 *)puVar4);
                                          if (lVar18 != 0) {
                                            *(undefined8 *)(lVar18 + 0x20) = uVar24;
                                            thunk_FUN_02f411dc();
                                            puVar3 = 
                                            UnityEngine_UIElements_UIEventRegistration_TypeInfo;
                                            if (lVar12 != 0) {
                                              uVar24 = FUN_03a8638c(lVar12,*(undefined8 *)puVar4);
                                              FUN_06904308(lVar18,uVar24,0);
                                              *(undefined1 *)(lVar18 + 0x28) = 0;
                                              *(undefined4 *)(lVar18 + 0x2c) = 2;
                                              FUN_06904594(lVar18,lVar19,0);
                                              FUN_06904744(lVar18,2,0);
                                              FUN_069047ec(0xc0400000,lVar18,0);
                                              lVar18 = FUN_03a8638c(lVar12,*(undefined8 *)puVar3);
                                              if (lVar18 != 0) {
                                                FUN_068fd388(lVar18,0,0);
                                                lVar18 = FUN_03a8638c(lVar12,*(undefined8 *)puVar2);
                                                if (lVar18 != 0) {
                                                  FUN_0678e014(lVar18,param_1[6]);
                                                  FUN_0678e2d8(lVar18,1);
                                                  if (lVar9 != 0) {
                                                    lVar18 = FUN_03a8638c(lVar9,*(undefined8 *)
                                                                                 PTR_DAT_06d143d0);
                                                    FUN_0678db2c();
                                                    if (((lVar18 != 0) &&
                                                        (FUN_0690c8e8(lVar18,3,0), lVar10 != 0)) &&
                                                       ((lVar19 = FUN_03a8638c(lVar10,*(undefined8 *
                                                                                       )puVar2),
                                                        lVar19 != 0 &&
                                                        ((FUN_0678e014(lVar19,param_1[5]),
                                                         lVar7 != 0 &&
                                                         (plVar20 = (long *)FUN_03a8638c(lVar7,*(
                                                  undefined8 *)puVar2),
                                                  puVar2 = 
                                                  UnityEngine_UIElements_UIElementsUtility_TypeInfo,
                                                  plVar20 != (long *)0x0)))))) {
                                                    FUN_0678e014(plVar20,*param_1);
                                                    lVar19 = *(long *)(*(long *)
                                                  System_TypeSpec_TypeInfo + 0xb8);
                                                  (**(code **)(*plVar20 + 0x2a8))
                                                            (*(undefined4 *)(lVar19 + 0x20),
                                                             *(undefined4 *)(lVar19 + 0x24),
                                                             *(undefined4 *)(lVar19 + 0x28),
                                                             *(undefined4 *)(lVar19 + 0x2c),plVar20,
                                                             *(undefined8 *)(*plVar20 + 0x2b0));
                                                  FUN_0678e2d8(plVar20,1);
                                                  lVar19 = FUN_03a8638c(lVar7,*(undefined8 *)puVar2)
                                                  ;
                                                  puVar2 = 
                                                  System_Runtime_Serialization_DataNode<byte[]>_TypeInfo
                                                  ;
                                                  if (lVar19 != 0) {
                                                    FUN_06907fc8(lVar19,plVar20,0);
                                                    FUN_0678dc08(lVar19);
                                                    uVar24 = FUN_03a8638c(lVar11,*(undefined8 *)
                                                                                  puVar4);
                                                    *(undefined8 *)(lVar19 + 0x100) = uVar24;
                                                    thunk_FUN_02f411dc(lVar19 + 0x100);
                                                    FUN_06791720(lVar19);
                                                    *(long *)(lVar19 + 0x108) = lVar18;
                                                    thunk_FUN_02f411dc(lVar19 + 0x108,lVar18);
                                                    FUN_06791720(lVar19);
                                                    *(long **)(lVar19 + 0x118) = plVar8;
                                                    thunk_FUN_02f411dc(lVar19 + 0x118,plVar8);
                                                    FUN_06791720(lVar19);
                                                    (**(code **)(*plVar8 + 0x5e8))
                                                              (plVar8,*(undefined8 *)puVar2,
                                                               *(undefined8 *)(*plVar8 + 0x5f0));
                                                    puVar3 = PTR_DAT_06d368c8;
                                                    if (*(long *)(lVar19 + 0x130) != 0) {
                                                      lVar21 = *(long *)(*(long *)(lVar19 + 0x130) +
                                                                        0x10);
                                                      lVar18 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                   PTR_DAT_06d368c8)
                                                      ;
                                                      FUN_05645a04(lVar18,0);
                                                      if (lVar18 != 0) {
                                                        *(undefined8 *)(lVar18 + 0x10) =
                                                             *(undefined8 *)puVar2;
                                                        thunk_FUN_02f411dc();
                                                        puVar2 = PTR_DAT_06d368e0;
                                                        if (lVar21 != 0) {
                                                          lVar22 = *(long *)(lVar21 + 0x10);
                                                          lVar23 = *(long *)PTR_DAT_06d368e0;
                                                          *(int *)(lVar21 + 0x1c) =
                                                               *(int *)(lVar21 + 0x1c) + 1;
                                                          if (lVar22 != 0) {
                                                            uVar1 = *(uint *)(lVar21 + 0x18);
                                                            if (uVar1 < *(uint *)(lVar22 + 0x18)) {
                                                              *(uint *)(lVar21 + 0x18) = uVar1 + 1;
                                                              plVar8 = (long *)(lVar22 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar8 = lVar18;
                                                  thunk_FUN_02f411dc(plVar8,lVar18);
                                                  }
                                                  else {
                                                    FUN_03fd0c9c(lVar21,lVar18,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar23 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  if (*(long *)(lVar19 + 0x130) != 0) {
                                                    lVar21 = *(long *)(*(long *)(lVar19 + 0x130) +
                                                                      0x10);
                                                    lVar18 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05645a04(lVar18,0);
                                                    if (lVar18 != 0) {
                                                      *(undefined8 *)(lVar18 + 0x10) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Runtime_Serialization_DataNode<Decimal>_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  if (lVar21 != 0) {
                                                    lVar22 = *(long *)(lVar21 + 0x10);
                                                    lVar23 = *(long *)puVar2;
                                                    *(int *)(lVar21 + 0x1c) =
                                                         *(int *)(lVar21 + 0x1c) + 1;
                                                    if (lVar22 != 0) {
                                                      uVar1 = *(uint *)(lVar21 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)(lVar21 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar22 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar18;
                                                        thunk_FUN_02f411dc(plVar8,lVar18);
                                                      }
                                                      else {
                                                        FUN_03fd0c9c(lVar21,lVar18,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar23 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  if (*(long *)(lVar19 + 0x130) != 0) {
                                                    lVar21 = *(long *)(*(long *)(lVar19 + 0x130) +
                                                                      0x10);
                                                    lVar18 = thunk_FUN_02ef1808(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05645a04(lVar18,0);
                                                    if (lVar18 != 0) {
                                                      *(undefined8 *)(lVar18 + 0x10) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Runtime_Serialization_DataNode<bool>_TypeInfo
                                                  ;
                                                  thunk_FUN_02f411dc();
                                                  puVar3 = PTR_DAT_06d03888;
                                                  if (lVar21 != 0) {
                                                    lVar22 = *(long *)(lVar21 + 0x10);
                                                    lVar23 = *(long *)puVar2;
                                                    *(int *)(lVar21 + 0x1c) =
                                                         *(int *)(lVar21 + 0x1c) + 1;
                                                    if (lVar22 != 0) {
                                                      uVar1 = *(uint *)(lVar21 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)(lVar21 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar22 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar18;
                                                        thunk_FUN_02f411dc(plVar8,lVar18);
                                                      }
                                                      else {
                                                        FUN_03fd0c9c(lVar21,lVar18,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar23 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  FUN_06791720(lVar19);
                                                  lVar9 = FUN_03a8638c(lVar9,*(undefined8 *)puVar4);
                                                  if (DAT_071bac5e == '\0') {
                                                    FUN_02f07e70(PTR_DAT_06d03888);
                                                    DAT_071bac5e = '\x01';
                                                  }
                                                  if (lVar9 != 0) {
                                                    FUN_066d39a0(**(undefined4 **)
                                                                   (*(long *)puVar3 + 0xb8),
                                                                 (*(undefined4 **)
                                                                   (*(long *)puVar3 + 0xb8))[1],
                                                                 lVar9,0);
                                                    if (DAT_071bb655 == '\0') {
                                                      FUN_02f07e70(PTR_DAT_06d03888);
                                                      DAT_071bb655 = '\x01';
                                                    }
                                                    FUN_066d3abc(*(undefined4 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 8),*(undefined4 *)
                                                                        (*(long *)(*(long *)puVar3 +
                                                                                  0xb8) + 0xc),lVar9
                                                                 ,0);
                                                    FUN_066d4004(0x41200000,0x40c00000,lVar9,0);
                                                    FUN_066d4198(0xc1c80000,0xc0e00000,lVar9,0);
                                                    lVar9 = FUN_03a8638c(lVar10,*(undefined8 *)
                                                                                 puVar4);
                                                    if (lVar9 != 0) {
                                                      FUN_066d39a0(0x3f800000,0x3f000000,lVar9,0);
                                                      FUN_066d3abc(0x3f800000,0x3f000000,lVar9,0);
                                                      FUN_066d3cf4(0x41a00000,0x41a00000,lVar9,0);
                                                      FUN_066d3bd8(0xc1700000,0,lVar9,0);
                                                      lVar9 = FUN_03a8638c(lVar11,*(undefined8 *)
                                                                                   puVar4);
                                                      if (lVar9 != 0) {
                                                        FUN_066d39a0(0,0,lVar9,0);
                                                        FUN_066d3abc(0x3f800000,0,lVar9,0);
                                                        FUN_066d3e10(0x3f000000,0x3f800000,lVar9,0);
                                                        FUN_066d3bd8(0,0x40000000,lVar9,0);
                                                        FUN_066d3cf4(0,0x43160000,lVar9,0);
                                                        lVar9 = FUN_03a8638c(lVar12,*(undefined8 *)
                                                                                     puVar4);
                                                        if (lVar9 != 0) {
                                                          FUN_066d39a0(0,0,lVar9,0);
                                                          FUN_066d3abc(0x3f800000,0x3f800000,lVar9,0
                                                                      );
                                                          FUN_066d3cf4(0xc1900000,0,lVar9,0);
                                                          FUN_066d3e10(0,0x3f800000,lVar9,0);
                                                          lVar9 = FUN_03a8638c(lVar13,*(undefined8 *
                                                                                       )puVar4);
                                                          if (lVar9 != 0) {
                                                            FUN_066d39a0(0,0x3f800000,lVar9,0);
                                                            FUN_066d3abc(0x3f800000,0x3f800000,lVar9
                                                                         ,0);
                                                            FUN_066d3e10(0x3f000000,0x3f800000,lVar9
                                                                         ,0);
                                                            FUN_066d3bd8(0,0,lVar9,0);
                                                            FUN_066d3cf4(0,0x41e00000,lVar9,0);
                                                            lVar9 = FUN_03a8638c(lVar14,*(undefined8
                                                                                          *)puVar4);
                                                            if (lVar9 != 0) {
                                                              FUN_066d39a0(0,0x3f000000,lVar9,0);
                                                              FUN_066d3abc(0x3f800000,0x3f000000,
                                                                           lVar9,0);
                                                              FUN_066d3cf4(0,0x41a00000,lVar9,0);
                                                              lVar9 = FUN_03a8638c(lVar15,*(
                                                  undefined8 *)puVar4);
                                                  if (DAT_071bac5e == '\0') {
                                                    FUN_02f07e70(PTR_DAT_06d03888);
                                                    DAT_071bac5e = '\x01';
                                                  }
                                                  if (lVar9 != 0) {
                                                    FUN_066d39a0(**(undefined4 **)
                                                                   (*(long *)puVar3 + 0xb8),
                                                                 (*(undefined4 **)
                                                                   (*(long *)puVar3 + 0xb8))[1],
                                                                 lVar9,0);
                                                    if (DAT_071bb655 == '\0') {
                                                      FUN_02f07e70(PTR_DAT_06d03888);
                                                      DAT_071bb655 = '\x01';
                                                    }
                                                    FUN_066d3abc(*(undefined4 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 8),*(undefined4 *)
                                                                        (*(long *)(*(long *)puVar3 +
                                                                                  0xb8) + 0xc),lVar9
                                                                 ,0);
                                                    if (DAT_071bac5e == '\0') {
                                                      FUN_02f07e70(PTR_DAT_06d03888);
                                                      DAT_071bac5e = '\x01';
                                                    }
                                                    FUN_066d3cf4(**(undefined4 **)
                                                                   (*(long *)puVar3 + 0xb8),
                                                                 (*(undefined4 **)
                                                                   (*(long *)puVar3 + 0xb8))[1],
                                                                 lVar9,0);
                                                    lVar9 = FUN_03a8638c(lVar16,*(undefined8 *)
                                                                                 puVar4);
                                                    if (lVar9 != 0) {
                                                      FUN_066d39a0(0,0x3f000000,lVar9,0);
                                                      FUN_066d3abc(0,0x3f000000,lVar9,0);
                                                      FUN_066d3cf4(0x41a00000,0x41a00000,lVar9,0);
                                                      FUN_066d3bd8(0x41200000,0,lVar9,0);
                                                      lVar9 = FUN_03a8638c(lVar17,*(undefined8 *)
                                                                                   puVar4);
                                                      if (DAT_071bac5e == '\0') {
                                                        FUN_02f07e70(PTR_DAT_06d03888);
                                                        DAT_071bac5e = '\x01';
                                                      }
                                                      if (lVar9 != 0) {
                                                        FUN_066d39a0(**(undefined4 **)
                                                                       (*(long *)puVar3 + 0xb8),
                                                                     (*(undefined4 **)
                                                                       (*(long *)puVar3 + 0xb8))[1],
                                                                     lVar9,0);
                                                        if (DAT_071bb655 == '\0') {
                                                          FUN_02f07e70(PTR_DAT_06d03888);
                                                          DAT_071bb655 = '\x01';
                                                        }
                                                        FUN_066d3abc(*(undefined4 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 8),
                                                                     *(undefined4 *)
                                                                      (*(long *)(*(long *)puVar3 +
                                                                                0xb8) + 0xc),lVar9,0
                                                                    );
                                                        FUN_066d4004(0x41a00000,0x3f800000,lVar9,0);
                                                        FUN_066d4198(0xc1200000,0xc0000000,lVar9,0);
                                                        FUN_066c9b04(lVar11,0,0);
                                                        return lVar7;
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
              goto LAB_06791688;
            }
          }
        }
      }
    }
  }
LAB_0679168c:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


