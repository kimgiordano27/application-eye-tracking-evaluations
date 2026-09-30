/*
FUNCTION_NAME: Unity.VisualScripting.TypeUtility$$ToShortString
ENTRY_POINT: 036bcf1c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_18;validity_or_gating_hits_21;telemetry_or_network_hits_7;frame_or_lifecycle_behavior
*/


undefined4 Unity_VisualScripting_TypeUtility__ToShortString(undefined1 param_1 [16],ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  float fVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  void *__dest;
  long lVar18;
  long lVar19;
  long *unaff_x19;
  long *unaff_x20;
  uint uVar20;
  long *unaff_x22;
  long *plVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  long unaff_x25;
  long lVar26;
  ulong uVar27;
  long *unaff_x27;
  long *unaff_x29;
  uint *puVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int iStack0000000000000024;
  long *in_stack_00000028;
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
  uint uStack00000000000001b8;
  undefined1 uStack00000000000001bc;
  
  iVar7 = FUN_03922ce0();
  if (*unaff_x29 == 0) goto LAB_036bea38;
  iVar8 = FUN_03922ce0(*unaff_x29,0);
  if (iVar7 != iVar8) {
    uVar12 = FUN_036fba20(0);
    if ((uVar12 & 1) == 0) {
LAB_036bcf84:
      if (unaff_x19[0xcb] == 0) goto LAB_036bea38;
      unaff_x19[0xcc] = *(long *)(unaff_x19[0xcb] + 0x20);
    }
    else {
      if (*in_stack_00000028 == 0) goto LAB_036bea38;
      iVar7 = FUN_03922ce0(*in_stack_00000028,0);
      if ((unaff_x19[0xcb] == 0) || (lVar13 = *(long *)(unaff_x19[0xcb] + 0x20), lVar13 == 0))
      goto LAB_036bea38;
      iVar8 = FUN_03922ce0(lVar13,0);
      if (iVar7 == iVar8) goto LAB_036bcf84;
      if (unaff_x19[0xcb] == 0) goto LAB_036bea38;
      lVar13 = unaff_x19[0x23];
      uVar14 = *(undefined8 *)(unaff_x19[0xcb] + 0x20);
      if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar13 = FUN_036f7d2c(lVar13,uVar14,0);
      unaff_x19[0xcc] = lVar13;
      unaff_x22 = (long *)PTR_DAT_03d9c920;
    }
    thunk_FUN_01b4f09c(unaff_x19 + 0xcc);
    lVar13 = *unaff_x22;
    lVar22 = unaff_x19[0xcc];
    lVar24 = unaff_x19[0xcb];
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar13 = *unaff_x22;
    }
    uVar9 = FUN_036b0b30(lVar22,lVar24,*(long *)(lVar13 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
    *(uint *)(unaff_x19 + 0xcd) = uVar9;
    lVar13 = **(long **)(*unaff_x22 + 0xb8);
    if (lVar13 == 0) goto LAB_036bea38;
    if (*(uint *)(lVar13 + 0x18) <= uVar9) {
LAB_036beac8:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    *(undefined4 *)(lVar13 + (long)(int)uVar9 * 0x38 + 0x54) = 0;
  }
  if ((int)unaff_x19[0x5c] == 6) {
    lVar13 = unaff_x19[0x5d];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar12 = FUN_0391f968(lVar13,0,0);
    puVar6 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__;
    if (((uVar12 & 1) != 0) && (plVar25 = unaff_x19, *(char *)((long)unaff_x19 + 0x3f5) == '\0')) {
      while( true ) {
        plVar25 = (long *)plVar25[0x5d];
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar12 = FUN_0391f968(plVar25,0,0);
        if ((uVar12 & 1) == 0) goto LAB_036bd10c;
        if (plVar25 == (long *)0x0) break;
        (**(code **)(*plVar25 + 0x558))
                  (plVar25,**(undefined8 **)(*(long *)puVar6 + 0xb8),
                   *(undefined8 *)(*plVar25 + 0x560));
        (**(code **)(*plVar25 + 0x948))(plVar25,*(undefined8 *)(*plVar25 + 0x950));
        if (plVar25[0x6d] == 0) break;
        UnityEngine_XR_Interaction_Toolkit_XRControllerRecorder__set_visitEachFrame(plVar25[0x6d],0)
        ;
      }
      goto LAB_036bea38;
    }
  }
LAB_036bd10c:
  if (unaff_x25 != 0) {
    uVar9 = *(uint *)(unaff_x25 + 0x18);
    plVar25 = (long *)PTR_DAT_03d9c920;
    if ((int)uVar9 < 1) {
      iStack0000000000000024 = 0;
    }
    else {
      uVar20 = 0;
      iStack0000000000000024 = 0;
      do {
        if (uVar9 <= uVar20) goto LAB_036beac8;
        puVar28 = (uint *)(unaff_x25 + (long)(int)uVar20 * 0xc + 0x20);
        if (*puVar28 == 0) break;
        if (*unaff_x20 == 0) goto LAB_036bea38;
        plVar25 = (long *)(*unaff_x20 + 0x38);
        lVar22 = *plVar25;
        lVar13 = unaff_x19[0x92];
        if ((lVar22 == 0) || (*(int *)(lVar22 + 0x18) <= (int)lVar13)) {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_01f52d44(plVar25,(int)lVar13 + 1,1,*(undefined8 *)PTR_DAT_03d9cb30);
          uVar9 = *(uint *)(unaff_x25 + 0x18);
        }
        if (uVar9 <= uVar20) goto LAB_036beac8;
        uVar9 = *puVar28;
        if ((uVar9 == 0x3c) && (*(char *)((long)unaff_x19 + 0x302) != '\0')) {
          lVar13 = unaff_x19[0x24];
          uVar12 = FUN_036e7318();
          uVar10 = uStack00000000000001b8;
          if ((uVar12 & 1) == 0) goto LAB_036bd3dc;
          if (*(uint *)(unaff_x25 + 0x18) <= uVar20) goto LAB_036beac8;
          iVar7 = *(int *)(unaff_x25 + (long)(int)uVar20 * 0xc + 0x24);
          if ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0) {
            *(undefined1 *)((long)unaff_x19 + 0x26a) = 1;
          }
          puVar6 = PTR_DAT_03d9c920;
          plVar25 = (long *)PTR_DAT_03d9c920;
          uVar20 = uStack00000000000001b8;
          if (*(int *)((long)unaff_x19 + 0x644) == 1) {
            lVar22 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar22 = *(long *)puVar6;
            }
            lVar22 = **(long **)(lVar22 + 0xb8);
            if (lVar22 != 0) {
              if (*(uint *)(unaff_x19 + 0x24) < *(uint *)(lVar22 + 0x18)) {
                lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x24) * 0x38;
                *(int *)(lVar22 + 0x54) = *(int *)(lVar22 + 0x54) + 1;
                if ((*unaff_x20 != 0) && (lVar22 = *(long *)(*unaff_x20 + 0x38), lVar22 != 0)) {
                  if (*(uint *)(unaff_x19 + 0x92) < *(uint *)(lVar22 + 0x18)) {
                    uVar11 = *(undefined4 *)((long)unaff_x19 + 0x6a4);
                    lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178;
                    *(short *)(lVar22 + 0x20) = (short)uVar11 + -0x2000;
                    *(undefined4 *)(lVar22 + 0x48) = uVar11;
                    *(long *)(lVar22 + 0x38) = *unaff_x29;
                    thunk_FUN_01b4f09c();
                    if ((*unaff_x20 != 0) && (lVar22 = *(long *)(*unaff_x20 + 0x38), lVar22 != 0)) {
                      if (*(uint *)(unaff_x19 + 0x92) < *(uint *)(lVar22 + 0x18)) {
                        *(long *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178 + 0x40) =
                             unaff_x19[0xd3];
                        thunk_FUN_01b4f09c();
                        if ((*unaff_x20 != 0) &&
                           (lVar22 = *(long *)(*unaff_x20 + 0x38), lVar22 != 0)) {
                          uVar9 = *(uint *)(unaff_x19 + 0x92);
                          if (uVar9 < *(uint *)(lVar22 + 0x18)) {
                            *(int *)(lVar22 + (long)(int)uVar9 * 0x178 + 0x58) =
                                 (int)unaff_x19[0x24];
                            if ((unaff_x19[0xd3] != 0) &&
                               (lVar24 = FUN_036fe7c0(unaff_x19[0xd3],0), lVar24 != 0)) {
                              uVar14 = FUN_02b59714(lVar24,*(undefined4 *)((long)unaff_x19 + 0x6a4),
                                                    *(undefined8 *)PTR_DAT_03d9c878);
                              if (uVar9 < *(uint *)(lVar22 + 0x18)) {
                                *(undefined8 *)(lVar22 + (long)(int)uVar9 * 0x178 + 0x30) = uVar14;
                                thunk_FUN_01b4f09c();
                                if ((*unaff_x20 != 0) &&
                                   (lVar22 = *(long *)(*unaff_x20 + 0x38), lVar22 != 0)) {
                                  uVar9 = *(uint *)(unaff_x19 + 0x92);
                                  if (uVar9 < *(uint *)(lVar22 + 0x18)) {
                                    uVar11 = *(undefined4 *)((long)unaff_x19 + 0x644);
                                    lVar24 = lVar22 + (long)(int)uVar9 * 0x178;
                                    *(int *)(lVar24 + 0x24) = iVar7;
                                    *(undefined4 *)(lVar24 + 0x2c) = uVar11;
                                    if (uVar10 < *(uint *)(in_stack_00000038 + 0x18)) {
                                      *(int *)(lVar22 + (long)(int)uVar9 * 0x178 + 0x28) =
                                           (*(int *)(in_stack_00000038 + (long)(int)uVar10 * 0xc +
                                                    0x24) - iVar7) + 1;
                                      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
                                      *(int *)(unaff_x19 + 0x24) = (int)lVar13;
                                      iStack0000000000000024 = iStack0000000000000024 + 1;
                                      plVar25 = (long *)PTR_DAT_03d9c920;
                                      unaff_x25 = in_stack_00000038;
                                      uVar20 = uVar10;
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
          uStack00000000000001bc = 0;
          lVar24 = unaff_x19[0x20];
          lVar22 = unaff_x19[0x23];
          lVar13 = unaff_x19[0x24];
          if (*(int *)((long)unaff_x19 + 0x644) != 0) goto LAB_036bd4b8;
          uVar10 = *(uint *)((long)unaff_x19 + 0x25c);
          if ((uVar10 >> 4 & 1) == 0) {
            if ((uVar10 >> 3 & 1) == 0) {
              if ((uVar10 >> 5 & 1) != 0) goto LAB_036bd40c;
            }
            else {
              if (*(int *)(*(long *)
                            Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar12 = FUN_02fdd92c(uVar9,0);
              if ((uVar12 & 1) != 0) {
                if (*(int *)(*(long *)
                              Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar9 = FUN_02fdddc0(uVar9,0);
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
            uVar12 = FUN_02fdd9e8(uVar9,0);
            if ((uVar12 & 1) != 0) {
              if (*(int *)(*(long *)
                            Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar9 = FUN_02fddc48(uVar9,0);
LAB_036bd4b4:
              uVar9 = uVar9 & 0xffff;
            }
          }
LAB_036bd4b8:
          lVar18 = FUN_036f260c();
          if (lVar18 == 0) {
            iVar7 = FUN_036fb88c();
            if (*(uint *)(unaff_x25 + 0x18) <= uVar20) goto LAB_036beac8;
            if (iVar7 == 0) {
              uVar10 = 0x25a1;
            }
            else {
              uVar10 = FUN_036fb88c(0);
            }
            *puVar28 = uVar10;
            lVar18 = unaff_x19[0x20];
            uVar11 = *(undefined4 *)((long)unaff_x19 + 0x25c);
            uVar2 = *(undefined4 *)((long)unaff_x19 + 0x214);
            if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            lVar18 = FUN_036d1ff4(uVar10,lVar18,1,uVar11,uVar2,(long)&stack0x000001b8 + 4,0);
            if (lVar18 == 0) {
              lVar18 = FUN_036fba04();
              if (lVar18 != 0) {
                lVar18 = FUN_036fba04(0);
                if (lVar18 == 0) goto LAB_036bea38;
                if (0 < *(int *)(lVar18 + 0x18)) {
                  lVar18 = unaff_x19[0x20];
                  uVar14 = FUN_036fba04(0);
                  uVar11 = *(undefined4 *)((long)unaff_x19 + 0x25c);
                  uVar2 = *(undefined4 *)((long)unaff_x19 + 0x214);
                  if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
                  }
                  lVar18 = FUN_036d2514(uVar10,lVar18,uVar14,1,uVar11,uVar2,
                                        (long)&stack0x000001b8 + 4,0);
                  if (lVar18 != 0) goto LAB_036bd568;
                }
              }
              uVar14 = FUN_036fb8e4(0);
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)
                                    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                  );
              }
              uVar12 = FUN_0391f968(uVar14,0,0);
              if ((uVar12 & 1) != 0) {
                uVar14 = FUN_036fb8e4(0);
                uVar11 = *(undefined4 *)((long)unaff_x19 + 0x25c);
                uVar2 = *(undefined4 *)((long)unaff_x19 + 0x214);
                if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
                }
                lVar18 = FUN_036d1ff4(uVar10,uVar14,1,uVar11,uVar2,(long)&stack0x000001b8 + 4,0);
                if (lVar18 != 0) goto LAB_036bd568;
              }
              if (*(uint *)(in_stack_00000038 + 0x18) <= uVar20) goto LAB_036beac8;
              *puVar28 = 0x20;
              lVar18 = unaff_x19[0x20];
              uVar11 = *(undefined4 *)((long)unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)((long)unaff_x19 + 0x214);
              if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar10 = 0x20;
              lVar18 = FUN_036d1ff4(0x20,lVar18,1,uVar11,uVar2,(long)&stack0x000001b8 + 4,0);
              if (lVar18 == 0) {
                if (*(uint *)(in_stack_00000038 + 0x18) <= uVar20) goto LAB_036beac8;
                *puVar28 = 3;
                lVar18 = unaff_x19[0x20];
                uVar11 = *(undefined4 *)((long)unaff_x19 + 0x25c);
                uVar2 = *(undefined4 *)((long)unaff_x19 + 0x214);
                if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar10 = 3;
                lVar18 = FUN_036d1ff4(3,lVar18,1,uVar11,uVar2,(long)&stack0x000001b8 + 4,0);
              }
            }
LAB_036bd568:
            uVar12 = FUN_036fb8c8(0);
            if ((uVar12 & 1) == 0) {
              plVar25 = (long *)FUN_01b47fd0(*(undefined8 *)
                                              Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                             ,4);
              if ((int)uVar9 < 0x10000) {
                in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar9);
                lVar16 = thunk_FUN_01afa70c(*(undefined8 *)
                                             Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                            ,&stack0x000000e0);
                if (plVar25 == (long *)0x0) goto LAB_036bea38;
                if ((lVar16 != 0) &&
                   (lVar19 = thunk_FUN_01afa9e0(lVar16,*(undefined8 *)(*plVar25 + 0x40)),
                   lVar19 == 0)) goto LAB_036beacc;
                if ((int)plVar25[3] == 0) goto LAB_036beac8;
                plVar25[4] = lVar16;
                thunk_FUN_01b4f09c(plVar25 + 4,lVar16);
                if (unaff_x19[0x1f] == 0) goto LAB_036bea38;
                lVar16 = FUN_039230bc(unaff_x19[0x1f],0);
                if ((lVar16 != 0) &&
                   (lVar19 = thunk_FUN_01afa9e0(lVar16,*(undefined8 *)(*plVar25 + 0x40)),
                   lVar19 == 0)) goto LAB_036beacc;
                if (*(uint *)(plVar25 + 3) < 2) goto LAB_036beac8;
                plVar25[5] = lVar16;
                thunk_FUN_01b4f09c(plVar25 + 5,lVar16);
                if (lVar18 == 0) goto LAB_036bea38;
                in_stack_00000170 = *(undefined4 *)(lVar18 + 0x14);
                lVar16 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&stack0x00000170);
                if ((lVar16 != 0) &&
                   (lVar19 = thunk_FUN_01afa9e0(lVar16,*(undefined8 *)(*plVar25 + 0x40)),
                   lVar19 == 0)) goto LAB_036beacc;
                if (*(uint *)(plVar25 + 3) < 3) goto LAB_036beac8;
                plVar25[6] = lVar16;
                thunk_FUN_01b4f09c(plVar25 + 6,lVar16);
                lVar16 = FUN_039230bc();
                if ((lVar16 != 0) &&
                   (lVar19 = thunk_FUN_01afa9e0(lVar16,*(undefined8 *)(*plVar25 + 0x40)),
                   lVar19 == 0)) goto LAB_036beacc;
                if (*(uint *)(plVar25 + 3) < 4) goto LAB_036beac8;
                plVar25[7] = lVar16;
                thunk_FUN_01b4f09c(plVar25 + 7,lVar16);
                puVar17 = (undefined8 *)PTR_DAT_03d9cb50;
              }
              else {
                in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar9);
                lVar16 = thunk_FUN_01afa70c(*(undefined8 *)
                                             Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                            ,&stack0x000000e0);
                if (plVar25 == (long *)0x0) goto LAB_036bea38;
                if ((lVar16 != 0) &&
                   (lVar19 = thunk_FUN_01afa9e0(lVar16,*(undefined8 *)(*plVar25 + 0x40)),
                   lVar19 == 0)) goto LAB_036beacc;
                if ((int)plVar25[3] == 0) goto LAB_036beac8;
                plVar25[4] = lVar16;
                thunk_FUN_01b4f09c(plVar25 + 4,lVar16);
                if (unaff_x19[0x1f] == 0) goto LAB_036bea38;
                lVar16 = FUN_039230bc(unaff_x19[0x1f],0);
                if ((lVar16 != 0) &&
                   (lVar19 = thunk_FUN_01afa9e0(lVar16,*(undefined8 *)(*plVar25 + 0x40)),
                   lVar19 == 0)) goto LAB_036beacc;
                if (*(uint *)(plVar25 + 3) < 2) goto LAB_036beac8;
                plVar25[5] = lVar16;
                thunk_FUN_01b4f09c(plVar25 + 5,lVar16);
                if (lVar18 == 0) goto LAB_036bea38;
                in_stack_00000170 = *(undefined4 *)(lVar18 + 0x14);
                lVar16 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&stack0x00000170);
                if ((lVar16 != 0) &&
                   (lVar19 = thunk_FUN_01afa9e0(lVar16,*(undefined8 *)(*plVar25 + 0x40)),
                   lVar19 == 0)) goto LAB_036beacc;
                if (*(uint *)(plVar25 + 3) < 3) goto LAB_036beac8;
                plVar25[6] = lVar16;
                thunk_FUN_01b4f09c(plVar25 + 6,lVar16);
                lVar16 = FUN_039230bc();
                if ((lVar16 != 0) &&
                   (lVar19 = thunk_FUN_01afa9e0(lVar16,*(undefined8 *)(*plVar25 + 0x40)),
                   lVar19 == 0)) goto LAB_036beacc;
                if (*(uint *)(plVar25 + 3) < 4) goto LAB_036beac8;
                plVar25[7] = lVar16;
                thunk_FUN_01b4f09c(plVar25 + 7,lVar16);
                puVar17 = (undefined8 *)PTR_DAT_03d9cb48;
              }
              uVar14 = FUN_02ee71a8(*puVar17,plVar25,0);
              if (*(int *)(*(long *)
                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_038f3474(uVar14);
              unaff_x25 = in_stack_00000038;
              uVar9 = uVar10;
            }
            else {
              unaff_x25 = in_stack_00000038;
              uVar9 = uVar10;
              if (lVar18 == 0) goto LAB_036bea38;
            }
          }
          if (*(char *)(lVar18 + 0x10) == '\x01') {
            if (*(long *)(lVar18 + 0x18) == 0) goto LAB_036bea38;
            iVar7 = FUN_036c1bb4(*(long *)(lVar18 + 0x18),0);
            if (*unaff_x29 == 0) goto LAB_036bea38;
            iVar8 = FUN_036c1bb4(*unaff_x29,0);
            if (iVar7 == iVar8) goto LAB_036bda7c;
            plVar25 = *(long **)(lVar18 + 0x18);
            if (plVar25 == (long *)0x0) {
              plVar25 = (long *)0x0;
              *unaff_x29 = 0;
            }
            else {
              lVar16 = *(long *)StringLiteral_444;
              bVar3 = *(byte *)(lVar16 + 0x130);
              if (*(byte *)(*plVar25 + 0x130) < bVar3) {
                plVar21 = (long *)0x0;
              }
              else {
                plVar21 = plVar25;
                if (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar3 * 8 + -8) != lVar16) {
                  plVar21 = (long *)0x0;
                }
              }
              *unaff_x29 = (long)plVar21;
              if (*(byte *)(*plVar25 + 0x130) < bVar3) {
                plVar25 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar3 * 8 + -8) != lVar16) {
                plVar25 = (long *)0x0;
              }
            }
            thunk_FUN_01b4f09c(unaff_x29,plVar25);
            bVar4 = true;
          }
          else {
LAB_036bda7c:
            bVar4 = false;
          }
          if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x38), lVar16 == 0))
          goto LAB_036bea38;
          if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x92)) goto LAB_036beac8;
          lVar16 = lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178;
          plVar25 = (long *)(lVar16 + 0x30);
          *plVar25 = lVar18;
          *(undefined4 *)(lVar16 + 0x2c) = 0;
          thunk_FUN_01b4f09c(plVar25,lVar18);
          if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x38), lVar16 == 0))
          goto LAB_036bea38;
          uVar10 = *(uint *)(unaff_x19 + 0x92);
          if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_036beac8;
          lVar19 = lVar16 + (long)(int)uVar10 * 0x178;
          *(short *)(lVar19 + 0x20) = (short)uVar9;
          *(undefined1 *)(lVar19 + 0x5c) = uStack00000000000001bc;
          if (*(uint *)(unaff_x25 + 0x18) <= uVar20) goto LAB_036beac8;
          lVar16 = lVar16 + (long)(int)uVar10 * 0x178;
          *(undefined8 *)(lVar16 + 0x24) =
               *(undefined8 *)(unaff_x25 + (long)(int)uVar20 * 0xc + 0x24);
          *(long *)(lVar16 + 0x38) = *unaff_x29;
          thunk_FUN_01b4f09c();
          plVar25 = (long *)PTR_DAT_03d9c920;
          if (*(char *)(lVar18 + 0x10) == '\x02') {
            plVar21 = *(long **)(lVar18 + 0x18);
            if (plVar21 == (long *)0x0) goto LAB_036bea38;
            bVar3 = *(byte *)(*(long *)PTR_DAT_03d9cb28 + 0x130);
            if ((*(byte *)(*plVar21 + 0x130) < bVar3) ||
               (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar3 * 8 + -8) !=
                *(long *)PTR_DAT_03d9cb28)) goto LAB_036bea38;
            lVar24 = plVar21[4];
            lVar22 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar22 = *plVar25;
            }
            uVar9 = FUN_036b0d60(lVar24,plVar21,*(long *)(lVar22 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 8));
            *(uint *)(unaff_x19 + 0x24) = uVar9;
            lVar22 = **(long **)(*plVar25 + 0xb8);
            if (lVar22 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar22 + 0x18) <= uVar9) goto LAB_036beac8;
            lVar22 = lVar22 + (long)(int)uVar9 * 0x38;
            *(int *)(lVar22 + 0x54) = *(int *)(lVar22 + 0x54) + 1;
            if ((*unaff_x20 == 0) || (lVar22 = *(long *)(*unaff_x20 + 0x38), lVar22 == 0))
            goto LAB_036bea38;
            if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x92)) goto LAB_036beac8;
            lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178;
            *(undefined4 *)(lVar22 + 0x2c) = 1;
            lVar24 = unaff_x19[0x24];
            *(undefined8 *)(lVar22 + 0x40) = plVar21;
            *(int *)(lVar22 + 0x58) = (int)lVar24;
            thunk_FUN_01b4f09c((undefined8 *)(lVar22 + 0x40),plVar21);
            plVar25 = (long *)PTR_DAT_03d9c920;
            if ((unaff_x19[0x6d] == 0) || (lVar22 = *(long *)(unaff_x19[0x6d] + 0x38), lVar22 == 0))
            goto LAB_036bea38;
            uVar9 = *(uint *)(unaff_x19 + 0x92);
            if (*(uint *)(lVar22 + 0x18) <= uVar9) goto LAB_036beac8;
            *(undefined4 *)(lVar22 + (long)(int)uVar9 * 0x178 + 0x48) =
                 *(undefined4 *)(lVar18 + 0x28);
            *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
            *(int *)(unaff_x19 + 0x24) = (int)lVar13;
            iStack0000000000000024 = iStack0000000000000024 + 1;
            unaff_x25 = in_stack_00000038;
            unaff_x27 = (long *)PTR_DAT_03d9c8a0;
          }
          else {
            if (bVar4) {
              if (*unaff_x29 == 0) goto LAB_036bea38;
              iVar7 = FUN_036c1bb4(*unaff_x29,0);
              if (unaff_x19[0x1f] == 0) goto LAB_036bea38;
              iVar8 = FUN_036c1bb4(unaff_x19[0x1f],0);
              if (iVar7 != iVar8) {
                uVar12 = FUN_036fba20(0);
                if ((uVar12 & 1) == 0) {
                  if (*unaff_x29 == 0) goto LAB_036bea38;
                  lVar16 = *(long *)(*unaff_x29 + 0x20);
                }
                else {
                  if (*unaff_x29 == 0) goto LAB_036bea38;
                  lVar16 = *in_stack_00000028;
                  uVar14 = *(undefined8 *)(*unaff_x29 + 0x20);
                  if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  lVar16 = FUN_036f7d2c(lVar16,uVar14,0);
                }
                *in_stack_00000028 = lVar16;
                thunk_FUN_01b4f09c(in_stack_00000028);
                lVar16 = *plVar25;
                lVar19 = *in_stack_00000028;
                lVar26 = *unaff_x29;
                if (*(int *)(lVar16 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar16 = *plVar25;
                }
                uVar11 = FUN_036b0b30(lVar19,lVar26,*(long *)(lVar16 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
                *(undefined4 *)(unaff_x19 + 0x24) = uVar11;
                unaff_x25 = in_stack_00000038;
              }
            }
            if (*(long *)(lVar18 + 0x20) == 0) goto LAB_036bea38;
            iVar7 = FUN_0396b18c(*(long *)(lVar18 + 0x20),0);
            if (0 < iVar7) {
              if (*(long *)(lVar18 + 0x20) == 0) goto LAB_036bea38;
              lVar16 = *unaff_x29;
              lVar19 = *in_stack_00000028;
              uVar11 = FUN_0396b18c(*(long *)(lVar18 + 0x20),0);
              if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb20);
              }
              lVar18 = FUN_036f77c8(lVar16,lVar19,uVar11,0);
              *in_stack_00000028 = lVar18;
              thunk_FUN_01b4f09c(in_stack_00000028,lVar18);
              lVar18 = *plVar25;
              lVar16 = *in_stack_00000028;
              lVar19 = *unaff_x29;
              if (*(int *)(lVar18 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar18 = *plVar25;
              }
              uVar11 = FUN_036b0b30(lVar16,lVar19,*(long *)(lVar18 + 0xb8),
                                    *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
              bVar4 = true;
              *(undefined4 *)(unaff_x19 + 0x24) = uVar11;
              unaff_x25 = in_stack_00000038;
            }
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar12 = FUN_02fdb080(uVar9,0);
            unaff_x27 = (long *)PTR_DAT_03d9c8a0;
            if ((uVar9 != 0x200b) && ((uVar12 & 1) == 0)) {
              lVar18 = *plVar25;
              if (*(int *)(lVar18 + 0xe0) == 0) {
                thunk_FUN_01ac7298(lVar18);
                lVar18 = *plVar25;
              }
              lVar16 = **(long **)(lVar18 + 0xb8);
              if (lVar16 == 0) goto LAB_036bea38;
              uVar9 = *(uint *)(unaff_x19 + 0x24);
              if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_036beac8;
              if (*(int *)(lVar16 + (long)(int)uVar9 * 0x38 + 0x54) < 0x3fff) {
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(lVar18);
                  lVar16 = **(long **)(*plVar25 + 0xb8);
                  if (lVar16 == 0) goto LAB_036bea38;
                  uVar9 = *(uint *)(unaff_x19 + 0x24);
                }
              }
              else {
                lVar18 = *in_stack_00000028;
                uVar14 = thunk_FUN_01afaadc(*(undefined8 *)
                                             Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                                           );
                FUN_038ff0a8(uVar14,lVar18,0);
                lVar18 = *plVar25;
                lVar16 = *unaff_x29;
                if (*(int *)(lVar18 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar18 = *plVar25;
                }
                uVar9 = FUN_036b0b30(uVar14,lVar16,*(long *)(lVar18 + 0xb8),
                                     *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
                *(uint *)(unaff_x19 + 0x24) = uVar9;
                lVar16 = **(long **)(*plVar25 + 0xb8);
                if (lVar16 == 0) goto LAB_036bea38;
              }
              if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_036beac8;
              lVar16 = lVar16 + (long)(int)uVar9 * 0x38;
              *(int *)(lVar16 + 0x54) = *(int *)(lVar16 + 0x54) + 1;
            }
            if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x38), lVar18 == 0))
            goto LAB_036bea38;
            if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x92)) goto LAB_036beac8;
            *(long *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178 + 0x50) =
                 *in_stack_00000028;
            thunk_FUN_01b4f09c();
            if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x38), lVar18 == 0))
            goto LAB_036bea38;
            if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x92)) goto LAB_036beac8;
            uVar9 = *(uint *)(unaff_x19 + 0x24);
            *(uint *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x92) * 0x178 + 0x58) = uVar9;
            lVar18 = *plVar25;
            if (*(int *)(lVar18 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar18 = *plVar25;
              uVar9 = *(uint *)(unaff_x19 + 0x24);
            }
            lVar16 = **(long **)(lVar18 + 0xb8);
            if (lVar16 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_036beac8;
            *(bool *)(lVar16 + (long)(int)uVar9 * 0x38 + 0x41) = bVar4;
            if (bVar4) {
              if (*(int *)(lVar18 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar16 = **(long **)(*plVar25 + 0xb8);
                if (lVar16 == 0) goto LAB_036bea38;
                uVar9 = *(uint *)(unaff_x19 + 0x24);
              }
              if (*(uint *)(lVar16 + 0x18) <= uVar9) goto LAB_036beac8;
              plVar21 = (long *)(lVar16 + (long)(int)uVar9 * 0x38 + 0x48);
              *plVar21 = lVar22;
              thunk_FUN_01b4f09c(plVar21,lVar22);
              unaff_x19[0x20] = lVar24;
              thunk_FUN_01b4f09c(unaff_x29);
              unaff_x19[0x23] = lVar22;
              thunk_FUN_01b4f09c(in_stack_00000028,lVar22);
              *(int *)(unaff_x19 + 0x24) = (int)lVar13;
            }
            uVar9 = *(uint *)(unaff_x19 + 0x92);
          }
LAB_036be0ec:
          *(uint *)(unaff_x19 + 0x92) = uVar9 + 1;
        }
        uVar9 = *(uint *)(unaff_x25 + 0x18);
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < (int)uVar9);
    }
    if (*(char *)((long)unaff_x19 + 0x3f5) != '\0') {
      *(undefined1 *)((long)unaff_x19 + 0x3f5) = 0;
LAB_036be118:
      return (int)unaff_x19[0x92];
    }
    lVar13 = *unaff_x20;
    if (lVar13 != 0) {
      *(int *)(lVar13 + 0x1c) = iStack0000000000000024;
      lVar22 = *plVar25;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar22 = *plVar25;
      }
      lVar22 = *(long *)(*(long *)(lVar22 + 0xb8) + 8);
      if (lVar22 != 0) {
        uVar9 = FUN_02554fc4(lVar22,*(undefined8 *)PTR_DAT_03d9b168);
        *(uint *)(lVar13 + 0x34) = uVar9;
        if (*unaff_x20 != 0) {
          plVar21 = (long *)(*unaff_x20 + 0x60);
          lVar13 = *plVar21;
          if (lVar13 != 0) {
            uVar12 = (ulong)uVar9;
            if (*(int *)(lVar13 + 0x18) < (int)uVar9) {
              if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_01f52de4(plVar21,uVar12,0,*(undefined8 *)PTR_DAT_03d9cb38);
            }
            if (unaff_x19[0xe1] != 0) {
              plVar21 = unaff_x19 + 0xe1;
              if (*(int *)(unaff_x19[0xe1] + 0x18) < (int)uVar9) {
                uVar11 = FUN_039155e8(uVar9 + 1,0);
                if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*unaff_x27);
                }
                FUN_01f52b30(plVar21,uVar11,*(undefined8 *)PTR_DAT_03d9cc70);
              }
              if (*(char *)((long)unaff_x19 + 0x321) != '\0') {
                if (*unaff_x20 == 0) goto LAB_036bea38;
                plVar23 = (long *)(*unaff_x20 + 0x38);
                lVar13 = *plVar23;
                if (lVar13 == 0) goto LAB_036bea38;
                iVar7 = (int)unaff_x19[0x92];
                if (0x100 < *(int *)(lVar13 + 0x18) - iVar7) {
                  iVar8 = 0x100;
                  if (0x100 < iVar7 + 1) {
                    iVar8 = iVar7 + 1;
                  }
                  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  FUN_01f52d44(plVar23,iVar8,1,*(undefined8 *)PTR_DAT_03d9cb30);
                  plVar25 = (long *)PTR_DAT_03d9c920;
                }
              }
              fVar5 = DAT_00b55084;
              if (0 < (int)uVar9) {
                lVar13 = 0;
                uVar27 = 0;
                lVar22 = 0x54;
                lVar24 = 0x20;
                do {
                  fVar32 = (float)param_2;
                  if (uVar27 != 0) {
                    lVar18 = *plVar21;
                    if (lVar18 == 0) goto LAB_036bea38;
                    if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_036beac8;
                    uVar14 = *(undefined8 *)(lVar18 + uVar27 * 8 + 0x20);
                    if (*(int *)(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar15 = FUN_03922f24(uVar14,0,0);
                    if ((uVar15 & 1) != 0) {
                      lVar18 = *plVar25;
                      plVar23 = (long *)*plVar21;
                      if (*(int *)(lVar18 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                        lVar18 = *plVar25;
                      }
                      lVar18 = **(long **)(lVar18 + 0xb8);
                      if (lVar18 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_036beac8;
                      lVar18 = lVar18 + lVar22;
                      in_stack_00000160 = *(undefined8 *)(lVar18 + -4);
                      in_stack_00000158 = *(undefined8 *)(lVar18 + -0xc);
                      in_stack_00000150 = *(undefined8 *)(lVar18 + -0x14);
                      in_stack_00000148 = *(undefined8 *)(lVar18 + -0x1c);
                      uVar14 = *(undefined8 *)(lVar18 + -0x24);
                      in_stack_00000138 = *(undefined8 *)(lVar18 + -0x2c);
                      in_stack_00000130 = *(undefined8 *)(lVar18 + -0x34);
                      in_stack_00000140 = uVar14;
                      lVar18 = FUN_03702d14();
                      fVar32 = (float)uVar14;
                      if (plVar23 == (long *)0x0) goto LAB_036bea38;
                      if ((lVar18 != 0) &&
                         (lVar16 = thunk_FUN_01afa9e0(lVar18,*(undefined8 *)(*plVar23 + 0x40)),
                         lVar16 == 0)) {
LAB_036beacc:
                        uVar14 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
                        FUN_01b48050(uVar14,0);
                      }
                      if (*(uint *)(plVar23 + 3) <= uVar27) goto LAB_036beac8;
                      plVar23[uVar27 + 4] = lVar18;
                      thunk_FUN_01b4f09c((long)plVar23 + lVar24,lVar18);
                      plVar25 = (long *)PTR_DAT_03d9c920;
                      if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x60), lVar18 == 0))
                      goto LAB_036bea38;
                      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_036beac8;
                      puVar17 = (undefined8 *)(lVar18 + lVar13 + 0x30);
                      *puVar17 = 0;
                      thunk_FUN_01b4f09c(puVar17,0);
                    }
                    if (unaff_x19[0x70] == 0) goto LAB_036bea38;
                    fVar29 = (float)FUN_03928134(unaff_x19[0x70],0);
                    lVar18 = *plVar21;
                    if (lVar18 == 0) goto LAB_036bea38;
                    if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_036beac8;
                    lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
                    if ((lVar18 == 0) ||
                       (fVar31 = fVar32, lVar18 = FUN_039ad440(lVar18,0), lVar18 == 0))
                    goto LAB_036bea38;
                    fVar30 = (float)FUN_03928134(lVar18,0);
                    fVar32 = (fVar32 - fVar31) * (fVar32 - fVar31);
                    param_2 = (ulong)(uint)fVar32;
                    if (fVar5 <= (fVar29 - fVar30) * (fVar29 - fVar30) + fVar32) {
                      lVar18 = *plVar21;
                      if (lVar18 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_036beac8;
                      lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_036bea38;
                      lVar18 = FUN_039ad440(lVar18,0);
                      if ((unaff_x19[0x70] == 0) || (FUN_03928134(unaff_x19[0x70],0), lVar18 == 0))
                      goto LAB_036bea38;
                      FUN_039281c4(lVar18,0);
                    }
                    lVar18 = *plVar21;
                    if (lVar18 == 0) goto LAB_036bea38;
                    if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_036beac8;
                    lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
                    if (lVar18 == 0) goto LAB_036bea38;
                    uVar14 = *(undefined8 *)(lVar18 + 0xf0);
                    if (*(int *)(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar15 = FUN_03922f24(uVar14,0,0);
                    if ((uVar15 & 1) == 0) {
                      lVar18 = *plVar21;
                      if (lVar18 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_036beac8;
                      lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
                      if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0xf0), lVar18 == 0))
                      goto LAB_036bea38;
                      iVar7 = FUN_03922ce0(lVar18,0);
                      lVar18 = *plVar25;
                      if (*(int *)(lVar18 + 0xe0) == 0) {
                        thunk_FUN_01ac7298(lVar18);
                        lVar18 = *plVar25;
                      }
                      lVar18 = **(long **)(lVar18 + 0xb8);
                      if (lVar18 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_036beac8;
                      lVar18 = *(long *)(lVar18 + lVar22 + -0x1c);
                      if (lVar18 == 0) goto LAB_036bea38;
                      iVar8 = FUN_03922ce0(lVar18,0);
                      if (iVar7 != iVar8) goto LAB_036be568;
                    }
                    else {
LAB_036be568:
                      lVar18 = *plVar21;
                      if (lVar18 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_036beac8;
                      lVar16 = *plVar25;
                      lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
                      if (*(int *)(lVar16 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                        lVar16 = *plVar25;
                      }
                      lVar16 = **(long **)(lVar16 + 0xb8);
                      if (lVar16 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar16 + 0x18) <= uVar27) goto LAB_036beac8;
                      if (lVar18 == 0) goto LAB_036bea38;
                      thunk_FUN_03702968(lVar18,*(undefined8 *)(lVar16 + lVar22 + -0x1c),0);
                      lVar18 = *plVar21;
                      if (lVar18 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_036beac8;
                      lVar16 = **(long **)(*plVar25 + 0xb8);
                      if (lVar16 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar16 + 0x18) <= uVar27) goto LAB_036beac8;
                      lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_036bea38;
                      *(undefined8 *)(lVar18 + 0xd8) = *(undefined8 *)(lVar16 + lVar22 + -0x2c);
                      thunk_FUN_01b4f09c();
                      lVar18 = *plVar21;
                      if (lVar18 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_036beac8;
                      lVar16 = **(long **)(*plVar25 + 0xb8);
                      if (lVar16 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar16 + 0x18) <= uVar27) goto LAB_036beac8;
                      lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_036bea38;
                      *(undefined8 *)(lVar18 + 0xe0) = *(undefined8 *)(lVar16 + lVar22 + -0x24);
                      thunk_FUN_01b4f09c();
                    }
                    lVar18 = *plVar25;
                    if (*(int *)(lVar18 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                      lVar18 = *plVar25;
                    }
                    lVar16 = **(long **)(lVar18 + 0xb8);
                    if (lVar16 == 0) goto LAB_036bea38;
                    if (*(uint *)(lVar16 + 0x18) <= uVar27) goto LAB_036beac8;
                    if (*(char *)(lVar16 + lVar22 + -0x13) != '\0') {
                      lVar19 = *plVar21;
                      if (lVar19 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_036beac8;
                      lVar19 = *(long *)(lVar19 + uVar27 * 8 + 0x20);
                      if (*(int *)(lVar18 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                        lVar16 = **(long **)(*plVar25 + 0xb8);
                        if (lVar16 == 0) goto LAB_036bea38;
                      }
                      if (*(uint *)(lVar16 + 0x18) <= uVar27) goto LAB_036beac8;
                      if (lVar19 == 0) goto LAB_036bea38;
                      FUN_037029c4(lVar19,*(undefined8 *)(lVar16 + lVar22 + -0x1c),0);
                      lVar18 = *plVar21;
                      if (lVar18 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_036beac8;
                      lVar16 = **(long **)(*plVar25 + 0xb8);
                      if (lVar16 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar16 + 0x18) <= uVar27) goto LAB_036beac8;
                      lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_036bea38;
                      *(undefined8 *)(lVar18 + 0x100) = *(undefined8 *)(lVar16 + lVar22 + -0xc);
                      thunk_FUN_01b4f09c(lVar18 + 0x100);
                    }
                  }
                  lVar18 = *plVar25;
                  if (*(int *)(lVar18 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar18 = *plVar25;
                  }
                  lVar18 = **(long **)(lVar18 + 0xb8);
                  if (lVar18 == 0) goto LAB_036bea38;
                  if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_036beac8;
                  if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x60), lVar16 == 0))
                  goto LAB_036bea38;
                  if (*(uint *)(lVar16 + 0x18) <= uVar27) goto LAB_036beac8;
                  lVar19 = *(long *)(lVar16 + lVar13 + 0x30);
                  iVar7 = *(int *)(lVar18 + lVar22);
                  if (lVar19 == 0) {
                    if (uVar27 == 0) {
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
                      FUN_036f884c(&stack0x000000e0,unaff_x19[0x74],iVar7 + 1,0);
                      memcpy(&stack0x00000090,&stack0x000000e0,0x50);
                      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_036beac8;
                      memcpy((void *)(lVar16 + lVar13 + 0x20),&stack0x00000090,0x50);
                      __dest = (void *)(lVar16 + 0x20);
                    }
                    else {
                      lVar18 = *plVar21;
                      if (lVar18 == 0) goto LAB_036bea38;
                      if (*(uint *)(lVar18 + 0x18) <= uVar27) goto LAB_036beac8;
                      lVar18 = *(long *)(lVar18 + uVar27 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_036bea38;
                      uVar14 = FUN_03702ba4(lVar18,0);
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
                      FUN_036f884c(&stack0x000000e0,uVar14,iVar7 + 1,0);
                      memcpy(&stack0x00000040,&stack0x000000e0,0x50);
                      if (*(uint *)(lVar16 + 0x18) <= uVar27) goto LAB_036beac8;
                      __dest = (void *)(lVar16 + lVar13 + 0x20);
                      memcpy(__dest,&stack0x00000040,0x50);
                    }
                    thunk_FUN_01b4f09c(__dest,0);
                  }
                  else {
                    iVar8 = *(int *)(lVar19 + 0x18);
                    if (iVar8 < iVar7 * 4) {
LAB_036be7d8:
                      if (iVar7 < 0x401) {
                        iVar7 = FUN_039155e8(iVar7 + 1,0);
                      }
                      else {
                        iVar7 = iVar7 + 0x100;
                      }
                      if (*(int *)(*(long *)
                                    Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      FUN_036f961c(lVar16 + lVar13 + 0x20,iVar7,0);
                    }
                    else if ((0 < iVar7) && (*(char *)((long)unaff_x19 + 0x321) != '\0')) {
                      iVar1 = iVar8 + 3;
                      if (-1 < iVar8) {
                        iVar1 = iVar8;
                      }
                      if (0x100 < (iVar1 >> 2) - iVar7) goto LAB_036be7d8;
                    }
                  }
                  plVar25 = (long *)PTR_DAT_03d9c920;
                  if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x60), lVar18 == 0))
                  goto LAB_036bea38;
                  lVar16 = *(long *)PTR_DAT_03d9c920;
                  if (*(int *)(lVar16 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar16 = *plVar25;
                  }
                  lVar16 = **(long **)(lVar16 + 0xb8);
                  if (lVar16 == 0) goto LAB_036bea38;
                  if ((*(uint *)(lVar16 + 0x18) <= uVar27) || (*(uint *)(lVar18 + 0x18) <= uVar27))
                  goto LAB_036beac8;
                  *(undefined8 *)(lVar18 + lVar13 + 0x68) = *(undefined8 *)(lVar16 + lVar22 + -0x1c)
                  ;
                  thunk_FUN_01b4f09c();
                  uVar27 = uVar27 + 1;
                  lVar13 = lVar13 + 0x50;
                  lVar22 = lVar22 + 0x38;
                  lVar24 = lVar24 + 8;
                } while (uVar9 != uVar27);
              }
              lVar13 = *plVar21;
              if (lVar13 != 0) {
                lVar22 = (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3) + 0x20;
                do {
                  uVar9 = (uint)uVar12;
                  if ((int)*(uint *)(lVar13 + 0x18) <= (int)uVar9) goto LAB_036be118;
                  if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_036beac8;
                  uVar14 = *(undefined8 *)(lVar13 + lVar22);
                  if (*(int *)(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar12 = FUN_0391f968(uVar14,0,0);
                  if ((uVar12 & 1) == 0) goto LAB_036be118;
                  if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x60), lVar13 == 0))
                  break;
                  if ((int)uVar9 < *(int *)(lVar13 + 0x18)) {
                    lVar13 = *plVar21;
                    if (lVar13 == 0) break;
                    if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_036beac8;
                    if ((*(long *)(lVar13 + lVar22) == 0) ||
                       (lVar13 = FUN_039add2c(*(long *)(lVar13 + lVar22),0), lVar13 == 0)) break;
                    FUN_03af8c9c(lVar13,0,0);
                  }
                  lVar13 = *plVar21;
                  uVar12 = (ulong)(uVar9 + 1);
                  lVar22 = lVar22 + 8;
                } while (lVar13 != 0);
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


