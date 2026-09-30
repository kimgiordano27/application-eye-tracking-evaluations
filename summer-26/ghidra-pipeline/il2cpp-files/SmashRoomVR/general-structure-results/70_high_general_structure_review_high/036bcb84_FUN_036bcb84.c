/*
FUNCTION_NAME: FUN_036bcb84
ENTRY_POINT: 036bcb84
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


undefined4 FUN_036bcb84(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  bool bVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  void *__dest;
  long lVar24;
  long lVar25;
  uint uVar26;
  long *plVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  uint *puVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  int local_20c;
  undefined1 auStack_1f0 [80];
  undefined1 auStack_1a0 [80];
  undefined8 local_150;
  undefined8 uStack_148;
  ulong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
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
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  uint local_78;
  undefined1 local_74 [4];
  
  if ((DAT_03ff74fc & 1) == 0) {
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
    thunk_FUN_01ad9084(PTR_DAT_03d9cc70);
    thunk_FUN_01ad9084(PTR_DAT_03d9c8a0);
    thunk_FUN_01ad9084(PTR_DAT_03d9c8e8);
    thunk_FUN_01ad9084(PTR_DAT_03d9c900);
    thunk_FUN_01ad9084(PTR_DAT_03d9c920);
    thunk_FUN_01ad9084(StringLiteral_2494);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb48);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb50);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb58);
    thunk_FUN_01ad9084(PTR_DAT_03d9cb60);
    DAT_03ff74fc = 1;
  }
  puVar9 = PTR_DAT_03d9c920;
  puVar7 = PTR_DAT_03d9c900;
  local_74[0] = 0;
  local_78 = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  *(undefined1 *)((long)param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x86) = 0;
  *(int *)((long)param_1 + 0x25c) = (int)param_1[0x4b];
  FUN_0370516c(param_1 + 0x4c,0);
  if ((*(byte *)((long)param_1 + 0x25c) & 1) == 0) {
    uVar14 = (undefined4)param_1[0x42];
  }
  else {
    uVar14 = 700;
  }
  *(undefined4 *)((long)param_1 + 0x214) = uVar14;
  puVar8 = PTR_DAT_03d9c8e8;
  FUN_02177328(param_1 + 0x43,uVar14,*(undefined8 *)puVar7);
  plVar27 = param_1 + 0x20;
  param_1[0x20] = param_1[0x1f];
  thunk_FUN_01b4f09c(plVar27);
  plVar29 = param_1 + 0x23;
  param_1[0x23] = param_1[0x22];
  thunk_FUN_01b4f09c(plVar29);
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar14 = 0;
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar9,0);
    uVar14 = (undefined4)param_1[0x24];
  }
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  FUN_036b0978((int)param_1[0xc3],&local_c0,uVar14,param_1[0x20],0,param_1[0x23]);
  uStack_148 = uStack_b8;
  local_150 = local_c0;
  uStack_138 = uStack_a8;
  local_140 = local_b0;
  uStack_128 = uStack_98;
  local_130 = local_a0;
  local_120 = local_90;
  uVar20 = local_b0;
  FUN_02177948(*(long *)(*(long *)puVar9 + 0xb8) + 0x10,&local_150,*(undefined8 *)puVar8);
  plVar18 = (long *)PTR_DAT_03d9c8a0;
  lVar15 = *(long *)(*(long *)(*(long *)puVar9 + 0xb8) + 8);
  if (lVar15 == 0) goto LAB_036bea38;
  FUN_025553b0(lVar15,*(undefined8 *)StringLiteral_1543);
  FUN_036b0b30(param_1[0x23],param_1[0x20],*(long *)(*(long *)puVar9 + 0xb8),
               *(undefined8 *)(*(long *)(*(long *)puVar9 + 0xb8) + 8));
  plVar1 = param_1 + 0x6d;
  if (param_1[0x6d] == 0) {
    lVar15 = param_1[0x90];
    lVar28 = thunk_FUN_01afaadc(*plVar18);
    FUN_03703ff8(lVar28,(int)lVar15,0);
    param_1[0x6d] = lVar28;
    thunk_FUN_01b4f09c(plVar1,lVar28);
  }
  else {
    plVar30 = (long *)(param_1[0x6d] + 0x38);
    lVar15 = *plVar30;
    if (lVar15 == 0) goto LAB_036bea38;
    lVar28 = param_1[0x90];
    if (*(int *)(lVar15 + 0x18) < (int)lVar28) {
      if (*(int *)(*plVar18 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52d44(plVar30,(int)lVar28,0,*(undefined8 *)PTR_DAT_03d9cb30);
    }
  }
  iVar10 = (int)param_1[0x5c];
  *(undefined4 *)((long)param_1 + 0x644) = 0;
  if (iVar10 == 1) {
    FUN_036f22cc(param_1,param_1[0x20],0);
    plVar30 = (long *)PTR_DAT_03d9c920;
    if (param_1[0xca] == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 3;
      uVar16 = FUN_036fb8c8(0);
      if ((uVar16 & 1) == 0) {
        if (*plVar27 == 0) goto LAB_036bea38;
        uVar17 = FUN_039230bc(*plVar27,0);
        uVar17 = FUN_02ee6c30(*(undefined8 *)PTR_DAT_03d9cb58,uVar17,*(undefined8 *)PTR_DAT_03d9cb60
                              ,0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                            );
        }
        FUN_038f3474(uVar17,param_1,0);
      }
    }
    else {
      if (param_1[0xcb] == 0) goto LAB_036bea38;
      iVar10 = FUN_03922ce0(param_1[0xcb],0);
      if (*plVar27 == 0) goto LAB_036bea38;
      iVar11 = FUN_03922ce0(*plVar27,0);
      if (iVar10 != iVar11) {
        uVar16 = FUN_036fba20(0);
        if ((uVar16 & 1) == 0) {
LAB_036bcf84:
          if (param_1[0xcb] == 0) goto LAB_036bea38;
          param_1[0xcc] = *(long *)(param_1[0xcb] + 0x20);
        }
        else {
          if (*plVar29 == 0) goto LAB_036bea38;
          iVar10 = FUN_03922ce0(*plVar29,0);
          if ((param_1[0xcb] == 0) || (lVar15 = *(long *)(param_1[0xcb] + 0x20), lVar15 == 0))
          goto LAB_036bea38;
          iVar11 = FUN_03922ce0(lVar15,0);
          if (iVar10 == iVar11) goto LAB_036bcf84;
          if (param_1[0xcb] == 0) goto LAB_036bea38;
          lVar15 = param_1[0x23];
          uVar17 = *(undefined8 *)(param_1[0xcb] + 0x20);
          if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          lVar15 = FUN_036f7d2c(lVar15,uVar17,0);
          param_1[0xcc] = lVar15;
          plVar30 = (long *)PTR_DAT_03d9c920;
        }
        thunk_FUN_01b4f09c(param_1 + 0xcc);
        lVar15 = *plVar30;
        lVar28 = param_1[0xcc];
        lVar31 = param_1[0xcb];
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar15 = *plVar30;
        }
        uVar12 = FUN_036b0b30(lVar28,lVar31,*(long *)(lVar15 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
        *(uint *)(param_1 + 0xcd) = uVar12;
        lVar15 = **(long **)(*plVar30 + 0xb8);
        if (lVar15 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar15 + 0x18) <= uVar12) {
LAB_036beac8:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        *(undefined4 *)(lVar15 + (long)(int)uVar12 * 0x38 + 0x54) = 0;
      }
    }
    iVar10 = (int)param_1[0x5c];
  }
  if (iVar10 == 6) {
    lVar15 = param_1[0x5d];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar16 = FUN_0391f968(lVar15,0,0);
    puVar7 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__;
    if (((uVar16 & 1) != 0) && (plVar30 = param_1, *(char *)((long)param_1 + 0x3f5) == '\0')) {
      while( true ) {
        plVar30 = (long *)plVar30[0x5d];
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar16 = FUN_0391f968(plVar30,0,0);
        if ((uVar16 & 1) == 0) goto LAB_036bd10c;
        if (plVar30 == (long *)0x0) break;
        (**(code **)(*plVar30 + 0x558))
                  (plVar30,**(undefined8 **)(*(long *)puVar7 + 0xb8),
                   *(undefined8 *)(*plVar30 + 0x560));
        (**(code **)(*plVar30 + 0x948))(plVar30,*(undefined8 *)(*plVar30 + 0x950));
        if (plVar30[0x6d] == 0) break;
        UnityEngine_XR_Interaction_Toolkit_XRControllerRecorder__set_visitEachFrame(plVar30[0x6d],0)
        ;
      }
      goto LAB_036bea38;
    }
  }
LAB_036bd10c:
  if (param_2 != 0) {
    uVar12 = *(uint *)(param_2 + 0x18);
    plVar30 = (long *)PTR_DAT_03d9c920;
    if ((int)uVar12 < 1) {
      local_20c = 0;
    }
    else {
      uVar26 = 0;
      local_20c = 0;
      do {
        if (uVar12 <= uVar26) goto LAB_036beac8;
        puVar34 = (uint *)(param_2 + (long)(int)uVar26 * 0xc + 0x20);
        if (*puVar34 == 0) break;
        if (*plVar1 == 0) goto LAB_036bea38;
        plVar30 = (long *)(*plVar1 + 0x38);
        lVar28 = *plVar30;
        lVar15 = param_1[0x92];
        if ((lVar28 == 0) || (*(int *)(lVar28 + 0x18) <= (int)lVar15)) {
          if (*(int *)(*plVar18 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_01f52d44(plVar30,(int)lVar15 + 1,1,*(undefined8 *)PTR_DAT_03d9cb30);
          uVar12 = *(uint *)(param_2 + 0x18);
        }
        if (uVar12 <= uVar26) goto LAB_036beac8;
        uVar12 = *puVar34;
        if ((uVar12 == 0x3c) && (*(char *)((long)param_1 + 0x302) != '\0')) {
          lVar15 = param_1[0x24];
          uVar16 = FUN_036e7318(param_1,param_2,uVar26 + 1,&local_78,0);
          uVar13 = local_78;
          if ((uVar16 & 1) == 0) goto LAB_036bd3dc;
          if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_036beac8;
          iVar10 = *(int *)(param_2 + (long)(int)uVar26 * 0xc + 0x24);
          if ((*(byte *)((long)param_1 + 0x25c) & 1) != 0) {
            *(undefined1 *)((long)param_1 + 0x26a) = 1;
          }
          puVar7 = PTR_DAT_03d9c920;
          plVar30 = (long *)PTR_DAT_03d9c920;
          uVar26 = local_78;
          if (*(int *)((long)param_1 + 0x644) == 1) {
            lVar28 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar28 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar28 = *(long *)puVar7;
            }
            lVar28 = **(long **)(lVar28 + 0xb8);
            if (lVar28 != 0) {
              if (*(uint *)(param_1 + 0x24) < *(uint *)(lVar28 + 0x18)) {
                lVar28 = lVar28 + (long)(int)*(uint *)(param_1 + 0x24) * 0x38;
                *(int *)(lVar28 + 0x54) = *(int *)(lVar28 + 0x54) + 1;
                if ((*plVar1 != 0) && (lVar28 = *(long *)(*plVar1 + 0x38), lVar28 != 0)) {
                  if (*(uint *)(param_1 + 0x92) < *(uint *)(lVar28 + 0x18)) {
                    uVar14 = *(undefined4 *)((long)param_1 + 0x6a4);
                    lVar28 = lVar28 + (long)(int)*(uint *)(param_1 + 0x92) * 0x178;
                    *(short *)(lVar28 + 0x20) = (short)uVar14 + -0x2000;
                    *(undefined4 *)(lVar28 + 0x48) = uVar14;
                    *(long *)(lVar28 + 0x38) = *plVar27;
                    thunk_FUN_01b4f09c();
                    if ((*plVar1 != 0) && (lVar28 = *(long *)(*plVar1 + 0x38), lVar28 != 0)) {
                      if (*(uint *)(param_1 + 0x92) < *(uint *)(lVar28 + 0x18)) {
                        *(long *)(lVar28 + (long)(int)*(uint *)(param_1 + 0x92) * 0x178 + 0x40) =
                             param_1[0xd3];
                        thunk_FUN_01b4f09c();
                        if ((*plVar1 != 0) && (lVar28 = *(long *)(*plVar1 + 0x38), lVar28 != 0)) {
                          uVar12 = *(uint *)(param_1 + 0x92);
                          if (uVar12 < *(uint *)(lVar28 + 0x18)) {
                            *(int *)(lVar28 + (long)(int)uVar12 * 0x178 + 0x58) = (int)param_1[0x24]
                            ;
                            if ((param_1[0xd3] != 0) &&
                               (lVar31 = FUN_036fe7c0(param_1[0xd3],0), lVar31 != 0)) {
                              uVar17 = FUN_02b59714(lVar31,*(undefined4 *)((long)param_1 + 0x6a4),
                                                    *(undefined8 *)PTR_DAT_03d9c878);
                              if (uVar12 < *(uint *)(lVar28 + 0x18)) {
                                *(undefined8 *)(lVar28 + (long)(int)uVar12 * 0x178 + 0x30) = uVar17;
                                thunk_FUN_01b4f09c();
                                if ((*plVar1 != 0) &&
                                   (lVar28 = *(long *)(*plVar1 + 0x38), lVar28 != 0)) {
                                  uVar12 = *(uint *)(param_1 + 0x92);
                                  if (uVar12 < *(uint *)(lVar28 + 0x18)) {
                                    uVar14 = *(undefined4 *)((long)param_1 + 0x644);
                                    lVar31 = lVar28 + (long)(int)uVar12 * 0x178;
                                    *(int *)(lVar31 + 0x24) = iVar10;
                                    *(undefined4 *)(lVar31 + 0x2c) = uVar14;
                                    if (uVar13 < *(uint *)(param_2 + 0x18)) {
                                      *(int *)(lVar28 + (long)(int)uVar12 * 0x178 + 0x28) =
                                           (*(int *)(param_2 + (long)(int)uVar13 * 0xc + 0x24) -
                                           iVar10) + 1;
                                      *(undefined4 *)((long)param_1 + 0x644) = 0;
                                      *(int *)(param_1 + 0x24) = (int)lVar15;
                                      local_20c = local_20c + 1;
                                      plVar30 = (long *)PTR_DAT_03d9c920;
                                      uVar26 = uVar13;
                                      goto LAB_036be0ec;
                                    }
                                  }
                                  goto LAB_036beac8;
                                }
                                goto LAB_036bea38;
                              }
                              goto LAB_036beac8;
                            }
                            goto LAB_036bea38;
                          }
                          goto LAB_036beac8;
                        }
                        goto LAB_036bea38;
                      }
                      goto LAB_036beac8;
                    }
                    goto LAB_036bea38;
                  }
                  goto LAB_036beac8;
                }
                goto LAB_036bea38;
              }
              goto LAB_036beac8;
            }
            goto LAB_036bea38;
          }
        }
        else {
LAB_036bd3dc:
          local_74[0] = 0;
          lVar31 = param_1[0x20];
          lVar28 = param_1[0x23];
          lVar15 = param_1[0x24];
          if (*(int *)((long)param_1 + 0x644) != 0) goto LAB_036bd4b8;
          uVar13 = *(uint *)((long)param_1 + 0x25c);
          if ((uVar13 >> 4 & 1) == 0) {
            if ((uVar13 >> 3 & 1) == 0) {
              if ((uVar13 >> 5 & 1) != 0) goto LAB_036bd40c;
            }
            else {
              if (*(int *)(*(long *)
                            Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar16 = FUN_02fdd92c(uVar12,0);
              if ((uVar16 & 1) != 0) {
                if (*(int *)(*(long *)
                              Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar12 = FUN_02fdddc0(uVar12,0);
                goto LAB_036bd4b4;
              }
            }
          }
          else {
LAB_036bd40c:
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar16 = FUN_02fdd9e8(uVar12,0);
            if ((uVar16 & 1) != 0) {
              if (*(int *)(*(long *)
                            Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar12 = FUN_02fddc48(uVar12,0);
LAB_036bd4b4:
              uVar12 = uVar12 & 0xffff;
            }
          }
LAB_036bd4b8:
          lVar24 = FUN_036f260c(param_1,uVar12,param_1[0x20],*(undefined4 *)((long)param_1 + 0x25c),
                                *(undefined4 *)((long)param_1 + 0x214),local_74,0);
          if (lVar24 == 0) {
            iVar10 = FUN_036fb88c();
            if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_036beac8;
            if (iVar10 == 0) {
              uVar13 = 0x25a1;
            }
            else {
              uVar13 = FUN_036fb88c(0);
            }
            *puVar34 = uVar13;
            lVar24 = param_1[0x20];
            uVar14 = *(undefined4 *)((long)param_1 + 0x25c);
            uVar3 = *(undefined4 *)((long)param_1 + 0x214);
            if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            lVar24 = FUN_036d1ff4(uVar13,lVar24,1,uVar14,uVar3,local_74,0);
            if (lVar24 == 0) {
              lVar24 = FUN_036fba04();
              if (lVar24 != 0) {
                lVar24 = FUN_036fba04(0);
                if (lVar24 == 0) goto LAB_036bea38;
                if (0 < *(int *)(lVar24 + 0x18)) {
                  lVar24 = param_1[0x20];
                  uVar17 = FUN_036fba04(0);
                  uVar14 = *(undefined4 *)((long)param_1 + 0x25c);
                  uVar3 = *(undefined4 *)((long)param_1 + 0x214);
                  if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
                  }
                  lVar24 = FUN_036d2514(uVar13,lVar24,uVar17,1,uVar14,uVar3,local_74,0);
                  if (lVar24 != 0) goto LAB_036bd568;
                }
              }
              uVar17 = FUN_036fb8e4(0);
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)
                                    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                  );
              }
              uVar16 = FUN_0391f968(uVar17,0,0);
              if ((uVar16 & 1) != 0) {
                uVar17 = FUN_036fb8e4(0);
                uVar14 = *(undefined4 *)((long)param_1 + 0x25c);
                uVar3 = *(undefined4 *)((long)param_1 + 0x214);
                if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
                }
                lVar24 = FUN_036d1ff4(uVar13,uVar17,1,uVar14,uVar3,local_74,0);
                if (lVar24 != 0) goto LAB_036bd568;
              }
              if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_036beac8;
              *puVar34 = 0x20;
              lVar24 = param_1[0x20];
              uVar14 = *(undefined4 *)((long)param_1 + 0x25c);
              uVar3 = *(undefined4 *)((long)param_1 + 0x214);
              if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar13 = 0x20;
              lVar24 = FUN_036d1ff4(0x20,lVar24,1,uVar14,uVar3,local_74,0);
              if (lVar24 == 0) {
                if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_036beac8;
                *puVar34 = 3;
                lVar24 = param_1[0x20];
                uVar14 = *(undefined4 *)((long)param_1 + 0x25c);
                uVar3 = *(undefined4 *)((long)param_1 + 0x214);
                if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar13 = 3;
                lVar24 = FUN_036d1ff4(3,lVar24,1,uVar14,uVar3,local_74,0);
              }
            }
LAB_036bd568:
            uVar16 = FUN_036fb8c8(0);
            if ((uVar16 & 1) == 0) {
              plVar18 = (long *)FUN_01b47fd0(*(undefined8 *)
                                              Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                             ,4);
              if ((int)uVar12 < 0x10000) {
                local_150 = CONCAT44(local_150._4_4_,uVar12);
                lVar21 = thunk_FUN_01afa70c(*(undefined8 *)
                                             Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                            ,&local_150);
                if (plVar18 == (long *)0x0) goto LAB_036bea38;
                if ((lVar21 != 0) &&
                   (lVar25 = thunk_FUN_01afa9e0(lVar21,*(undefined8 *)(*plVar18 + 0x40)),
                   lVar25 == 0)) goto LAB_036beacc;
                if ((int)plVar18[3] == 0) goto LAB_036beac8;
                plVar18[4] = lVar21;
                thunk_FUN_01b4f09c(plVar18 + 4,lVar21);
                if (param_1[0x1f] == 0) goto LAB_036bea38;
                lVar21 = FUN_039230bc(param_1[0x1f],0);
                if ((lVar21 != 0) &&
                   (lVar25 = thunk_FUN_01afa9e0(lVar21,*(undefined8 *)(*plVar18 + 0x40)),
                   lVar25 == 0)) goto LAB_036beacc;
                if (*(uint *)(plVar18 + 3) < 2) goto LAB_036beac8;
                plVar18[5] = lVar21;
                thunk_FUN_01b4f09c(plVar18 + 5,lVar21);
                if (lVar24 == 0) goto LAB_036bea38;
                local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar24 + 0x14));
                lVar21 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&local_c0);
                if ((lVar21 != 0) &&
                   (lVar25 = thunk_FUN_01afa9e0(lVar21,*(undefined8 *)(*plVar18 + 0x40)),
                   lVar25 == 0)) goto LAB_036beacc;
                if (*(uint *)(plVar18 + 3) < 3) goto LAB_036beac8;
                plVar18[6] = lVar21;
                thunk_FUN_01b4f09c(plVar18 + 6,lVar21);
                lVar21 = FUN_039230bc(param_1,0);
                if ((lVar21 != 0) &&
                   (lVar25 = thunk_FUN_01afa9e0(lVar21,*(undefined8 *)(*plVar18 + 0x40)),
                   lVar25 == 0)) goto LAB_036beacc;
                if (*(uint *)(plVar18 + 3) < 4) goto LAB_036beac8;
                plVar18[7] = lVar21;
                thunk_FUN_01b4f09c(plVar18 + 7,lVar21);
                puVar22 = (undefined8 *)PTR_DAT_03d9cb50;
              }
              else {
                local_150 = CONCAT44(local_150._4_4_,uVar12);
                lVar21 = thunk_FUN_01afa70c(*(undefined8 *)
                                             Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                            ,&local_150);
                if (plVar18 == (long *)0x0) goto LAB_036bea38;
                if ((lVar21 != 0) &&
                   (lVar25 = thunk_FUN_01afa9e0(lVar21,*(undefined8 *)(*plVar18 + 0x40)),
                   lVar25 == 0)) goto LAB_036beacc;
                if ((int)plVar18[3] == 0) goto LAB_036beac8;
                plVar18[4] = lVar21;
                thunk_FUN_01b4f09c(plVar18 + 4,lVar21);
                if (param_1[0x1f] == 0) goto LAB_036bea38;
                lVar21 = FUN_039230bc(param_1[0x1f],0);
                if ((lVar21 != 0) &&
                   (lVar25 = thunk_FUN_01afa9e0(lVar21,*(undefined8 *)(*plVar18 + 0x40)),
                   lVar25 == 0)) goto LAB_036beacc;
                if (*(uint *)(plVar18 + 3) < 2) goto LAB_036beac8;
                plVar18[5] = lVar21;
                thunk_FUN_01b4f09c(plVar18 + 5,lVar21);
                if (lVar24 == 0) goto LAB_036bea38;
                local_c0 = CONCAT44(local_c0._4_4_,*(undefined4 *)(lVar24 + 0x14));
                lVar21 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&local_c0);
                if ((lVar21 != 0) &&
                   (lVar25 = thunk_FUN_01afa9e0(lVar21,*(undefined8 *)(*plVar18 + 0x40)),
                   lVar25 == 0)) goto LAB_036beacc;
                if (*(uint *)(plVar18 + 3) < 3) goto LAB_036beac8;
                plVar18[6] = lVar21;
                thunk_FUN_01b4f09c(plVar18 + 6,lVar21);
                lVar21 = FUN_039230bc(param_1,0);
                if ((lVar21 != 0) &&
                   (lVar25 = thunk_FUN_01afa9e0(lVar21,*(undefined8 *)(*plVar18 + 0x40)),
                   lVar25 == 0)) goto LAB_036beacc;
                if (*(uint *)(plVar18 + 3) < 4) goto LAB_036beac8;
                plVar18[7] = lVar21;
                thunk_FUN_01b4f09c(plVar18 + 7,lVar21);
                puVar22 = (undefined8 *)PTR_DAT_03d9cb48;
              }
              uVar17 = FUN_02ee71a8(*puVar22,plVar18,0);
              if (*(int *)(*(long *)
                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_038f3474(uVar17,param_1,0);
              uVar12 = uVar13;
            }
            else {
              uVar12 = uVar13;
              if (lVar24 == 0) goto LAB_036bea38;
            }
          }
          if (*(char *)(lVar24 + 0x10) == '\x01') {
            if (*(long *)(lVar24 + 0x18) == 0) goto LAB_036bea38;
            iVar10 = FUN_036c1bb4(*(long *)(lVar24 + 0x18),0);
            if (*plVar27 == 0) goto LAB_036bea38;
            iVar11 = FUN_036c1bb4(*plVar27,0);
            if (iVar10 == iVar11) goto LAB_036bda7c;
            plVar18 = *(long **)(lVar24 + 0x18);
            if (plVar18 == (long *)0x0) {
              plVar18 = (long *)0x0;
              *plVar27 = 0;
            }
            else {
              lVar21 = *(long *)StringLiteral_444;
              bVar4 = *(byte *)(lVar21 + 0x130);
              if (*(byte *)(*plVar18 + 0x130) < bVar4) {
                plVar30 = (long *)0x0;
              }
              else {
                plVar30 = plVar18;
                if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar4 * 8 + -8) != lVar21) {
                  plVar30 = (long *)0x0;
                }
              }
              *plVar27 = (long)plVar30;
              if (*(byte *)(*plVar18 + 0x130) < bVar4) {
                plVar18 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar4 * 8 + -8) != lVar21) {
                plVar18 = (long *)0x0;
              }
            }
            thunk_FUN_01b4f09c(plVar27,plVar18);
            bVar5 = true;
          }
          else {
LAB_036bda7c:
            bVar5 = false;
          }
          if ((*plVar1 == 0) || (lVar21 = *(long *)(*plVar1 + 0x38), lVar21 == 0))
          goto LAB_036bea38;
          if (*(uint *)(lVar21 + 0x18) <= *(uint *)(param_1 + 0x92)) goto LAB_036beac8;
          lVar21 = lVar21 + (long)(int)*(uint *)(param_1 + 0x92) * 0x178;
          plVar18 = (long *)(lVar21 + 0x30);
          *plVar18 = lVar24;
          *(undefined4 *)(lVar21 + 0x2c) = 0;
          thunk_FUN_01b4f09c(plVar18,lVar24);
          if ((*plVar1 == 0) || (lVar21 = *(long *)(*plVar1 + 0x38), lVar21 == 0))
          goto LAB_036bea38;
          uVar13 = *(uint *)(param_1 + 0x92);
          if (*(uint *)(lVar21 + 0x18) <= uVar13) goto LAB_036beac8;
          lVar25 = lVar21 + (long)(int)uVar13 * 0x178;
          *(short *)(lVar25 + 0x20) = (short)uVar12;
          *(undefined1 *)(lVar25 + 0x5c) = local_74[0];
          if (*(uint *)(param_2 + 0x18) <= uVar26) goto LAB_036beac8;
          lVar21 = lVar21 + (long)(int)uVar13 * 0x178;
          *(undefined8 *)(lVar21 + 0x24) = *(undefined8 *)(param_2 + (long)(int)uVar26 * 0xc + 0x24)
          ;
          *(long *)(lVar21 + 0x38) = *plVar27;
          thunk_FUN_01b4f09c();
          plVar30 = (long *)PTR_DAT_03d9c920;
          if (*(char *)(lVar24 + 0x10) == '\x02') {
            plVar18 = *(long **)(lVar24 + 0x18);
            if (plVar18 == (long *)0x0) goto LAB_036bea38;
            bVar4 = *(byte *)(*(long *)PTR_DAT_03d9cb28 + 0x130);
            if ((*(byte *)(*plVar18 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar4 * 8 + -8) !=
                *(long *)PTR_DAT_03d9cb28)) goto LAB_036bea38;
            lVar31 = plVar18[4];
            lVar28 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar28 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar28 = *plVar30;
            }
            uVar12 = FUN_036b0d60(lVar31,plVar18,*(long *)(lVar28 + 0xb8),
                                  *(undefined8 *)(*(long *)(lVar28 + 0xb8) + 8));
            *(uint *)(param_1 + 0x24) = uVar12;
            lVar28 = **(long **)(*plVar30 + 0xb8);
            if (lVar28 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_036beac8;
            lVar28 = lVar28 + (long)(int)uVar12 * 0x38;
            *(int *)(lVar28 + 0x54) = *(int *)(lVar28 + 0x54) + 1;
            if ((*plVar1 == 0) || (lVar28 = *(long *)(*plVar1 + 0x38), lVar28 == 0))
            goto LAB_036bea38;
            if (*(uint *)(lVar28 + 0x18) <= *(uint *)(param_1 + 0x92)) goto LAB_036beac8;
            lVar28 = lVar28 + (long)(int)*(uint *)(param_1 + 0x92) * 0x178;
            *(undefined4 *)(lVar28 + 0x2c) = 1;
            lVar31 = param_1[0x24];
            *(undefined8 *)(lVar28 + 0x40) = plVar18;
            *(int *)(lVar28 + 0x58) = (int)lVar31;
            thunk_FUN_01b4f09c((undefined8 *)(lVar28 + 0x40),plVar18);
            plVar30 = (long *)PTR_DAT_03d9c920;
            if ((param_1[0x6d] == 0) || (lVar28 = *(long *)(param_1[0x6d] + 0x38), lVar28 == 0))
            goto LAB_036bea38;
            uVar12 = *(uint *)(param_1 + 0x92);
            if (*(uint *)(lVar28 + 0x18) <= uVar12) goto LAB_036beac8;
            *(undefined4 *)(lVar28 + (long)(int)uVar12 * 0x178 + 0x48) =
                 *(undefined4 *)(lVar24 + 0x28);
            *(undefined4 *)((long)param_1 + 0x644) = 0;
            *(int *)(param_1 + 0x24) = (int)lVar15;
            local_20c = local_20c + 1;
            plVar18 = (long *)PTR_DAT_03d9c8a0;
          }
          else {
            if (bVar5) {
              if (*plVar27 == 0) goto LAB_036bea38;
              iVar10 = FUN_036c1bb4(*plVar27,0);
              if (param_1[0x1f] == 0) goto LAB_036bea38;
              iVar11 = FUN_036c1bb4(param_1[0x1f],0);
              if (iVar10 != iVar11) {
                uVar16 = FUN_036fba20(0);
                if ((uVar16 & 1) == 0) {
                  if (*plVar27 == 0) goto LAB_036bea38;
                  lVar21 = *(long *)(*plVar27 + 0x20);
                }
                else {
                  if (*plVar27 == 0) goto LAB_036bea38;
                  lVar21 = *plVar29;
                  uVar17 = *(undefined8 *)(*plVar27 + 0x20);
                  if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  lVar21 = FUN_036f7d2c(lVar21,uVar17,0);
                }
                *plVar29 = lVar21;
                thunk_FUN_01b4f09c(plVar29);
                lVar21 = *plVar30;
                lVar25 = *plVar29;
                lVar32 = *plVar27;
                if (*(int *)(lVar21 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar21 = *plVar30;
                }
                uVar14 = FUN_036b0b30(lVar25,lVar32,*(long *)(lVar21 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 8));
                *(undefined4 *)(param_1 + 0x24) = uVar14;
              }
            }
            if (*(long *)(lVar24 + 0x20) == 0) goto LAB_036bea38;
            iVar10 = FUN_0396b18c(*(long *)(lVar24 + 0x20),0);
            if (0 < iVar10) {
              if (*(long *)(lVar24 + 0x20) == 0) goto LAB_036bea38;
              lVar21 = *plVar27;
              lVar25 = *plVar29;
              uVar14 = FUN_0396b18c(*(long *)(lVar24 + 0x20),0);
              if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb20);
              }
              lVar24 = FUN_036f77c8(lVar21,lVar25,uVar14,0);
              *plVar29 = lVar24;
              thunk_FUN_01b4f09c(plVar29,lVar24);
              lVar24 = *plVar30;
              lVar21 = *plVar29;
              lVar25 = *plVar27;
              if (*(int *)(lVar24 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar24 = *plVar30;
              }
              uVar14 = FUN_036b0b30(lVar21,lVar25,*(long *)(lVar24 + 0xb8),
                                    *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 8));
              bVar5 = true;
              *(undefined4 *)(param_1 + 0x24) = uVar14;
            }
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar16 = FUN_02fdb080(uVar12,0);
            plVar18 = (long *)PTR_DAT_03d9c8a0;
            if ((uVar12 != 0x200b) && ((uVar16 & 1) == 0)) {
              lVar24 = *plVar30;
              if (*(int *)(lVar24 + 0xe0) == 0) {
                thunk_FUN_01ac7298(lVar24);
                lVar24 = *plVar30;
              }
              lVar21 = **(long **)(lVar24 + 0xb8);
              if (lVar21 == 0) goto LAB_036bea38;
              uVar12 = *(uint *)(param_1 + 0x24);
              if (*(uint *)(lVar21 + 0x18) <= uVar12) goto LAB_036beac8;
              if (*(int *)(lVar21 + (long)(int)uVar12 * 0x38 + 0x54) < 0x3fff) {
                if (*(int *)(lVar24 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(lVar24);
                  lVar21 = **(long **)(*plVar30 + 0xb8);
                  if (lVar21 == 0) goto LAB_036bea38;
                  uVar12 = *(uint *)(param_1 + 0x24);
                }
              }
              else {
                lVar24 = *plVar29;
                uVar17 = thunk_FUN_01afaadc(*(undefined8 *)
                                             Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                                           );
                FUN_038ff0a8(uVar17,lVar24,0);
                lVar24 = *plVar30;
                lVar21 = *plVar27;
                if (*(int *)(lVar24 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar24 = *plVar30;
                }
                uVar12 = FUN_036b0b30(uVar17,lVar21,*(long *)(lVar24 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 8));
                *(uint *)(param_1 + 0x24) = uVar12;
                lVar21 = **(long **)(*plVar30 + 0xb8);
                if (lVar21 == 0) goto LAB_036bea38;
              }
              if (*(uint *)(lVar21 + 0x18) <= uVar12) goto LAB_036beac8;
              lVar21 = lVar21 + (long)(int)uVar12 * 0x38;
              *(int *)(lVar21 + 0x54) = *(int *)(lVar21 + 0x54) + 1;
            }
            if ((*plVar1 == 0) || (lVar24 = *(long *)(*plVar1 + 0x38), lVar24 == 0))
            goto LAB_036bea38;
            if (*(uint *)(lVar24 + 0x18) <= *(uint *)(param_1 + 0x92)) goto LAB_036beac8;
            *(long *)(lVar24 + (long)(int)*(uint *)(param_1 + 0x92) * 0x178 + 0x50) = *plVar29;
            thunk_FUN_01b4f09c();
            if ((*plVar1 == 0) || (lVar24 = *(long *)(*plVar1 + 0x38), lVar24 == 0))
            goto LAB_036bea38;
            if (*(uint *)(lVar24 + 0x18) <= *(uint *)(param_1 + 0x92)) goto LAB_036beac8;
            uVar12 = *(uint *)(param_1 + 0x24);
            *(uint *)(lVar24 + (long)(int)*(uint *)(param_1 + 0x92) * 0x178 + 0x58) = uVar12;
            lVar24 = *plVar30;
            if (*(int *)(lVar24 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar24 = *plVar30;
              uVar12 = *(uint *)(param_1 + 0x24);
            }
            lVar21 = **(long **)(lVar24 + 0xb8);
            if (lVar21 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar21 + 0x18) <= uVar12) goto LAB_036beac8;
            *(bool *)(lVar21 + (long)(int)uVar12 * 0x38 + 0x41) = bVar5;
            if (bVar5) {
              if (*(int *)(lVar24 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar21 = **(long **)(*plVar30 + 0xb8);
                if (lVar21 == 0) goto LAB_036bea38;
                uVar12 = *(uint *)(param_1 + 0x24);
              }
              if (*(uint *)(lVar21 + 0x18) <= uVar12) goto LAB_036beac8;
              plVar19 = (long *)(lVar21 + (long)(int)uVar12 * 0x38 + 0x48);
              *plVar19 = lVar28;
              thunk_FUN_01b4f09c(plVar19,lVar28);
              param_1[0x20] = lVar31;
              thunk_FUN_01b4f09c(plVar27);
              param_1[0x23] = lVar28;
              thunk_FUN_01b4f09c(plVar29,lVar28);
              *(int *)(param_1 + 0x24) = (int)lVar15;
            }
            uVar12 = *(uint *)(param_1 + 0x92);
          }
LAB_036be0ec:
          *(uint *)(param_1 + 0x92) = uVar12 + 1;
        }
        uVar12 = *(uint *)(param_2 + 0x18);
        uVar26 = uVar26 + 1;
      } while ((int)uVar26 < (int)uVar12);
    }
    if (*(char *)((long)param_1 + 0x3f5) != '\0') {
      *(undefined1 *)((long)param_1 + 0x3f5) = 0;
LAB_036be118:
      return (int)param_1[0x92];
    }
    lVar15 = *plVar1;
    if (lVar15 != 0) {
      *(int *)(lVar15 + 0x1c) = local_20c;
      lVar28 = *plVar30;
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar28 = *plVar30;
      }
      lVar28 = *(long *)(*(long *)(lVar28 + 0xb8) + 8);
      if (lVar28 != 0) {
        uVar12 = FUN_02554fc4(lVar28,*(undefined8 *)PTR_DAT_03d9b168);
        *(uint *)(lVar15 + 0x34) = uVar12;
        if (*plVar1 != 0) {
          plVar27 = (long *)(*plVar1 + 0x60);
          lVar15 = *plVar27;
          if (lVar15 != 0) {
            uVar16 = (ulong)uVar12;
            if (*(int *)(lVar15 + 0x18) < (int)uVar12) {
              if (*(int *)(*plVar18 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_01f52de4(plVar27,uVar16,0,*(undefined8 *)PTR_DAT_03d9cb38);
            }
            if (param_1[0xe1] != 0) {
              plVar27 = param_1 + 0xe1;
              if (*(int *)(param_1[0xe1] + 0x18) < (int)uVar12) {
                uVar14 = FUN_039155e8(uVar12 + 1,0);
                if (*(int *)(*plVar18 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*plVar18);
                }
                FUN_01f52b30(plVar27,uVar14,*(undefined8 *)PTR_DAT_03d9cc70);
              }
              if (*(char *)((long)param_1 + 0x321) != '\0') {
                if (*plVar1 == 0) goto LAB_036bea38;
                plVar29 = (long *)(*plVar1 + 0x38);
                lVar15 = *plVar29;
                if (lVar15 == 0) goto LAB_036bea38;
                iVar10 = (int)param_1[0x92];
                if (0x100 < *(int *)(lVar15 + 0x18) - iVar10) {
                  iVar11 = 0x100;
                  if (0x100 < iVar10 + 1) {
                    iVar11 = iVar10 + 1;
                  }
                  if (*(int *)(*plVar18 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  FUN_01f52d44(plVar29,iVar11,1,*(undefined8 *)PTR_DAT_03d9cb30);
                  plVar30 = (long *)PTR_DAT_03d9c920;
                }
              }
              fVar6 = DAT_00b55084;
              if (0 < (int)uVar12) {
                lVar15 = 0;
                uVar33 = 0;
                lVar28 = 0x54;
                lVar31 = 0x20;
                do {
                  fVar38 = (float)uVar20;
                  if (uVar33 != 0) {
                    lVar24 = *plVar27;
                    if (lVar24 == 0) goto LAB_036bea38;
                    if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036beac8;
                    uVar17 = *(undefined8 *)(lVar24 + uVar33 * 8 + 0x20);
                    if (*(int *)(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar20 = FUN_03922f24(uVar17,0,0);
                    if ((uVar20 & 1) != 0) {
                      lVar24 = *plVar30;
                      plVar29 = (long *)*plVar27;
                      if (*(int *)(lVar24 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                        lVar24 = *plVar30;
                      }
                      lVar24 = **(long **)(lVar24 + 0xb8);
                      if (lVar24 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036beac8;
                      lVar24 = lVar24 + lVar28;
                      local_d0 = *(undefined8 *)(lVar24 + -4);
                      uStack_d8 = *(undefined8 *)(lVar24 + -0xc);
                      uStack_e0 = *(undefined8 *)(lVar24 + -0x14);
                      uStack_e8 = *(undefined8 *)(lVar24 + -0x1c);
                      uVar17 = *(undefined8 *)(lVar24 + -0x24);
                      uStack_f8 = *(undefined8 *)(lVar24 + -0x2c);
                      local_100 = *(undefined8 *)(lVar24 + -0x34);
                      local_f0 = uVar17;
                      lVar24 = FUN_03702d14(param_1,&local_100,0);
                      fVar38 = (float)uVar17;
                      if (plVar29 == (long *)0x0) goto LAB_036bea38;
                      if ((lVar24 != 0) &&
                         (lVar21 = thunk_FUN_01afa9e0(lVar24,*(undefined8 *)(*plVar29 + 0x40)),
                         lVar21 == 0)) {
LAB_036beacc:
                        uVar17 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
                        FUN_01b48050(uVar17,0);
                      }
                      if (*(uint *)(plVar29 + 3) <= uVar33) goto LAB_036beac8;
                      plVar29[uVar33 + 4] = lVar24;
                      thunk_FUN_01b4f09c((long)plVar29 + lVar31,lVar24);
                      plVar30 = (long *)PTR_DAT_03d9c920;
                      if ((*plVar1 == 0) || (lVar24 = *(long *)(*plVar1 + 0x60), lVar24 == 0))
                      goto LAB_036bea38;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036beac8;
                      puVar22 = (undefined8 *)(lVar24 + lVar15 + 0x30);
                      *puVar22 = 0;
                      thunk_FUN_01b4f09c(puVar22,0);
                    }
                    if (param_1[0x70] == 0) goto LAB_036bea38;
                    fVar35 = (float)FUN_03928134(param_1[0x70],0);
                    lVar24 = *plVar27;
                    if (lVar24 == 0) goto LAB_036bea38;
                    if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036beac8;
                    lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                    if ((lVar24 == 0) ||
                       (fVar37 = fVar38, lVar24 = FUN_039ad440(lVar24,0), lVar24 == 0))
                    goto LAB_036bea38;
                    fVar36 = (float)FUN_03928134(lVar24,0);
                    fVar38 = (fVar38 - fVar37) * (fVar38 - fVar37);
                    uVar20 = (ulong)(uint)fVar38;
                    if (fVar6 <= (fVar35 - fVar36) * (fVar35 - fVar36) + fVar38) {
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036beac8;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (lVar24 == 0) goto LAB_036bea38;
                      lVar24 = FUN_039ad440(lVar24,0);
                      if ((param_1[0x70] == 0) || (FUN_03928134(param_1[0x70],0), lVar24 == 0))
                      goto LAB_036bea38;
                      FUN_039281c4(lVar24,0);
                    }
                    lVar24 = *plVar27;
                    if (lVar24 == 0) goto LAB_036bea38;
                    if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036beac8;
                    lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                    if (lVar24 == 0) goto LAB_036bea38;
                    uVar17 = *(undefined8 *)(lVar24 + 0xf0);
                    if (*(int *)(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar23 = FUN_03922f24(uVar17,0,0);
                    if ((uVar23 & 1) == 0) {
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036beac8;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if ((lVar24 == 0) || (lVar24 = *(long *)(lVar24 + 0xf0), lVar24 == 0))
                      goto LAB_036bea38;
                      iVar10 = FUN_03922ce0(lVar24,0);
                      lVar24 = *plVar30;
                      if (*(int *)(lVar24 + 0xe0) == 0) {
                        thunk_FUN_01ac7298(lVar24);
                        lVar24 = *plVar30;
                      }
                      lVar24 = **(long **)(lVar24 + 0xb8);
                      if (lVar24 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036beac8;
                      lVar24 = *(long *)(lVar24 + lVar28 + -0x1c);
                      if (lVar24 == 0) goto LAB_036bea38;
                      iVar11 = FUN_03922ce0(lVar24,0);
                      if (iVar10 != iVar11) goto LAB_036be568;
                    }
                    else {
LAB_036be568:
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036beac8;
                      lVar21 = *plVar30;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (*(int *)(lVar21 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                        lVar21 = *plVar30;
                      }
                      lVar21 = **(long **)(lVar21 + 0xb8);
                      if (lVar21 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_036beac8;
                      if (lVar24 == 0) goto LAB_036bea38;
                      thunk_FUN_03702968(lVar24,*(undefined8 *)(lVar21 + lVar28 + -0x1c),0);
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036beac8;
                      lVar21 = **(long **)(*plVar30 + 0xb8);
                      if (lVar21 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_036beac8;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (lVar24 == 0) goto LAB_036bea38;
                      *(undefined8 *)(lVar24 + 0xd8) = *(undefined8 *)(lVar21 + lVar28 + -0x2c);
                      thunk_FUN_01b4f09c();
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036beac8;
                      lVar21 = **(long **)(*plVar30 + 0xb8);
                      if (lVar21 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_036beac8;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (lVar24 == 0) goto LAB_036bea38;
                      *(undefined8 *)(lVar24 + 0xe0) = *(undefined8 *)(lVar21 + lVar28 + -0x24);
                      thunk_FUN_01b4f09c();
                    }
                    lVar24 = *plVar30;
                    if (*(int *)(lVar24 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                      lVar24 = *plVar30;
                    }
                    lVar21 = **(long **)(lVar24 + 0xb8);
                    if (lVar21 == 0) goto LAB_036bea38;
                    if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_036beac8;
                    if (*(char *)(lVar21 + lVar28 + -0x13) != '\0') {
                      lVar25 = *plVar27;
                      if (lVar25 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar25 + 0x18) <= uVar33) goto LAB_036beac8;
                      lVar25 = *(long *)(lVar25 + uVar33 * 8 + 0x20);
                      if (*(int *)(lVar24 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                        lVar21 = **(long **)(*plVar30 + 0xb8);
                        if (lVar21 == 0) goto LAB_036bea38;
                      }
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_036beac8;
                      if (lVar25 == 0) goto LAB_036bea38;
                      FUN_037029c4(lVar25,*(undefined8 *)(lVar21 + lVar28 + -0x1c),0);
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036beac8;
                      lVar21 = **(long **)(*plVar30 + 0xb8);
                      if (lVar21 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_036beac8;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (lVar24 == 0) goto LAB_036bea38;
                      *(undefined8 *)(lVar24 + 0x100) = *(undefined8 *)(lVar21 + lVar28 + -0xc);
                      thunk_FUN_01b4f09c(lVar24 + 0x100);
                    }
                  }
                  lVar24 = *plVar30;
                  if (*(int *)(lVar24 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar24 = *plVar30;
                  }
                  lVar24 = **(long **)(lVar24 + 0xb8);
                  if (lVar24 == 0) goto LAB_036bea38;
                  if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036beac8;
                  if ((*plVar1 == 0) || (lVar21 = *(long *)(*plVar1 + 0x60), lVar21 == 0))
                  goto LAB_036bea38;
                  if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_036beac8;
                  lVar25 = *(long *)(lVar21 + lVar15 + 0x30);
                  iVar10 = *(int *)(lVar24 + lVar28);
                  if (lVar25 == 0) {
                    if (uVar33 == 0) {
                      uStack_118 = 0;
                      local_120 = 0;
                      uStack_108 = 0;
                      uStack_110 = 0;
                      uStack_138 = 0;
                      local_140 = 0;
                      uStack_128 = 0;
                      local_130 = 0;
                      uStack_148 = 0;
                      local_150 = 0;
                      FUN_036f884c(&local_150,param_1[0x74],iVar10 + 1,0);
                      memcpy(auStack_1a0,&local_150,0x50);
                      if (*(int *)(lVar21 + 0x18) == 0) goto LAB_036beac8;
                      memcpy((void *)(lVar21 + lVar15 + 0x20),auStack_1a0,0x50);
                      __dest = (void *)(lVar21 + 0x20);
                    }
                    else {
                      lVar24 = *plVar27;
                      if (lVar24 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar24 + 0x18) <= uVar33) goto LAB_036beac8;
                      lVar24 = *(long *)(lVar24 + uVar33 * 8 + 0x20);
                      if (lVar24 == 0) goto LAB_036bea38;
                      uVar17 = FUN_03702ba4(lVar24,0);
                      uStack_118 = 0;
                      local_120 = 0;
                      uStack_108 = 0;
                      uStack_110 = 0;
                      uStack_138 = 0;
                      local_140 = 0;
                      uStack_128 = 0;
                      local_130 = 0;
                      uStack_148 = 0;
                      local_150 = 0;
                      FUN_036f884c(&local_150,uVar17,iVar10 + 1,0);
                      memcpy(auStack_1f0,&local_150,0x50);
                      if (*(uint *)(lVar21 + 0x18) <= uVar33) goto LAB_036beac8;
                      __dest = (void *)(lVar21 + lVar15 + 0x20);
                      memcpy(__dest,auStack_1f0,0x50);
                    }
                    thunk_FUN_01b4f09c(__dest,0);
                  }
                  else {
                    iVar11 = *(int *)(lVar25 + 0x18);
                    if (iVar11 < iVar10 * 4) {
LAB_036be7d8:
                      if (iVar10 < 0x401) {
                        iVar10 = FUN_039155e8(iVar10 + 1,0);
                      }
                      else {
                        iVar10 = iVar10 + 0x100;
                      }
                      if (*(int *)(*(long *)
                                    Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      FUN_036f961c(lVar21 + lVar15 + 0x20,iVar10,0);
                    }
                    else if ((0 < iVar10) && (*(char *)((long)param_1 + 0x321) != '\0')) {
                      iVar2 = iVar11 + 3;
                      if (-1 < iVar11) {
                        iVar2 = iVar11;
                      }
                      if (0x100 < (iVar2 >> 2) - iVar10) goto LAB_036be7d8;
                    }
                  }
                  plVar30 = (long *)PTR_DAT_03d9c920;
                  if ((*plVar1 == 0) || (lVar24 = *(long *)(*plVar1 + 0x60), lVar24 == 0))
                  goto LAB_036bea38;
                  lVar21 = *(long *)PTR_DAT_03d9c920;
                  if (*(int *)(lVar21 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar21 = *plVar30;
                  }
                  lVar21 = **(long **)(lVar21 + 0xb8);
                  if (lVar21 == 0) goto LAB_036bea38;
                  if ((*(uint *)(lVar21 + 0x18) <= uVar33) || (*(uint *)(lVar24 + 0x18) <= uVar33))
                  goto LAB_036beac8;
                  *(undefined8 *)(lVar24 + lVar15 + 0x68) = *(undefined8 *)(lVar21 + lVar28 + -0x1c)
                  ;
                  thunk_FUN_01b4f09c();
                  uVar33 = uVar33 + 1;
                  lVar15 = lVar15 + 0x50;
                  lVar28 = lVar28 + 0x38;
                  lVar31 = lVar31 + 8;
                } while (uVar12 != uVar33);
              }
              lVar15 = *plVar27;
              if (lVar15 != 0) {
                lVar28 = (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3) + 0x20;
                do {
                  uVar12 = (uint)uVar16;
                  if ((int)*(uint *)(lVar15 + 0x18) <= (int)uVar12) goto LAB_036be118;
                  if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_036beac8;
                  uVar17 = *(undefined8 *)(lVar15 + lVar28);
                  if (*(int *)(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar20 = FUN_0391f968(uVar17,0,0);
                  if ((uVar20 & 1) == 0) goto LAB_036be118;
                  if ((*plVar1 == 0) || (lVar15 = *(long *)(*plVar1 + 0x60), lVar15 == 0)) break;
                  if ((int)uVar12 < *(int *)(lVar15 + 0x18)) {
                    lVar15 = *plVar27;
                    if (lVar15 == 0) break;
                    if (*(uint *)(lVar15 + 0x18) <= uVar12) goto LAB_036beac8;
                    if ((*(long *)(lVar15 + lVar28) == 0) ||
                       (lVar15 = FUN_039add2c(*(long *)(lVar15 + lVar28),0), lVar15 == 0)) break;
                    FUN_03af8c9c(lVar15,0,0);
                  }
                  lVar15 = *plVar27;
                  uVar16 = (ulong)(uVar12 + 1);
                  lVar28 = lVar28 + 8;
                } while (lVar15 != 0);
              }
            }
          }
        }
      }
    }
  }
LAB_036bea38:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


