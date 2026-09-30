/*
FUNCTION_NAME: FUN_036b5658
ENTRY_POINT: 036b5658
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;telemetry_or_network_hits_7;frame_or_lifecycle_behavior
*/


undefined4 FUN_036b5658(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  void *__dest;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  long *plVar27;
  undefined8 uVar28;
  long *plVar29;
  long *plVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  ulong uVar33;
  uint *puVar34;
  long lVar35;
  int local_1ec;
  undefined1 auStack_1d0 [80];
  undefined1 auStack_180 [80];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  uint local_68;
  undefined1 local_64 [4];
  
  if ((DAT_03ff74c5 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_1543);
    thunk_FUN_01ad9084(PTR_DAT_03d9b168);
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9cb10);
    thunk_FUN_01ad9084(PTR_DAT_03d9c878);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                      );
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Current__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb18);
    thunk_FUN_01ad9084(StringLiteral_444);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb20);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb28);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb30);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb38);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb40);
    thunk_FUN_01ad9084(PTR_DAT_03d9c8a0);
    thunk_FUN_01ad9084(PTR_DAT_03d9c8e8);
    thunk_FUN_01ad9084(PTR_DAT_03d9c900);
    thunk_FUN_01ad9084(PTR_DAT_03d9c920);
    thunk_FUN_01ad9084(StringLiteral_2494);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb48);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb50);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb58);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb60);
    DAT_03ff74c5 = 1;
  }
  puVar8 = PTR_DAT_03d9c920;
  puVar6 = PTR_DAT_03d9c900;
  local_64[0] = 0;
  local_68 = 0;
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined1 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 600);
  FUN_0370516c(param_1 + 0x260,0);
  if ((*(byte *)(param_1 + 0x25c) & 1) == 0) {
    uVar14 = *(undefined4 *)(param_1 + 0x210);
  }
  else {
    uVar14 = 700;
  }
  *(undefined4 *)(param_1 + 0x214) = uVar14;
  puVar7 = PTR_DAT_03d9c8e8;
  FUN_02177328(param_1 + 0x218,uVar14,*(undefined8 *)puVar6);
  plVar27 = (long *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0xf8);
  thunk_FUN_01b4f09c(plVar27);
  plVar29 = (long *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x110);
  thunk_FUN_01b4f09c(plVar29);
  *(undefined4 *)(param_1 + 0x120) = 0;
  uVar14 = 0;
  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar8,0);
    uVar14 = *(undefined4 *)(param_1 + 0x120);
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  FUN_036b0978(*(undefined4 *)(param_1 + 0x618),&local_a0,uVar14,*(undefined8 *)(param_1 + 0x100),0,
               *(undefined8 *)(param_1 + 0x118));
  uStack_128 = uStack_98;
  local_130 = local_a0;
  uStack_118 = uStack_88;
  local_120 = local_90;
  uStack_108 = uStack_78;
  local_110 = local_80;
  local_100 = local_70;
  FUN_02177948(*(long *)(*(long *)puVar8 + 0xb8) + 0x10,&local_130,*(undefined8 *)puVar7);
  plVar19 = (long *)PTR_DAT_03d9c8a0;
  lVar15 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
  if (lVar15 == 0) goto thunk_FUN_01b48178;
  FUN_025553b0(lVar15,*(undefined8 *)StringLiteral_1543);
  FUN_036b0b30(*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x100),
               *(long *)(*(long *)puVar8 + 0xb8),
               *(undefined8 *)(*(long *)(*(long *)puVar8 + 0xb8) + 8));
  plVar1 = (long *)(param_1 + 0x368);
  if (*(long *)(param_1 + 0x368) == 0) {
    uVar14 = *(undefined4 *)(param_1 + 0x480);
    uVar28 = thunk_FUN_01afaadc(*plVar19);
    FUN_03703ff8(uVar28,uVar14,0);
    *(undefined8 *)(param_1 + 0x368) = uVar28;
    thunk_FUN_01b4f09c(plVar1,uVar28);
  }
  else {
    plVar30 = (long *)(*(long *)(param_1 + 0x368) + 0x38);
    lVar15 = *plVar30;
    if (lVar15 == 0) goto thunk_FUN_01b48178;
    iVar9 = *(int *)(param_1 + 0x480);
    if (*(int *)(lVar15 + 0x18) < iVar9) {
      if (*(int *)(*plVar19 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52d44(plVar30,iVar9,0,*(undefined8 *)PTR_DAT_03d9cb30);
    }
  }
  iVar9 = *(int *)(param_1 + 0x2e0);
  *(undefined4 *)(param_1 + 0x644) = 0;
  plVar30 = (long *)PTR_DAT_03d9c920;
  if (iVar9 == 1) {
    FUN_036f22cc(param_1,*(undefined8 *)(param_1 + 0x100),0);
    if (*(long *)(param_1 + 0x650) == 0) {
      *(undefined4 *)(param_1 + 0x2e0) = 3;
      uVar16 = FUN_036fb8c8(0);
      if ((uVar16 & 1) == 0) {
        if (*plVar27 == 0) goto thunk_FUN_01b48178;
        uVar28 = FUN_039230bc(*plVar27,0);
        uVar28 = FUN_02ee6c30(*(undefined8 *)PTR_DAT_03d9cb58,uVar28,*(undefined8 *)PTR_DAT_03d9cb60
                              ,0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                            );
        }
        FUN_038f3474(uVar28,param_1,0);
      }
    }
    else {
      if (*(long *)(param_1 + 0x658) == 0) goto thunk_FUN_01b48178;
      iVar9 = FUN_03922ce0(*(long *)(param_1 + 0x658),0);
      if (*plVar27 == 0) goto thunk_FUN_01b48178;
      iVar10 = FUN_03922ce0(*plVar27,0);
      if (iVar9 != iVar10) {
        uVar16 = FUN_036fba20(0);
        if ((uVar16 & 1) == 0) {
LAB_036b5a50:
          if (*(long *)(param_1 + 0x658) == 0) goto thunk_FUN_01b48178;
          *(undefined8 *)(param_1 + 0x660) = *(undefined8 *)(*(long *)(param_1 + 0x658) + 0x20);
        }
        else {
          if (*plVar29 == 0) goto thunk_FUN_01b48178;
          iVar9 = FUN_03922ce0(*plVar29,0);
          if ((*(long *)(param_1 + 0x658) == 0) ||
             (lVar15 = *(long *)(*(long *)(param_1 + 0x658) + 0x20), lVar15 == 0))
          goto thunk_FUN_01b48178;
          iVar10 = FUN_03922ce0(lVar15,0);
          if (iVar9 == iVar10) goto LAB_036b5a50;
          if (*(long *)(param_1 + 0x658) == 0) goto thunk_FUN_01b48178;
          uVar28 = *(undefined8 *)(param_1 + 0x118);
          uVar31 = *(undefined8 *)(*(long *)(param_1 + 0x658) + 0x20);
          if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar28 = FUN_036f7d2c(uVar28,uVar31,0);
          *(undefined8 *)(param_1 + 0x660) = uVar28;
          plVar30 = (long *)PTR_DAT_03d9c920;
        }
        thunk_FUN_01b4f09c(param_1 + 0x660);
        lVar15 = *plVar30;
        uVar28 = *(undefined8 *)(param_1 + 0x660);
        uVar31 = *(undefined8 *)(param_1 + 0x658);
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar15 = *plVar30;
        }
        uVar11 = FUN_036b0b30(uVar28,uVar31,*(long *)(lVar15 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
        *(uint *)(param_1 + 0x668) = uVar11;
        lVar15 = **(long **)(*plVar30 + 0xb8);
        if (lVar15 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar15 + 0x18) <= uVar11) {
LAB_036b7478:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        *(undefined4 *)(lVar15 + (long)(int)uVar11 * 0x38 + 0x54) = 0;
      }
    }
    iVar9 = *(int *)(param_1 + 0x2e0);
  }
  if (iVar9 == 6) {
    uVar28 = *(undefined8 *)(param_1 + 0x2e8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar16 = FUN_0391f968(uVar28,0,0);
    if (((uVar16 & 1) != 0) && (*(char *)(param_1 + 0x3f5) == '\0')) {
      plVar17 = *(long **)(param_1 + 0x2e8);
      if (plVar17 == (long *)0x0) goto thunk_FUN_01b48178;
      (**(code **)(*plVar17 + 0x558))
                (plVar17,**(undefined8 **)
                           (*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__ +
                           0xb8),*(undefined8 *)(*plVar17 + 0x560));
    }
  }
  if (param_2 != 0) {
    uVar11 = *(uint *)(param_2 + 0x18);
    if ((int)uVar11 < 1) {
      local_1ec = 0;
    }
    else {
      uVar26 = 0;
      local_1ec = 0;
      do {
        if (uVar11 <= uVar26) goto LAB_036b7478;
        puVar34 = (uint *)(param_2 + (long)(int)uVar26 * 0xc + 0x20);
        if (*puVar34 == 0) break;
        if (*plVar1 == 0) goto thunk_FUN_01b48178;
        plVar30 = (long *)(*plVar1 + 0x38);
        lVar15 = *plVar30;
        iVar9 = *(int *)(param_1 + 0x490);
        if ((lVar15 == 0) || (*(int *)(lVar15 + 0x18) <= iVar9)) {
          if (*(int *)(*plVar19 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_01f52d44(plVar30,iVar9 + 1,1,*(undefined8 *)PTR_DAT_03d9cb30);
          uVar11 = *(uint *)(param_2 + 0x18);
        }
        if (uVar11 <= uVar26) goto LAB_036b7478;
        uVar11 = *puVar34;
        if ((uVar11 == 0x3c) && (*(char *)(param_1 + 0x302) != '\0')) {
          uVar14 = *(undefined4 *)(param_1 + 0x120);
          uVar16 = FUN_036e7318(param_1,param_2,uVar26 + 1,&local_68,0);
          uVar12 = local_68;
          if ((uVar16 & 1) == 0) goto LAB_036b5ed4;
          if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_036b7478;
          iVar9 = *(int *)(param_2 + (long)(int)uVar26 * 0xc + 0x24);
          if ((*(byte *)(param_1 + 0x25c) & 1) != 0) {
            *(undefined1 *)(param_1 + 0x26a) = 1;
          }
          puVar6 = PTR_DAT_03d9c920;
          plVar30 = (long *)PTR_DAT_03d9c920;
          uVar26 = local_68;
          if (*(int *)(param_1 + 0x644) == 1) {
            lVar15 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar15 = *(long *)puVar6;
            }
            lVar15 = **(long **)(lVar15 + 0xb8);
            if (lVar15 != 0) {
              if (*(uint *)(param_1 + 0x120) < *(uint *)(lVar15 + 0x18)) {
                lVar15 = lVar15 + (long)(int)*(uint *)(param_1 + 0x120) * 0x38;
                *(int *)(lVar15 + 0x54) = *(int *)(lVar15 + 0x54) + 1;
                if ((*plVar1 != 0) && (lVar15 = *(long *)(*plVar1 + 0x38), lVar15 != 0)) {
                  if (*(uint *)(param_1 + 0x490) < *(uint *)(lVar15 + 0x18)) {
                    uVar13 = *(undefined4 *)(param_1 + 0x6a4);
                    lVar15 = lVar15 + (long)(int)*(uint *)(param_1 + 0x490) * 0x178;
                    *(short *)(lVar15 + 0x20) = (short)uVar13 + -0x2000;
                    *(undefined4 *)(lVar15 + 0x48) = uVar13;
                    *(long *)(lVar15 + 0x38) = *plVar27;
                    thunk_FUN_01b4f09c();
                    if ((*plVar1 != 0) && (lVar15 = *(long *)(*plVar1 + 0x38), lVar15 != 0)) {
                      if (*(uint *)(param_1 + 0x490) < *(uint *)(lVar15 + 0x18)) {
                        *(undefined8 *)
                         (lVar15 + (long)(int)*(uint *)(param_1 + 0x490) * 0x178 + 0x40) =
                             *(undefined8 *)(param_1 + 0x698);
                        thunk_FUN_01b4f09c();
                        if ((*plVar1 != 0) && (lVar15 = *(long *)(*plVar1 + 0x38), lVar15 != 0)) {
                          uVar11 = *(uint *)(param_1 + 0x490);
                          if (uVar11 < *(uint *)(lVar15 + 0x18)) {
                            *(undefined4 *)(lVar15 + (long)(int)uVar11 * 0x178 + 0x58) =
                                 *(undefined4 *)(param_1 + 0x120);
                            if ((*(long *)(param_1 + 0x698) != 0) &&
                               (lVar18 = FUN_036fe7c0(*(long *)(param_1 + 0x698),0), lVar18 != 0)) {
                              uVar28 = FUN_02b59714(lVar18,*(undefined4 *)(param_1 + 0x6a4),
                                                    *(undefined8 *)PTR_DAT_03d9c878);
                              if (uVar11 < *(uint *)(lVar15 + 0x18)) {
                                *(undefined8 *)(lVar15 + (long)(int)uVar11 * 0x178 + 0x30) = uVar28;
                                thunk_FUN_01b4f09c();
                                if ((*plVar1 != 0) &&
                                   (lVar15 = *(long *)(*plVar1 + 0x38), lVar15 != 0)) {
                                  uVar11 = *(uint *)(param_1 + 0x490);
                                  if (uVar11 < *(uint *)(lVar15 + 0x18)) {
                                    uVar13 = *(undefined4 *)(param_1 + 0x644);
                                    lVar18 = lVar15 + (long)(int)uVar11 * 0x178;
                                    *(int *)(lVar18 + 0x24) = iVar9;
                                    *(undefined4 *)(lVar18 + 0x2c) = uVar13;
                                    if (uVar12 < *(uint *)(param_2 + 0x18)) {
                                      *(int *)(lVar15 + (long)(int)uVar11 * 0x178 + 0x28) =
                                           (*(int *)(param_2 + (long)(int)uVar12 * 0xc + 0x24) -
                                           iVar9) + 1;
                                      *(undefined4 *)(param_1 + 0x644) = 0;
                                      *(undefined4 *)(param_1 + 0x120) = uVar14;
                                      local_1ec = local_1ec + 1;
                                      plVar30 = (long *)PTR_DAT_03d9c920;
                                      uVar26 = uVar12;
                                      goto LAB_036b6be0;
                                    }
                                  }
                                  goto LAB_036b7478;
                                }
                                goto thunk_FUN_01b48178;
                              }
                              goto LAB_036b7478;
                            }
                            goto thunk_FUN_01b48178;
                          }
                          goto LAB_036b7478;
                        }
                        goto thunk_FUN_01b48178;
                      }
                      goto LAB_036b7478;
                    }
                    goto thunk_FUN_01b48178;
                  }
                  goto LAB_036b7478;
                }
                goto thunk_FUN_01b48178;
              }
              goto LAB_036b7478;
            }
            goto thunk_FUN_01b48178;
          }
        }
        else {
LAB_036b5ed4:
          uVar31 = *(undefined8 *)(param_1 + 0x100);
          uVar28 = *(undefined8 *)(param_1 + 0x118);
          uVar14 = *(undefined4 *)(param_1 + 0x120);
          if (*(int *)(param_1 + 0x644) != 0) goto LAB_036b5fac;
          uVar12 = *(uint *)(param_1 + 0x25c);
          if ((uVar12 >> 4 & 1) == 0) {
            if ((uVar12 >> 3 & 1) == 0) {
              if ((uVar12 >> 5 & 1) != 0) goto LAB_036b5f00;
            }
            else {
              if (*(int *)(*(long *)
                            Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar16 = FUN_02fdd92c(uVar11,0);
              if ((uVar16 & 1) != 0) {
                if (*(int *)(*(long *)
                              Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar11 = FUN_02fdddc0(uVar11,0);
                goto LAB_036b5fa8;
              }
            }
          }
          else {
LAB_036b5f00:
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar16 = FUN_02fdd9e8(uVar11,0);
            if ((uVar16 & 1) != 0) {
              if (*(int *)(*(long *)
                            Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar11 = FUN_02fddc48(uVar11,0);
LAB_036b5fa8:
              uVar11 = uVar11 & 0xffff;
            }
          }
LAB_036b5fac:
          lVar15 = FUN_036f260c(param_1,uVar11,*(undefined8 *)(param_1 + 0x100),
                                *(undefined4 *)(param_1 + 0x25c),*(undefined4 *)(param_1 + 0x214),
                                local_64,0);
          if (lVar15 == 0) {
            iVar9 = FUN_036fb88c();
            if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_036b7478;
            if (iVar9 == 0) {
              uVar12 = 0x25a1;
            }
            else {
              uVar12 = FUN_036fb88c(0);
            }
            *puVar34 = uVar12;
            uVar32 = *(undefined8 *)(param_1 + 0x100);
            uVar13 = *(undefined4 *)(param_1 + 0x25c);
            uVar3 = *(undefined4 *)(param_1 + 0x214);
            if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            lVar15 = FUN_036d1ff4(uVar12,uVar32,1,uVar13,uVar3,local_64,0);
            if (lVar15 == 0) {
              lVar15 = FUN_036fba04();
              if (lVar15 != 0) {
                lVar15 = FUN_036fba04(0);
                if (lVar15 == 0) goto thunk_FUN_01b48178;
                if (0 < *(int *)(lVar15 + 0x18)) {
                  uVar23 = *(undefined8 *)(param_1 + 0x100);
                  uVar32 = FUN_036fba04(0);
                  uVar13 = *(undefined4 *)(param_1 + 0x25c);
                  uVar3 = *(undefined4 *)(param_1 + 0x214);
                  if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
                  }
                  lVar15 = FUN_036d2514(uVar12,uVar23,uVar32,1,uVar13,uVar3,local_64,0);
                  if (lVar15 != 0) goto LAB_036b605c;
                }
              }
              uVar32 = FUN_036fb8e4(0);
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)
                                    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                  );
              }
              uVar16 = FUN_0391f968(uVar32,0,0);
              if ((uVar16 & 1) != 0) {
                uVar32 = FUN_036fb8e4(0);
                uVar13 = *(undefined4 *)(param_1 + 0x25c);
                uVar3 = *(undefined4 *)(param_1 + 0x214);
                if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
                }
                lVar15 = FUN_036d1ff4(uVar12,uVar32,1,uVar13,uVar3,local_64,0);
                if (lVar15 != 0) goto LAB_036b605c;
              }
              if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_036b7478;
              *puVar34 = 0x20;
              uVar32 = *(undefined8 *)(param_1 + 0x100);
              uVar13 = *(undefined4 *)(param_1 + 0x25c);
              uVar3 = *(undefined4 *)(param_1 + 0x214);
              if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar12 = 0x20;
              lVar15 = FUN_036d1ff4(0x20,uVar32,1,uVar13,uVar3,local_64,0);
              if (lVar15 == 0) {
                if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_036b7478;
                *puVar34 = 3;
                uVar32 = *(undefined8 *)(param_1 + 0x100);
                uVar13 = *(undefined4 *)(param_1 + 0x25c);
                uVar3 = *(undefined4 *)(param_1 + 0x214);
                if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar12 = 3;
                lVar15 = FUN_036d1ff4(3,uVar32,1,uVar13,uVar3,local_64,0);
              }
            }
LAB_036b605c:
            uVar16 = FUN_036fb8c8(0);
            if ((uVar16 & 1) == 0) {
              plVar19 = (long *)FUN_01b47fd0(*(undefined8 *)
                                              Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                             ,4);
              if ((int)uVar11 < 0x10000) {
                local_130 = CONCAT44(local_130._4_4_,uVar11);
                lVar18 = thunk_FUN_01afa70c(*(undefined8 *)
                                             Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                            ,&local_130);
                if (plVar19 == (long *)0x0) goto thunk_FUN_01b48178;
                if ((lVar18 != 0) &&
                   (lVar35 = thunk_FUN_01afa9e0(lVar18,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar35 == 0)) goto LAB_036b747c;
                if ((int)plVar19[3] == 0) goto LAB_036b7478;
                plVar19[4] = lVar18;
                thunk_FUN_01b4f09c(plVar19 + 4,lVar18);
                if (*(long *)(param_1 + 0xf8) == 0) goto thunk_FUN_01b48178;
                lVar18 = FUN_039230bc(*(long *)(param_1 + 0xf8),0);
                if ((lVar18 != 0) &&
                   (lVar35 = thunk_FUN_01afa9e0(lVar18,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar35 == 0)) goto LAB_036b747c;
                if (*(uint *)(plVar19 + 3) < 2) goto LAB_036b7478;
                plVar19[5] = lVar18;
                thunk_FUN_01b4f09c(plVar19 + 5,lVar18);
                if (lVar15 == 0) goto thunk_FUN_01b48178;
                local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(lVar15 + 0x14));
                lVar18 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&local_a0);
                if ((lVar18 != 0) &&
                   (lVar35 = thunk_FUN_01afa9e0(lVar18,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar35 == 0)) goto LAB_036b747c;
                if (*(uint *)(plVar19 + 3) < 3) goto LAB_036b7478;
                plVar19[6] = lVar18;
                thunk_FUN_01b4f09c(plVar19 + 6,lVar18);
                lVar18 = FUN_039230bc(param_1,0);
                if ((lVar18 != 0) &&
                   (lVar35 = thunk_FUN_01afa9e0(lVar18,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar35 == 0)) goto LAB_036b747c;
                if (*(uint *)(plVar19 + 3) < 4) goto LAB_036b7478;
                plVar19[7] = lVar18;
                thunk_FUN_01b4f09c(plVar19 + 7,lVar18);
                puVar22 = (undefined8 *)PTR_DAT_03d9cb50;
              }
              else {
                local_130 = CONCAT44(local_130._4_4_,uVar11);
                lVar18 = thunk_FUN_01afa70c(*(undefined8 *)
                                             Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                            ,&local_130);
                if (plVar19 == (long *)0x0) goto thunk_FUN_01b48178;
                if ((lVar18 != 0) &&
                   (lVar35 = thunk_FUN_01afa9e0(lVar18,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar35 == 0)) goto LAB_036b747c;
                if ((int)plVar19[3] == 0) goto LAB_036b7478;
                plVar19[4] = lVar18;
                thunk_FUN_01b4f09c(plVar19 + 4,lVar18);
                if (*(long *)(param_1 + 0xf8) == 0) goto thunk_FUN_01b48178;
                lVar18 = FUN_039230bc(*(long *)(param_1 + 0xf8),0);
                if ((lVar18 != 0) &&
                   (lVar35 = thunk_FUN_01afa9e0(lVar18,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar35 == 0)) goto LAB_036b747c;
                if (*(uint *)(plVar19 + 3) < 2) goto LAB_036b7478;
                plVar19[5] = lVar18;
                thunk_FUN_01b4f09c(plVar19 + 5,lVar18);
                if (lVar15 == 0) goto thunk_FUN_01b48178;
                local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(lVar15 + 0x14));
                lVar18 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&local_a0);
                if ((lVar18 != 0) &&
                   (lVar35 = thunk_FUN_01afa9e0(lVar18,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar35 == 0)) goto LAB_036b747c;
                if (*(uint *)(plVar19 + 3) < 3) goto LAB_036b7478;
                plVar19[6] = lVar18;
                thunk_FUN_01b4f09c(plVar19 + 6,lVar18);
                lVar18 = FUN_039230bc(param_1,0);
                if ((lVar18 != 0) &&
                   (lVar35 = thunk_FUN_01afa9e0(lVar18,*(undefined8 *)(*plVar19 + 0x40)),
                   lVar35 == 0)) goto LAB_036b747c;
                if (*(uint *)(plVar19 + 3) < 4) goto LAB_036b7478;
                plVar19[7] = lVar18;
                thunk_FUN_01b4f09c(plVar19 + 7,lVar18);
                puVar22 = (undefined8 *)PTR_DAT_03d9cb48;
              }
              uVar32 = FUN_02ee71a8(*puVar22,plVar19,0);
              if (*(int *)(*(long *)
                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_038f3474(uVar32,param_1,0);
              uVar11 = uVar12;
            }
            else {
              uVar11 = uVar12;
              if (lVar15 == 0) goto thunk_FUN_01b48178;
            }
          }
          if (*(char *)(lVar15 + 0x10) == '\x01') {
            if (*(long *)(lVar15 + 0x18) == 0) goto thunk_FUN_01b48178;
            iVar9 = FUN_036c1bb4(*(long *)(lVar15 + 0x18),0);
            if (*plVar27 == 0) goto thunk_FUN_01b48178;
            iVar10 = FUN_036c1bb4(*plVar27,0);
            if (iVar9 == iVar10) goto LAB_036b6570;
            plVar19 = *(long **)(lVar15 + 0x18);
            if (plVar19 == (long *)0x0) {
              plVar19 = (long *)0x0;
              *plVar27 = 0;
            }
            else {
              lVar18 = *(long *)StringLiteral_444;
              bVar4 = *(byte *)(lVar18 + 0x130);
              if (*(byte *)(*plVar19 + 0x130) < bVar4) {
                plVar30 = (long *)0x0;
              }
              else {
                plVar30 = plVar19;
                if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar4 * 8 + -8) != lVar18) {
                  plVar30 = (long *)0x0;
                }
              }
              *plVar27 = (long)plVar30;
              if (*(byte *)(*plVar19 + 0x130) < bVar4) {
                plVar19 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar4 * 8 + -8) != lVar18) {
                plVar19 = (long *)0x0;
              }
            }
            thunk_FUN_01b4f09c(plVar27,plVar19);
            bVar5 = true;
          }
          else {
LAB_036b6570:
            bVar5 = false;
          }
          if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x38), lVar18 == 0))
          goto thunk_FUN_01b48178;
          if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x490)) goto LAB_036b7478;
          lVar18 = lVar18 + (long)(int)*(uint *)(param_1 + 0x490) * 0x178;
          plVar19 = (long *)(lVar18 + 0x30);
          *plVar19 = lVar15;
          *(undefined4 *)(lVar18 + 0x2c) = 0;
          thunk_FUN_01b4f09c(plVar19,lVar15);
          if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x38), lVar18 == 0))
          goto thunk_FUN_01b48178;
          uVar12 = *(uint *)(param_1 + 0x490);
          if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_036b7478;
          lVar35 = lVar18 + (long)(int)uVar12 * 0x178;
          *(short *)(lVar35 + 0x20) = (short)uVar11;
          *(undefined1 *)(lVar35 + 0x5c) = local_64[0];
          if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_036b7478;
          lVar18 = lVar18 + (long)(int)uVar12 * 0x178;
          *(undefined8 *)(lVar18 + 0x24) = *(undefined8 *)(param_2 + (long)(int)uVar26 * 0xc + 0x24)
          ;
          *(long *)(lVar18 + 0x38) = *plVar27;
          thunk_FUN_01b4f09c();
          plVar30 = (long *)PTR_DAT_03d9c920;
          if (*(char *)(lVar15 + 0x10) == '\x02') {
            plVar19 = *(long **)(lVar15 + 0x18);
            if (plVar19 == (long *)0x0) goto thunk_FUN_01b48178;
            bVar4 = *(byte *)(*(long *)PTR_DAT_03d9cb28 + 0x130);
            if ((*(byte *)(*plVar19 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar4 * 8 + -8) !=
                *(long *)PTR_DAT_03d9cb28)) goto thunk_FUN_01b48178;
            lVar35 = plVar19[4];
            lVar18 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar18 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar18 = *plVar30;
            }
            uVar11 = FUN_036b0d60(lVar35,plVar19,*(long *)(lVar18 + 0xb8),
                                  *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
            *(uint *)(param_1 + 0x120) = uVar11;
            lVar18 = **(long **)(*plVar30 + 0xb8);
            if (lVar18 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_036b7478;
            lVar18 = lVar18 + (long)(int)uVar11 * 0x38;
            *(int *)(lVar18 + 0x54) = *(int *)(lVar18 + 0x54) + 1;
            if ((*plVar1 == 0) || (lVar18 = *(long *)(*plVar1 + 0x38), lVar18 == 0))
            goto thunk_FUN_01b48178;
            if (*(uint *)(lVar18 + 0x18) <= *(uint *)(param_1 + 0x490)) goto LAB_036b7478;
            lVar18 = lVar18 + (long)(int)*(uint *)(param_1 + 0x490) * 0x178;
            *(undefined4 *)(lVar18 + 0x2c) = 1;
            uVar13 = *(undefined4 *)(param_1 + 0x120);
            *(undefined8 *)(lVar18 + 0x40) = plVar19;
            *(undefined4 *)(lVar18 + 0x58) = uVar13;
            thunk_FUN_01b4f09c((undefined8 *)(lVar18 + 0x40),plVar19);
            plVar30 = (long *)PTR_DAT_03d9c920;
            if ((*(long *)(param_1 + 0x368) == 0) ||
               (lVar18 = *(long *)(*(long *)(param_1 + 0x368) + 0x38), lVar18 == 0))
            goto thunk_FUN_01b48178;
            uVar11 = *(uint *)(param_1 + 0x490);
            if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_036b7478;
            *(undefined4 *)(lVar18 + (long)(int)uVar11 * 0x178 + 0x48) =
                 *(undefined4 *)(lVar15 + 0x28);
            *(undefined4 *)(param_1 + 0x644) = 0;
            *(undefined4 *)(param_1 + 0x120) = uVar14;
            local_1ec = local_1ec + 1;
            plVar19 = (long *)PTR_DAT_03d9c8a0;
          }
          else {
            if (bVar5) {
              if (*plVar27 == 0) goto thunk_FUN_01b48178;
              iVar9 = FUN_036c1bb4(*plVar27,0);
              if (*(long *)(param_1 + 0xf8) == 0) goto thunk_FUN_01b48178;
              iVar10 = FUN_036c1bb4(*(long *)(param_1 + 0xf8),0);
              if (iVar9 != iVar10) {
                uVar16 = FUN_036fba20(0);
                if ((uVar16 & 1) == 0) {
                  if (*plVar27 == 0) goto thunk_FUN_01b48178;
                  lVar18 = *(long *)(*plVar27 + 0x20);
                }
                else {
                  if (*plVar27 == 0) goto thunk_FUN_01b48178;
                  lVar18 = *plVar29;
                  uVar32 = *(undefined8 *)(*plVar27 + 0x20);
                  if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  lVar18 = FUN_036f7d2c(lVar18,uVar32,0);
                }
                *plVar29 = lVar18;
                thunk_FUN_01b4f09c(plVar29);
                lVar18 = *plVar30;
                lVar35 = *plVar29;
                lVar24 = *plVar27;
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar18 = *plVar30;
                }
                uVar13 = FUN_036b0b30(lVar35,lVar24,*(long *)(lVar18 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
                *(undefined4 *)(param_1 + 0x120) = uVar13;
              }
            }
            if (*(long *)(lVar15 + 0x20) == 0) goto thunk_FUN_01b48178;
            iVar9 = FUN_0396b18c(*(long *)(lVar15 + 0x20),0);
            if (0 < iVar9) {
              if (*(long *)(lVar15 + 0x20) == 0) goto thunk_FUN_01b48178;
              lVar18 = *plVar27;
              lVar35 = *plVar29;
              uVar13 = FUN_0396b18c(*(long *)(lVar15 + 0x20),0);
              if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb20);
              }
              lVar15 = FUN_036f77c8(lVar18,lVar35,uVar13,0);
              *plVar29 = lVar15;
              thunk_FUN_01b4f09c(plVar29,lVar15);
              lVar15 = *plVar30;
              lVar18 = *plVar29;
              lVar35 = *plVar27;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar15 = *plVar30;
              }
              uVar13 = FUN_036b0b30(lVar18,lVar35,*(long *)(lVar15 + 0xb8),
                                    *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
              bVar5 = true;
              *(undefined4 *)(param_1 + 0x120) = uVar13;
            }
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar16 = FUN_02fdb080(uVar11,0);
            plVar19 = (long *)PTR_DAT_03d9c8a0;
            if ((uVar11 != 0x200b) && ((uVar16 & 1) == 0)) {
              lVar15 = *plVar30;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01ac7298(lVar15);
                lVar15 = *plVar30;
              }
              lVar18 = **(long **)(lVar15 + 0xb8);
              if (lVar18 == 0) goto thunk_FUN_01b48178;
              uVar11 = *(uint *)(param_1 + 0x120);
              if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_036b7478;
              if (*(int *)(lVar18 + (long)(int)uVar11 * 0x38 + 0x54) < 0x3fff) {
                if (*(int *)(lVar15 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(lVar15);
                  lVar18 = **(long **)(*plVar30 + 0xb8);
                  if (lVar18 == 0) goto thunk_FUN_01b48178;
                  uVar11 = *(uint *)(param_1 + 0x120);
                }
              }
              else {
                lVar15 = *plVar29;
                uVar32 = thunk_FUN_01afaadc(*(undefined8 *)
                                             Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                                           );
                FUN_038ff0a8(uVar32,lVar15,0);
                lVar15 = *plVar30;
                lVar18 = *plVar27;
                if (*(int *)(lVar15 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar15 = *plVar30;
                }
                uVar11 = FUN_036b0b30(uVar32,lVar18,*(long *)(lVar15 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
                *(uint *)(param_1 + 0x120) = uVar11;
                lVar18 = **(long **)(*plVar30 + 0xb8);
                if (lVar18 == 0) goto thunk_FUN_01b48178;
              }
              if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_036b7478;
              lVar18 = lVar18 + (long)(int)uVar11 * 0x38;
              *(int *)(lVar18 + 0x54) = *(int *)(lVar18 + 0x54) + 1;
            }
            if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x38), lVar15 == 0))
            goto thunk_FUN_01b48178;
            if (*(uint *)(lVar15 + 0x18) <= *(uint *)(param_1 + 0x490)) goto LAB_036b7478;
            *(long *)(lVar15 + (long)(int)*(uint *)(param_1 + 0x490) * 0x178 + 0x50) = *plVar29;
            thunk_FUN_01b4f09c();
            if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x38), lVar15 == 0))
            goto thunk_FUN_01b48178;
            if (*(uint *)(lVar15 + 0x18) <= *(uint *)(param_1 + 0x490)) goto LAB_036b7478;
            uVar11 = *(uint *)(param_1 + 0x120);
            *(uint *)(lVar15 + (long)(int)*(uint *)(param_1 + 0x490) * 0x178 + 0x58) = uVar11;
            lVar15 = *plVar30;
            if (*(int *)(lVar15 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar15 = *plVar30;
              uVar11 = *(uint *)(param_1 + 0x120);
            }
            lVar18 = **(long **)(lVar15 + 0xb8);
            if (lVar18 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_036b7478;
            *(bool *)(lVar18 + (long)(int)uVar11 * 0x38 + 0x41) = bVar5;
            if (bVar5) {
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar18 = **(long **)(*plVar30 + 0xb8);
                if (lVar18 == 0) goto thunk_FUN_01b48178;
                uVar11 = *(uint *)(param_1 + 0x120);
              }
              if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_036b7478;
              puVar22 = (undefined8 *)(lVar18 + (long)(int)uVar11 * 0x38 + 0x48);
              *puVar22 = uVar28;
              thunk_FUN_01b4f09c(puVar22,uVar28);
              *(undefined8 *)(param_1 + 0x100) = uVar31;
              thunk_FUN_01b4f09c(plVar27);
              *(undefined8 *)(param_1 + 0x118) = uVar28;
              thunk_FUN_01b4f09c(plVar29,uVar28);
              *(undefined4 *)(param_1 + 0x120) = uVar14;
            }
            uVar11 = *(uint *)(param_1 + 0x490);
          }
LAB_036b6be0:
          *(uint *)(param_1 + 0x490) = uVar11 + 1;
        }
        uVar11 = *(uint *)(param_2 + 0x18);
        uVar26 = uVar26 + 1;
      } while ((int)uVar26 < (int)uVar11);
    }
    if (*(char *)(param_1 + 0x3f5) != '\0') {
      *(undefined1 *)(param_1 + 0x3f5) = 0;
LAB_036b6c0c:
      return *(undefined4 *)(param_1 + 0x490);
    }
    lVar15 = *plVar1;
    if (lVar15 != 0) {
      *(int *)(lVar15 + 0x1c) = local_1ec;
      lVar18 = *plVar30;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar18 = *plVar30;
      }
      lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 8);
      if (lVar18 != 0) {
        uVar11 = FUN_02554fc4(lVar18,*(undefined8 *)PTR_DAT_03d9b168);
        *(uint *)(lVar15 + 0x34) = uVar11;
        if (*plVar1 != 0) {
          plVar27 = (long *)(*plVar1 + 0x60);
          lVar15 = *plVar27;
          if (lVar15 != 0) {
            uVar16 = (ulong)uVar11;
            if (*(int *)(lVar15 + 0x18) < (int)uVar11) {
              if (*(int *)(*plVar19 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_01f52de4(plVar27,uVar16,0,*(undefined8 *)PTR_DAT_03d9cb38);
            }
            if (*(long *)(param_1 + 0x708) != 0) {
              plVar27 = (long *)(param_1 + 0x708);
              if (*(int *)(*(long *)(param_1 + 0x708) + 0x18) < (int)uVar11) {
                uVar14 = FUN_039155e8(uVar11 + 1,0);
                if (*(int *)(*plVar19 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*plVar19);
                }
                FUN_01f52b30(plVar27,uVar14,*(undefined8 *)PTR_DAT_03d9cb40);
              }
              if (*(char *)(param_1 + 0x321) != '\0') {
                if (*plVar1 == 0) goto thunk_FUN_01b48178;
                plVar29 = (long *)(*plVar1 + 0x38);
                lVar15 = *plVar29;
                if (lVar15 == 0) goto thunk_FUN_01b48178;
                iVar9 = *(int *)(param_1 + 0x490);
                if (0x100 < *(int *)(lVar15 + 0x18) - iVar9) {
                  iVar10 = 0x100;
                  if (0x100 < iVar9 + 1) {
                    iVar10 = iVar9 + 1;
                  }
                  if (*(int *)(*plVar19 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  FUN_01f52d44(plVar29,iVar10,1,*(undefined8 *)PTR_DAT_03d9cb30);
                  plVar30 = (long *)PTR_DAT_03d9c920;
                }
              }
              if (0 < (int)uVar11) {
                lVar15 = 0;
                uVar33 = 0;
                lVar18 = 0x54;
                lVar35 = 0x20;
                do {
                  if (uVar33 != 0) {
                    lVar24 = *plVar27;
                    if (lVar24 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036b7478;
                    uVar28 = *(undefined8 *)(lVar24 + uVar33 * 8 + 0x20);
                    if (*(int *)(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar20 = FUN_03922f24(uVar28,0,0);
                    if ((uVar20 & 1) != 0) {
                      lVar24 = *plVar30;
                      plVar29 = (long *)*plVar27;
                      if (*(int *)(lVar24 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                        lVar24 = *plVar30;
                      }
                      lVar24 = **(long **)(lVar24 + 0xb8);
                      if (lVar24 == 0) goto thunk_FUN_01b48178;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036b7478;
                      lVar24 = lVar24 + lVar18;
                      local_b0 = *(undefined8 *)(lVar24 + -4);
                      uStack_b8 = *(undefined8 *)(lVar24 + -0xc);
                      uStack_c0 = *(undefined8 *)(lVar24 + -0x14);
                      uStack_c8 = *(undefined8 *)(lVar24 + -0x1c);
                      local_d0 = *(undefined8 *)(lVar24 + -0x24);
                      uStack_d8 = *(undefined8 *)(lVar24 + -0x2c);
                      local_e0 = *(undefined8 *)(lVar24 + -0x34);
                      lVar24 = FUN_03701aec(param_1,&local_e0,0);
                      if (plVar29 == (long *)0x0) goto thunk_FUN_01b48178;
                      if ((lVar24 != 0) &&
                         (lVar21 = thunk_FUN_01afa9e0(lVar24,*(undefined8 *)(*plVar29 + 0x40)),
                         lVar21 == 0)) {
LAB_036b747c:
                        uVar28 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
                        FUN_01b48050(uVar28,0);
                      }
                      if (*(uint *)(plVar29 + 3) <= uVar33) goto LAB_036b7478;
                      plVar29[uVar33 + 4] = lVar24;
                      thunk_FUN_01b4f09c((long)plVar29 + lVar35,lVar24);
                      plVar30 = (long *)PTR_DAT_03d9c920;
                      if ((*plVar1 == 0) || (lVar24 = *(long *)(*plVar1 + 0x60), lVar24 == 0))
                      goto thunk_FUN_01b48178;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036b7478;
                      puVar22 = (undefined8 *)(lVar24 + lVar15 + 0x30);
                      *puVar22 = 0;
                      thunk_FUN_01b4f09c(puVar22,0);
                    }
                    lVar24 = *plVar27;
                    if (lVar24 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036b7478;
                    lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                    if (lVar24 == 0) goto thunk_FUN_01b48178;
                    uVar28 = *(undefined8 *)(lVar24 + 0x38);
                    if (*(int *)(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar20 = FUN_03922f24(uVar28,0,0);
                    if ((uVar20 & 1) == 0) {
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto thunk_FUN_01b48178;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036b7478;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if ((lVar24 == 0) || (lVar24 = *(long *)(lVar24 + 0x38), lVar24 == 0))
                      goto thunk_FUN_01b48178;
                      iVar9 = FUN_03922ce0(lVar24,0);
                      lVar24 = *plVar30;
                      if (*(int *)(lVar24 + 0xe0) == 0) {
                        thunk_FUN_01ac7298(lVar24);
                        lVar24 = *plVar30;
                      }
                      lVar24 = **(long **)(lVar24 + 0xb8);
                      if (lVar24 == 0) goto thunk_FUN_01b48178;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036b7478;
                      lVar24 = *(long *)(lVar24 + lVar18 + -0x1c);
                      if (lVar24 == 0) goto thunk_FUN_01b48178;
                      iVar10 = FUN_03922ce0(lVar24,0);
                      if (iVar9 != iVar10) goto LAB_036b6f94;
                    }
                    else {
LAB_036b6f94:
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto thunk_FUN_01b48178;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036b7478;
                      lVar21 = *plVar30;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (*(int *)(lVar21 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                        lVar21 = *plVar30;
                      }
                      lVar21 = **(long **)(lVar21 + 0xb8);
                      if (lVar21 == 0) goto thunk_FUN_01b48178;
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_036b7478;
                      if (lVar24 == 0) goto thunk_FUN_01b48178;
                      thunk_FUN_03701608(lVar24,*(undefined8 *)(lVar21 + lVar18 + -0x1c),0);
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto thunk_FUN_01b48178;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036b7478;
                      lVar21 = **(long **)(*plVar30 + 0xb8);
                      if (lVar21 == 0) goto thunk_FUN_01b48178;
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_036b7478;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (lVar24 == 0) goto thunk_FUN_01b48178;
                      *(undefined8 *)(lVar24 + 0x20) = *(undefined8 *)(lVar21 + lVar18 + -0x2c);
                      thunk_FUN_01b4f09c();
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto thunk_FUN_01b48178;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036b7478;
                      lVar21 = **(long **)(*plVar30 + 0xb8);
                      if (lVar21 == 0) goto thunk_FUN_01b48178;
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_036b7478;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (lVar24 == 0) goto thunk_FUN_01b48178;
                      *(undefined8 *)(lVar24 + 0x28) = *(undefined8 *)(lVar21 + lVar18 + -0x24);
                      thunk_FUN_01b4f09c();
                    }
                    lVar24 = *plVar30;
                    if (*(int *)(lVar24 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                      lVar24 = *plVar30;
                    }
                    lVar21 = **(long **)(lVar24 + 0xb8);
                    if (lVar21 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_036b7478;
                    if (*(char *)(lVar21 + lVar18 + -0x13) != '\0') {
                      lVar25 = *plVar27;
                      if (lVar25 == 0) goto thunk_FUN_01b48178;
                      if (*(uint *)(lVar25 + 0x18) <= uVar33) goto LAB_036b7478;
                      lVar25 = *(long *)(lVar25 + uVar33 * 8 + 0x20);
                      if (*(int *)(lVar24 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                        lVar21 = **(long **)(*plVar30 + 0xb8);
                        if (lVar21 == 0) goto thunk_FUN_01b48178;
                      }
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_036b7478;
                      if (lVar25 == 0) goto thunk_FUN_01b48178;
                      FUN_03701638(lVar25,*(undefined8 *)(lVar21 + lVar18 + -0x1c),0);
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto thunk_FUN_01b48178;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036b7478;
                      lVar21 = **(long **)(*plVar30 + 0xb8);
                      if (lVar21 == 0) goto thunk_FUN_01b48178;
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_036b7478;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (lVar24 == 0) goto thunk_FUN_01b48178;
                      *(undefined8 *)(lVar24 + 0x48) = *(undefined8 *)(lVar21 + lVar18 + -0xc);
                      thunk_FUN_01b4f09c();
                    }
                  }
                  lVar24 = *plVar30;
                  if (*(int *)(lVar24 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar24 = *plVar30;
                  }
                  lVar24 = **(long **)(lVar24 + 0xb8);
                  if (lVar24 == 0) goto thunk_FUN_01b48178;
                  if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036b7478;
                  if ((*plVar1 == 0) || (lVar21 = *(long *)(*plVar1 + 0x60), lVar21 == 0))
                  goto thunk_FUN_01b48178;
                  if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_036b7478;
                  lVar25 = *(long *)(lVar21 + lVar15 + 0x30);
                  iVar9 = *(int *)(lVar24 + lVar18);
                  if (lVar25 == 0) {
                    if (uVar33 == 0) {
                      uStack_f8 = 0;
                      local_100 = 0;
                      uStack_e8 = 0;
                      uStack_f0 = 0;
                      uStack_118 = 0;
                      local_120 = 0;
                      uStack_108 = 0;
                      local_110 = 0;
                      uStack_128 = 0;
                      local_130 = 0;
                      FUN_036f884c(&local_130,*(undefined8 *)(param_1 + 0x3a0),iVar9 + 1,0);
                      memcpy(auStack_180,&local_130,0x50);
                      if (*(int *)(lVar21 + 0x18) == 0) goto LAB_036b7478;
                      memcpy((void *)(lVar21 + lVar15 + 0x20),auStack_180,0x50);
                      __dest = (void *)(lVar21 + 0x20);
                    }
                    else {
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto thunk_FUN_01b48178;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036b7478;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (lVar24 == 0) goto thunk_FUN_01b48178;
                      uVar28 = FUN_03701980(lVar24,0);
                      uStack_f8 = 0;
                      local_100 = 0;
                      uStack_e8 = 0;
                      uStack_f0 = 0;
                      uStack_118 = 0;
                      local_120 = 0;
                      uStack_108 = 0;
                      local_110 = 0;
                      uStack_128 = 0;
                      local_130 = 0;
                      FUN_036f884c(&local_130,uVar28,iVar9 + 1,0);
                      memcpy(auStack_1d0,&local_130,0x50);
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_036b7478;
                      __dest = (void *)(lVar21 + lVar15 + 0x20);
                      memcpy(__dest,auStack_1d0,0x50);
                    }
                    thunk_FUN_01b4f09c(__dest,0);
                  }
                  else {
                    iVar10 = *(int *)(lVar25 + 0x18);
                    if (iVar10 < iVar9 * 4) {
LAB_036b7200:
                      if (iVar9 < 0x401) {
                        iVar9 = FUN_039155e8(iVar9 + 1,0);
                      }
                      else {
                        iVar9 = iVar9 + 0x100;
                      }
                      if (*(int *)(*(long *)
                                    Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      FUN_036f961c(lVar21 + lVar15 + 0x20,iVar9,0);
                    }
                    else if ((0 < iVar9) && (*(char *)(param_1 + 0x321) != '\0')) {
                      iVar2 = iVar10 + 3;
                      if (-1 < iVar10) {
                        iVar2 = iVar10;
                      }
                      if (0x100 < (iVar2 >> 2) - iVar9) goto LAB_036b7200;
                    }
                  }
                  plVar30 = (long *)PTR_DAT_03d9c920;
                  if ((*plVar1 == 0) || (lVar24 = *(long *)(*plVar1 + 0x60), lVar24 == 0))
                  goto thunk_FUN_01b48178;
                  lVar21 = *(long *)PTR_DAT_03d9c920;
                  if (*(int *)(lVar21 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar21 = *plVar30;
                  }
                  lVar21 = **(long **)(lVar21 + 0xb8);
                  if (lVar21 == 0) goto thunk_FUN_01b48178;
                  if ((*(uint *)(lVar21 + 0x18) <= uVar33) || (*(uint *)(lVar24 + 0x18) <= uVar33))
                  goto LAB_036b7478;
                  *(undefined8 *)(lVar24 + lVar15 + 0x68) = *(undefined8 *)(lVar21 + lVar18 + -0x1c)
                  ;
                  thunk_FUN_01b4f09c();
                  uVar33 = uVar33 + 1;
                  lVar15 = lVar15 + 0x50;
                  lVar18 = lVar18 + 0x38;
                  lVar35 = lVar35 + 8;
                } while (uVar11 != uVar33);
              }
              puVar6 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
              lVar15 = *plVar27;
              if (lVar15 != 0) {
                lVar18 = (-(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3) + 0x20;
                lVar35 = (long)(int)uVar11 * 0x50 + 0x20;
                do {
                  uVar11 = (uint)uVar16;
                  if ((int)*(uint *)(lVar15 + 0x18) <= (int)uVar11) goto LAB_036b6c0c;
                  if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_036b7478;
                  uVar28 = *(undefined8 *)(lVar15 + lVar18);
                  if (*(int *)(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar16 = FUN_0391f968(uVar28,0,0);
                  if ((uVar16 & 1) == 0) goto LAB_036b6c0c;
                  if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x60), lVar15 == 0)) break;
                  uVar26 = *(uint *)(lVar15 + 0x18);
                  if ((int)uVar11 < (int)uVar26) {
                    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                      uVar26 = *(uint *)(lVar15 + 0x18);
                    }
                    if (uVar26 <= uVar11) goto LAB_036b7478;
                    FUN_036fa5b4(lVar15 + lVar35,0,1,0);
                  }
                  lVar15 = *plVar27;
                  uVar16 = (ulong)(uVar11 + 1);
                  lVar35 = lVar35 + 0x50;
                  lVar18 = lVar18 + 8;
                } while (lVar15 != 0);
              }
            }
          }
        }
      }
    }
  }
thunk_FUN_01b48178:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


