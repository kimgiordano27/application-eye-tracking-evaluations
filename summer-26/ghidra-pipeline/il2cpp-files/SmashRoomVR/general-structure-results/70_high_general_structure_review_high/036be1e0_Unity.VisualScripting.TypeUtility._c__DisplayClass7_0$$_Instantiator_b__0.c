/*
FUNCTION_NAME: Unity.VisualScripting.TypeUtility.<>c__DisplayClass7_0$$<Instantiator>b__0
ENTRY_POINT: 036be1e0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


undefined4
Unity_VisualScripting_TypeUtility_<>c__DisplayClass7_0__<Instantiator>b__0
          (undefined1 param_1 [16],ulong param_2)

{
  long *plVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  void *__dest;
  int in_w8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long unaff_x19;
  long *unaff_x20;
  uint uVar13;
  ulong unaff_x21;
  long *plVar14;
  undefined8 uVar15;
  long *unaff_x24;
  ulong uVar16;
  long *unaff_x27;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
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
  
  plVar1 = (long *)(unaff_x19 + 0x708);
  iVar4 = (int)unaff_x21;
  if (in_w8 < iVar4) {
    uVar3 = FUN_039155e8(iVar4 + 1,0);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*unaff_x27);
    }
    FUN_01f52b30(plVar1,uVar3,*(undefined8 *)PTR_DAT_03d9cc70);
  }
  if (*(char *)(unaff_x19 + 0x321) != '\0') {
    if (*unaff_x20 == 0) goto LAB_036bea38;
    plVar14 = (long *)(*unaff_x20 + 0x38);
    lVar10 = *plVar14;
    if (lVar10 == 0) goto LAB_036bea38;
    iVar5 = *(int *)(unaff_x19 + 0x490);
    if (0x100 < *(int *)(lVar10 + 0x18) - iVar5) {
      iVar12 = 0x100;
      if (0x100 < iVar5 + 1) {
        iVar12 = iVar5 + 1;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52d44(plVar14,iVar12,1,*(undefined8 *)PTR_DAT_03d9cb30);
      unaff_x24 = (long *)PTR_DAT_03d9c920;
    }
  }
  fVar2 = DAT_00b55084;
  if (0 < iVar4) {
    lVar10 = 0;
    uVar16 = 0;
    lVar17 = 0x54;
    lVar18 = 0x20;
    do {
      fVar22 = (float)param_2;
      if (uVar16 != 0) {
        lVar9 = *plVar1;
        if (lVar9 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036beac8;
        uVar15 = *(undefined8 *)(lVar9 + uVar16 * 8 + 0x20);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar6 = FUN_03922f24(uVar15,0,0);
        if ((uVar6 & 1) != 0) {
          lVar9 = *unaff_x24;
          plVar14 = (long *)*plVar1;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar9 = *unaff_x24;
          }
          lVar9 = **(long **)(lVar9 + 0xb8);
          if (lVar9 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036beac8;
          lVar9 = lVar9 + lVar17;
          in_stack_00000160 = *(undefined8 *)(lVar9 + -4);
          in_stack_00000158 = *(undefined8 *)(lVar9 + -0xc);
          in_stack_00000150 = *(undefined8 *)(lVar9 + -0x14);
          in_stack_00000148 = *(undefined8 *)(lVar9 + -0x1c);
          uVar15 = *(undefined8 *)(lVar9 + -0x24);
          in_stack_00000138 = *(undefined8 *)(lVar9 + -0x2c);
          in_stack_00000130 = *(undefined8 *)(lVar9 + -0x34);
          in_stack_00000140 = uVar15;
          lVar9 = FUN_03702d14();
          fVar22 = (float)uVar15;
          if (plVar14 == (long *)0x0) goto LAB_036bea38;
          if ((lVar9 != 0) &&
             (lVar7 = thunk_FUN_01afa9e0(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0)) {
            uVar15 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
            FUN_01b48050(uVar15,0);
          }
          if (*(uint *)(plVar14 + 3) <= uVar16) goto LAB_036beac8;
          plVar14[uVar16 + 4] = lVar9;
          thunk_FUN_01b4f09c((long)plVar14 + lVar18,lVar9);
          unaff_x24 = (long *)PTR_DAT_03d9c920;
          if ((*unaff_x20 == 0) || (lVar9 = *(long *)(*unaff_x20 + 0x60), lVar9 == 0))
          goto LAB_036bea38;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036beac8;
          puVar8 = (undefined8 *)(lVar9 + lVar10 + 0x30);
          *puVar8 = 0;
          thunk_FUN_01b4f09c(puVar8,0);
        }
        if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_036bea38;
        fVar19 = (float)FUN_03928134(*(long *)(unaff_x19 + 0x380),0);
        lVar9 = *plVar1;
        if (lVar9 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036beac8;
        lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
        if ((lVar9 == 0) || (fVar21 = fVar22, lVar9 = FUN_039ad440(lVar9,0), lVar9 == 0))
        goto LAB_036bea38;
        fVar20 = (float)FUN_03928134(lVar9,0);
        fVar22 = (fVar22 - fVar21) * (fVar22 - fVar21);
        param_2 = (ulong)(uint)fVar22;
        if (fVar2 <= (fVar19 - fVar20) * (fVar19 - fVar20) + fVar22) {
          lVar9 = *plVar1;
          if (lVar9 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036beac8;
          lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_036bea38;
          lVar9 = FUN_039ad440(lVar9,0);
          if ((*(long *)(unaff_x19 + 0x380) == 0) ||
             (FUN_03928134(*(long *)(unaff_x19 + 0x380),0), lVar9 == 0)) goto LAB_036bea38;
          FUN_039281c4(lVar9,0);
        }
        lVar9 = *plVar1;
        if (lVar9 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036beac8;
        lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_036bea38;
        uVar15 = *(undefined8 *)(lVar9 + 0xf0);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar6 = FUN_03922f24(uVar15,0,0);
        if ((uVar6 & 1) == 0) {
          lVar9 = *plVar1;
          if (lVar9 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036beac8;
          lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
          if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0xf0), lVar9 == 0)) goto LAB_036bea38;
          iVar4 = FUN_03922ce0(lVar9,0);
          lVar9 = *unaff_x24;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar9);
            lVar9 = *unaff_x24;
          }
          lVar9 = **(long **)(lVar9 + 0xb8);
          if (lVar9 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036beac8;
          lVar9 = *(long *)(lVar9 + lVar17 + -0x1c);
          if (lVar9 == 0) goto LAB_036bea38;
          iVar5 = FUN_03922ce0(lVar9,0);
          if (iVar4 != iVar5) goto LAB_036be568;
        }
        else {
LAB_036be568:
          lVar9 = *plVar1;
          if (lVar9 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036beac8;
          lVar7 = *unaff_x24;
          lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar7 = *unaff_x24;
          }
          lVar7 = **(long **)(lVar7 + 0xb8);
          if (lVar7 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_036beac8;
          if (lVar9 == 0) goto LAB_036bea38;
          thunk_FUN_03702968(lVar9,*(undefined8 *)(lVar7 + lVar17 + -0x1c),0);
          lVar9 = *plVar1;
          if (lVar9 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036beac8;
          lVar7 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar7 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_036beac8;
          lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_036bea38;
          *(undefined8 *)(lVar9 + 0xd8) = *(undefined8 *)(lVar7 + lVar17 + -0x2c);
          thunk_FUN_01b4f09c();
          lVar9 = *plVar1;
          if (lVar9 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036beac8;
          lVar7 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar7 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_036beac8;
          lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_036bea38;
          *(undefined8 *)(lVar9 + 0xe0) = *(undefined8 *)(lVar7 + lVar17 + -0x24);
          thunk_FUN_01b4f09c();
        }
        lVar9 = *unaff_x24;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar9 = *unaff_x24;
        }
        lVar7 = **(long **)(lVar9 + 0xb8);
        if (lVar7 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_036beac8;
        if (*(char *)(lVar7 + lVar17 + -0x13) != '\0') {
          lVar11 = *plVar1;
          if (lVar11 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_036beac8;
          lVar11 = *(long *)(lVar11 + uVar16 * 8 + 0x20);
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar7 = **(long **)(*unaff_x24 + 0xb8);
            if (lVar7 == 0) goto LAB_036bea38;
          }
          if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_036beac8;
          if (lVar11 == 0) goto LAB_036bea38;
          FUN_037029c4(lVar11,*(undefined8 *)(lVar7 + lVar17 + -0x1c),0);
          lVar9 = *plVar1;
          if (lVar9 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036beac8;
          lVar7 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar7 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_036beac8;
          lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_036bea38;
          *(undefined8 *)(lVar9 + 0x100) = *(undefined8 *)(lVar7 + lVar17 + -0xc);
          thunk_FUN_01b4f09c(lVar9 + 0x100);
        }
      }
      lVar9 = *unaff_x24;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar9 = *unaff_x24;
      }
      lVar9 = **(long **)(lVar9 + 0xb8);
      if (lVar9 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036beac8;
      if ((*unaff_x20 == 0) || (lVar7 = *(long *)(*unaff_x20 + 0x60), lVar7 == 0))
      goto LAB_036bea38;
      if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_036beac8;
      lVar11 = *(long *)(lVar7 + lVar10 + 0x30);
      iVar4 = *(int *)(lVar9 + lVar17);
      if (lVar11 == 0) {
        if (uVar16 == 0) {
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
          FUN_036f884c(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar4 + 1,0);
          memcpy(&stack0x00000090,&stack0x000000e0,0x50);
          if (*(int *)(lVar7 + 0x18) == 0) goto LAB_036beac8;
          memcpy((void *)(lVar7 + lVar10 + 0x20),&stack0x00000090,0x50);
          __dest = (void *)(lVar7 + 0x20);
        }
        else {
          lVar9 = *plVar1;
          if (lVar9 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036beac8;
          lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_036bea38;
          uVar15 = FUN_03702ba4(lVar9,0);
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
          FUN_036f884c(&stack0x000000e0,uVar15,iVar4 + 1,0);
          memcpy(&stack0x00000040,&stack0x000000e0,0x50);
          if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_036beac8;
          __dest = (void *)(lVar7 + lVar10 + 0x20);
          memcpy(__dest,&stack0x00000040,0x50);
        }
        thunk_FUN_01b4f09c(__dest,0);
      }
      else {
        iVar5 = *(int *)(lVar11 + 0x18);
        if (iVar5 < iVar4 * 4) {
LAB_036be7d8:
          if (iVar4 < 0x401) {
            iVar4 = FUN_039155e8(iVar4 + 1,0);
          }
          else {
            iVar4 = iVar4 + 0x100;
          }
          if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_036f961c(lVar7 + lVar10 + 0x20,iVar4,0);
        }
        else if ((0 < iVar4) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
          iVar12 = iVar5 + 3;
          if (-1 < iVar5) {
            iVar12 = iVar5;
          }
          if (0x100 < (iVar12 >> 2) - iVar4) goto LAB_036be7d8;
        }
      }
      unaff_x24 = (long *)PTR_DAT_03d9c920;
      if ((*unaff_x20 == 0) || (lVar9 = *(long *)(*unaff_x20 + 0x60), lVar9 == 0))
      goto LAB_036bea38;
      lVar7 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar7 = *unaff_x24;
      }
      lVar7 = **(long **)(lVar7 + 0xb8);
      if (lVar7 == 0) goto LAB_036bea38;
      if ((*(uint *)(lVar7 + 0x18) <= uVar16) || (*(uint *)(lVar9 + 0x18) <= uVar16))
      goto LAB_036beac8;
      *(undefined8 *)(lVar9 + lVar10 + 0x68) = *(undefined8 *)(lVar7 + lVar17 + -0x1c);
      thunk_FUN_01b4f09c();
      uVar16 = uVar16 + 1;
      lVar10 = lVar10 + 0x50;
      lVar17 = lVar17 + 0x38;
      lVar18 = lVar18 + 8;
    } while ((unaff_x21 & 0xffffffff) != uVar16);
  }
  lVar10 = *plVar1;
  if (lVar10 != 0) {
    lVar17 = (-(unaff_x21 >> 0x1f & 1) & 0xfffffff800000000 | (unaff_x21 & 0xffffffff) << 3) + 0x20;
    do {
      uVar13 = (uint)unaff_x21;
      if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar13) {
LAB_036be118:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar13) {
LAB_036beac8:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar15 = *(undefined8 *)(lVar10 + lVar17);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar16 = FUN_0391f968(uVar15,0,0);
      if ((uVar16 & 1) == 0) goto LAB_036be118;
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x60), lVar10 == 0)) break;
      if ((int)uVar13 < *(int *)(lVar10 + 0x18)) {
        lVar10 = *plVar1;
        if (lVar10 == 0) break;
        if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_036beac8;
        if ((*(long *)(lVar10 + lVar17) == 0) ||
           (lVar10 = FUN_039add2c(*(long *)(lVar10 + lVar17),0), lVar10 == 0)) break;
        FUN_03af8c9c(lVar10,0,0);
      }
      lVar10 = *plVar1;
      unaff_x21 = (ulong)(uVar13 + 1);
      lVar17 = lVar17 + 8;
    } while (lVar10 != 0);
  }
LAB_036bea38:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


