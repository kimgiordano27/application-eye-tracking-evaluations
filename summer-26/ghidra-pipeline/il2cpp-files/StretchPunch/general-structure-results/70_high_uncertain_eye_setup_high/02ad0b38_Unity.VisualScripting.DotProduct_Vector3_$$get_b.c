/*
FUNCTION_NAME: Unity.VisualScripting.DotProduct<Vector3>$$get_b
ENTRY_POINT: 02ad0b38
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_VisualScripting_DotProduct<Vector3>__get_b(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  void *pvVar10;
  long unaff_x25;
  long lVar11;
  ulong uVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
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
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  long in_stack_00000198;
  
  iVar2 = thunk_FUN_01dff49c();
  if (iVar2 != 0) {
    FUN_033b2d60(6,0);
  }
  uVar3 = FUN_033aadfc();
  if (uVar3 < unaff_w20) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar2 = FUN_033aadfc();
  if ((int)(iVar2 - unaff_w20) < *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28)) {
    FUN_033b2d60(5,0);
  }
  lVar9 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    FUN_01dde7f8(lVar9);
  }
  lVar9 = thunk_FUN_01de26bc();
  if (lVar9 == 0) {
    lVar9 = thunk_FUN_01de26bc();
    if (lVar9 == 0) {
      plVar7 = (long *)thunk_FUN_01de26bc();
      if (plVar7 == (long *)0x0) {
        FUN_033b3618();
      }
      uVar3 = *(uint *)(unaff_x21 + 0x20);
      if (0 < (int)uVar3) {
        lVar9 = *(long *)(unaff_x21 + 0x18);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar12 = 0;
        pvVar10 = (void *)(lVar9 + 0x30);
        do {
          if (*(uint *)(lVar9 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          if (-1 < *(int *)((long)pvVar10 + -0x10)) {
            uVar1 = *(undefined4 *)((long)pvVar10 + -8);
            memcpy(&stack0x00000098,pvVar10,0x78);
            in_stack_00000178 = 0;
            in_stack_00000170 = 0;
            in_stack_00000188 = 0;
            in_stack_00000180 = 0;
            in_stack_00000158 = 0;
            in_stack_00000150 = 0;
            in_stack_00000168 = 0;
            in_stack_00000160 = 0;
            in_stack_00000138 = 0;
            in_stack_00000130 = 0;
            in_stack_00000148 = 0;
            in_stack_00000140 = 0;
            in_stack_00000118 = 0;
            in_stack_00000110 = 0;
            in_stack_00000128 = 0;
            in_stack_00000120 = 0;
            uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x130);
            memcpy(&stack0x00000010,&stack0x00000098,0x78);
            FUN_0306c908(&stack0x00000110,uVar1,&stack0x00000010,uVar4);
            memcpy(&stack0x00000010,&stack0x00000110,0x80);
            lVar11 = thunk_FUN_01de23e8(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8),
                                        &stack0x00000010);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            if ((lVar11 != 0) &&
               (lVar8 = thunk_FUN_01de26bc(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
              uVar4 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar4,0);
            }
            if (*(uint *)(plVar7 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            plVar7[(long)(int)unaff_w20 + 4] = lVar11;
            thunk_FUN_01e10808(plVar7 + (long)(int)unaff_w20 + 4,lVar11);
            unaff_w20 = unaff_w20 + 1;
          }
          uVar12 = uVar12 + 1;
          pvVar10 = (void *)((long)pvVar10 + 0x88);
        } while (uVar3 != uVar12);
      }
    }
    else {
      iVar2 = *(int *)(unaff_x21 + 0x20);
      if (0 < iVar2) {
        lVar11 = *(long *)(unaff_x21 + 0x18);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar12 = 0;
        pvVar10 = (void *)(lVar11 + 0x30);
        do {
          if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_02ad0e2c;
          if (-1 < *(int *)((long)pvVar10 + -0x10)) {
            in_stack_00000008._4_4_ = *(undefined4 *)((long)pvVar10 + -8);
            uVar4 = thunk_FUN_01de23e8(*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                                       (long)&stack0x00000008 + 4);
            if (*(uint *)(lVar11 + 0x18) <= uVar12) {
LAB_02ad0e2c:
                    /* WARNING: Subroutine does not return */
              FUN_01d7db78();
            }
            memmove(&stack0x00000110,pvVar10,0x78);
            uVar5 = thunk_FUN_01de23e8(*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                                       &stack0x00000110);
            in_stack_00000010 = 0;
            in_stack_00000018 = 0;
            FUN_0336f7b8(&stack0x00000010,uVar4,uVar5,0);
            if (*(uint *)(lVar9 + 0x18) <= unaff_w20) goto LAB_02ad0e2c;
            lVar8 = lVar9 + (long)(int)unaff_w20 * 0x10;
            puVar6 = (undefined8 *)(lVar8 + 0x20);
            *(undefined8 *)(lVar8 + 0x28) = in_stack_00000018;
            *puVar6 = in_stack_00000010;
            unaff_w20 = unaff_w20 + 1;
            thunk_FUN_01e10808(puVar6,0);
            iVar2 = *(int *)(unaff_x21 + 0x20);
          }
          uVar12 = uVar12 + 1;
          pvVar10 = (void *)((long)pvVar10 + 0x88);
        } while ((long)uVar12 < (long)iVar2);
      }
    }
  }
  else {
    FUN_02acefbc();
  }
  if (*(long *)(unaff_x25 + 0x28) != in_stack_00000198) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


