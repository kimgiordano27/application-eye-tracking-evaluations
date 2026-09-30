/*
FUNCTION_NAME: Unity.VisualScripting.TypeFilter$$Equals
ENTRY_POINT: 036b6d84
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


undefined4 Unity_VisualScripting_TypeFilter__Equals(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  void *__dest;
  uint uVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long *unaff_x20;
  uint uVar11;
  ulong unaff_x21;
  long *unaff_x22;
  undefined8 uVar12;
  long *unaff_x24;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
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
  
  if (0 < (int)unaff_x21) {
    lVar14 = 0;
    uVar15 = 0;
    lVar16 = 0x54;
    lVar17 = 0x20;
    do {
      if (uVar15 != 0) {
        lVar9 = *unaff_x22;
        if (lVar9 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_036b7478;
        uVar12 = *(undefined8 *)(lVar9 + uVar15 * 8 + 0x20);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_03922f24(uVar12,0,0);
        if ((uVar5 & 1) != 0) {
          lVar9 = *unaff_x24;
          plVar13 = (long *)*unaff_x22;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar9 = *unaff_x24;
          }
          lVar9 = **(long **)(lVar9 + 0xb8);
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_036b7478;
          lVar9 = lVar9 + lVar16;
          in_stack_00000160 = *(undefined8 *)(lVar9 + -4);
          in_stack_00000158 = *(undefined8 *)(lVar9 + -0xc);
          in_stack_00000150 = *(undefined8 *)(lVar9 + -0x14);
          in_stack_00000148 = *(undefined8 *)(lVar9 + -0x1c);
          in_stack_00000140 = *(undefined8 *)(lVar9 + -0x24);
          in_stack_00000138 = *(undefined8 *)(lVar9 + -0x2c);
          in_stack_00000130 = *(undefined8 *)(lVar9 + -0x34);
          lVar9 = FUN_03701aec();
          if (plVar13 == (long *)0x0) goto thunk_FUN_01b48178;
          if ((lVar9 != 0) &&
             (lVar6 = thunk_FUN_01afa9e0(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar6 == 0)) {
            uVar12 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
            FUN_01b48050(uVar12,0);
          }
          if (*(uint *)(plVar13 + 3) <= uVar15) goto LAB_036b7478;
          plVar13[uVar15 + 4] = lVar9;
          thunk_FUN_01b4f09c((long)plVar13 + lVar17,lVar9);
          unaff_x24 = (long *)PTR_DAT_03d9c920;
          if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
          lVar9 = *(long *)(*unaff_x20 + 0x60);
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_036b7478;
          puVar7 = (undefined8 *)(lVar9 + lVar14 + 0x30);
          *puVar7 = 0;
          thunk_FUN_01b4f09c(puVar7,0);
        }
        lVar9 = *unaff_x22;
        if (lVar9 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_036b7478;
        lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
        if (lVar9 == 0) goto thunk_FUN_01b48178;
        uVar12 = *(undefined8 *)(lVar9 + 0x38);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_03922f24(uVar12,0,0);
        if ((uVar5 & 1) == 0) {
          lVar9 = *unaff_x22;
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_036b7478;
          lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
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
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_036b7478;
          lVar9 = *(long *)(lVar9 + lVar16 + -0x1c);
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          iVar4 = FUN_03922ce0(lVar9,0);
          if (iVar3 != iVar4) goto LAB_036b6f94;
        }
        else {
LAB_036b6f94:
          lVar9 = *unaff_x22;
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_036b7478;
          lVar6 = *unaff_x24;
          lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar6 = *unaff_x24;
          }
          lVar6 = **(long **)(lVar6 + 0xb8);
          if (lVar6 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_036b7478;
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          thunk_FUN_03701608(lVar9,*(undefined8 *)(lVar6 + lVar16 + -0x1c),0);
          lVar9 = *unaff_x22;
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_036b7478;
          lVar6 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar6 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_036b7478;
          lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar6 + lVar16 + -0x2c);
          thunk_FUN_01b4f09c();
          lVar9 = *unaff_x22;
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_036b7478;
          lVar6 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar6 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_036b7478;
          lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(lVar6 + lVar16 + -0x24);
          thunk_FUN_01b4f09c();
        }
        lVar9 = *unaff_x24;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar9 = *unaff_x24;
        }
        lVar6 = **(long **)(lVar9 + 0xb8);
        if (lVar6 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_036b7478;
        if (*(char *)(lVar6 + lVar16 + -0x13) != '\0') {
          lVar10 = *unaff_x22;
          if (lVar10 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_036b7478;
          lVar10 = *(long *)(lVar10 + uVar15 * 8 + 0x20);
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar6 = **(long **)(*unaff_x24 + 0xb8);
            if (lVar6 == 0) goto thunk_FUN_01b48178;
          }
          if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_036b7478;
          if (lVar10 == 0) goto thunk_FUN_01b48178;
          FUN_03701638(lVar10,*(undefined8 *)(lVar6 + lVar16 + -0x1c),0);
          lVar9 = *unaff_x22;
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_036b7478;
          lVar6 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar6 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_036b7478;
          lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(lVar6 + lVar16 + -0xc);
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
      if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_036b7478;
      if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x60), lVar6 == 0))
      goto thunk_FUN_01b48178;
      if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_036b7478;
      lVar10 = *(long *)(lVar6 + lVar14 + 0x30);
      iVar3 = *(int *)(lVar9 + lVar16);
      if (lVar10 == 0) {
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
          if (*(int *)(lVar6 + 0x18) == 0) goto LAB_036b7478;
          memcpy((void *)(lVar6 + lVar14 + 0x20),&stack0x00000090,0x50);
          __dest = (void *)(lVar6 + 0x20);
        }
        else {
          lVar9 = *unaff_x22;
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_036b7478;
          lVar9 = *(long *)(lVar9 + uVar15 * 8 + 0x20);
          if (lVar9 == 0) goto thunk_FUN_01b48178;
          uVar12 = FUN_03701980(lVar9,0);
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
          FUN_036f884c(&stack0x000000e0,uVar12,iVar3 + 1,0);
          memcpy(&stack0x00000040,&stack0x000000e0,0x50);
          if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_036b7478;
          __dest = (void *)(lVar6 + lVar14 + 0x20);
          memcpy(__dest,&stack0x00000040,0x50);
        }
        thunk_FUN_01b4f09c(__dest,0);
      }
      else {
        iVar4 = *(int *)(lVar10 + 0x18);
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
          FUN_036f961c(lVar6 + lVar14 + 0x20,iVar3,0);
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
      if ((*(uint *)(lVar6 + 0x18) <= uVar15) || (*(uint *)(lVar9 + 0x18) <= uVar15))
      goto LAB_036b7478;
      *(undefined8 *)(lVar9 + lVar14 + 0x68) = *(undefined8 *)(lVar6 + lVar16 + -0x1c);
      thunk_FUN_01b4f09c();
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 0x50;
      lVar16 = lVar16 + 0x38;
      lVar17 = lVar17 + 8;
    } while ((unaff_x21 & 0xffffffff) != uVar15);
  }
  puVar2 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
  lVar14 = *unaff_x22;
  if (lVar14 != 0) {
    lVar16 = (-(unaff_x21 >> 0x1f & 1) & 0xfffffff800000000 | (unaff_x21 & 0xffffffff) << 3) + 0x20;
    lVar17 = (long)(int)unaff_x21 * 0x50 + 0x20;
    do {
      uVar11 = (uint)unaff_x21;
      if ((int)*(uint *)(lVar14 + 0x18) <= (int)uVar11) {
LAB_036b6c0c:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar11) {
LAB_036b7478:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar12 = *(undefined8 *)(lVar14 + lVar16);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar15 = FUN_0391f968(uVar12,0,0);
      if ((uVar15 & 1) == 0) goto LAB_036b6c0c;
      if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x60), lVar14 == 0)) break;
      uVar8 = *(uint *)(lVar14 + 0x18);
      if ((int)uVar11 < (int)uVar8) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          uVar8 = *(uint *)(lVar14 + 0x18);
        }
        if (uVar8 <= uVar11) goto LAB_036b7478;
        FUN_036fa5b4(lVar14 + lVar17,0,1,0);
      }
      lVar14 = *unaff_x22;
      unaff_x21 = (ulong)(uVar11 + 1);
      lVar17 = lVar17 + 0x50;
      lVar16 = lVar16 + 8;
    } while (lVar14 != 0);
  }
thunk_FUN_01b48178:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


