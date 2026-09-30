/*
FUNCTION_NAME: System.EmptyArray<OVRTask<Int32Enum>>$$.cctor
ENTRY_POINT: 02ad9f74
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_EmptyArray<OVRTask<Int32Enum>>___cctor(void)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000048;
  
  *(undefined1 *)(unaff_x23 + 0xcf0) = 1;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3,0);
  }
  iVar1 = thunk_FUN_01dff4e0();
  if (iVar1 != 1) {
    FUN_033b2d60(7,0);
  }
  iVar1 = thunk_FUN_01dff49c();
  if (iVar1 != 0) {
    FUN_033b2d60(6,0);
  }
  uVar2 = FUN_033aadfc();
  if (uVar2 < unaff_w20) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar1 = FUN_033aadfc();
  if ((int)(iVar1 - unaff_w20) < *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28)) {
    FUN_033b2d60(5,0);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    FUN_01dde7f8(lVar7);
  }
  lVar7 = thunk_FUN_01de26bc();
  if (lVar7 != 0) {
    FUN_02ad86fc();
    return;
  }
  lVar7 = thunk_FUN_01de26bc();
  if (lVar7 == 0) {
    plVar4 = (long *)thunk_FUN_01de26bc();
    if (plVar4 == (long *)0x0) {
      FUN_033b3618();
    }
    uVar2 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar2) {
      lVar7 = *(long *)(unaff_x21 + 0x18);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar9 = 0;
      puVar11 = (undefined4 *)(lVar7 + 0x38);
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < (int)puVar11[-6]) {
          in_stack_00000020 = 0;
          in_stack_00000028 = 0;
          in_stack_00000030 = 0;
          FUN_0306cd9c(puVar11[-3],puVar11[-2],puVar11[-1],*puVar11,&stack0x00000020,puVar11[-4],
                       *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x130));
          lVar8 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if ((lVar8 != 0) &&
             (lVar5 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
            uVar6 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar6,0);
          }
          if (*(uint *)(plVar4 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          plVar4[(long)(int)unaff_w20 + 4] = lVar8;
          thunk_FUN_01e10808(plVar4 + (long)(int)unaff_w20 + 4,lVar8);
          unaff_w20 = unaff_w20 + 1;
        }
        uVar9 = uVar9 + 1;
        puVar11 = puVar11 + 7;
      } while (uVar2 != uVar9);
    }
  }
  else {
    iVar1 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar1) {
      lVar8 = *(long *)(unaff_x21 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar9 = 0;
      puVar10 = (undefined8 *)(lVar8 + 0x2c);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_02ada264;
        if (-1 < *(int *)((long)puVar10 + -0xc)) {
          in_stack_00000048._4_4_ = *(undefined4 *)((long)puVar10 + -4);
          thunk_FUN_01de23e8(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                             (long)&stack0x00000048 + 4);
          if (*(uint *)(lVar8 + 0x18) <= uVar9) {
LAB_02ada264:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          in_stack_00000028 = puVar10[1];
          in_stack_00000020 = *puVar10;
          thunk_FUN_01de23e8(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                             &stack0x00000020);
          FUN_0336f7b8();
          if (*(uint *)(lVar7 + 0x18) <= unaff_w20) goto LAB_02ada264;
          lVar5 = lVar7 + (long)(int)unaff_w20 * 0x10;
          puVar3 = (undefined8 *)(lVar5 + 0x20);
          *(undefined8 *)(lVar5 + 0x28) = 0;
          *puVar3 = 0;
          unaff_w20 = unaff_w20 + 1;
          thunk_FUN_01e10808(puVar3,0);
          iVar1 = *(int *)(unaff_x21 + 0x20);
        }
        uVar9 = uVar9 + 1;
        puVar10 = (undefined8 *)((long)puVar10 + 0x1c);
      } while ((long)uVar9 < (long)iVar1);
    }
  }
  return;
}


