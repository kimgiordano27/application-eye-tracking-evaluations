/*
FUNCTION_NAME: Unity.VisualScripting.TypeFilter$$get_Static
ENTRY_POINT: 036b6b6c
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


undefined4 Unity_VisualScripting_TypeFilter__get_Static(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  void *__dest;
  uint in_w8;
  long lVar14;
  long in_x9;
  long lVar15;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar16;
  uint unaff_w22;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  long *unaff_x24;
  undefined8 uVar21;
  long unaff_x25;
  ulong uVar22;
  long *unaff_x27;
  int unaff_w28;
  uint *puVar23;
  long *unaff_x29;
  long lVar24;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
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
  
code_r0x036b6b6c:
  if (unaff_w28 != 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      in_x9 = **(long **)(*unaff_x24 + 0xb8);
      if (in_x9 == 0) goto thunk_FUN_01b48178;
      in_w8 = *(uint *)(unaff_x19 + 0x120);
    }
    if (*(uint *)(in_x9 + 0x18) <= in_w8) goto LAB_036b7478;
    puVar10 = (undefined8 *)(in_x9 + (long)(int)in_w8 * 0x38 + 0x48);
    *puVar10 = in_stack_00000018;
    thunk_FUN_01b4f09c(puVar10,in_stack_00000018);
    *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000010;
    thunk_FUN_01b4f09c(unaff_x29);
    *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000018;
    thunk_FUN_01b4f09c(in_stack_00000028,in_stack_00000018);
    *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
  }
  uVar6 = *(uint *)(unaff_x19 + 0x490);
LAB_036b6be0:
  do {
    *(uint *)(unaff_x19 + 0x490) = uVar6 + 1;
    do {
      uVar6 = *(uint *)(unaff_x25 + 0x18);
      unaff_w22 = unaff_w22 + 1;
      if ((int)uVar6 <= (int)unaff_w22) {
FUN_036b6c00:
        if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
          *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
          goto LAB_036b6c0c;
        }
        lVar17 = *unaff_x20;
        if (lVar17 == 0) goto thunk_FUN_01b48178;
        *(int *)(lVar17 + 0x1c) = in_stack_00000020._4_4_;
        lVar11 = *unaff_x24;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar11 = *unaff_x24;
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
        if (lVar11 == 0) goto thunk_FUN_01b48178;
        uVar6 = FUN_02554fc4(lVar11,*(undefined8 *)PTR_DAT_03d9b168);
        *(uint *)(lVar17 + 0x34) = uVar6;
        if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
        plVar18 = (long *)(*unaff_x20 + 0x60);
        lVar17 = *plVar18;
        if (lVar17 == 0) goto thunk_FUN_01b48178;
        uVar16 = (ulong)uVar6;
        if (*(int *)(lVar17 + 0x18) < (int)uVar6) {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_01f52de4(plVar18,uVar16,0,*(undefined8 *)PTR_DAT_03d9cb38);
        }
        if (*(long *)(unaff_x19 + 0x708) == 0) goto thunk_FUN_01b48178;
        plVar18 = (long *)(unaff_x19 + 0x708);
        if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar6) {
          uVar7 = FUN_039155e8(uVar6 + 1,0);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*unaff_x27);
          }
          FUN_01f52b30(plVar18,uVar7,*(undefined8 *)PTR_DAT_03d9cb40);
        }
        if (*(char *)(unaff_x19 + 0x321) != '\0') {
          if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
          plVar19 = (long *)(*unaff_x20 + 0x38);
          lVar17 = *plVar19;
          if (lVar17 == 0) goto thunk_FUN_01b48178;
          iVar8 = *(int *)(unaff_x19 + 0x490);
          if (0x100 < *(int *)(lVar17 + 0x18) - iVar8) {
            iVar9 = 0x100;
            if (0x100 < iVar8 + 1) {
              iVar9 = iVar8 + 1;
            }
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_01f52d44(plVar19,iVar9,1,*(undefined8 *)PTR_DAT_03d9cb30);
            unaff_x24 = (long *)PTR_DAT_03d9c920;
          }
        }
        if ((int)uVar6 < 1) goto LAB_036b73b0;
        lVar17 = 0;
        uVar22 = 0;
        lVar11 = 0x54;
        lVar24 = 0x20;
        goto LAB_036b6da0;
      }
      if (uVar6 <= unaff_w22) goto LAB_036b7478;
      puVar23 = (uint *)(unaff_x25 + (long)(int)unaff_w22 * 0xc + 0x20);
      if (*puVar23 == 0) goto FUN_036b6c00;
      if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
      plVar18 = (long *)(*unaff_x20 + 0x38);
      lVar17 = *plVar18;
      iVar8 = *(int *)(unaff_x19 + 0x490);
      if ((lVar17 == 0) || (*(int *)(lVar17 + 0x18) <= iVar8)) {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_01f52d44(plVar18,iVar8 + 1,1,*(undefined8 *)PTR_DAT_03d9cb30);
        uVar6 = *(uint *)(unaff_x25 + 0x18);
      }
      if (uVar6 <= unaff_w22) goto LAB_036b7478;
      uVar6 = *puVar23;
      if ((uVar6 != 0x3c) || (*(char *)(unaff_x19 + 0x302) == '\0')) {
LAB_036b5ed4:
        in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x100);
        in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x118);
        in_stack_00000030._4_4_ = *(undefined4 *)(unaff_x19 + 0x120);
        if (*(int *)(unaff_x19 + 0x644) != 0) goto LAB_036b5fac;
        uVar5 = *(uint *)(unaff_x19 + 0x25c);
        if ((uVar5 >> 4 & 1) == 0) {
          if ((uVar5 >> 3 & 1) == 0) {
            if ((uVar5 >> 5 & 1) != 0) goto LAB_036b5f00;
          }
          else {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar16 = FUN_02fdd92c(uVar6,0);
            if ((uVar16 & 1) != 0) {
              if (*(int *)(*(long *)
                            Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar6 = FUN_02fdddc0(uVar6,0);
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
          uVar16 = FUN_02fdd9e8(uVar6,0);
          if ((uVar16 & 1) != 0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar6 = FUN_02fddc48(uVar6,0);
LAB_036b5fa8:
            uVar6 = uVar6 & 0xffff;
          }
        }
LAB_036b5fac:
        lVar17 = FUN_036f260c();
        if (lVar17 == 0) {
          iVar8 = FUN_036fb88c();
          if (*(uint *)(unaff_x25 + 0x18) <= unaff_w22) goto LAB_036b7478;
          if (iVar8 == 0) {
            uVar5 = 0x25a1;
          }
          else {
            uVar5 = FUN_036fb88c(0);
          }
          *puVar23 = uVar5;
          uVar20 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
          if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          lVar17 = FUN_036d1ff4(uVar5,uVar20,1,uVar7,uVar2,(long)&stack0x000001a8 + 4,0);
          if (lVar17 == 0) {
            lVar17 = FUN_036fba04();
            if (lVar17 != 0) {
              lVar17 = FUN_036fba04(0);
              if (lVar17 == 0) goto thunk_FUN_01b48178;
              if (0 < *(int *)(lVar17 + 0x18)) {
                uVar21 = *(undefined8 *)(unaff_x19 + 0x100);
                uVar20 = FUN_036fba04(0);
                uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
                uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
                }
                lVar17 = FUN_036d2514(uVar5,uVar21,uVar20,1,uVar7,uVar2,(long)&stack0x000001a8 + 4,0
                                     );
                if (lVar17 != 0) goto LAB_036b605c;
              }
            }
            uVar20 = FUN_036fb8e4(0);
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                );
            }
            uVar16 = FUN_0391f968(uVar20,0,0);
            if ((uVar16 & 1) != 0) {
              uVar20 = FUN_036fb8e4(0);
              uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
              }
              lVar17 = FUN_036d1ff4(uVar5,uVar20,1,uVar7,uVar2,(long)&stack0x000001a8 + 4,0);
              if (lVar17 != 0) goto LAB_036b605c;
            }
            if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036b7478;
            *puVar23 = 0x20;
            uVar20 = *(undefined8 *)(unaff_x19 + 0x100);
            uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
            uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
            if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar5 = 0x20;
            lVar17 = FUN_036d1ff4(0x20,uVar20,1,uVar7,uVar2,(long)&stack0x000001a8 + 4,0);
            if (lVar17 == 0) {
              if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036b7478;
              *puVar23 = 3;
              uVar20 = *(undefined8 *)(unaff_x19 + 0x100);
              uVar7 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar5 = 3;
              lVar17 = FUN_036d1ff4(3,uVar20,1,uVar7,uVar2,(long)&stack0x000001a8 + 4,0);
            }
          }
LAB_036b605c:
          uVar16 = FUN_036fb8c8(0);
          if ((uVar16 & 1) == 0) {
            plVar18 = (long *)FUN_01b47fd0(*(undefined8 *)
                                            Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                           ,4);
            if ((int)uVar6 < 0x10000) {
              in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar6);
              lVar11 = thunk_FUN_01afa70c(*(undefined8 *)
                                           Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                          ,&stack0x000000e0);
              if (plVar18 == (long *)0x0) goto thunk_FUN_01b48178;
              if ((lVar11 != 0) &&
                 (lVar24 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar18 + 0x40)), lVar24 == 0)
                 ) goto LAB_036b747c;
              if ((int)plVar18[3] == 0) goto LAB_036b7478;
              plVar18[4] = lVar11;
              thunk_FUN_01b4f09c(plVar18 + 4,lVar11);
              if (*(long *)(unaff_x19 + 0xf8) == 0) goto thunk_FUN_01b48178;
              lVar11 = FUN_039230bc(*(long *)(unaff_x19 + 0xf8),0);
              if ((lVar11 != 0) &&
                 (lVar24 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar18 + 0x40)), lVar24 == 0)
                 ) goto LAB_036b747c;
              if (*(uint *)(plVar18 + 3) < 2) goto LAB_036b7478;
              plVar18[5] = lVar11;
              thunk_FUN_01b4f09c(plVar18 + 5,lVar11);
              if (lVar17 == 0) goto thunk_FUN_01b48178;
              in_stack_00000170 = *(undefined4 *)(lVar17 + 0x14);
              lVar11 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&stack0x00000170);
              if ((lVar11 != 0) &&
                 (lVar24 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar18 + 0x40)), lVar24 == 0)
                 ) goto LAB_036b747c;
              if (*(uint *)(plVar18 + 3) < 3) goto LAB_036b7478;
              plVar18[6] = lVar11;
              thunk_FUN_01b4f09c(plVar18 + 6,lVar11);
              lVar11 = FUN_039230bc();
              if ((lVar11 != 0) &&
                 (lVar24 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar18 + 0x40)), lVar24 == 0)
                 ) goto LAB_036b747c;
              if (*(uint *)(plVar18 + 3) < 4) goto LAB_036b7478;
              plVar18[7] = lVar11;
              thunk_FUN_01b4f09c(plVar18 + 7,lVar11);
              puVar10 = (undefined8 *)PTR_DAT_03d9cb50;
            }
            else {
              in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar6);
              lVar11 = thunk_FUN_01afa70c(*(undefined8 *)
                                           Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                          ,&stack0x000000e0);
              if (plVar18 == (long *)0x0) goto thunk_FUN_01b48178;
              if ((lVar11 != 0) &&
                 (lVar24 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar18 + 0x40)), lVar24 == 0)
                 ) goto LAB_036b747c;
              if ((int)plVar18[3] == 0) goto LAB_036b7478;
              plVar18[4] = lVar11;
              thunk_FUN_01b4f09c(plVar18 + 4,lVar11);
              if (*(long *)(unaff_x19 + 0xf8) == 0) goto thunk_FUN_01b48178;
              lVar11 = FUN_039230bc(*(long *)(unaff_x19 + 0xf8),0);
              if ((lVar11 != 0) &&
                 (lVar24 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar18 + 0x40)), lVar24 == 0)
                 ) goto LAB_036b747c;
              if (*(uint *)(plVar18 + 3) < 2) goto LAB_036b7478;
              plVar18[5] = lVar11;
              thunk_FUN_01b4f09c(plVar18 + 5,lVar11);
              if (lVar17 == 0) goto thunk_FUN_01b48178;
              in_stack_00000170 = *(undefined4 *)(lVar17 + 0x14);
              lVar11 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&stack0x00000170);
              if ((lVar11 != 0) &&
                 (lVar24 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar18 + 0x40)), lVar24 == 0)
                 ) goto LAB_036b747c;
              if (*(uint *)(plVar18 + 3) < 3) goto LAB_036b7478;
              plVar18[6] = lVar11;
              thunk_FUN_01b4f09c(plVar18 + 6,lVar11);
              lVar11 = FUN_039230bc();
              if ((lVar11 != 0) &&
                 (lVar24 = thunk_FUN_01afa9e0(lVar11,*(undefined8 *)(*plVar18 + 0x40)), lVar24 == 0)
                 ) goto LAB_036b747c;
              if (*(uint *)(plVar18 + 3) < 4) goto LAB_036b7478;
              plVar18[7] = lVar11;
              thunk_FUN_01b4f09c(plVar18 + 7,lVar11);
              puVar10 = (undefined8 *)PTR_DAT_03d9cb48;
            }
            uVar20 = FUN_02ee71a8(*puVar10,plVar18,0);
            if (*(int *)(*(long *)
                          Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_038f3474(uVar20);
            unaff_x25 = in_stack_00000038;
            uVar6 = uVar5;
          }
          else {
            unaff_x25 = in_stack_00000038;
            uVar6 = uVar5;
            if (lVar17 == 0) goto thunk_FUN_01b48178;
          }
        }
        if (*(char *)(lVar17 + 0x10) == '\x01') {
          if (*(long *)(lVar17 + 0x18) == 0) goto thunk_FUN_01b48178;
          iVar8 = FUN_036c1bb4(*(long *)(lVar17 + 0x18),0);
          if (*unaff_x29 == 0) goto thunk_FUN_01b48178;
          iVar9 = FUN_036c1bb4(*unaff_x29,0);
          if (iVar8 == iVar9) goto LAB_036b6570;
          plVar18 = *(long **)(lVar17 + 0x18);
          if (plVar18 == (long *)0x0) {
            plVar18 = (long *)0x0;
            *unaff_x29 = 0;
          }
          else {
            lVar11 = *(long *)StringLiteral_444;
            bVar3 = *(byte *)(lVar11 + 0x130);
            if (*(byte *)(*plVar18 + 0x130) < bVar3) {
              plVar19 = (long *)0x0;
            }
            else {
              plVar19 = plVar18;
              if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar3 * 8 + -8) != lVar11) {
                plVar19 = (long *)0x0;
              }
            }
            *unaff_x29 = (long)plVar19;
            if (*(byte *)(*plVar18 + 0x130) < bVar3) {
              plVar18 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar3 * 8 + -8) != lVar11) {
              plVar18 = (long *)0x0;
            }
          }
          thunk_FUN_01b4f09c(unaff_x29,plVar18);
          unaff_w28 = 1;
        }
        else {
LAB_036b6570:
          unaff_w28 = 0;
        }
        if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
        goto thunk_FUN_01b48178;
        if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
        lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
        plVar18 = (long *)(lVar11 + 0x30);
        *plVar18 = lVar17;
        *(undefined4 *)(lVar11 + 0x2c) = 0;
        thunk_FUN_01b4f09c(plVar18,lVar17);
        if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
        goto thunk_FUN_01b48178;
        uVar5 = *(uint *)(unaff_x19 + 0x490);
        if (*(uint *)(lVar11 + 0x18) <= uVar5) goto LAB_036b7478;
        lVar24 = lVar11 + (long)(int)uVar5 * 0x178;
        *(short *)(lVar24 + 0x20) = (short)uVar6;
        *(undefined1 *)(lVar24 + 0x5c) = uStack00000000000001ac;
        if (*(uint *)(unaff_x25 + 0x18) <= unaff_w22) goto LAB_036b7478;
        lVar11 = lVar11 + (long)(int)uVar5 * 0x178;
        *(undefined8 *)(lVar11 + 0x24) =
             *(undefined8 *)(unaff_x25 + (long)(int)unaff_w22 * 0xc + 0x24);
        *(long *)(lVar11 + 0x38) = *unaff_x29;
        thunk_FUN_01b4f09c();
        unaff_x24 = (long *)PTR_DAT_03d9c920;
        if (*(char *)(lVar17 + 0x10) == '\x02') {
          plVar18 = *(long **)(lVar17 + 0x18);
          if (plVar18 == (long *)0x0) goto thunk_FUN_01b48178;
          bVar3 = *(byte *)(*(long *)PTR_DAT_03d9cb28 + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar3 * 8 + -8) !=
              *(long *)PTR_DAT_03d9cb28)) goto thunk_FUN_01b48178;
          lVar24 = plVar18[4];
          lVar11 = *(long *)PTR_DAT_03d9c920;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar11 = *unaff_x24;
          }
          uVar6 = FUN_036b0d60(lVar24,plVar18,*(long *)(lVar11 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
          *(uint *)(unaff_x19 + 0x120) = uVar6;
          lVar11 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar11 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar11 + 0x18) <= uVar6) goto LAB_036b7478;
          lVar11 = lVar11 + (long)(int)uVar6 * 0x38;
          *(int *)(lVar11 + 0x54) = *(int *)(lVar11 + 0x54) + 1;
          if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
          goto thunk_FUN_01b48178;
          if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
          lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
          *(undefined4 *)(lVar11 + 0x2c) = 1;
          uVar7 = *(undefined4 *)(unaff_x19 + 0x120);
          *(undefined8 *)(lVar11 + 0x40) = plVar18;
          *(undefined4 *)(lVar11 + 0x58) = uVar7;
          thunk_FUN_01b4f09c((undefined8 *)(lVar11 + 0x40),plVar18);
          unaff_x24 = (long *)PTR_DAT_03d9c920;
          if ((*(long *)(unaff_x19 + 0x368) == 0) ||
             (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar11 == 0))
          goto thunk_FUN_01b48178;
          uVar6 = *(uint *)(unaff_x19 + 0x490);
          if (*(uint *)(lVar11 + 0x18) <= uVar6) goto LAB_036b7478;
          *(undefined4 *)(lVar11 + (long)(int)uVar6 * 0x178 + 0x48) = *(undefined4 *)(lVar17 + 0x28)
          ;
          *(undefined4 *)(unaff_x19 + 0x644) = 0;
          *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
          in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
          unaff_x25 = in_stack_00000038;
          unaff_x27 = (long *)PTR_DAT_03d9c8a0;
          goto LAB_036b6be0;
        }
        if (unaff_w28 != 0) {
          if (*unaff_x29 == 0) goto thunk_FUN_01b48178;
          iVar8 = FUN_036c1bb4(*unaff_x29,0);
          if (*(long *)(unaff_x19 + 0xf8) == 0) goto thunk_FUN_01b48178;
          iVar9 = FUN_036c1bb4(*(long *)(unaff_x19 + 0xf8),0);
          if (iVar8 != iVar9) {
            uVar16 = FUN_036fba20(0);
            if ((uVar16 & 1) == 0) {
              if (*unaff_x29 == 0) goto thunk_FUN_01b48178;
              uVar20 = *(undefined8 *)(*unaff_x29 + 0x20);
            }
            else {
              if (*unaff_x29 == 0) goto thunk_FUN_01b48178;
              uVar20 = *in_stack_00000028;
              uVar21 = *(undefined8 *)(*unaff_x29 + 0x20);
              if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar20 = FUN_036f7d2c(uVar20,uVar21,0);
            }
            *in_stack_00000028 = uVar20;
            thunk_FUN_01b4f09c(in_stack_00000028);
            lVar11 = *unaff_x24;
            uVar20 = *in_stack_00000028;
            lVar24 = *unaff_x29;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar11 = *unaff_x24;
            }
            uVar7 = FUN_036b0b30(uVar20,lVar24,*(long *)(lVar11 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
            *(undefined4 *)(unaff_x19 + 0x120) = uVar7;
            unaff_x25 = in_stack_00000038;
          }
        }
        if (*(long *)(lVar17 + 0x20) == 0) goto thunk_FUN_01b48178;
        iVar8 = FUN_0396b18c(*(long *)(lVar17 + 0x20),0);
        if (0 < iVar8) {
          if (*(long *)(lVar17 + 0x20) == 0) goto thunk_FUN_01b48178;
          lVar11 = *unaff_x29;
          uVar20 = *in_stack_00000028;
          uVar7 = FUN_0396b18c(*(long *)(lVar17 + 0x20),0);
          if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb20);
          }
          uVar20 = FUN_036f77c8(lVar11,uVar20,uVar7,0);
          *in_stack_00000028 = uVar20;
          thunk_FUN_01b4f09c(in_stack_00000028,uVar20);
          lVar17 = *unaff_x24;
          uVar20 = *in_stack_00000028;
          lVar11 = *unaff_x29;
          if (*(int *)(lVar17 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar17 = *unaff_x24;
          }
          uVar7 = FUN_036b0b30(uVar20,lVar11,*(long *)(lVar17 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 8));
          unaff_w28 = 1;
          *(undefined4 *)(unaff_x19 + 0x120) = uVar7;
          unaff_x25 = in_stack_00000038;
        }
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar16 = FUN_02fdb080(uVar6,0);
        unaff_x27 = (long *)PTR_DAT_03d9c8a0;
        if ((uVar6 != 0x200b) && ((uVar16 & 1) == 0)) {
          lVar17 = *unaff_x24;
          if (*(int *)(lVar17 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar17);
            lVar17 = *unaff_x24;
          }
          lVar11 = **(long **)(lVar17 + 0xb8);
          if (lVar11 == 0) goto thunk_FUN_01b48178;
          uVar6 = *(uint *)(unaff_x19 + 0x120);
          if (*(uint *)(lVar11 + 0x18) <= uVar6) goto LAB_036b7478;
          if (*(int *)(lVar11 + (long)(int)uVar6 * 0x38 + 0x54) < 0x3fff) {
            if (*(int *)(lVar17 + 0xe0) == 0) {
              thunk_FUN_01ac7298(lVar17);
              lVar11 = **(long **)(*unaff_x24 + 0xb8);
              if (lVar11 == 0) goto thunk_FUN_01b48178;
              uVar6 = *(uint *)(unaff_x19 + 0x120);
            }
          }
          else {
            uVar21 = *in_stack_00000028;
            uVar20 = thunk_FUN_01afaadc(*(undefined8 *)
                                         Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                                       );
            FUN_038ff0a8(uVar20,uVar21,0);
            lVar17 = *unaff_x24;
            lVar11 = *unaff_x29;
            if (*(int *)(lVar17 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar17 = *unaff_x24;
            }
            uVar6 = FUN_036b0b30(uVar20,lVar11,*(long *)(lVar17 + 0xb8),
                                 *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 8));
            *(uint *)(unaff_x19 + 0x120) = uVar6;
            lVar11 = **(long **)(*unaff_x24 + 0xb8);
            if (lVar11 == 0) goto thunk_FUN_01b48178;
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar6) goto LAB_036b7478;
          lVar11 = lVar11 + (long)(int)uVar6 * 0x38;
          *(int *)(lVar11 + 0x54) = *(int *)(lVar11 + 0x54) + 1;
        }
        if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x38), lVar17 == 0))
        goto thunk_FUN_01b48178;
        if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
        *(undefined8 *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) =
             *in_stack_00000028;
        thunk_FUN_01b4f09c();
        if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x38), lVar17 == 0))
        goto thunk_FUN_01b48178;
        if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
        in_w8 = *(uint *)(unaff_x19 + 0x120);
        *(uint *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = in_w8;
        param_1 = *unaff_x24;
        if (*(int *)(param_1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          param_1 = *unaff_x24;
          in_w8 = *(uint *)(unaff_x19 + 0x120);
        }
        in_x9 = **(long **)(param_1 + 0xb8);
        if (in_x9 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(in_x9 + 0x18) <= in_w8) goto LAB_036b7478;
        *(char *)(in_x9 + (long)(int)in_w8 * 0x38 + 0x41) = (char)unaff_w28;
        goto code_r0x036b6b6c;
      }
      uVar7 = *(undefined4 *)(unaff_x19 + 0x120);
      uVar16 = FUN_036e7318();
      uVar5 = uStack00000000000001a8;
      if ((uVar16 & 1) == 0) goto LAB_036b5ed4;
      if (*(uint *)(unaff_x25 + 0x18) <= unaff_w22) goto LAB_036b7478;
      iVar8 = *(int *)(unaff_x25 + (long)(int)unaff_w22 * 0xc + 0x24);
      if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
        *(undefined1 *)(unaff_x19 + 0x26a) = 1;
      }
      puVar4 = PTR_DAT_03d9c920;
      unaff_x24 = (long *)PTR_DAT_03d9c920;
      unaff_w22 = uStack00000000000001a8;
    } while (*(int *)(unaff_x19 + 0x644) != 1);
    lVar17 = *(long *)PTR_DAT_03d9c920;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar17 = *(long *)puVar4;
    }
    lVar17 = **(long **)(lVar17 + 0xb8);
    if (lVar17 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) goto LAB_036b7478;
    lVar17 = lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
    *(int *)(lVar17 + 0x54) = *(int *)(lVar17 + 0x54) + 1;
    if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x38), lVar17 == 0))
    goto thunk_FUN_01b48178;
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
    uVar2 = *(undefined4 *)(unaff_x19 + 0x6a4);
    lVar17 = lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
    *(short *)(lVar17 + 0x20) = (short)uVar2 + -0x2000;
    *(undefined4 *)(lVar17 + 0x48) = uVar2;
    *(long *)(lVar17 + 0x38) = *unaff_x29;
    thunk_FUN_01b4f09c();
    if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x38), lVar17 == 0))
    goto thunk_FUN_01b48178;
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
    *(undefined8 *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
         *(undefined8 *)(unaff_x19 + 0x698);
    thunk_FUN_01b4f09c();
    if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x38), lVar17 == 0))
    goto thunk_FUN_01b48178;
    uVar6 = *(uint *)(unaff_x19 + 0x490);
    if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_036b7478;
    *(undefined4 *)(lVar17 + (long)(int)uVar6 * 0x178 + 0x58) = *(undefined4 *)(unaff_x19 + 0x120);
    if ((*(long *)(unaff_x19 + 0x698) == 0) ||
       (lVar11 = FUN_036fe7c0(*(long *)(unaff_x19 + 0x698),0), lVar11 == 0))
    goto thunk_FUN_01b48178;
    uVar20 = FUN_02b59714(lVar11,*(undefined4 *)(unaff_x19 + 0x6a4),*(undefined8 *)PTR_DAT_03d9c878)
    ;
    if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_036b7478;
    *(undefined8 *)(lVar17 + (long)(int)uVar6 * 0x178 + 0x30) = uVar20;
    thunk_FUN_01b4f09c();
    if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x38), lVar17 == 0))
    goto thunk_FUN_01b48178;
    uVar6 = *(uint *)(unaff_x19 + 0x490);
    if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_036b7478;
    uVar2 = *(undefined4 *)(unaff_x19 + 0x644);
    lVar11 = lVar17 + (long)(int)uVar6 * 0x178;
    *(int *)(lVar11 + 0x24) = iVar8;
    *(undefined4 *)(lVar11 + 0x2c) = uVar2;
    if (*(uint *)(in_stack_00000038 + 0x18) <= uVar5) goto LAB_036b7478;
    *(int *)(lVar17 + (long)(int)uVar6 * 0x178 + 0x28) =
         (*(int *)(in_stack_00000038 + (long)(int)uVar5 * 0xc + 0x24) - iVar8) + 1;
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar7;
    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
    unaff_x24 = (long *)PTR_DAT_03d9c920;
    unaff_x25 = in_stack_00000038;
    unaff_w22 = uVar5;
  } while( true );
LAB_036b6da0:
  do {
    if (uVar22 != 0) {
      lVar14 = *plVar18;
      if (lVar14 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_036b7478;
      uVar20 = *(undefined8 *)(lVar14 + uVar22 * 8 + 0x20);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar12 = FUN_03922f24(uVar20,0,0);
      if ((uVar12 & 1) != 0) {
        lVar14 = *unaff_x24;
        plVar19 = (long *)*plVar18;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar14 = *unaff_x24;
        }
        lVar14 = **(long **)(lVar14 + 0xb8);
        if (lVar14 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_036b7478;
        lVar14 = lVar14 + lVar11;
        in_stack_00000160 = *(undefined8 *)(lVar14 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar14 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar14 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar14 + -0x1c);
        in_stack_00000140 = *(undefined8 *)(lVar14 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar14 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar14 + -0x34);
        lVar14 = FUN_03701aec();
        if (plVar19 == (long *)0x0) goto thunk_FUN_01b48178;
        if ((lVar14 != 0) &&
           (lVar13 = thunk_FUN_01afa9e0(lVar14,*(undefined8 *)(*plVar19 + 0x40)), lVar13 == 0)) {
LAB_036b747c:
          uVar20 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar20,0);
        }
        if (*(uint *)(plVar19 + 3) <= uVar22) goto LAB_036b7478;
        plVar19[uVar22 + 4] = lVar14;
        thunk_FUN_01b4f09c((long)plVar19 + lVar24,lVar14);
        unaff_x24 = (long *)PTR_DAT_03d9c920;
        if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x60), lVar14 == 0))
        goto thunk_FUN_01b48178;
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_036b7478;
        puVar10 = (undefined8 *)(lVar14 + lVar17 + 0x30);
        *puVar10 = 0;
        thunk_FUN_01b4f09c(puVar10,0);
      }
      lVar14 = *plVar18;
      if (lVar14 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_036b7478;
      lVar14 = *(long *)(lVar14 + uVar22 * 8 + 0x20);
      if (lVar14 == 0) goto thunk_FUN_01b48178;
      uVar20 = *(undefined8 *)(lVar14 + 0x38);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar12 = FUN_03922f24(uVar20,0,0);
      if ((uVar12 & 1) == 0) {
        lVar14 = *plVar18;
        if (lVar14 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_036b7478;
        lVar14 = *(long *)(lVar14 + uVar22 * 8 + 0x20);
        if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x38), lVar14 == 0))
        goto thunk_FUN_01b48178;
        iVar8 = FUN_03922ce0(lVar14,0);
        lVar14 = *unaff_x24;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar14);
          lVar14 = *unaff_x24;
        }
        lVar14 = **(long **)(lVar14 + 0xb8);
        if (lVar14 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_036b7478;
        lVar14 = *(long *)(lVar14 + lVar11 + -0x1c);
        if (lVar14 == 0) goto thunk_FUN_01b48178;
        iVar9 = FUN_03922ce0(lVar14,0);
        if (iVar8 != iVar9) goto LAB_036b6f94;
      }
      else {
LAB_036b6f94:
        lVar14 = *plVar18;
        if (lVar14 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_036b7478;
        lVar13 = *unaff_x24;
        lVar14 = *(long *)(lVar14 + uVar22 * 8 + 0x20);
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar13 = *unaff_x24;
        }
        lVar13 = **(long **)(lVar13 + 0xb8);
        if (lVar13 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_036b7478;
        if (lVar14 == 0) goto thunk_FUN_01b48178;
        thunk_FUN_03701608(lVar14,*(undefined8 *)(lVar13 + lVar11 + -0x1c),0);
        lVar14 = *plVar18;
        if (lVar14 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_036b7478;
        lVar13 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar13 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_036b7478;
        lVar14 = *(long *)(lVar14 + uVar22 * 8 + 0x20);
        if (lVar14 == 0) goto thunk_FUN_01b48178;
        *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)(lVar13 + lVar11 + -0x2c);
        thunk_FUN_01b4f09c();
        lVar14 = *plVar18;
        if (lVar14 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_036b7478;
        lVar13 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar13 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_036b7478;
        lVar14 = *(long *)(lVar14 + uVar22 * 8 + 0x20);
        if (lVar14 == 0) goto thunk_FUN_01b48178;
        *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)(lVar13 + lVar11 + -0x24);
        thunk_FUN_01b4f09c();
      }
      lVar14 = *unaff_x24;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar14 = *unaff_x24;
      }
      lVar13 = **(long **)(lVar14 + 0xb8);
      if (lVar13 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_036b7478;
      if (*(char *)(lVar13 + lVar11 + -0x13) != '\0') {
        lVar15 = *plVar18;
        if (lVar15 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_036b7478;
        lVar15 = *(long *)(lVar15 + uVar22 * 8 + 0x20);
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar13 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar13 == 0) goto thunk_FUN_01b48178;
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_036b7478;
        if (lVar15 == 0) goto thunk_FUN_01b48178;
        FUN_03701638(lVar15,*(undefined8 *)(lVar13 + lVar11 + -0x1c),0);
        lVar14 = *plVar18;
        if (lVar14 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_036b7478;
        lVar13 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar13 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_036b7478;
        lVar14 = *(long *)(lVar14 + uVar22 * 8 + 0x20);
        if (lVar14 == 0) goto thunk_FUN_01b48178;
        *(undefined8 *)(lVar14 + 0x48) = *(undefined8 *)(lVar13 + lVar11 + -0xc);
        thunk_FUN_01b4f09c();
      }
    }
    lVar14 = *unaff_x24;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar14 = *unaff_x24;
    }
    lVar14 = **(long **)(lVar14 + 0xb8);
    if (lVar14 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_036b7478;
    if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x60), lVar13 == 0))
    goto thunk_FUN_01b48178;
    if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_036b7478;
    lVar15 = *(long *)(lVar13 + lVar17 + 0x30);
    iVar8 = *(int *)(lVar14 + lVar11);
    if (lVar15 == 0) {
      if (uVar22 == 0) {
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
        FUN_036f884c(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar8 + 1,0);
        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
        if (*(int *)(lVar13 + 0x18) == 0) goto LAB_036b7478;
        memcpy((void *)(lVar13 + lVar17 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar13 + 0x20);
      }
      else {
        lVar14 = *plVar18;
        if (lVar14 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_036b7478;
        lVar14 = *(long *)(lVar14 + uVar22 * 8 + 0x20);
        if (lVar14 == 0) goto thunk_FUN_01b48178;
        uVar20 = FUN_03701980(lVar14,0);
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
        FUN_036f884c(&stack0x000000e0,uVar20,iVar8 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_036b7478;
        __dest = (void *)(lVar13 + lVar17 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      thunk_FUN_01b4f09c(__dest,0);
    }
    else {
      iVar9 = *(int *)(lVar15 + 0x18);
      if (iVar9 < iVar8 * 4) {
LAB_036b7200:
        if (iVar8 < 0x401) {
          iVar8 = FUN_039155e8(iVar8 + 1,0);
        }
        else {
          iVar8 = iVar8 + 0x100;
        }
        if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ +
                    0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036f961c(lVar13 + lVar17 + 0x20,iVar8,0);
      }
      else if ((0 < iVar8) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar9 + 3;
        if (-1 < iVar9) {
          iVar1 = iVar9;
        }
        if (0x100 < (iVar1 >> 2) - iVar8) goto LAB_036b7200;
      }
    }
    unaff_x24 = (long *)PTR_DAT_03d9c920;
    if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x60), lVar14 == 0))
    goto thunk_FUN_01b48178;
    lVar13 = *(long *)PTR_DAT_03d9c920;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar13 = *unaff_x24;
    }
    lVar13 = **(long **)(lVar13 + 0xb8);
    if (lVar13 == 0) goto thunk_FUN_01b48178;
    if ((*(uint *)(lVar13 + 0x18) <= uVar22) || (*(uint *)(lVar14 + 0x18) <= uVar22))
    goto LAB_036b7478;
    *(undefined8 *)(lVar14 + lVar17 + 0x68) = *(undefined8 *)(lVar13 + lVar11 + -0x1c);
    thunk_FUN_01b4f09c();
    uVar22 = uVar22 + 1;
    lVar17 = lVar17 + 0x50;
    lVar11 = lVar11 + 0x38;
    lVar24 = lVar24 + 8;
  } while (uVar6 != uVar22);
LAB_036b73b0:
  puVar4 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
  lVar17 = *plVar18;
  if (lVar17 != 0) {
    lVar11 = (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3) + 0x20;
    lVar24 = (long)(int)uVar6 * 0x50 + 0x20;
    do {
      uVar6 = (uint)uVar16;
      if ((int)*(uint *)(lVar17 + 0x18) <= (int)uVar6) {
LAB_036b6c0c:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar17 + 0x18) <= uVar6) {
LAB_036b7478:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar20 = *(undefined8 *)(lVar17 + lVar11);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar16 = FUN_0391f968(uVar20,0,0);
      if ((uVar16 & 1) == 0) goto LAB_036b6c0c;
      if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x60), lVar17 == 0)) break;
      uVar5 = *(uint *)(lVar17 + 0x18);
      if ((int)uVar6 < (int)uVar5) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          uVar5 = *(uint *)(lVar17 + 0x18);
        }
        if (uVar5 <= uVar6) goto LAB_036b7478;
        FUN_036fa5b4(lVar17 + lVar24,0,1,0);
      }
      lVar17 = *plVar18;
      uVar16 = (ulong)(uVar6 + 1);
      lVar24 = lVar24 + 0x50;
      lVar11 = lVar11 + 8;
    } while (lVar17 != 0);
  }
thunk_FUN_01b48178:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


