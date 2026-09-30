/*
FUNCTION_NAME: Unity.VisualScripting.TypeFilter$$set_Obsolete
ENTRY_POINT: 036b6bec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_21;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


undefined4 Unity_VisualScripting_TypeFilter__set_Obsolete(void)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  void *__dest;
  uint in_w8;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar19;
  uint unaff_w22;
  long lVar20;
  long *plVar21;
  undefined8 uVar22;
  long *plVar23;
  undefined8 uVar24;
  long *unaff_x24;
  undefined8 uVar25;
  long unaff_x25;
  ulong uVar26;
  long *unaff_x27;
  uint *puVar27;
  long *unaff_x29;
  long lVar28;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000038;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined4 in_stack_00000170;
  uint uStack00000000000001a8;
  undefined1 uStack00000000000001ac;
  
  while (unaff_w22 = unaff_w22 + 1, (int)unaff_w22 < (int)in_w8) {
    if (in_w8 <= unaff_w22) goto LAB_036b7478;
    puVar27 = (uint *)(unaff_x25 + (long)(int)unaff_w22 * 0xc + 0x20);
    if (*puVar27 == 0) break;
    if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
    plVar21 = (long *)(*unaff_x20 + 0x38);
    lVar20 = *plVar21;
    iVar10 = *(int *)(unaff_x19 + 0x490);
    if ((lVar20 == 0) || (*(int *)(lVar20 + 0x18) <= iVar10)) {
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52d44(plVar21,iVar10 + 1,1,*(undefined8 *)PTR_DAT_03d9cb30);
      in_w8 = *(uint *)(unaff_x25 + 0x18);
    }
    if (in_w8 <= unaff_w22) goto LAB_036b7478;
    uVar8 = *puVar27;
    if ((uVar8 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
      uVar9 = *(undefined4 *)(unaff_x19 + 0x120);
      uVar19 = FUN_036e7318();
      uVar6 = uStack00000000000001a8;
      if ((uVar19 & 1) == 0) goto LAB_036b5ed4;
      if (*(uint *)(unaff_x25 + 0x18) <= unaff_w22) goto LAB_036b7478;
      iVar10 = *(int *)(unaff_x25 + (long)(int)unaff_w22 * 0xc + 0x24);
      if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
        *(undefined1 *)(unaff_x19 + 0x26a) = 1;
      }
      puVar5 = PTR_DAT_03d9c920;
      unaff_x24 = (long *)PTR_DAT_03d9c920;
      unaff_w22 = uStack00000000000001a8;
      if (*(int *)(unaff_x19 + 0x644) == 1) {
        lVar20 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar20 = *(long *)puVar5;
        }
        lVar20 = **(long **)(lVar20 + 0xb8);
        if (lVar20 != 0) {
          if (*(uint *)(unaff_x19 + 0x120) < *(uint *)(lVar20 + 0x18)) {
            lVar20 = lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
            *(int *)(lVar20 + 0x54) = *(int *)(lVar20 + 0x54) + 1;
            if ((*unaff_x20 != 0) && (lVar20 = *(long *)(*unaff_x20 + 0x38), lVar20 != 0)) {
              if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar20 + 0x18)) {
                uVar7 = *(undefined4 *)(unaff_x19 + 0x6a4);
                lVar20 = lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                *(short *)(lVar20 + 0x20) = (short)uVar7 + -0x2000;
                *(undefined4 *)(lVar20 + 0x48) = uVar7;
                *(long *)(lVar20 + 0x38) = *unaff_x29;
                thunk_FUN_01b4f09c();
                if ((*unaff_x20 != 0) && (lVar20 = *(long *)(*unaff_x20 + 0x38), lVar20 != 0)) {
                  if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar20 + 0x18)) {
                    *(undefined8 *)(lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40)
                         = *(undefined8 *)(unaff_x19 + 0x698);
                    thunk_FUN_01b4f09c();
                    if ((*unaff_x20 != 0) && (lVar20 = *(long *)(*unaff_x20 + 0x38), lVar20 != 0)) {
                      uVar8 = *(uint *)(unaff_x19 + 0x490);
                      if (uVar8 < *(uint *)(lVar20 + 0x18)) {
                        *(undefined4 *)(lVar20 + (long)(int)uVar8 * 0x178 + 0x58) =
                             *(undefined4 *)(unaff_x19 + 0x120);
                        if ((*(long *)(unaff_x19 + 0x698) != 0) &&
                           (lVar12 = FUN_036fe7c0(*(long *)(unaff_x19 + 0x698),0), lVar12 != 0)) {
                          uVar24 = FUN_02b59714(lVar12,*(undefined4 *)(unaff_x19 + 0x6a4),
                                                *(undefined8 *)PTR_DAT_03d9c878);
                          if (uVar8 < *(uint *)(lVar20 + 0x18)) {
                            *(undefined8 *)(lVar20 + (long)(int)uVar8 * 0x178 + 0x30) = uVar24;
                            thunk_FUN_01b4f09c();
                            if ((*unaff_x20 != 0) &&
                               (lVar20 = *(long *)(*unaff_x20 + 0x38), lVar20 != 0)) {
                              uVar8 = *(uint *)(unaff_x19 + 0x490);
                              if (uVar8 < *(uint *)(lVar20 + 0x18)) {
                                uVar7 = *(undefined4 *)(unaff_x19 + 0x644);
                                lVar12 = lVar20 + (long)(int)uVar8 * 0x178;
                                *(int *)(lVar12 + 0x24) = iVar10;
                                *(undefined4 *)(lVar12 + 0x2c) = uVar7;
                                if (uVar6 < *(uint *)(in_stack_00000038 + 0x18)) {
                                  *(int *)(lVar20 + (long)(int)uVar8 * 0x178 + 0x28) =
                                       (*(int *)(in_stack_00000038 + (long)(int)uVar6 * 0xc + 0x24)
                                       - iVar10) + 1;
                                  *(undefined4 *)(unaff_x19 + 0x644) = 0;
                                  *(undefined4 *)(unaff_x19 + 0x120) = uVar9;
                                  in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
                                  unaff_x24 = (long *)PTR_DAT_03d9c920;
                                  unaff_x25 = in_stack_00000038;
                                  unaff_w22 = uVar6;
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
      uVar18 = *(undefined8 *)(unaff_x19 + 0x100);
      uVar24 = *(undefined8 *)(unaff_x19 + 0x118);
      uVar9 = *(undefined4 *)(unaff_x19 + 0x120);
      if (*(int *)(unaff_x19 + 0x644) != 0) goto LAB_036b5fac;
      uVar6 = *(uint *)(unaff_x19 + 0x25c);
      if ((uVar6 >> 4 & 1) == 0) {
        if ((uVar6 >> 3 & 1) == 0) {
          if ((uVar6 >> 5 & 1) != 0) goto LAB_036b5f00;
        }
        else {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar19 = FUN_02fdd92c(uVar8,0);
          if ((uVar19 & 1) != 0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar8 = FUN_02fdddc0(uVar8,0);
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
        uVar19 = FUN_02fdd9e8(uVar8,0);
        if ((uVar19 & 1) != 0) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar8 = FUN_02fddc48(uVar8,0);
LAB_036b5fa8:
          uVar8 = uVar8 & 0xffff;
        }
      }
LAB_036b5fac:
      lVar20 = FUN_036f260c();
      if (lVar20 == 0) {
        iVar10 = FUN_036fb88c();
        if (*(uint *)(unaff_x25 + 0x18) <= unaff_w22) goto LAB_036b7478;
        if (iVar10 == 0) {
          uVar6 = 0x25a1;
        }
        else {
          uVar6 = FUN_036fb88c(0);
        }
        *puVar27 = uVar6;
        uVar22 = *(undefined8 *)(unaff_x19 + 0x100);
        uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
        if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar20 = FUN_036d1ff4(uVar6,uVar22,1,uVar7,uVar2,(long)&stack0x000001a8 + 4,0);
        if (lVar20 == 0) {
          lVar20 = FUN_036fba04();
          if (lVar20 != 0) {
            lVar20 = FUN_036fba04(0);
            if (lVar20 == 0) goto thunk_FUN_01b48178;
            if (0 < *(int *)(lVar20 + 0x18)) {
              uVar25 = *(undefined8 *)(unaff_x19 + 0x100);
              uVar22 = FUN_036fba04(0);
              uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
              }
              lVar20 = FUN_036d2514(uVar6,uVar25,uVar22,1,uVar7,uVar2,(long)&stack0x000001a8 + 4,0);
              if (lVar20 != 0) goto LAB_036b605c;
            }
          }
          uVar22 = FUN_036fb8e4(0);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              );
          }
          uVar19 = FUN_0391f968(uVar22,0,0);
          if ((uVar19 & 1) != 0) {
            uVar22 = FUN_036fb8e4(0);
            uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
            if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
            }
            lVar20 = FUN_036d1ff4(uVar6,uVar22,1,uVar7,uVar2,(long)&stack0x000001a8 + 4,0);
            if (lVar20 != 0) goto LAB_036b605c;
          }
          if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036b7478;
          *puVar27 = 0x20;
          uVar22 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
          if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar6 = 0x20;
          lVar20 = FUN_036d1ff4(0x20,uVar22,1,uVar7,uVar2,(long)&stack0x000001a8 + 4,0);
          if (lVar20 == 0) {
            if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036b7478;
            *puVar27 = 3;
            uVar22 = *(undefined8 *)(unaff_x19 + 0x100);
            uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
            if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar6 = 3;
            lVar20 = FUN_036d1ff4(3,uVar22,1,uVar7,uVar2,(long)&stack0x000001a8 + 4,0);
          }
        }
LAB_036b605c:
        uVar19 = FUN_036fb8c8(0);
        if ((uVar19 & 1) == 0) {
          plVar21 = (long *)FUN_01b47fd0(*(undefined8 *)
                                          Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                         ,4);
          if ((int)uVar8 < 0x10000) {
            in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar8);
            lVar12 = thunk_FUN_01afa70c(*(undefined8 *)
                                         Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                        ,&stack0x000000e0);
            if (plVar21 == (long *)0x0) goto thunk_FUN_01b48178;
            if ((lVar12 != 0) &&
               (lVar28 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)(*plVar21 + 0x40)), lVar28 == 0))
            goto LAB_036b747c;
            if ((int)plVar21[3] == 0) goto LAB_036b7478;
            plVar21[4] = lVar12;
            thunk_FUN_01b4f09c(plVar21 + 4,lVar12);
            if (*(long *)(unaff_x19 + 0xf8) == 0) goto thunk_FUN_01b48178;
            lVar12 = FUN_039230bc(*(long *)(unaff_x19 + 0xf8),0);
            if ((lVar12 != 0) &&
               (lVar28 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)(*plVar21 + 0x40)), lVar28 == 0))
            goto LAB_036b747c;
            if (*(uint *)(plVar21 + 3) < 2) goto LAB_036b7478;
            plVar21[5] = lVar12;
            thunk_FUN_01b4f09c(plVar21 + 5,lVar12);
            if (lVar20 == 0) goto thunk_FUN_01b48178;
            in_stack_00000170 = *(undefined4 *)(lVar20 + 0x14);
            lVar12 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&stack0x00000170);
            if ((lVar12 != 0) &&
               (lVar28 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)(*plVar21 + 0x40)), lVar28 == 0))
            goto LAB_036b747c;
            if (*(uint *)(plVar21 + 3) < 3) goto LAB_036b7478;
            plVar21[6] = lVar12;
            thunk_FUN_01b4f09c(plVar21 + 6,lVar12);
            lVar12 = FUN_039230bc();
            if ((lVar12 != 0) &&
               (lVar28 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)(*plVar21 + 0x40)), lVar28 == 0))
            goto LAB_036b747c;
            if (*(uint *)(plVar21 + 3) < 4) goto LAB_036b7478;
            plVar21[7] = lVar12;
            thunk_FUN_01b4f09c(plVar21 + 7,lVar12);
            puVar15 = (undefined8 *)PTR_DAT_03d9cb50;
          }
          else {
            in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar8);
            lVar12 = thunk_FUN_01afa70c(*(undefined8 *)
                                         Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                        ,&stack0x000000e0);
            if (plVar21 == (long *)0x0) goto thunk_FUN_01b48178;
            if ((lVar12 != 0) &&
               (lVar28 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)(*plVar21 + 0x40)), lVar28 == 0))
            goto LAB_036b747c;
            if ((int)plVar21[3] == 0) goto LAB_036b7478;
            plVar21[4] = lVar12;
            thunk_FUN_01b4f09c(plVar21 + 4,lVar12);
            if (*(long *)(unaff_x19 + 0xf8) == 0) goto thunk_FUN_01b48178;
            lVar12 = FUN_039230bc(*(long *)(unaff_x19 + 0xf8),0);
            if ((lVar12 != 0) &&
               (lVar28 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)(*plVar21 + 0x40)), lVar28 == 0))
            goto LAB_036b747c;
            if (*(uint *)(plVar21 + 3) < 2) goto LAB_036b7478;
            plVar21[5] = lVar12;
            thunk_FUN_01b4f09c(plVar21 + 5,lVar12);
            if (lVar20 == 0) goto thunk_FUN_01b48178;
            in_stack_00000170 = *(undefined4 *)(lVar20 + 0x14);
            lVar12 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&stack0x00000170);
            if ((lVar12 != 0) &&
               (lVar28 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)(*plVar21 + 0x40)), lVar28 == 0))
            goto LAB_036b747c;
            if (*(uint *)(plVar21 + 3) < 3) goto LAB_036b7478;
            plVar21[6] = lVar12;
            thunk_FUN_01b4f09c(plVar21 + 6,lVar12);
            lVar12 = FUN_039230bc();
            if ((lVar12 != 0) &&
               (lVar28 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)(*plVar21 + 0x40)), lVar28 == 0))
            goto LAB_036b747c;
            if (*(uint *)(plVar21 + 3) < 4) goto LAB_036b7478;
            plVar21[7] = lVar12;
            thunk_FUN_01b4f09c(plVar21 + 7,lVar12);
            puVar15 = (undefined8 *)PTR_DAT_03d9cb48;
          }
          uVar22 = FUN_02ee71a8(*puVar15,plVar21,0);
          if (*(int *)(*(long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_038f3474(uVar22);
          unaff_x25 = in_stack_00000038;
          uVar8 = uVar6;
        }
        else {
          unaff_x25 = in_stack_00000038;
          uVar8 = uVar6;
          if (lVar20 == 0) goto thunk_FUN_01b48178;
        }
      }
      if (*(char *)(lVar20 + 0x10) == '\x01') {
        if (*(long *)(lVar20 + 0x18) == 0) goto thunk_FUN_01b48178;
        iVar10 = FUN_036c1bb4(*(long *)(lVar20 + 0x18),0);
        if (*unaff_x29 == 0) goto thunk_FUN_01b48178;
        iVar11 = FUN_036c1bb4(*unaff_x29,0);
        if (iVar10 == iVar11) goto LAB_036b6570;
        plVar21 = *(long **)(lVar20 + 0x18);
        if (plVar21 == (long *)0x0) {
          plVar21 = (long *)0x0;
          *unaff_x29 = 0;
        }
        else {
          lVar12 = *(long *)StringLiteral_444;
          bVar3 = *(byte *)(lVar12 + 0x130);
          if (*(byte *)(*plVar21 + 0x130) < bVar3) {
            plVar23 = (long *)0x0;
          }
          else {
            plVar23 = plVar21;
            if (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar3 * 8 + -8) != lVar12) {
              plVar23 = (long *)0x0;
            }
          }
          *unaff_x29 = (long)plVar23;
          if (*(byte *)(*plVar21 + 0x130) < bVar3) {
            plVar21 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar3 * 8 + -8) != lVar12) {
            plVar21 = (long *)0x0;
          }
        }
        thunk_FUN_01b4f09c(unaff_x29,plVar21);
        bVar4 = true;
      }
      else {
LAB_036b6570:
        bVar4 = false;
      }
      if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
      goto thunk_FUN_01b48178;
      if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
      lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
      plVar21 = (long *)(lVar12 + 0x30);
      *plVar21 = lVar20;
      *(undefined4 *)(lVar12 + 0x2c) = 0;
      thunk_FUN_01b4f09c(plVar21,lVar20);
      if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
      goto thunk_FUN_01b48178;
      uVar6 = *(uint *)(unaff_x19 + 0x490);
      if (*(uint *)(lVar12 + 0x18) <= uVar6) goto LAB_036b7478;
      lVar28 = lVar12 + (long)(int)uVar6 * 0x178;
      *(short *)(lVar28 + 0x20) = (short)uVar8;
      *(undefined1 *)(lVar28 + 0x5c) = uStack00000000000001ac;
      if (*(uint *)(unaff_x25 + 0x18) <= unaff_w22) goto LAB_036b7478;
      lVar12 = lVar12 + (long)(int)uVar6 * 0x178;
      *(undefined8 *)(lVar12 + 0x24) =
           *(undefined8 *)(unaff_x25 + (long)(int)unaff_w22 * 0xc + 0x24);
      *(long *)(lVar12 + 0x38) = *unaff_x29;
      thunk_FUN_01b4f09c();
      unaff_x24 = (long *)PTR_DAT_03d9c920;
      if (*(char *)(lVar20 + 0x10) == '\x02') {
        plVar21 = *(long **)(lVar20 + 0x18);
        if (plVar21 == (long *)0x0) goto thunk_FUN_01b48178;
        bVar3 = *(byte *)(*(long *)PTR_DAT_03d9cb28 + 0x130);
        if ((*(byte *)(*plVar21 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)PTR_DAT_03d9cb28)) goto thunk_FUN_01b48178;
        lVar28 = plVar21[4];
        lVar12 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar12 = *unaff_x24;
        }
        uVar8 = FUN_036b0d60(lVar28,plVar21,*(long *)(lVar12 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x120) = uVar8;
        lVar12 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar12 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036b7478;
        lVar12 = lVar12 + (long)(int)uVar8 * 0x38;
        *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
        if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
        goto thunk_FUN_01b48178;
        if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
        lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
        *(undefined4 *)(lVar12 + 0x2c) = 1;
        uVar7 = *(undefined4 *)(unaff_x19 + 0x120);
        *(undefined8 *)(lVar12 + 0x40) = plVar21;
        *(undefined4 *)(lVar12 + 0x58) = uVar7;
        thunk_FUN_01b4f09c((undefined8 *)(lVar12 + 0x40),plVar21);
        unaff_x24 = (long *)PTR_DAT_03d9c920;
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar12 == 0))
        goto thunk_FUN_01b48178;
        uVar8 = *(uint *)(unaff_x19 + 0x490);
        if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036b7478;
        *(undefined4 *)(lVar12 + (long)(int)uVar8 * 0x178 + 0x48) = *(undefined4 *)(lVar20 + 0x28);
        *(undefined4 *)(unaff_x19 + 0x644) = 0;
        *(undefined4 *)(unaff_x19 + 0x120) = uVar9;
        in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
        unaff_x25 = in_stack_00000038;
        unaff_x27 = (long *)PTR_DAT_03d9c8a0;
      }
      else {
        if (bVar4) {
          if (*unaff_x29 == 0) goto thunk_FUN_01b48178;
          iVar10 = FUN_036c1bb4(*unaff_x29,0);
          if (*(long *)(unaff_x19 + 0xf8) == 0) goto thunk_FUN_01b48178;
          iVar11 = FUN_036c1bb4(*(long *)(unaff_x19 + 0xf8),0);
          if (iVar10 != iVar11) {
            uVar19 = FUN_036fba20(0);
            if ((uVar19 & 1) == 0) {
              if (*unaff_x29 == 0) goto thunk_FUN_01b48178;
              uVar22 = *(undefined8 *)(*unaff_x29 + 0x20);
            }
            else {
              if (*unaff_x29 == 0) goto thunk_FUN_01b48178;
              uVar22 = *in_stack_00000028;
              uVar25 = *(undefined8 *)(*unaff_x29 + 0x20);
              if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar22 = FUN_036f7d2c(uVar22,uVar25,0);
            }
            *in_stack_00000028 = uVar22;
            thunk_FUN_01b4f09c(in_stack_00000028);
            lVar12 = *unaff_x24;
            uVar22 = *in_stack_00000028;
            lVar28 = *unaff_x29;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar12 = *unaff_x24;
            }
            uVar7 = FUN_036b0b30(uVar22,lVar28,*(long *)(lVar12 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
            *(undefined4 *)(unaff_x19 + 0x120) = uVar7;
            unaff_x25 = in_stack_00000038;
          }
        }
        if (*(long *)(lVar20 + 0x20) == 0) goto thunk_FUN_01b48178;
        iVar10 = FUN_0396b18c(*(long *)(lVar20 + 0x20),0);
        if (0 < iVar10) {
          if (*(long *)(lVar20 + 0x20) == 0) goto thunk_FUN_01b48178;
          lVar12 = *unaff_x29;
          uVar22 = *in_stack_00000028;
          uVar7 = FUN_0396b18c(*(long *)(lVar20 + 0x20),0);
          if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb20);
          }
          uVar22 = FUN_036f77c8(lVar12,uVar22,uVar7,0);
          *in_stack_00000028 = uVar22;
          thunk_FUN_01b4f09c(in_stack_00000028,uVar22);
          lVar20 = *unaff_x24;
          uVar22 = *in_stack_00000028;
          lVar12 = *unaff_x29;
          if (*(int *)(lVar20 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar20 = *unaff_x24;
          }
          uVar7 = FUN_036b0b30(uVar22,lVar12,*(long *)(lVar20 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar20 + 0xb8) + 8));
          bVar4 = true;
          *(undefined4 *)(unaff_x19 + 0x120) = uVar7;
          unaff_x25 = in_stack_00000038;
        }
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar19 = FUN_02fdb080(uVar8,0);
        unaff_x27 = (long *)PTR_DAT_03d9c8a0;
        if ((uVar8 != 0x200b) && ((uVar19 & 1) == 0)) {
          lVar20 = *unaff_x24;
          if (*(int *)(lVar20 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar20);
            lVar20 = *unaff_x24;
          }
          lVar12 = **(long **)(lVar20 + 0xb8);
          if (lVar12 == 0) goto thunk_FUN_01b48178;
          uVar8 = *(uint *)(unaff_x19 + 0x120);
          if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036b7478;
          if (*(int *)(lVar12 + (long)(int)uVar8 * 0x38 + 0x54) < 0x3fff) {
            if (*(int *)(lVar20 + 0xe0) == 0) {
              thunk_FUN_01ac7298(lVar20);
              lVar12 = **(long **)(*unaff_x24 + 0xb8);
              if (lVar12 == 0) goto thunk_FUN_01b48178;
              uVar8 = *(uint *)(unaff_x19 + 0x120);
            }
          }
          else {
            uVar25 = *in_stack_00000028;
            uVar22 = thunk_FUN_01afaadc(*(undefined8 *)
                                         Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                                       );
            FUN_038ff0a8(uVar22,uVar25,0);
            lVar20 = *unaff_x24;
            lVar12 = *unaff_x29;
            if (*(int *)(lVar20 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar20 = *unaff_x24;
            }
            uVar8 = FUN_036b0b30(uVar22,lVar12,*(long *)(lVar20 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar20 + 0xb8) + 8));
            *(uint *)(unaff_x19 + 0x120) = uVar8;
            lVar12 = **(long **)(*unaff_x24 + 0xb8);
            if (lVar12 == 0) goto thunk_FUN_01b48178;
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036b7478;
          lVar12 = lVar12 + (long)(int)uVar8 * 0x38;
          *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
        }
        if ((*unaff_x20 == 0) || (lVar20 = *(long *)(*unaff_x20 + 0x38), lVar20 == 0))
        goto thunk_FUN_01b48178;
        if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
        *(undefined8 *)(lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) =
             *in_stack_00000028;
        thunk_FUN_01b4f09c();
        if ((*unaff_x20 == 0) || (lVar20 = *(long *)(*unaff_x20 + 0x38), lVar20 == 0))
        goto thunk_FUN_01b48178;
        if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
        uVar8 = *(uint *)(unaff_x19 + 0x120);
        *(uint *)(lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = uVar8;
        lVar20 = *unaff_x24;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar20 = *unaff_x24;
          uVar8 = *(uint *)(unaff_x19 + 0x120);
        }
        lVar12 = **(long **)(lVar20 + 0xb8);
        if (lVar12 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036b7478;
        *(bool *)(lVar12 + (long)(int)uVar8 * 0x38 + 0x41) = bVar4;
        if (bVar4) {
          if (*(int *)(lVar20 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar12 = **(long **)(*unaff_x24 + 0xb8);
            if (lVar12 == 0) goto thunk_FUN_01b48178;
            uVar8 = *(uint *)(unaff_x19 + 0x120);
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036b7478;
          puVar15 = (undefined8 *)(lVar12 + (long)(int)uVar8 * 0x38 + 0x48);
          *puVar15 = uVar24;
          thunk_FUN_01b4f09c(puVar15,uVar24);
          *(undefined8 *)(unaff_x19 + 0x100) = uVar18;
          thunk_FUN_01b4f09c(unaff_x29);
          *(undefined8 *)(unaff_x19 + 0x118) = uVar24;
          thunk_FUN_01b4f09c(in_stack_00000028,uVar24);
          *(undefined4 *)(unaff_x19 + 0x120) = uVar9;
        }
        uVar8 = *(uint *)(unaff_x19 + 0x490);
      }
LAB_036b6be0:
      *(uint *)(unaff_x19 + 0x490) = uVar8 + 1;
    }
    in_w8 = *(uint *)(unaff_x25 + 0x18);
  }
  if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
    *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
LAB_036b6c0c:
    return *(undefined4 *)(unaff_x19 + 0x490);
  }
  lVar20 = *unaff_x20;
  if (lVar20 != 0) {
    *(int *)(lVar20 + 0x1c) = in_stack_00000020._4_4_;
    lVar12 = *unaff_x24;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar12 = *unaff_x24;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
    if (lVar12 != 0) {
      uVar8 = FUN_02554fc4(lVar12,*(undefined8 *)PTR_DAT_03d9b168);
      *(uint *)(lVar20 + 0x34) = uVar8;
      if (*unaff_x20 != 0) {
        plVar21 = (long *)(*unaff_x20 + 0x60);
        lVar20 = *plVar21;
        if (lVar20 != 0) {
          uVar19 = (ulong)uVar8;
          if (*(int *)(lVar20 + 0x18) < (int)uVar8) {
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_01f52de4(plVar21,uVar19,0,*(undefined8 *)PTR_DAT_03d9cb38);
          }
          if (*(long *)(unaff_x19 + 0x708) != 0) {
            plVar21 = (long *)(unaff_x19 + 0x708);
            if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar8) {
              uVar9 = FUN_039155e8(uVar8 + 1,0);
              if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*unaff_x27);
              }
              FUN_01f52b30(plVar21,uVar9,*(undefined8 *)PTR_DAT_03d9cb40);
            }
            if (*(char *)(unaff_x19 + 0x321) != '\0') {
              if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
              plVar23 = (long *)(*unaff_x20 + 0x38);
              lVar20 = *plVar23;
              if (lVar20 == 0) goto thunk_FUN_01b48178;
              iVar10 = *(int *)(unaff_x19 + 0x490);
              if (0x100 < *(int *)(lVar20 + 0x18) - iVar10) {
                iVar11 = 0x100;
                if (0x100 < iVar10 + 1) {
                  iVar11 = iVar10 + 1;
                }
                if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                FUN_01f52d44(plVar23,iVar11,1,*(undefined8 *)PTR_DAT_03d9cb30);
                unaff_x24 = (long *)PTR_DAT_03d9c920;
              }
            }
            if (0 < (int)uVar8) {
              lVar20 = 0;
              uVar26 = 0;
              lVar12 = 0x54;
              lVar28 = 0x20;
              do {
                if (uVar26 != 0) {
                  lVar16 = *plVar21;
                  if (lVar16 == 0) goto thunk_FUN_01b48178;
                  if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_036b7478;
                  uVar24 = *(undefined8 *)(lVar16 + uVar26 * 8 + 0x20);
                  if (*(int *)(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar13 = FUN_03922f24(uVar24,0,0);
                  if ((uVar13 & 1) != 0) {
                    lVar16 = *unaff_x24;
                    plVar23 = (long *)*plVar21;
                    if (*(int *)(lVar16 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                      lVar16 = *unaff_x24;
                    }
                    lVar16 = **(long **)(lVar16 + 0xb8);
                    if (lVar16 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_036b7478;
                    lVar16 = lVar16 + lVar12;
                    in_stack_00000160 = *(undefined8 *)(lVar16 + -4);
                    in_stack_00000158 = *(undefined8 *)(lVar16 + -0xc);
                    in_stack_00000150 = *(undefined8 *)(lVar16 + -0x14);
                    in_stack_00000148 = *(undefined8 *)(lVar16 + -0x1c);
                    in_stack_00000140 = *(undefined8 *)(lVar16 + -0x24);
                    in_stack_00000138 = *(undefined8 *)(lVar16 + -0x2c);
                    in_stack_00000130 = *(undefined8 *)(lVar16 + -0x34);
                    lVar16 = FUN_03701aec();
                    if (plVar23 == (long *)0x0) goto thunk_FUN_01b48178;
                    if ((lVar16 != 0) &&
                       (lVar14 = thunk_FUN_01afa9e0(lVar16,*(undefined8 *)(*plVar23 + 0x40)),
                       lVar14 == 0)) {
LAB_036b747c:
                      uVar24 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
                      FUN_01b48050(uVar24,0);
                    }
                    if (*(uint *)(plVar23 + 3) <= uVar26) goto LAB_036b7478;
                    plVar23[uVar26 + 4] = lVar16;
                    thunk_FUN_01b4f09c((long)plVar23 + lVar28,lVar16);
                    unaff_x24 = (long *)PTR_DAT_03d9c920;
                    if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x60), lVar16 == 0))
                    goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_036b7478;
                    puVar15 = (undefined8 *)(lVar16 + lVar20 + 0x30);
                    *puVar15 = 0;
                    thunk_FUN_01b4f09c(puVar15,0);
                  }
                  lVar16 = *plVar21;
                  if (lVar16 == 0) goto thunk_FUN_01b48178;
                  if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_036b7478;
                  lVar16 = *(long *)(lVar16 + uVar26 * 8 + 0x20);
                  if (lVar16 == 0) goto thunk_FUN_01b48178;
                  uVar24 = *(undefined8 *)(lVar16 + 0x38);
                  if (*(int *)(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar13 = FUN_03922f24(uVar24,0,0);
                  if ((uVar13 & 1) == 0) {
                    lVar16 = *plVar21;
                    if (lVar16 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_036b7478;
                    lVar16 = *(long *)(lVar16 + uVar26 * 8 + 0x20);
                    if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x38), lVar16 == 0))
                    goto thunk_FUN_01b48178;
                    iVar10 = FUN_03922ce0(lVar16,0);
                    lVar16 = *unaff_x24;
                    if (*(int *)(lVar16 + 0xe0) == 0) {
                      thunk_FUN_01ac7298(lVar16);
                      lVar16 = *unaff_x24;
                    }
                    lVar16 = **(long **)(lVar16 + 0xb8);
                    if (lVar16 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_036b7478;
                    lVar16 = *(long *)(lVar16 + lVar12 + -0x1c);
                    if (lVar16 == 0) goto thunk_FUN_01b48178;
                    iVar11 = FUN_03922ce0(lVar16,0);
                    if (iVar10 != iVar11) goto LAB_036b6f94;
                  }
                  else {
LAB_036b6f94:
                    lVar16 = *plVar21;
                    if (lVar16 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_036b7478;
                    lVar14 = *unaff_x24;
                    lVar16 = *(long *)(lVar16 + uVar26 * 8 + 0x20);
                    if (*(int *)(lVar14 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                      lVar14 = *unaff_x24;
                    }
                    lVar14 = **(long **)(lVar14 + 0xb8);
                    if (lVar14 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_036b7478;
                    if (lVar16 == 0) goto thunk_FUN_01b48178;
                    thunk_FUN_03701608(lVar16,*(undefined8 *)(lVar14 + lVar12 + -0x1c),0);
                    lVar16 = *plVar21;
                    if (lVar16 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_036b7478;
                    lVar14 = **(long **)(*unaff_x24 + 0xb8);
                    if (lVar14 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_036b7478;
                    lVar16 = *(long *)(lVar16 + uVar26 * 8 + 0x20);
                    if (lVar16 == 0) goto thunk_FUN_01b48178;
                    *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar14 + lVar12 + -0x2c);
                    thunk_FUN_01b4f09c();
                    lVar16 = *plVar21;
                    if (lVar16 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_036b7478;
                    lVar14 = **(long **)(*unaff_x24 + 0xb8);
                    if (lVar14 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_036b7478;
                    lVar16 = *(long *)(lVar16 + uVar26 * 8 + 0x20);
                    if (lVar16 == 0) goto thunk_FUN_01b48178;
                    *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(lVar14 + lVar12 + -0x24);
                    thunk_FUN_01b4f09c();
                  }
                  lVar16 = *unaff_x24;
                  if (*(int *)(lVar16 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar16 = *unaff_x24;
                  }
                  lVar14 = **(long **)(lVar16 + 0xb8);
                  if (lVar14 == 0) goto thunk_FUN_01b48178;
                  if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_036b7478;
                  if (*(char *)(lVar14 + lVar12 + -0x13) != '\0') {
                    lVar17 = *plVar21;
                    if (lVar17 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar17 + 0x18) <= uVar26) goto LAB_036b7478;
                    lVar17 = *(long *)(lVar17 + uVar26 * 8 + 0x20);
                    if (*(int *)(lVar16 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                      lVar14 = **(long **)(*unaff_x24 + 0xb8);
                      if (lVar14 == 0) goto thunk_FUN_01b48178;
                    }
                    if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_036b7478;
                    if (lVar17 == 0) goto thunk_FUN_01b48178;
                    FUN_03701638(lVar17,*(undefined8 *)(lVar14 + lVar12 + -0x1c),0);
                    lVar16 = *plVar21;
                    if (lVar16 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_036b7478;
                    lVar14 = **(long **)(*unaff_x24 + 0xb8);
                    if (lVar14 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_036b7478;
                    lVar16 = *(long *)(lVar16 + uVar26 * 8 + 0x20);
                    if (lVar16 == 0) goto thunk_FUN_01b48178;
                    *(undefined8 *)(lVar16 + 0x48) = *(undefined8 *)(lVar14 + lVar12 + -0xc);
                    thunk_FUN_01b4f09c();
                  }
                }
                lVar16 = *unaff_x24;
                if (*(int *)(lVar16 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar16 = *unaff_x24;
                }
                lVar16 = **(long **)(lVar16 + 0xb8);
                if (lVar16 == 0) goto thunk_FUN_01b48178;
                if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_036b7478;
                if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x60), lVar14 == 0))
                goto thunk_FUN_01b48178;
                if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_036b7478;
                lVar17 = *(long *)(lVar14 + lVar20 + 0x30);
                iVar10 = *(int *)(lVar16 + lVar12);
                if (lVar17 == 0) {
                  if (uVar26 == 0) {
                    in_stack_00000118 = 0;
                    in_stack_00000110 = 0;
                    in_stack_00000128 = 0;
                    in_stack_00000120 = 0;
                    in_stack_000000f8 = 0;
                    in_stack_000000f0 = 0;
                    in_stack_00000108 = 0;
                    in_stack_00000100 = 0;
                    in_stack_000000e8 = 0;
                    in_stack_000000e0 = 0;
                    FUN_036f884c(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar10 + 1,0);
                    memcpy(&stack0x00000090,&stack0x000000e0,0x50);
                    if (*(int *)(lVar14 + 0x18) == 0) goto LAB_036b7478;
                    memcpy((void *)(lVar14 + lVar20 + 0x20),&stack0x00000090,0x50);
                    __dest = (void *)(lVar14 + 0x20);
                  }
                  else {
                    lVar16 = *plVar21;
                    if (lVar16 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_036b7478;
                    lVar16 = *(long *)(lVar16 + uVar26 * 8 + 0x20);
                    if (lVar16 == 0) goto thunk_FUN_01b48178;
                    uVar24 = FUN_03701980(lVar16,0);
                    in_stack_00000118 = 0;
                    in_stack_00000110 = 0;
                    in_stack_00000128 = 0;
                    in_stack_00000120 = 0;
                    in_stack_000000f8 = 0;
                    in_stack_000000f0 = 0;
                    in_stack_00000108 = 0;
                    in_stack_00000100 = 0;
                    in_stack_000000e8 = 0;
                    in_stack_000000e0 = 0;
                    FUN_036f884c(&stack0x000000e0,uVar24,iVar10 + 1,0);
                    memcpy(&stack0x00000040,&stack0x000000e0,0x50);
                    if (*(uint *)(lVar14 + 0x18) <= uVar26) goto LAB_036b7478;
                    __dest = (void *)(lVar14 + lVar20 + 0x20);
                    memcpy(__dest,&stack0x00000040,0x50);
                  }
                  thunk_FUN_01b4f09c(__dest,0);
                }
                else {
                  iVar11 = *(int *)(lVar17 + 0x18);
                  if (iVar11 < iVar10 * 4) {
LAB_036b7200:
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
                    FUN_036f961c(lVar14 + lVar20 + 0x20,iVar10,0);
                  }
                  else if ((0 < iVar10) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
                    iVar1 = iVar11 + 3;
                    if (-1 < iVar11) {
                      iVar1 = iVar11;
                    }
                    if (0x100 < (iVar1 >> 2) - iVar10) goto LAB_036b7200;
                  }
                }
                unaff_x24 = (long *)PTR_DAT_03d9c920;
                if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x60), lVar16 == 0))
                goto thunk_FUN_01b48178;
                lVar14 = *(long *)PTR_DAT_03d9c920;
                if (*(int *)(lVar14 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar14 = *unaff_x24;
                }
                lVar14 = **(long **)(lVar14 + 0xb8);
                if (lVar14 == 0) goto thunk_FUN_01b48178;
                if ((*(uint *)(lVar14 + 0x18) <= uVar26) || (*(uint *)(lVar16 + 0x18) <= uVar26))
                goto LAB_036b7478;
                *(undefined8 *)(lVar16 + lVar20 + 0x68) = *(undefined8 *)(lVar14 + lVar12 + -0x1c);
                thunk_FUN_01b4f09c();
                uVar26 = uVar26 + 1;
                lVar20 = lVar20 + 0x50;
                lVar12 = lVar12 + 0x38;
                lVar28 = lVar28 + 8;
              } while (uVar8 != uVar26);
            }
            puVar5 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
            lVar20 = *plVar21;
            if (lVar20 != 0) {
              lVar12 = (-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar19 << 3) + 0x20;
              lVar28 = (long)(int)uVar8 * 0x50 + 0x20;
              do {
                uVar8 = (uint)uVar19;
                if ((int)*(uint *)(lVar20 + 0x18) <= (int)uVar8) goto LAB_036b6c0c;
                if (*(uint *)(lVar20 + 0x18) <= uVar8) {
LAB_036b7478:
                    /* WARNING: Subroutine does not return */
                  FUN_01b48180();
                }
                uVar24 = *(undefined8 *)(lVar20 + lVar12);
                if (*(int *)(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar19 = FUN_0391f968(uVar24,0,0);
                if ((uVar19 & 1) == 0) goto LAB_036b6c0c;
                if ((*unaff_x20 == 0) || (lVar20 = *(long *)(*unaff_x20 + 0x60), lVar20 == 0))
                break;
                uVar6 = *(uint *)(lVar20 + 0x18);
                if ((int)uVar8 < (int)uVar6) {
                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    uVar6 = *(uint *)(lVar20 + 0x18);
                  }
                  if (uVar6 <= uVar8) goto LAB_036b7478;
                  FUN_036fa5b4(lVar20 + lVar28,0,1,0);
                }
                lVar20 = *plVar21;
                uVar19 = (ulong)(uVar8 + 1);
                lVar28 = lVar28 + 0x50;
                lVar12 = lVar12 + 8;
              } while (lVar20 != 0);
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


