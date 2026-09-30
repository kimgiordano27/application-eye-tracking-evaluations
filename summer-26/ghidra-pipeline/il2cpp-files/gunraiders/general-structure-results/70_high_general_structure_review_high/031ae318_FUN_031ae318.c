/*
FUNCTION_NAME: FUN_031ae318
ENTRY_POINT: 031ae318
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_17;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x031ae9c8) */

void FUN_031ae318(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  
  if ((DAT_04532473 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042344f0);
    FUN_01c5d288(OVR_OpenVR_IVRRenderModels__LoadIntoTextureD3D11_Async_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fa10);
    FUN_01c5d288(PTR_DAT_0422fce8);
    FUN_01c5d288(PTR_DAT_0422fce0);
    FUN_01c5d288(OVR_OpenVR_IVRScreenshots__HookScreenshot_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRScreenshots__RequestScreenshot_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRScreenshots__SubmitScreenshot_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRScreenshots__TakeStereoScreenshot_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRScreenshots__UpdateScreenshotProgress_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRSettings__GetBool_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRSettings__GetFloat_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRSettings__GetInt32_TypeInfo);
    DAT_04532473 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar6 = thunk_FUN_01c496e0();
    uVar10 = thunk_FUN_01c273e8(OVRControllerTest_TypeInfo);
    FUN_0323fc78(uVar6,uVar10,0);
    uVar10 = thunk_FUN_01c273e8(OVR_OpenVR_IVRSettings__GetSettingsErrorNameFromEnum_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar6,uVar10);
  }
  lVar3 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_042344f0);
  if ((param_5 & 1) == 0) {
    FUN_031edfd8(lVar3,0);
  }
  else {
    FUN_031ee00c(lVar3,0,param_3,param_4,0);
  }
  lVar4 = FUN_031e6a5c(param_2,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar5 = FUN_031d0918(lVar4,0);
  do {
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar6 = FUN_031d07ac(lVar4,0);
    uVar2 = FUN_032ae098(uVar6,0);
    if (uVar2 < 0x392bbe2b) {
      if (uVar2 < 0x25305254) {
        if (uVar2 == 0x16452edd) {
          uVar5 = thunk_FUN_03152714(uVar6,*(undefined8 *)OVR_OpenVR_IVRSettings__GetFloat_TypeInfo,
                                     0);
          if ((uVar5 & 1) != 0) {
            uVar6 = FUN_031e7d20(param_2,*(undefined8 *)OVR_OpenVR_IVRSettings__GetFloat_TypeInfo,0)
            ;
            *(undefined8 *)(param_1 + 0x58) = uVar6;
          }
        }
        else if ((uVar2 == 0x25305253) &&
                (uVar5 = thunk_FUN_03152714(uVar6,*(undefined8 *)
                                                                                                      
                                                  OVR_OpenVR_IVRScreenshots__UpdateScreenshotProgress_TypeInfo
                                            ,0), (uVar5 & 1) != 0)) {
          uVar6 = FUN_031e7d20(param_2,*(undefined8 *)
                                        OVR_OpenVR_IVRScreenshots__UpdateScreenshotProgress_TypeInfo
                               ,0);
          *(undefined8 *)(param_1 + 0x30) = uVar6;
        }
      }
      else if (uVar2 == 0x271ee529) {
        uVar5 = thunk_FUN_03152714(uVar6,*(undefined8 *)OVR_OpenVR_IVRSettings__GetInt32_TypeInfo,0)
        ;
        if ((uVar5 & 1) != 0) {
          uVar6 = FUN_031e7d20(param_2,*(undefined8 *)OVR_OpenVR_IVRSettings__GetInt32_TypeInfo,0);
          *(undefined8 *)(param_1 + 0x48) = uVar6;
        }
      }
      else if ((uVar2 == 0x392bbe2a) &&
              (uVar5 = thunk_FUN_03152714(uVar6,*(undefined8 *)
                                                 OVR_OpenVR_IVRScreenshots__TakeStereoScreenshot_TypeInfo
                                          ,0), (uVar5 & 1) != 0)) {
        uVar6 = FUN_031e7d20(param_2,*(undefined8 *)
                                      OVR_OpenVR_IVRScreenshots__TakeStereoScreenshot_TypeInfo,0);
        *(undefined8 *)(param_1 + 0x28) = uVar6;
      }
    }
    else if (uVar2 < 0x57ff969b) {
      if (uVar2 == 0x56a5f574) {
        uVar5 = thunk_FUN_03152714(uVar6,*(undefined8 *)
                                          OVR_OpenVR_IVRScreenshots__RequestScreenshot_TypeInfo,0);
        if ((uVar5 & 1) != 0) {
          uVar6 = FUN_031e7d20(param_2,*(undefined8 *)
                                        OVR_OpenVR_IVRScreenshots__RequestScreenshot_TypeInfo,0);
          FUN_031af4c0(param_1,uVar6);
        }
      }
      else if ((uVar2 == 0x57ff969a) &&
              (uVar5 = thunk_FUN_03152714(uVar6,*(undefined8 *)
                                                 OVR_OpenVR_IVRSettings__GetBool_TypeInfo,0),
              (uVar5 & 1) != 0)) {
        uVar6 = FUN_031e7d20(param_2,*(undefined8 *)OVR_OpenVR_IVRSettings__GetBool_TypeInfo,0);
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
        }
        uVar6 = FUN_032556a4(uVar6,0);
        plVar7 = (long *)thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_0422fce0);
        FUN_032253a8(plVar7,uVar6,0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        plVar8 = (long *)FUN_031ee06c(lVar3,plVar7,0,0,0);
        if (plVar8 == (long *)0x0) {
          *(undefined8 *)(param_1 + 0x40) = 0;
        }
        else {
          lVar11 = *(long *)OVR_OpenVR_IVRRenderModels__LoadIntoTextureD3D11_Async_TypeInfo;
          bVar1 = *(byte *)(lVar11 + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + ((ulong)bVar1 - 1) * 8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748();
          }
          *(long **)(param_1 + 0x40) = plVar8;
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + ((ulong)bVar1 - 1) * 8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748();
          }
        }
        if (plVar7 != (long *)0x0) {
          lVar11 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar5 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0422fce8) {
                puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_031ae8ac;
              }
              uVar5 = uVar5 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar5 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)PTR_DAT_0422fce8,0);
LAB_031ae8ac:
          (*(code *)*puVar9)(plVar7,puVar9[1]);
        }
      }
    }
    else if (uVar2 == 0xda183f20) {
      uVar5 = thunk_FUN_03152714(uVar6,*(undefined8 *)
                                        OVR_OpenVR_IVRScreenshots__SubmitScreenshot_TypeInfo,0);
      if ((uVar5 & 1) != 0) {
        uVar6 = FUN_031e7d20(param_2,*(undefined8 *)
                                      OVR_OpenVR_IVRScreenshots__SubmitScreenshot_TypeInfo,0);
        if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa10);
        }
        uVar6 = FUN_032556a4(uVar6,0);
        plVar7 = (long *)thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_0422fce0);
        FUN_032253a8(plVar7,uVar6,0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar6 = FUN_031ee06c(lVar3,plVar7,0,0,0);
        *(undefined8 *)(param_1 + 0x50) = uVar6;
        if (plVar7 != (long *)0x0) {
          lVar11 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar5 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0422fce8) {
                puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_031ae8fc;
              }
              uVar5 = uVar5 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar5 != 0);
          }
          puVar9 = (undefined8 *)FUN_01c72498(plVar7,*(long *)PTR_DAT_0422fce8,0);
LAB_031ae8fc:
          (*(code *)*puVar9)(plVar7,puVar9[1]);
        }
      }
    }
    else if ((uVar2 == 0x93d62477) &&
            (uVar5 = thunk_FUN_03152714(uVar6,*(undefined8 *)
                                               OVR_OpenVR_IVRScreenshots__HookScreenshot_TypeInfo,0)
            , (uVar5 & 1) != 0)) {
      FUN_031e7d20(param_2,*(undefined8 *)OVR_OpenVR_IVRScreenshots__HookScreenshot_TypeInfo,0);
    }
    uVar5 = FUN_031d0918(lVar4,0);
  } while( true );
}


