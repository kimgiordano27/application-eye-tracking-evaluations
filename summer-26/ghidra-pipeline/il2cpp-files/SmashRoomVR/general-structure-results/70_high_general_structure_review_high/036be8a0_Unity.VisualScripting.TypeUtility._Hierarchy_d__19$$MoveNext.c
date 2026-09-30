/*
FUNCTION_NAME: Unity.VisualScripting.TypeUtility.<Hierarchy>d__19$$MoveNext
ENTRY_POINT: 036be8a0
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
Unity_VisualScripting_TypeUtility_<Hierarchy>d__19__MoveNext
          (undefined1 param_1 [16],ulong param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  void *__dest;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  uint uVar9;
  ulong unaff_x21;
  long *unaff_x22;
  long lVar10;
  undefined8 uVar11;
  int unaff_w24;
  long *plVar12;
  long *plVar13;
  long unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
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
  
  do {
    FUN_036f961c(param_3,unaff_w24,0);
    uVar7 = unaff_x26;
LAB_036be90c:
    do {
      do {
        plVar13 = (long *)PTR_DAT_03d9c920;
        if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x60), lVar10 == 0))
        goto LAB_036bea38;
        lVar6 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar6 = *plVar13;
        }
        lVar6 = **(long **)(lVar6 + 0xb8);
        if (lVar6 == 0) goto LAB_036bea38;
        if ((*(uint *)(lVar6 + 0x18) <= uVar7) || (*(uint *)(lVar10 + 0x18) <= uVar7))
        goto LAB_036beac8;
        *(undefined8 *)(lVar10 + unaff_x25 + 0x68) = *(undefined8 *)(lVar6 + unaff_x28 + -0x1c);
        thunk_FUN_01b4f09c();
        fVar17 = (float)param_2;
        unaff_x26 = uVar7 + 1;
        unaff_x25 = unaff_x25 + 0x50;
        unaff_x28 = unaff_x28 + 0x38;
        unaff_x29 = unaff_x29 + 8;
        if (unaff_x27 == unaff_x26) {
          lVar10 = *unaff_x22;
          if (lVar10 == 0) goto LAB_036bea38;
          lVar6 = (-(unaff_x21 >> 0x1f & 1) & 0xfffffff800000000 | (unaff_x21 & 0xffffffff) << 3) +
                  0x20;
          goto LAB_036be998;
        }
        if (unaff_x26 != 0) {
          lVar10 = *unaff_x22;
          if (lVar10 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_036beac8;
          uVar11 = *(undefined8 *)(lVar10 + unaff_x26 * 8 + 0x20);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar4 = FUN_03922f24(uVar11,0,0);
          if ((uVar4 & 1) != 0) {
            lVar10 = *plVar13;
            plVar12 = (long *)*unaff_x22;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar10 = *plVar13;
            }
            lVar10 = **(long **)(lVar10 + 0xb8);
            if (lVar10 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar10 = lVar10 + unaff_x28;
            in_stack_00000160 = *(undefined8 *)(lVar10 + -4);
            in_stack_00000158 = *(undefined8 *)(lVar10 + -0xc);
            in_stack_00000150 = *(undefined8 *)(lVar10 + -0x14);
            in_stack_00000148 = *(undefined8 *)(lVar10 + -0x1c);
            uVar11 = *(undefined8 *)(lVar10 + -0x24);
            in_stack_00000138 = *(undefined8 *)(lVar10 + -0x2c);
            in_stack_00000130 = *(undefined8 *)(lVar10 + -0x34);
            in_stack_00000140 = uVar11;
            lVar10 = FUN_03702d14();
            fVar17 = (float)uVar11;
            if (plVar12 == (long *)0x0) goto LAB_036bea38;
            if ((lVar10 != 0) &&
               (lVar6 = thunk_FUN_01afa9e0(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar6 == 0)) {
              uVar11 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
              FUN_01b48050(uVar11,0);
            }
            if (*(uint *)(plVar12 + 3) <= unaff_x26) goto LAB_036beac8;
            plVar12[uVar7 + 5] = lVar10;
            thunk_FUN_01b4f09c((long)plVar12 + unaff_x29,lVar10);
            plVar13 = (long *)PTR_DAT_03d9c920;
            if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x60), lVar10 == 0))
            goto LAB_036bea38;
            if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_036beac8;
            puVar5 = (undefined8 *)(lVar10 + unaff_x25 + 0x30);
            *puVar5 = 0;
            thunk_FUN_01b4f09c(puVar5,0);
          }
          if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_036bea38;
          fVar14 = (float)FUN_03928134(*(long *)(unaff_x19 + 0x380),0);
          lVar10 = *unaff_x22;
          if (lVar10 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_036beac8;
          lVar10 = *(long *)(lVar10 + unaff_x26 * 8 + 0x20);
          if ((lVar10 == 0) || (fVar16 = fVar17, lVar10 = FUN_039ad440(lVar10,0), lVar10 == 0))
          goto LAB_036bea38;
          fVar15 = (float)FUN_03928134(lVar10,0);
          fVar17 = (fVar17 - fVar16) * (fVar17 - fVar16);
          param_2 = (ulong)(uint)fVar17;
          if (unaff_s10 <= (fVar14 - fVar15) * (fVar14 - fVar15) + fVar17) {
            lVar10 = *unaff_x22;
            if (lVar10 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar10 = *(long *)(lVar10 + unaff_x26 * 8 + 0x20);
            if (lVar10 == 0) goto LAB_036bea38;
            lVar10 = FUN_039ad440(lVar10,0);
            if ((*(long *)(unaff_x19 + 0x380) == 0) ||
               (FUN_03928134(*(long *)(unaff_x19 + 0x380),0), lVar10 == 0)) goto LAB_036bea38;
            FUN_039281c4(lVar10,0);
          }
          lVar10 = *unaff_x22;
          if (lVar10 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_036beac8;
          lVar10 = *(long *)(lVar10 + unaff_x26 * 8 + 0x20);
          if (lVar10 == 0) goto LAB_036bea38;
          uVar11 = *(undefined8 *)(lVar10 + 0xf0);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar7 = FUN_03922f24(uVar11,0,0);
          if ((uVar7 & 1) == 0) {
            lVar10 = *unaff_x22;
            if (lVar10 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar10 = *(long *)(lVar10 + unaff_x26 * 8 + 0x20);
            if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0xf0), lVar10 == 0))
            goto LAB_036bea38;
            iVar2 = FUN_03922ce0(lVar10,0);
            lVar10 = *plVar13;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01ac7298(lVar10);
              lVar10 = *plVar13;
            }
            lVar10 = **(long **)(lVar10 + 0xb8);
            if (lVar10 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar10 = *(long *)(lVar10 + unaff_x28 + -0x1c);
            if (lVar10 == 0) goto LAB_036bea38;
            iVar3 = FUN_03922ce0(lVar10,0);
            if (iVar2 != iVar3) goto LAB_036be568;
          }
          else {
LAB_036be568:
            lVar10 = *unaff_x22;
            if (lVar10 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar6 = *plVar13;
            lVar10 = *(long *)(lVar10 + unaff_x26 * 8 + 0x20);
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar6 = *plVar13;
            }
            lVar6 = **(long **)(lVar6 + 0xb8);
            if (lVar6 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_036beac8;
            if (lVar10 == 0) goto LAB_036bea38;
            thunk_FUN_03702968(lVar10,*(undefined8 *)(lVar6 + unaff_x28 + -0x1c),0);
            lVar10 = *unaff_x22;
            if (lVar10 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar6 = **(long **)(*plVar13 + 0xb8);
            if (lVar6 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar10 = *(long *)(lVar10 + unaff_x26 * 8 + 0x20);
            if (lVar10 == 0) goto LAB_036bea38;
            *(undefined8 *)(lVar10 + 0xd8) = *(undefined8 *)(lVar6 + unaff_x28 + -0x2c);
            thunk_FUN_01b4f09c();
            lVar10 = *unaff_x22;
            if (lVar10 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar6 = **(long **)(*plVar13 + 0xb8);
            if (lVar6 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar10 = *(long *)(lVar10 + unaff_x26 * 8 + 0x20);
            if (lVar10 == 0) goto LAB_036bea38;
            *(undefined8 *)(lVar10 + 0xe0) = *(undefined8 *)(lVar6 + unaff_x28 + -0x24);
            thunk_FUN_01b4f09c();
          }
          lVar10 = *plVar13;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar10 = *plVar13;
          }
          lVar6 = **(long **)(lVar10 + 0xb8);
          if (lVar6 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_036beac8;
          if (*(char *)(lVar6 + unaff_x28 + -0x13) != '\0') {
            lVar8 = *unaff_x22;
            if (lVar8 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar8 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar6 = **(long **)(*plVar13 + 0xb8);
              if (lVar6 == 0) goto LAB_036bea38;
            }
            if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_036beac8;
            if (lVar8 == 0) goto LAB_036bea38;
            FUN_037029c4(lVar8,*(undefined8 *)(lVar6 + unaff_x28 + -0x1c),0);
            lVar10 = *unaff_x22;
            if (lVar10 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar6 = **(long **)(*plVar13 + 0xb8);
            if (lVar6 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar10 = *(long *)(lVar10 + unaff_x26 * 8 + 0x20);
            if (lVar10 == 0) goto LAB_036bea38;
            *(undefined8 *)(lVar10 + 0x100) = *(undefined8 *)(lVar6 + unaff_x28 + -0xc);
            thunk_FUN_01b4f09c(lVar10 + 0x100);
          }
        }
        lVar10 = *plVar13;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar10 = *plVar13;
        }
        lVar10 = **(long **)(lVar10 + 0xb8);
        if (lVar10 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_036beac8;
        if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x60), lVar6 == 0))
        goto LAB_036bea38;
        if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_036beac8;
        lVar8 = *(long *)(lVar6 + unaff_x25 + 0x30);
        iVar2 = *(int *)(lVar10 + unaff_x28);
        uVar7 = unaff_x26;
        if (lVar8 == 0) {
          if (unaff_x26 == 0) {
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
            if (*(int *)(lVar6 + 0x18) == 0) goto LAB_036beac8;
            memcpy((void *)(lVar6 + unaff_x25 + 0x20),&stack0x00000090,0x50);
            __dest = (void *)(lVar6 + 0x20);
          }
          else {
            lVar10 = *unaff_x22;
            if (lVar10 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar10 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar10 = *(long *)(lVar10 + unaff_x26 * 8 + 0x20);
            if (lVar10 == 0) goto LAB_036bea38;
            uVar11 = FUN_03702ba4(lVar10,0);
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
            FUN_036f884c(&stack0x000000e0,uVar11,iVar2 + 1,0);
            memcpy(&stack0x00000040,&stack0x000000e0,0x50);
            if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_036beac8;
            __dest = (void *)(lVar6 + unaff_x25 + 0x20);
            memcpy(__dest,&stack0x00000040,0x50);
          }
          thunk_FUN_01b4f09c(__dest,0);
          goto LAB_036be90c;
        }
        iVar3 = *(int *)(lVar8 + 0x18);
        param_3 = lVar6 + unaff_x25 + 0x20;
        if (iVar3 < iVar2 * 4) goto LAB_036be7d8;
      } while ((iVar2 < 1) || (*(char *)(unaff_x19 + 0x321) == '\0'));
      iVar1 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar1 = iVar3;
      }
    } while ((iVar1 >> 2) - iVar2 < 0x101);
LAB_036be7d8:
    if (iVar2 < 0x401) {
      unaff_w24 = FUN_039155e8(iVar2 + 1,0);
    }
    else {
      unaff_w24 = iVar2 + 0x100;
    }
    if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
  } while( true );
  while( true ) {
    lVar10 = *unaff_x22;
    unaff_x21 = (ulong)(uVar9 + 1);
    lVar6 = lVar6 + 8;
    if (lVar10 == 0) break;
LAB_036be998:
    uVar9 = (uint)unaff_x21;
    if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar9) {
LAB_036be118:
      return *(undefined4 *)(unaff_x19 + 0x490);
    }
    if (*(uint *)(lVar10 + 0x18) <= uVar9) {
LAB_036beac8:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar11 = *(undefined8 *)(lVar10 + lVar6);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_0391f968(uVar11,0,0);
    if ((uVar7 & 1) == 0) goto LAB_036be118;
    if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x60), lVar10 == 0)) break;
    if ((int)uVar9 < *(int *)(lVar10 + 0x18)) {
      lVar10 = *unaff_x22;
      if (lVar10 == 0) break;
      if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_036beac8;
      if ((*(long *)(lVar10 + lVar6) == 0) ||
         (lVar10 = FUN_039add2c(*(long *)(lVar10 + lVar6),0), lVar10 == 0)) break;
      FUN_03af8c9c(lVar10,0,0);
    }
  }
LAB_036bea38:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


