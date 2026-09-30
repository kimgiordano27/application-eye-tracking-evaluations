/*
FUNCTION_NAME: FUN_0702e458
ENTRY_POINT: 0702e458
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0702f584) */
/* WARNING: Removing unreachable block (ram,0x0702f360) */
/* WARNING: Removing unreachable block (ram,0x0702f594) */
/* WARNING: Removing unreachable block (ram,0x0702f0d8) */
/* WARNING: Removing unreachable block (ram,0x0702f480) */

void FUN_0702e458(undefined8 param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  char cVar22;
  undefined4 uVar23;
  float fVar24;
  int local_120;
  undefined8 local_118;
  undefined8 *puStack_110;
  long local_108;
  long *plStack_100;
  undefined8 local_f8;
  long *plStack_f0;
  long local_e8;
  undefined1 *local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long *local_b8;
  long local_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *local_98;
  long local_90;
  long local_88;
  undefined1 local_7c [4];
  undefined8 local_78;
  
  puVar2 = UnityEngine_Rendering_FSRUtils_ShaderConstants_TypeInfo;
  local_78 = param_1;
  if ((DAT_07eebdd3 & 1) == 0) {
    FUN_03642964(System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualSByte_TypeInfo);
    FUN_03642964(PTR_DAT_079ff470);
    FUN_03642964(UnityEngine_TextCore_LanguageDirection_TypeInfo);
    FUN_03642964(Zenject_FactoryFromBinderBase_<>c__DisplayClass33_0_TypeInfo);
    FUN_03642964(PTR_DAT_079f4540);
    FUN_03642964(OVRPlugin_OVRP_1_55_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_55_1_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_56_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_57_0_TypeInfo);
    FUN_03642964(PTR_DAT_07a299c0);
    FUN_03642964(PTR_DAT_07a299c8);
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(UnityEngine_Rendering_FSRUtils_ShaderConstants_TypeInfo);
    FUN_03642964(PTR_DAT_07a006b0);
    FUN_03642964(PTR_DAT_079f4a08);
    FUN_03642964(PTR_DAT_079ff4c8);
    FUN_03642964(OVR_OpenVR_IVRCompositor__Submit_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_IMGUIContainer_UxmlFactory_TypeInfo);
    FUN_03642964(TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo);
    FUN_03642964(PTR_DAT_079f73b0);
    FUN_03642964(OVRPlugin_OVRP_1_58_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_59_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_5_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_60_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_61_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_62_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_63_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_64_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_65_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_66_0_TypeInfo);
    DAT_07eebdd3 = 1;
  }
  local_7c[0] = 0;
  local_90 = 0;
  local_88 = 0;
  local_b8 = (long *)0x0;
  plStack_a8 = (long *)0x0;
  local_b0 = 0;
  local_98 = (long *)0x0;
  uStack_a0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_d8 = 0;
  uVar11 = FUN_03e682bc(2,*(undefined8 *)puVar2);
  FUN_06eaa264(local_7c,uVar11,0);
  local_e8 = 0;
  local_e0 = local_7c;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_03c37834(param_2,&local_88,
               *(undefined8 *)Zenject_FactoryFromBinderBase_<>c__DisplayClass33_0_TypeInfo);
  lVar13 = local_88;
  if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar12 = FUN_071c0684(lVar13,0,0);
  lVar13 = local_88;
  puVar2 = PTR_DAT_079ff4c8;
  if ((uVar12 & 1) != 0) {
    if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(int *)(local_88 + 0x2c) == 1) goto LAB_0702f538;
  }
  if (*(int *)(*(long *)PTR_DAT_079ff4c8 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar13 = FUN_07030244(param_2,lVar13);
  if ((lVar13 == 0) || (bVar6 = FUN_06fb47c0(lVar13,0,0), (bVar6 & local_88 != 0) != 1)) {
    lVar14 = 0;
  }
  else {
    lVar14 = FUN_0701a7cc(local_88,0);
  }
  lVar16 = local_88;
  if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar12 = FUN_071c0684(lVar16,0,0);
  if ((uVar12 & 1) == 0) {
    bVar4 = false;
  }
  else {
    if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    bVar4 = *(char *)(local_88 + 0x4c) != '\0';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  bVar6 = FUN_070348c4();
  if (lVar14 == 0) {
LAB_0702ecec:
    local_120 = -1;
  }
  else {
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    plVar15 = (long *)thunk_FUN_03652da4(lVar13,0);
    lVar16 = *(long *)puVar2;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar16 = *(long *)puVar2;
    }
    **(undefined1 **)(lVar16 + 0xb8) = 0;
    puVar1 = PTR_DAT_079f4610;
    if (*(int *)(lVar14 + 0x18) < 1) goto LAB_0702ecec;
    bVar5 = false;
    iVar10 = 0;
    local_120 = -1;
    do {
      lVar16 = FUN_0459ed6c(lVar14,iVar10,*(undefined8 *)PTR_DAT_07a299c8);
      if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar12 = FUN_071c24dc(lVar16,0,0);
      if ((uVar12 & 1) == 0) {
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar12 = FUN_071bc988(lVar16,0);
        if ((uVar12 & 1) != 0) {
          FUN_03c37834(lVar16,&local_90,
                       *(undefined8 *)Zenject_FactoryFromBinderBase_<>c__DisplayClass33_0_TypeInfo);
          lVar19 = local_90;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          plVar17 = (long *)FUN_07030244(lVar16,lVar19);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          plVar18 = (long *)thunk_FUN_03652da4(plVar17,0);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          uVar12 = FUN_05e31434(plVar18,plVar15,0);
          if ((uVar12 & 1) == 0) {
            uVar9 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
            lVar19 = local_90;
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
              uVar11 = thunk_FUN_071c6398(lVar16,0);
              if ((*(uint *)(lVar19 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar19 + 0x28) = uVar11;
              thunk_FUN_036b7ad0();
              if (*(uint *)(lVar19 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar19 + 0x30) = *(undefined8 *)OVRPlugin_OVRP_1_60_0_TypeInfo;
              thunk_FUN_036b7ad0();
              plVar17 = (long *)thunk_FUN_03652da4(lVar13,0);
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar11 = (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
              if ((*(uint *)(lVar19 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar19 + 0x38) = uVar11;
              thunk_FUN_036b7ad0();
              if (*(uint *)(lVar19 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar19 + 0x40) = *(undefined8 *)OVRPlugin_OVRP_1_65_0_TypeInfo;
              thunk_FUN_036b7ad0();
              uVar11 = FUN_05c98834(lVar19,0);
              if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              FUN_07176120(uVar11,0);
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              uVar12 = FUN_071c24dc(lVar19,0,0);
              if ((uVar12 & 1) == 0) {
                if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                if (*(int *)(local_90 + 0x2c) == 1) {
                  lVar16 = *(long *)puVar2;
                  if (*(int *)(lVar16 + 0xe4) == 0) {
                    thunk_FUN_036a1978();
                    lVar16 = *(long *)puVar2;
                  }
                  bVar8 = **(byte **)(lVar16 + 0xb8);
                  bVar7 = FUN_070349a4();
                  **(byte **)(*(long *)puVar2 + 0xb8) = bVar8 | bVar7 & 1;
                  if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03642c18();
                  }
                  bVar4 = (bool)(bVar4 | *(char *)(local_90 + 0x4c) != '\0');
                  local_120 = iVar10;
                  goto LAB_0702ecc4;
                }
              }
              uVar11 = thunk_FUN_071c6398(lVar16,0);
              if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              local_108 = CONCAT44(local_108._4_4_,*(undefined4 *)(local_90 + 0x2c));
              uVar21 = thunk_FUN_0367fa58(*(undefined8 *)
                                           System_Linq_Expressions_Interpreter_NotEqualInstruction_NotEqualSByte_TypeInfo
                                          ,&local_108);
              uVar21 = FUN_05c8e390(*(undefined8 *)OVRPlugin_OVRP_1_64_0_TypeInfo,uVar21,0);
              uVar11 = FUN_05c9872c(*(undefined8 *)OVRPlugin_OVRP_1_5_0_TypeInfo,uVar11,
                                    *(undefined8 *)PTR_DAT_079f73b0,uVar21,0);
              if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              FUN_07176120(uVar11,0);
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
            uVar11 = thunk_FUN_071c6398(lVar16,0);
            if ((*(uint *)(lVar19 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            *(undefined8 *)(lVar19 + 0x28) = uVar11;
            thunk_FUN_036b7ad0();
            if (*(uint *)(lVar19 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            *(undefined8 *)(lVar19 + 0x30) = *(undefined8 *)OVRPlugin_OVRP_1_66_0_TypeInfo;
            thunk_FUN_036b7ad0();
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar11 = (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
            if ((*(uint *)(lVar19 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            *(undefined8 *)(lVar19 + 0x38) = uVar11;
            thunk_FUN_036b7ad0();
            if (*(uint *)(lVar19 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            *(undefined8 *)(lVar19 + 0x40) = *(undefined8 *)OVRPlugin_OVRP_1_59_0_TypeInfo;
            thunk_FUN_036b7ad0();
            uVar11 = thunk_FUN_071c6398(param_2,0);
            if (*(uint *)(lVar19 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            *(undefined8 *)(lVar19 + 0x48) = uVar11;
            thunk_FUN_036b7ad0();
            if (*(uint *)(lVar19 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            *(undefined8 *)(lVar19 + 0x50) = *(undefined8 *)OVRPlugin_OVRP_1_63_0_TypeInfo;
            thunk_FUN_036b7ad0();
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            uVar11 = (**(code **)(*plVar15 + 0x1b8))(plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
            if ((*(uint *)(lVar19 + 0x18) & 0xfffffff8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            *(undefined8 *)(lVar19 + 0x58) = uVar11;
            thunk_FUN_036b7ad0();
            if (*(uint *)(lVar19 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            *(undefined8 *)(lVar19 + 0x60) = *(undefined8 *)OVRPlugin_OVRP_1_61_0_TypeInfo;
            thunk_FUN_036b7ad0();
            uVar11 = FUN_05c98834(lVar19,0);
            if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            FUN_07176120(uVar11,0);
          }
        }
      }
      else {
        bVar5 = true;
      }
LAB_0702ecc4:
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(lVar14 + 0x18));
    if (bVar5) {
      if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_0701ac3c(local_88,0);
    }
  }
  if (local_88 == 0) {
    bVar5 = true;
  }
  else {
    bVar5 = *(char *)(local_88 + 0x5b) != '\0';
  }
  if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar16 = FUN_06e88224(0);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_06e81fa4(lVar16,param_2,bVar5,0);
  if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_044b6190(&local_108,*(long *)(lVar16 + 0x10),*(undefined8 *)OVRPlugin_OVRP_1_57_0_TypeInfo);
  bVar5 = false;
  plStack_a8 = plStack_100;
  local_b0 = local_108;
  local_98 = plStack_f0;
  uStack_a0 = local_f8;
  local_108 = 0;
  plStack_100 = &local_b0;
  while (uVar12 = FUN_05863e1c(&local_b0,*(undefined8 *)OVRPlugin_OVRP_1_55_1_TypeInfo),
        plVar15 = local_98, (uVar12 & 1) != 0) {
    local_b8 = local_98;
    if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    bVar8 = *(byte *)(*(long *)OVR_OpenVR_IVRCompositor__Submit_TypeInfo + 0x130);
    if (*(byte *)(*local_98 + 0x130) < bVar8) {
      plVar17 = (long *)0x0;
    }
    else {
      plVar17 = local_98;
      if (*(long *)(*(long *)(*local_98 + 200) + (ulong)bVar8 * 8 + -8) !=
          *(long *)OVR_OpenVR_IVRCompositor__Submit_TypeInfo) {
        plVar17 = (long *)0x0;
      }
    }
    uVar12 = FUN_06e81af8(local_98,0);
    if ((uVar12 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_07034a70(param_2,plVar15);
      if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar23 = FUN_06e88084(0);
      fVar24 = (float)FUN_06e880e8(0);
      if (fVar24 < 1.0) {
        if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar23 = FUN_06e880e8(0);
      }
      FUN_07186cac(uVar23,uVar23,0);
      bVar5 = true;
    }
    uVar11 = local_78;
    local_118 = 0;
    puStack_110 = (undefined8 *)0x0;
    FUN_0702f8d8(&local_118,local_78,param_2);
    lVar19 = local_88;
    local_d0 = local_118;
    local_118 = 0;
    uStack_c8 = puStack_110;
    puStack_110 = &local_d0;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_0702f9e8(param_2,lVar19);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar19 = FUN_0703032c(*(undefined8 *)(lVar13 + 0x138),param_2,local_88);
    uVar12 = FUN_06e81af8(plVar15,0);
    if ((uVar12 & 1) != 0) {
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      *(long **)(lVar19 + 0x1a0) = plVar15;
      thunk_FUN_036b7ad0(lVar19 + 0x1a0,plVar15);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_07034bf4(lVar19,&local_b8);
      UnityEngine_Rendering_OcclusionCullingCommon__RenderDebugOccluderOverlay
                (lVar16,plVar15,param_2,0);
      if (*(int *)(*(long *)UnityEngine_UIElements_IMGUIContainer_UxmlFactory_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_036a1978();
      }
      FUN_07034f8c(param_2,plVar17);
    }
    lVar20 = local_88;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_07030898(param_2,lVar20,local_120 == -1,param_3 & 1,lVar19);
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    *(byte *)(lVar19 + 0x192) = **(byte **)(*(long *)puVar2 + 0xb8) | *(byte *)(lVar19 + 0x192);
    uVar12 = FUN_06e81af8(plVar15,0);
    bVar8 = bVar6;
    if ((uVar12 & 1) != 0) {
      bVar8 = FUN_06e85ddc(plVar15,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar20 = FUN_0702e180();
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if ((bVar8 & *(char *)(lVar20 + 0x4d) != '\0') == 0) {
LAB_0702f074:
      cVar22 = '\0';
    }
    else {
      uVar21 = FUN_07174e44(param_2,0);
      if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar12 = FUN_071c24dc(uVar21,0,0);
      if (((uVar12 & 1) == 0) ||
         ((iVar10 = FUN_071742bc(param_2,0), iVar10 != 1 &&
          (iVar10 = FUN_071742bc(param_2,0), iVar10 != 8)))) goto LAB_0702f074;
      cVar22 = *(char *)(lVar19 + 0x18e);
    }
    lVar20 = *(long *)puVar2;
    *(bool *)(lVar19 + 0x1ad) = bVar4;
    *(bool *)(lVar19 + 0x195) = cVar22 != '\0';
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_070310a4(uVar11,lVar19);
    if (*(int *)(*(long *)PTR_DAT_079ff470 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_070376b0(puStack_110);
    if (local_b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar12 = FUN_06e81af8(local_b8,0);
    if ((uVar12 & 1) != 0) {
      if (*(int *)(*(long *)UnityEngine_UIElements_IMGUIContainer_UxmlFactory_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_036a1978();
      }
      FUN_0703505c(param_2,plVar17);
    }
    if (local_120 != -1) {
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      if (0 < *(int *)(lVar14 + 0x18)) {
        iVar10 = 0;
        do {
          lVar19 = FUN_0459ed6c(lVar14,iVar10,*(undefined8 *)PTR_DAT_07a299c8);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          uVar12 = FUN_071bc988(lVar19,0);
          if ((uVar12 & 1) != 0) {
            FUN_03c37834(lVar19,&local_d8,
                         *(undefined8 *)Zenject_FactoryFromBinderBase_<>c__DisplayClass33_0_TypeInfo
                        );
            lVar20 = local_d8;
            if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar12 = FUN_071c0684(lVar20,0,0);
            lVar20 = local_d8;
            if ((uVar12 & 1) != 0) {
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              lVar20 = FUN_07030244(lVar19,lVar20);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar20 = FUN_0703032c(*(undefined8 *)(lVar20 + 0x138),param_2,local_88);
              plVar15 = local_b8;
              if (local_b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar12 = FUN_06e81af8(local_b8,0);
              if ((uVar12 & 1) != 0) {
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                *(long **)(lVar20 + 0x1a0) = plVar15;
                thunk_FUN_036b7ad0(lVar20 + 0x1a0,plVar15);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_036a1978();
                }
                FUN_07034bf4(lVar20,&local_b8);
              }
              lVar3 = local_d8;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              FUN_07030898(lVar19,lVar3,0,param_3 & 1,lVar20);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              *(long *)(lVar20 + 0xd8) = lVar19;
              thunk_FUN_036b7ad0((long *)(lVar20 + 0xd8),lVar19);
              *(long *)(lVar20 + 0x230) = param_2;
              thunk_FUN_036b7ad0(lVar20 + 0x230,param_2);
              if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar11 = FUN_0701a6b8(local_d8,0);
              FUN_07034a70(uVar11,plVar15);
              uVar11 = local_78;
              local_118 = 0;
              puStack_110 = (undefined8 *)0x0;
              FUN_0702f8d8(&local_118,local_78,lVar19);
              lVar3 = local_d8;
              local_d0 = local_118;
              local_118 = 0;
              uStack_c8 = puStack_110;
              puStack_110 = &local_d0;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              FUN_0702f9e8(lVar19,lVar3);
              FUN_07030898(lVar19,local_d8,local_120 == iVar10,param_3 & 1,lVar20);
              *(bool *)(lVar20 + 0x1ad) = bVar4;
              *(bool *)(lVar20 + 0x195) = cVar22 != '\0';
              UnityEngine_Rendering_OcclusionCullingCommon__RenderDebugOccluderOverlay
                        (lVar16,*(undefined8 *)(lVar20 + 0x1a0),lVar19,0);
              FUN_070310a4(uVar11,lVar20);
              if (*(int *)(*(long *)PTR_DAT_079ff470 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              FUN_070376b0(puStack_110);
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(lVar14 + 0x18));
      }
    }
  }
  FUN_05863e18(plStack_100,*(undefined8 *)OVRPlugin_OVRP_1_55_0_TypeInfo);
  if (local_108 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c00();
  }
  if (bVar5) {
    if (*(int *)(*(long *)UnityEngine_TextCore_LanguageDirection_TypeInfo + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar11 = FUN_06e90b60(0);
    if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_06e88360(uVar11,param_2,0);
    if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_071ff388(&local_78,uVar11,0);
    FUN_071ff238(&local_78,0);
    FUN_06e90ca0(uVar11,0);
  }
  if (*(int *)(*(long *)TagLib_Mpeg4_IsoVisualSampleEntry_TypeInfo + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  FUN_06e88288(0);
LAB_0702f538:
  lVar13 = local_e8;
  FUN_06eaa270(local_e0,0);
  if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c00(lVar13);
  }
  return;
}


