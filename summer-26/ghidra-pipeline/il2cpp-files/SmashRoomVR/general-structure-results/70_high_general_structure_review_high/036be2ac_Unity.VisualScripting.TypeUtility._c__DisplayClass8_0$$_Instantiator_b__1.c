/*
FUNCTION_NAME: Unity.VisualScripting.TypeUtility.<>c__DisplayClass8_0$$<Instantiator>b__1
ENTRY_POINT: 036be2ac
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
Unity_VisualScripting_TypeUtility_<>c__DisplayClass8_0__<Instantiator>b__1
          (undefined1 param_1 [16],ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__dest;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  uint uVar9;
  ulong unaff_x21;
  long *unaff_x22;
  undefined8 uVar10;
  long *unaff_x24;
  long *plVar11;
  long unaff_x25;
  ulong uVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_s10;
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
  
  uVar12 = 0;
  lVar13 = 0x54;
  lVar14 = 0x20;
  do {
    fVar18 = (float)param_2;
    if (uVar12 != 0) {
      lVar7 = *unaff_x22;
      if (lVar7 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_036beac8;
      uVar10 = *(undefined8 *)(lVar7 + uVar12 * 8 + 0x20);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_03922f24(uVar10,0,0);
      if ((uVar4 & 1) != 0) {
        lVar7 = *unaff_x24;
        plVar11 = (long *)*unaff_x22;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar7 = *unaff_x24;
        }
        lVar7 = **(long **)(lVar7 + 0xb8);
        if (lVar7 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_036beac8;
        lVar7 = lVar7 + lVar13;
        in_stack_00000160 = *(undefined8 *)(lVar7 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar7 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar7 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar7 + -0x1c);
        uVar10 = *(undefined8 *)(lVar7 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar7 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar7 + -0x34);
        in_stack_00000140 = uVar10;
        lVar7 = FUN_03702d14();
        fVar18 = (float)uVar10;
        if (plVar11 == (long *)0x0) goto LAB_036bea38;
        if ((lVar7 != 0) &&
           (lVar5 = thunk_FUN_01afa9e0(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar5 == 0)) {
          uVar10 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar10,0);
        }
        if (*(uint *)(plVar11 + 3) <= uVar12) goto LAB_036beac8;
        plVar11[uVar12 + 4] = lVar7;
        thunk_FUN_01b4f09c((long)plVar11 + lVar14,lVar7);
        unaff_x24 = (long *)PTR_DAT_03d9c920;
        if ((*unaff_x20 == 0) || (lVar7 = *(long *)(*unaff_x20 + 0x60), lVar7 == 0))
        goto LAB_036bea38;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_036beac8;
        puVar6 = (undefined8 *)(lVar7 + unaff_x25 + 0x30);
        *puVar6 = 0;
        thunk_FUN_01b4f09c(puVar6,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_036bea38;
      fVar15 = (float)FUN_03928134(*(long *)(unaff_x19 + 0x380),0);
      lVar7 = *unaff_x22;
      if (lVar7 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_036beac8;
      lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
      if ((lVar7 == 0) || (fVar17 = fVar18, lVar7 = FUN_039ad440(lVar7,0), lVar7 == 0))
      goto LAB_036bea38;
      fVar16 = (float)FUN_03928134(lVar7,0);
      fVar18 = (fVar18 - fVar17) * (fVar18 - fVar17);
      param_2 = (ulong)(uint)fVar18;
      if (unaff_s10 <= (fVar15 - fVar16) * (fVar15 - fVar16) + fVar18) {
        lVar7 = *unaff_x22;
        if (lVar7 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_036beac8;
        lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_036bea38;
        lVar7 = FUN_039ad440(lVar7,0);
        if ((*(long *)(unaff_x19 + 0x380) == 0) ||
           (FUN_03928134(*(long *)(unaff_x19 + 0x380),0), lVar7 == 0)) goto LAB_036bea38;
        FUN_039281c4(lVar7,0);
      }
      lVar7 = *unaff_x22;
      if (lVar7 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_036beac8;
      lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_036bea38;
      uVar10 = *(undefined8 *)(lVar7 + 0xf0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_03922f24(uVar10,0,0);
      if ((uVar4 & 1) == 0) {
        lVar7 = *unaff_x22;
        if (lVar7 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_036beac8;
        lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
        if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0xf0), lVar7 == 0)) goto LAB_036bea38;
        iVar2 = FUN_03922ce0(lVar7,0);
        lVar7 = *unaff_x24;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar7);
          lVar7 = *unaff_x24;
        }
        lVar7 = **(long **)(lVar7 + 0xb8);
        if (lVar7 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_036beac8;
        lVar7 = *(long *)(lVar7 + lVar13 + -0x1c);
        if (lVar7 == 0) goto LAB_036bea38;
        iVar3 = FUN_03922ce0(lVar7,0);
        if (iVar2 != iVar3) goto LAB_036be568;
      }
      else {
LAB_036be568:
        lVar7 = *unaff_x22;
        if (lVar7 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_036beac8;
        lVar5 = *unaff_x24;
        lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar5 = *unaff_x24;
        }
        lVar5 = **(long **)(lVar5 + 0xb8);
        if (lVar5 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_036beac8;
        if (lVar7 == 0) goto LAB_036bea38;
        thunk_FUN_03702968(lVar7,*(undefined8 *)(lVar5 + lVar13 + -0x1c),0);
        lVar7 = *unaff_x22;
        if (lVar7 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_036beac8;
        lVar5 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar5 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_036beac8;
        lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_036bea38;
        *(undefined8 *)(lVar7 + 0xd8) = *(undefined8 *)(lVar5 + lVar13 + -0x2c);
        thunk_FUN_01b4f09c();
        lVar7 = *unaff_x22;
        if (lVar7 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_036beac8;
        lVar5 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar5 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_036beac8;
        lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_036bea38;
        *(undefined8 *)(lVar7 + 0xe0) = *(undefined8 *)(lVar5 + lVar13 + -0x24);
        thunk_FUN_01b4f09c();
      }
      lVar7 = *unaff_x24;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar7 = *unaff_x24;
      }
      lVar5 = **(long **)(lVar7 + 0xb8);
      if (lVar5 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_036beac8;
      if (*(char *)(lVar5 + lVar13 + -0x13) != '\0') {
        lVar8 = *unaff_x22;
        if (lVar8 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_036beac8;
        lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar5 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar5 == 0) goto LAB_036bea38;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_036beac8;
        if (lVar8 == 0) goto LAB_036bea38;
        FUN_037029c4(lVar8,*(undefined8 *)(lVar5 + lVar13 + -0x1c),0);
        lVar7 = *unaff_x22;
        if (lVar7 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_036beac8;
        lVar5 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar5 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_036beac8;
        lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_036bea38;
        *(undefined8 *)(lVar7 + 0x100) = *(undefined8 *)(lVar5 + lVar13 + -0xc);
        thunk_FUN_01b4f09c(lVar7 + 0x100);
      }
    }
    lVar7 = *unaff_x24;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar7 = *unaff_x24;
    }
    lVar7 = **(long **)(lVar7 + 0xb8);
    if (lVar7 == 0) goto LAB_036bea38;
    if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_036beac8;
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x60), lVar5 == 0)) goto LAB_036bea38;
    if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_036beac8;
    lVar8 = *(long *)(lVar5 + unaff_x25 + 0x30);
    iVar2 = *(int *)(lVar7 + lVar13);
    if (lVar8 == 0) {
      if (uVar12 == 0) {
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
        FUN_036f884c(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar2 + 1,0);
        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
        if (*(int *)(lVar5 + 0x18) == 0) goto LAB_036beac8;
        memcpy((void *)(lVar5 + unaff_x25 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar5 + 0x20);
      }
      else {
        lVar7 = *unaff_x22;
        if (lVar7 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_036beac8;
        lVar7 = *(long *)(lVar7 + uVar12 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_036bea38;
        uVar10 = FUN_03702ba4(lVar7,0);
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
        FUN_036f884c(&stack0x000000e0,uVar10,iVar2 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_036beac8;
        __dest = (void *)(lVar5 + unaff_x25 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      thunk_FUN_01b4f09c(__dest,0);
    }
    else {
      iVar3 = *(int *)(lVar8 + 0x18);
      if (iVar3 < iVar2 * 4) {
LAB_036be7d8:
        if (iVar2 < 0x401) {
          iVar2 = FUN_039155e8(iVar2 + 1,0);
        }
        else {
          iVar2 = iVar2 + 0x100;
        }
        if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ +
                    0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036f961c(lVar5 + unaff_x25 + 0x20,iVar2,0);
      }
      else if ((0 < iVar2) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar3 + 3;
        if (-1 < iVar3) {
          iVar1 = iVar3;
        }
        if (0x100 < (iVar1 >> 2) - iVar2) goto LAB_036be7d8;
      }
    }
    unaff_x24 = (long *)PTR_DAT_03d9c920;
    if ((*unaff_x20 == 0) || (lVar7 = *(long *)(*unaff_x20 + 0x60), lVar7 == 0)) goto LAB_036bea38;
    lVar5 = *(long *)PTR_DAT_03d9c920;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar5 = *unaff_x24;
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
    if (lVar5 == 0) goto LAB_036bea38;
    if ((*(uint *)(lVar5 + 0x18) <= uVar12) || (*(uint *)(lVar7 + 0x18) <= uVar12))
    goto LAB_036beac8;
    *(undefined8 *)(lVar7 + unaff_x25 + 0x68) = *(undefined8 *)(lVar5 + lVar13 + -0x1c);
    thunk_FUN_01b4f09c();
    uVar12 = uVar12 + 1;
    unaff_x25 = unaff_x25 + 0x50;
    lVar13 = lVar13 + 0x38;
    lVar14 = lVar14 + 8;
  } while ((unaff_x21 & 0xffffffff) != uVar12);
  lVar13 = *unaff_x22;
  if (lVar13 != 0) {
    lVar14 = (-(unaff_x21 >> 0x1f & 1) & 0xfffffff800000000 | (unaff_x21 & 0xffffffff) << 3) + 0x20;
    do {
      uVar9 = (uint)unaff_x21;
      if ((int)*(uint *)(lVar13 + 0x18) <= (int)uVar9) {
LAB_036be118:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar9) {
LAB_036beac8:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar10 = *(undefined8 *)(lVar13 + lVar14);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar12 = FUN_0391f968(uVar10,0,0);
      if ((uVar12 & 1) == 0) goto LAB_036be118;
      if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x60), lVar13 == 0)) break;
      if ((int)uVar9 < *(int *)(lVar13 + 0x18)) {
        lVar13 = *unaff_x22;
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_036beac8;
        if ((*(long *)(lVar13 + lVar14) == 0) ||
           (lVar13 = FUN_039add2c(*(long *)(lVar13 + lVar14),0), lVar13 == 0)) break;
        FUN_03af8c9c(lVar13,0,0);
      }
      lVar13 = *unaff_x22;
      unaff_x21 = (ulong)(uVar9 + 1);
      lVar14 = lVar14 + 8;
    } while (lVar13 != 0);
  }
LAB_036bea38:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


