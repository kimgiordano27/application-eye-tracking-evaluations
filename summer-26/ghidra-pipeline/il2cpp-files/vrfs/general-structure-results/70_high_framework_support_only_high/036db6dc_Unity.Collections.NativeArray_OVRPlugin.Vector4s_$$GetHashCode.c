/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$GetHashCode
ENTRY_POINT: 036db6dc
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


undefined4 Unity_Collections_NativeArray<OVRPlugin_Vector4s>__GetHashCode(void)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *in_x9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  puVar6 = PTR_DAT_06e57350;
  puVar5 = PTR_DAT_06d98c30;
  lVar12 = *unaff_x20;
  bVar2 = *(byte *)(lVar12 + 300);
  bVar3 = *(byte *)(*in_x9 + 300);
  if ((bVar2 < bVar3) || (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar3 * 8 + -8) != *in_x9)) {
    bVar3 = *(byte *)(*(long *)PTR_DAT_06e184b0 + 300);
    if ((bVar2 < bVar3) ||
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_06e184b0)) {
      bVar3 = *(byte *)(*(long *)PTR_DAT_06de6fb8 + 300);
      if (bVar2 < bVar3) {
        return 0;
      }
      if (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_06de6fb8) {
        return 0;
      }
      plVar7 = (long *)thunk_FUN_015d056c();
      if (plVar7 == (long *)0x0) goto LAB_036dbeac;
      FUN_036efd90(plVar7,0);
      lVar12 = *(long *)puVar5;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar12 = *(long *)puVar5;
      }
      FUN_03fbbd88(plVar7,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10),
                   *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18),0);
      FUN_03fbbec4(plVar7,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10),
                   *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),0);
      lVar12 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
      if (lVar12 == 0) goto LAB_036dbeac;
      FUN_036ef950();
      uVar8 = FUN_036dbec0();
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      plVar7 = (long *)FUN_0160edfc(*(undefined8 *)puVar6,5);
      if (((unaff_x21 == 0) || (plVar9 = *(long **)(unaff_x21 + 0xc0), plVar9 == (long *)0x0)) ||
         (lVar12 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170)),
         plVar7 == (long *)0x0)) goto LAB_036dbeac;
      if ((lVar12 != 0) &&
         (lVar10 = thunk_FUN_015d0480(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
      goto LAB_036dbeb4;
      if ((int)plVar7[3] == 0) goto LAB_036dbeb0;
      plVar7[4] = lVar12;
      thunk_FUN_01656ef8(plVar7 + 4,lVar12);
      in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x10);
      uVar11 = FUN_040f742c(0);
      lVar12 = FUN_03219634((long)&stack0x00000008 + 4,uVar11,0);
      if ((lVar12 != 0) &&
         (lVar10 = thunk_FUN_015d0480(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
      goto LAB_036dbeb4;
      if (*(uint *)(plVar7 + 3) < 2) goto LAB_036dbeb0;
      plVar7[5] = lVar12;
      thunk_FUN_01656ef8(plVar7 + 5,lVar12);
      in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x14);
      uVar11 = FUN_040f742c(0);
      lVar12 = FUN_03219634((long)&stack0x00000008 + 4,uVar11,0);
      if ((lVar12 != 0) &&
         (lVar10 = thunk_FUN_015d0480(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
      goto LAB_036dbeb4;
      if (*(uint *)(plVar7 + 3) < 3) goto LAB_036dbeb0;
      plVar7[6] = lVar12;
      thunk_FUN_01656ef8(plVar7 + 6,lVar12);
      in_stack_00000008._4_4_ = (undefined4)unaff_x20[2];
      uVar11 = FUN_040f742c(0);
      lVar12 = FUN_03219634((long)&stack0x00000008 + 4,uVar11,0);
      if ((lVar12 != 0) &&
         (lVar10 = thunk_FUN_015d0480(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
      goto LAB_036dbeb4;
      if (*(uint *)(plVar7 + 3) < 4) goto LAB_036dbeb0;
      plVar7[7] = lVar12;
      thunk_FUN_01656ef8(plVar7 + 7,lVar12);
      in_stack_00000008._4_4_ = *(undefined4 *)((long)unaff_x20 + 0x14);
      uVar11 = FUN_040f742c(0);
      lVar12 = FUN_03219634((long)&stack0x00000008 + 4,uVar11,0);
      if ((lVar12 != 0) &&
         (lVar10 = thunk_FUN_015d0480(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
      goto LAB_036dbeb4;
      uVar1 = *(uint *)(plVar7 + 3);
      puVar4 = (undefined8 *)PTR_DAT_06de6d00;
    }
    else {
      plVar7 = (long *)thunk_FUN_015d056c();
      if (plVar7 == (long *)0x0) goto LAB_036dbeac;
      FUN_036f1538(plVar7,0);
      lVar12 = *(long *)puVar5;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar12 = *(long *)puVar5;
      }
      FUN_03fbbd88(plVar7,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10),
                   *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18),0);
      FUN_03fbbec4(plVar7,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10),
                   *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),0);
      lVar12 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
      if (lVar12 == 0) goto LAB_036dbeac;
      FUN_036ef950();
      uVar8 = FUN_036dbec0();
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      plVar7 = (long *)FUN_0160edfc(*(undefined8 *)puVar6,5);
      if (((unaff_x21 == 0) || (plVar9 = *(long **)(unaff_x21 + 0xc0), plVar9 == (long *)0x0)) ||
         (lVar12 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170)),
         plVar7 == (long *)0x0)) goto LAB_036dbeac;
      if ((lVar12 != 0) &&
         (lVar10 = thunk_FUN_015d0480(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
      goto LAB_036dbeb4;
      if ((int)plVar7[3] == 0) goto LAB_036dbeb0;
      plVar7[4] = lVar12;
      thunk_FUN_01656ef8(plVar7 + 4,lVar12);
      in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x10);
      uVar11 = FUN_040f742c(0);
      lVar12 = FUN_03219634((long)&stack0x00000008 + 4,uVar11,0);
      if ((lVar12 != 0) &&
         (lVar10 = thunk_FUN_015d0480(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
      goto LAB_036dbeb4;
      if (*(uint *)(plVar7 + 3) < 2) goto LAB_036dbeb0;
      plVar7[5] = lVar12;
      thunk_FUN_01656ef8(plVar7 + 5,lVar12);
      in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x14);
      uVar11 = FUN_040f742c(0);
      lVar12 = FUN_03219634((long)&stack0x00000008 + 4,uVar11,0);
      if ((lVar12 != 0) &&
         (lVar10 = thunk_FUN_015d0480(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
      goto LAB_036dbeb4;
      if (*(uint *)(plVar7 + 3) < 3) goto LAB_036dbeb0;
      plVar7[6] = lVar12;
      thunk_FUN_01656ef8(plVar7 + 6,lVar12);
      in_stack_00000008._4_4_ = (undefined4)unaff_x20[2];
      uVar11 = FUN_040f742c(0);
      lVar12 = FUN_03219634((long)&stack0x00000008 + 4,uVar11,0);
      if ((lVar12 != 0) &&
         (lVar10 = thunk_FUN_015d0480(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
      goto LAB_036dbeb4;
      if (*(uint *)(plVar7 + 3) < 4) goto LAB_036dbeb0;
      plVar7[7] = lVar12;
      thunk_FUN_01656ef8(plVar7 + 7,lVar12);
      in_stack_00000008._4_4_ = *(undefined4 *)((long)unaff_x20 + 0x14);
      uVar11 = FUN_040f742c(0);
      lVar12 = FUN_03219634((long)&stack0x00000008 + 4,uVar11,0);
      if ((lVar12 != 0) &&
         (lVar10 = thunk_FUN_015d0480(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
      goto LAB_036dbeb4;
      uVar1 = *(uint *)(plVar7 + 3);
      puVar4 = (undefined8 *)PTR_DAT_06d9ef00;
    }
  }
  else {
    plVar7 = (long *)thunk_FUN_015d056c();
    if (plVar7 == (long *)0x0) {
LAB_036dbeac:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_03fbc544(plVar7,0);
    lVar12 = *(long *)puVar5;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar12 = *(long *)puVar5;
    }
    FUN_03fbbd88(plVar7,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10),
                 *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18),0);
    FUN_03fbbec4(plVar7,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10),
                 *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),0);
    lVar12 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
    if (lVar12 == 0) goto LAB_036dbeac;
    FUN_036ef950();
    uVar8 = FUN_036dbec0();
    if ((uVar8 & 1) != 0) {
      return 1;
    }
    plVar7 = (long *)FUN_0160edfc(*(undefined8 *)puVar6,5);
    if (((unaff_x21 == 0) || (plVar9 = *(long **)(unaff_x21 + 0xc0), plVar9 == (long *)0x0)) ||
       (lVar12 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170)),
       plVar7 == (long *)0x0)) goto LAB_036dbeac;
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_015d0480(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)) {
LAB_036dbeb4:
      uVar11 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar11,0);
    }
    if ((int)plVar7[3] == 0) goto LAB_036dbeb0;
    plVar7[4] = lVar12;
    thunk_FUN_01656ef8(plVar7 + 4,lVar12);
    in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x10);
    uVar11 = FUN_040f742c(0);
    lVar12 = FUN_03219634((long)&stack0x00000008 + 4,uVar11,0);
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_015d0480(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
    goto LAB_036dbeb4;
    if (*(uint *)(plVar7 + 3) < 2) goto LAB_036dbeb0;
    plVar7[5] = lVar12;
    thunk_FUN_01656ef8(plVar7 + 5,lVar12);
    in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x21 + 0x14);
    uVar11 = FUN_040f742c(0);
    lVar12 = FUN_03219634((long)&stack0x00000008 + 4,uVar11,0);
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_015d0480(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
    goto LAB_036dbeb4;
    if (*(uint *)(plVar7 + 3) < 3) goto LAB_036dbeb0;
    plVar7[6] = lVar12;
    thunk_FUN_01656ef8(plVar7 + 6,lVar12);
    in_stack_00000008._4_4_ = (undefined4)unaff_x20[2];
    uVar11 = FUN_040f742c(0);
    lVar12 = FUN_03219634((long)&stack0x00000008 + 4,uVar11,0);
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_015d0480(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
    goto LAB_036dbeb4;
    if (*(uint *)(plVar7 + 3) < 4) goto LAB_036dbeb0;
    plVar7[7] = lVar12;
    thunk_FUN_01656ef8(plVar7 + 7,lVar12);
    in_stack_00000008._4_4_ = *(undefined4 *)((long)unaff_x20 + 0x14);
    uVar11 = FUN_040f742c(0);
    lVar12 = FUN_03219634((long)&stack0x00000008 + 4,uVar11,0);
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_015d0480(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
    goto LAB_036dbeb4;
    uVar1 = *(uint *)(plVar7 + 3);
    puVar4 = (undefined8 *)PTR_DAT_06e24fd8;
  }
  if (4 < uVar1) {
    plVar7[8] = lVar12;
    thunk_FUN_01656ef8(plVar7 + 8,lVar12);
    uVar11 = FUN_04748adc(*puVar4,plVar7,0);
    *(undefined8 *)(unaff_x19 + 0x40) = uVar11;
    thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar11);
    return 0;
  }
LAB_036dbeb0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


