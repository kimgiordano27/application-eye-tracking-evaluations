/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Equals
ENTRY_POINT: 036d8fd4
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


uint Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Equals(long *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  
  if (unaff_x21 == param_1) {
    uVar10 = FUN_036dacc0();
    goto LAB_036d971c;
  }
  if (unaff_x20 != (long *)0x0) {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_1 = (long *)**(long **)(*unaff_x22 + 0xb8);
    }
    puVar8 = PTR_DAT_06e69590;
    if (unaff_x20 != param_1) {
      lVar14 = *(long *)PTR_DAT_06e69590;
      uVar17 = (ulong)*(byte *)(lVar14 + 300);
      if ((*(byte *)(lVar14 + 300) <= *(byte *)(*unaff_x21 + 300)) &&
         (*(long *)(*(long *)(*unaff_x21 + 200) + uVar17 * 8 + -8) == lVar14)) {
        unaff_x21 = (long *)FUN_036daa4c();
        lVar14 = *(long *)puVar8;
        uVar17 = (ulong)*(byte *)(lVar14 + 300);
      }
      puVar7 = PTR_DAT_06e57350;
      puVar6 = PTR_DAT_06e18a00;
      puVar5 = PTR_DAT_06e184b0;
      lVar21 = *unaff_x20;
      bVar1 = *(byte *)(lVar21 + 300);
      uVar10 = (uint)uVar17;
      if ((uVar10 <= bVar1) && (*(long *)(*(long *)(lVar21 + 200) + uVar17 * 8 + -8) == lVar14)) {
        plVar12 = (long *)FUN_036daa4c();
        if (plVar12 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar5 + 300);
          if ((bVar1 <= *(byte *)(*plVar12 + 300)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar5)) {
            uVar10 = FUN_036d8ec8();
            goto LAB_036d971c;
          }
        }
        puVar15 = (undefined8 *)PTR_DAT_06e3fe98;
        if (unaff_x21 != (long *)0x0) {
          lVar14 = *(long *)puVar8;
          bVar1 = *(byte *)(lVar14 + 300);
          if ((bVar1 <= *(byte *)(*unaff_x21 + 300)) &&
             (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) == lVar14)) {
            uVar10 = FUN_036dad84();
            goto LAB_036d971c;
          }
        }
        goto LAB_036d9448;
      }
      lVar18 = *(long *)PTR_DAT_06d91a68;
      bVar2 = *(byte *)(lVar18 + 300);
      if (((uint)bVar2 <= (uint)bVar1) &&
         (lVar19 = (ulong)bVar2 - 1, *(long *)(*(long *)(lVar21 + 200) + lVar19 * 8) == lVar18)) {
        if (unaff_x21 != (long *)0x0) {
          lVar21 = *unaff_x21;
          bVar1 = *(byte *)(lVar21 + 300);
          if ((uVar10 <= bVar1) && (*(long *)(*(long *)(lVar21 + 200) + uVar17 * 8 + -8) == lVar14))
          {
            uVar10 = FUN_036daf90();
            goto LAB_036d971c;
          }
          if (((uint)bVar2 <= (uint)bVar1) &&
             (*(long *)(*(long *)(lVar21 + 200) + lVar19 * 8) == lVar18)) {
            uVar10 = FUN_036db12c();
            goto LAB_036d971c;
          }
          bVar2 = *(byte *)(*(long *)PTR_DAT_06e18a00 + 300);
          if ((bVar1 < bVar2) ||
             (*(long *)(*(long *)(lVar21 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)PTR_DAT_06e18a00)) goto LAB_036d98d4;
        }
        uVar10 = FUN_036db22c();
        goto LAB_036d971c;
      }
      lVar19 = *(long *)PTR_DAT_06de6fb8;
      bVar3 = *(byte *)(lVar19 + 300);
      uVar16 = (uint)bVar1;
      if (uVar16 < bVar3) {
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy:
        lVar18 = *(long *)PTR_DAT_06e184b0;
        bVar2 = *(byte *)(lVar18 + 300);
        if (uVar16 < bVar2) {
LAB_036d910c:
          lVar18 = *(long *)PTR_DAT_06dc8bb8;
          bVar2 = *(byte *)(lVar18 + 300);
          if ((uint)bVar2 <= (uint)bVar1) {
            lVar20 = *(long *)(lVar21 + 200);
            if (*(long *)(lVar20 + ((ulong)bVar2 - 1) * 8) == lVar18) {
              puVar15 = (undefined8 *)PTR_DAT_06dd6028;
              if (unaff_x21 != (long *)0x0) {
                lVar21 = *unaff_x21;
                bVar4 = *(byte *)(lVar21 + 300);
                if ((uVar10 <= bVar4) &&
                   (*(long *)(*(long *)(lVar21 + 200) + uVar17 * 8 + -8) == lVar14))
                goto LAB_036d946c;
                if (((uint)bVar2 <= (uint)bVar4) &&
                   (*(long *)(*(long *)(lVar21 + 200) + ((ulong)bVar2 - 1) * 8) == lVar18)) {
LAB_036d91d8:
                  lVar14 = *(long *)puVar6;
                  bVar1 = *(byte *)(lVar14 + 300);
                  if ((bVar4 < bVar1) ||
                     (*(long *)(*(long *)(lVar21 + 200) + ((ulong)bVar1 - 1) * 8) != lVar14)) {
LAB_036d98d4:
                    /* WARNING: Subroutine does not return */
                    FUN_0160f170(unaff_x21);
                  }
                  if (*(byte *)(*unaff_x20 + 300) < bVar1) goto LAB_036d98dc;
                  lVar21 = *(long *)(*(long *)(*unaff_x20 + 200) + ((ulong)bVar1 - 1) * 8);
                  goto LAB_036d94fc;
                }
                if ((bVar3 <= bVar4) &&
                   (*(long *)(*(long *)(lVar21 + 200) + (ulong)bVar3 * 8 + -8) == lVar19)) {
                  bVar1 = *(byte *)(*(long *)PTR_DAT_06e18a00 + 300);
                  if ((bVar4 < bVar1) ||
                     (*(long *)(*(long *)(lVar21 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_06e18a00)) goto LAB_036d98d4;
                  lVar14 = (**(code **)(lVar21 + 0x238))(unaff_x21,*(undefined8 *)(lVar21 + 0x240));
                  if (lVar14 == 0) {
LAB_036d98f4:
                    /* WARNING: Subroutine does not return */
                    FUN_0160eeb4();
                  }
                  iVar9 = FUN_03f054bc(lVar14,0);
                  puVar15 = (undefined8 *)PTR_DAT_06dd6028;
                  if (iVar9 == 1) {
                    lVar21 = *unaff_x21;
                    bVar4 = *(byte *)(lVar21 + 300);
                    goto LAB_036d91d8;
                  }
                }
              }
              goto LAB_036d9448;
            }
          }
          goto LAB_036d9464;
        }
        if (*(long *)(*(long *)(lVar21 + 200) + ((ulong)bVar2 - 1) * 8) != lVar18)
        goto LAB_036d910c;
        puVar15 = (undefined8 *)PTR_DAT_06d91848;
        if (unaff_x21 != (long *)0x0) {
          lVar19 = *unaff_x21;
          bVar1 = *(byte *)(lVar19 + 300);
          if ((bVar1 < uVar10) || (*(long *)(*(long *)(lVar19 + 200) + uVar17 * 8 + -8) != lVar14))
          {
            if (((uint)bVar1 < (uint)bVar2) ||
               (*(long *)(*(long *)(lVar19 + 200) + ((ulong)bVar2 - 1) * 8) != lVar18)) {
              bVar2 = *(byte *)(*(long *)PTR_DAT_06dc8bb8 + 300);
              if ((bVar1 < bVar2) ||
                 (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_06dc8bb8)) goto LAB_036d9448;
              uVar17 = FUN_036dc63c();
              if ((uVar17 & 1) == 0) {
                plVar12 = (long *)FUN_0160edfc(*(undefined8 *)puVar7,4);
                in_stack_00000008._4_4_ = (undefined4)unaff_x21[2];
                uVar11 = FUN_040f742c(0);
                lVar14 = FUN_03219634((long)&stack0x00000008 + 4,uVar11,0);
                if (plVar12 == (long *)0x0) goto LAB_036d98f4;
                if ((lVar14 != 0) &&
                   (lVar21 = thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar12 + 0x40)),
                   lVar21 == 0)) {
LAB_036d98e8:
                  uVar11 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
                  FUN_0160ee7c(uVar11,0);
                }
                if ((int)plVar12[3] == 0) goto LAB_036d98e4;
                plVar12[4] = lVar14;
                thunk_FUN_01656ef8(plVar12 + 4,lVar14);
                in_stack_00000008._4_4_ = *(undefined4 *)((long)unaff_x21 + 0x14);
                uVar11 = FUN_040f742c(0);
                lVar14 = FUN_03219634((long)&stack0x00000008 + 4,uVar11,0);
                if ((lVar14 != 0) &&
                   (lVar21 = thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar12 + 0x40)),
                   lVar21 == 0)) goto LAB_036d98e8;
                if (*(uint *)(plVar12 + 3) < 2) goto LAB_036d98e4;
                plVar12[5] = lVar14;
                thunk_FUN_01656ef8(plVar12 + 5,lVar14);
                in_stack_00000008._4_4_ = (undefined4)unaff_x20[2];
                uVar11 = FUN_040f742c(0);
                lVar14 = FUN_03219634((long)&stack0x00000008 + 4,uVar11,0);
                if ((lVar14 != 0) &&
                   (lVar21 = thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar12 + 0x40)),
                   lVar21 == 0)) goto LAB_036d98e8;
                if (*(uint *)(plVar12 + 3) < 3) goto LAB_036d98e4;
                plVar12[6] = lVar14;
                thunk_FUN_01656ef8(plVar12 + 6,lVar14);
                in_stack_00000008._4_4_ = *(undefined4 *)((long)unaff_x20 + 0x14);
                uVar11 = FUN_040f742c(0);
                lVar14 = FUN_03219634((long)&stack0x00000008 + 4,uVar11,0);
                if ((lVar14 != 0) &&
                   (lVar21 = thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar12 + 0x40)),
                   lVar21 == 0)) goto LAB_036d98e8;
                uVar10 = *(uint *)(plVar12 + 3);
                puVar15 = (undefined8 *)PTR_DAT_06e3d250;
                goto joined_r0x036d98a4;
              }
            }
            else {
              if ((unaff_x20[5] == 0) || (unaff_x21[5] == 0)) {
                uVar10 = FUN_036dc4b0();
                goto LAB_036d971c;
              }
              uVar17 = FUN_036dbec0();
              if ((uVar17 & 1) == 0) goto LAB_036d9464;
            }
LAB_036d9718:
            uVar10 = 1;
            goto LAB_036d971c;
          }
          lVar14 = *(long *)PTR_DAT_06e18a00;
          if (uVar16 < *(byte *)(lVar14 + 300)) goto LAB_036d98dc;
          lVar20 = *(long *)(lVar21 + 200) + (ulong)*(byte *)(lVar14 + 300) * 8;
          goto LAB_036d9538;
        }
LAB_036d9448:
        uVar11 = FUN_0474aec4(*puVar15,0);
      }
      else {
        lVar20 = *(long *)(lVar21 + 200);
        lVar13 = (ulong)bVar3 - 1;
        if (*(long *)(lVar20 + lVar13 * 8) != lVar19)
        goto Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy;
        if (unaff_x21 == (long *)0x0) goto LAB_036d9464;
        lVar21 = *unaff_x21;
        bVar4 = *(byte *)(lVar21 + 300);
        if ((uVar10 <= bVar4) && (*(long *)(*(long *)(lVar21 + 200) + uVar17 * 8 + -8) == lVar14)) {
LAB_036d946c:
          lVar14 = *(long *)PTR_DAT_06e18a00;
          if ((uint)bVar1 < (uint)*(byte *)(lVar14 + 300)) goto LAB_036d98dc;
          lVar20 = lVar20 + (ulong)*(byte *)(lVar14 + 300) * 8;
LAB_036d9538:
          if (*(long *)(lVar20 + -8) != lVar14) goto LAB_036d98dc;
          uVar10 = FUN_036db63c();
          goto LAB_036d971c;
        }
        uVar10 = (uint)bVar4;
        if (((uint)bVar3 <= (uint)bVar4) &&
           (*(long *)(*(long *)(lVar21 + 200) + lVar13 * 8) == lVar19)) {
          lVar14 = *(long *)PTR_DAT_06e18a00;
          bVar1 = *(byte *)(lVar14 + 300);
          if ((uVar10 < bVar1) ||
             (*(long *)(*(long *)(lVar21 + 200) + ((ulong)bVar1 - 1) * 8) != lVar14))
          goto LAB_036d98d4;
          if (uVar16 < bVar1) goto LAB_036d98dc;
          lVar21 = *(long *)(lVar20 + ((ulong)bVar1 - 1) * 8);
LAB_036d94fc:
          if (lVar21 != lVar14) {
LAB_036d98dc:
                    /* WARNING: Subroutine does not return */
            FUN_0160f170();
          }
          uVar10 = 1;
          uVar17 = FUN_036dbec0();
          if ((uVar17 & 1) != 0) goto LAB_036d971c;
          goto LAB_036d9464;
        }
        bVar1 = *(byte *)(*(long *)PTR_DAT_06dc8bb8 + 300);
        if ((uVar10 < bVar1) ||
           (*(long *)(*(long *)(lVar21 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06dc8bb8)
           ) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_06e184b0 + 300);
          puVar15 = (undefined8 *)PTR_DAT_06e0ef90;
          if (((bVar1 <= uVar10) &&
              (*(long *)(*(long *)(lVar21 + 200) + (ulong)bVar1 * 8 + -8) ==
               *(long *)PTR_DAT_06e184b0)) ||
             ((bVar2 <= uVar10 &&
              (*(long *)(*(long *)(lVar21 + 200) + (ulong)bVar2 * 8 + -8) == lVar18))))
          goto LAB_036d9448;
          goto LAB_036d9464;
        }
        uVar17 = FUN_036dc1b0();
        if ((uVar17 & 1) != 0) goto LAB_036d9718;
        plVar12 = (long *)FUN_0160edfc(*(undefined8 *)puVar7,4);
        in_stack_00000008._4_4_ = (undefined4)unaff_x21[2];
        uVar11 = FUN_040f742c(0);
        lVar14 = FUN_03219634((long)&stack0x00000008 + 4,uVar11,0);
        if (plVar12 == (long *)0x0) goto LAB_036d98f4;
        if ((lVar14 != 0) &&
           (lVar21 = thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar12 + 0x40)), lVar21 == 0))
        goto LAB_036d98e8;
        if ((int)plVar12[3] == 0) goto LAB_036d98e4;
        plVar12[4] = lVar14;
        thunk_FUN_01656ef8(plVar12 + 4,lVar14);
        in_stack_00000008._4_4_ = *(undefined4 *)((long)unaff_x21 + 0x14);
        uVar11 = FUN_040f742c(0);
        lVar14 = FUN_03219634((long)&stack0x00000008 + 4,uVar11,0);
        if ((lVar14 != 0) &&
           (lVar21 = thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar12 + 0x40)), lVar21 == 0))
        goto LAB_036d98e8;
        if (*(uint *)(plVar12 + 3) < 2) goto LAB_036d98e4;
        plVar12[5] = lVar14;
        thunk_FUN_01656ef8(plVar12 + 5,lVar14);
        in_stack_00000008._4_4_ = (undefined4)unaff_x20[2];
        uVar11 = FUN_040f742c(0);
        lVar14 = FUN_03219634((long)&stack0x00000008 + 4,uVar11,0);
        if ((lVar14 != 0) &&
           (lVar21 = thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar12 + 0x40)), lVar21 == 0))
        goto LAB_036d98e8;
        if (*(uint *)(plVar12 + 3) < 3) goto LAB_036d98e4;
        plVar12[6] = lVar14;
        thunk_FUN_01656ef8(plVar12 + 6,lVar14);
        in_stack_00000008._4_4_ = *(undefined4 *)((long)unaff_x20 + 0x14);
        uVar11 = FUN_040f742c(0);
        lVar14 = FUN_03219634((long)&stack0x00000008 + 4,uVar11,0);
        if ((lVar14 != 0) &&
           (lVar21 = thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar12 + 0x40)), lVar21 == 0))
        goto LAB_036d98e8;
        uVar10 = *(uint *)(plVar12 + 3);
        puVar15 = (undefined8 *)PTR_DAT_06dbe528;
joined_r0x036d98a4:
        if (uVar10 < 4) {
LAB_036d98e4:
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        plVar12[7] = lVar14;
        thunk_FUN_01656ef8(plVar12 + 7,lVar14);
        uVar11 = FUN_04748adc(*puVar15,plVar12,0);
      }
      *(undefined8 *)(unaff_x19 + 0x40) = uVar11;
      thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar11);
    }
  }
LAB_036d9464:
  uVar10 = 0;
LAB_036d971c:
  return uVar10 & 1;
}


