/*
FUNCTION_NAME: FUN_0278691c
ENTRY_POINT: 0278691c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_0278691c(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  int *piVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_478 [96];
  undefined8 local_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined1 auStack_3e8 [200];
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined1 auStack_2f8 [200];
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 auStack_158 [200];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  if ((DAT_03788679 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(StringLiteral_4493);
    thunk_FUN_00d48444(Method_System_Enum_ToObject__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vfmaq_lane_f64__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RangePositionInfo>_get_Item__);
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Expression_TypeIs__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    DAT_03788679 = 1;
  }
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  memset(auStack_158,0,200);
  local_160 = 0;
  local_168 = 0;
  memset(&local_230,0,200);
  if (*(long *)(param_5 + 0x160) != 0) {
    uVar14 = FUN_02748ec4(*(long *)(param_5 + 0x160),0);
    local_168 = CONCAT44(param_2,uVar14);
    local_160 = CONCAT44(param_4,param_3);
    fVar15 = (float)FUN_026884c4(&local_168,0);
    fVar16 = DAT_028ab0b0;
    if (fVar15 <= DAT_028ab0b0) {
      return;
    }
    if (*(long *)(param_5 + 0x160) != 0) {
      uVar14 = FUN_02748ec4(*(long *)(param_5 + 0x160),0);
      local_168 = CONCAT44(param_2,uVar14);
      local_160 = CONCAT44(param_4,param_3);
      fVar15 = (float)FUN_026884d4(&local_168,0);
      if (fVar15 <= fVar16) {
        return;
      }
      if (*(long *)(param_5 + 0x160) != 0) {
        plVar6 = (long *)FUN_02748b64(*(long *)(param_5 + 0x160),0);
        FUN_02826bb8(*(undefined8 *)(param_5 + 0x160),&local_78,&local_88,&local_80,&local_90,0);
        puVar2 = StringLiteral_4493;
        if (plVar6 != (long *)0x0) {
          lVar10 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_4493) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0xc) * 0x10 + 0x138);
                goto FUN_02786ae0;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)StringLiteral_4493,0xc);
FUN_02786ae0:
          fVar16 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
          lVar10 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 6) * 0x10 + 0x138);
                goto LAB_02786b40;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,6);
LAB_02786b40:
          fVar15 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
          lVar10 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 4) * 0x10 + 0x138);
                goto LAB_02786ba0;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,4);
LAB_02786ba0:
          fVar17 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
          lVar10 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 8) * 0x10 + 0x138);
                goto FUN_02786c00;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,8);
FUN_02786c00:
          fVar18 = (float)(*(code *)*puVar7)(plVar6,puVar7[1]);
          memset(&local_230,0,200);
          if (*(long *)(param_5 + 0x160) != 0) {
            local_230 = FUN_0274c234(*(long *)(param_5 + 0x160),0);
            auVar20 = NEON_fmov(0x3f800000,4);
            uStack_208 = auVar20._8_8_;
            local_210 = auVar20._0_8_;
            local_22c = param_2;
            local_228 = param_3;
            local_224 = param_4;
            if (DAT_03774d77 == '\0') {
              thunk_FUN_00d48444(
                                Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                );
              DAT_03774d77 = '\x01';
            }
            pfVar11 = *(float **)
                       (*(long *)
                         Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__ +
                       0xb8);
            local_1cc = *pfVar11;
            if (*pfVar11 <= (float)local_78 - fVar15) {
              local_1cc = (float)local_78 - fVar15;
            }
            local_1c8 = pfVar11[1];
            if (pfVar11[1] <= local_78._4_4_ - fVar16) {
              local_1c8 = local_78._4_4_ - fVar16;
            }
            local_1c4 = *pfVar11;
            if (*pfVar11 <= (float)local_80 - fVar18) {
              local_1c4 = (float)local_80 - fVar18;
            }
            local_1c0 = pfVar11[1];
            if (pfVar11[1] <= local_80._4_4_ - fVar16) {
              local_1c0 = local_80._4_4_ - fVar16;
            }
            local_1b4 = *pfVar11;
            if (*pfVar11 <= (float)local_88 - fVar15) {
              local_1b4 = (float)local_88 - fVar15;
            }
            local_1b0 = pfVar11[1];
            if (pfVar11[1] <= local_88._4_4_ - fVar17) {
              local_1b0 = local_88._4_4_ - fVar17;
            }
            local_1bc = *pfVar11;
            if (*pfVar11 <= (float)local_90 - fVar18) {
              local_1bc = (float)local_90 - fVar18;
            }
            local_1b8 = pfVar11[1];
            if (pfVar11[1] <= local_90._4_4_ - fVar17) {
              local_1b8 = local_90._4_4_ - fVar17;
            }
            if ((*(long *)(param_5 + 0x160) != 0) &&
               (plVar8 = (long *)FUN_0274aad0(*(long *)(param_5 + 0x160),0), plVar8 != (long *)0x0))
            {
              lVar10 = *plVar8;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) ==
                      *(long *)
                       Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
                     ) {
                    puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                    goto LAB_02786dac;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar7 = (undefined8 *)
                       FUN_00d59724(plVar8,*(long *)
                                            Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
                                    ,2);
LAB_02786dac:
              iVar4 = (*(code *)*puVar7)(plVar8,puVar7[1]);
              puVar1 = 
              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
              ;
              if (iVar4 == 1) {
                lVar10 = *(long *)
                          Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                ;
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar10 = *(long *)puVar1;
                }
                auVar20 = *(undefined1 (*) [16])(*(long *)(lVar10 + 0xb8) + 0x18);
              }
              uStack_1d4 = auVar20._8_8_;
              local_1dc = auVar20._0_8_;
              memcpy(auStack_158,&local_230,200);
              FUN_02688390(auStack_158,0);
              FUN_02688398(auStack_158,0);
              FUN_026883a0(auStack_158,0);
              FUN_026883a8(auStack_158,0);
              fVar19 = (float)FUN_026884c4(auStack_158,0);
              FUN_026884cc(fVar19 - (fVar15 + fVar18),fVar15 + fVar18,auStack_158,0);
              fVar15 = (float)FUN_026884d4(auStack_158,0);
              FUN_026884dc(fVar15 - (fVar16 + fVar17),fVar16 + fVar17,auStack_158,0);
              puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vfmaq_lane_f64__;
              if (*(long *)(param_5 + 0x160) != 0) {
                uVar9 = FUN_02749858(*(long *)(param_5 + 0x160),0);
                iVar4 = FUN_02805754(uVar9,0);
                if (iVar4 == 1) {
                  FUN_02688390(auStack_158,0);
                  lVar10 = *plVar6;
                  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x1d) * 0x10 + 0x138);
                        goto FUN_02786f00;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0x1d);
FUN_02786f00:
                  (*(code *)*puVar7)(plVar6,puVar7[1]);
                  FUN_02688398(auStack_158,0);
                  FUN_026883a0(auStack_158,0);
                  lVar10 = *plVar6;
                  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x1f) * 0x10 + 0x138);
                        goto UnityEngine_EventSystems_PointerEventData__get_scrollDelta;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0x1f);
UnityEngine_EventSystems_PointerEventData__get_scrollDelta:
                  (*(code *)*puVar7)(plVar6,puVar7[1]);
                  FUN_026883a8(auStack_158,0);
                  FUN_026884c4(auStack_158,0);
                  lVar10 = *plVar6;
                  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x1d) * 0x10 + 0x138);
                        goto FUN_02786ff8;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0x1d);
FUN_02786ff8:
                  (*(code *)*puVar7)(plVar6,puVar7[1]);
                  lVar10 = *plVar6;
                  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x1e) * 0x10 + 0x138);
                        goto LAB_02787058;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0x1e);
LAB_02787058:
                  (*(code *)*puVar7)(plVar6,puVar7[1]);
                  FUN_026884cc(auStack_158,0);
                  FUN_026884d4(auStack_158,0);
                  lVar10 = *plVar6;
                  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x1f) * 0x10 + 0x138);
                        goto LAB_027870d8;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0x1f);
LAB_027870d8:
                  (*(code *)*puVar7)(plVar6,puVar7[1]);
                  lVar10 = *plVar6;
                  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                        puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x1c) * 0x10 + 0x138);
                        goto LAB_02787138;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar2,0x1c);
LAB_02787138:
                  (*(code *)*puVar7)(plVar6,puVar7[1]);
                  FUN_026884dc(auStack_158,0);
                }
                puVar2 = Method_System_Collections_Generic_List<RangePositionInfo>_get_Item__;
                uVar9 = NEON_rev64(*(undefined8 *)(param_5 + 200),4);
                puVar7 = (undefined8 *)(param_5 + 0x30);
                *(undefined8 *)(param_5 + 0x78) = *(undefined8 *)(param_5 + 0xd0);
                *(undefined8 *)(param_5 + 0x88) = uVar9;
                *(undefined1 *)(param_5 + 0x86) = 1;
                memcpy(auStack_2f8,auStack_158,200);
                uVar9 = *(undefined8 *)(param_5 + 0x140);
                local_300 = 0;
                uStack_318 = 0;
                local_320 = 0;
                uStack_308 = 0;
                uStack_310 = 0;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                memcpy(auStack_3e8,auStack_2f8,200);
                uStack_408 = uStack_318;
                local_410 = local_320;
                uStack_3f8 = uStack_308;
                uStack_400 = uStack_310;
                local_3f0 = local_300;
                local_418 = uVar9;
                FUN_0284208c(auStack_3e8,&local_418,0);
                iVar4 = FUN_01344a5c(puVar7,*(undefined8 *)puVar2);
                puVar1 = Method_System_Linq_Expressions_Expression_TypeIs__;
                if (0 < iVar4) {
                  iVar4 = FUN_01344a5c(param_5 + 0x40,
                                       *(undefined8 *)
                                        Method_System_Linq_Expressions_Expression_TypeIs__);
                  if (0 < iVar4) {
                    lVar10 = *(long *)(param_5 + 0x18);
                    memcpy(auStack_2f8,puVar7,0x60);
                    puVar3 = Method_System_Enum_ToObject__;
                    if (lVar10 == 0) goto LAB_027872c8;
                    memcpy(auStack_478,auStack_2f8,0x60);
                    FUN_00ce5154(lVar10,auStack_478,*(undefined8 *)puVar3);
                    iVar4 = *(int *)(param_5 + 0x168);
                    iVar5 = FUN_01344a5c(puVar7,*(undefined8 *)puVar2);
                    *(int *)(param_5 + 0x168) = iVar5 + iVar4;
                    iVar4 = *(int *)(param_5 + 0x16c);
                    iVar5 = FUN_01344a5c(param_5 + 0x40,*(undefined8 *)puVar1);
                    *(int *)(param_5 + 0x16c) = iVar5 + iVar4;
                    *(undefined1 *)(param_5 + 0x90) = 1;
                  }
                }
                *(undefined8 *)(param_5 + 0x78) = 0;
                *(undefined8 *)(param_5 + 0x70) = 0;
                *(undefined8 *)(param_5 + 0x88) = 0;
                *(undefined8 *)(param_5 + 0x80) = 0;
                *(undefined8 *)(param_5 + 0x58) = 0;
                *(undefined8 *)(param_5 + 0x50) = 0;
                *(undefined8 *)(param_5 + 0x68) = 0;
                *(undefined8 *)(param_5 + 0x60) = 0;
                *(undefined8 *)(param_5 + 0x38) = 0;
                *puVar7 = 0;
                *(undefined8 *)(param_5 + 0x48) = 0;
                *(undefined8 *)(param_5 + 0x40) = 0;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_027872c8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


