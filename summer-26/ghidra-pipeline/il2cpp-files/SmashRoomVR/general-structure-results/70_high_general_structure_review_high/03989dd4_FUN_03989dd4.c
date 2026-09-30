/*
FUNCTION_NAME: FUN_03989dd4
ENTRY_POINT: 03989dd4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined4 FUN_03989dd4(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  void *__dest;
  char *pcVar2;
  long *plVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  int iVar17;
  undefined4 uVar18;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long *plVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  int *piVar27;
  long lVar28;
  long *plVar29;
  long lVar30;
  uint *puVar31;
  uint uVar32;
  uint uVar33;
  undefined8 uVar34;
  long *plVar35;
  long *plVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  long lVar39;
  undefined1 auVar40 [16];
  int local_1b4;
  uint local_18c;
  undefined1 auStack_178 [88];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  long local_70;
  uint local_68;
  undefined1 local_64 [4];
  
  if ((DAT_03ffc622 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_1543);
    thunk_FUN_01ad9084(PTR_DAT_03dad448);
    thunk_FUN_01ad9084(PTR_DAT_03d9b168);
    thunk_FUN_01ad9084(PTR_DAT_03daca28);
    thunk_FUN_01ad9084(PTR_DAT_03dacaf0);
    thunk_FUN_01ad9084(PTR_DAT_03dacc80);
    thunk_FUN_01ad9084(PTR_DAT_03dacf08);
    thunk_FUN_01ad9084(PTR_DAT_03dacaf8);
    thunk_FUN_01ad9084(PTR_DAT_03dacdf8);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03dace98);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03dacf18);
    thunk_FUN_01ad9084(PTR_DAT_03dad450);
    thunk_FUN_01ad9084(PTR_DAT_03dad458);
    thunk_FUN_01ad9084(PTR_DAT_03dad318);
    thunk_FUN_01ad9084(PTR_DAT_03dad368);
    thunk_FUN_01ad9084(PTR_DAT_03dad378);
    thunk_FUN_01ad9084(StringLiteral_2494);
    thunk_FUN_01ad9084(PTR_DAT_03dad460);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb58);
    thunk_FUN_01ad9084(PTR_DAT_03dad468);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb60);
    DAT_03ffc622 = 1;
  }
  local_64[0] = 0;
  local_68 = 0;
  local_80._8_8_ = 0;
  local_70 = 0;
  local_88 = 0;
  local_80._0_8_ = 0;
  auVar40 = ZEXT816(0);
  if (param_3 == 0) goto LAB_0398b3c8;
  lVar28 = *(long *)(param_3 + 0x68);
  pcVar2 = (char *)(param_1 + 0x1578);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0x1579) = 0;
  *(undefined1 *)(param_1 + 800) = 0;
  puVar10 = PTR_DAT_03dad378;
  puVar9 = PTR_DAT_03dad368;
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_3 + 0x60);
  FUN_0399c62c(param_1 + 0x128,0);
  if ((*(byte *)(param_1 + 0x124) & 1) == 0) {
    uVar18 = *(undefined4 *)(param_3 + 0xec);
  }
  else {
    uVar18 = 700;
  }
  *(undefined4 *)(param_1 + 0x134) = uVar18;
  UnityEngine_UIElements_StylePropertyAnimationSystem_Values<Length>__UpdateAnimation
            (param_1 + 0x138,uVar18,*(undefined8 *)puVar10);
  plVar35 = (long *)(param_1 + 0x68);
  *plVar35 = *(long *)(param_3 + 0x40);
  thunk_FUN_01b4f09c(plVar35);
  plVar36 = (long *)(param_1 + 0x70);
  *plVar36 = *(long *)(param_3 + 0x48);
  thunk_FUN_01b4f09c(plVar36);
  *(undefined4 *)(param_1 + 0x78) = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  FUN_03978e10(*(undefined4 *)(param_1 + 0xd8),&local_c0,0,*plVar35,0,*plVar36,0);
  uStack_118 = uStack_b8;
  local_120 = local_c0;
  uStack_108 = uStack_a8;
  local_110 = local_b0;
  uStack_f8 = uStack_98;
  local_100 = local_a0;
  local_f0 = local_90;
  FUN_021c1b60(param_1 + 0x80,&local_120,*(undefined8 *)puVar9);
  puVar9 = PTR_DAT_03dad318;
  auVar40._8_8_ = local_80._8_8_;
  auVar40._0_8_ = local_80._0_8_;
  if (*(long *)(param_1 + 0x19e0) == 0) goto LAB_0398b3c8;
  FUN_025553b0(*(long *)(param_1 + 0x19e0),*(undefined8 *)StringLiteral_1543);
  plVar3 = (long *)(param_1 + 0x15b8);
  FUN_03978ecc(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),plVar3,
               *(undefined8 *)(param_1 + 0x19e0),0);
  auVar40._8_8_ = local_80._8_8_;
  auVar40._0_8_ = local_80._0_8_;
  if (param_4 == 0) {
    param_4 = thunk_FUN_01afaadc(*(undefined8 *)puVar9);
    FUN_0399a96c(param_4,0);
  }
  else {
    lVar26 = *(long *)(param_4 + 0x30);
    if (lVar26 == 0) goto LAB_0398b3c8;
    iVar13 = *(int *)(param_1 + 0x28);
    if (*(int *)(lVar26 + 0x18) < iVar13) {
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f556f8((long *)(param_4 + 0x30),iVar13,0,*(undefined8 *)PTR_DAT_03dad458);
    }
  }
  *pcVar2 = '\x01';
  if (*(int *)(param_3 + 0x74) == 1) {
    FUN_03992ae4(param_1,param_3);
    auVar8._8_8_ = local_80._8_8_;
    auVar8._0_8_ = local_80._0_8_;
    auVar40._8_8_ = local_80._8_8_;
    auVar40._0_8_ = local_80._0_8_;
    auVar5._8_8_ = local_80._8_8_;
    auVar5._0_8_ = local_80._0_8_;
    if (*(long *)(param_1 + 0x1a00) == 0) {
      *(undefined4 *)(param_3 + 0x74) = 3;
      if (lVar28 == 0) goto LAB_0398b3c8;
      if (*(char *)(lVar28 + 0x89) != '\0') {
        auVar40 = auVar8;
        if (*plVar35 == 0) goto LAB_0398b3c8;
        uVar25 = FUN_039230bc(*plVar35,0);
        uVar25 = FUN_02ee6c30(*(undefined8 *)PTR_DAT_03d9cb58,uVar25,*(undefined8 *)PTR_DAT_03d9cb60
                              ,0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                            );
        }
        FUN_038f336c(uVar25,0);
      }
    }
    else {
      auVar40 = auVar5;
      if (*(long *)(param_1 + 0x1a08) == 0) goto LAB_0398b3c8;
      iVar13 = FUN_03922ce0(*(long *)(param_1 + 0x1a08),0);
      auVar40._8_8_ = local_80._8_8_;
      auVar40._0_8_ = local_80._0_8_;
      if (*plVar35 == 0) goto LAB_0398b3c8;
      iVar14 = FUN_03922ce0(*plVar35,0);
      auVar6._8_8_ = local_80._8_8_;
      auVar6._0_8_ = local_80._0_8_;
      auVar40._8_8_ = local_80._8_8_;
      auVar40._0_8_ = local_80._0_8_;
      if (iVar13 != iVar14) {
        if (lVar28 == 0) goto LAB_0398b3c8;
        if (*(char *)(lVar28 + 0x38) == '\0') {
UnityEngine_UIElements_GroupBoxUtility___cctor:
          auVar40._8_8_ = local_80._8_8_;
          auVar40._0_8_ = local_80._0_8_;
          if (*(long *)(param_1 + 0x1a08) == 0) goto LAB_0398b3c8;
          uVar25 = *(undefined8 *)(*(long *)(param_1 + 0x1a08) + 0x28);
        }
        else {
          auVar40 = auVar6;
          if (*plVar36 == 0) goto LAB_0398b3c8;
          iVar13 = FUN_03922ce0(*plVar36,0);
          auVar7._8_8_ = local_80._8_8_;
          auVar7._0_8_ = local_80._0_8_;
          auVar40._8_8_ = local_80._8_8_;
          auVar40._0_8_ = local_80._0_8_;
          if ((*(long *)(param_1 + 0x1a08) == 0) ||
             (lVar26 = *(long *)(*(long *)(param_1 + 0x1a08) + 0x28), auVar40 = auVar7, lVar26 == 0)
             ) goto LAB_0398b3c8;
          iVar14 = FUN_03922ce0(lVar26,0);
          auVar40._8_8_ = local_80._8_8_;
          auVar40._0_8_ = local_80._0_8_;
          if (iVar13 == iVar14) goto UnityEngine_UIElements_GroupBoxUtility___cctor;
          if (*(long *)(param_1 + 0x1a08) == 0) goto LAB_0398b3c8;
          uVar25 = *(undefined8 *)(param_1 + 0x70);
          uVar37 = *(undefined8 *)(*(long *)(param_1 + 0x1a08) + 0x28);
          if (*(int *)(*(long *)PTR_DAT_03dacdf8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar25 = FUN_03978508(uVar25,uVar37,0);
        }
        *(undefined8 *)(param_1 + 0x1a10) = uVar25;
        thunk_FUN_01b4f09c(param_1 + 0x1a10);
        uVar15 = FUN_03978ecc(*(undefined8 *)(param_1 + 0x1a10),*(undefined8 *)(param_1 + 0x1a08),
                              plVar3,*(undefined8 *)(param_1 + 0x19e0),0);
        lVar26 = *(long *)(param_1 + 0x15b8);
        *(uint *)(param_1 + 0x1a18) = uVar15;
        auVar40 = local_80;
        if (lVar26 == 0) goto LAB_0398b3c8;
        if (*(uint *)(lVar26 + 0x18) <= uVar15) {
LAB_0398b3cc:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        *(undefined4 *)(lVar26 + (long)(int)uVar15 * 0x38 + 0x54) = 0;
      }
    }
  }
  auVar40 = local_80;
  if (param_2 == 0) goto LAB_0398b3c8;
  uVar15 = *(uint *)(param_2 + 0x18);
  plVar1 = (long *)(param_4 + 0x30);
  if (0 < (int)uVar15) {
    uVar32 = 0;
    local_1b4 = 0;
LAB_0398a2d0:
    if (uVar15 <= uVar32) goto LAB_0398b3cc;
    puVar31 = (uint *)(param_2 + (long)(int)uVar32 * 0x10 + 0x24);
    if (*puVar31 == 0) goto LAB_0398b0d0;
    auVar40 = local_80;
    if (param_4 == 0) goto LAB_0398b3c8;
    iVar13 = *(int *)(param_1 + 0xe8);
    if ((*plVar1 == 0) || (*(int *)(*plVar1 + 0x18) <= iVar13)) {
      if (*(int *)(*(long *)PTR_DAT_03dad318 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f556f8(plVar1,iVar13 + 1,1,*(undefined8 *)PTR_DAT_03dad458);
      uVar15 = *(uint *)(param_2 + 0x18);
    }
    if (uVar15 <= uVar32) goto LAB_0398b3cc;
    uVar15 = *puVar31;
    if ((uVar15 == 0x3c) && (*(char *)(param_3 + 0xb5) != '\0')) {
      uVar18 = *(undefined4 *)(param_1 + 0x78);
      uVar19 = FUN_0398ba98(param_1,param_2,uVar32 + 1,&local_68,param_3,param_4);
      uVar33 = local_68;
      if ((uVar19 & 1) == 0) goto LAB_0398a50c;
      if (*(uint *)(param_2 + 0x18) <= uVar32) goto LAB_0398b3cc;
      if (*pcVar2 != '\x02') goto LAB_0398b0b8;
      lVar26 = *(long *)(param_1 + 0x15b8);
      auVar40 = local_80;
      if (lVar26 != 0) {
        if (*(uint *)(param_1 + 0x78) < *(uint *)(lVar26 + 0x18)) {
          lVar26 = lVar26 + (long)(int)*(uint *)(param_1 + 0x78) * 0x38;
          iVar13 = *(int *)(param_2 + (long)(int)uVar32 * 0x10 + 0x28);
          *(int *)(lVar26 + 0x54) = *(int *)(lVar26 + 0x54) + 1;
          lVar26 = *plVar1;
          if (lVar26 != 0) {
            if (*(uint *)(param_1 + 0xe8) < *(uint *)(lVar26 + 0x18)) {
              lVar26 = lVar26 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x188;
              *(short *)(lVar26 + 0x20) = *(short *)(param_1 + 0x157c) + -0x2000;
              *(undefined8 *)(lVar26 + 0x40) = *(undefined8 *)(param_1 + 0x68);
              thunk_FUN_01b4f09c();
              lVar26 = *plVar1;
              auVar40 = local_80;
              if (lVar26 != 0) {
                uVar15 = *(uint *)(param_1 + 0xe8);
                if (uVar15 < *(uint *)(lVar26 + 0x18)) {
                  *(undefined4 *)(lVar26 + (long)(int)uVar15 * 0x188 + 0x60) =
                       *(undefined4 *)(param_1 + 0x78);
                  if (*(long *)(param_1 + 0xe0) != 0) {
                    lVar20 = FUN_0397aaf0(*(long *)(param_1 + 0xe0),0);
                    auVar40 = local_80;
                    if (lVar20 != 0) {
                      uVar25 = FUN_02b59714(lVar20,*(undefined4 *)(param_1 + 0x157c),
                                            *(undefined8 *)PTR_DAT_03dacf08);
                      if (uVar15 < *(uint *)(lVar26 + 0x18)) {
                        *(undefined8 *)(lVar26 + (long)(int)uVar15 * 0x188 + 0x30) = uVar25;
                        thunk_FUN_01b4f09c();
                        lVar26 = *plVar1;
                        auVar40 = local_80;
                        if (lVar26 != 0) {
                          uVar15 = *(uint *)(param_1 + 0xe8);
                          if (uVar15 < *(uint *)(lVar26 + 0x18)) {
                            lVar20 = lVar26 + (long)(int)uVar15 * 0x188;
                            *(char *)(lVar20 + 0x28) = *pcVar2;
                            *(int *)(lVar20 + 0x24) = iVar13;
                            if (uVar33 < *(uint *)(param_2 + 0x18)) {
                              *(int *)(lVar26 + (long)(int)uVar15 * 0x188 + 0x2c) =
                                   (*(int *)(param_2 + (long)(int)uVar33 * 0x10 + 0x28) - iVar13) +
                                   1;
                              *pcVar2 = '\x01';
                              *(undefined4 *)(param_1 + 0x78) = uVar18;
                              uVar32 = uVar33;
                              goto LAB_0398ad9c;
                            }
                          }
                          goto LAB_0398b3cc;
                        }
                        goto LAB_0398b3c8;
                      }
                      goto LAB_0398b3cc;
                    }
                  }
                  goto LAB_0398b3c8;
                }
                goto LAB_0398b3cc;
              }
              goto LAB_0398b3c8;
            }
            goto LAB_0398b3cc;
          }
          goto LAB_0398b3c8;
        }
        goto LAB_0398b3cc;
      }
      goto LAB_0398b3c8;
    }
LAB_0398a50c:
    uVar25 = *(undefined8 *)(param_1 + 0x68);
    uVar37 = *(undefined8 *)(param_1 + 0x70);
    uVar18 = *(undefined4 *)(param_1 + 0x78);
    if (*pcVar2 != '\x01') goto LAB_0398a620;
    uVar33 = *(uint *)(param_1 + 0x124);
    if ((uVar33 >> 4 & 1) == 0) {
      if ((uVar33 >> 3 & 1) == 0) {
        if ((uVar33 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar19 = FUN_02fdd9e8(uVar15,0);
          goto joined_r0x0398a598;
        }
      }
      else {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar19 = FUN_02fdd92c(uVar15,0);
        if ((uVar19 & 1) != 0) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar15 = FUN_02fdddc0(uVar15,0);
          goto LAB_0398a61c;
        }
      }
    }
    else {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar19 = FUN_02fdd9e8(uVar15,0);
joined_r0x0398a598:
      if ((uVar19 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar15 = FUN_02fddc48(uVar15,0);
LAB_0398a61c:
        uVar15 = uVar15 & 0xffff;
      }
    }
LAB_0398a620:
    lVar26 = FUN_03992c90(param_1,param_3,uVar15,*(undefined8 *)(param_1 + 0x68),
                          *(undefined4 *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x134),local_64
                         );
    local_18c = uVar15;
    if (lVar26 == 0) {
      if (*(uint *)(param_2 + 0x18) <= uVar32) goto LAB_0398b3cc;
      FUN_03992f84(0,uVar15,*(undefined4 *)(param_2 + (long)(int)uVar32 * 0x10 + 0x28),*plVar35,
                   param_4);
      auVar40 = local_80;
      if (lVar28 == 0) goto LAB_0398b3c8;
      if (*(uint *)(param_2 + 0x18) <= uVar32) goto LAB_0398b3cc;
      local_18c = 0x25a1;
      if (*(uint *)(lVar28 + 0x3c) != 0) {
        local_18c = *(uint *)(lVar28 + 0x3c);
      }
      *puVar31 = local_18c;
      lVar26 = FUN_03977394(local_18c,*(undefined8 *)(param_1 + 0x68),1,
                            *(undefined4 *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x134),
                            local_64,0);
      if (lVar26 == 0) {
        lVar26 = *(long *)(lVar28 + 0x30);
        if ((lVar26 != 0) && (0 < *(int *)(lVar26 + 0x18))) {
          lVar26 = FUN_039778f4(local_18c,*(undefined8 *)(param_1 + 0x68),lVar26,1,
                                *(undefined4 *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x134),
                                local_64,0);
          if (lVar26 != 0) goto LAB_0398a6c8;
        }
        uVar38 = *(undefined8 *)(lVar28 + 0x20);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar19 = FUN_0391f968(uVar38,0,0);
        if ((uVar19 & 1) != 0) {
          lVar26 = FUN_03977394(local_18c,*(undefined8 *)(lVar28 + 0x20),1,
                                *(undefined4 *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x134),
                                local_64,0);
          if (lVar26 != 0) goto LAB_0398a6c8;
        }
        if (*(uint *)(param_2 + 0x18) <= uVar32) goto LAB_0398b3cc;
        *puVar31 = 0x20;
        local_18c = 0x20;
        lVar26 = FUN_03977394(0x20,*(undefined8 *)(param_1 + 0x68),1,
                              *(undefined4 *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x134),
                              local_64,0);
        if (lVar26 == 0) {
          if (*(uint *)(param_2 + 0x18) <= uVar32) goto LAB_0398b3cc;
          *puVar31 = 3;
          local_18c = 3;
          lVar26 = FUN_03977394(3,*(undefined8 *)(param_1 + 0x68),1,*(undefined4 *)(param_1 + 0x124)
                                ,*(undefined4 *)(param_1 + 0x134),local_64,0);
        }
      }
LAB_0398a6c8:
      if (*(char *)(lVar28 + 0x89) != '\0') {
        if (uVar15 >> 0x10 == 0) {
          local_120 = CONCAT44(local_120._4_4_,uVar15);
          uVar38 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&local_120);
          auVar40 = local_80;
          if (*(long *)(param_3 + 0x40) == 0) goto LAB_0398b3c8;
          uVar34 = FUN_039230bc(*(long *)(param_3 + 0x40),0);
          auVar40 = local_80;
          if (lVar26 == 0) goto LAB_0398b3c8;
          uVar16 = FUN_0396fd54(lVar26,0);
          local_c0 = CONCAT44(local_c0._4_4_,uVar16);
          uVar21 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&local_c0);
          puVar22 = (undefined8 *)PTR_DAT_03dad468;
        }
        else {
          local_120 = CONCAT44(local_120._4_4_,uVar15);
          uVar38 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&local_120);
          auVar40 = local_80;
          if (*(long *)(param_3 + 0x40) == 0) goto LAB_0398b3c8;
          uVar34 = FUN_039230bc(*(long *)(param_3 + 0x40),0);
          auVar40 = local_80;
          if (lVar26 == 0) goto LAB_0398b3c8;
          uVar16 = FUN_0396fd54(lVar26,0);
          local_c0 = CONCAT44(local_c0._4_4_,uVar16);
          uVar21 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&local_c0);
          puVar22 = (undefined8 *)PTR_DAT_03dad460;
        }
        uVar38 = FUN_02ee7164(*puVar22,uVar38,uVar34,uVar21,0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f336c(uVar38,0);
      }
    }
    lVar20 = *plVar1;
    auVar40 = local_80;
    if (lVar20 == 0) goto LAB_0398b3c8;
    if (*(uint *)(lVar20 + 0x18) <= *(uint *)(param_1 + 0xe8)) goto LAB_0398b3cc;
    puVar22 = (undefined8 *)(lVar20 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x188 + 0x38);
    *puVar22 = 0;
    thunk_FUN_01b4f09c(puVar22,0);
    auVar40 = local_80;
    if (lVar26 == 0) goto LAB_0398b3c8;
    cVar12 = FUN_0397c1fc(lVar26,0);
    if (cVar12 == '\x01') {
      lVar20 = FUN_039778ec(lVar26,0);
      auVar40 = local_80;
      if (lVar20 == 0) goto LAB_0398b3c8;
      iVar13 = FUN_03972440(lVar20,0);
      auVar40 = local_80;
      if (*plVar35 == 0) goto LAB_0398b3c8;
      iVar14 = FUN_03972440(*plVar35,0);
      if (iVar13 != iVar14) {
        plVar23 = (long *)FUN_039778ec(lVar26,0);
        if (plVar23 == (long *)0x0) {
          plVar23 = (long *)0x0;
          *plVar35 = 0;
        }
        else {
          lVar20 = *(long *)PTR_DAT_03daca28;
          bVar4 = *(byte *)(lVar20 + 0x130);
          if (*(byte *)(*plVar23 + 0x130) < bVar4) {
            plVar29 = (long *)0x0;
          }
          else {
            plVar29 = plVar23;
            if (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar4 * 8 + -8) != lVar20) {
              plVar29 = (long *)0x0;
            }
          }
          *plVar35 = (long)plVar29;
          if (*(byte *)(*plVar23 + 0x130) < bVar4) {
            plVar23 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar4 * 8 + -8) != lVar20) {
            plVar23 = (long *)0x0;
          }
        }
        thunk_FUN_01b4f09c(plVar35,plVar23);
      }
      bVar11 = iVar13 != iVar14;
      auVar40 = local_80;
      if (*plVar35 == 0) goto LAB_0398b3c8;
      lVar20 = FUN_0396def4(*plVar35,0);
      auVar40 = local_80;
      if (lVar20 == 0) goto LAB_0398b3c8;
      lVar20 = *(long *)(lVar20 + 0x38);
      uVar16 = FUN_0396ef70(lVar26,0);
      auVar40 = local_80;
      if (lVar20 == 0) goto LAB_0398b3c8;
      uVar19 = FUN_02630bd0(lVar20,uVar16,&local_70,*(undefined8 *)PTR_DAT_03dad448);
      if ((uVar19 & 1) == 0) goto LAB_0398ac1c;
      if (local_70 == 0) {
        if (*(char *)(param_1 + 0x19e8) != '\0') goto LAB_0398b0dc;
        goto LAB_0398b0e8;
      }
      iVar13 = 0;
      auVar40 = local_80;
      while (local_80 = auVar40, iVar13 < *(int *)(local_70 + 0x18)) {
        auVar40 = FUN_02b38eac(local_70,iVar13,*(undefined8 *)PTR_DAT_03dacaf8);
        local_80 = auVar40;
        lVar20 = FUN_0396d670(local_80,0);
        auVar40 = local_80;
        if (lVar20 == 0) goto LAB_0398b3c8;
        uVar19 = *(ulong *)(lVar20 + 0x18);
        iVar14 = FUN_0396d678(local_80,0);
        uVar15 = (uint)uVar19;
        if (1 < (int)uVar15) {
          uVar33 = 1;
          do {
            if (*(uint *)(param_2 + 0x18) <= uVar32 + uVar33) goto LAB_0398b3cc;
            auVar40 = local_80;
            if (*plVar35 == 0) goto LAB_0398b3c8;
            iVar17 = FUN_03972220(*plVar35,*(undefined4 *)
                                            (param_2 + (long)(int)(uVar32 + uVar33) * 0x10 + 0x24),0
                                 );
            lVar20 = FUN_0396d670(local_80,0);
            auVar40 = local_80;
            if (lVar20 == 0) goto LAB_0398b3c8;
            if (*(uint *)(lVar20 + 0x18) <= uVar33) goto LAB_0398b3cc;
            if (iVar17 != *(int *)(lVar20 + (long)(int)uVar33 * 4 + 0x20)) goto LAB_0398ab64;
            uVar33 = uVar33 + 1;
          } while (uVar15 != uVar33);
        }
        auVar40 = local_80;
        if (iVar14 != 0) {
          if (*plVar35 == 0) goto LAB_0398b3c8;
          uVar24 = FUN_03974698(*plVar35,iVar14,&local_88,0);
          auVar40 = local_80;
          if ((uVar24 & 1) != 0) {
            lVar20 = *plVar1;
            if (lVar20 == 0) goto LAB_0398b3c8;
            if (*(uint *)(lVar20 + 0x18) <= *(uint *)(param_1 + 0xe8)) goto LAB_0398b3cc;
            *(undefined8 *)(lVar20 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x188 + 0x38) = local_88
            ;
            thunk_FUN_01b4f09c();
            if ((int)uVar15 < 1) goto UnityEngine_UIElements_IMGUIContainer__get_canGrabFocus;
            uVar24 = 0;
            uVar33 = 0;
            if (uVar32 <= *(uint *)(param_2 + 0x18)) {
              uVar33 = *(uint *)(param_2 + 0x18) - uVar32;
            }
            goto LAB_0398abe0;
          }
        }
LAB_0398ab64:
        iVar13 = iVar13 + 1;
        if (local_70 == 0) goto LAB_0398b3c8;
      }
    }
    else {
      bVar11 = false;
    }
LAB_0398ac1c:
    lVar20 = *plVar1;
    auVar40 = local_80;
    if (lVar20 == 0) goto LAB_0398b3c8;
    if (*(uint *)(lVar20 + 0x18) <= *(uint *)(param_1 + 0xe8)) goto LAB_0398b3cc;
    lVar20 = lVar20 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x188;
    plVar23 = (long *)(lVar20 + 0x30);
    *plVar23 = lVar26;
    *(undefined1 *)(lVar20 + 0x28) = 1;
    thunk_FUN_01b4f09c(plVar23,lVar26);
    lVar20 = *plVar1;
    auVar40 = local_80;
    if (lVar20 == 0) goto LAB_0398b3c8;
    uVar15 = *(uint *)(param_1 + 0xe8);
    if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_0398b3cc;
    lVar30 = lVar20 + (long)(int)uVar15 * 0x188;
    *(undefined1 *)(lVar30 + 100) = local_64[0];
    *(short *)(lVar30 + 0x20) = (short)local_18c;
    if (*(uint *)(param_2 + 0x18) <= uVar32) goto LAB_0398b3cc;
    lVar30 = param_2 + (long)(int)uVar32 * 0x10;
    lVar20 = lVar20 + (long)(int)uVar15 * 0x188;
    *(undefined4 *)(lVar20 + 0x24) = *(undefined4 *)(lVar30 + 0x28);
    *(undefined4 *)(lVar20 + 0x2c) = *(undefined4 *)(lVar30 + 0x2c);
    *(long *)(lVar20 + 0x40) = *plVar35;
    thunk_FUN_01b4f09c();
    cVar12 = FUN_0397c1fc(lVar26,0);
    if (cVar12 == '\x02') {
      plVar23 = (long *)FUN_039778ec(lVar26,0);
      auVar40 = local_80;
      if (plVar23 == (long *)0x0) goto LAB_0398b3c8;
      bVar4 = *(byte *)(*(long *)PTR_DAT_03dacf18 + 0x130);
      if ((*(byte *)(*plVar23 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_03dacf18)
         ) goto LAB_0398b3c8;
      uVar15 = FUN_039790fc(plVar23[5],plVar23,plVar3,*(undefined8 *)(param_1 + 0x19e0),0);
      lVar26 = *(long *)(param_1 + 0x15b8);
      *(uint *)(param_1 + 0x78) = uVar15;
      auVar40 = local_80;
      if (lVar26 == 0) goto LAB_0398b3c8;
      if (*(uint *)(lVar26 + 0x18) <= uVar15) goto LAB_0398b3cc;
      lVar26 = lVar26 + (long)(int)uVar15 * 0x38;
      *(int *)(lVar26 + 0x54) = *(int *)(lVar26 + 0x54) + 1;
      lVar26 = *plVar1;
      if (lVar26 == 0) goto LAB_0398b3c8;
      uVar15 = *(uint *)(param_1 + 0xe8);
      if (*(uint *)(lVar26 + 0x18) <= uVar15) goto LAB_0398b3cc;
      lVar26 = lVar26 + (long)(int)uVar15 * 0x188;
      *(undefined1 *)(lVar26 + 0x28) = 2;
      *(undefined4 *)(lVar26 + 0x60) = *(undefined4 *)(param_1 + 0x78);
      *pcVar2 = '\x01';
      *(undefined4 *)(param_1 + 0x78) = uVar18;
LAB_0398ad9c:
      local_1b4 = local_1b4 + 1;
    }
    else {
      if (bVar11) {
        auVar40 = local_80;
        if (*plVar35 == 0) goto LAB_0398b3c8;
        iVar13 = FUN_03972440(*plVar35,0);
        auVar40 = local_80;
        if (*(long *)(param_3 + 0x40) == 0) goto LAB_0398b3c8;
        iVar14 = FUN_03972440(*(long *)(param_3 + 0x40),0);
        if (iVar13 != iVar14) {
          auVar40 = local_80;
          if (lVar28 == 0) goto LAB_0398b3c8;
          if (*(char *)(lVar28 + 0x38) == '\0') {
            if (*plVar35 == 0) goto LAB_0398b3c8;
            uVar38 = *(undefined8 *)(*plVar35 + 0x28);
          }
          else {
            if (*plVar35 == 0) goto LAB_0398b3c8;
            uVar38 = *(undefined8 *)(*plVar35 + 0x28);
            lVar20 = *plVar36;
            if (*(int *)(*(long *)PTR_DAT_03dacdf8 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar38 = FUN_03978508(lVar20,uVar38,0);
          }
          *(undefined8 *)(param_1 + 0x70) = uVar38;
          thunk_FUN_01b4f09c(plVar36);
          uVar16 = FUN_03978ecc(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),
                                plVar3,*(undefined8 *)(param_1 + 0x19e0),0);
          *(undefined4 *)(param_1 + 0x78) = uVar16;
        }
      }
      lVar20 = FUN_0397c204(lVar26,0);
      auVar40 = local_80;
      if (lVar20 == 0) goto LAB_0398b3c8;
      iVar13 = FUN_0396b18c(lVar20,0);
      if (0 < iVar13) {
        lVar20 = *plVar35;
        lVar30 = *plVar36;
        lVar26 = FUN_0397c204(lVar26,0);
        auVar40 = local_80;
        if (lVar26 == 0) goto LAB_0398b3c8;
        uVar16 = FUN_0396b18c(lVar26,0);
        if (*(int *)(*(long *)PTR_DAT_03dacdf8 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)PTR_DAT_03dacdf8);
        }
        uVar38 = FUN_03978b58(lVar20,lVar30,uVar16,0);
        *(undefined8 *)(param_1 + 0x70) = uVar38;
        thunk_FUN_01b4f09c(plVar36,uVar38);
        uVar16 = FUN_03978ecc(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68),plVar3
                              ,*(undefined8 *)(param_1 + 0x19e0),0);
        bVar11 = true;
        *(undefined4 *)(param_1 + 0x78) = uVar16;
      }
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar19 = FUN_02fdb080(local_18c,0);
      if ((local_18c != 0x200b) && ((uVar19 & 1) == 0)) {
        lVar26 = *(long *)(param_1 + 0x15b8);
        auVar40 = local_80;
        if (lVar26 == 0) goto LAB_0398b3c8;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(param_1 + 0x78)) goto LAB_0398b3cc;
        piVar27 = (int *)(lVar26 + (long)(int)*(uint *)(param_1 + 0x78) * 0x38 + 0x54);
        iVar13 = *piVar27;
        if (0x3ffe < iVar13) {
          uVar34 = *(undefined8 *)(param_1 + 0x70);
          uVar38 = thunk_FUN_01afaadc(*(undefined8 *)
                                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                                     );
          FUN_038ff0a8(uVar38,uVar34,0);
          uVar15 = FUN_03978ecc(uVar38,*(undefined8 *)(param_1 + 0x68),plVar3,
                                *(undefined8 *)(param_1 + 0x19e0),0);
          lVar26 = *(long *)(param_1 + 0x15b8);
          *(uint *)(param_1 + 0x78) = uVar15;
          auVar40 = local_80;
          if (lVar26 == 0) goto LAB_0398b3c8;
          if (*(uint *)(lVar26 + 0x18) <= uVar15) goto LAB_0398b3cc;
          piVar27 = (int *)(lVar26 + (long)(int)uVar15 * 0x38 + 0x54);
          iVar13 = *piVar27;
        }
        *piVar27 = iVar13 + 1;
      }
      lVar26 = *plVar1;
      auVar40 = local_80;
      if (lVar26 == 0) goto LAB_0398b3c8;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(param_1 + 0xe8)) goto LAB_0398b3cc;
      *(long *)(lVar26 + (long)(int)*(uint *)(param_1 + 0xe8) * 0x188 + 0x58) = *plVar36;
      thunk_FUN_01b4f09c();
      lVar26 = *plVar1;
      auVar40 = local_80;
      if (lVar26 == 0) goto LAB_0398b3c8;
      uVar15 = *(uint *)(param_1 + 0xe8);
      if (*(uint *)(lVar26 + 0x18) <= uVar15) goto LAB_0398b3cc;
      uVar33 = *(uint *)(param_1 + 0x78);
      *(uint *)(lVar26 + (long)(int)uVar15 * 0x188 + 0x60) = uVar33;
      lVar26 = *plVar3;
      if (lVar26 == 0) goto LAB_0398b3c8;
      if (*(uint *)(lVar26 + 0x18) <= uVar33) goto LAB_0398b3cc;
      *(bool *)(lVar26 + (long)(int)uVar33 * 0x38 + 0x41) = bVar11;
      if (bVar11) {
        puVar22 = (undefined8 *)(lVar26 + (long)(int)uVar33 * 0x38 + 0x48);
        *puVar22 = uVar37;
        thunk_FUN_01b4f09c(puVar22,uVar37);
        *(undefined8 *)(param_1 + 0x68) = uVar25;
        thunk_FUN_01b4f09c(plVar35);
        *(undefined8 *)(param_1 + 0x70) = uVar37;
        thunk_FUN_01b4f09c(plVar36,uVar37);
        uVar15 = *(uint *)(param_1 + 0xe8);
        *(undefined4 *)(param_1 + 0x78) = uVar18;
      }
    }
    *(uint *)(param_1 + 0xe8) = uVar15 + 1;
    uVar33 = uVar32;
LAB_0398b0b8:
    uVar15 = *(uint *)(param_2 + 0x18);
    uVar32 = uVar33 + 1;
    if ((int)uVar15 <= (int)uVar32) goto LAB_0398b0d0;
    goto LAB_0398a2d0;
  }
  local_1b4 = 0;
LAB_0398b0d0:
  if (*(char *)(param_1 + 0x19e8) != '\0') {
LAB_0398b0dc:
    *(undefined1 *)(param_1 + 0x19e8) = 0;
LAB_0398b38c:
    return *(undefined4 *)(param_1 + 0xe8);
  }
  auVar40 = local_80;
  if (param_4 != 0) {
LAB_0398b0e8:
    *(int *)(param_4 + 0x14) = local_1b4;
    auVar40 = local_80;
    if (*(long *)(param_1 + 0x19e0) != 0) {
      uVar15 = FUN_02554fc4(*(long *)(param_1 + 0x19e0),*(undefined8 *)PTR_DAT_03d9b168);
      plVar35 = (long *)(param_4 + 0x58);
      *(uint *)(param_4 + 0x2c) = uVar15;
      puVar9 = PTR_DAT_03dad318;
      auVar40 = local_80;
      if (*plVar35 != 0) {
        if (*(int *)(*plVar35 + 0x18) < (int)uVar15) {
          if (*(int *)(*(long *)PTR_DAT_03dad318 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_01f555b8(plVar35,uVar15,0,*(undefined8 *)PTR_DAT_03dad450);
        }
        if (*(char *)(param_1 + 0x2c) != '\0') {
          auVar40 = local_80;
          if (*plVar1 == 0) goto LAB_0398b3c8;
          iVar13 = *(int *)(param_1 + 0xe8);
          if (0x100 < *(int *)(*plVar1 + 0x18) - iVar13) {
            iVar14 = 0x100;
            if (0x100 < iVar13 + 1) {
              iVar14 = iVar13 + 1;
            }
            if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_01f556f8(plVar1,iVar14,1,*(undefined8 *)PTR_DAT_03dad458);
          }
        }
        puVar9 = PTR_DAT_03dace98;
        if (0 < (int)uVar15) {
          uVar32 = 0;
          do {
            lVar28 = *plVar3;
            auVar40 = local_80;
            if (lVar28 == 0) goto LAB_0398b3c8;
            if (*(uint *)(lVar28 + 0x18) <= uVar32) goto LAB_0398b3cc;
            lVar26 = *plVar35;
            if (lVar26 == 0) goto LAB_0398b3c8;
            if (*(uint *)(lVar26 + 0x18) <= uVar32) goto LAB_0398b3cc;
            lVar39 = (long)(int)uVar32;
            lVar30 = lVar26 + lVar39 * 0x58;
            lVar20 = *(long *)(lVar30 + 0x30);
            iVar13 = *(int *)(lVar28 + lVar39 * 0x38 + 0x54);
            __dest = (void *)(lVar30 + 0x20);
            if (lVar20 == 0) {
              local_d0 = 0;
              uStack_e8 = 0;
              local_f0 = 0;
              uStack_d8 = 0;
              uStack_e0 = 0;
              uStack_108 = 0;
              local_110 = 0;
              uStack_f8 = 0;
              local_100 = 0;
              uStack_118 = 0;
              local_120 = 0;
              FUN_03979bd8(&local_120,iVar13 + 1,0);
              memcpy(auStack_178,&local_120,0x58);
              if (*(uint *)(lVar26 + 0x18) <= uVar32) goto LAB_0398b3cc;
              memcpy(__dest,auStack_178,0x58);
              thunk_FUN_01b4f09c(lVar26 + lVar39 * 0x58 + 0x20,0);
            }
            else {
              iVar14 = *(int *)(lVar20 + 0x18);
              if (iVar14 < iVar13 * 4) {
                if (iVar13 < 0x401) {
                  iVar13 = FUN_039155e8(iVar13,0);
                }
                else {
LAB_0398b2bc:
                  iVar13 = iVar13 + 0x100;
                }
              }
              else {
                if (iVar14 + iVar13 * -4 < 0x401) goto LAB_0398b2f4;
                if (0x400 < iVar13) goto LAB_0398b2bc;
                iVar13 = FUN_039155e8(iVar13,0);
                if (iVar13 < 0x101) {
                  iVar13 = 0x100;
                }
              }
              if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_0397a180(__dest,iVar13,0);
            }
LAB_0398b2f4:
            lVar28 = *plVar35;
            auVar40 = local_80;
            if ((lVar28 == 0) || (lVar26 = *plVar3, lVar26 == 0)) goto LAB_0398b3c8;
            if ((*(uint *)(lVar26 + 0x18) <= uVar32) || (*(uint *)(lVar28 + 0x18) <= uVar32))
            goto LAB_0398b3cc;
            *(undefined8 *)(lVar28 + lVar39 * 0x58 + 0x68) =
                 *(undefined8 *)(lVar26 + lVar39 * 0x38 + 0x38);
            thunk_FUN_01b4f09c();
            lVar28 = *plVar35;
            auVar40 = local_80;
            if ((lVar28 == 0) || (lVar26 = *plVar3, lVar26 == 0)) goto LAB_0398b3c8;
            if (*(uint *)(lVar26 + 0x18) <= uVar32) goto LAB_0398b3cc;
            lVar26 = *(long *)(lVar26 + lVar39 * 0x38 + 0x28);
            if (lVar26 == 0) goto LAB_0398b3c8;
            uVar18 = FUN_0396deb4(lVar26,0);
            if (*(uint *)(lVar28 + 0x18) <= uVar32) goto LAB_0398b3cc;
            uVar32 = uVar32 + 1;
            *(undefined4 *)(lVar28 + lVar39 * 0x58 + 0x70) = uVar18;
          } while (uVar15 != uVar32);
        }
        goto LAB_0398b38c;
      }
    }
  }
LAB_0398b3c8:
  local_80 = auVar40;
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
  while( true ) {
    lVar20 = param_2 + (long)(int)(uVar32 + (int)uVar24) * 0x10;
    if (uVar24 == 0) {
      *(uint *)(lVar20 + 0x2c) = uVar15;
    }
    else {
      *(undefined4 *)(lVar20 + 0x24) = 0x1a;
    }
    uVar24 = uVar24 + 1;
    if ((uVar19 & 0xffffffff) == uVar24) break;
LAB_0398abe0:
    if (uVar33 == uVar24) goto LAB_0398b3cc;
  }
UnityEngine_UIElements_IMGUIContainer__get_canGrabFocus:
  uVar32 = (uVar32 + uVar15) - 1;
  goto LAB_0398ac1c;
}


