/*
FUNCTION_NAME: UnityEngine.Rendering.RenderGraphModule.RenderGraphPass$$get_enableFoveatedRasterization
ENTRY_POINT: 06ec8e04
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 104
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_6;strong_file_logging_hits_4;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x06ec907c) */

long UnityEngine_Rendering_RenderGraphModule_RenderGraphPass__get_enableFoveatedRasterization(void)

{
  bool bVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  undefined4 *puVar15;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined4 *puVar16;
  long lVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar24;
  long *in_stack_00000000;
  long in_stack_00000008;
  char in_stack_00000010;
  long in_stack_00000018;
  int in_stack_00000028;
  
  do {
    FUN_05b0f700(unaff_x20,unaff_x23,in_stack_00000018,*(undefined8 *)PTR_DAT_07df2d10);
    do {
      lVar9 = *in_stack_00000000;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07d89700) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06ec85e8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar3 = (undefined8 *)FUN_0377596c(in_stack_00000000,*(long *)PTR_DAT_07d89700,0);
LAB_06ec85e8:
      uVar12 = (*(code *)*puVar3)(in_stack_00000000,puVar3[1]);
      if ((uVar12 & 1) == 0) {
        if (in_stack_00000000 == (long *)0x0) {
          return unaff_x20;
        }
        lVar9 = *in_stack_00000000;
        uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar12 == 0)
        goto UnityEngine_Rendering_RenderGraphModule_RenderGraphPass__get_fragmentInputAccess;
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto UnityEngine_Rendering_RenderGraphModule_RenderGraphPass__set_colorBufferAccess;
      }
      lVar9 = *in_stack_00000000;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07df2c80) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06ec864c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar3 = (undefined8 *)FUN_0377596c(in_stack_00000000,*(long *)PTR_DAT_07df2c80,0);
LAB_06ec864c:
      unaff_x23 = (*(code *)*puVar3)(in_stack_00000000,puVar3[1]);
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
    } while (*(char *)(unaff_x23 + 0xcc) == '\0');
    in_stack_00000018 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07df2d38);
    FUN_045b8e84(in_stack_00000018,*(undefined8 *)PTR_DAT_07df2d30);
    lVar9 = FUN_075a73b4(unaff_x23,0);
    lVar17 = *(long *)(unaff_x23 + 0x58);
    if (lVar17 == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(undefined4 *)(lVar17 + 0x18);
    }
    lVar4 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d86ce0,uVar20);
    uVar12 = 0;
    puVar15 = (undefined4 *)(lVar17 + 0x28);
    puVar16 = (undefined4 *)(lVar4 + 0x28);
    while( true ) {
      iVar8 = 0;
      if (*(long *)(unaff_x23 + 0x58) != 0) {
        iVar8 = (int)*(undefined8 *)(*(long *)(unaff_x23 + 0x58) + 0x18);
      }
      if ((long)iVar8 <= (long)uVar12) break;
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (*(uint *)(lVar17 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar20 = puVar15[-1];
      uVar21 = *puVar15;
      FUN_075b8354(puVar15[-2],lVar9,0);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_07559a54();
      uVar18 = FUN_06ea709c();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      puVar16[-2] = uVar18;
      puVar16[-1] = uVar20;
      *puVar16 = uVar21;
      uVar12 = uVar12 + 1;
      puVar15 = puVar15 + 3;
      puVar16 = puVar16 + 3;
    }
    lVar10 = *(long *)(unaff_x23 + 0x28);
    if (lVar10 == 0) {
LAB_06ec8fcc:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar12 = 0;
LAB_06ec8760:
    if ((long)uVar12 < (long)(int)*(uint *)(lVar10 + 0x18)) {
      if (*(uint *)(lVar10 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      lVar10 = *(long *)(lVar10 + uVar12 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_07df2c58 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      if (in_stack_00000028 != 1) {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar6 = FUN_06ea46b4(lVar10,0);
        lVar11 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07df2520);
        FUN_06e9d7fc(lVar11,lVar4,uVar6,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar7 = FUN_06e9dda8(lVar11,0);
        if ((uVar7 & 1) == 0) goto LAB_06ec8d3c;
        uVar2 = 0;
        bVar1 = false;
        while( true ) {
          lVar5 = FUN_06ea4160(lVar10,0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          if (*(int *)(lVar5 + 0x18) <= (int)uVar2) break;
          if (bVar1) goto LAB_06ec8d20;
          lVar5 = FUN_06ea4160(lVar10,0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar14 = *(uint *)(lVar5 + (long)(int)uVar2 * 4 + 0x20);
          if (*(uint *)(lVar4 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar5 = lVar4 + (int)uVar14 * unaff_x22;
          fVar24 = *(float *)(lVar5 + 0x20);
          fVar22 = *(float *)(lVar5 + 0x24);
          fVar23 = *(float *)(lVar5 + 0x28);
          fVar19 = (float)FUN_075566a0();
          if (fVar23 <= fVar19) {
            bVar1 = false;
          }
          else {
            bVar1 = fVar22 < unaff_s14 &&
                    ((unaff_s12 <= fVar24 && fVar24 < unaff_s13) && unaff_s10 <= fVar22);
          }
          uVar2 = uVar2 + 1;
        }
        if (!bVar1) {
          uVar6 = FUN_06ea46b4(lVar10,0);
          uVar7 = UnityEngine_Rendering_MaterialQualityUtilities__GetClosestQuality
                            (lVar4,lVar11,uVar6,0);
          if ((uVar7 & 1) == 0) {
            uVar6 = FUN_06ea46b4(lVar10,0);
            uVar7 = UnityEngine_Rendering_MaterialQualityUtilities__GetClosestQuality
                              (lVar4,lVar11,uVar6,0);
            if ((uVar7 & 1) != 0) goto LAB_06ec8a84;
            uVar6 = FUN_06ea46b4(lVar10,0);
            uVar7 = UnityEngine_Rendering_MaterialQualityUtilities__GetClosestQuality
                              (lVar4,lVar11,uVar6,0);
            if ((uVar7 & 1) != 0) goto LAB_06ec8a84;
            uVar6 = FUN_06ea46b4(lVar10,0);
            uVar2 = UnityEngine_Rendering_MaterialQualityUtilities__GetClosestQuality
                              (lVar4,lVar11,uVar6,0);
          }
          else {
LAB_06ec8a84:
            uVar2 = 1;
          }
          uVar14 = 0;
          uVar2 = uVar2 & 1;
          break;
        }
        goto LAB_06ec8d20;
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar11 = *(long *)(lVar10 + 0x10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (*(uint *)(lVar4 + 0x18) <= *(uint *)(lVar11 + 0x20)) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      fVar22 = *(float *)(lVar4 + (int)*(uint *)(lVar11 + 0x20) * unaff_x22 + 0x28);
      fVar19 = (float)FUN_075566a0();
      if (fVar19 <= fVar22) {
        lVar11 = *(long *)(lVar10 + 0x10);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        if (*(uint *)(lVar4 + 0x18) <= *(uint *)(lVar11 + 0x20)) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        lVar11 = lVar4 + (int)*(uint *)(lVar11 + 0x20) * unaff_x22;
        fVar19 = *(float *)(lVar11 + 0x24);
        if ((((fVar19 < unaff_s14) && (fVar22 = *(float *)(lVar11 + 0x20), unaff_s12 <= fVar22)) &&
            (fVar22 < unaff_s13)) && (unaff_s10 <= fVar19)) {
          uVar2 = 1;
          while( true ) {
            lVar11 = FUN_06ea4160(lVar10,0);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            if (*(int *)(lVar11 + 0x18) <= (int)uVar2) break;
            lVar11 = FUN_06ea4160(lVar10,0);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            if (*(uint *)(lVar11 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            uVar14 = *(uint *)(lVar11 + (long)(int)uVar2 * 4 + 0x20);
            if (*(uint *)(lVar4 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            fVar22 = *(float *)(lVar4 + (int)uVar14 * unaff_x22 + 0x28);
            fVar19 = (float)FUN_075566a0();
            if (fVar22 < fVar19) goto LAB_06ec8d3c;
            if (*(uint *)(lVar4 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            lVar11 = lVar4 + (int)uVar14 * unaff_x22;
            fVar19 = *(float *)(lVar11 + 0x24);
            if (((unaff_s14 <= fVar19) || (fVar22 = *(float *)(lVar11 + 0x20), fVar22 < unaff_s12))
               || ((unaff_s13 <= fVar22 || (uVar2 = uVar2 + 1, fVar19 < unaff_s10))))
            goto LAB_06ec8d3c;
          }
          if (*(int *)(*(long *)PTR_DAT_07df2c58 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          if (in_stack_00000010 != '\0') {
            uVar6 = FUN_06ea4160(lVar10,0);
            FUN_06eaf5b0(lVar17,uVar6,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            FUN_075b8354(lVar9,0);
            uVar7 = FUN_06ea8bc8();
            if ((uVar7 & 1) != 0) goto LAB_06ec8d3c;
          }
          if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          FUN_045ba050(in_stack_00000018,lVar10,*(undefined8 *)PTR_DAT_07df2d28);
        }
      }
      goto LAB_06ec8d3c;
    }
    unaff_x20 = in_stack_00000008;
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
  } while( true );
LAB_06ec8a90:
  lVar11 = FUN_06ea46b4(lVar10,0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if ((uVar2 != 0) || (*(int *)(lVar11 + 0x18) <= (int)uVar14)) goto LAB_06ec8d1c;
  lVar11 = FUN_06ea46b4(lVar10,0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (*(uint *)(lVar11 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar5 = (long)(int)uVar14;
  if (*(uint *)(lVar4 + 0x18) <= *(uint *)(lVar11 + lVar5 * 8 + 0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
  lVar11 = FUN_06ea46b4(lVar10,0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (*(uint *)(lVar11 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
  if (*(uint *)(lVar4 + 0x18) <= *(uint *)(lVar11 + lVar5 * 8 + 0x24)) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
  uVar7 = FUN_06e9dcf4(0);
  if ((uVar7 & 1) == 0) {
    lVar11 = FUN_06ea46b4(lVar10,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(uint *)(lVar11 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    if (*(uint *)(lVar4 + 0x18) <= *(uint *)(lVar11 + lVar5 * 8 + 0x20)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    lVar11 = FUN_06ea46b4(lVar10,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(uint *)(lVar11 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    if (*(uint *)(lVar4 + 0x18) <= *(uint *)(lVar11 + lVar5 * 8 + 0x24)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    uVar7 = FUN_06e9dcf4(0);
    if ((uVar7 & 1) != 0) goto LAB_06ec8c74;
    lVar11 = FUN_06ea46b4(lVar10,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(uint *)(lVar11 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    if (*(uint *)(lVar4 + 0x18) <= *(uint *)(lVar11 + lVar5 * 8 + 0x20)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    lVar11 = FUN_06ea46b4(lVar10,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(uint *)(lVar11 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    if (*(uint *)(lVar4 + 0x18) <= *(uint *)(lVar11 + lVar5 * 8 + 0x24)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    uVar7 = FUN_06e9dcf4(0);
    if ((uVar7 & 1) != 0) goto LAB_06ec8c74;
    lVar11 = FUN_06ea46b4(lVar10,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(uint *)(lVar11 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    if (*(uint *)(lVar4 + 0x18) <= *(uint *)(lVar11 + lVar5 * 8 + 0x20)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    lVar11 = FUN_06ea46b4(lVar10,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(uint *)(lVar11 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    if (*(uint *)(lVar4 + 0x18) <= *(uint *)(lVar11 + lVar5 * 8 + 0x24)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    uVar7 = FUN_06e9dcf4(0);
    if ((uVar7 & 1) != 0) {
      uVar2 = 1;
    }
  }
  else {
LAB_06ec8c74:
    uVar2 = 1;
  }
  uVar14 = uVar14 + 1;
  goto LAB_06ec8a90;
LAB_06ec8d1c:
  if (uVar2 != 0) {
LAB_06ec8d20:
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_045ba050(in_stack_00000018,lVar10,*(undefined8 *)PTR_DAT_07df2d28);
  }
LAB_06ec8d3c:
  lVar10 = *(long *)(unaff_x23 + 0x28);
  uVar12 = uVar12 + 1;
  if (lVar10 == 0) goto LAB_06ec8fcc;
  goto LAB_06ec8760;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
UnityEngine_Rendering_RenderGraphModule_RenderGraphPass__set_colorBufferAccess:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar3 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_06ec8f3c;
    }
  }
UnityEngine_Rendering_RenderGraphModule_RenderGraphPass__get_fragmentInputAccess:
  puVar3 = (undefined8 *)FUN_0377596c(in_stack_00000000,*(long *)PTR_DAT_07d896f8,0);
LAB_06ec8f3c:
  (*(code *)*puVar3)(in_stack_00000000,puVar3[1]);
  return unaff_x20;
}


