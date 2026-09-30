/*
FUNCTION_NAME: UnitySourceGeneratedAssemblyMonoScriptTypes_v1$$.ctor
ENTRY_POINT: 0702e634
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_13;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_13
*/


/* WARNING: Removing unreachable block (ram,0x0702f584) */
/* WARNING: Removing unreachable block (ram,0x0702f360) */
/* WARNING: Removing unreachable block (ram,0x0702f594) */
/* WARNING: Removing unreachable block (ram,0x0702f0d8) */
/* WARNING: Removing unreachable block (ram,0x0702f480) */

void UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  char cVar23;
  long unaff_x19;
  undefined4 uVar24;
  float fVar25;
  int iStack0000000000000020;
  uint uStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  long in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  undefined1 *in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000088;
  long in_stack_00000090;
  undefined8 *in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  undefined8 in_stack_000000c8;
  
  FUN_06eaa264(&stack0x000000c4,param_2,0);
  in_stack_00000058 = 0;
  in_stack_00000060 = &stack0x000000c4;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_03c37834();
  lVar12 = in_stack_000000b8;
  if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar11 = FUN_071c0684(lVar12,0,0);
  puVar3 = PTR_DAT_079ff4c8;
  if ((uVar11 & 1) != 0) {
    if (in_stack_000000b8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(int *)(in_stack_000000b8 + 0x2c) == 1) goto LAB_0702f538;
  }
  if (*(int *)(*(long *)PTR_DAT_079ff4c8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar12 = FUN_07030244();
  if ((lVar12 == 0) || (bVar6 = FUN_06fb47c0(lVar12,0,0), (bVar6 & in_stack_000000b8 != 0) != 1)) {
    lVar13 = 0;
  }
  else {
    lVar13 = FUN_0701a7cc(in_stack_000000b8,0);
  }
  lVar15 = in_stack_000000b8;
  if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar11 = FUN_071c0684(lVar15,0,0);
  if ((uVar11 & 1) == 0) {
    bVar5 = false;
  }
  else {
    if (in_stack_000000b8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    bVar5 = *(char *)(in_stack_000000b8 + 0x4c) != '\0';
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  bVar6 = FUN_070348c4();
  if (lVar13 == 0) {
LAB_0702ecec:
    iStack0000000000000020 = -1;
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    plVar14 = (long *)thunk_FUN_03652da4(lVar12,0);
    lVar15 = *(long *)puVar3;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar15 = *(long *)puVar3;
    }
    **(undefined1 **)(lVar15 + 0xb8) = 0;
    puVar2 = PTR_DAT_079f4610;
    if (*(int *)(lVar13 + 0x18) < 1) goto LAB_0702ecec;
    bVar1 = false;
    iVar10 = 0;
    iStack0000000000000020 = -1;
    do {
      lVar15 = FUN_0459ed6c(lVar13,iVar10,*(undefined8 *)PTR_DAT_07a299c8);
      if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar11 = FUN_071c24dc(lVar15,0,0);
      if ((uVar11 & 1) == 0) {
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar11 = FUN_071bc988(lVar15,0);
        if ((uVar11 & 1) != 0) {
          FUN_03c37834(lVar15,&stack0x000000b0,
                       *(undefined8 *)Zenject_FactoryFromBinderBase_<>c__DisplayClass33_0_TypeInfo);
          lVar19 = in_stack_000000b0;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          plVar16 = (long *)FUN_07030244(lVar15,lVar19);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          plVar17 = (long *)thunk_FUN_03652da4(plVar16,0);
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          uVar11 = FUN_05e31434(plVar17,plVar14,0);
          if ((uVar11 & 1) == 0) {
            uVar9 = (**(code **)(*plVar16 + 0x188))(plVar16,*(undefined8 *)(*plVar16 + 400));
            lVar19 = in_stack_000000b0;
            if ((uVar9 >> 1 & 1) == 0) {
              lVar19 = FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4a08,5);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)OVRPlugin_OVRP_1_62_0_TypeInfo;
              thunk_FUN_036b7ad0();
              uVar22 = thunk_FUN_071c6398(lVar15,0);
              if ((*(uint *)(lVar19 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar19 + 0x28) = uVar22;
              thunk_FUN_036b7ad0();
              if (*(uint *)(lVar19 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar19 + 0x30) = *(undefined8 *)OVRPlugin_OVRP_1_60_0_TypeInfo;
              thunk_FUN_036b7ad0();
              plVar16 = (long *)thunk_FUN_03652da4(lVar12,0);
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar22 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
              if ((*(uint *)(lVar19 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar19 + 0x38) = uVar22;
              thunk_FUN_036b7ad0();
              if (*(uint *)(lVar19 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar19 + 0x40) = *(undefined8 *)OVRPlugin_OVRP_1_65_0_TypeInfo;
              thunk_FUN_036b7ad0();
              uVar22 = FUN_05c98834(lVar19,0);
              if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              FUN_07176120(uVar22,0);
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              uVar11 = FUN_071c24dc(lVar19,0,0);
              if ((uVar11 & 1) == 0) {
                if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(in_stack_000000b0 + 0x2c) == 1) {
                  lVar15 = *(long *)puVar3;
                  if (*(int *)(lVar15 + 0xe4) == 0) {
                    thunk_FUN_036a1978();
                    lVar15 = *(long *)puVar3;
                  }
                  bVar8 = **(byte **)(lVar15 + 0xb8);
                  bVar7 = FUN_070349a4();
                  **(byte **)(*(long *)puVar3 + 0xb8) = bVar8 | bVar7 & 1;
                  if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  bVar5 = (bool)(bVar5 | *(char *)(in_stack_000000b0 + 0x4c) != '\0');
                  iStack0000000000000020 = iVar10;
                  goto LAB_0702ecc4;
                }
              }
              uVar22 = thunk_FUN_071c6398(lVar15,0);
              if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              in_stack_00000038 =
                   CONCAT44(in_stack_00000038._4_4_,*(undefined4 *)(in_stack_000000b0 + 0x2c));
              uVar20 = thunk_FUN_0367fa58(*(undefined8 *)
                                           System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualSByte_TypeInfo
                                          ,&stack0x00000038);
              uVar20 = FUN_05c8e390(*(undefined8 *)OVRPlugin_OVRP_1_64_0_TypeInfo,uVar20,0);
              uVar22 = FUN_05c9872c(*(undefined8 *)OVRPlugin_OVRP_1_5_0_TypeInfo,uVar22,
                                    *(undefined8 *)PTR_DAT_079f73b0,uVar20,0);
              if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              FUN_07176120(uVar22,0);
            }
          }
          else {
            lVar19 = FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4a08,9);
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            if (*(int *)(lVar19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)OVRPlugin_OVRP_1_58_0_TypeInfo;
            thunk_FUN_036b7ad0();
            uVar22 = thunk_FUN_071c6398(lVar15,0);
            if ((*(uint *)(lVar19 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            *(undefined8 *)(lVar19 + 0x28) = uVar22;
            thunk_FUN_036b7ad0();
            if (*(uint *)(lVar19 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            *(undefined8 *)(lVar19 + 0x30) = *(undefined8 *)OVRPlugin_OVRP_1_66_0_TypeInfo;
            thunk_FUN_036b7ad0();
            if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar22 = (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
            if ((*(uint *)(lVar19 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            *(undefined8 *)(lVar19 + 0x38) = uVar22;
            thunk_FUN_036b7ad0();
            if (*(uint *)(lVar19 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            *(undefined8 *)(lVar19 + 0x40) = *(undefined8 *)OVRPlugin_OVRP_1_59_0_TypeInfo;
            thunk_FUN_036b7ad0();
            uVar22 = thunk_FUN_071c6398();
            if (*(uint *)(lVar19 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            *(undefined8 *)(lVar19 + 0x48) = uVar22;
            thunk_FUN_036b7ad0();
            if (*(uint *)(lVar19 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            *(undefined8 *)(lVar19 + 0x50) = *(undefined8 *)OVRPlugin_OVRP_1_63_0_TypeInfo;
            thunk_FUN_036b7ad0();
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar22 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
            if ((*(uint *)(lVar19 + 0x18) & 0xfffffff8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            *(undefined8 *)(lVar19 + 0x58) = uVar22;
            thunk_FUN_036b7ad0();
            if (*(uint *)(lVar19 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            *(undefined8 *)(lVar19 + 0x60) = *(undefined8 *)OVRPlugin_OVRP_1_61_0_TypeInfo;
            thunk_FUN_036b7ad0();
            uVar22 = FUN_05c98834(lVar19,0);
            if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            FUN_07176120(uVar22,0);
          }
        }
      }
      else {
        bVar1 = true;
      }
LAB_0702ecc4:
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(lVar13 + 0x18));
    if (bVar1) {
      if (in_stack_000000b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_0701ac3c(in_stack_000000b8,0);
    }
  }
  if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar15 = FUN_06e88224(0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_06e81fa4(lVar15);
  if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_044b6190(&stack0x00000038,*(long *)(lVar15 + 0x10),
               *(undefined8 *)OVRPlugin_OVRP_1_57_0_TypeInfo);
  bVar1 = false;
  in_stack_00000098 = in_stack_00000040;
  in_stack_00000090 = in_stack_00000038;
  in_stack_000000a8 = in_stack_00000050;
  in_stack_000000a0 = in_stack_00000048;
  in_stack_00000038 = 0;
  in_stack_00000040 = &stack0x00000090;
  while (uVar11 = FUN_05863e1c(&stack0x00000090,*(undefined8 *)OVRPlugin_OVRP_1_55_1_TypeInfo),
        lVar19 = in_stack_000000a8, (uVar11 & 1) != 0) {
    in_stack_00000088 = in_stack_000000a8;
    if (in_stack_000000a8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar11 = FUN_06e81af8(in_stack_000000a8,0);
    if ((uVar11 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_07034a70();
      if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar24 = FUN_06e88084(0);
      fVar25 = (float)FUN_06e880e8(0);
      if (fVar25 < 1.0) {
        if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar24 = FUN_06e880e8(0);
      }
      FUN_07186cac(uVar24,uVar24,0);
      bVar1 = true;
    }
    uVar22 = in_stack_000000c8;
    in_stack_00000028 = 0;
    in_stack_00000030 = (undefined8 *)0x0;
    FUN_0702f8d8(&stack0x00000028,in_stack_000000c8);
    in_stack_00000070 = in_stack_00000028;
    in_stack_00000028 = 0;
    in_stack_00000078 = in_stack_00000030;
    in_stack_00000030 = &stack0x00000070;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_0702f9e8();
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar18 = FUN_0703032c(*(undefined8 *)(lVar12 + 0x138));
    uVar11 = FUN_06e81af8(lVar19,0);
    if ((uVar11 & 1) != 0) {
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      *(long *)(lVar18 + 0x1a0) = lVar19;
      thunk_FUN_036b7ad0(lVar18 + 0x1a0,lVar19);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_07034bf4(lVar18,&stack0x00000088);
      UnityEngine_Rendering_OcclusionCullingCommon__RenderDebugOccluderOverlay(lVar15,lVar19);
      if (*(int *)(*(long *)UnityEngine_UIElements_IMGUIContainer_UxmlFactory_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_036a1978();
      }
      FUN_07034f8c();
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_07030898();
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    *(byte *)(lVar18 + 0x192) = **(byte **)(*(long *)puVar3 + 0xb8) | *(byte *)(lVar18 + 0x192);
    uVar11 = FUN_06e81af8(lVar19,0);
    bVar8 = bVar6;
    if ((uVar11 & 1) != 0) {
      bVar8 = FUN_06e85ddc(lVar19,0);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar19 = FUN_0702e180();
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if ((bVar8 & *(char *)(lVar19 + 0x4d) != '\0') == 0) {
LAB_0702f074:
      cVar23 = '\0';
    }
    else {
      uVar20 = FUN_07174e44();
      if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar11 = FUN_071c24dc(uVar20,0,0);
      if (((uVar11 & 1) == 0) ||
         ((iVar10 = FUN_071742bc(), iVar10 != 1 && (iVar10 = FUN_071742bc(), iVar10 != 8))))
      goto LAB_0702f074;
      cVar23 = *(char *)(lVar18 + 0x18e);
    }
    lVar19 = *(long *)puVar3;
    *(bool *)(lVar18 + 0x1ad) = bVar5;
    *(bool *)(lVar18 + 0x195) = cVar23 != '\0';
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_070310a4(uVar22,lVar18);
    if (*(int *)(*(long *)PTR_DAT_079ff470 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_070376b0(in_stack_00000030);
    if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar11 = FUN_06e81af8(in_stack_00000088,0);
    if ((uVar11 & 1) != 0) {
      if (*(int *)(*(long *)UnityEngine_UIElements_IMGUIContainer_UxmlFactory_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_036a1978();
      }
      FUN_0703505c();
    }
    if (iStack0000000000000020 != -1) {
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (0 < *(int *)(lVar13 + 0x18)) {
        iVar10 = 0;
        do {
          lVar19 = FUN_0459ed6c(lVar13,iVar10,*(undefined8 *)PTR_DAT_07a299c8);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar11 = FUN_071bc988(lVar19,0);
          if ((uVar11 & 1) != 0) {
            FUN_03c37834(lVar19,&stack0x00000068,
                         *(undefined8 *)Zenject_FactoryFromBinderBase_<>c__DisplayClass33_0_TypeInfo
                        );
            lVar18 = in_stack_00000068;
            if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar11 = FUN_071c0684(lVar18,0,0);
            lVar18 = in_stack_00000068;
            if ((uVar11 & 1) != 0) {
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              lVar18 = FUN_07030244(lVar19,lVar18);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar21 = FUN_0703032c(*(undefined8 *)(lVar18 + 0x138));
              lVar18 = in_stack_00000088;
              if (in_stack_00000088 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar11 = FUN_06e81af8(in_stack_00000088,0);
              if ((uVar11 & 1) != 0) {
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                *(long *)(lVar21 + 0x1a0) = lVar18;
                thunk_FUN_036b7ad0(lVar21 + 0x1a0,lVar18);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_036a1978();
                }
                FUN_07034bf4(lVar21,&stack0x00000088);
              }
              lVar4 = in_stack_00000068;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              FUN_07030898(lVar19,lVar4,0,uStack0000000000000024 & 1,lVar21);
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              *(long *)(lVar21 + 0xd8) = lVar19;
              thunk_FUN_036b7ad0((long *)(lVar21 + 0xd8),lVar19);
              *(long *)(lVar21 + 0x230) = unaff_x19;
              thunk_FUN_036b7ad0(lVar21 + 0x230);
              if (in_stack_00000068 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar22 = FUN_0701a6b8(in_stack_00000068,0);
              FUN_07034a70(uVar22,lVar18);
              uVar22 = in_stack_000000c8;
              in_stack_00000028 = 0;
              in_stack_00000030 = (undefined8 *)0x0;
              FUN_0702f8d8(&stack0x00000028,in_stack_000000c8,lVar19);
              lVar18 = in_stack_00000068;
              in_stack_00000070 = in_stack_00000028;
              in_stack_00000028 = 0;
              in_stack_00000078 = in_stack_00000030;
              in_stack_00000030 = &stack0x00000070;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              FUN_0702f9e8(lVar19,lVar18);
              FUN_07030898(lVar19,in_stack_00000068,iStack0000000000000020 == iVar10,
                           uStack0000000000000024 & 1,lVar21);
              *(bool *)(lVar21 + 0x1ad) = bVar5;
              *(bool *)(lVar21 + 0x195) = cVar23 != '\0';
              UnityEngine_Rendering_OcclusionCullingCommon__RenderDebugOccluderOverlay
                        (lVar15,*(undefined8 *)(lVar21 + 0x1a0),lVar19,0);
              FUN_070310a4(uVar22,lVar21);
              if (*(int *)(*(long *)PTR_DAT_079ff470 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              FUN_070376b0(in_stack_00000030);
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(lVar13 + 0x18));
      }
    }
  }
  FUN_05863e18(in_stack_00000040,*(undefined8 *)OVRPlugin_OVRP_1_55_0_TypeInfo);
  if (in_stack_00000038 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c00();
  }
  if (bVar1) {
    if (*(int *)(*(long *)UnityEngine_TextCore_LanguageDirection_TypeInfo + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar22 = FUN_06e90b60(0);
    if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_06e88360(uVar22);
    if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_071ff388(&stack0x000000c8,uVar22,0);
    FUN_071ff238(&stack0x000000c8,0);
    FUN_06e90ca0(uVar22,0);
  }
  if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_06e88288(0);
LAB_0702f538:
  lVar12 = in_stack_00000058;
  FUN_06eaa270(in_stack_00000060,0);
  if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c00(lVar12);
  }
  return;
}


