/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature$$Native_StartDataAccess
ENTRY_POINT: 0702e734
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_17;validity_or_gating_hits_21;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_13
*/


/* WARNING: Removing unreachable block (ram,0x0702f584) */
/* WARNING: Removing unreachable block (ram,0x0702f360) */
/* WARNING: Removing unreachable block (ram,0x0702f594) */
/* WARNING: Removing unreachable block (ram,0x0702f0d8) */
/* WARNING: Removing unreachable block (ram,0x0702f480) */

void UnityEngine_XR_OpenXR_Features_RuntimeDebugger_RuntimeDebuggerOpenXRFeature__Native_StartDataAccess
               (undefined8 param_1)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  char cVar19;
  undefined8 unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined4 uVar20;
  float fVar21;
  uint uStack0000000000000014;
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
  long in_stack_000000b0;
  long in_stack_000000b8;
  undefined8 in_stack_000000c8;
  
  uVar9 = FUN_071c0684(param_1,0,0);
  if ((uVar9 & 1) == 0) {
    bVar5 = false;
  }
  else {
    if (in_stack_000000b8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    bVar5 = *(char *)(in_stack_000000b8 + 0x4c) != '\0';
  }
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uStack0000000000000014 = FUN_070348c4();
  if (unaff_x22 != 0) {
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    plVar10 = (long *)thunk_FUN_03652da4(unaff_x21,0);
    lVar11 = *unaff_x20;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar11 = *unaff_x20;
    }
    **(undefined1 **)(lVar11 + 0xb8) = 0;
    puVar3 = PTR_DAT_079f4610;
    if (0 < *(int *)(unaff_x22 + 0x18)) {
      bVar2 = false;
      iVar8 = 0;
      iStack0000000000000020 = -1;
      do {
        lVar11 = FUN_0459ed6c();
        if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar9 = FUN_071c24dc(lVar11,0,0);
        if ((uVar9 & 1) == 0) {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar9 = FUN_071bc988(lVar11,0);
          if ((uVar9 & 1) != 0) {
            FUN_03c37834(lVar11,&stack0x000000b0,
                         *(undefined8 *)Zenject_FactoryFromBinderBase_<>c__DisplayClass33_0_TypeInfo
                        );
            lVar15 = in_stack_000000b0;
            if (*(int *)(*unaff_x20 + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            plVar12 = (long *)FUN_07030244(lVar11,lVar15);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            plVar13 = (long *)thunk_FUN_03652da4(plVar12,0);
            if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar9 = FUN_05e31434(plVar13,plVar10,0);
            if ((uVar9 & 1) == 0) {
              uVar7 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
              lVar15 = in_stack_000000b0;
              if ((uVar7 >> 1 & 1) == 0) {
                lVar15 = FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4a08,5);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)OVRPlugin_OVRP_1_62_0_TypeInfo;
                thunk_FUN_036b7ad0();
                uVar18 = thunk_FUN_071c6398(lVar11,0);
                if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                *(undefined8 *)(lVar15 + 0x28) = uVar18;
                thunk_FUN_036b7ad0();
                if (*(uint *)(lVar15 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)OVRPlugin_OVRP_1_60_0_TypeInfo;
                thunk_FUN_036b7ad0();
                plVar12 = (long *)thunk_FUN_03652da4(unaff_x21,0);
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                uVar18 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
                if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                *(undefined8 *)(lVar15 + 0x38) = uVar18;
                thunk_FUN_036b7ad0();
                if (*(uint *)(lVar15 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c20();
                }
                *(undefined8 *)(lVar15 + 0x40) = *(undefined8 *)OVRPlugin_OVRP_1_65_0_TypeInfo;
                thunk_FUN_036b7ad0();
                uVar18 = FUN_05c98834(lVar15,0);
                if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
                  thunk_FUN_036a1978();
                }
                FUN_07176120(uVar18,0);
              }
              else {
                if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
                  thunk_FUN_036a1978();
                }
                uVar9 = FUN_071c24dc(lVar15,0,0);
                if ((uVar9 & 1) == 0) {
                  if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  if (*(int *)(in_stack_000000b0 + 0x2c) == 1) {
                    lVar11 = *unaff_x20;
                    if (*(int *)(lVar11 + 0xe4) == 0) {
                      thunk_FUN_036a1978();
                      lVar11 = *unaff_x20;
                    }
                    bVar1 = **(byte **)(lVar11 + 0xb8);
                    bVar6 = FUN_070349a4();
                    **(byte **)(*unaff_x20 + 0xb8) = bVar1 | bVar6 & 1;
                    if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03642c18();
                    }
                    bVar5 = (bool)(bVar5 | *(char *)(in_stack_000000b0 + 0x4c) != '\0');
                    iStack0000000000000020 = iVar8;
                    goto LAB_0702ecc4;
                  }
                }
                uVar18 = thunk_FUN_071c6398(lVar11,0);
                if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                in_stack_00000038 =
                     CONCAT44(in_stack_00000038._4_4_,*(undefined4 *)(in_stack_000000b0 + 0x2c));
                uVar16 = thunk_FUN_0367fa58(*(undefined8 *)
                                             System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualSByte_TypeInfo
                                            ,&stack0x00000038);
                uVar16 = FUN_05c8e390(*(undefined8 *)OVRPlugin_OVRP_1_64_0_TypeInfo,uVar16,0);
                uVar18 = FUN_05c9872c(*(undefined8 *)OVRPlugin_OVRP_1_5_0_TypeInfo,uVar18,
                                      *(undefined8 *)PTR_DAT_079f73b0,uVar16,0);
                if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
                  thunk_FUN_036a1978();
                }
                FUN_07176120(uVar18,0);
              }
            }
            else {
              lVar15 = FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4a08,9);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)OVRPlugin_OVRP_1_58_0_TypeInfo;
              thunk_FUN_036b7ad0();
              uVar18 = thunk_FUN_071c6398(lVar11,0);
              if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar15 + 0x28) = uVar18;
              thunk_FUN_036b7ad0();
              if (*(uint *)(lVar15 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)OVRPlugin_OVRP_1_66_0_TypeInfo;
              thunk_FUN_036b7ad0();
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar18 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
              if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar15 + 0x38) = uVar18;
              thunk_FUN_036b7ad0();
              if (*(uint *)(lVar15 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar15 + 0x40) = *(undefined8 *)OVRPlugin_OVRP_1_59_0_TypeInfo;
              thunk_FUN_036b7ad0();
              uVar18 = thunk_FUN_071c6398();
              if (*(uint *)(lVar15 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar15 + 0x48) = uVar18;
              thunk_FUN_036b7ad0();
              if (*(uint *)(lVar15 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar15 + 0x50) = *(undefined8 *)OVRPlugin_OVRP_1_63_0_TypeInfo;
              thunk_FUN_036b7ad0();
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar18 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
              if ((*(uint *)(lVar15 + 0x18) & 0xfffffff8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar15 + 0x58) = uVar18;
              thunk_FUN_036b7ad0();
              if (*(uint *)(lVar15 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar15 + 0x60) = *(undefined8 *)OVRPlugin_OVRP_1_61_0_TypeInfo;
              thunk_FUN_036b7ad0();
              uVar18 = FUN_05c98834(lVar15,0);
              if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              FUN_07176120(uVar18,0);
            }
          }
        }
        else {
          bVar2 = true;
        }
LAB_0702ecc4:
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(unaff_x22 + 0x18));
      if (bVar2) {
        if (in_stack_000000b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_0701ac3c(in_stack_000000b8,0);
      }
      goto LAB_0702ecf4;
    }
  }
  iStack0000000000000020 = -1;
LAB_0702ecf4:
  if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar11 = FUN_06e88224(0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_06e81fa4(lVar11);
  if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_044b6190(&stack0x00000038,*(long *)(lVar11 + 0x10),
               *(undefined8 *)OVRPlugin_OVRP_1_57_0_TypeInfo);
  bVar2 = false;
  in_stack_00000098 = in_stack_00000040;
  in_stack_00000090 = in_stack_00000038;
  in_stack_000000a8 = in_stack_00000050;
  in_stack_000000a0 = in_stack_00000048;
  in_stack_00000038 = 0;
  in_stack_00000040 = &stack0x00000090;
  do {
    uVar9 = FUN_05863e1c(&stack0x00000090,*(undefined8 *)OVRPlugin_OVRP_1_55_1_TypeInfo);
    lVar15 = in_stack_000000a8;
    if ((uVar9 & 1) == 0) {
      FUN_05863e18(in_stack_00000040,*(undefined8 *)OVRPlugin_OVRP_1_55_0_TypeInfo);
      if (in_stack_00000038 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c00();
      }
      if (bVar2) {
        if (*(int *)(*(long *)UnityEngine_TextCore_LanguageDirection_TypeInfo + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar18 = FUN_06e90b60(0);
        if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_06e88360(uVar18);
        if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_071ff388(&stack0x000000c8,uVar18,0);
        FUN_071ff238(&stack0x000000c8,0);
        FUN_06e90ca0(uVar18,0);
      }
      if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_06e88288(0);
      lVar11 = in_stack_00000058;
      FUN_06eaa270(in_stack_00000060,0);
      if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c00(lVar11);
      }
      return;
    }
    in_stack_00000088 = in_stack_000000a8;
    if (in_stack_000000a8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar9 = FUN_06e81af8(in_stack_000000a8,0);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_07034a70();
      if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar20 = FUN_06e88084(0);
      fVar21 = (float)FUN_06e880e8(0);
      if (fVar21 < 1.0) {
        if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar20 = FUN_06e880e8(0);
      }
      FUN_07186cac(uVar20,uVar20,0);
      bVar2 = true;
    }
    uVar18 = in_stack_000000c8;
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
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar14 = FUN_0703032c(*(undefined8 *)(unaff_x21 + 0x138));
    uVar9 = FUN_06e81af8(lVar15,0);
    if ((uVar9 & 1) != 0) {
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      *(long *)(lVar14 + 0x1a0) = lVar15;
      thunk_FUN_036b7ad0(lVar14 + 0x1a0,lVar15);
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_07034bf4(lVar14,&stack0x00000088);
      UnityEngine_Rendering_OcclusionCullingCommon__RenderDebugOccluderOverlay(lVar11,lVar15);
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
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    *(byte *)(lVar14 + 0x192) = **(byte **)(*unaff_x20 + 0xb8) | *(byte *)(lVar14 + 0x192);
    uVar9 = FUN_06e81af8(lVar15,0);
    uVar7 = uStack0000000000000014;
    if ((uVar9 & 1) != 0) {
      uVar7 = FUN_06e85ddc(lVar15,0);
    }
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar15 = FUN_0702e180();
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if ((uVar7 & *(char *)(lVar15 + 0x4d) != '\0') == 0) {
LAB_0702f074:
      cVar19 = '\0';
    }
    else {
      uVar16 = FUN_07174e44();
      if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar9 = FUN_071c24dc(uVar16,0,0);
      if (((uVar9 & 1) == 0) ||
         ((iVar8 = FUN_071742bc(), iVar8 != 1 && (iVar8 = FUN_071742bc(), iVar8 != 8))))
      goto LAB_0702f074;
      cVar19 = *(char *)(lVar14 + 0x18e);
    }
    lVar15 = *unaff_x20;
    *(bool *)(lVar14 + 0x1ad) = bVar5;
    *(bool *)(lVar14 + 0x195) = cVar19 != '\0';
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_070310a4(uVar18,lVar14);
    if (*(int *)(*(long *)PTR_DAT_079ff470 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_070376b0(in_stack_00000030);
    if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar9 = FUN_06e81af8(in_stack_00000088,0);
    if ((uVar9 & 1) != 0) {
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
        iVar8 = 0;
        do {
          lVar15 = FUN_0459ed6c();
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar9 = FUN_071bc988(lVar15,0);
          if ((uVar9 & 1) != 0) {
            FUN_03c37834(lVar15,&stack0x00000068,
                         *(undefined8 *)Zenject_FactoryFromBinderBase_<>c__DisplayClass33_0_TypeInfo
                        );
            lVar14 = in_stack_00000068;
            if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar9 = FUN_071c0684(lVar14,0,0);
            lVar14 = in_stack_00000068;
            if ((uVar9 & 1) != 0) {
              if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              lVar14 = FUN_07030244(lVar15,lVar14);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar17 = FUN_0703032c(*(undefined8 *)(lVar14 + 0x138));
              lVar14 = in_stack_00000088;
              if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar9 = FUN_06e81af8(in_stack_00000088,0);
              if ((uVar9 & 1) != 0) {
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                *(long *)(lVar17 + 0x1a0) = lVar14;
                thunk_FUN_036b7ad0(lVar17 + 0x1a0,lVar14);
                if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                  thunk_FUN_036a1978();
                }
                FUN_07034bf4(lVar17,&stack0x00000088);
              }
              lVar4 = in_stack_00000068;
              if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              FUN_07030898(lVar15,lVar4,0,uStack0000000000000024 & 1,lVar17);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              *(long *)(lVar17 + 0xd8) = lVar15;
              thunk_FUN_036b7ad0((long *)(lVar17 + 0xd8),lVar15);
              *(undefined8 *)(lVar17 + 0x230) = unaff_x19;
              thunk_FUN_036b7ad0(lVar17 + 0x230);
              if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar18 = FUN_0701a6b8(in_stack_00000068,0);
              FUN_07034a70(uVar18,lVar14);
              uVar18 = in_stack_000000c8;
              in_stack_00000028 = 0;
              in_stack_00000030 = (undefined8 *)0x0;
              FUN_0702f8d8(&stack0x00000028,in_stack_000000c8,lVar15);
              lVar14 = in_stack_00000068;
              in_stack_00000070 = in_stack_00000028;
              in_stack_00000028 = 0;
              in_stack_00000078 = in_stack_00000030;
              in_stack_00000030 = &stack0x00000070;
              if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              FUN_0702f9e8(lVar15,lVar14);
              FUN_07030898(lVar15,in_stack_00000068,iStack0000000000000020 == iVar8,
                           uStack0000000000000024 & 1,lVar17);
              *(bool *)(lVar17 + 0x1ad) = bVar5;
              *(bool *)(lVar17 + 0x195) = cVar19 != '\0';
              UnityEngine_Rendering_OcclusionCullingCommon__RenderDebugOccluderOverlay
                        (lVar11,*(undefined8 *)(lVar17 + 0x1a0),lVar15,0);
              FUN_070310a4(uVar18,lVar17);
              if (*(int *)(*(long *)PTR_DAT_079ff470 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              FUN_070376b0(in_stack_00000030);
            }
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(unaff_x22 + 0x18));
      }
    }
  } while( true );
}


