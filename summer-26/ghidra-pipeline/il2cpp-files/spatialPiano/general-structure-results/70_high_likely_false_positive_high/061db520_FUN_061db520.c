/*
FUNCTION_NAME: FUN_061db520
ENTRY_POINT: 061db520
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


long FUN_061db520(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  puVar2 = StringLiteral_2034;
  if ((DAT_06bcb5a9 & 1) == 0) {
    FUN_02f08768(StringLiteral_2034);
    FUN_02f08768(Unity_Properties_TypeConverter<short,_bool>_TypeInfo);
    FUN_02f08768(StringLiteral_2054);
    FUN_02f08768(PTR_DAT_067d0510);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000357_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__);
    FUN_02f08768(StringLiteral_2055);
    FUN_02f08768(StringLiteral_2039);
    FUN_02f08768(PTR_DAT_067ca1a8);
    FUN_02f08768(Method_System_Data_SqlTypes_SqlDecimal_get_IsPositive__);
    FUN_02f08768(StringLiteral_2040);
    FUN_02f08768(Method_System_Data_SqlTypes_SqlDecimal_op_Addition__);
    FUN_02f08768(PTR_DAT_067cbf00);
    FUN_02f08768(StringLiteral_2056);
    DAT_06bcb5a9 = 1;
  }
  puVar3 = Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__;
  puVar1 = PTR_DAT_067ca1a8;
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar5 = *(long *)puVar2;
  }
  uVar12 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 8);
  uVar13 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0xc);
  plVar6 = (long *)FUN_02f0880c(*(undefined8 *)puVar1,2);
  uVar11 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
  }
  lVar5 = FUN_050e4454(uVar11,0);
  if (plVar6 == (long *)0x0) goto LAB_061dbb24;
  if ((lVar5 != 0) &&
     (lVar7 = thunk_FUN_02f45174(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_061dbb2c:
    uVar11 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar11,0);
  }
  puVar3 = StringLiteral_2055;
  if ((int)plVar6[3] != 0) {
    plVar6[4] = lVar5;
    lVar5 = FUN_050e4454(*(undefined8 *)puVar3,0);
    if ((lVar5 != 0) &&
       (lVar7 = thunk_FUN_02f45174(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
    goto LAB_061dbb2c;
    puVar3 = StringLiteral_2056;
    if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
      plVar6[5] = lVar5;
      puVar4 = StringLiteral_2039;
      lVar5 = FUN_061d9110(uVar12,uVar13,*(undefined8 *)puVar3,plVar6);
      plVar6 = (long *)FUN_02f0880c(*(undefined8 *)puVar1,1);
      lVar7 = FUN_050e4454(*(undefined8 *)puVar4,0);
      if (plVar6 != (long *)0x0) {
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_02f45174(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
        goto LAB_061dbb2c;
        puVar3 = Method_System_Data_SqlTypes_SqlDecimal_get_IsPositive__;
        if ((int)plVar6[3] == 0) goto LAB_061dbb28;
        plVar6[4] = lVar7;
        lVar7 = UnityEngine_UIElements_StyleSheets_ShorthandApplicator__ApplyFlex
                          (*(undefined8 *)puVar3,lVar5,plVar6);
        plVar6 = (long *)FUN_02f0880c(*(undefined8 *)puVar1,1);
        lVar8 = FUN_050e4454(*(undefined8 *)puVar4,0);
        if (plVar6 != (long *)0x0) {
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_02f45174(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
          goto LAB_061dbb2c;
          puVar1 = StringLiteral_2040;
          if ((int)plVar6[3] == 0) goto LAB_061dbb28;
          plVar6[4] = lVar8;
          lVar8 = UnityEngine_UIElements_StyleSheets_ShorthandApplicator__ApplyFlex
                            (*(undefined8 *)puVar1,lVar5,plVar6);
          if ((lVar5 != 0) &&
             (plVar6 = (long *)FUN_033d919c(lVar5,*(undefined8 *)
                                                                                                      
                                                  Unity_Properties_TypeConverter<short,_bool>_TypeInfo
                                           ), puVar1 = StringLiteral_2054, plVar6 != (long *)0x0)) {
            FUN_061d9968(plVar6,*(undefined8 *)(param_1 + 0x10));
            FUN_061d9c54(plVar6,1);
            lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
            (**(code **)(*plVar6 + 0x2a8))
                      (*(undefined4 *)(lVar9 + 0x20),*(undefined4 *)(lVar9 + 0x24),
                       *(undefined4 *)(lVar9 + 0x28),*(undefined4 *)(lVar9 + 0x2c),plVar6,
                       *(undefined8 *)(*plVar6 + 0x2b0));
            lVar9 = FUN_033d919c(lVar5,*(undefined8 *)puVar1);
            FUN_061d9574();
            puVar2 = 
            UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000357_PostfixBurstDelegate_TypeInfo
            ;
            if (lVar8 != 0) {
              plVar6 = (long *)FUN_033d919c(lVar8,*(undefined8 *)
                                                                                                      
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000357_PostfixBurstDelegate_TypeInfo
                                           );
              if (plVar6 != (long *)0x0) {
                (**(code **)(*plVar6 + 0x5e8))
                          (plVar6,*(undefined8 *)PTR_DAT_067cbf00,*(undefined8 *)(*plVar6 + 0x5f0));
                FUN_063d5048(plVar6,0,0);
                FUN_061d9498(plVar6);
                if ((lVar7 != 0) &&
                   (plVar10 = (long *)FUN_033d919c(lVar7,*(undefined8 *)puVar2),
                   puVar2 = PTR_DAT_067d0510, plVar10 != (long *)0x0)) {
                  (**(code **)(*plVar10 + 0x5e8))
                            (plVar10,*(undefined8 *)
                                      Method_System_Data_SqlTypes_SqlDecimal_op_Addition__,
                             *(undefined8 *)(*plVar10 + 0x5f0));
                  FUN_063d5484(plVar10,2,0);
                  (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
                  (**(code **)(*plVar10 + 0x2a8))(plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
                  lVar8 = FUN_033d919c(lVar8,*(undefined8 *)puVar2);
                  if (DAT_06bb435f == '\0') {
                    FUN_02f08768(PTR_DAT_067c9848);
                    DAT_06bb435f = '\x01';
                  }
                  puVar1 = PTR_DAT_067c9848;
                  if (lVar8 != 0) {
                    FUN_060fe980(**(undefined4 **)(*(long *)PTR_DAT_067c9848 + 0xb8),
                                 (*(undefined4 **)(*(long *)PTR_DAT_067c9848 + 0xb8))[1],lVar8,0);
                    if (DAT_06bb8a4a == '\0') {
                      FUN_02f08768(PTR_DAT_067c9848);
                      DAT_06bb8a4a = '\x01';
                    }
                    FUN_060feb14(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
                                 *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),lVar8,0);
                    if (DAT_06bb435f == '\0') {
                      FUN_02f08768(PTR_DAT_067c9848);
                      DAT_06bb435f = '\x01';
                    }
                    FUN_060fee3c(**(undefined4 **)(*(long *)puVar1 + 0xb8),
                                 (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],lVar8,0);
                    FUN_060ff244(0x41200000,0x40c00000,lVar8,0);
                    UnityEngine_UIElements_DataBindingManager_HierarchyBindingTracker__Dispose
                              (0xc1200000,0xc0e00000,lVar8,0);
                    lVar7 = FUN_033d919c(lVar7,*(undefined8 *)puVar2);
                    if (DAT_06bb435f == '\0') {
                      FUN_02f08768(PTR_DAT_067c9848);
                      DAT_06bb435f = '\x01';
                    }
                    if (lVar7 != 0) {
                      FUN_060fe980(**(undefined4 **)(*(long *)puVar1 + 0xb8),
                                   (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],lVar7,0);
                      if (DAT_06bb8a4a == '\0') {
                        FUN_02f08768(PTR_DAT_067c9848);
                        DAT_06bb8a4a = '\x01';
                      }
                      FUN_060feb14(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
                                   *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),lVar7,0)
                      ;
                      if (DAT_06bb435f == '\0') {
                        FUN_02f08768(PTR_DAT_067c9848);
                        DAT_06bb435f = '\x01';
                      }
                      FUN_060fee3c(**(undefined4 **)(*(long *)puVar1 + 0xb8),
                                   (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],lVar7,0);
                      FUN_060ff244(0x41200000,0x40c00000,lVar7,0);
                      UnityEngine_UIElements_DataBindingManager_HierarchyBindingTracker__Dispose
                                (0xc1200000,0xc0e00000,lVar7,0);
                      if (lVar9 != 0) {
                        FUN_063b64ec(lVar9,plVar6,0);
                        FUN_063b6774(lVar9,plVar10,0);
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
LAB_061dbb24:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
LAB_061dbb28:
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


