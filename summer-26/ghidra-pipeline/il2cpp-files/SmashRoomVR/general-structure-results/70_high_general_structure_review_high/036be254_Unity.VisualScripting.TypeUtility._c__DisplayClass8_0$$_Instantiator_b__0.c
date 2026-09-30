/*
FUNCTION_NAME: Unity.VisualScripting.TypeUtility.<>c__DisplayClass8_0$$<Instantiator>b__0
ENTRY_POINT: 036be254
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
Unity_VisualScripting_TypeUtility_<>c__DisplayClass8_0__<Instantiator>b__0
          (undefined1 param_1 [16],ulong param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  void *__dest;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  uint uVar10;
  ulong unaff_x21;
  long *unaff_x22;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long *unaff_x27;
  long lVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
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
  
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_01f52d44();
  fVar2 = DAT_00b55084;
  if (0 < (int)unaff_x21) {
    lVar14 = 0;
    uVar15 = 0;
    lVar16 = 0x54;
    lVar17 = 0x20;
    plVar13 = (long *)PTR_DAT_03d9c920;
    do {
      fVar21 = (float)param_2;
      if (uVar15 != 0) {
        lVar8 = *unaff_x22;
        if (lVar8 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_036beac8;
        uVar11 = *(undefined8 *)(lVar8 + uVar15 * 8 + 0x20);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_03922f24(uVar11,0,0);
        if ((uVar5 & 1) != 0) {
          lVar8 = *plVar13;
          plVar12 = (long *)*unaff_x22;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar8 = *plVar13;
          }
          lVar8 = **(long **)(lVar8 + 0xb8);
          if (lVar8 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_036beac8;
          lVar8 = lVar8 + lVar16;
          in_stack_00000160 = *(undefined8 *)(lVar8 + -4);
          in_stack_00000158 = *(undefined8 *)(lVar8 + -0xc);
          in_stack_00000150 = *(undefined8 *)(lVar8 + -0x14);
          in_stack_00000148 = *(undefined8 *)(lVar8 + -0x1c);
          uVar11 = *(undefined8 *)(lVar8 + -0x24);
          in_stack_00000138 = *(undefined8 *)(lVar8 + -0x2c);
          in_stack_00000130 = *(undefined8 *)(lVar8 + -0x34);
          in_stack_00000140 = uVar11;
          lVar8 = FUN_03702d14();
          fVar21 = (float)uVar11;
          if (plVar12 == (long *)0x0) goto LAB_036bea38;
          if ((lVar8 != 0) &&
             (lVar6 = thunk_FUN_01afa9e0(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar6 == 0)) {
            uVar11 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
            FUN_01b48050(uVar11,0);
          }
          if (*(uint *)(plVar12 + 3) <= uVar15) goto LAB_036beac8;
          plVar12[uVar15 + 4] = lVar8;
          thunk_FUN_01b4f09c((long)plVar12 + lVar17,lVar8);
          plVar13 = (long *)PTR_DAT_03d9c920;
          if ((*unaff_x20 == 0) || (lVar8 = *(long *)(*unaff_x20 + 0x60), lVar8 == 0))
          goto LAB_036bea38;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_036beac8;
          puVar7 = (undefined8 *)(lVar8 + lVar14 + 0x30);
          *puVar7 = 0;
          thunk_FUN_01b4f09c(puVar7,0);
        }
        if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_036bea38;
        fVar18 = (float)FUN_03928134(*(long *)(unaff_x19 + 0x380),0);
        lVar8 = *unaff_x22;
        if (lVar8 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_036beac8;
        lVar8 = *(long *)(lVar8 + uVar15 * 8 + 0x20);
        if ((lVar8 == 0) || (fVar20 = fVar21, lVar8 = FUN_039ad440(lVar8,0), lVar8 == 0))
        goto LAB_036bea38;
        fVar19 = (float)FUN_03928134(lVar8,0);
        fVar21 = (fVar21 - fVar20) * (fVar21 - fVar20);
        param_2 = (ulong)(uint)fVar21;
        if (fVar2 <= (fVar18 - fVar19) * (fVar18 - fVar19) + fVar21) {
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_036beac8;
          lVar8 = *(long *)(lVar8 + uVar15 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_036bea38;
          lVar8 = FUN_039ad440(lVar8,0);
          if ((*(long *)(unaff_x19 + 0x380) == 0) ||
             (FUN_03928134(*(long *)(unaff_x19 + 0x380),0), lVar8 == 0)) goto LAB_036bea38;
          FUN_039281c4(lVar8,0);
        }
        lVar8 = *unaff_x22;
        if (lVar8 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_036beac8;
        lVar8 = *(long *)(lVar8 + uVar15 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_036bea38;
        uVar11 = *(undefined8 *)(lVar8 + 0xf0);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_03922f24(uVar11,0,0);
        if ((uVar5 & 1) == 0) {
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_036beac8;
          lVar8 = *(long *)(lVar8 + uVar15 * 8 + 0x20);
          if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0xf0), lVar8 == 0)) goto LAB_036bea38;
          iVar3 = FUN_03922ce0(lVar8,0);
          lVar8 = *plVar13;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar8);
            lVar8 = *plVar13;
          }
          lVar8 = **(long **)(lVar8 + 0xb8);
          if (lVar8 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_036beac8;
          lVar8 = *(long *)(lVar8 + lVar16 + -0x1c);
          if (lVar8 == 0) goto LAB_036bea38;
          iVar4 = FUN_03922ce0(lVar8,0);
          if (iVar3 != iVar4) goto LAB_036be568;
        }
        else {
LAB_036be568:
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_036beac8;
          lVar6 = *plVar13;
          lVar8 = *(long *)(lVar8 + uVar15 * 8 + 0x20);
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar6 = *plVar13;
          }
          lVar6 = **(long **)(lVar6 + 0xb8);
          if (lVar6 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_036beac8;
          if (lVar8 == 0) goto LAB_036bea38;
          thunk_FUN_03702968(lVar8,*(undefined8 *)(lVar6 + lVar16 + -0x1c),0);
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_036beac8;
          lVar6 = **(long **)(*plVar13 + 0xb8);
          if (lVar6 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_036beac8;
          lVar8 = *(long *)(lVar8 + uVar15 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_036bea38;
          *(undefined8 *)(lVar8 + 0xd8) = *(undefined8 *)(lVar6 + lVar16 + -0x2c);
          thunk_FUN_01b4f09c();
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_036beac8;
          lVar6 = **(long **)(*plVar13 + 0xb8);
          if (lVar6 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_036beac8;
          lVar8 = *(long *)(lVar8 + uVar15 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_036bea38;
          *(undefined8 *)(lVar8 + 0xe0) = *(undefined8 *)(lVar6 + lVar16 + -0x24);
          thunk_FUN_01b4f09c();
        }
        lVar8 = *plVar13;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar8 = *plVar13;
        }
        lVar6 = **(long **)(lVar8 + 0xb8);
        if (lVar6 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_036beac8;
        if (*(char *)(lVar6 + lVar16 + -0x13) != '\0') {
          lVar9 = *unaff_x22;
          if (lVar9 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_036beac8;
          lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar6 = **(long **)(*plVar13 + 0xb8);
            if (lVar6 == 0) goto LAB_036bea38;
          }
          if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_036beac8;
          if (lVar9 == 0) goto LAB_036bea38;
          FUN_037029c4(lVar9,*(undefined8 *)(lVar6 + lVar16 + -0x1c),0);
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_036beac8;
          lVar6 = **(long **)(*plVar13 + 0xb8);
          if (lVar6 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_036beac8;
          lVar8 = *(long *)(lVar8 + uVar15 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_036bea38;
          *(undefined8 *)(lVar8 + 0x100) = *(undefined8 *)(lVar6 + lVar16 + -0xc);
          thunk_FUN_01b4f09c(lVar8 + 0x100);
        }
      }
      lVar8 = *plVar13;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar8 = *plVar13;
      }
      lVar8 = **(long **)(lVar8 + 0xb8);
      if (lVar8 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_036beac8;
      if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x60), lVar6 == 0))
      goto LAB_036bea38;
      if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_036beac8;
      lVar9 = *(long *)(lVar6 + lVar14 + 0x30);
      iVar3 = *(int *)(lVar8 + lVar16);
      if (lVar9 == 0) {
        if (uVar15 == 0) {
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
          FUN_036f884c(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar3 + 1,0);
          memcpy(&stack0x00000090,&stack0x000000e0,0x50);
          if (*(int *)(lVar6 + 0x18) == 0) goto LAB_036beac8;
          memcpy((void *)(lVar6 + lVar14 + 0x20),&stack0x00000090,0x50);
          __dest = (void *)(lVar6 + 0x20);
        }
        else {
          lVar8 = *unaff_x22;
          if (lVar8 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_036beac8;
          lVar8 = *(long *)(lVar8 + uVar15 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_036bea38;
          uVar11 = FUN_03702ba4(lVar8,0);
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
          FUN_036f884c(&stack0x000000e0,uVar11,iVar3 + 1,0);
          memcpy(&stack0x00000040,&stack0x000000e0,0x50);
          if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_036beac8;
          __dest = (void *)(lVar6 + lVar14 + 0x20);
          memcpy(__dest,&stack0x00000040,0x50);
        }
        thunk_FUN_01b4f09c(__dest,0);
      }
      else {
        iVar4 = *(int *)(lVar9 + 0x18);
        if (iVar4 < iVar3 * 4) {
LAB_036be7d8:
          if (iVar3 < 0x401) {
            iVar3 = FUN_039155e8(iVar3 + 1,0);
          }
          else {
            iVar3 = iVar3 + 0x100;
          }
          if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_036f961c(lVar6 + lVar14 + 0x20,iVar3,0);
        }
        else if ((0 < iVar3) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
          iVar1 = iVar4 + 3;
          if (-1 < iVar4) {
            iVar1 = iVar4;
          }
          if (0x100 < (iVar1 >> 2) - iVar3) goto LAB_036be7d8;
        }
      }
      plVar13 = (long *)PTR_DAT_03d9c920;
      if ((*unaff_x20 == 0) || (lVar8 = *(long *)(*unaff_x20 + 0x60), lVar8 == 0))
      goto LAB_036bea38;
      lVar6 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *plVar13;
      }
      lVar6 = **(long **)(lVar6 + 0xb8);
      if (lVar6 == 0) goto LAB_036bea38;
      if ((*(uint *)(lVar6 + 0x18) <= uVar15) || (*(uint *)(lVar8 + 0x18) <= uVar15))
      goto LAB_036beac8;
      *(undefined8 *)(lVar8 + lVar14 + 0x68) = *(undefined8 *)(lVar6 + lVar16 + -0x1c);
      thunk_FUN_01b4f09c();
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 0x50;
      lVar16 = lVar16 + 0x38;
      lVar17 = lVar17 + 8;
    } while ((unaff_x21 & 0xffffffff) != uVar15);
  }
  lVar14 = *unaff_x22;
  if (lVar14 != 0) {
    lVar16 = (-(unaff_x21 >> 0x1f & 1) & 0xfffffff800000000 | (unaff_x21 & 0xffffffff) << 3) + 0x20;
    do {
      uVar10 = (uint)unaff_x21;
      if ((int)*(uint *)(lVar14 + 0x18) <= (int)uVar10) {
LAB_036be118:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar10) {
LAB_036beac8:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar11 = *(undefined8 *)(lVar14 + lVar16);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar15 = FUN_0391f968(uVar11,0,0);
      if ((uVar15 & 1) == 0) goto LAB_036be118;
      if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x60), lVar14 == 0)) break;
      if ((int)uVar10 < *(int *)(lVar14 + 0x18)) {
        lVar14 = *unaff_x22;
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_036beac8;
        if ((*(long *)(lVar14 + lVar16) == 0) ||
           (lVar14 = FUN_039add2c(*(long *)(lVar14 + lVar16),0), lVar14 == 0)) break;
        FUN_03af8c9c(lVar14,0,0);
      }
      lVar14 = *unaff_x22;
      unaff_x21 = (ulong)(uVar10 + 1);
      lVar16 = lVar16 + 8;
    } while (lVar14 != 0);
  }
LAB_036bea38:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


