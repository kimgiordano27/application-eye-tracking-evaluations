/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 036dba14
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000008;
  
  lVar2 = (**(code **)(*unaff_x22 + 0x238))();
  if (lVar2 != 0) {
    FUN_036ef950();
    uVar3 = FUN_036dbec0();
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    plVar4 = (long *)FUN_0160edfc(*unaff_x24,5);
    if (((unaff_x21 != 0) && (plVar5 = *(long **)(unaff_x21 + 0xc0), plVar5 != (long *)0x0)) &&
       (lVar2 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170)),
       plVar4 != (long *)0x0)) {
      if ((lVar2 != 0) &&
         (lVar6 = thunk_FUN_015d0480(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_036dbeb4:
        uVar7 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar7,0);
      }
      if ((int)plVar4[3] != 0) {
        plVar4[4] = lVar2;
        thunk_FUN_01656ef8(plVar4 + 4,lVar2);
        in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x10);
        uVar7 = FUN_040f742c(0);
        lVar2 = FUN_03219634((long)&stack0x00000008 + 4,uVar7,0);
        if ((lVar2 != 0) &&
           (lVar6 = thunk_FUN_015d0480(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
        goto LAB_036dbeb4;
        if (1 < *(uint *)(plVar4 + 3)) {
          plVar4[5] = lVar2;
          thunk_FUN_01656ef8(plVar4 + 5,lVar2);
          in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x14);
          uVar7 = FUN_040f742c(0);
          lVar2 = FUN_03219634((long)&stack0x00000008 + 4,uVar7,0);
          if ((lVar2 != 0) &&
             (lVar6 = thunk_FUN_015d0480(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
          goto LAB_036dbeb4;
          if (2 < *(uint *)(plVar4 + 3)) {
            plVar4[6] = lVar2;
            thunk_FUN_01656ef8(plVar4 + 6,lVar2);
            in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x20 + 0x10);
            uVar7 = FUN_040f742c(0);
            lVar2 = FUN_03219634((long)&stack0x00000008 + 4,uVar7,0);
            if ((lVar2 != 0) &&
               (lVar6 = thunk_FUN_015d0480(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
            goto LAB_036dbeb4;
            if (3 < *(uint *)(plVar4 + 3)) {
              plVar4[7] = lVar2;
              thunk_FUN_01656ef8(plVar4 + 7,lVar2);
              in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x20 + 0x14);
              uVar7 = FUN_040f742c(0);
              lVar2 = FUN_03219634((long)&stack0x00000008 + 4,uVar7,0);
              if ((lVar2 != 0) &&
                 (lVar6 = thunk_FUN_015d0480(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
              goto LAB_036dbeb4;
              puVar1 = PTR_DAT_06e24fd8;
              if (4 < *(uint *)(plVar4 + 3)) {
                plVar4[8] = lVar2;
                thunk_FUN_01656ef8(plVar4 + 8,lVar2);
                uVar7 = FUN_04748adc(*(undefined8 *)puVar1,plVar4,0);
                *(undefined8 *)(unaff_x19 + 0x40) = uVar7;
                thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar7);
                return 0;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


