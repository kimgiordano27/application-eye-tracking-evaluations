/*
FUNCTION_NAME: Unity.VisualScripting.TypeUtility.<GetTypesSafely>d__35$$System.IDisposable.Dispose
ENTRY_POINT: 036be2c8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined4
Unity_VisualScripting_TypeUtility_<GetTypesSafely>d__35__System_IDisposable_Dispose
          (long param_1,undefined1 param_2 [16],ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  void *__dest;
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
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
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
    fVar15 = (float)param_3;
    if (*(uint *)(param_1 + 0x18) <= unaff_x26) goto LAB_036beac8;
    uVar10 = *(undefined8 *)(param_1 + unaff_x26 * 8 + 0x20);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03922f24(uVar10,0,0);
    if ((uVar4 & 1) != 0) {
      lVar5 = *unaff_x24;
      plVar11 = (long *)*unaff_x22;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar5 = *unaff_x24;
      }
      lVar5 = **(long **)(lVar5 + 0xb8);
      if (lVar5 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x26) goto LAB_036beac8;
      lVar5 = lVar5 + unaff_x28;
      in_stack_00000160 = *(undefined8 *)(lVar5 + -4);
      in_stack_00000158 = *(undefined8 *)(lVar5 + -0xc);
      in_stack_00000150 = *(undefined8 *)(lVar5 + -0x14);
      in_stack_00000148 = *(undefined8 *)(lVar5 + -0x1c);
      uVar10 = *(undefined8 *)(lVar5 + -0x24);
      in_stack_00000138 = *(undefined8 *)(lVar5 + -0x2c);
      in_stack_00000130 = *(undefined8 *)(lVar5 + -0x34);
      in_stack_00000140 = uVar10;
      lVar5 = FUN_03702d14();
      fVar15 = (float)uVar10;
      if (plVar11 == (long *)0x0) goto LAB_036bea38;
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0)) {
        uVar10 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar10,0);
      }
      if (*(uint *)(plVar11 + 3) <= unaff_x26) goto LAB_036beac8;
      plVar11[unaff_x26 + 4] = lVar5;
      thunk_FUN_01b4f09c((long)plVar11 + unaff_x29,lVar5);
      unaff_x24 = (long *)PTR_DAT_03d9c920;
      if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x60), lVar5 == 0))
      goto LAB_036bea38;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x26) goto LAB_036beac8;
      puVar7 = (undefined8 *)(lVar5 + unaff_x25 + 0x30);
      *puVar7 = 0;
      thunk_FUN_01b4f09c(puVar7,0);
    }
    if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_036bea38;
    fVar12 = (float)FUN_03928134(*(long *)(unaff_x19 + 0x380),0);
    lVar5 = *unaff_x22;
    if (lVar5 == 0) goto LAB_036bea38;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x26) goto LAB_036beac8;
    lVar5 = *(long *)(lVar5 + unaff_x26 * 8 + 0x20);
    if ((lVar5 == 0) || (fVar14 = fVar15, lVar5 = FUN_039ad440(lVar5,0), lVar5 == 0))
    goto LAB_036bea38;
    fVar13 = (float)FUN_03928134(lVar5,0);
    fVar15 = (fVar15 - fVar14) * (fVar15 - fVar14);
    param_3 = (ulong)(uint)fVar15;
    if (unaff_s10 <= (fVar12 - fVar13) * (fVar12 - fVar13) + fVar15) {
      lVar5 = *unaff_x22;
      if (lVar5 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x26) goto LAB_036beac8;
      lVar5 = *(long *)(lVar5 + unaff_x26 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_036bea38;
      lVar5 = FUN_039ad440(lVar5,0);
      if ((*(long *)(unaff_x19 + 0x380) == 0) ||
         (FUN_03928134(*(long *)(unaff_x19 + 0x380),0), lVar5 == 0)) goto LAB_036bea38;
      FUN_039281c4(lVar5,0);
    }
    lVar5 = *unaff_x22;
    if (lVar5 == 0) goto LAB_036bea38;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x26) goto LAB_036beac8;
    lVar5 = *(long *)(lVar5 + unaff_x26 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_036bea38;
    uVar10 = *(undefined8 *)(lVar5 + 0xf0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03922f24(uVar10,0,0);
    if ((uVar4 & 1) == 0) {
      lVar5 = *unaff_x22;
      if (lVar5 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x26) goto LAB_036beac8;
      lVar5 = *(long *)(lVar5 + unaff_x26 * 8 + 0x20);
      if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0xf0), lVar5 == 0)) goto LAB_036bea38;
      iVar2 = FUN_03922ce0(lVar5,0);
      lVar5 = *unaff_x24;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar5);
        lVar5 = *unaff_x24;
      }
      lVar5 = **(long **)(lVar5 + 0xb8);
      if (lVar5 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x26) goto LAB_036beac8;
      lVar5 = *(long *)(lVar5 + unaff_x28 + -0x1c);
      if (lVar5 == 0) goto LAB_036bea38;
      iVar3 = FUN_03922ce0(lVar5,0);
      if (iVar2 != iVar3) goto LAB_036be568;
    }
    else {
LAB_036be568:
      lVar5 = *unaff_x22;
      if (lVar5 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x26) goto LAB_036beac8;
      lVar6 = *unaff_x24;
      lVar5 = *(long *)(lVar5 + unaff_x26 * 8 + 0x20);
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *unaff_x24;
      }
      lVar6 = **(long **)(lVar6 + 0xb8);
      if (lVar6 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_036beac8;
      if (lVar5 == 0) goto LAB_036bea38;
      thunk_FUN_03702968(lVar5,*(undefined8 *)(lVar6 + unaff_x28 + -0x1c),0);
      lVar5 = *unaff_x22;
      if (lVar5 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x26) goto LAB_036beac8;
      lVar6 = **(long **)(*unaff_x24 + 0xb8);
      if (lVar6 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_036beac8;
      lVar5 = *(long *)(lVar5 + unaff_x26 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_036bea38;
      *(undefined8 *)(lVar5 + 0xd8) = *(undefined8 *)(lVar6 + unaff_x28 + -0x2c);
      thunk_FUN_01b4f09c();
      lVar5 = *unaff_x22;
      if (lVar5 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x26) goto LAB_036beac8;
      lVar6 = **(long **)(*unaff_x24 + 0xb8);
      if (lVar6 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_036beac8;
      lVar5 = *(long *)(lVar5 + unaff_x26 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_036bea38;
      *(undefined8 *)(lVar5 + 0xe0) = *(undefined8 *)(lVar6 + unaff_x28 + -0x24);
      thunk_FUN_01b4f09c();
    }
    lVar5 = *unaff_x24;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar5 = *unaff_x24;
    }
    lVar6 = **(long **)(lVar5 + 0xb8);
    if (lVar6 == 0) goto LAB_036bea38;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_036beac8;
    if (*(char *)(lVar6 + unaff_x28 + -0x13) != '\0') {
      lVar8 = *unaff_x22;
      if (lVar8 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar8 + 0x18) <= unaff_x26) goto LAB_036beac8;
      lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar6 == 0) goto LAB_036bea38;
      }
      if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_036beac8;
      if (lVar8 == 0) goto LAB_036bea38;
      FUN_037029c4(lVar8,*(undefined8 *)(lVar6 + unaff_x28 + -0x1c),0);
      lVar5 = *unaff_x22;
      if (lVar5 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x26) goto LAB_036beac8;
      lVar6 = **(long **)(*unaff_x24 + 0xb8);
      if (lVar6 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_036beac8;
      lVar5 = *(long *)(lVar5 + unaff_x26 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_036bea38;
      *(undefined8 *)(lVar5 + 0x100) = *(undefined8 *)(lVar6 + unaff_x28 + -0xc);
      thunk_FUN_01b4f09c(lVar5 + 0x100);
    }
    do {
      lVar5 = *unaff_x24;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar5 = *unaff_x24;
      }
      lVar5 = **(long **)(lVar5 + 0xb8);
      if (lVar5 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x26) goto LAB_036beac8;
      if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x60), lVar6 == 0))
      goto LAB_036bea38;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_036beac8;
      lVar8 = *(long *)(lVar6 + unaff_x25 + 0x30);
      iVar2 = *(int *)(lVar5 + unaff_x28);
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
          lVar5 = *unaff_x22;
          if (lVar5 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar5 + 0x18) <= unaff_x26) goto LAB_036beac8;
          lVar5 = *(long *)(lVar5 + unaff_x26 * 8 + 0x20);
          if (lVar5 == 0) goto LAB_036bea38;
          uVar10 = FUN_03702ba4(lVar5,0);
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
          if (*(uint *)(lVar6 + 0x18) <= unaff_x26) goto LAB_036beac8;
          __dest = (void *)(lVar6 + unaff_x25 + 0x20);
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
          if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_036f961c(lVar6 + unaff_x25 + 0x20,iVar2,0);
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
      if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x60), lVar5 == 0))
      goto LAB_036bea38;
      lVar6 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *unaff_x24;
      }
      lVar6 = **(long **)(lVar6 + 0xb8);
      if (lVar6 == 0) goto LAB_036bea38;
      if ((*(uint *)(lVar6 + 0x18) <= unaff_x26) || (*(uint *)(lVar5 + 0x18) <= unaff_x26))
      goto LAB_036beac8;
      *(undefined8 *)(lVar5 + unaff_x25 + 0x68) = *(undefined8 *)(lVar6 + unaff_x28 + -0x1c);
      thunk_FUN_01b4f09c();
      unaff_x26 = unaff_x26 + 1;
      unaff_x25 = unaff_x25 + 0x50;
      unaff_x28 = unaff_x28 + 0x38;
      unaff_x29 = unaff_x29 + 8;
      if (unaff_x27 == unaff_x26) {
        lVar5 = *unaff_x22;
        if (lVar5 == 0) goto LAB_036bea38;
        lVar6 = (-(unaff_x21 >> 0x1f & 1) & 0xfffffff800000000 | (unaff_x21 & 0xffffffff) << 3) +
                0x20;
        goto LAB_036be998;
      }
    } while (unaff_x26 == 0);
    param_1 = *unaff_x22;
    if (param_1 == 0) goto LAB_036bea38;
  } while( true );
  while( true ) {
    lVar5 = *unaff_x22;
    unaff_x21 = (ulong)(uVar9 + 1);
    lVar6 = lVar6 + 8;
    if (lVar5 == 0) break;
LAB_036be998:
    uVar9 = (uint)unaff_x21;
    if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar9) {
LAB_036be118:
      return *(undefined4 *)(unaff_x19 + 0x490);
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar9) {
LAB_036beac8:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar10 = *(undefined8 *)(lVar5 + lVar6);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_0391f968(uVar10,0,0);
    if ((uVar4 & 1) == 0) goto LAB_036be118;
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x60), lVar5 == 0)) break;
    if ((int)uVar9 < *(int *)(lVar5 + 0x18)) {
      lVar5 = *unaff_x22;
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_036beac8;
      if ((*(long *)(lVar5 + lVar6) == 0) ||
         (lVar5 = FUN_039add2c(*(long *)(lVar5 + lVar6),0), lVar5 == 0)) break;
      FUN_03af8c9c(lVar5,0,0);
    }
  }
LAB_036bea38:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


