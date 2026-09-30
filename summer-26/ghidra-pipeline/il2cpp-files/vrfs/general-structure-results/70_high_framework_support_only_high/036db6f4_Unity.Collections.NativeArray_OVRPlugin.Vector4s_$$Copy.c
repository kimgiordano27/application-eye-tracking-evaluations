/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 036db6f4
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  uint in_w9;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long *plVar8;
  long unaff_x24;
  undefined8 *puVar9;
  undefined8 in_stack_00000008;
  
  plVar8 = *(long **)(unaff_x23 + 0xc30);
  puVar9 = *(undefined8 **)(unaff_x24 + 0x350);
  if ((in_w9 < (uint)in_x10) || (*(long *)(*(long *)(param_1 + 200) + in_x10 * 8 + -8) != param_2))
  {
    bVar2 = *(byte *)(*(long *)PTR_DAT_06e184b0 + 300);
    if ((in_w9 < bVar2) ||
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06e184b0)) {
      bVar2 = *(byte *)(*(long *)PTR_DAT_06de6fb8 + 300);
      if (in_w9 < bVar2) {
        return 0;
      }
      if (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_06de6fb8)
      {
        return 0;
      }
      plVar3 = (long *)thunk_FUN_015d056c();
      if (plVar3 == (long *)0x0) goto LAB_036dbeac;
      FUN_036efd90(plVar3,0);
      lVar4 = *plVar8;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar4 = *plVar8;
      }
      FUN_03fbbd88(plVar3,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10),
                   *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18),0);
      FUN_03fbbec4(plVar3,*(undefined8 *)(*(long *)(*plVar8 + 0xb8) + 0x10),
                   *(undefined8 *)(*(long *)(*plVar8 + 0xb8) + 0x18),0);
      lVar4 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
      if (lVar4 == 0) goto LAB_036dbeac;
      FUN_036ef950();
      uVar5 = FUN_036dbec0();
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      plVar8 = (long *)FUN_0160edfc(*puVar9,5);
      if (((unaff_x21 == 0) || (plVar3 = *(long **)(unaff_x21 + 0xc0), plVar3 == (long *)0x0)) ||
         (lVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170)),
         plVar8 == (long *)0x0)) goto LAB_036dbeac;
      if ((lVar4 != 0) &&
         (lVar6 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0))
      goto LAB_036dbeb4;
      if ((int)plVar8[3] == 0) goto LAB_036dbeb0;
      plVar8[4] = lVar4;
      thunk_FUN_01656ef8(plVar8 + 4,lVar4);
      in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x10);
      uVar7 = FUN_040f742c(0);
      lVar4 = FUN_03219634((long)&stack0x00000008 + 4,uVar7,0);
      if ((lVar4 != 0) &&
         (lVar6 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0))
      goto LAB_036dbeb4;
      if (*(uint *)(plVar8 + 3) < 2) goto LAB_036dbeb0;
      plVar8[5] = lVar4;
      thunk_FUN_01656ef8(plVar8 + 5,lVar4);
      in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x14);
      uVar7 = FUN_040f742c(0);
      lVar4 = FUN_03219634((long)&stack0x00000008 + 4,uVar7,0);
      if ((lVar4 != 0) &&
         (lVar6 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0))
      goto LAB_036dbeb4;
      if (*(uint *)(plVar8 + 3) < 3) goto LAB_036dbeb0;
      plVar8[6] = lVar4;
      thunk_FUN_01656ef8(plVar8 + 6,lVar4);
      in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x20 + 0x10);
      uVar7 = FUN_040f742c(0);
      lVar4 = FUN_03219634((long)&stack0x00000008 + 4,uVar7,0);
      if ((lVar4 != 0) &&
         (lVar6 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0))
      goto LAB_036dbeb4;
      if (*(uint *)(plVar8 + 3) < 4) goto LAB_036dbeb0;
      plVar8[7] = lVar4;
      thunk_FUN_01656ef8(plVar8 + 7,lVar4);
      in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x20 + 0x14);
      uVar7 = FUN_040f742c(0);
      lVar4 = FUN_03219634((long)&stack0x00000008 + 4,uVar7,0);
      if ((lVar4 != 0) &&
         (lVar6 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0))
      goto LAB_036dbeb4;
      uVar1 = *(uint *)(plVar8 + 3);
      puVar9 = (undefined8 *)PTR_DAT_06de6d00;
    }
    else {
      plVar3 = (long *)thunk_FUN_015d056c();
      if (plVar3 == (long *)0x0) goto LAB_036dbeac;
      FUN_036f1538(plVar3,0);
      lVar4 = *plVar8;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar4 = *plVar8;
      }
      FUN_03fbbd88(plVar3,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10),
                   *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18),0);
      FUN_03fbbec4(plVar3,*(undefined8 *)(*(long *)(*plVar8 + 0xb8) + 0x10),
                   *(undefined8 *)(*(long *)(*plVar8 + 0xb8) + 0x18),0);
      lVar4 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
      if (lVar4 == 0) goto LAB_036dbeac;
      FUN_036ef950();
      uVar5 = FUN_036dbec0();
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      plVar8 = (long *)FUN_0160edfc(*puVar9,5);
      if (((unaff_x21 == 0) || (plVar3 = *(long **)(unaff_x21 + 0xc0), plVar3 == (long *)0x0)) ||
         (lVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170)),
         plVar8 == (long *)0x0)) goto LAB_036dbeac;
      if ((lVar4 != 0) &&
         (lVar6 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0))
      goto LAB_036dbeb4;
      if ((int)plVar8[3] == 0) goto LAB_036dbeb0;
      plVar8[4] = lVar4;
      thunk_FUN_01656ef8(plVar8 + 4,lVar4);
      in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x10);
      uVar7 = FUN_040f742c(0);
      lVar4 = FUN_03219634((long)&stack0x00000008 + 4,uVar7,0);
      if ((lVar4 != 0) &&
         (lVar6 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0))
      goto LAB_036dbeb4;
      if (*(uint *)(plVar8 + 3) < 2) goto LAB_036dbeb0;
      plVar8[5] = lVar4;
      thunk_FUN_01656ef8(plVar8 + 5,lVar4);
      in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x14);
      uVar7 = FUN_040f742c(0);
      lVar4 = FUN_03219634((long)&stack0x00000008 + 4,uVar7,0);
      if ((lVar4 != 0) &&
         (lVar6 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0))
      goto LAB_036dbeb4;
      if (*(uint *)(plVar8 + 3) < 3) goto LAB_036dbeb0;
      plVar8[6] = lVar4;
      thunk_FUN_01656ef8(plVar8 + 6,lVar4);
      in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x20 + 0x10);
      uVar7 = FUN_040f742c(0);
      lVar4 = FUN_03219634((long)&stack0x00000008 + 4,uVar7,0);
      if ((lVar4 != 0) &&
         (lVar6 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0))
      goto LAB_036dbeb4;
      if (*(uint *)(plVar8 + 3) < 4) goto LAB_036dbeb0;
      plVar8[7] = lVar4;
      thunk_FUN_01656ef8(plVar8 + 7,lVar4);
      in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x20 + 0x14);
      uVar7 = FUN_040f742c(0);
      lVar4 = FUN_03219634((long)&stack0x00000008 + 4,uVar7,0);
      if ((lVar4 != 0) &&
         (lVar6 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0))
      goto LAB_036dbeb4;
      uVar1 = *(uint *)(plVar8 + 3);
      puVar9 = (undefined8 *)PTR_DAT_06d9ef00;
    }
  }
  else {
    plVar3 = (long *)thunk_FUN_015d056c();
    if (plVar3 == (long *)0x0) {
LAB_036dbeac:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_03fbc544(plVar3,0);
    lVar4 = *plVar8;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar4 = *plVar8;
    }
    FUN_03fbbd88(plVar3,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10),
                 *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18),0);
    FUN_03fbbec4(plVar3,*(undefined8 *)(*(long *)(*plVar8 + 0xb8) + 0x10),
                 *(undefined8 *)(*(long *)(*plVar8 + 0xb8) + 0x18),0);
    lVar4 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
    if (lVar4 == 0) goto LAB_036dbeac;
    FUN_036ef950();
    uVar5 = FUN_036dbec0();
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    plVar8 = (long *)FUN_0160edfc(*puVar9,5);
    if (((unaff_x21 == 0) || (plVar3 = *(long **)(unaff_x21 + 0xc0), plVar3 == (long *)0x0)) ||
       (lVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170)),
       plVar8 == (long *)0x0)) goto LAB_036dbeac;
    if ((lVar4 != 0) &&
       (lVar6 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0)) {
LAB_036dbeb4:
      uVar7 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar7,0);
    }
    if ((int)plVar8[3] == 0) goto LAB_036dbeb0;
    plVar8[4] = lVar4;
    thunk_FUN_01656ef8(plVar8 + 4,lVar4);
    in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x10);
    uVar7 = FUN_040f742c(0);
    lVar4 = FUN_03219634((long)&stack0x00000008 + 4,uVar7,0);
    if ((lVar4 != 0) &&
       (lVar6 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0))
    goto LAB_036dbeb4;
    if (*(uint *)(plVar8 + 3) < 2) goto LAB_036dbeb0;
    plVar8[5] = lVar4;
    thunk_FUN_01656ef8(plVar8 + 5,lVar4);
    in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x14);
    uVar7 = FUN_040f742c(0);
    lVar4 = FUN_03219634((long)&stack0x00000008 + 4,uVar7,0);
    if ((lVar4 != 0) &&
       (lVar6 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0))
    goto LAB_036dbeb4;
    if (*(uint *)(plVar8 + 3) < 3) goto LAB_036dbeb0;
    plVar8[6] = lVar4;
    thunk_FUN_01656ef8(plVar8 + 6,lVar4);
    in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x20 + 0x10);
    uVar7 = FUN_040f742c(0);
    lVar4 = FUN_03219634((long)&stack0x00000008 + 4,uVar7,0);
    if ((lVar4 != 0) &&
       (lVar6 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0))
    goto LAB_036dbeb4;
    if (*(uint *)(plVar8 + 3) < 4) goto LAB_036dbeb0;
    plVar8[7] = lVar4;
    thunk_FUN_01656ef8(plVar8 + 7,lVar4);
    in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x20 + 0x14);
    uVar7 = FUN_040f742c(0);
    lVar4 = FUN_03219634((long)&stack0x00000008 + 4,uVar7,0);
    if ((lVar4 != 0) &&
       (lVar6 = thunk_FUN_015d0480(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0))
    goto LAB_036dbeb4;
    uVar1 = *(uint *)(plVar8 + 3);
    puVar9 = (undefined8 *)PTR_DAT_06e24fd8;
  }
  if (4 < uVar1) {
    plVar8[8] = lVar4;
    thunk_FUN_01656ef8(plVar8 + 8,lVar4);
    uVar7 = FUN_04748adc(*puVar9,plVar8,0);
    *(undefined8 *)(unaff_x19 + 0x40) = uVar7;
    thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar7);
    return 0;
  }
LAB_036dbeb0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


