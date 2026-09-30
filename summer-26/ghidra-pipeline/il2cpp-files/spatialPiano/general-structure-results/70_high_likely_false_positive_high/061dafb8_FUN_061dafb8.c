/*
FUNCTION_NAME: FUN_061dafb8
ENTRY_POINT: 061dafb8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


long FUN_061dafb8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  puVar2 = StringLiteral_2034;
                    /* catch(type#1 @ 06402238) { ... } // from try @ 061dafb0 with catch @ 061dafcc
                        */
                    /* try { // try from 061dafe8 to 062dafeb has its CatchHandler @ 061db008 */
  if ((DAT_06bcb5a8 & 1) == 0) {
                    /* try { // try from 061dafec to 062db00b has its CatchHandler @ 061daf94 */
    FUN_02f08768(StringLiteral_2034);
    FUN_02f08768(Unity_Properties_TypeConverter<short,_bool>_TypeInfo);
                    /* catch() { ... } // from try @ 061dafe8 with catch @ 061db008 */
                    /* try { // try from 061db00c to 062db013 has its CatchHandler @ 061db01c */
    FUN_02f08768(PTR_DAT_067d0510);
                    /* try { // try from 061db014 to 062db01f has its CatchHandler @ 061daf94 */
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000357_PostfixBurstDelegate_TypeInfo
                );
                    /* catch(type#2 @ 00000000) { ... } // from try @ 061db00c with catch @ 061db01c
                        */
    FUN_02f08768(PTR_DAT_067c8ff0);
    FUN_02f08768(Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__);
    FUN_02f08768(StringLiteral_2039);
    FUN_02f08768(StringLiteral_2052);
    FUN_02f08768(PTR_DAT_067ca1a8);
    FUN_02f08768(Method_System_Data_SqlTypes_SqlGuid_CompareTo__);
    FUN_02f08768(StringLiteral_2049);
    FUN_02f08768(StringLiteral_167);
    FUN_02f08768(StringLiteral_2053);
    DAT_06bcb5a8 = 1;
  }
  puVar4 = StringLiteral_2052;
  puVar1 = PTR_DAT_067ca1a8;
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar6 = *(long *)puVar2;
  }
  uVar15 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x10);
  uVar16 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x14);
  plVar7 = (long *)FUN_02f0880c(*(undefined8 *)puVar1,1);
  uVar14 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
  }
                    /* try { // try from 061db0f0 to 062db14b has its CatchHandler @ 061db0f0
                       catch() { ... } // from try @ 061db0f0 with catch @ 061db0f0
                       catch() { ... } // from try @ 061db188 with catch @ 061db0f0
                       catch() { ... } // from try @ 061db1e4 with catch @ 061db0f0
                       catch() { ... } // from try @ 061db22c with catch @ 061db0f0 */
  lVar6 = FUN_050e4454(uVar14,0);
  if (plVar7 != (long *)0x0) {
    if ((lVar6 != 0) &&
       (lVar8 = thunk_FUN_02f45174(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
LAB_061db514:
      uVar14 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar14,0);
    }
    puVar4 = StringLiteral_167;
    if ((int)plVar7[3] == 0) {
LAB_061db510:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    plVar7[4] = lVar6;
    puVar3 = Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__;
    lVar6 = FUN_061d9110(uVar15,uVar16,*(undefined8 *)puVar4,plVar7);
                    /* try { // try from 061db14c to 062db187 has its CatchHandler @ 061db1f0 */
    plVar7 = (long *)FUN_02f0880c(*(undefined8 *)puVar1,1);
    lVar8 = FUN_050e4454(*(undefined8 *)puVar3,0);
    if (plVar7 != (long *)0x0) {
                    /* try { // try from 061db188 to 062db1df has its CatchHandler @ 061db0f0 */
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
      goto LAB_061db514;
      puVar5 = StringLiteral_2049;
      if ((int)plVar7[3] == 0) goto LAB_061db510;
      plVar7[4] = lVar8;
      lVar8 = UnityEngine_UIElements_StyleSheets_ShorthandApplicator__ApplyFlex
                        (*(undefined8 *)puVar5,lVar6,plVar7);
      plVar7 = (long *)FUN_02f0880c(*(undefined8 *)puVar1,1);
      lVar9 = FUN_050e4454(*(undefined8 *)puVar3,0);
      if (plVar7 != (long *)0x0) {
                    /* try { // try from 061db1e0 to 062db1e3 has its CatchHandler @ 061db1ec */
                    /* try { // try from 061db1e4 to 062db20b has its CatchHandler @ 061db0f0 */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 061db1e0 with catch @ 061db1ec
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 061db14c with catch @ 061db1f0
                        */
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_02f45174(lVar9,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
        goto LAB_061db514;
        puVar3 = StringLiteral_2053;
        if ((int)plVar7[3] == 0) goto LAB_061db510;
                    /* try { // try from 061db20c to 062db20f has its CatchHandler @ 061db220 */
        plVar7[4] = lVar9;
        puVar5 = StringLiteral_2039;
                    /* catch() { ... } // from try @ 061db20c with catch @ 061db220 */
                    /* try { // try from 061db224 to 062db22b has its CatchHandler @ 061db234 */
        lVar9 = UnityEngine_UIElements_StyleSheets_ShorthandApplicator__ApplyFlex
                          (*(undefined8 *)puVar3,lVar8,plVar7);
                    /* try { // try from 061db22c to 062db237 has its CatchHandler @ 061db0f0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 061db224 with catch @ 061db234
                        */
        plVar7 = (long *)FUN_02f0880c(*(undefined8 *)puVar1,1);
        lVar10 = FUN_050e4454(*(undefined8 *)puVar5,0);
        if (plVar7 != (long *)0x0) {
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
          goto LAB_061db514;
          puVar1 = Method_System_Data_SqlTypes_SqlGuid_CompareTo__;
          if ((int)plVar7[3] == 0) goto LAB_061db510;
          plVar7[4] = lVar10;
          lVar10 = UnityEngine_UIElements_StyleSheets_ShorthandApplicator__ApplyFlex
                             (*(undefined8 *)puVar1,lVar6,plVar7);
          if (((lVar6 != 0) &&
              (lVar11 = FUN_033d919c(lVar6,*(undefined8 *)PTR_DAT_067c8ff0), lVar11 != 0)) &&
             (FUN_063d6f9c(lVar11,1,0),
             puVar1 = Unity_Properties_TypeConverter<short,_bool>_TypeInfo, lVar8 != 0)) {
            plVar7 = (long *)FUN_033d919c(lVar8,*(undefined8 *)
                                                 Unity_Properties_TypeConverter<short,_bool>_TypeInfo
                                         );
            if (plVar7 != (long *)0x0) {
              FUN_061d9968(plVar7,*param_1);
              FUN_061d9c54(plVar7,1);
              lVar13 = *(long *)(*(long *)puVar2 + 0xb8);
              (**(code **)(*plVar7 + 0x2a8))
                        (*(undefined4 *)(lVar13 + 0x20),*(undefined4 *)(lVar13 + 0x24),
                         *(undefined4 *)(lVar13 + 0x28),*(undefined4 *)(lVar13 + 0x2c),plVar7,
                         *(undefined8 *)(*plVar7 + 0x2b0));
              if (((lVar9 != 0) && (lVar13 = FUN_033d919c(lVar9,*(undefined8 *)puVar1), lVar13 != 0)
                  ) && ((FUN_061d9968(lVar13,param_1[4]), lVar10 != 0 &&
                        (plVar12 = (long *)FUN_033d919c(lVar10,*(undefined8 *)
                                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000357_PostfixBurstDelegate_TypeInfo
                                                  ), puVar2 = PTR_DAT_067d0510,
                        plVar12 != (long *)0x0)))) {
                (**(code **)(*plVar12 + 0x5e8))
                          (plVar12,*(undefined8 *)puVar4,*(undefined8 *)(*plVar12 + 0x5f0));
                FUN_061d9498(plVar12);
                *(long *)(lVar11 + 0x108) = lVar13;
                FUN_063d0bc0(lVar11,plVar7,0);
                FUN_061d9574(lVar11);
                lVar8 = FUN_033d919c(lVar8,*(undefined8 *)puVar2);
                if (lVar8 != 0) {
                    /* try { // try from 061db3b0 to 062db40b has its CatchHandler @ 061db3b0
                       catch() { ... } // from try @ 061db3b0 with catch @ 061db3b0
                       catch() { ... } // from try @ 061db448 with catch @ 061db3b0
                       catch() { ... } // from try @ 061db4a4 with catch @ 061db3b0
                       catch() { ... } // from try @ 061db4ec with catch @ 061db3b0 */
                  FUN_060fe980(0,0x3f800000,lVar8,0);
                  FUN_060feb14(0,0x3f800000,lVar8,0);
                  FUN_060feca8(0x41200000,0xc1200000,lVar8,0);
                  FUN_060fee3c(0x41a00000,0x41a00000,lVar8,0);
                  lVar8 = FUN_033d919c(lVar9,*(undefined8 *)puVar2);
                  if (lVar8 != 0) {
                    /* try { // try from 061db40c to 062db447 has its CatchHandler @ 061db4b0 */
                    FUN_060fe980(0x3f000000,0x3f000000,lVar8,0);
                    FUN_060feb14(0x3f000000,0x3f000000,lVar8,0);
                    if (DAT_06bb435f == '\0') {
                    /* try { // try from 061db448 to 062db49f has its CatchHandler @ 061db3b0 */
                      FUN_02f08768(PTR_DAT_067c9848);
                      DAT_06bb435f = '\x01';
                    }
                    FUN_060feca8(**(undefined4 **)(*(long *)PTR_DAT_067c9848 + 0xb8),
                                 (*(undefined4 **)(*(long *)PTR_DAT_067c9848 + 0xb8))[1],lVar8,0);
                    FUN_060fee3c(0x41a00000,0x41a00000,lVar8,0);
                    lVar8 = FUN_033d919c(lVar10,*(undefined8 *)puVar2);
                    if (lVar8 != 0) {
                    /* try { // try from 061db4a0 to 062db4a3 has its CatchHandler @ 061db4ac */
                    /* try { // try from 061db4a4 to 062db4cb has its CatchHandler @ 061db3b0 */
                      FUN_060fe980(0,0,lVar8,0);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 061db4a0 with catch @ 061db4ac
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 061db40c with catch @ 061db4b0
                        */
                      FUN_060feb14(0x3f800000,0x3f800000,lVar8,0);
                    /* try { // try from 061db4cc to 062db4cf has its CatchHandler @ 061db4e0 */
                      FUN_060ff244(0x41b80000,0x3f800000,lVar8,0);
                    /* catch() { ... } // from try @ 061db4cc with catch @ 061db4e0 */
                    /* try { // try from 061db4e4 to 062db4eb has its CatchHandler @ 061db4f4 */
                      UnityEngine_UIElements_DataBindingManager_HierarchyBindingTracker__Dispose
                                (0xc0a00000,0xc0000000,lVar8,0);
                      return lVar6;
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


