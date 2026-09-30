/*
FUNCTION_NAME: FUN_05d5c498
ENTRY_POINT: 05d5c498
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d5c498(long param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined1 *puStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_84 [4];
  
  puVar5 = Method_OVRSpatialAnchor_ShareAsync__;
  if ((DAT_06bc3939 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9e50);
    FUN_02f08768(Method_OVRTask_SetResult<OVRResult<OVRAnchor_EraseResult>>__);
    FUN_02f08768(Method_OVRTask_FromGuid<OVRSpatialAnchor_OperationResult>__);
    FUN_02f08768(Method_OVRTask_SetResult<OVRResult<OVRAnchor_SaveResult>>__);
    FUN_02f08768(Method_System_Collections_Generic_List<XRPokeInteractor_PokeCollision>_Add__);
    FUN_02f08768(PTR_DAT_067cb238);
    FUN_02f08768(Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__);
    FUN_02f08768(Method_OVRSpatialAnchor_ShareAsync__);
    FUN_02f08768(PTR_DAT_067c97a8);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__);
    FUN_02f08768(PTR_DAT_067cb280);
    DAT_06bc3939 = 1;
  }
  lVar12 = *(long *)puVar5;
  local_84[0] = 0;
  local_90 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar12 = *(long *)puVar5;
  }
  FUN_05c5cb44(local_84,**(undefined8 **)(lVar12 + 0xb8),0);
  local_140 = 0;
  puStack_138 = local_84;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar12 = *(long *)(param_1 + 0x28);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar7 = *(uint *)(param_2 + 0x54);
  if (*(uint *)(lVar12 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar12 = lVar12 + (long)(int)uVar7 * 0x10;
  uVar1 = *(undefined8 *)(lVar12 + 0x20);
  uVar2 = *(undefined8 *)(lVar12 + 0x28);
  lVar12 = FUN_04818a9c(*(long *)(param_1 + 0x18),uVar1,uVar2,
                        *(undefined8 *)Method_OVRTask_FromGuid<OVRSpatialAnchor_OperationResult>__);
  uVar6 = FUN_0339313c(lVar12,*(undefined8 *)
                               Method_System_Collections_Generic_List<XRPokeInteractor_PokeCollision>_Add__
                      );
  if (uVar6 == uVar7) {
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    Unity_Collections_ArrayOfArrays<IntPtr>__get_BlockSizeInElements
              (*(long *)(param_1 + 0x30),uVar1,uVar2,0,
               *(undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRAnchor_SaveResult>>__);
    FUN_05d5c0b8(param_1,lVar12,param_3,uVar7 == *(uint *)(param_1 + 0x38));
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar7 = *(uint *)(lVar12 + 0x18);
    if (0 < (int)uVar7) {
      uVar19 = 0;
      uVar6 = 0;
      bVar4 = false;
      do {
        if (uVar7 <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        iVar9 = *(int *)(lVar12 + (long)(int)uVar19 * 4 + 0x20);
        if (iVar9 == -1) break;
        if (*(long *)(param_1 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar13 = FUN_03abf644(*(long *)(param_1 + 0x108),iVar9,
                              *(undefined8 *)
                               Method_OVRTask_FromResult<OVRResult<OVRAnchor_SaveResult>>__);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        if (0 < *(int *)(lVar13 + 0x60)) {
          lVar15 = *(long *)(lVar13 + 0x58);
          lVar18 = 0;
          do {
            *(undefined4 *)(lVar15 + lVar18 * 4) = 0xffffffff;
            lVar18 = lVar18 + 1;
          } while (lVar18 < *(int *)(lVar13 + 0x60));
        }
        if (0 < *(int *)(lVar13 + 0x70)) {
          lVar15 = *(long *)(lVar13 + 0x68);
          lVar18 = 0;
          do {
            *(undefined4 *)(lVar15 + lVar18 * 4) = 0xffffffff;
            lVar18 = lVar18 + 1;
          } while (lVar18 < *(int *)(lVar13 + 0x70));
        }
        uVar21 = *(undefined8 *)(lVar13 + 0x80);
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar7 = FUN_05dad3e4(uVar21,0);
        if (uVar7 != 0) {
          lVar18 = 0;
          uVar20 = 0;
          do {
            lVar15 = *(long *)(lVar13 + 0x78);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            if (*(uint *)(lVar15 + 0x18) <= uVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
            iVar9 = *(int *)(lVar15 + lVar18 * 4 + 0x20);
            if (iVar9 == 0) {
              if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              cVar3 = *(char *)(param_3 + 0x18d);
              uVar11 = *(undefined4 *)(param_3 + 0x180);
              if (*(int *)(*(long *)PTR_DAT_067cb238 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              uVar8 = FUN_060b2158(0);
              if (*(int *)(*(long *)PTR_DAT_067cb280 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              iVar9 = FUN_05dddafc(cVar3 != '\0',uVar11,uVar8 & 1,0);
            }
            FUN_06121030(&local_100,iVar9,0);
            plVar16 = (long *)(param_1 + 0x118);
            if (*(char *)(lVar13 + 0x50) != '\0') {
              lVar15 = *(long *)(lVar13 + 0x80);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              if (*(uint *)(lVar15 + 0x18) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              plVar16 = (long *)(lVar15 + lVar18 * 8 + 0x20);
            }
            lVar15 = *plVar16;
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            uStack_2a8 = *(undefined8 *)(lVar15 + 0x30);
            local_2b0 = *(undefined8 *)(lVar15 + 0x28);
            uStack_298 = *(undefined8 *)(lVar15 + 0x40);
            local_2a0 = *(undefined8 *)(lVar15 + 0x38);
            uVar21 = *(undefined8 *)(param_1 + 0x40);
            local_290 = *(undefined8 *)(lVar15 + 0x48);
            if (*(int *)(*(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__ +
                        0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            local_150 = local_290;
            uStack_168 = uStack_2a8;
            local_170 = local_2b0;
            uStack_158 = uStack_298;
            uStack_160 = local_2a0;
            iVar9 = FUN_05d5cea8(&local_170,uVar21);
            if (*(char *)(*(long *)(*(long *)
                                     Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__ +
                                   0xb8) + 8) != '\0') {
              lVar17 = *(long *)(param_1 + 200);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              if (*(uint *)(lVar17 + 0x18) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              FUN_06120f38(&local_100,*(undefined4 *)(lVar17 + lVar18 * 4 + 0x20),0);
            }
            if (iVar9 == -1) {
              lVar17 = *(long *)(param_1 + 0x40);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              if (*(uint *)(lVar17 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              memmove((void *)(lVar17 + (long)(int)uVar6 * 0x78 + 0x20),&local_100,0x78);
              lVar17 = *(long *)(param_1 + 0x40);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              if (*(uint *)(lVar17 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              uVar8 = *(uint *)(lVar13 + 0xa4);
              uStack_198 = *(undefined8 *)(lVar15 + 0x30);
              local_1a0 = *(undefined8 *)(lVar15 + 0x28);
              uStack_188 = *(undefined8 *)(lVar15 + 0x40);
              uStack_190 = *(undefined8 *)(lVar15 + 0x38);
              local_180 = *(undefined8 *)(lVar15 + 0x48);
              FUN_06120fa4(lVar17 + (long)(int)uVar6 * 0x78 + 0x20,&local_1a0,(uVar8 & 1) == 0,1,0);
              lVar15 = *(long *)(lVar13 + 0x80);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              if (*(uint *)(lVar15 + 0x18) <= uVar20) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              lVar15 = *(long *)(lVar15 + lVar18 * 8 + 0x20);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              uStack_2a8 = *(undefined8 *)(lVar15 + 0x30);
              local_2b0 = *(undefined8 *)(lVar15 + 0x28);
              uStack_298 = *(undefined8 *)(lVar15 + 0x40);
              local_2a0 = *(undefined8 *)(lVar15 + 0x38);
              local_290 = *(undefined8 *)(lVar15 + 0x48);
              lVar15 = *(long *)(param_1 + 0x118);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              uStack_1c8 = *(undefined8 *)(lVar15 + 0x30);
              local_1d0 = *(undefined8 *)(lVar15 + 0x28);
              uStack_1b8 = *(undefined8 *)(lVar15 + 0x40);
              uStack_1c0 = *(undefined8 *)(lVar15 + 0x38);
              local_1b0 = *(undefined8 *)(lVar15 + 0x48);
              if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              local_1e0 = local_290;
              uStack_1f8 = uStack_2a8;
              local_200 = local_2b0;
              uStack_1e8 = uStack_298;
              uStack_1f0 = local_2a0;
              local_210 = local_1b0;
              uStack_228 = uStack_1c8;
              local_230 = local_1d0;
              uStack_218 = uStack_1b8;
              uStack_220 = uStack_1c0;
              uVar10 = FUN_0610d5f4(&local_200,&local_230,0);
              if (((param_5 & 1) == 0) || ((uVar10 & param_4 & 1) == 0)) {
                if ((uVar8 & 1) != 0) {
                  lVar15 = *(long *)(param_1 + 0x40);
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089c8();
                  }
                  uVar11 = *(undefined4 *)(lVar13 + 0xa8);
                  uVar22 = *(undefined4 *)(lVar13 + 0xac);
                  uVar23 = *(undefined4 *)(lVar13 + 0xb0);
                  uVar24 = *(undefined4 *)(lVar13 + 0xb4);
                  if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  FUN_05cb11f0(uVar11,uVar22,uVar23,uVar24,0);
                  if (*(uint *)(lVar15 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f089d0();
                  }
                  FUN_06121014(lVar15 + (long)(int)uVar6 * 0x78 + 0x20,0,0);
                }
              }
              else {
                lVar15 = *(long *)(param_1 + 0x40);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                if (*(uint *)(lVar15 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089d0();
                }
                FUN_06121014(*(undefined4 *)(param_3 + 0x1f0),*(undefined4 *)(param_3 + 500),
                             *(undefined4 *)(param_3 + 0x1f8),*(undefined4 *)(param_3 + 0x1fc),
                             0x3f800000,lVar15 + (long)(int)uVar6 * 0x78 + 0x20,0,0);
              }
              *(uint *)(*(long *)(lVar13 + 0x58) + lVar18 * 4) = uVar6;
              lVar18 = *(long *)(param_1 + 0x30);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              iVar9 = FUN_048155b4(lVar18,uVar1,uVar2,
                                   *(undefined8 *)
                                    Method_OVRTask_SetResult<OVRResult<OVRAnchor_EraseResult>>__);
              Unity_Collections_ArrayOfArrays<IntPtr>__get_BlockSizeInElements
                        (lVar18,uVar1,uVar2,iVar9 + 1,
                         *(undefined8 *)Method_OVRTask_SetResult<OVRResult<OVRAnchor_SaveResult>>__)
              ;
              uVar6 = uVar6 + 1;
            }
            else {
              *(int *)(*(long *)(lVar13 + 0x58) + lVar18 * 4) = iVar9;
            }
            uVar20 = uVar20 + 1;
            lVar18 = (long)(int)uVar20;
          } while (lVar18 < (long)(ulong)uVar7);
        }
        if (*(int *)(*(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__ + 0xe4)
            == 0) {
          thunk_FUN_02f6670c();
        }
        uVar14 = FUN_05d5cfdc(lVar13);
        if ((uVar14 & 1) != 0) {
          FUN_05d5d018(param_1,lVar13);
          bVar4 = true;
        }
        uVar11 = FUN_060fbd98(2,0);
        local_240 = 0;
        uStack_298 = 0;
        local_2a0 = 0;
        uStack_288 = 0;
        local_290 = 0;
        uStack_278 = 0;
        local_280 = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        local_260 = 0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_2a8 = 0;
        local_2b0 = 0;
        FUN_06121030(&local_2b0,uVar11,0);
        memcpy((void *)(param_1 + 0x48),&local_2b0,0x78);
        if (*(char *)(lVar13 + 0x50) == '\0') {
          lVar13 = *(long *)(param_1 + 0x120);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
        }
        else {
          lVar13 = *(long *)(lVar13 + 0x98);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
        }
        uStack_2d8 = *(undefined8 *)(lVar13 + 0x30);
        local_2e0 = *(undefined8 *)(lVar13 + 0x28);
        uStack_2c8 = *(undefined8 *)(lVar13 + 0x40);
        uStack_2d0 = *(undefined8 *)(lVar13 + 0x38);
        local_2c0 = *(undefined8 *)(lVar13 + 0x48);
        local_130 = local_2e0;
        uStack_128 = uStack_2d8;
        uStack_120 = uStack_2d0;
        uStack_118 = uStack_2c8;
        local_110 = local_2c0;
        FUN_06120fa4(param_1 + 0x48,&local_2e0,(param_5 & 6) == 0,1,0);
        if ((param_5 & 6) != 0) {
          FUN_06121014(0,0,0,0x3f800000,0x3f800000,param_1 + 0x48,0,0);
        }
        lVar13 = *(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar13 = *(long *)Method_OVRTask_FromResult<OVRResult<OVRAnchor_ShareResult>>__;
        }
        if (*(char *)(*(long *)(lVar13 + 0xb8) + 8) != '\0') {
          FUN_06120f38(param_1 + 0x48,*(undefined4 *)(param_1 + 0xd0),0);
        }
        uVar7 = *(uint *)(lVar12 + 0x18);
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < (int)uVar7);
      if (bVar4) {
        if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar11 = FUN_048155b4(*(long *)(param_1 + 0x30),uVar1,uVar2,
                              *(undefined8 *)
                               Method_OVRTask_SetResult<OVRResult<OVRAnchor_EraseResult>>__);
        FUN_05d5d1f8(param_1,uVar11);
      }
    }
  }
  FUN_05c5cb50(local_84,0);
  return;
}


