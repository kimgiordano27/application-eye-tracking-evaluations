/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$GetEnumerator
ENTRY_POINT: 036db470
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__GetEnumerator(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  undefined4 uStack0000000000000024;
  long in_stack_00000048;
  
  thunk_FUN_01656ef8();
  uStack0000000000000024 = *(undefined4 *)(unaff_x21 + 0x14);
  uVar2 = FUN_040f742c(0);
  lVar3 = FUN_03219634(&stack0x00000024,uVar2,0);
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_015d0480(lVar3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0)) {
LAB_036db62c:
    uVar2 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar2,0);
  }
  if (1 < *(uint *)(unaff_x22 + 3)) {
    unaff_x22[5] = lVar3;
    thunk_FUN_01656ef8(unaff_x22 + 5,lVar3);
    uStack0000000000000024 = *(undefined4 *)(unaff_x20 + 0x10);
    uVar2 = FUN_040f742c(0);
    lVar3 = FUN_03219634(&stack0x00000024,uVar2,0);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_015d0480(lVar3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0))
    goto LAB_036db62c;
    if (2 < *(uint *)(unaff_x22 + 3)) {
      unaff_x22[6] = lVar3;
      thunk_FUN_01656ef8(unaff_x22 + 6,lVar3);
      uStack0000000000000024 = *(undefined4 *)(unaff_x20 + 0x14);
      uVar2 = FUN_040f742c(0);
      lVar3 = FUN_03219634(&stack0x00000024,uVar2,0);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_015d0480(lVar3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0))
      goto LAB_036db62c;
      puVar1 = PTR_DAT_06e130d0;
      if (3 < *(uint *)(unaff_x22 + 3)) {
        unaff_x22[7] = lVar3;
        thunk_FUN_01656ef8(unaff_x22 + 7,lVar3);
        uVar2 = FUN_04748adc(*(undefined8 *)puVar1);
        *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
        thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar2);
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00000048) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


