/*
FUNCTION_NAME: FUN_06fa32b0
ENTRY_POINT: 06fa32b0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06fa38c4) */
/* WARNING: Removing unreachable block (ram,0x06fa38d4) */

void FUN_06fa32b0(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 local_418;
  long **pplStack_410;
  long local_408;
  long *local_400;
  undefined1 auStack_3f8 [200];
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_260 [304];
  undefined1 auStack_130 [200];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_07eeba2a & 1) == 0) {
    FUN_03642964(UnityEngine_UIElements_FocusInEvent_<>c_TypeInfo);
    FUN_03642964(SlideShowScrollViewPro_FadeCanvas_<FadeInNow>d__8_TypeInfo);
    FUN_03642964(System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo);
    FUN_03642964(System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo);
    FUN_03642964(SlideShowScrollViewPro_FadeCanvas_<FadeOutNow>d__7_TypeInfo);
    FUN_03642964(OVR_OpenVR_RenderModel_ControllerMode_State_t_TypeInfo);
    FUN_03642964(PTR_DAT_079f4598);
    FUN_03642964(UnityEngine_UIElements_FocusOutEvent_<>c_TypeInfo);
    FUN_03642964(FineUniverse_SpiderSense_SpiderSenseRecording_TypeInfo);
    FUN_03642964(UnityEngine_PostProcessing_FogComponent_Uniforms_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_FocusEvent_<>c_TypeInfo);
    FUN_03642964(Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_Foldout_UxmlFactory_TypeInfo);
    FUN_03642964(UnityEngine_TextCore_Text_FontAsset_<>c_TypeInfo);
    FUN_03642964(Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_FontDefinition_PropertyBag_TypeInfo);
    FUN_03642964(UnityEngine_TextCore_Text_FontFeatureTable_<>c_TypeInfo);
    DAT_07eeba2a = 1;
  }
  local_408 = 0;
  local_400 = (long *)0x0;
  memset(auStack_130,0,200);
  memset(auStack_260,0,0x130);
  if (param_2 == 0) {
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    local_400 = (long *)FUN_03eb3b14(param_2,*(undefined8 *)
                                              UnityEngine_UIElements_FontDefinition_PropertyBag_TypeInfo
                                     ,&local_408,*(undefined8 *)(param_1 + 0xe0),
                                     *(undefined8 *)
                                      UnityEngine_TextCore_Text_FontFeatureTable_<>c_TypeInfo,0x3e,
                                     *(undefined8 *)
                                      UnityEngine_PostProcessing_FogComponent_Uniforms_TypeInfo);
    pplStack_410 = &local_400;
    local_418 = 0;
    if (param_3 == 0) {
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
    }
    else {
      lVar5 = FUN_06fa1008(param_3,*(undefined8 *)
                                    SlideShowScrollViewPro_FadeCanvas_<FadeOutNow>d__7_TypeInfo);
      lVar6 = FUN_06fa1008(param_3,*(undefined8 *)
                                    System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo
                          );
      lVar7 = FUN_06fa1008(param_3,*(undefined8 *)
                                    SlideShowScrollViewPro_FadeCanvas_<FadeInNow>d__8_TypeInfo);
      uVar8 = FUN_06fa1008(param_3,*(undefined8 *)
                                    System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo
                          );
      plVar4 = local_400;
      if (lVar7 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
      }
      else if (lVar5 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
      }
      else {
        auVar15 = FUN_06fc3a48(lVar5,0);
        puVar3 = FineUniverse_SpiderSense_SpiderSenseRecording_TypeInfo;
        if (plVar4 == (long *)0x0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
        }
        else {
          lVar11 = *plVar4;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) ==
                  *(long *)FineUniverse_SpiderSense_SpiderSenseRecording_TypeInfo) {
                puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_06fa350c;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_0367cd30(plVar4,*(long *)
                                        FineUniverse_SpiderSense_SpiderSenseRecording_TypeInfo,0);
LAB_06fa350c:
          (*(code *)*puVar9)(plVar4,auVar15._0_8_,auVar15._8_8_,0,2,puVar9[1]);
          plVar4 = local_400;
          auVar15 = FUN_06fc3b5c(lVar5,0);
          if (plVar4 == (long *)0x0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
          }
          else {
            lVar5 = *plVar4;
            uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                  puVar9 = (undefined8 *)(lVar5 + (long)(*piVar13 + 4) * 0x10 + 0x138);
                  goto LAB_06fa3594;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar9 = (undefined8 *)FUN_0367cd30(plVar4,*(long *)puVar3,4);
LAB_06fa3594:
            (*(code *)*puVar9)(plVar4,auVar15._0_8_,auVar15._8_8_,1,puVar9[1]);
            uVar1 = *(undefined4 *)(lVar7 + 0x198);
            uVar14 = *(undefined8 *)(param_1 + 0xd8);
            if (*(int *)(*(long *)Sirenix_Utilities_EmitUtilities_<>c__DisplayClass5_0_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            FUN_070083ec(&local_330,uVar14,lVar6,lVar7,uVar8,uVar1,0);
            memcpy(auStack_130,&local_330,200);
            if (lVar6 == 0) {
              if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
            }
            else {
              uStack_328 = *(undefined8 *)(param_1 + 0xc0);
              local_330 = *(undefined8 *)(param_1 + 0xb8);
              uStack_318 = *(undefined8 *)(param_1 + 0xd0);
              uStack_320 = *(undefined8 *)(param_1 + 200);
              uVar8 = *(undefined8 *)(lVar6 + 0x18);
              uVar14 = *(undefined8 *)(lVar6 + 0x20);
              if (*(int *)(*(long *)UnityEngine_UIElements_FocusEvent_<>c_TypeInfo + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              memcpy(auStack_3f8,auStack_130,200);
              uStack_438 = uStack_328;
              local_440 = local_330;
              uStack_428 = uStack_318;
              uStack_430 = uStack_320;
              FUN_071fcf74(auStack_260,uVar8,uVar14,auStack_3f8,&local_440,0);
              lVar5 = local_408;
              auVar16 = FUN_06f175c4(param_2,auStack_260,0);
              plVar4 = local_400;
              lVar6 = local_408;
              if (lVar5 == 0) {
                if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
              }
              else {
                *(undefined1 (*) [12])(lVar5 + 0x10) = auVar16;
                if (local_408 == 0) {
                  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                }
                else if (local_400 == (long *)0x0) {
                  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                }
                else {
                  lVar5 = *local_400;
                  uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) ==
                          *(long *)OVR_OpenVR_RenderModel_ControllerMode_State_t_TypeInfo) {
                        puVar9 = (undefined8 *)(lVar5 + (long)(*piVar13 + 9) * 0x10 + 0x138);
                        goto LAB_06fa36e4;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar9 = (undefined8 *)
                           FUN_0367cd30(local_400,
                                        *(long *)
                                         OVR_OpenVR_RenderModel_ControllerMode_State_t_TypeInfo,9);
LAB_06fa36e4:
                  (*(code *)*puVar9)(plVar4,lVar6 + 0x10,puVar9[1]);
                  plVar4 = local_400;
                  puVar3 = UnityEngine_TextCore_Text_FontAsset_<>c_TypeInfo;
                  lVar5 = *(long *)UnityEngine_TextCore_Text_FontAsset_<>c_TypeInfo;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_036a1978();
                    lVar5 = *(long *)puVar3;
                  }
                  puVar9 = *(undefined8 **)(lVar5 + 0xb8);
                  lVar6 = puVar9[1];
                  if (lVar6 == 0) {
                    if (*(int *)(lVar5 + 0xe4) == 0) {
                      thunk_FUN_036a1978();
                      puVar9 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
                    }
                    uVar8 = *puVar9;
                    lVar6 = thunk_FUN_0367fe20(*(undefined8 *)
                                                UnityEngine_UIElements_FocusInEvent_<>c_TypeInfo);
                    UnityEngine_Pool_CollectionPool<object,_KeyValuePair<int,_object>>___cctor
                              (lVar6,uVar8,
                               *(undefined8 *)UnityEngine_UIElements_Foldout_UxmlFactory_TypeInfo,0)
                    ;
                    plVar10 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
                    *plVar10 = lVar6;
                    thunk_FUN_036b7ad0(plVar10,lVar6);
                  }
                  if (plVar4 == (long *)0x0) {
                    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03642c18();
                    }
                  }
                  else {
                    lVar5 = *plVar4;
                    lVar7 = *(long *)UnityEngine_UIElements_FocusOutEvent_<>c_TypeInfo;
                    uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar12 != 0) {
                      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar13 + -2) == *(long *)(lVar7 + 0x20)) {
                          lVar5 = lVar5 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar7 + 0x50)) *
                                          0x10 + 0x138;
                          goto LAB_06fa37d8;
                        }
                        uVar12 = uVar12 - 1;
                        piVar13 = piVar13 + 4;
                      } while (uVar12 != 0);
                    }
                    lVar5 = FUN_0367cd30(plVar4);
LAB_06fa37d8:
                    lVar5 = thunk_FUN_03661d64(*(undefined8 *)(lVar5 + 8),lVar7);
                    (**(code **)(lVar5 + 8))(plVar4,lVar6,lVar5);
                    plVar4 = local_400;
                    if (local_400 != (long *)0x0) {
                      lVar5 = *local_400;
                      uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
                      if (uVar12 != 0) {
                        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_079f4598) {
                            puVar9 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
                            goto LAB_06fa385c;
                          }
                          uVar12 = uVar12 - 1;
                          piVar13 = piVar13 + 4;
                        } while (uVar12 != 0);
                      }
                      puVar9 = (undefined8 *)FUN_0367cd30(local_400,*(long *)PTR_DAT_079f4598,0);
LAB_06fa385c:
                      (*(code *)*puVar9)(plVar4,puVar9[1]);
                    }
                    if (*(long *)(lVar2 + 0x28) == local_68) {
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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


