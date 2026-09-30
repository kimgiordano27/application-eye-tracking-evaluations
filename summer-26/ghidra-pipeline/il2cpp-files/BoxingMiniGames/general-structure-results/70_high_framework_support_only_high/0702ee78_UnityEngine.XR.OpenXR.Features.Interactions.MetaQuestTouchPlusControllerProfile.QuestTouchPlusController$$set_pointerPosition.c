/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.MetaQuestTouchPlusControllerProfile.QuestTouchPlusController$$set_pointerPosition
ENTRY_POINT: 0702ee78
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0702f360) */
/* WARNING: Removing unreachable block (ram,0x0702f0d8) */
/* WARNING: Removing unreachable block (ram,0x0702f584) */
/* WARNING: Removing unreachable block (ram,0x0702f594) */
/* WARNING: Removing unreachable block (ram,0x0702f480) */

void UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchPlusControllerProfile_QuestTouchPlusController__set_pointerPosition
               (ulong param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  char cVar10;
  undefined8 unaff_x19;
  long *unaff_x20;
  undefined1 unaff_w21;
  long unaff_x22;
  undefined8 unaff_x25;
  long unaff_x26;
  float fVar11;
  float unaff_s9;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  int iStack0000000000000020;
  uint uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000088;
  long in_stack_000000a8;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c8;
  
  do {
    FUN_07186cac(param_1,param_2,0);
    do {
      uVar9 = in_stack_000000c8;
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
      lVar4 = FUN_0703032c(*(undefined8 *)(in_stack_00000018 + 0x138));
      uVar5 = FUN_06e81af8(unaff_x26,0);
      if ((uVar5 & 1) != 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        *(long *)(lVar4 + 0x1a0) = unaff_x26;
        thunk_FUN_036b7ad0(lVar4 + 0x1a0,unaff_x26);
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_07034bf4(lVar4,&stack0x00000088);
        UnityEngine_Rendering_OcclusionCullingCommon__RenderDebugOccluderOverlay
                  (unaff_x25,unaff_x26);
        if (*(int *)(*(long *)UnityEngine_UIElements_IMGUIContainer_UxmlFactory_TypeInfo + 0xe4) ==
            0) {
          thunk_FUN_036a1978();
        }
        FUN_07034f8c();
      }
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_07030898();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      *(byte *)(lVar4 + 0x192) = **(byte **)(*unaff_x20 + 0xb8) | *(byte *)(lVar4 + 0x192);
      uVar5 = FUN_06e81af8(unaff_x26,0);
      uVar2 = in_stack_00000010._4_4_;
      if ((uVar5 & 1) != 0) {
        uVar2 = FUN_06e85ddc(unaff_x26,0);
      }
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      lVar6 = FUN_0702e180();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if ((uVar2 & *(char *)(lVar6 + 0x4d) != '\0') == 0) {
LAB_0702f074:
        cVar10 = '\0';
      }
      else {
        uVar7 = FUN_07174e44();
        if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar5 = FUN_071c24dc(uVar7,0,0);
        if (((uVar5 & 1) == 0) ||
           ((iVar3 = FUN_071742bc(), iVar3 != 1 && (iVar3 = FUN_071742bc(), iVar3 != 8))))
        goto LAB_0702f074;
        cVar10 = *(char *)(lVar4 + 0x18e);
      }
      lVar6 = *unaff_x20;
      *(undefined1 *)(lVar4 + 0x1ad) = unaff_w21;
      *(bool *)(lVar4 + 0x195) = cVar10 != '\0';
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_070310a4(uVar9,lVar4);
      if (*(int *)(*(long *)PTR_DAT_079ff470 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_070376b0(in_stack_00000030);
      if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar5 = FUN_06e81af8(in_stack_00000088,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)UnityEngine_UIElements_IMGUIContainer_UxmlFactory_TypeInfo + 0xe4) ==
            0) {
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
          iVar3 = 0;
          do {
            lVar4 = FUN_0459ed6c();
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar5 = FUN_071bc988(lVar4,0);
            if ((uVar5 & 1) != 0) {
              FUN_03c37834(lVar4,&stack0x00000068,
                           *(undefined8 *)
                            Zenject_FactoryFromBinderBase_<>c__DisplayClass33_0_TypeInfo);
              lVar6 = in_stack_00000068;
              if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              uVar5 = FUN_071c0684(lVar6,0,0);
              lVar6 = in_stack_00000068;
              if ((uVar5 & 1) != 0) {
                if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                  thunk_FUN_036a1978();
                }
                lVar6 = FUN_07030244(lVar4,lVar6);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                lVar8 = FUN_0703032c(*(undefined8 *)(lVar6 + 0x138));
                lVar6 = in_stack_00000088;
                if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar5 = FUN_06e81af8(in_stack_00000088,0);
                if ((uVar5 & 1) != 0) {
                  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  *(long *)(lVar8 + 0x1a0) = lVar6;
                  thunk_FUN_036b7ad0(lVar8 + 0x1a0,lVar6);
                  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                    thunk_FUN_036a1978();
                  }
                  FUN_07034bf4(lVar8,&stack0x00000088);
                }
                lVar1 = in_stack_00000068;
                if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                  thunk_FUN_036a1978();
                }
                FUN_07030898(lVar4,lVar1,0,uStack0000000000000024 & 1,lVar8);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                *(long *)(lVar8 + 0xd8) = lVar4;
                thunk_FUN_036b7ad0((long *)(lVar8 + 0xd8),lVar4);
                *(undefined8 *)(lVar8 + 0x230) = unaff_x19;
                thunk_FUN_036b7ad0(lVar8 + 0x230);
                if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar9 = FUN_0701a6b8(in_stack_00000068,0);
                FUN_07034a70(uVar9,lVar6);
                uVar9 = in_stack_000000c8;
                in_stack_00000028 = 0;
                in_stack_00000030 = (undefined8 *)0x0;
                FUN_0702f8d8(&stack0x00000028,in_stack_000000c8,lVar4);
                lVar6 = in_stack_00000068;
                in_stack_00000070 = in_stack_00000028;
                in_stack_00000028 = 0;
                in_stack_00000078 = in_stack_00000030;
                in_stack_00000030 = &stack0x00000070;
                if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                  thunk_FUN_036a1978();
                }
                FUN_0702f9e8(lVar4,lVar6);
                FUN_07030898(lVar4,in_stack_00000068,iStack0000000000000020 == iVar3,
                             uStack0000000000000024 & 1,lVar8);
                *(undefined1 *)(lVar8 + 0x1ad) = unaff_w21;
                *(bool *)(lVar8 + 0x195) = cVar10 != '\0';
                UnityEngine_Rendering_OcclusionCullingCommon__RenderDebugOccluderOverlay
                          (unaff_x25,*(undefined8 *)(lVar8 + 0x1a0),lVar4,0);
                FUN_070310a4(uVar9,lVar8);
                if (*(int *)(*(long *)PTR_DAT_079ff470 + 0xe4) == 0) {
                  thunk_FUN_036a1978();
                }
                FUN_070376b0(in_stack_00000030);
              }
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(unaff_x22 + 0x18));
        }
      }
      uVar5 = FUN_05863e1c(&stack0x00000090,*(undefined8 *)OVRPlugin_OVRP_1_55_1_TypeInfo);
      unaff_x26 = in_stack_000000a8;
      if ((uVar5 & 1) == 0) {
        FUN_05863e18(in_stack_00000040,*(undefined8 *)OVRPlugin_OVRP_1_55_0_TypeInfo);
        if (in_stack_00000038 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c00();
        }
        if (*(int *)(*(long *)UnityEngine_TextCore_LanguageDirection_TypeInfo + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar9 = FUN_06e90b60(0);
        if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_06e88360(uVar9);
        if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_071ff388(&stack0x000000c8,uVar9,0);
        FUN_071ff238(&stack0x000000c8,0);
        FUN_06e90ca0(uVar9,0);
        if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_06e88288(0);
        lVar4 = in_stack_00000058;
        FUN_06eaa270(in_stack_00000060,0);
        if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c00(lVar4);
        }
        return;
      }
      in_stack_00000088 = in_stack_000000a8;
      if (in_stack_000000a8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar5 = FUN_06e81af8(in_stack_000000a8,0);
    } while ((uVar5 & 1) == 0);
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_07034a70();
    if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    param_2 = FUN_06e88084(0);
    fVar11 = (float)FUN_06e880e8(0);
    if (fVar11 < unaff_s9) {
      if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      param_2 = FUN_06e880e8(0);
    }
    param_1 = (ulong)param_2;
  } while( true );
}


