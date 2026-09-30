/*
FUNCTION_NAME: FUN_061dbb38
ENTRY_POINT: 061dbb38
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


long FUN_061dbb38(undefined8 *param_1)

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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  puVar4 = StringLiteral_2034;
  if ((DAT_06bcb5aa & 1) == 0) {
    FUN_02f08768(StringLiteral_2034);
    FUN_02f08768(StringLiteral_2057);
    FUN_02f08768(StringLiteral_2058);
    FUN_02f08768(Unity_Properties_TypeConverter<short,_bool>_TypeInfo);
    FUN_02f08768(StringLiteral_2059);
    FUN_02f08768(PTR_DAT_067d0510);
    FUN_02f08768(StringLiteral_2060);
    FUN_02f08768(Method_System_Data_SqlTypes_SqlDecimal_op_Multiply__);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000357_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067c8ff0);
    FUN_02f08768(Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__);
    FUN_02f08768(StringLiteral_2061);
    FUN_02f08768(StringLiteral_2062);
    FUN_02f08768(StringLiteral_2063);
    FUN_02f08768(StringLiteral_2046);
    FUN_02f08768(StringLiteral_2064);
    FUN_02f08768(StringLiteral_2039);
    FUN_02f08768(StringLiteral_2052);
    FUN_02f08768(PTR_DAT_067ca1a8);
    FUN_02f08768(StringLiteral_2065);
    FUN_02f08768(Method_System_Data_SqlTypes_SqlDouble_op_Multiply__);
    FUN_02f08768(Method_System_Data_SqlTypes_SqlDouble_op_Subtraction__);
    FUN_02f08768(Method_System_Data_Common_SqlDoubleStorage_Aggregate__);
    FUN_02f08768(Method_System_Data_SqlTypes_SqlGuid_CompareTo__);
    FUN_02f08768(Method_System_Data_SqlTypes_SqlGuid_get_Value__);
    FUN_02f08768(Method_System_Data_Common_SqlGuidStorage_Aggregate__);
    FUN_02f08768(Method_System_Data_SqlTypes_SqlInt16_CompareTo__);
    FUN_02f08768(Method_System_Data_SqlTypes_SqlInt16_get_Value__);
    FUN_02f08768(System_Func<DynamicMetaObject,_Expression>_TypeInfo);
    FUN_02f08768(
                Method_System_Collections_Generic_List_Enumerator<VisualTreeAsset_UxmlObjectEntry>_get_Current__
                );
    FUN_02f08768(Method_System_Data_SqlTypes_SqlInt16_op_Addition__);
    FUN_02f08768(Method_System_Data_SqlTypes_SqlInt16_op_Division__);
    FUN_02f08768(Method_System_Data_SqlTypes_SqlDecimal_CheckValidPrecScale__);
    DAT_06bcb5aa = 1;
  }
  puVar3 = Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__;
  puVar2 = PTR_DAT_067ca1a8;
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar7 = *(long *)puVar4;
  }
  uVar25 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 8);
  uVar26 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0xc);
  plVar8 = (long *)FUN_02f0880c(*(undefined8 *)puVar2,2);
  uVar24 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
  }
  lVar7 = FUN_050e4454(uVar24,0);
  if (plVar8 == (long *)0x0) goto LAB_061dcd3c;
  if ((lVar7 != 0) &&
     (lVar9 = thunk_FUN_02f45174(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_061dcd44:
    uVar24 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar24,0);
  }
  puVar4 = StringLiteral_2057;
  if ((int)plVar8[3] != 0) {
    plVar8[4] = lVar7;
    lVar7 = FUN_050e4454(*(undefined8 *)puVar4,0);
    if ((lVar7 != 0) &&
       (lVar9 = thunk_FUN_02f45174(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
    goto LAB_061dcd44;
    puVar4 = StringLiteral_2065;
    if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
      plVar8[5] = lVar7;
      puVar5 = StringLiteral_2039;
      lVar7 = FUN_061d9110(uVar25,uVar26,*(undefined8 *)puVar4,plVar8);
      plVar8 = (long *)FUN_02f0880c(*(undefined8 *)puVar2,1);
      lVar9 = FUN_050e4454(*(undefined8 *)puVar5,0);
      if (plVar8 == (long *)0x0) {
LAB_061dcd3c:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if ((lVar9 != 0) &&
         (lVar10 = thunk_FUN_02f45174(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_061dcd44;
      puVar4 = Method_System_Data_SqlTypes_SqlGuid_CompareTo__;
      if ((int)plVar8[3] == 0) goto LAB_061dcd40;
      plVar8[4] = lVar9;
      lVar9 = UnityEngine_UIElements_StyleSheets_ShorthandApplicator__ApplyFlex
                        (*(undefined8 *)puVar4,lVar7,plVar8);
      plVar8 = (long *)FUN_02f0880c(*(undefined8 *)puVar2,1);
      lVar10 = FUN_050e4454(*(undefined8 *)puVar3,0);
      if (plVar8 == (long *)0x0) goto LAB_061dcd3c;
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
      goto LAB_061dcd44;
      puVar4 = Method_System_Data_SqlTypes_SqlGuid_get_Value__;
      if ((int)plVar8[3] == 0) goto LAB_061dcd40;
      plVar8[4] = lVar10;
      lVar10 = UnityEngine_UIElements_StyleSheets_ShorthandApplicator__ApplyFlex
                         (*(undefined8 *)puVar4,lVar7,plVar8);
      plVar8 = (long *)FUN_02f0880c(*(undefined8 *)puVar2,2);
      lVar11 = FUN_050e4454(*(undefined8 *)puVar3,0);
      if (plVar8 == (long *)0x0) goto LAB_061dcd3c;
      if ((lVar11 != 0) &&
         (lVar12 = thunk_FUN_02f45174(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
      goto LAB_061dcd44;
      puVar4 = StringLiteral_2064;
      if ((int)plVar8[3] != 0) {
        plVar8[4] = lVar11;
        lVar11 = FUN_050e4454(*(undefined8 *)puVar4,0);
        if ((lVar11 != 0) &&
           (lVar12 = thunk_FUN_02f45174(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
        goto LAB_061dcd44;
        puVar4 = Method_System_Data_SqlTypes_SqlInt16_op_Addition__;
        if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
          plVar8[5] = lVar11;
          lVar11 = UnityEngine_UIElements_StyleSheets_ShorthandApplicator__ApplyFlex
                             (*(undefined8 *)puVar4,lVar7,plVar8);
          plVar8 = (long *)FUN_02f0880c(*(undefined8 *)puVar2,2);
          lVar12 = FUN_050e4454(*(undefined8 *)puVar3,0);
          if (plVar8 == (long *)0x0) goto LAB_061dcd3c;
          if ((lVar12 != 0) &&
             (lVar13 = thunk_FUN_02f45174(lVar12,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0))
          goto LAB_061dcd44;
          puVar4 = StringLiteral_2062;
          if ((int)plVar8[3] != 0) {
            plVar8[4] = lVar12;
            lVar12 = FUN_050e4454(*(undefined8 *)puVar4,0);
            if ((lVar12 != 0) &&
               (lVar13 = thunk_FUN_02f45174(lVar12,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0))
            goto LAB_061dcd44;
            puVar4 = Method_System_Data_Common_SqlGuidStorage_Aggregate__;
            if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
              plVar8[5] = lVar12;
              puVar6 = StringLiteral_2046;
              lVar12 = UnityEngine_UIElements_StyleSheets_ShorthandApplicator__ApplyFlex
                                 (*(undefined8 *)puVar4,lVar11,plVar8);
              plVar8 = (long *)FUN_02f0880c(*(undefined8 *)puVar2,1);
              lVar13 = FUN_050e4454(*(undefined8 *)puVar6,0);
              if (plVar8 != (long *)0x0) {
                if ((lVar13 != 0) &&
                   (lVar14 = thunk_FUN_02f45174(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar14 == 0
                   )) goto LAB_061dcd44;
                puVar4 = 
                Method_System_Collections_Generic_List_Enumerator<VisualTreeAsset_UxmlObjectEntry>_get_Current__
                ;
                if ((int)plVar8[3] == 0) goto LAB_061dcd40;
                plVar8[4] = lVar13;
                puVar6 = StringLiteral_2052;
                lVar13 = UnityEngine_UIElements_StyleSheets_ShorthandApplicator__ApplyFlex
                                   (*(undefined8 *)puVar4,lVar12,plVar8);
                plVar8 = (long *)FUN_02f0880c(*(undefined8 *)puVar2,1);
                lVar14 = FUN_050e4454(*(undefined8 *)puVar6,0);
                if (plVar8 != (long *)0x0) {
                  if ((lVar14 != 0) &&
                     (lVar15 = thunk_FUN_02f45174(lVar14,*(undefined8 *)(*plVar8 + 0x40)),
                     lVar15 == 0)) goto LAB_061dcd44;
                  puVar4 = System_Func<DynamicMetaObject,_Expression>_TypeInfo;
                  if ((int)plVar8[3] == 0) goto LAB_061dcd40;
                  plVar8[4] = lVar14;
                  lVar14 = UnityEngine_UIElements_StyleSheets_ShorthandApplicator__ApplyFlex
                                     (*(undefined8 *)puVar4,lVar13,plVar8);
                  plVar8 = (long *)FUN_02f0880c(*(undefined8 *)puVar2,1);
                  lVar15 = FUN_050e4454(*(undefined8 *)puVar3,0);
                  if (plVar8 != (long *)0x0) {
                    if ((lVar15 != 0) &&
                       (lVar16 = thunk_FUN_02f45174(lVar15,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar16 == 0)) goto LAB_061dcd44;
                    puVar4 = Method_System_Data_SqlTypes_SqlInt16_op_Division__;
                    if ((int)plVar8[3] == 0) goto LAB_061dcd40;
                    plVar8[4] = lVar15;
                    lVar15 = UnityEngine_UIElements_StyleSheets_ShorthandApplicator__ApplyFlex
                                       (*(undefined8 *)puVar4,lVar14,plVar8);
                    plVar8 = (long *)FUN_02f0880c(*(undefined8 *)puVar2,1);
                    lVar16 = FUN_050e4454(*(undefined8 *)puVar3,0);
                    if (plVar8 != (long *)0x0) {
                      if ((lVar16 != 0) &&
                         (lVar17 = thunk_FUN_02f45174(lVar16,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar17 == 0)) goto LAB_061dcd44;
                      puVar4 = Method_System_Data_SqlTypes_SqlDouble_op_Multiply__;
                      if ((int)plVar8[3] == 0) goto LAB_061dcd40;
                      plVar8[4] = lVar16;
                      lVar16 = UnityEngine_UIElements_StyleSheets_ShorthandApplicator__ApplyFlex
                                         (*(undefined8 *)puVar4,lVar14,plVar8);
                      plVar8 = (long *)FUN_02f0880c(*(undefined8 *)puVar2,1);
                      lVar17 = FUN_050e4454(*(undefined8 *)puVar5,0);
                      if (plVar8 != (long *)0x0) {
                        if ((lVar17 != 0) &&
                           (lVar18 = thunk_FUN_02f45174(lVar17,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar18 == 0)) goto LAB_061dcd44;
                        puVar4 = Method_System_Data_SqlTypes_SqlInt16_get_Value__;
                        if ((int)plVar8[3] == 0) goto LAB_061dcd40;
                        plVar8[4] = lVar17;
                        lVar17 = UnityEngine_UIElements_StyleSheets_ShorthandApplicator__ApplyFlex
                                           (*(undefined8 *)puVar4,lVar14,plVar8);
                        uStack_a8 = param_1[1];
                        local_b0 = *param_1;
                        uStack_98 = param_1[3];
                        uStack_a0 = param_1[2];
                        uStack_88 = param_1[5];
                        local_90 = param_1[4];
                        local_80 = param_1[6];
                        lVar18 = FUN_061dab48(&local_b0);
                        puVar4 = Method_System_Data_SqlTypes_SqlDecimal_op_Multiply__;
                        if (lVar18 != 0) {
                          thunk_FUN_060f6284(lVar18,*(undefined8 *)
                                                                                                          
                                                  Method_System_Data_SqlTypes_SqlDecimal_CheckValidPrecScale__
                                             ,0);
                          FUN_061d9398(lVar18,lVar11);
                          lVar19 = FUN_033d919c(lVar18,*(undefined8 *)puVar4);
                          puVar4 = PTR_DAT_067d0510;
                          if (lVar19 != 0) {
                            FUN_063ccca0(lVar19,2,1,0);
                            lVar18 = FUN_033d919c(lVar18,*(undefined8 *)puVar4);
                            if (DAT_06bb8995 == '\0') {
                              FUN_02f08768(PTR_DAT_067c9848);
                              DAT_06bb8995 = '\x01';
                            }
                            puVar2 = PTR_DAT_067c9848;
                            if (lVar18 != 0) {
                              FUN_060fe980(*(undefined4 *)
                                            (*(long *)(*(long *)PTR_DAT_067c9848 + 0xb8) + 0x28),
                                           *(undefined4 *)
                                            (*(long *)(*(long *)PTR_DAT_067c9848 + 0xb8) + 0x2c),
                                           lVar18,0);
                              if (DAT_06bb8a4a == '\0') {
                                FUN_02f08768(PTR_DAT_067c9848);
                                DAT_06bb8a4a = '\x01';
                              }
                              lVar21 = *(long *)(*(long *)puVar2 + 0xb8);
                              FUN_060feb14(*(undefined4 *)(lVar21 + 8),*(undefined4 *)(lVar21 + 0xc)
                                           ,lVar18,0);
                              if (DAT_06bb8a4a == '\0') {
                                FUN_02f08768(PTR_DAT_067c9848);
                                DAT_06bb8a4a = '\x01';
                              }
                              lVar21 = *(long *)(*(long *)puVar2 + 0xb8);
                              FUN_060fefd0(*(undefined4 *)(lVar21 + 8),*(undefined4 *)(lVar21 + 0xc)
                                           ,lVar18,0);
                              uVar24 = FUN_060fed70(lVar18,0);
                              FUN_060fee3c(uVar24,0,lVar18,0);
                              if (lVar17 != 0) {
                                plVar8 = (long *)FUN_033d919c(lVar17,*(undefined8 *)
                                                                                                                                            
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000357_PostfixBurstDelegate_TypeInfo
                                                  );
                                FUN_061d9498();
                                if (plVar8 != (long *)0x0) {
                                  FUN_063d5210(plVar8,3,0);
                                  puVar2 = Unity_Properties_TypeConverter<short,_bool>_TypeInfo;
                                  if (lVar15 != 0) {
                                    plVar20 = (long *)FUN_033d919c(lVar15,*(undefined8 *)
                                                                                                                                                      
                                                  Unity_Properties_TypeConverter<short,_bool>_TypeInfo
                                                  );
                                    if (plVar20 != (long *)0x0) {
                                      (**(code **)(*plVar20 + 0x2a8))
                                                (DAT_011b0254,DAT_011b0254,DAT_011b0254,0x3f800000,
                                                 plVar20,*(undefined8 *)(*plVar20 + 0x2b0));
                                      if (lVar16 != 0) {
                                        lVar18 = FUN_033d919c(lVar16,*(undefined8 *)puVar2);
                                        if (((lVar18 != 0) &&
                                            (FUN_061d9968(lVar18,param_1[4]), lVar14 != 0)) &&
                                           (lVar21 = FUN_033d919c(lVar14,*(undefined8 *)
                                                                          PTR_DAT_067c8ff0),
                                           lVar21 != 0)) {
                                          FUN_063d0bc0(lVar21,plVar20,0);
                                          *(long *)(lVar21 + 0x108) = lVar18;
                                          FUN_063d6f9c(lVar21,1,0);
                                          if ((lVar11 != 0) &&
                                             (lVar18 = FUN_033d919c(lVar11,*(undefined8 *)puVar2),
                                             puVar3 = StringLiteral_2060, lVar18 != 0)) {
                                            FUN_061d9968(lVar18,*param_1);
                                            FUN_061d9c54(lVar18,1);
                                            lVar18 = FUN_033d919c(lVar11,*(undefined8 *)puVar3);
                                            if (lVar13 != 0) {
                                              uVar24 = FUN_033d919c(lVar13,*(undefined8 *)puVar4);
                                              if ((lVar18 != 0) &&
                                                 (*(undefined8 *)(lVar18 + 0x20) = uVar24,
                                                 puVar3 = StringLiteral_2059, lVar12 != 0)) {
                                                uVar24 = FUN_033d919c(lVar12,*(undefined8 *)puVar4);
                                                FUN_063cd014(lVar18,uVar24,0);
                                                *(undefined1 *)(lVar18 + 0x28) = 0;
                                                *(undefined4 *)(lVar18 + 0x2c) = 2;
                                                FUN_063cd25c(lVar18,lVar19,0);
                                                FUN_063cd3f0(lVar18,2,0);
                                                FUN_063cd498(0xc0400000,lVar18,0);
                                                lVar18 = FUN_033d919c(lVar12,*(undefined8 *)puVar3);
                                                if (lVar18 != 0) {
                                                  FUN_063c6368(lVar18,0,0);
                                                  lVar18 = FUN_033d919c(lVar12,*(undefined8 *)puVar2
                                                                       );
                                                  if (lVar18 != 0) {
                                                    FUN_061d9968(lVar18,param_1[6]);
                                                    FUN_061d9c54(lVar18,1);
                                                    if (lVar9 != 0) {
                                                      lVar18 = FUN_033d919c(lVar9,*(undefined8 *)
                                                                                                                                                                      
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000357_PostfixBurstDelegate_TypeInfo
                                                  );
                                                  FUN_061d9498();
                                                  if ((((lVar18 != 0) &&
                                                       (FUN_063d5210(lVar18,3,0), lVar10 != 0)) &&
                                                      (lVar19 = FUN_033d919c(lVar10,*(undefined8 *)
                                                                                     puVar2),
                                                      lVar19 != 0)) &&
                                                     ((FUN_061d9968(lVar19,param_1[5]), lVar7 != 0
                                                      && (plVar20 = (long *)FUN_033d919c(lVar7,*(
                                                  undefined8 *)puVar2), puVar2 = StringLiteral_2058,
                                                  plVar20 != (long *)0x0)))) {
                                                    FUN_061d9968(plVar20,*param_1);
                                                    lVar19 = *(long *)(*(long *)StringLiteral_2034 +
                                                                      0xb8);
                                                    (**(code **)(*plVar20 + 0x2a8))
                                                              (*(undefined4 *)(lVar19 + 0x20),
                                                               *(undefined4 *)(lVar19 + 0x24),
                                                               *(undefined4 *)(lVar19 + 0x28),
                                                               *(undefined4 *)(lVar19 + 0x2c),
                                                               plVar20,*(undefined8 *)
                                                                        (*plVar20 + 0x2b0));
                                                    FUN_061d9c54(plVar20,1);
                                                    lVar19 = FUN_033d919c(lVar7,*(undefined8 *)
                                                                                 puVar2);
                                                    puVar2 = 
                                                  Method_System_Data_SqlTypes_SqlDouble_op_Subtraction__
                                                  ;
                                                  if (lVar19 != 0) {
                                                    FUN_063d0bc0(lVar19,plVar20,0);
                                                    FUN_061d9574(lVar19);
                                                    uVar24 = FUN_033d919c(lVar11,*(undefined8 *)
                                                                                  puVar4);
                                                    *(undefined8 *)(lVar19 + 0x100) = uVar24;
                                                    FUN_061dcd88(lVar19);
                                                    *(long *)(lVar19 + 0x108) = lVar18;
                                                    FUN_061dcd88(lVar19);
                                                    *(long **)(lVar19 + 0x118) = plVar8;
                                                    FUN_061dcd88(lVar19);
                                                    (**(code **)(*plVar8 + 0x5e8))
                                                              (plVar8,*(undefined8 *)puVar2,
                                                               *(undefined8 *)(*plVar8 + 0x5f0));
                                                    puVar3 = StringLiteral_2063;
                                                    if (*(long *)(lVar19 + 0x130) != 0) {
                                                      lVar21 = *(long *)(*(long *)(lVar19 + 0x130) +
                                                                        0x10);
                                                      lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                                                                                                      
                                                  StringLiteral_2063);
                                                  FUN_05116b38(lVar18,0);
                                                  if ((lVar18 != 0) &&
                                                     (*(undefined8 *)(lVar18 + 0x10) =
                                                           *(undefined8 *)puVar2,
                                                     puVar2 = StringLiteral_2061, lVar21 != 0)) {
                                                    lVar22 = *(long *)(lVar21 + 0x10);
                                                    lVar23 = *(long *)StringLiteral_2061;
                                                    *(int *)(lVar21 + 0x1c) =
                                                         *(int *)(lVar21 + 0x1c) + 1;
                                                    if (lVar22 != 0) {
                                                      uVar1 = *(uint *)(lVar21 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)(lVar21 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar22 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar18;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar21,lVar18,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar23 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  if (*(long *)(lVar19 + 0x130) != 0) {
                                                    lVar21 = *(long *)(*(long *)(lVar19 + 0x130) +
                                                                      0x10);
                                                    lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05116b38(lVar18,0);
                                                    if ((lVar18 != 0) &&
                                                       (*(undefined8 *)(lVar18 + 0x10) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Data_SqlTypes_SqlInt16_CompareTo__,
                                                  lVar21 != 0)) {
                                                    lVar22 = *(long *)(lVar21 + 0x10);
                                                    lVar23 = *(long *)puVar2;
                                                    *(int *)(lVar21 + 0x1c) =
                                                         *(int *)(lVar21 + 0x1c) + 1;
                                                    if (lVar22 != 0) {
                                                      uVar1 = *(uint *)(lVar21 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)(lVar21 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar22 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar18;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar21,lVar18,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar23 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  if (*(long *)(lVar19 + 0x130) != 0) {
                                                    lVar21 = *(long *)(*(long *)(lVar19 + 0x130) +
                                                                      0x10);
                                                    lVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_05116b38(lVar18,0);
                                                    if (lVar18 != 0) {
                                                      *(undefined8 *)(lVar18 + 0x10) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_System_Data_Common_SqlDoubleStorage_Aggregate__
                                                  ;
                                                  puVar3 = PTR_DAT_067c9848;
                                                  if (lVar21 != 0) {
                                                    lVar22 = *(long *)(lVar21 + 0x10);
                                                    lVar23 = *(long *)puVar2;
                                                    *(int *)(lVar21 + 0x1c) =
                                                         *(int *)(lVar21 + 0x1c) + 1;
                                                    if (lVar22 != 0) {
                                                      uVar1 = *(uint *)(lVar21 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar22 + 0x18)) {
                                                        *(uint *)(lVar21 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar22 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar18;
                                                      }
                                                      else {
                                                        FUN_03abf904(lVar21,lVar18,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar23 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  FUN_061dcd88(lVar19);
                                                  lVar9 = FUN_033d919c(lVar9,*(undefined8 *)puVar4);
                                                  if (DAT_06bb435f == '\0') {
                                                    FUN_02f08768(PTR_DAT_067c9848);
                                                    DAT_06bb435f = '\x01';
                                                  }
                                                  if (lVar9 != 0) {
                                                    FUN_060fe980(**(undefined4 **)
                                                                   (*(long *)puVar3 + 0xb8),
                                                                 (*(undefined4 **)
                                                                   (*(long *)puVar3 + 0xb8))[1],
                                                                 lVar9,0);
                                                    if (DAT_06bb8a4a == '\0') {
                                                      FUN_02f08768(PTR_DAT_067c9848);
                                                      DAT_06bb8a4a = '\x01';
                                                    }
                                                    FUN_060feb14(*(undefined4 *)
                                                                  (*(long *)(*(long *)puVar3 + 0xb8)
                                                                  + 8),*(undefined4 *)
                                                                        (*(long *)(*(long *)puVar3 +
                                                                                  0xb8) + 0xc),lVar9
                                                                 ,0);
                                                    FUN_060ff244(0x41200000,0x40c00000,lVar9,0);
                                                                                                        
                                                  UnityEngine_UIElements_DataBindingManager_HierarchyBindingTracker__Dispose
                                                            (0xc1c80000,0xc0e00000,lVar9,0);
                                                  lVar9 = FUN_033d919c(lVar10,*(undefined8 *)puVar4)
                                                  ;
                                                  if (lVar9 != 0) {
                                                    FUN_060fe980(0x3f800000,0x3f000000,lVar9,0);
                                                    FUN_060feb14(0x3f800000,0x3f000000,lVar9,0);
                                                    FUN_060fee3c(0x41a00000,0x41a00000,lVar9,0);
                                                    FUN_060feca8(0xc1700000,0,lVar9,0);
                                                    lVar9 = FUN_033d919c(lVar11,*(undefined8 *)
                                                                                 puVar4);
                                                    if (lVar9 != 0) {
                                                      FUN_060fe980(0,0,lVar9,0);
                                                      FUN_060feb14(0x3f800000,0,lVar9,0);
                                                      FUN_060fefd0(0x3f000000,0x3f800000,lVar9,0);
                                                      FUN_060feca8(0,0x40000000,lVar9,0);
                                                      FUN_060fee3c(0,0x43160000,lVar9,0);
                                                      lVar9 = FUN_033d919c(lVar12,*(undefined8 *)
                                                                                   puVar4);
                                                      if (lVar9 != 0) {
                                                        FUN_060fe980(0,0,lVar9,0);
                                                        FUN_060feb14(0x3f800000,0x3f800000,lVar9,0);
                                                        FUN_060fee3c(0xc1900000,0,lVar9,0);
                                                        FUN_060fefd0(0,0x3f800000,lVar9,0);
                                                        lVar9 = FUN_033d919c(lVar13,*(undefined8 *)
                                                                                     puVar4);
                                                        if (lVar9 != 0) {
                                                          FUN_060fe980(0,0x3f800000,lVar9,0);
                                                          FUN_060feb14(0x3f800000,0x3f800000,lVar9,0
                                                                      );
                                                          FUN_060fefd0(0x3f000000,0x3f800000,lVar9,0
                                                                      );
                                                          FUN_060feca8(0,0,lVar9,0);
                                                          FUN_060fee3c(0,0x41e00000,lVar9,0);
                                                          lVar9 = FUN_033d919c(lVar14,*(undefined8 *
                                                                                       )puVar4);
                                                          if (lVar9 != 0) {
                                                            FUN_060fe980(0,0x3f000000,lVar9,0);
                                                            FUN_060feb14(0x3f800000,0x3f000000,lVar9
                                                                         ,0);
                                                            FUN_060fee3c(0,0x41a00000,lVar9,0);
                                                            lVar9 = FUN_033d919c(lVar15,*(undefined8
                                                                                          *)puVar4);
                                                            if (DAT_06bb435f == '\0') {
                                                              FUN_02f08768(PTR_DAT_067c9848);
                                                              DAT_06bb435f = '\x01';
                                                            }
                                                            if (lVar9 != 0) {
                                                              FUN_060fe980(**(undefined4 **)
                                                                             (*(long *)puVar3 + 0xb8
                                                                             ),(*(undefined4 **)
                                                                                 (*(long *)puVar3 +
                                                                                 0xb8))[1],lVar9,0);
                                                              if (DAT_06bb8a4a == '\0') {
                                                                FUN_02f08768(PTR_DAT_067c9848);
                                                                DAT_06bb8a4a = '\x01';
                                                              }
                                                              FUN_060feb14(*(undefined4 *)
                                                                            (*(long *)(*(long *)
                                                  puVar3 + 0xb8) + 8),
                                                  *(undefined4 *)
                                                   (*(long *)(*(long *)puVar3 + 0xb8) + 0xc),lVar9,0
                                                  );
                                                  if (DAT_06bb435f == '\0') {
                                                    FUN_02f08768(PTR_DAT_067c9848);
                                                    DAT_06bb435f = '\x01';
                                                  }
                                                  FUN_060fee3c(**(undefined4 **)
                                                                 (*(long *)puVar3 + 0xb8),
                                                               (*(undefined4 **)
                                                                 (*(long *)puVar3 + 0xb8))[1],lVar9,
                                                               0);
                                                  lVar9 = FUN_033d919c(lVar16,*(undefined8 *)puVar4)
                                                  ;
                                                  if (lVar9 != 0) {
                                                    FUN_060fe980(0,0x3f000000,lVar9,0);
                                                    FUN_060feb14(0,0x3f000000,lVar9,0);
                                                    FUN_060fee3c(0x41a00000,0x41a00000,lVar9,0);
                                                    FUN_060feca8(0x41200000,0,lVar9,0);
                                                    lVar9 = FUN_033d919c(lVar17,*(undefined8 *)
                                                                                 puVar4);
                                                    if (DAT_06bb435f == '\0') {
                                                      FUN_02f08768(PTR_DAT_067c9848);
                                                      DAT_06bb435f = '\x01';
                                                    }
                                                    if (lVar9 != 0) {
                                                      FUN_060fe980(**(undefined4 **)
                                                                     (*(long *)puVar3 + 0xb8),
                                                                   (*(undefined4 **)
                                                                     (*(long *)puVar3 + 0xb8))[1],
                                                                   lVar9,0);
                                                      if (DAT_06bb8a4a == '\0') {
                                                        FUN_02f08768(PTR_DAT_067c9848);
                                                        DAT_06bb8a4a = '\x01';
                                                      }
                                                      FUN_060feb14(*(undefined4 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 8),
                                                                   *(undefined4 *)
                                                                    (*(long *)(*(long *)puVar3 +
                                                                              0xb8) + 0xc),lVar9,0);
                                                      FUN_060ff244(0x41a00000,0x3f800000,lVar9,0);
                                                                                                            
                                                  UnityEngine_UIElements_DataBindingManager_HierarchyBindingTracker__Dispose
                                                            (0xc1200000,0xc0000000,lVar9,0);
                                                  FUN_060f0c58(lVar11,0,0);
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
              goto LAB_061dcd3c;
            }
          }
        }
      }
    }
  }
LAB_061dcd40:
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


