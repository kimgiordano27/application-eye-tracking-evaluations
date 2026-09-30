/*
FUNCTION_NAME: OVRPlugin$$GetLayerTexture
ENTRY_POINT: 033724fc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetLayerTexture(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x19;
  long *unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x29;
  
  uVar5 = FUN_032e04b8();
  lVar6 = thunk_FUN_01c496e0(*unaff_x27);
  FUN_03313b6c(lVar6,0);
  *(undefined8 *)(lVar6 + 0x10) = uVar5;
  *(undefined4 *)(lVar6 + 0x18) = 6;
  lVar7 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar7 != 0) {
    if (5 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[9] = lVar6;
      uVar5 = FUN_032e04b8(*unaff_x29,0);
      lVar6 = thunk_FUN_01c496e0(*unaff_x27);
      FUN_03313b6c(lVar6,0);
      *(undefined8 *)(lVar6 + 0x10) = uVar5;
      *(undefined4 *)(lVar6 + 0x18) = 0xe;
      lVar7 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar7 == 0) goto LAB_03372a98;
      if (6 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[10] = lVar6;
        uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb80,0);
        lVar6 = thunk_FUN_01c496e0(*unaff_x27);
        FUN_03313b6c(lVar6,0);
        *(undefined8 *)(lVar6 + 0x10) = uVar5;
        *(undefined4 *)(lVar6 + 0x18) = 8;
        lVar7 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar7 == 0) goto LAB_03372a98;
        if (7 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[0xb] = lVar6;
          uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbe8,0);
          lVar6 = thunk_FUN_01c496e0(*unaff_x27);
          FUN_03313b6c(lVar6,0);
          *(undefined8 *)(lVar6 + 0x10) = uVar5;
          *(undefined4 *)(lVar6 + 0x18) = 10;
          lVar7 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*unaff_x19 + 0x40));
          if (lVar7 == 0) goto LAB_03372a98;
          if (8 < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[0xc] = lVar6;
            uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb88,0);
            lVar6 = thunk_FUN_01c496e0(*unaff_x27);
            FUN_03313b6c(lVar6,0);
            *(undefined8 *)(lVar6 + 0x10) = uVar5;
            *(undefined4 *)(lVar6 + 0x18) = 0xc;
            lVar7 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*unaff_x19 + 0x40));
            if (lVar7 == 0) goto LAB_03372a98;
            if (9 < *(uint *)(unaff_x19 + 3)) {
              unaff_x19[0xd] = lVar6;
              uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf0,0);
              lVar6 = thunk_FUN_01c496e0(*unaff_x27);
              FUN_03313b6c(lVar6,0);
              *(undefined8 *)(lVar6 + 0x10) = uVar5;
              *(undefined4 *)(lVar6 + 0x18) = 0x10;
              lVar7 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*unaff_x19 + 0x40));
              if (lVar7 == 0) goto LAB_03372a98;
              if (10 < *(uint *)(unaff_x19 + 3)) {
                unaff_x19[0xe] = lVar6;
                uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb90,0);
                lVar6 = thunk_FUN_01c496e0(*unaff_x27);
                FUN_03313b6c(lVar6,0);
                *(undefined8 *)(lVar6 + 0x10) = uVar5;
                *(undefined4 *)(lVar6 + 0x18) = 0x12;
                lVar7 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*unaff_x19 + 0x40));
                if (lVar7 == 0) goto LAB_03372a98;
                if (0xb < *(uint *)(unaff_x19 + 3)) {
                  unaff_x19[0xf] = lVar6;
                  uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf8,0);
                  lVar6 = thunk_FUN_01c496e0(*unaff_x27);
                  FUN_03313b6c(lVar6,0);
                  *(undefined8 *)(lVar6 + 0x10) = uVar5;
                  *(undefined4 *)(lVar6 + 0x18) = 0x14;
                  lVar7 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*unaff_x19 + 0x40));
                  if (lVar7 == 0) goto LAB_03372a98;
                  if (0xc < *(uint *)(unaff_x19 + 3)) {
                    unaff_x19[0x10] = lVar6;
                    uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbd0,0);
                    lVar6 = thunk_FUN_01c496e0(*unaff_x27);
                    FUN_03313b6c(lVar6,0);
                    *(undefined8 *)(lVar6 + 0x10) = uVar5;
                    *(undefined4 *)(lVar6 + 0x18) = 0x16;
                    lVar7 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*unaff_x19 + 0x40));
                    if (lVar7 == 0) goto LAB_03372a98;
                    if (0xd < *(uint *)(unaff_x19 + 3)) {
                      unaff_x19[0x11] = lVar6;
                      uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb78,0);
                      lVar6 = thunk_FUN_01c496e0(*unaff_x27);
                      FUN_03313b6c(lVar6,0);
                      *(undefined8 *)(lVar6 + 0x10) = uVar5;
                      *(undefined4 *)(lVar6 + 0x18) = 0x18;
                      lVar7 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*unaff_x19 + 0x40));
                      if (lVar7 == 0) goto LAB_03372a98;
                      if (0xe < *(uint *)(unaff_x19 + 3)) {
                        unaff_x19[0x12] = lVar6;
                        uVar5 = FUN_032e04b8(*unaff_x24,0);
                        lVar6 = thunk_FUN_01c496e0(*unaff_x27);
                        FUN_03313b6c(lVar6,0);
                        *(undefined8 *)(lVar6 + 0x10) = uVar5;
                        *(undefined4 *)(lVar6 + 0x18) = 0x1e;
                        lVar7 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*unaff_x19 + 0x40));
                        if (lVar7 == 0) goto LAB_03372a98;
                        if (0xf < *(uint *)(unaff_x19 + 3)) {
                          unaff_x19[0x13] = lVar6;
                          uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb68,0);
                          lVar6 = thunk_FUN_01c496e0(*unaff_x27);
                          FUN_03313b6c(lVar6,0);
                          *(undefined8 *)(lVar6 + 0x10) = uVar5;
                          *(undefined4 *)(lVar6 + 0x18) = 0x1a;
                          lVar7 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*unaff_x19 + 0x40));
                          if (lVar7 == 0) goto LAB_03372a98;
                          if (0x10 < *(uint *)(unaff_x19 + 3)) {
                            unaff_x19[0x14] = lVar6;
                            uVar5 = FUN_032e04b8(*unaff_x25,0);
                            lVar6 = thunk_FUN_01c496e0(*unaff_x27);
                            FUN_03313b6c(lVar6,0);
                            *(undefined8 *)(lVar6 + 0x10) = uVar5;
                            *(undefined4 *)(lVar6 + 0x18) = 0;
                            lVar7 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*unaff_x19 + 0x40));
                            if (lVar7 == 0) goto LAB_03372a98;
                            if (0x11 < *(uint *)(unaff_x19 + 3)) {
                              unaff_x19[0x15] = lVar6;
                              uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbe0,0);
                              lVar6 = thunk_FUN_01c496e0(*unaff_x27);
                              FUN_03313b6c(lVar6,0);
                              *(undefined8 *)(lVar6 + 0x10) = uVar5;
                              *(undefined4 *)(lVar6 + 0x18) = 0x27;
                              lVar7 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*unaff_x19 + 0x40));
                              if (lVar7 == 0) goto LAB_03372a98;
                              if (0x12 < *(uint *)(unaff_x19 + 3)) {
                                unaff_x19[0x16] = lVar6;
                                puVar2 = 
                                Method_System_Collections_Generic_List_Enumerator<EffectsBase_RegionManager_TextRegion>_MoveNext__
                                ;
                                *(long **)(*(long *)(*unaff_x22 + 0xb8) + 8) = unaff_x19;
                                puVar4 = 
                                Method_System_Collections_Generic_Dictionary_Enumerator<byte,_RemoteVoice>_Dispose__
                                ;
                                puVar3 = 
                                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<byte,_PhotonTeam>_get_Current__
                                ;
                                puVar1 = 
                                Method_System_Collections_Generic_List_Enumerator<BinaryStorageBuffer_Writer_Chunk>_get_Current__
                                ;
                                uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                FUN_02b65188(uVar5,0,*(undefined8 *)puVar1,0);
                                uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                FUN_025ec1d8(uVar8,uVar5,*(undefined8 *)puVar3);
                                *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = uVar8;
                                return;
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
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
LAB_03372a98:
  uVar5 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar5,0);
}


