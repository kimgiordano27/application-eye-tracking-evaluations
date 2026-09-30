/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 036d9408
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long in_x11;
  long in_x12;
  uint in_w13;
  long *in_x15;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000008;
  
  if (param_1 == in_x11) {
    if ((*(long *)(unaff_x20 + 0x28) == 0) || (*(long *)(unaff_x21 + 0x28) == 0)) {
      uVar3 = FUN_036dc4b0();
      goto LAB_036d971c;
    }
    uVar5 = FUN_036dbec0();
    if ((uVar5 & 1) != 0) goto LAB_036d9718;
  }
  else {
    bVar1 = *(byte *)(*in_x15 + 300);
    if ((in_w13 < bVar1) || (*(long *)(*(long *)(in_x12 + 200) + (ulong)bVar1 * 8 + -8) != *in_x15))
    {
      uVar4 = FUN_0474aec4(*(undefined8 *)PTR_DAT_06d91848,0);
    }
    else {
      uVar5 = FUN_036dc63c();
      if ((uVar5 & 1) != 0) {
LAB_036d9718:
        uVar3 = 1;
        goto LAB_036d971c;
      }
      plVar6 = (long *)FUN_0160edfc(*unaff_x23,4);
      in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x10);
      uVar4 = FUN_040f742c(0);
      lVar7 = FUN_03219634((long)&stack0x00000008 + 4,uVar4,0);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_036d98e8:
        uVar4 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar4,0);
      }
      if ((int)plVar6[3] == 0) {
LAB_036d98e4:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      plVar6[4] = lVar7;
      thunk_FUN_01656ef8(plVar6 + 4,lVar7);
      in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x14);
      uVar4 = FUN_040f742c(0);
      lVar7 = FUN_03219634((long)&stack0x00000008 + 4,uVar4,0);
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_036d98e8;
      if (*(uint *)(plVar6 + 3) < 2) goto LAB_036d98e4;
      plVar6[5] = lVar7;
      thunk_FUN_01656ef8(plVar6 + 5,lVar7);
      in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x20 + 0x10);
      uVar4 = FUN_040f742c(0);
      lVar7 = FUN_03219634((long)&stack0x00000008 + 4,uVar4,0);
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_036d98e8;
      if (*(uint *)(plVar6 + 3) < 3) goto LAB_036d98e4;
      plVar6[6] = lVar7;
      thunk_FUN_01656ef8(plVar6 + 6,lVar7);
      in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x20 + 0x14);
      uVar4 = FUN_040f742c(0);
      lVar7 = FUN_03219634((long)&stack0x00000008 + 4,uVar4,0);
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_036d98e8;
      puVar2 = PTR_DAT_06e3d250;
      if (*(uint *)(plVar6 + 3) < 4) goto LAB_036d98e4;
      plVar6[7] = lVar7;
      thunk_FUN_01656ef8(plVar6 + 7,lVar7);
      uVar4 = FUN_04748adc(*(undefined8 *)puVar2,plVar6,0);
    }
    *(undefined8 *)(unaff_x19 + 0x40) = uVar4;
    thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar4);
  }
  uVar3 = 0;
LAB_036d971c:
  return uVar3 & 1;
}


