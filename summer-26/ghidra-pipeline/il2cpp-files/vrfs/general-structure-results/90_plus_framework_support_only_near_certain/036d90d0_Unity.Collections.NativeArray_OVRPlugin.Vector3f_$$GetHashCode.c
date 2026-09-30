/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$GetHashCode
ENTRY_POINT: 036d90d0
PROGRAM: vrfs-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector3f>__GetHashCode(long param_1)

{
  byte bVar1;
  byte bVar2;
  bool in_CY;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint in_w9;
  uint in_w10;
  long in_x11;
  long lVar9;
  long in_x12;
  long in_x13;
  long in_x14;
  long *in_x15;
  long lVar10;
  long lVar11;
  long in_x17;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  if (in_CY) {
    lVar11 = *(long *)(in_x17 + 200);
    if (*(long *)(lVar11 + (in_x14 + -1) * 8) != in_x13)
    goto Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy;
    if (unaff_x21 == (long *)0x0) goto LAB_036d9464;
    lVar9 = *unaff_x21;
    bVar1 = *(byte *)(lVar9 + 300);
    if ((in_w10 <= bVar1) && (*(long *)(*(long *)(lVar9 + 200) + (ulong)in_w10 * 8 + -8) == param_1)
       ) {
LAB_036d946c:
      lVar10 = *unaff_x22;
      if (in_w9 < *(byte *)(lVar10 + 300)) goto LAB_036d98dc;
      lVar11 = lVar11 + (ulong)*(byte *)(lVar10 + 300) * 8;
LAB_036d9538:
      if (*(long *)(lVar11 + -8) != lVar10) goto LAB_036d98dc;
      uVar4 = FUN_036db63c();
      goto LAB_036d971c;
    }
    uVar4 = (uint)bVar1;
    if (((uint)in_x14 <= (uint)bVar1) &&
       (*(long *)(*(long *)(lVar9 + 200) + (in_x14 + -1) * 8) == in_x13)) {
      lVar10 = *unaff_x22;
      bVar1 = *(byte *)(lVar10 + 300);
      if ((uVar4 < bVar1) || (*(long *)(*(long *)(lVar9 + 200) + ((ulong)bVar1 - 1) * 8) != lVar10))
      goto LAB_036d98d4;
      if (in_w9 < bVar1) goto LAB_036d98dc;
      lVar11 = *(long *)(lVar11 + ((ulong)bVar1 - 1) * 8);
LAB_036d94fc:
      if (lVar11 != lVar10) {
LAB_036d98dc:
                    /* WARNING: Subroutine does not return */
        FUN_0160f170();
      }
      uVar4 = 1;
      uVar6 = FUN_036dbec0();
      if ((uVar6 & 1) != 0) goto LAB_036d971c;
      goto LAB_036d9464;
    }
    bVar1 = *(byte *)(*in_x15 + 300);
    if ((uVar4 < bVar1) || (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *in_x15)) {
      bVar1 = *(byte *)(*unaff_x24 + 300);
      puVar8 = (undefined8 *)PTR_DAT_06e0ef90;
      if (((uVar4 < bVar1) ||
          (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) &&
         ((uVar4 < (uint)in_x12 || (*(long *)(*(long *)(lVar9 + 200) + in_x12 * 8 + -8) != in_x11)))
         ) goto LAB_036d9464;
      goto LAB_036d9448;
    }
    uVar6 = FUN_036dc1b0();
    if ((uVar6 & 1) != 0) goto LAB_036d9718;
    plVar7 = (long *)FUN_0160edfc(*unaff_x23,4);
    in_stack_00000008._4_4_ = (undefined4)unaff_x21[2];
    uVar5 = FUN_040f742c(0);
    lVar11 = FUN_03219634((long)&stack0x00000008 + 4,uVar5,0);
    if (plVar7 == (long *)0x0) goto LAB_036d98f4;
    if ((lVar11 != 0) &&
       (lVar10 = thunk_FUN_015d0480(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
    goto LAB_036d98e8;
    if ((int)plVar7[3] == 0) goto LAB_036d98e4;
    plVar7[4] = lVar11;
    thunk_FUN_01656ef8(plVar7 + 4,lVar11);
    in_stack_00000008._4_4_ = *(undefined4 *)((long)unaff_x21 + 0x14);
    uVar5 = FUN_040f742c(0);
    lVar11 = FUN_03219634((long)&stack0x00000008 + 4,uVar5,0);
    if ((lVar11 != 0) &&
       (lVar10 = thunk_FUN_015d0480(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
    goto LAB_036d98e8;
    if (*(uint *)(plVar7 + 3) < 2) goto LAB_036d98e4;
    plVar7[5] = lVar11;
    thunk_FUN_01656ef8(plVar7 + 5,lVar11);
    in_stack_00000008._4_4_ = (undefined4)unaff_x20[2];
    uVar5 = FUN_040f742c(0);
    lVar11 = FUN_03219634((long)&stack0x00000008 + 4,uVar5,0);
    if ((lVar11 != 0) &&
       (lVar10 = thunk_FUN_015d0480(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
    goto LAB_036d98e8;
    if (*(uint *)(plVar7 + 3) < 3) goto LAB_036d98e4;
    plVar7[6] = lVar11;
    thunk_FUN_01656ef8(plVar7 + 6,lVar11);
    in_stack_00000008._4_4_ = *(undefined4 *)((long)unaff_x20 + 0x14);
    uVar5 = FUN_040f742c(0);
    lVar11 = FUN_03219634((long)&stack0x00000008 + 4,uVar5,0);
    if ((lVar11 != 0) &&
       (lVar10 = thunk_FUN_015d0480(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
    goto LAB_036d98e8;
    uVar4 = *(uint *)(plVar7 + 3);
    puVar8 = (undefined8 *)PTR_DAT_06dbe528;
joined_r0x036d98a4:
    if (uVar4 < 4) {
LAB_036d98e4:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    plVar7[7] = lVar11;
    thunk_FUN_01656ef8(plVar7 + 7,lVar11);
    uVar5 = FUN_04748adc(*puVar8,plVar7,0);
LAB_036d9454:
    *(undefined8 *)(unaff_x19 + 0x40) = uVar5;
    thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar5);
  }
  else {
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy:
    lVar11 = *unaff_x24;
    bVar1 = *(byte *)(lVar11 + 300);
    if (bVar1 <= in_w9) {
      if (*(long *)(*(long *)(in_x17 + 200) + ((ulong)bVar1 - 1) * 8) != lVar11) goto LAB_036d910c;
      puVar8 = (undefined8 *)PTR_DAT_06d91848;
      if (unaff_x21 != (long *)0x0) {
        lVar10 = *unaff_x21;
        bVar2 = *(byte *)(lVar10 + 300);
        if ((bVar2 < in_w10) ||
           (*(long *)(*(long *)(lVar10 + 200) + (ulong)in_w10 * 8 + -8) != param_1)) {
          if (((uint)bVar2 < (uint)bVar1) ||
             (*(long *)(*(long *)(lVar10 + 200) + ((ulong)bVar1 - 1) * 8) != lVar11)) {
            bVar1 = *(byte *)(*in_x15 + 300);
            if ((bVar2 < bVar1) ||
               (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) != *in_x15))
            goto LAB_036d9448;
            uVar6 = FUN_036dc63c();
            if ((uVar6 & 1) == 0) {
              plVar7 = (long *)FUN_0160edfc(*unaff_x23,4);
              in_stack_00000008._4_4_ = (undefined4)unaff_x21[2];
              uVar5 = FUN_040f742c(0);
              lVar11 = FUN_03219634((long)&stack0x00000008 + 4,uVar5,0);
              if (plVar7 == (long *)0x0) goto LAB_036d98f4;
              if ((lVar11 != 0) &&
                 (lVar10 = thunk_FUN_015d0480(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
              {
LAB_036d98e8:
                uVar5 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
                FUN_0160ee7c(uVar5,0);
              }
              if ((int)plVar7[3] == 0) goto LAB_036d98e4;
              plVar7[4] = lVar11;
              thunk_FUN_01656ef8(plVar7 + 4,lVar11);
              in_stack_00000008._4_4_ = *(undefined4 *)((long)unaff_x21 + 0x14);
              uVar5 = FUN_040f742c(0);
              lVar11 = FUN_03219634((long)&stack0x00000008 + 4,uVar5,0);
              if ((lVar11 != 0) &&
                 (lVar10 = thunk_FUN_015d0480(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
              goto LAB_036d98e8;
              if (*(uint *)(plVar7 + 3) < 2) goto LAB_036d98e4;
              plVar7[5] = lVar11;
              thunk_FUN_01656ef8(plVar7 + 5,lVar11);
              in_stack_00000008._4_4_ = (undefined4)unaff_x20[2];
              uVar5 = FUN_040f742c(0);
              lVar11 = FUN_03219634((long)&stack0x00000008 + 4,uVar5,0);
              if ((lVar11 != 0) &&
                 (lVar10 = thunk_FUN_015d0480(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
              goto LAB_036d98e8;
              if (*(uint *)(plVar7 + 3) < 3) goto LAB_036d98e4;
              plVar7[6] = lVar11;
              thunk_FUN_01656ef8(plVar7 + 6,lVar11);
              in_stack_00000008._4_4_ = *(undefined4 *)((long)unaff_x20 + 0x14);
              uVar5 = FUN_040f742c(0);
              lVar11 = FUN_03219634((long)&stack0x00000008 + 4,uVar5,0);
              if ((lVar11 != 0) &&
                 (lVar10 = thunk_FUN_015d0480(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
              goto LAB_036d98e8;
              uVar4 = *(uint *)(plVar7 + 3);
              puVar8 = (undefined8 *)PTR_DAT_06e3d250;
              goto joined_r0x036d98a4;
            }
          }
          else {
            if ((unaff_x20[5] == 0) || (unaff_x21[5] == 0)) {
              uVar4 = FUN_036dc4b0();
              goto LAB_036d971c;
            }
            uVar6 = FUN_036dbec0();
            if ((uVar6 & 1) == 0) goto LAB_036d9464;
          }
LAB_036d9718:
          uVar4 = 1;
          goto LAB_036d971c;
        }
        lVar10 = *unaff_x22;
        if (in_w9 < *(byte *)(lVar10 + 300)) goto LAB_036d98dc;
        lVar11 = *(long *)(in_x17 + 200) + (ulong)*(byte *)(lVar10 + 300) * 8;
        goto LAB_036d9538;
      }
LAB_036d9448:
      uVar5 = FUN_0474aec4(*puVar8,0);
      goto LAB_036d9454;
    }
LAB_036d910c:
    lVar10 = *in_x15;
    bVar1 = *(byte *)(lVar10 + 300);
    if (bVar1 <= in_w9) {
      lVar11 = *(long *)(in_x17 + 200);
      if (*(long *)(lVar11 + ((ulong)bVar1 - 1) * 8) == lVar10) {
        puVar8 = (undefined8 *)PTR_DAT_06dd6028;
        if (unaff_x21 != (long *)0x0) {
          lVar9 = *unaff_x21;
          bVar2 = *(byte *)(lVar9 + 300);
          if ((in_w10 <= bVar2) &&
             (*(long *)(*(long *)(lVar9 + 200) + (ulong)in_w10 * 8 + -8) == param_1))
          goto LAB_036d946c;
          if (((uint)bVar1 <= (uint)bVar2) &&
             (*(long *)(*(long *)(lVar9 + 200) + ((ulong)bVar1 - 1) * 8) == lVar10)) {
LAB_036d91d8:
            lVar10 = *unaff_x22;
            bVar1 = *(byte *)(lVar10 + 300);
            if ((bVar2 < bVar1) ||
               (*(long *)(*(long *)(lVar9 + 200) + ((ulong)bVar1 - 1) * 8) != lVar10)) {
LAB_036d98d4:
                    /* WARNING: Subroutine does not return */
              FUN_0160f170();
            }
            if (*(byte *)(*unaff_x20 + 300) < bVar1) goto LAB_036d98dc;
            lVar11 = *(long *)(*(long *)(*unaff_x20 + 200) + ((ulong)bVar1 - 1) * 8);
            goto LAB_036d94fc;
          }
          if (((uint)in_x14 <= (uint)bVar2) &&
             (*(long *)(*(long *)(lVar9 + 200) + in_x14 * 8 + -8) == in_x13)) {
            bVar1 = *(byte *)(*unaff_x22 + 300);
            if (((uint)bVar2 < (uint)bVar1) ||
               (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x22))
            goto LAB_036d98d4;
            lVar11 = (**(code **)(lVar9 + 0x238))();
            if (lVar11 == 0) {
LAB_036d98f4:
                    /* WARNING: Subroutine does not return */
              FUN_0160eeb4();
            }
            iVar3 = FUN_03f054bc(lVar11,0);
            puVar8 = (undefined8 *)PTR_DAT_06dd6028;
            if (iVar3 == 1) {
              lVar9 = *unaff_x21;
              bVar2 = *(byte *)(lVar9 + 300);
              goto LAB_036d91d8;
            }
          }
        }
        goto LAB_036d9448;
      }
    }
  }
LAB_036d9464:
  uVar4 = 0;
LAB_036d971c:
  return uVar4 & 1;
}


