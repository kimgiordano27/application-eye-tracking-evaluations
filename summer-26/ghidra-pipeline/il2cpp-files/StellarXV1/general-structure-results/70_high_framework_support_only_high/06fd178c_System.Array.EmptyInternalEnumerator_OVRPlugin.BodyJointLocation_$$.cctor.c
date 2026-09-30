/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BodyJointLocation>$$.cctor
ENTRY_POINT: 06fd178c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>___cctor
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  plVar2 = (long *)thunk_FUN_040b4e00(param_2,**(undefined8 **)(param_1 + 0x40));
  if (plVar2 == (long *)0x0) {
    FUN_0769b160();
  }
  uVar1 = *(uint *)(unaff_x21 + 0x20);
  if (0 < (int)uVar1) {
    lVar6 = *(long *)(unaff_x21 + 0x18);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar7 = 0;
    puVar8 = (undefined8 *)(lVar6 + 0x30);
    do {
      if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      if (-1 < *(int *)(puVar8 + -2)) {
        in_stack_00000010 = 0;
        in_stack_00000018 = 0;
        FUN_059fcee4(&stack0x00000010,*(undefined4 *)(puVar8 + -1),*puVar8,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x150));
        lVar3 = thunk_FUN_040b4b34(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
          uVar5 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar5,0);
        }
        if (*(uint *)(plVar2 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        plVar2[(long)(int)unaff_w20 + 4] = lVar3;
        thunk_FUN_040ec700(plVar2 + (long)(int)unaff_w20 + 4,lVar3);
        unaff_w20 = unaff_w20 + 1;
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 3;
    } while (uVar1 != uVar7);
  }
  return;
}


