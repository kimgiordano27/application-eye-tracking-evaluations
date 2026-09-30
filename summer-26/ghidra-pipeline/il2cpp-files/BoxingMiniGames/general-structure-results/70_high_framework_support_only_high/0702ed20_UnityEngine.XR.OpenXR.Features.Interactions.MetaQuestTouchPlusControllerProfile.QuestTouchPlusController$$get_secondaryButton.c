/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.MetaQuestTouchPlusControllerProfile.QuestTouchPlusController$$get_secondaryButton
ENTRY_POINT: 0702ed20
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_20;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0702f584) */
/* WARNING: Removing unreachable block (ram,0x0702f360) */
/* WARNING: Removing unreachable block (ram,0x0702f594) */
/* WARNING: Removing unreachable block (ram,0x0702f0d8) */
/* WARNING: Removing unreachable block (ram,0x0702f480) */

void UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchPlusControllerProfile_QuestTouchPlusController__get_secondaryButton
               (void)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  char cVar12;
  int in_w8;
  undefined8 unaff_x19;
  long *unaff_x20;
  byte unaff_w21;
  long unaff_x22;
  undefined4 uVar13;
  float fVar14;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  int iStack0000000000000020;
  uint uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  long in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c8;
  
  if (in_w8 == 0) {
    thunk_FUN_036a1978();
  }
  lVar5 = FUN_06e88224(0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_06e81fa4(lVar5);
  if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_044b6190(&stack0x00000038,*(long *)(lVar5 + 0x10),
               *(undefined8 *)OVRPlugin_OVRP_1_57_0_TypeInfo);
  bVar1 = false;
  in_stack_00000098 = in_stack_00000040;
  in_stack_00000090 = in_stack_00000038;
  in_stack_000000a8 = in_stack_00000050;
  in_stack_000000a0 = in_stack_00000048;
  in_stack_00000038 = 0;
  in_stack_00000040 = &stack0x00000090;
  do {
    uVar6 = FUN_05863e1c(&stack0x00000090,*(undefined8 *)OVRPlugin_OVRP_1_55_1_TypeInfo);
    lVar8 = in_stack_000000a8;
    if ((uVar6 & 1) == 0) {
      FUN_05863e18(in_stack_00000040,*(undefined8 *)OVRPlugin_OVRP_1_55_0_TypeInfo);
      if (in_stack_00000038 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c00();
      }
      if (bVar1) {
        if (*(int *)(*(long *)UnityEngine_TextCore_LanguageDirection_TypeInfo + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar11 = FUN_06e90b60(0);
        if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_06e88360(uVar11);
        if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_071ff388(&stack0x000000c8,uVar11,0);
        FUN_071ff238(&stack0x000000c8,0);
        FUN_06e90ca0(uVar11,0);
      }
      if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_06e88288(0);
      lVar5 = in_stack_00000058;
      FUN_06eaa270(in_stack_00000060,0);
      if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c00(lVar5);
      }
      return;
    }
    in_stack_00000088 = in_stack_000000a8;
    if (in_stack_000000a8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar6 = FUN_06e81af8(in_stack_000000a8,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_07034a70();
      if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar13 = FUN_06e88084(0);
      fVar14 = (float)FUN_06e880e8(0);
      if (fVar14 < 1.0) {
        if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar13 = FUN_06e880e8(0);
      }
      FUN_07186cac(uVar13,uVar13,0);
      bVar1 = true;
    }
    uVar11 = in_stack_000000c8;
    in_stack_00000028 = 0;
    in_stack_00000030 = (undefined8 *)0x0;
    FUN_0702f8d8(&stack0x00000028,in_stack_000000c8);
    in_stack_00000070 = in_stack_00000028;
    in_stack_00000028 = 0;
    in_stack_00000078 = in_stack_00000030;
    in_stack_00000030 = &stack0x00000070;
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_0702f9e8();
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar7 = FUN_0703032c(*(undefined8 *)(in_stack_00000018 + 0x138));
    uVar6 = FUN_06e81af8(lVar8,0);
    if ((uVar6 & 1) != 0) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      *(long *)(lVar7 + 0x1a0) = lVar8;
      thunk_FUN_036b7ad0(lVar7 + 0x1a0,lVar8);
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_07034bf4(lVar7,&stack0x00000088);
      UnityEngine_Rendering_OcclusionCullingCommon__RenderDebugOccluderOverlay(lVar5,lVar8);
      if (*(int *)(*(long *)UnityEngine_UIElements_IMGUIContainer_UxmlFactory_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_036a1978();
      }
      FUN_07034f8c();
    }
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_07030898();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    *(byte *)(lVar7 + 0x192) = **(byte **)(*unaff_x20 + 0xb8) | *(byte *)(lVar7 + 0x192);
    uVar6 = FUN_06e81af8(lVar8,0);
    uVar3 = in_stack_00000010._4_4_;
    if ((uVar6 & 1) != 0) {
      uVar3 = FUN_06e85ddc(lVar8,0);
    }
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar8 = FUN_0702e180();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if ((uVar3 & *(char *)(lVar8 + 0x4d) != '\0') == 0) {
LAB_0702f074:
      cVar12 = '\0';
    }
    else {
      uVar9 = FUN_07174e44();
      if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar6 = FUN_071c24dc(uVar9,0,0);
      if (((uVar6 & 1) == 0) ||
         ((iVar4 = FUN_071742bc(), iVar4 != 1 && (iVar4 = FUN_071742bc(), iVar4 != 8))))
      goto LAB_0702f074;
      cVar12 = *(char *)(lVar7 + 0x18e);
    }
    lVar8 = *unaff_x20;
    *(byte *)(lVar7 + 0x1ad) = unaff_w21 & 1;
    *(bool *)(lVar7 + 0x195) = cVar12 != '\0';
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_070310a4(uVar11,lVar7);
    if (*(int *)(*(long *)PTR_DAT_079ff470 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_070376b0(in_stack_00000030);
    if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar6 = FUN_06e81af8(in_stack_00000088,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)UnityEngine_UIElements_IMGUIContainer_UxmlFactory_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_036a1978();
      }
      FUN_0703505c();
    }
    if (iStack0000000000000020 != -1) {
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (0 < *(int *)(unaff_x22 + 0x18)) {
        iVar4 = 0;
        do {
          lVar8 = FUN_0459ed6c();
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar6 = FUN_071bc988(lVar8,0);
          if ((uVar6 & 1) != 0) {
            FUN_03c37834(lVar8,&stack0x00000068,
                         *(undefined8 *)Zenject_FactoryFromBinderBase_<>c__DisplayClass33_0_TypeInfo
                        );
            lVar7 = in_stack_00000068;
            if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar6 = FUN_071c0684(lVar7,0,0);
            lVar7 = in_stack_00000068;
            if ((uVar6 & 1) != 0) {
              if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              lVar7 = FUN_07030244(lVar8,lVar7);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar10 = FUN_0703032c(*(undefined8 *)(lVar7 + 0x138));
              lVar7 = in_stack_00000088;
              if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar6 = FUN_06e81af8(in_stack_00000088,0);
              if ((uVar6 & 1) != 0) {
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                *(long *)(lVar10 + 0x1a0) = lVar7;
                thunk_FUN_036b7ad0(lVar10 + 0x1a0,lVar7);
                if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                  thunk_FUN_036a1978();
                }
                FUN_07034bf4(lVar10,&stack0x00000088);
              }
              lVar2 = in_stack_00000068;
              if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              FUN_07030898(lVar8,lVar2,0,uStack0000000000000024 & 1,lVar10);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              *(long *)(lVar10 + 0xd8) = lVar8;
              thunk_FUN_036b7ad0((long *)(lVar10 + 0xd8),lVar8);
              *(undefined8 *)(lVar10 + 0x230) = unaff_x19;
              thunk_FUN_036b7ad0(lVar10 + 0x230);
              if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar11 = FUN_0701a6b8(in_stack_00000068,0);
              FUN_07034a70(uVar11,lVar7);
              uVar11 = in_stack_000000c8;
              in_stack_00000028 = 0;
              in_stack_00000030 = (undefined8 *)0x0;
              FUN_0702f8d8(&stack0x00000028,in_stack_000000c8,lVar8);
              lVar7 = in_stack_00000068;
              in_stack_00000070 = in_stack_00000028;
              in_stack_00000028 = 0;
              in_stack_00000078 = in_stack_00000030;
              in_stack_00000030 = &stack0x00000070;
              if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              FUN_0702f9e8(lVar8,lVar7);
              FUN_07030898(lVar8,in_stack_00000068,iStack0000000000000020 == iVar4,
                           uStack0000000000000024 & 1,lVar10);
              *(byte *)(lVar10 + 0x1ad) = unaff_w21 & 1;
              *(bool *)(lVar10 + 0x195) = cVar12 != '\0';
              UnityEngine_Rendering_OcclusionCullingCommon__RenderDebugOccluderOverlay
                        (lVar5,*(undefined8 *)(lVar10 + 0x1a0),lVar8,0);
              FUN_070310a4(uVar11,lVar10);
              if (*(int *)(*(long *)PTR_DAT_079ff470 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              FUN_070376b0(in_stack_00000030);
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(unaff_x22 + 0x18));
      }
    }
  } while( true );
}


