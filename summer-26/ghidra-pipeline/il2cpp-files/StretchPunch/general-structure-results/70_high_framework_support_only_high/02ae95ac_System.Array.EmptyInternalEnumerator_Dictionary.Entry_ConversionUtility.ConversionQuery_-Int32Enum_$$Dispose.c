/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<Dictionary.Entry<ConversionUtility.ConversionQuery,-Int32Enum>>$$Dispose
ENTRY_POINT: 02ae95ac
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array_EmptyInternalEnumerator<Dictionary_Entry<ConversionUtility_ConversionQuery,_Int32Enum>>__Dispose
               (void)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  void *pvVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000128;
  
  uVar1 = FUN_033aadfc();
  if (uVar1 < unaff_w20) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar2 = FUN_033aadfc();
  if ((int)(iVar2 - unaff_w20) < *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28)) {
    FUN_033b2d60(5,0);
  }
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    FUN_01dde7f8(lVar6);
  }
  lVar6 = thunk_FUN_01de26bc();
  if (lVar6 != 0) {
    FUN_02ae7afc();
    return;
  }
  lVar6 = thunk_FUN_01de26bc();
  if (lVar6 == 0) {
    plVar4 = (long *)thunk_FUN_01de26bc();
    if (plVar4 == (long *)0x0) {
      FUN_033b3618();
    }
    uVar1 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar1) {
      lVar6 = *(long *)(unaff_x21 + 0x18);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar10 = 0;
      pvVar7 = (void *)(lVar6 + 0x30);
      do {
        if (*(uint *)(lVar6 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < *(int *)((long)pvVar7 + -0x10)) {
          uVar8 = *(undefined8 *)((long)pvVar7 + -8);
          memcpy(&stack0x00000068,pvVar7,0x58);
          in_stack_00000108 = 0;
          in_stack_00000100 = 0;
          in_stack_00000118 = 0;
          in_stack_00000110 = 0;
          in_stack_000000e8 = 0;
          in_stack_000000e0 = 0;
          in_stack_000000f8 = 0;
          in_stack_000000f0 = 0;
          in_stack_000000c8 = 0;
          in_stack_000000c0 = 0;
          in_stack_000000d8 = 0;
          in_stack_000000d0 = 0;
          memcpy(&stack0x00000000,&stack0x00000068,0x58);
          FUN_0306d3fc(&stack0x000000c0,uVar8);
          memcpy(&stack0x00000000,&stack0x000000c0,0x60);
          lVar9 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if ((lVar9 != 0) &&
             (lVar5 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
            uVar8 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar8,0);
          }
          if (*(uint *)(plVar4 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          plVar4[(long)(int)unaff_w20 + 4] = lVar9;
          thunk_FUN_01e10808(plVar4 + (long)(int)unaff_w20 + 4,lVar9);
          unaff_w20 = unaff_w20 + 1;
        }
        uVar10 = uVar10 + 1;
        pvVar7 = (void *)((long)pvVar7 + 0x68);
      } while (uVar1 != uVar10);
    }
  }
  else {
    iVar2 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar2) {
      lVar9 = *(long *)(unaff_x21 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar10 = 0;
      pvVar7 = (void *)(lVar9 + 0x30);
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_02ae988c;
        if (-1 < *(int *)((long)pvVar7 + -0x10)) {
          in_stack_00000128 = *(undefined8 *)((long)pvVar7 + -8);
          thunk_FUN_01de23e8(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                             &stack0x00000128);
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_02ae988c:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          memmove(&stack0x000000c0,pvVar7,0x58);
          thunk_FUN_01de23e8(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                             &stack0x000000c0);
          in_stack_00000000 = 0;
          in_stack_00000008 = 0;
          FUN_0336f7b8();
          if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_02ae988c;
          lVar5 = lVar6 + (long)(int)unaff_w20 * 0x10;
          puVar3 = (undefined8 *)(lVar5 + 0x20);
          *(undefined8 *)(lVar5 + 0x28) = in_stack_00000008;
          *puVar3 = in_stack_00000000;
          unaff_w20 = unaff_w20 + 1;
          thunk_FUN_01e10808(puVar3,0);
          iVar2 = *(int *)(unaff_x21 + 0x20);
        }
        uVar10 = uVar10 + 1;
        pvVar7 = (void *)((long)pvVar7 + 0x68);
      } while ((long)uVar10 < (long)iVar2);
    }
  }
  return;
}


