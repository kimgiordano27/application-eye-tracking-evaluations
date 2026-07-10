/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03ab72bc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long in_stack_000000d8;
  undefined8 in_stack_000000e8;
  
  uStack0000000000000048 = in_stack_000000b0;
  uStack0000000000000040 = in_stack_000000a8;
  uStack0000000000000058 = in_stack_000000c0;
  uStack0000000000000050 = in_stack_000000b8;
  uStack0000000000000030 = param_1;
  FUN_03adc814();
  uVar9 = *(undefined8 *)(unaff_x19 + 0x70);
  uVar4 = FUN_075a7484();
  if (*(int *)(*(long *)PTR_DAT_07d88a88 + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)PTR_DAT_07d88a88);
  }
  FUN_03aa7568(uVar9,uVar4);
  lVar7 = *(long *)(unaff_x19 + 0x50);
  if (lVar7 != 0) {
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        lVar6 = *(long *)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_03ab74c8;
        FUN_03add318(*(undefined4 *)(lVar6 + 0x18));
        uVar1 = *(uint *)(lVar7 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
    puVar3 = PTR_DAT_07d95300;
    puVar2 = PTR_DAT_07d952f8;
    if (*(long *)(unaff_x19 + 0x80) != 0) {
      FUN_049cf910(&stack0x000000c8,*(long *)(unaff_x19 + 0x80),*(undefined8 *)PTR_DAT_07d95310);
      while( true ) {
        uVar5 = FUN_05d64e98(&stack0x000000c8,*(undefined8 *)puVar3);
        if ((uVar5 & 1) == 0) {
          FUN_05d64e94(&stack0x000000c8,*(undefined8 *)puVar2);
          if ((in_stack_000000e8._4_1_ != '\0') && (*(char *)(unaff_x19 + 0x58) != '\0')) {
            FUN_03adca54(*(undefined4 *)(unaff_x19 + 0x5c));
            FUN_03adca54(*(undefined4 *)(unaff_x19 + 0x60));
          }
          FUN_03adcd58();
          *(undefined1 *)(unaff_x19 + 0x78) = 1;
          return;
        }
        if (in_stack_000000d8 == 0) break;
        FUN_03add318(*(undefined4 *)(in_stack_000000d8 + 0x18));
      }
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
  }
LAB_03ab74c8:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


