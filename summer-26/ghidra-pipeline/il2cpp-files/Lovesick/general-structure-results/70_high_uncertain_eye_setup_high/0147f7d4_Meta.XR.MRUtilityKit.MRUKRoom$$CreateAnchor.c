/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$CreateAnchor
ENTRY_POINT: 0147f7d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__CreateAnchor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *unaff_x19;
  ulong uVar10;
  long unaff_x20;
  undefined8 *unaff_x21;
  double dVar11;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  lVar6 = thunk_FUN_00d6225c();
  if (lVar6 != 0) {
    if (0xe < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[0x12] = unaff_x20;
      puVar1 = StringLiteral_14046;
      in_stack_00000038 = in_stack_00000018;
      in_stack_00000030 = in_stack_00000010;
      lVar6 = FUN_00da4fc0(*unaff_x21,&stack0x00000030);
      FUN_016a34e8(lVar6,*(undefined8 *)puVar1,0);
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*unaff_x19 + 0x40)), lVar7 == 0))
      goto LAB_0147f9f0;
      if (0xf < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[0x13] = lVar6;
        puVar1 = OVRVirtualKeyboard_WaitUntilKeyboardVisible_TypeInfo;
        in_stack_00000028 = in_stack_00000018;
        in_stack_00000020 = in_stack_00000010;
        lVar6 = FUN_00da4fc0(*unaff_x21,&stack0x00000020);
        FUN_016a34e8(lVar6,*(undefined8 *)puVar1,0);
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*unaff_x19 + 0x40)), lVar7 == 0))
        goto LAB_0147f9f0;
        puVar1 = PTR_DAT_033f4eb0;
        if (0x10 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[0x14] = lVar6;
          **(undefined8 **)(*(long *)puVar1 + 0xb8) = unaff_x19;
          if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
            lVar6 = FUN_00da4fb8(*(undefined8 *)StringLiteral_12507,
                                 *(undefined4 *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18));
            lVar7 = **(long **)(*(long *)puVar1 + 0xb8);
            (*(long **)(*(long *)puVar1 + 0xb8))[2] = lVar6;
            puVar5 = StringLiteral_7980;
            puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
            puVar3 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
            puVar2 = System_Threading_Timer_TimerComparer_TypeInfo;
            if (lVar7 != 0) {
              uVar8 = FUN_00da4fb8(*(undefined8 *)
                                    Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                                   *(undefined4 *)(lVar7 + 0x18));
              *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = uVar8;
              uVar8 = FUN_00da4fb8(*(undefined8 *)puVar4,0x20);
              FUN_016a34e8(uVar8,*(undefined8 *)puVar5,0);
              *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = uVar8;
              uVar9 = FUN_00da4fb8(*(undefined8 *)puVar3,0x200f);
              uVar8 = DAT_0293fa98;
              uVar10 = 0;
              lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
              *(undefined8 *)(lVar6 + 8) = uVar9;
              while( true ) {
                lVar6 = *(long *)(lVar6 + 8);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                dVar11 = (double)thunk_FUN_00d8240c((double)(int)uVar10,uVar8,0);
                if (lVar6 == 0) break;
                if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_0147f9e8;
                *(float *)(lVar6 + uVar10 * 4 + 0x20) = (float)dVar11;
                if (uVar10 == 0x200e) {
                  return;
                }
                uVar10 = uVar10 + 1;
                lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
    }
LAB_0147f9e8:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_0147f9f0:
  uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar8,0);
}


