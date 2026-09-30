/*
FUNCTION_NAME: Unity.VisualScripting.TypeUtility.<GetTypesSafely>d__35$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 036be880
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
Unity_VisualScripting_TypeUtility_<GetTypesSafely>d__35__System_Collections_IEnumerable_GetEnumerator
          (undefined1 param_1 [16],ulong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *__dest;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x20;
  uint uVar8;
  ulong unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
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
    if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_036f961c(unaff_x23,param_3,0);
    uVar6 = unaff_x26;
LAB_036be90c:
    do {
      do {
        plVar12 = (long *)PTR_DAT_03d9c920;
        if ((*unaff_x20 == 0) || (lVar9 = *(long *)(*unaff_x20 + 0x60), lVar9 == 0))
        goto LAB_036bea38;
        lVar5 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar5 = *plVar12;
        }
        lVar5 = **(long **)(lVar5 + 0xb8);
        if (lVar5 == 0) goto LAB_036bea38;
        if ((*(uint *)(lVar5 + 0x18) <= uVar6) || (*(uint *)(lVar9 + 0x18) <= uVar6))
        goto LAB_036beac8;
        *(undefined8 *)(lVar9 + unaff_x25 + 0x68) = *(undefined8 *)(lVar5 + unaff_x28 + -0x1c);
        thunk_FUN_01b4f09c();
        fVar16 = (float)param_2;
        unaff_x26 = uVar6 + 1;
        unaff_x25 = unaff_x25 + 0x50;
        unaff_x28 = unaff_x28 + 0x38;
        unaff_x29 = unaff_x29 + 8;
        if (unaff_x27 == unaff_x26) {
          lVar9 = *unaff_x22;
          if (lVar9 == 0) goto LAB_036bea38;
          lVar5 = (-(unaff_x21 >> 0x1f & 1) & 0xfffffff800000000 | (unaff_x21 & 0xffffffff) << 3) +
                  0x20;
          goto LAB_036be998;
        }
        if (unaff_x26 != 0) {
          lVar9 = *unaff_x22;
          if (lVar9 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar9 + 0x18) <= unaff_x26) goto LAB_036beac8;
          uVar10 = *(undefined8 *)(lVar9 + unaff_x26 * 8 + 0x20);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar3 = FUN_03922f24(uVar10,0,0);
          if ((uVar3 & 1) != 0) {
            lVar9 = *plVar12;
            plVar11 = (long *)*unaff_x22;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar9 = *plVar12;
            }
            lVar9 = **(long **)(lVar9 + 0xb8);
            if (lVar9 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar9 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar9 = lVar9 + unaff_x28;
            in_stack_00000160 = *(undefined8 *)(lVar9 + -4);
            in_stack_00000158 = *(undefined8 *)(lVar9 + -0xc);
            in_stack_00000150 = *(undefined8 *)(lVar9 + -0x14);
            in_stack_00000148 = *(undefined8 *)(lVar9 + -0x1c);
            uVar10 = *(undefined8 *)(lVar9 + -0x24);
            in_stack_00000138 = *(undefined8 *)(lVar9 + -0x2c);
            in_stack_00000130 = *(undefined8 *)(lVar9 + -0x34);
            in_stack_00000140 = uVar10;
            lVar9 = FUN_03702d14();
            fVar16 = (float)uVar10;
            if (plVar11 == (long *)0x0) goto LAB_036bea38;
            if ((lVar9 != 0) &&
               (lVar5 = thunk_FUN_01afa9e0(lVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar5 == 0)) {
              uVar10 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
              FUN_01b48050(uVar10,0);
            }
            if (*(uint *)(plVar11 + 3) <= unaff_x26) goto LAB_036beac8;
            plVar11[uVar6 + 5] = lVar9;
            thunk_FUN_01b4f09c((long)plVar11 + unaff_x29,lVar9);
            plVar12 = (long *)PTR_DAT_03d9c920;
            if ((*unaff_x20 == 0) || (lVar9 = *(long *)(*unaff_x20 + 0x60), lVar9 == 0))
            goto LAB_036bea38;
            if (*(uint *)(lVar9 + 0x18) <= unaff_x26) goto LAB_036beac8;
            puVar4 = (undefined8 *)(lVar9 + unaff_x25 + 0x30);
            *puVar4 = 0;
            thunk_FUN_01b4f09c(puVar4,0);
          }
          if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_036bea38;
          fVar13 = (float)FUN_03928134(*(long *)(unaff_x19 + 0x380),0);
          lVar9 = *unaff_x22;
          if (lVar9 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar9 + 0x18) <= unaff_x26) goto LAB_036beac8;
          lVar9 = *(long *)(lVar9 + unaff_x26 * 8 + 0x20);
          if ((lVar9 == 0) || (fVar15 = fVar16, lVar9 = FUN_039ad440(lVar9,0), lVar9 == 0))
          goto LAB_036bea38;
          fVar14 = (float)FUN_03928134(lVar9,0);
          fVar16 = (fVar16 - fVar15) * (fVar16 - fVar15);
          param_2 = (ulong)(uint)fVar16;
          if (unaff_s10 <= (fVar13 - fVar14) * (fVar13 - fVar14) + fVar16) {
            lVar9 = *unaff_x22;
            if (lVar9 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar9 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar9 = *(long *)(lVar9 + unaff_x26 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_036bea38;
            lVar9 = FUN_039ad440(lVar9,0);
            if ((*(long *)(unaff_x19 + 0x380) == 0) ||
               (FUN_03928134(*(long *)(unaff_x19 + 0x380),0), lVar9 == 0)) goto LAB_036bea38;
            FUN_039281c4(lVar9,0);
          }
          lVar9 = *unaff_x22;
          if (lVar9 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar9 + 0x18) <= unaff_x26) goto LAB_036beac8;
          lVar9 = *(long *)(lVar9 + unaff_x26 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_036bea38;
          uVar10 = *(undefined8 *)(lVar9 + 0xf0);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar6 = FUN_03922f24(uVar10,0,0);
          if ((uVar6 & 1) == 0) {
            lVar9 = *unaff_x22;
            if (lVar9 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar9 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar9 = *(long *)(lVar9 + unaff_x26 * 8 + 0x20);
            if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0xf0), lVar9 == 0)) goto LAB_036bea38;
            iVar1 = FUN_03922ce0(lVar9,0);
            lVar9 = *plVar12;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01ac7298(lVar9);
              lVar9 = *plVar12;
            }
            lVar9 = **(long **)(lVar9 + 0xb8);
            if (lVar9 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar9 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar9 = *(long *)(lVar9 + unaff_x28 + -0x1c);
            if (lVar9 == 0) goto LAB_036bea38;
            iVar2 = FUN_03922ce0(lVar9,0);
            if (iVar1 != iVar2) goto LAB_036be568;
          }
          else {
LAB_036be568:
            lVar9 = *unaff_x22;
            if (lVar9 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar9 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar5 = *plVar12;
            lVar9 = *(long *)(lVar9 + unaff_x26 * 8 + 0x20);
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar5 = *plVar12;
            }
            lVar5 = **(long **)(lVar5 + 0xb8);
            if (lVar5 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar5 + 0x18) <= unaff_x26) goto LAB_036beac8;
            if (lVar9 == 0) goto LAB_036bea38;
            thunk_FUN_03702968(lVar9,*(undefined8 *)(lVar5 + unaff_x28 + -0x1c),0);
            lVar9 = *unaff_x22;
            if (lVar9 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar9 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar5 = **(long **)(*plVar12 + 0xb8);
            if (lVar5 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar5 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar9 = *(long *)(lVar9 + unaff_x26 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_036bea38;
            *(undefined8 *)(lVar9 + 0xd8) = *(undefined8 *)(lVar5 + unaff_x28 + -0x2c);
            thunk_FUN_01b4f09c();
            lVar9 = *unaff_x22;
            if (lVar9 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar9 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar5 = **(long **)(*plVar12 + 0xb8);
            if (lVar5 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar5 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar9 = *(long *)(lVar9 + unaff_x26 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_036bea38;
            *(undefined8 *)(lVar9 + 0xe0) = *(undefined8 *)(lVar5 + unaff_x28 + -0x24);
            thunk_FUN_01b4f09c();
          }
          lVar9 = *plVar12;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar9 = *plVar12;
          }
          lVar5 = **(long **)(lVar9 + 0xb8);
          if (lVar5 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar5 + 0x18) <= unaff_x26) goto LAB_036beac8;
          if (*(char *)(lVar5 + unaff_x28 + -0x13) != '\0') {
            lVar7 = *unaff_x22;
            if (lVar7 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar7 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar7 = *(long *)(lVar7 + unaff_x26 * 8 + 0x20);
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar5 = **(long **)(*plVar12 + 0xb8);
              if (lVar5 == 0) goto LAB_036bea38;
            }
            if (*(uint *)(lVar5 + 0x18) <= unaff_x26) goto LAB_036beac8;
            if (lVar7 == 0) goto LAB_036bea38;
            FUN_037029c4(lVar7,*(undefined8 *)(lVar5 + unaff_x28 + -0x1c),0);
            lVar9 = *unaff_x22;
            if (lVar9 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar9 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar5 = **(long **)(*plVar12 + 0xb8);
            if (lVar5 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar5 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar9 = *(long *)(lVar9 + unaff_x26 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_036bea38;
            *(undefined8 *)(lVar9 + 0x100) = *(undefined8 *)(lVar5 + unaff_x28 + -0xc);
            thunk_FUN_01b4f09c(lVar9 + 0x100);
          }
        }
        lVar9 = *plVar12;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar9 = *plVar12;
        }
        lVar9 = **(long **)(lVar9 + 0xb8);
        if (lVar9 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar9 + 0x18) <= unaff_x26) goto LAB_036beac8;
        if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x60), lVar5 == 0))
        goto LAB_036bea38;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x26) goto LAB_036beac8;
        lVar7 = *(long *)(lVar5 + unaff_x25 + 0x30);
        param_3 = *(int *)(lVar9 + unaff_x28);
        uVar6 = unaff_x26;
        if (lVar7 == 0) {
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
            FUN_036f884c(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),param_3 + 1,0);
            memcpy(&stack0x00000090,&stack0x000000e0,0x50);
            if (*(int *)(lVar5 + 0x18) == 0) goto LAB_036beac8;
            memcpy((void *)(lVar5 + unaff_x25 + 0x20),&stack0x00000090,0x50);
            __dest = (void *)(lVar5 + 0x20);
          }
          else {
            lVar9 = *unaff_x22;
            if (lVar9 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar9 + 0x18) <= unaff_x26) goto LAB_036beac8;
            lVar9 = *(long *)(lVar9 + unaff_x26 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_036bea38;
            uVar10 = FUN_03702ba4(lVar9,0);
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
            FUN_036f884c(&stack0x000000e0,uVar10,param_3 + 1,0);
            memcpy(&stack0x00000040,&stack0x000000e0,0x50);
            if (*(uint *)(lVar5 + 0x18) <= unaff_x26) goto LAB_036beac8;
            __dest = (void *)(lVar5 + unaff_x25 + 0x20);
            memcpy(__dest,&stack0x00000040,0x50);
          }
          thunk_FUN_01b4f09c(__dest,0);
          goto LAB_036be90c;
        }
        iVar1 = *(int *)(lVar7 + 0x18);
        unaff_x23 = lVar5 + unaff_x25 + 0x20;
        if (iVar1 < param_3 * 4) goto LAB_036be7d8;
      } while ((param_3 < 1) || (*(char *)(unaff_x19 + 0x321) == '\0'));
      iVar2 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar2 = iVar1;
      }
    } while ((iVar2 >> 2) - param_3 < 0x101);
LAB_036be7d8:
    if (param_3 < 0x401) {
      param_3 = FUN_039155e8(param_3 + 1,0);
    }
    else {
      param_3 = param_3 + 0x100;
    }
  } while( true );
  while( true ) {
    lVar9 = *unaff_x22;
    unaff_x21 = (ulong)(uVar8 + 1);
    lVar5 = lVar5 + 8;
    if (lVar9 == 0) break;
LAB_036be998:
    uVar8 = (uint)unaff_x21;
    if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar8) {
LAB_036be118:
      return *(undefined4 *)(unaff_x19 + 0x490);
    }
    if (*(uint *)(lVar9 + 0x18) <= uVar8) {
LAB_036beac8:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar10 = *(undefined8 *)(lVar9 + lVar5);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_0391f968(uVar10,0,0);
    if ((uVar6 & 1) == 0) goto LAB_036be118;
    if ((*unaff_x20 == 0) || (lVar9 = *(long *)(*unaff_x20 + 0x60), lVar9 == 0)) break;
    if ((int)uVar8 < *(int *)(lVar9 + 0x18)) {
      lVar9 = *unaff_x22;
      if (lVar9 == 0) break;
      if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_036beac8;
      if ((*(long *)(lVar9 + lVar5) == 0) ||
         (lVar9 = FUN_039add2c(*(long *)(lVar9 + lVar5),0), lVar9 == 0)) break;
      FUN_03af8c9c(lVar9,0,0);
    }
  }
LAB_036bea38:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


