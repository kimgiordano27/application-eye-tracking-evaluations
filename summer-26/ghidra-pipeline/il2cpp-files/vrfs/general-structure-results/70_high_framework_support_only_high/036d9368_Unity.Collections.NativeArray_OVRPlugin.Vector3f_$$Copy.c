/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 036d9368
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(long param_1,uint param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  long in_x11;
  uint in_w12;
  undefined4 in_register_00004064;
  long in_x17;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  if ((param_2 < (uint)in_x9) || (*(long *)(*(long *)(in_x17 + 200) + in_x9 * 8 + -8) != param_1)) {
    bVar1 = *(byte *)(*unaff_x24 + 300);
    if ((param_2 < bVar1) ||
       (*(long *)(*(long *)(in_x17 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
      if (param_2 < in_w12) {
        return 0;
      }
      if (*(long *)(*(long *)(in_x17 + 200) + CONCAT44(in_register_00004064,in_w12) * 8 + -8) !=
          in_x11) {
        return 0;
      }
    }
    uVar3 = FUN_0474aec4(*(undefined8 *)PTR_DAT_06e0ef90,0);
LAB_036d9454:
    *(undefined8 *)(unaff_x19 + 0x40) = uVar3;
    thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar3);
    return 0;
  }
  uVar4 = FUN_036dc1b0();
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  plVar5 = (long *)FUN_0160edfc(*unaff_x23,4);
  in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x10);
  uVar3 = FUN_040f742c(0);
  lVar6 = FUN_03219634((long)&stack0x00000008 + 4,uVar3,0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_015d0480(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_036d98e8:
    uVar3 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar3,0);
  }
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar6;
    thunk_FUN_01656ef8(plVar5 + 4,lVar6);
    in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x14);
    uVar3 = FUN_040f742c(0);
    lVar6 = FUN_03219634((long)&stack0x00000008 + 4,uVar3,0);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_015d0480(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_036d98e8;
    if (1 < *(uint *)(plVar5 + 3)) {
      plVar5[5] = lVar6;
      thunk_FUN_01656ef8(plVar5 + 5,lVar6);
      in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x20 + 0x10);
      uVar3 = FUN_040f742c(0);
      lVar6 = FUN_03219634((long)&stack0x00000008 + 4,uVar3,0);
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_015d0480(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
      goto LAB_036d98e8;
      if (2 < *(uint *)(plVar5 + 3)) {
        plVar5[6] = lVar6;
        thunk_FUN_01656ef8(plVar5 + 6,lVar6);
        in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x20 + 0x14);
        uVar3 = FUN_040f742c(0);
        lVar6 = FUN_03219634((long)&stack0x00000008 + 4,uVar3,0);
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_015d0480(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
        goto LAB_036d98e8;
        puVar2 = PTR_DAT_06dbe528;
        if (3 < *(uint *)(plVar5 + 3)) {
          plVar5[7] = lVar6;
          thunk_FUN_01656ef8(plVar5 + 7,lVar6);
          uVar3 = FUN_04748adc(*(undefined8 *)puVar2,plVar5,0);
          goto LAB_036d9454;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


