/*
FUNCTION_NAME: Unity.VisualScripting.TypeFilter$$Clone
ENTRY_POINT: 036b6cd4
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


undefined4 Unity_VisualScripting_TypeFilter__Clone(void)

{
  int iVar1;
  undefined *puVar2;
  char in_NG;
  bool in_ZR;
  char in_OV;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  void *__dest;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long *unaff_x20;
  int iVar12;
  uint uVar13;
  ulong unaff_x21;
  long *unaff_x22;
  long *plVar14;
  undefined8 uVar15;
  long *unaff_x24;
  ulong uVar16;
  long *unaff_x27;
  long lVar17;
  long lVar18;
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
  
  iVar12 = (int)unaff_x21;
  if (!in_ZR && in_NG == in_OV) {
    FUN_039155e8(iVar12 + 1,0);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*unaff_x27);
    }
    FUN_01f52b30();
  }
  if (*(char *)(unaff_x19 + 0x321) != '\0') {
    if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
    plVar14 = (long *)(*unaff_x20 + 0x38);
    lVar10 = *plVar14;
    if (lVar10 == 0) goto thunk_FUN_01b48178;
    iVar3 = *(int *)(unaff_x19 + 0x490);
    if (0x100 < *(int *)(lVar10 + 0x18) - iVar3) {
      iVar4 = 0x100;
      if (0x100 < iVar3 + 1) {
        iVar4 = iVar3 + 1;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52d44(plVar14,iVar4,1,*(undefined8 *)PTR_DAT_03d9cb30);
      unaff_x24 = (long *)PTR_DAT_03d9c920;
    }
  }
  if (0 < iVar12) {
    lVar10 = 0;
    uVar16 = 0;
    lVar17 = 0x54;
    lVar18 = 0x20;
    do {
      if (uVar16 != 0) {
        lVar9 = *unaff_x22;
        if (lVar9 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036b7478;
        uVar15 = *(undefined8 *)(lVar9 + uVar16 * 8 + 0x20);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_03922f24(uVar15,0,0);
        if ((uVar5 & 1) != 0) {
          lVar9 = *unaff_x24;
          plVar14 = (long *)*unaff_x22;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar9 = *unaff_x24;
          }
          lVar9 = **(long **)(lVar9 + 0xb8);
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036b7478;
          lVar9 = lVar9 + lVar17;
          in_stack_00000160 = *(undefined8 *)(lVar9 + -4);
          in_stack_00000158 = *(undefined8 *)(lVar9 + -0xc);
          in_stack_00000150 = *(undefined8 *)(lVar9 + -0x14);
          in_stack_00000148 = *(undefined8 *)(lVar9 + -0x1c);
          in_stack_00000140 = *(undefined8 *)(lVar9 + -0x24);
          in_stack_00000138 = *(undefined8 *)(lVar9 + -0x2c);
          in_stack_00000130 = *(undefined8 *)(lVar9 + -0x34);
          lVar9 = FUN_03701aec();
          if (plVar14 == (long *)0x0) goto thunk_FUN_01b48178;
          if ((lVar9 != 0) &&
             (lVar6 = thunk_FUN_01afa9e0(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar6 == 0)) {
            uVar15 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
            FUN_01b48050(uVar15,0);
          }
          if (*(uint *)(plVar14 + 3) <= uVar16) goto LAB_036b7478;
          plVar14[uVar16 + 4] = lVar9;
          thunk_FUN_01b4f09c((long)plVar14 + lVar18,lVar9);
          unaff_x24 = (long *)PTR_DAT_03d9c920;
          if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
          lVar9 = *(long *)(*unaff_x20 + 0x60);
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036b7478;
          puVar7 = (undefined8 *)(lVar9 + lVar10 + 0x30);
          *puVar7 = 0;
          thunk_FUN_01b4f09c(puVar7,0);
        }
        lVar9 = *unaff_x22;
        if (lVar9 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036b7478;
        lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
        if (lVar9 == 0) goto thunk_FUN_01b48178;
        uVar15 = *(undefined8 *)(lVar9 + 0x38);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_03922f24(uVar15,0,0);
        if ((uVar5 & 1) == 0) {
          lVar9 = *unaff_x22;
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036b7478;
          lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
          if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x38), lVar9 == 0))
          goto thunk_FUN_01b48178;
          iVar3 = FUN_03922ce0(lVar9,0);
          lVar9 = *unaff_x24;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar9);
            lVar9 = *unaff_x24;
          }
          lVar9 = **(long **)(lVar9 + 0xb8);
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036b7478;
          lVar9 = *(long *)(lVar9 + lVar17 + -0x1c);
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          iVar4 = FUN_03922ce0(lVar9,0);
          if (iVar3 != iVar4) goto LAB_036b6f94;
        }
        else {
LAB_036b6f94:
          lVar9 = *unaff_x22;
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036b7478;
          lVar6 = *unaff_x24;
          lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar6 = *unaff_x24;
          }
          lVar6 = **(long **)(lVar6 + 0xb8);
          if (lVar6 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_036b7478;
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          thunk_FUN_03701608(lVar9,*(undefined8 *)(lVar6 + lVar17 + -0x1c),0);
          lVar9 = *unaff_x22;
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036b7478;
          lVar6 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar6 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_036b7478;
          lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar6 + lVar17 + -0x2c);
          thunk_FUN_01b4f09c();
          lVar9 = *unaff_x22;
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036b7478;
          lVar6 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar6 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_036b7478;
          lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(lVar6 + lVar17 + -0x24);
          thunk_FUN_01b4f09c();
        }
        lVar9 = *unaff_x24;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar9 = *unaff_x24;
        }
        lVar6 = **(long **)(lVar9 + 0xb8);
        if (lVar6 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_036b7478;
        if (*(char *)(lVar6 + lVar17 + -0x13) != '\0') {
          lVar11 = *unaff_x22;
          if (lVar11 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_036b7478;
          lVar11 = *(long *)(lVar11 + uVar16 * 8 + 0x20);
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar6 = **(long **)(*unaff_x24 + 0xb8);
            if (lVar6 == 0) goto thunk_FUN_01b48178;
          }
          if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_036b7478;
          if (lVar11 == 0) goto thunk_FUN_01b48178;
          FUN_03701638(lVar11,*(undefined8 *)(lVar6 + lVar17 + -0x1c),0);
          lVar9 = *unaff_x22;
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036b7478;
          lVar6 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar6 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_036b7478;
          lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(lVar6 + lVar17 + -0xc);
          thunk_FUN_01b4f09c();
        }
      }
      lVar9 = *unaff_x24;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar9 = *unaff_x24;
      }
      lVar9 = **(long **)(lVar9 + 0xb8);
      if (lVar9 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036b7478;
      if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x60), lVar6 == 0))
      goto thunk_FUN_01b48178;
      if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_036b7478;
      lVar11 = *(long *)(lVar6 + lVar10 + 0x30);
      iVar3 = *(int *)(lVar9 + lVar17);
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
          FUN_036f884c(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar3 + 1,0);
          memcpy(&stack0x00000090,&stack0x000000e0,0x50);
          if (*(int *)(lVar6 + 0x18) == 0) goto LAB_036b7478;
          memcpy((void *)(lVar6 + lVar10 + 0x20),&stack0x00000090,0x50);
          __dest = (void *)(lVar6 + 0x20);
        }
        else {
          lVar9 = *unaff_x22;
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_036b7478;
          lVar9 = *(long *)(lVar9 + uVar16 * 8 + 0x20);
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          uVar15 = FUN_03701980(lVar9,0);
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
          FUN_036f884c(&stack0x000000e0,uVar15,iVar3 + 1,0);
          memcpy(&stack0x00000040,&stack0x000000e0,0x50);
          if (*(uint *)(lVar6 + 0x18) <= uVar16) goto LAB_036b7478;
          __dest = (void *)(lVar6 + lVar10 + 0x20);
          memcpy(__dest,&stack0x00000040,0x50);
        }
        thunk_FUN_01b4f09c(__dest,0);
      }
      else {
        iVar4 = *(int *)(lVar11 + 0x18);
        if (iVar4 < iVar3 * 4) {
LAB_036b7200:
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
          FUN_036f961c(lVar6 + lVar10 + 0x20,iVar3,0);
        }
        else if ((0 < iVar3) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
          iVar1 = iVar4 + 3;
          if (-1 < iVar4) {
            iVar1 = iVar4;
          }
          if (0x100 < (iVar1 >> 2) - iVar3) goto LAB_036b7200;
        }
      }
      unaff_x24 = (long *)PTR_DAT_03d9c920;
      if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
      lVar9 = *(long *)(*unaff_x20 + 0x60);
      if (lVar9 == 0) goto thunk_FUN_01b48178;
      lVar6 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar6 = *unaff_x24;
      }
      lVar6 = **(long **)(lVar6 + 0xb8);
      if (lVar6 == 0) goto thunk_FUN_01b48178;
      if ((*(uint *)(lVar6 + 0x18) <= uVar16) || (*(uint *)(lVar9 + 0x18) <= uVar16))
      goto LAB_036b7478;
      *(undefined8 *)(lVar9 + lVar10 + 0x68) = *(undefined8 *)(lVar6 + lVar17 + -0x1c);
      thunk_FUN_01b4f09c();
      uVar16 = uVar16 + 1;
      lVar10 = lVar10 + 0x50;
      lVar17 = lVar17 + 0x38;
      lVar18 = lVar18 + 8;
    } while ((unaff_x21 & 0xffffffff) != uVar16);
  }
  puVar2 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
  lVar10 = *unaff_x22;
  if (lVar10 != 0) {
    lVar17 = (-(unaff_x21 >> 0x1f & 1) & 0xfffffff800000000 | (unaff_x21 & 0xffffffff) << 3) + 0x20;
    lVar18 = (long)iVar12 * 0x50 + 0x20;
    do {
      uVar13 = (uint)unaff_x21;
      if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar13) {
LAB_036b6c0c:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar13) {
LAB_036b7478:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar15 = *(undefined8 *)(lVar10 + lVar17);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar16 = FUN_0391f968(uVar15,0,0);
      if ((uVar16 & 1) == 0) goto LAB_036b6c0c;
      if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x60), lVar10 == 0)) break;
      uVar8 = *(uint *)(lVar10 + 0x18);
      if ((int)uVar13 < (int)uVar8) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          uVar8 = *(uint *)(lVar10 + 0x18);
        }
        if (uVar8 <= uVar13) goto LAB_036b7478;
        FUN_036fa5b4(lVar10 + lVar18,0,1,0);
      }
      lVar10 = *unaff_x22;
      unaff_x21 = (ulong)(uVar13 + 1);
      lVar18 = lVar18 + 0x50;
      lVar17 = lVar17 + 8;
    } while (lVar10 != 0);
  }
thunk_FUN_01b48178:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


