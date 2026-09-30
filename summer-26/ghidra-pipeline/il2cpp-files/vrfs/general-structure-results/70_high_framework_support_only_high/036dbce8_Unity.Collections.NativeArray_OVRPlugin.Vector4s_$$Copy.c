/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 036dbce8
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  
  lVar2 = thunk_FUN_015d0480();
  if (lVar2 != 0) {
    if ((int)unaff_x22[3] != 0) {
      unaff_x22[4] = unaff_x23;
      thunk_FUN_01656ef8();
      in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x10);
      uVar3 = FUN_040f742c(0);
      lVar2 = FUN_03219634((long)&stack0x00000008 + 4,uVar3,0);
      if ((lVar2 != 0) &&
         (lVar4 = thunk_FUN_015d0480(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0))
      goto LAB_036dbeb4;
      if (1 < *(uint *)(unaff_x22 + 3)) {
        unaff_x22[5] = lVar2;
        thunk_FUN_01656ef8(unaff_x22 + 5,lVar2);
        in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x14);
        uVar3 = FUN_040f742c(0);
        lVar2 = FUN_03219634((long)&stack0x00000008 + 4,uVar3,0);
        if ((lVar2 != 0) &&
           (lVar4 = thunk_FUN_015d0480(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0))
        goto LAB_036dbeb4;
        if (2 < *(uint *)(unaff_x22 + 3)) {
          unaff_x22[6] = lVar2;
          thunk_FUN_01656ef8(unaff_x22 + 6,lVar2);
          in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x20 + 0x10);
          uVar3 = FUN_040f742c(0);
          lVar2 = FUN_03219634((long)&stack0x00000008 + 4,uVar3,0);
          if ((lVar2 != 0) &&
             (lVar4 = thunk_FUN_015d0480(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0))
          goto LAB_036dbeb4;
          if (3 < *(uint *)(unaff_x22 + 3)) {
            unaff_x22[7] = lVar2;
            thunk_FUN_01656ef8(unaff_x22 + 7,lVar2);
            in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x20 + 0x14);
            uVar3 = FUN_040f742c(0);
            lVar2 = FUN_03219634((long)&stack0x00000008 + 4,uVar3,0);
            if ((lVar2 != 0) &&
               (lVar4 = thunk_FUN_015d0480(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0))
            goto LAB_036dbeb4;
            puVar1 = PTR_DAT_06d9ef00;
            if (4 < *(uint *)(unaff_x22 + 3)) {
              unaff_x22[8] = lVar2;
              thunk_FUN_01656ef8(unaff_x22 + 8,lVar2);
              uVar3 = FUN_04748adc(*(undefined8 *)puVar1);
              *(undefined8 *)(unaff_x19 + 0x40) = uVar3;
              thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar3);
              return 0;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0160eebc();
  }
LAB_036dbeb4:
  uVar3 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(uVar3,0);
}


