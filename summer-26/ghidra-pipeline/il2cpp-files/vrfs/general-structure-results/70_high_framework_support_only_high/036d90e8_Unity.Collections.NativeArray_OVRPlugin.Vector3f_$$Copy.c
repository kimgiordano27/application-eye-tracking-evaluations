/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 036d90e8
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint in_w9;
  uint in_w10;
  long lVar10;
  long lVar11;
  long in_x13;
  long in_x14;
  long *in_x15;
  long in_x17;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  lVar10 = *unaff_x24;
  bVar1 = *(byte *)(lVar10 + 300);
  if (in_w9 < bVar1) {
LAB_036d910c:
    lVar10 = *in_x15;
    bVar1 = *(byte *)(lVar10 + 300);
    if (bVar1 <= in_w9) {
      if (*(long *)(*(long *)(in_x17 + 200) + ((ulong)bVar1 - 1) * 8) == lVar10) {
        puVar9 = (undefined8 *)PTR_DAT_06dd6028;
        if (unaff_x21 != (long *)0x0) {
          lVar11 = *unaff_x21;
          bVar2 = *(byte *)(lVar11 + 300);
          if ((in_w10 <= bVar2) &&
             (*(long *)(*(long *)(lVar11 + 200) + (ulong)in_w10 * 8 + -8) == param_1)) {
            lVar10 = *unaff_x22;
            if (in_w9 < *(byte *)(lVar10 + 300)) goto LAB_036d98dc;
            lVar11 = *(long *)(in_x17 + 200) + (ulong)*(byte *)(lVar10 + 300) * 8;
            goto LAB_036d9538;
          }
          if (((uint)bVar1 <= (uint)bVar2) &&
             (*(long *)(*(long *)(lVar11 + 200) + ((ulong)bVar1 - 1) * 8) == lVar10)) {
LAB_036d91d8:
            lVar10 = *unaff_x22;
            bVar1 = *(byte *)(lVar10 + 300);
            if ((bVar2 < bVar1) ||
               (*(long *)(*(long *)(lVar11 + 200) + ((ulong)bVar1 - 1) * 8) != lVar10)) {
LAB_036d98d4:
                    /* WARNING: Subroutine does not return */
              FUN_0160f170();
            }
            if ((*(byte *)(*unaff_x20 + 300) < bVar1) ||
               (*(long *)(*(long *)(*unaff_x20 + 200) + ((ulong)bVar1 - 1) * 8) != lVar10)) {
LAB_036d98dc:
                    /* WARNING: Subroutine does not return */
              FUN_0160f170();
            }
            uVar5 = 1;
            uVar7 = FUN_036dbec0();
            if ((uVar7 & 1) != 0) goto LAB_036d971c;
            goto LAB_036d9464;
          }
          if (((uint)in_x14 <= (uint)bVar2) &&
             (*(long *)(*(long *)(lVar11 + 200) + in_x14 * 8 + -8) == in_x13)) {
            bVar1 = *(byte *)(*unaff_x22 + 300);
            if (((uint)bVar2 < (uint)bVar1) ||
               (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22))
            goto LAB_036d98d4;
            lVar10 = (**(code **)(lVar11 + 0x238))();
            if (lVar10 == 0) {
LAB_036d98f4:
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            iVar4 = FUN_03f054bc(lVar10,0);
            puVar9 = (undefined8 *)PTR_DAT_06dd6028;
            if (iVar4 == 1) {
              lVar11 = *unaff_x21;
              bVar2 = *(byte *)(lVar11 + 300);
              goto LAB_036d91d8;
            }
          }
        }
LAB_036d9448:
        uVar6 = FUN_0474aec4(*puVar9,0);
        goto LAB_036d9454;
      }
    }
  }
  else {
    if (*(long *)(*(long *)(in_x17 + 200) + ((ulong)bVar1 - 1) * 8) != lVar10) goto LAB_036d910c;
    puVar9 = (undefined8 *)PTR_DAT_06d91848;
    if (unaff_x21 == (long *)0x0) goto LAB_036d9448;
    lVar11 = *unaff_x21;
    bVar2 = *(byte *)(lVar11 + 300);
    if ((in_w10 <= bVar2) &&
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)in_w10 * 8 + -8) == param_1)) {
      lVar10 = *unaff_x22;
      if (in_w9 < *(byte *)(lVar10 + 300)) goto LAB_036d98dc;
      lVar11 = *(long *)(in_x17 + 200) + (ulong)*(byte *)(lVar10 + 300) * 8;
LAB_036d9538:
      if (*(long *)(lVar11 + -8) != lVar10) goto LAB_036d98dc;
      uVar5 = FUN_036db63c();
      goto LAB_036d971c;
    }
    if (((uint)bVar1 <= (uint)bVar2) &&
       (*(long *)(*(long *)(lVar11 + 200) + ((ulong)bVar1 - 1) * 8) == lVar10)) {
      if ((unaff_x20[5] == 0) || (unaff_x21[5] == 0)) {
        uVar5 = FUN_036dc4b0();
        goto LAB_036d971c;
      }
      uVar7 = FUN_036dbec0();
      if ((uVar7 & 1) != 0) {
LAB_036d9718:
        uVar5 = 1;
        goto LAB_036d971c;
      }
      goto LAB_036d9464;
    }
    bVar1 = *(byte *)(*in_x15 + 300);
    if ((bVar2 < bVar1) || (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) != *in_x15))
    goto LAB_036d9448;
    uVar7 = FUN_036dc63c();
    if ((uVar7 & 1) != 0) goto LAB_036d9718;
    plVar8 = (long *)FUN_0160edfc(*unaff_x23,4);
    in_stack_00000008._4_4_ = (undefined4)unaff_x21[2];
    uVar6 = FUN_040f742c(0);
    lVar10 = FUN_03219634((long)&stack0x00000008 + 4,uVar6,0);
    if (plVar8 == (long *)0x0) goto LAB_036d98f4;
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_015d0480(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
LAB_036d98e8:
      uVar6 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar6,0);
    }
    if ((int)plVar8[3] == 0) {
LAB_036d98e4:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    plVar8[4] = lVar10;
    thunk_FUN_01656ef8(plVar8 + 4,lVar10);
    in_stack_00000008._4_4_ = *(undefined4 *)((long)unaff_x21 + 0x14);
    uVar6 = FUN_040f742c(0);
    lVar10 = FUN_03219634((long)&stack0x00000008 + 4,uVar6,0);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_015d0480(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
    goto LAB_036d98e8;
    if (*(uint *)(plVar8 + 3) < 2) goto LAB_036d98e4;
    plVar8[5] = lVar10;
    thunk_FUN_01656ef8(plVar8 + 5,lVar10);
    in_stack_00000008._4_4_ = (undefined4)unaff_x20[2];
    uVar6 = FUN_040f742c(0);
    lVar10 = FUN_03219634((long)&stack0x00000008 + 4,uVar6,0);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_015d0480(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
    goto LAB_036d98e8;
    if (*(uint *)(plVar8 + 3) < 3) goto LAB_036d98e4;
    plVar8[6] = lVar10;
    thunk_FUN_01656ef8(plVar8 + 6,lVar10);
    in_stack_00000008._4_4_ = *(undefined4 *)((long)unaff_x20 + 0x14);
    uVar6 = FUN_040f742c(0);
    lVar10 = FUN_03219634((long)&stack0x00000008 + 4,uVar6,0);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_015d0480(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
    goto LAB_036d98e8;
    puVar3 = PTR_DAT_06e3d250;
    if (*(uint *)(plVar8 + 3) < 4) goto LAB_036d98e4;
    plVar8[7] = lVar10;
    thunk_FUN_01656ef8(plVar8 + 7,lVar10);
    uVar6 = FUN_04748adc(*(undefined8 *)puVar3,plVar8,0);
LAB_036d9454:
    *(undefined8 *)(unaff_x19 + 0x40) = uVar6;
    thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar6);
  }
LAB_036d9464:
  uVar5 = 0;
LAB_036d971c:
  return uVar5 & 1;
}


