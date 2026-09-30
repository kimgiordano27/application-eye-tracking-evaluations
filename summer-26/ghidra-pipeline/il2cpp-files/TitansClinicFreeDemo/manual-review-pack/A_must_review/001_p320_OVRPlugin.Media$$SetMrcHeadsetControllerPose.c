/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcHeadsetControllerPose
ENTRY_POINT: 01f92554
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 189
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_3
*/


long OVRPlugin_Media__SetMrcHeadsetControllerPose(ulong param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  uint in_w9;
  long in_x10;
  long in_x11;
  long unaff_x19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  long *plVar23;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long lVar24;
  long *plVar25;
  long *unaff_x27;
  undefined8 uVar26;
  long *unaff_x28;
  long lVar27;
  long *in_stack_00000010;
  long *plStack0000000000000048;
  uint in_stack_00000050;
  
  do {
                    /* try { // try from 01f92554 to 020925ab has its CatchHandler @ 01f92ae0 */
    if (*(uint *)(in_x11 + 0x18) <= param_1) goto LAB_01f9340c;
    *(int *)(in_x11 + param_1 * 4 + 0x20) = (int)param_1;
    param_1 = param_1 + 1;
    if (in_x10 <= (long)param_1) {
      do {
        while( true ) {
          puVar4 = PTR_DAT_027b46c8;
          uVar8 = (int)unaff_x19 + 1;
          if ((int)(uint)unaff_x24[3] <= (int)uVar8) {
            plVar9 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b46c8);
            if (*unaff_x28 == 0) goto LAB_01f92644;
            plVar10 = (long *)FUN_01230af8(*(undefined8 *)puVar4,*(undefined4 *)(*unaff_x28 + 0x18))
            ;
            lVar16 = *unaff_x28;
            if (lVar16 == 0) goto LAB_01f92644;
                    /* try { // try from 01f925c0 to 020925c3 has its CatchHandler @ 01f92a00 */
            uVar20 = 0;
                    /* try { // try from 01f925c4 to 020925d7 has its CatchHandler @ 01f92a0c */
            plVar23 = plVar10 + 4;
            goto LAB_01f925c8;
          }
          if ((uint)unaff_x24[3] <= uVar8) goto LAB_01f9340c;
          unaff_x19 = (long)(int)uVar8;
          plVar10 = unaff_x24 + unaff_x19 + 4;
          plVar9 = (long *)*plVar10;
          if (((plVar9 == (long *)0x0) ||
              (lVar16 = (**(code **)(*plVar9 + 0x378))(plVar9,*(undefined8 *)(*plVar9 + 0x380)),
              lVar16 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
          iVar1 = *(int *)(*unaff_x28 + 0x18);
          iVar7 = *(int *)(lVar16 + 0x18);
          if (*(int *)(lVar16 + 0x18) <= iVar1) {
            iVar7 = iVar1;
          }
          lVar11 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,iVar7);
          if (unaff_x23 == 0) goto LAB_01f92644;
          if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_01f9340c;
          unaff_x27 = (long *)(unaff_x23 + unaff_x19 * 8 + 0x20);
          *unaff_x27 = lVar11;
          thunk_FUN_01286abc(unaff_x27,lVar11);
          if (unaff_x25 == 0) break;
          if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_01f9340c;
          lVar11 = *unaff_x27;
          if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar20 = OVRPlugin_UnityOpenXR__OnSessionDestroy(lVar11,lVar16);
          if ((uVar20 & 1) == 0) {
            if (*(uint *)(unaff_x24 + 3) <= uVar8) goto LAB_01f9340c;
            *plVar10 = 0;
            thunk_FUN_01286abc(plVar10,0);
          }
        }
        if (*unaff_x28 == 0) goto LAB_01f92644;
        lVar16 = *(long *)(*unaff_x28 + 0x18);
      } while (lVar16 << 0x20 < 1);
      in_w9 = *(uint *)(unaff_x23 + 0x18);
      param_1 = 0;
      in_x10 = (long)(int)lVar16;
    }
    if (in_w9 <= (uint)unaff_x19) goto LAB_01f9340c;
    in_x11 = *unaff_x27;
  } while (in_x11 != 0);
  goto LAB_01f92644;
LAB_01f9266c:
  if (uVar17 <= uVar20) goto LAB_01f9340c;
  plVar25 = unaff_x24 + uVar20 + 4;
  uVar17 = FUN_01ee539c(*plVar25,0,0);
  if ((uVar17 & 1) != 0) goto LAB_01f93214;
  if (*(uint *)(unaff_x24 + 3) <= uVar20) goto LAB_01f9340c;
  plVar12 = (long *)*plVar25;
                    /* try { // try from 01f9269c to 020926b7 has its CatchHandler @ 01f929d4 */
  if ((plVar12 == (long *)0x0) ||
     (lVar16 = (**(code **)(*plVar12 + 0x378))(plVar12,*(undefined8 *)(*plVar12 + 0x380)),
     lVar16 == 0)) goto LAB_01f92644;
  uVar17 = *(ulong *)(lVar16 + 0x18);
  lVar11 = *unaff_x28;
  if (uVar17 == 0) {
    if (lVar11 == 0) goto LAB_01f92644;
    if (*(long *)(lVar11 + 0x18) != 0) {
      if (*(uint *)(unaff_x24 + 3) <= uVar20) goto LAB_01f9340c;
      plVar12 = (long *)*plVar25;
      if (plVar12 == (long *)0x0) goto LAB_01f92644;
      uVar6 = (**(code **)(*plVar12 + 600))(plVar12,*(undefined8 *)(*plVar12 + 0x260));
      if ((uVar6 >> 1 & 1) == 0) goto LAB_01f93214;
    }
    if (unaff_x23 == 0) goto LAB_01f92644;
    if ((*(uint *)(unaff_x23 + 0x18) <= uVar20) || (*(uint *)(unaff_x23 + 0x18) <= uVar8))
    goto LAB_01f9340c;
    *(undefined8 *)(unaff_x23 + (long)(int)uVar8 * 8 + 0x20) =
         *(undefined8 *)(unaff_x23 + uVar20 * 8 + 0x20);
    thunk_FUN_01286abc();
    uVar6 = *(uint *)(unaff_x24 + 3);
    if (uVar6 <= uVar20) goto LAB_01f9340c;
    lVar16 = *plVar25;
joined_r0x01f927d4:
    if (lVar16 != 0) {
      lVar11 = thunk_FUN_0124baac(lVar16,*(undefined8 *)(*unaff_x24 + 0x40));
      if (lVar11 == 0) goto LAB_01f941d8;
      uVar6 = (uint)unaff_x24[3];
    }
    lVar11 = (long)(int)uVar8;
    if (uVar6 <= uVar8) goto LAB_01f9340c;
    unaff_x24[lVar11 + 4] = lVar16;
    uVar8 = uVar8 + 1;
    thunk_FUN_01286abc(unaff_x24 + lVar11 + 4,lVar16);
    plVar23 = (long *)PTR_DAT_027b32e0;
    goto LAB_01f93214;
  }
  if (lVar11 == 0) goto LAB_01f92644;
  uVar6 = *(uint *)(lVar11 + 0x18);
  iVar7 = (int)uVar17;
  if ((int)uVar6 < iVar7) {
    uVar22 = iVar7 - 1;
    if ((int)uVar6 < (int)uVar22) {
      plVar12 = (long *)(lVar16 + (long)(int)uVar6 * 8 + 0x20);
      do {
        if ((uint)uVar17 <= uVar6) goto LAB_01f9340c;
        plVar13 = (long *)*plVar12;
        if (plVar13 == (long *)0x0) goto LAB_01f92644;
        lVar11 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200));
        puVar4 = PTR_DAT_027baa38;
        lVar18 = *(long *)PTR_DAT_027baa38;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01220628(lVar18);
          lVar18 = *(long *)puVar4;
        }
        if (lVar11 == **(long **)(lVar18 + 0xb8)) {
          uVar17 = (ulong)*(uint *)(lVar16 + 0x18);
          uVar22 = *(uint *)(lVar16 + 0x18) - 1;
          break;
        }
        uVar17 = *(ulong *)(lVar16 + 0x18);
        uVar6 = uVar6 + 1;
        plVar12 = plVar12 + 1;
        uVar22 = (int)uVar17 - 1;
      } while ((int)uVar6 < (int)uVar22);
    }
    if (uVar6 == uVar22) {
      if ((uint)uVar17 <= uVar6) goto LAB_01f9340c;
      plVar13 = (long *)(lVar16 + (long)(int)uVar6 * 8 + 0x20);
      plVar12 = (long *)*plVar13;
      if (plVar12 == (long *)0x0) goto LAB_01f92644;
      lVar11 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200));
      puVar4 = PTR_DAT_027baa38;
      lVar18 = *(long *)PTR_DAT_027baa38;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01220628(lVar18);
        lVar18 = *(long *)puVar4;
      }
      if (lVar11 != **(long **)(lVar18 + 0xb8)) goto LAB_01f92a28;
      if (*(uint *)(lVar16 + 0x18) <= uVar6) goto LAB_01f9340c;
      plVar12 = (long *)*plVar13;
      if ((plVar12 == (long *)0x0) ||
         (lVar11 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0)),
         lVar11 == 0)) goto LAB_01f92644;
      uVar17 = FUN_01f80ec8(lVar11,0);
      if ((uVar17 & 1) != 0) {
        if (*(uint *)(lVar16 + 0x18) <= uVar6) goto LAB_01f9340c;
        plVar12 = (long *)*plVar13;
        uVar15 = *(undefined8 *)PTR_DAT_027c1be0;
        if (*(int *)(*plVar23 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar15 = FUN_01f7d8a0(uVar15,0);
        if (plVar12 == (long *)0x0) goto LAB_01f92644;
        uVar17 = (**(code **)(*plVar12 + 0x208))(plVar12,uVar15,1,*(undefined8 *)(*plVar12 + 0x210))
        ;
        plVar23 = (long *)PTR_DAT_027b32e0;
        if ((uVar17 & 1) != 0) {
          if (uVar6 < *(uint *)(lVar16 + 0x18)) {
            plVar13 = (long *)*plVar13;
            if (plVar13 != (long *)0x0) {
              plVar12 = (long *)(**(code **)(*plVar13 + 0x1d8))
                                          (plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
              goto joined_r0x01f931fc;
            }
            goto LAB_01f92644;
          }
          goto LAB_01f9340c;
        }
      }
    }
    goto LAB_01f93214;
  }
  if (iVar7 == 0) goto LAB_01f9340c;
  uVar22 = iVar7 - 1;
  lVar11 = (long)(int)uVar22;
  plVar13 = (long *)(lVar16 + lVar11 * 8 + 0x20);
  plVar12 = (long *)*plVar13;
  if ((plVar12 == (long *)0x0) ||
     (lVar18 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0)),
     lVar18 == 0)) goto LAB_01f92644;
  uVar17 = FUN_01f80ec8(lVar18,0);
  if (iVar7 < (int)uVar6) {
    if ((uVar17 & 1) != 0) {
      if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_01f9340c;
      plVar12 = (long *)*plVar13;
      uVar15 = *(undefined8 *)PTR_DAT_027c1be0;
      if (*(int *)(*plVar23 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar15 = FUN_01f7d8a0(uVar15,0);
      if (plVar12 == (long *)0x0) goto LAB_01f92644;
      uVar17 = (**(code **)(*plVar12 + 0x208))(plVar12,uVar15,1,*(undefined8 *)(*plVar12 + 0x210));
      plVar23 = (long *)PTR_DAT_027b32e0;
      if ((uVar17 & 1) != 0) {
        if (unaff_x23 == 0) goto LAB_01f92644;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_01f9340c;
        lVar18 = *(long *)(unaff_x23 + uVar20 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_01f9340c;
        if (*(uint *)(lVar18 + lVar11 * 4 + 0x20) == uVar22) {
LAB_01f9323c:
          if (uVar22 < *(uint *)(lVar16 + 0x18)) {
            plVar13 = (long *)*plVar13;
            if (plVar13 != (long *)0x0) {
              plVar12 = (long *)(**(code **)(*plVar13 + 0x1d8))
                                          (plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
joined_r0x01f931fc:
              if (plVar12 != (long *)0x0) {
                plStack0000000000000048 =
                     (long *)(**(code **)(*plVar12 + 0x408))
                                       (plVar12,*(undefined8 *)(*plVar12 + 0x410));
                goto LAB_01f92a2c;
              }
            }
            goto LAB_01f92644;
          }
          goto LAB_01f9340c;
        }
      }
    }
    goto LAB_01f93214;
  }
  if ((uVar17 & 1) == 0) {
LAB_01f92a28:
    plStack0000000000000048 = (long *)0x0;
  }
  else {
    if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_01f9340c;
    plVar12 = (long *)*plVar13;
    uVar15 = *(undefined8 *)PTR_DAT_027c1be0;
    if (*(int *)(*plVar23 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar15 = FUN_01f7d8a0(uVar15,0);
    if (plVar12 == (long *)0x0) goto LAB_01f92644;
    uVar17 = (**(code **)(*plVar12 + 0x208))(plVar12,uVar15,1,*(undefined8 *)(*plVar12 + 0x210));
    plVar23 = (long *)PTR_DAT_027b32e0;
    if ((uVar17 & 1) != 0) {
      if (unaff_x23 == 0) goto LAB_01f92644;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_01f9340c;
      lVar18 = *(long *)(unaff_x23 + uVar20 * 8 + 0x20);
      if (lVar18 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_01f9340c;
      if (*(uint *)(lVar18 + lVar11 * 4 + 0x20) != uVar22) goto LAB_01f92a28;
      if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_01f9340c;
      plVar12 = (long *)*plVar13;
      if ((plVar12 == (long *)0x0) ||
         (plVar12 = (long *)(**(code **)(*plVar12 + 0x1d8))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x1e0)),
         plVar10 == (long *)0x0)) goto LAB_01f92644;
      if (*(uint *)(plVar10 + 3) <= uVar22) goto LAB_01f9340c;
      if (plVar12 == (long *)0x0) goto LAB_01f92644;
      uVar17 = (**(code **)(*plVar12 + 0x288))
                         (plVar12,plVar10[lVar11 + 4],*(undefined8 *)(*plVar12 + 0x290));
      if ((uVar17 & 1) == 0) goto LAB_01f9323c;
      goto LAB_01f92a28;
    }
    plStack0000000000000048 = (long *)0x0;
  }
LAB_01f92a2c:
  if (*(int *)(*plVar23 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar17 = FUN_01f801dc(plStack0000000000000048,0,0);
  if ((uVar17 & 1) == 0) {
    if (*unaff_x28 == 0) goto LAB_01f92644;
    uVar6 = *(uint *)(*unaff_x28 + 0x18);
  }
  else {
    uVar6 = *(int *)(lVar16 + 0x18) - 1;
  }
  if ((int)uVar6 < 1) {
    uVar22 = 0;
  }
  else {
    uVar21 = 0;
    plVar12 = (long *)(unaff_x23 + uVar20 * 8 + 0x20);
    do {
      if (*(uint *)(lVar16 + 0x18) <= uVar21) goto LAB_01f9340c;
      lVar11 = (long)(int)uVar21;
      plVar13 = *(long **)(lVar16 + lVar11 * 8 + 0x20);
      if ((plVar13 == (long *)0x0) ||
         (plVar13 = (long *)(**(code **)(*plVar13 + 0x1d8))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x1e0)),
         plVar13 == (long *)0x0)) goto LAB_01f92644;
      uVar17 = FUN_01f80ed8(plVar13,0);
      if ((uVar17 & 1) != 0) {
        plVar13 = (long *)(**(code **)(*plVar13 + 0x408))(plVar13,*(undefined8 *)(*plVar13 + 0x410))
        ;
      }
      if (unaff_x23 == 0) goto LAB_01f92644;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_01f9340c;
      lVar18 = *plVar12;
      if (lVar18 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar18 + 0x18) <= uVar21) goto LAB_01f9340c;
      if (plVar10 == (long *)0x0) goto LAB_01f92644;
      uVar22 = *(uint *)(lVar18 + lVar11 * 4 + 0x20);
      if (*(uint *)(plVar10 + 3) <= uVar22) goto LAB_01f9340c;
      lVar18 = plVar10[(long)(int)uVar22 + 4];
      if (*(int *)(*plVar23 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar17 = FUN_01f7f404(plVar13,lVar18,0);
      if ((uVar17 & 1) == 0) {
        if ((in_stack_00000050 >> 0x12 & 1) != 0) {
          if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_01f9340c;
          lVar18 = *plVar12;
          if (lVar18 == 0) goto LAB_01f92644;
          if (*(uint *)(lVar18 + 0x18) <= uVar21) goto LAB_01f9340c;
          lVar19 = *unaff_x28;
          if (lVar19 == 0) goto LAB_01f92644;
          uVar22 = *(uint *)(lVar18 + lVar11 * 4 + 0x20);
          if (*(uint *)(lVar19 + 0x18) <= uVar22) goto LAB_01f9340c;
          lVar18 = *plVar23;
          lVar19 = *(long *)(lVar19 + (long)(int)uVar22 * 8 + 0x20);
          if (*(int *)(lVar18 + 0xe0) == 0) {
            thunk_FUN_01220628();
            lVar18 = *plVar23;
          }
          if (lVar19 == *(long *)(*(long *)(lVar18 + 0xb8) + 0x18)) goto LAB_01f92e70;
        }
        if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_01f9340c;
        lVar18 = *plVar12;
        if (lVar18 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar18 + 0x18) <= uVar21) goto LAB_01f9340c;
        lVar19 = *unaff_x28;
        if (lVar19 == 0) goto LAB_01f92644;
        uVar22 = *(uint *)(lVar18 + lVar11 * 4 + 0x20);
        if (*(uint *)(lVar19 + 0x18) <= uVar22) goto LAB_01f9340c;
        if (*(long *)(lVar19 + (long)(int)uVar22 * 8 + 0x20) != 0) {
          uVar15 = *(undefined8 *)PTR_DAT_027b5b48;
          if (*(int *)(*plVar23 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar15 = FUN_01f7d8a0(uVar15,0);
          uVar17 = FUN_01f7f404(plVar13,uVar15,0);
          if ((uVar17 & 1) == 0) {
            if (plVar13 == (long *)0x0) goto LAB_01f92644;
            uVar17 = FUN_01f81644(plVar13,0);
            if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_01f9340c;
            lVar18 = *plVar12;
            if (lVar18 == 0) goto LAB_01f92644;
            if ((*(uint *)(lVar18 + 0x18) <= uVar21) ||
               (uVar22 = *(uint *)(lVar18 + lVar11 * 4 + 0x20), *(uint *)(plVar10 + 3) <= uVar22))
            goto LAB_01f9340c;
            lVar18 = plVar10[(long)(int)uVar22 + 4];
            if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar14 = FUN_01f7f404(lVar18,0,0);
            plVar23 = (long *)PTR_DAT_027b32e0;
            uVar22 = uVar21;
            if ((uVar17 & 1) == 0) {
              if ((uVar14 & 1) == 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_01f9340c;
                lVar18 = *plVar12;
                if (lVar18 == 0) goto LAB_01f92644;
                if ((*(uint *)(lVar18 + 0x18) <= uVar21) ||
                   (uVar2 = *(uint *)(lVar18 + lVar11 * 4 + 0x20), *(uint *)(plVar10 + 3) <= uVar2))
                goto LAB_01f9340c;
                uVar17 = (**(code **)(*plVar13 + 0x288))
                                   (plVar13,plVar10[(long)(int)uVar2 + 4],
                                    *(undefined8 *)(*plVar13 + 0x290));
                if ((uVar17 & 1) == 0) {
                  if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_01f9340c;
                  lVar18 = *plVar12;
                  if (lVar18 == 0) goto LAB_01f92644;
                  if ((*(uint *)(lVar18 + 0x18) <= uVar21) ||
                     (uVar2 = *(uint *)(lVar18 + lVar11 * 4 + 0x20), *(uint *)(plVar10 + 3) <= uVar2
                     )) goto LAB_01f9340c;
                  if (plVar10[(long)(int)uVar2 + 4] == 0) goto LAB_01f92644;
                  uVar17 = FUN_01f81468(plVar10[(long)(int)uVar2 + 4],0);
                  if ((uVar17 & 1) != 0) {
                    if (uVar20 < *(uint *)(unaff_x23 + 0x18)) {
                      lVar18 = *plVar12;
                      if (lVar18 != 0) {
                        if (uVar21 < *(uint *)(lVar18 + 0x18)) {
                          lVar19 = *unaff_x28;
                          if (lVar19 != 0) {
                            uVar2 = *(uint *)(lVar18 + lVar11 * 4 + 0x20);
                            if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                              uVar17 = (**(code **)(*plVar13 + 0x828))
                                                 (plVar13,*(undefined8 *)
                                                           (lVar19 + (long)(int)uVar2 * 8 + 0x20),
                                                  *(undefined8 *)(*plVar13 + 0x830));
                              goto joined_r0x01f92e6c;
                            }
                            goto LAB_01f9340c;
                          }
                          goto LAB_01f92644;
                        }
                        goto LAB_01f9340c;
                      }
                      goto LAB_01f92644;
                    }
                    goto LAB_01f9340c;
                  }
                  break;
                }
              }
            }
            else {
              if ((uVar14 & 1) != 0) break;
              if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_01f9340c;
              lVar18 = *plVar12;
              if (lVar18 == 0) goto LAB_01f92644;
              if (*(uint *)(lVar18 + 0x18) <= uVar21) goto LAB_01f9340c;
              lVar19 = *unaff_x28;
              if (lVar19 == 0) goto LAB_01f92644;
              uVar2 = *(uint *)(lVar18 + lVar11 * 4 + 0x20);
              if (*(uint *)(lVar19 + 0x18) <= uVar2) goto LAB_01f9340c;
              uVar15 = *(undefined8 *)(lVar19 + (long)(int)uVar2 * 8 + 0x20);
              if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              bVar5 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
              if ((*(byte *)(*plVar13 + 0x130) < bVar5) ||
                 (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar5 * 8 + -8) !=
                  *(long *)PTR_DAT_027b3ec0)) {
                    /* WARNING: Subroutine does not return */
                FUN_01230f60(plVar13);
              }
              uVar17 = FUN_01f9451c(uVar15,plVar13);
              plVar23 = (long *)PTR_DAT_027b32e0;
joined_r0x01f92e6c:
              if ((uVar17 & 1) == 0) break;
            }
          }
        }
      }
LAB_01f92e70:
      uVar21 = uVar21 + 1;
      uVar22 = uVar6;
    } while (uVar6 != uVar21);
  }
  if (*(int *)(*plVar23 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar17 = FUN_01f801dc(plStack0000000000000048,0,0);
  if (((uVar17 & 1) != 0) && (uVar22 == *(int *)(lVar16 + 0x18) - 1U)) {
    lVar16 = *unaff_x28;
    if (lVar16 == 0) goto LAB_01f92644;
    lVar11 = (-(ulong)(uVar22 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar22 << 3) + 0x20;
    while ((int)uVar22 < *(int *)(lVar16 + 0x18)) {
      if ((plStack0000000000000048 == (long *)0x0) ||
         (uVar17 = FUN_01f81644(plStack0000000000000048,0), plVar10 == (long *)0x0))
      goto LAB_01f92644;
      if (*(uint *)(plVar10 + 3) <= uVar22) goto LAB_01f9340c;
      uVar15 = *(undefined8 *)((long)plVar10 + lVar11);
      if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar14 = FUN_01f7f404(uVar15,0,0);
      plVar23 = (long *)PTR_DAT_027b32e0;
      if ((uVar17 & 1) == 0) {
        if ((uVar14 & 1) == 0) {
          if (*(uint *)(plVar10 + 3) <= uVar22) goto LAB_01f9340c;
          uVar17 = (**(code **)(*plStack0000000000000048 + 0x288))
                             (plStack0000000000000048,*(undefined8 *)((long)plVar10 + lVar11),
                              *(undefined8 *)(*plStack0000000000000048 + 0x290));
          if ((uVar17 & 1) == 0) {
            if (*(uint *)(plVar10 + 3) <= uVar22) goto LAB_01f9340c;
            if (*(long *)((long)plVar10 + lVar11) == 0) goto LAB_01f92644;
            uVar17 = FUN_01f81468(*(long *)((long)plVar10 + lVar11),0);
            if ((uVar17 & 1) != 0) {
              lVar16 = *unaff_x28;
              if (lVar16 != 0) {
                if (uVar22 < *(uint *)(lVar16 + 0x18)) {
                  uVar17 = (**(code **)(*plStack0000000000000048 + 0x828))
                                     (plStack0000000000000048,*(undefined8 *)(lVar16 + lVar11),
                                      *(undefined8 *)(*plStack0000000000000048 + 0x830));
                  goto joined_r0x01f93040;
                }
                goto LAB_01f9340c;
              }
              goto LAB_01f92644;
            }
            break;
          }
        }
      }
      else {
        if ((uVar14 & 1) != 0) break;
        lVar16 = *unaff_x28;
        if (lVar16 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_01f9340c;
        uVar15 = *(undefined8 *)(lVar16 + lVar11);
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        bVar5 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
        if ((*(byte *)(*plStack0000000000000048 + 0x130) < bVar5) ||
           (*(long *)(*(long *)(*plStack0000000000000048 + 200) + (ulong)bVar5 * 8 + -8) !=
            *(long *)PTR_DAT_027b3ec0)) {
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(plStack0000000000000048);
        }
        uVar17 = FUN_01f9451c(uVar15,plStack0000000000000048);
        plVar23 = (long *)PTR_DAT_027b32e0;
joined_r0x01f93040:
        if ((uVar17 & 1) == 0) break;
      }
      lVar16 = *unaff_x28;
      uVar22 = uVar22 + 1;
      lVar11 = lVar11 + 8;
      if (lVar16 == 0) goto LAB_01f92644;
    }
  }
  if (*unaff_x28 == 0) goto LAB_01f92644;
  if (uVar22 == *(uint *)(*unaff_x28 + 0x18)) {
    if (unaff_x23 != 0) {
      if ((uVar20 < *(uint *)(unaff_x23 + 0x18)) && (uVar8 < *(uint *)(unaff_x23 + 0x18))) {
        *(undefined8 *)(unaff_x23 + (long)(int)uVar8 * 8 + 0x20) =
             *(undefined8 *)(unaff_x23 + uVar20 * 8 + 0x20);
        thunk_FUN_01286abc();
        if (plVar9 != (long *)0x0) {
          if ((plStack0000000000000048 == (long *)0x0) ||
             (lVar16 = thunk_FUN_0124baac(plStack0000000000000048,*(undefined8 *)(*plVar9 + 0x40)),
             lVar16 != 0)) {
            if (uVar8 < *(uint *)(plVar9 + 3)) {
              plVar9[(long)(int)uVar8 + 4] = (long)plStack0000000000000048;
              thunk_FUN_01286abc(plVar9 + (long)(int)uVar8 + 4,plStack0000000000000048);
              uVar6 = *(uint *)(unaff_x24 + 3);
              if (uVar20 < uVar6) {
                lVar16 = *plVar25;
                goto joined_r0x01f927d4;
              }
            }
            goto LAB_01f9340c;
          }
          goto LAB_01f941d8;
        }
        goto LAB_01f92644;
      }
      goto LAB_01f9340c;
    }
    goto LAB_01f92644;
  }
LAB_01f93214:
  uVar6 = *(uint *)(unaff_x24 + 3);
  uVar17 = (ulong)uVar6;
  uVar20 = uVar20 + 1;
  if ((long)(int)uVar6 <= (long)uVar20) goto LAB_01f9329c;
  goto LAB_01f9266c;
LAB_01f9329c:
  if (uVar8 == 1) {
    if (unaff_x25 != 0) {
      if (unaff_x23 == 0) goto LAB_01f92644;
      if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
      if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_01f92644;
      lVar16 = FUN_01f8a1a8(*(long *)(unaff_x23 + 0x20),0);
      lVar11 = *unaff_x28;
      if ((lVar11 == 0) || (plVar9 == (long *)0x0)) goto LAB_01f92644;
      if ((int)plVar9[3] == 0) goto LAB_01f9340c;
      lVar18 = plVar9[4];
      if (*(int *)(*plVar23 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      bVar5 = FUN_01f801dc(lVar18,0,0);
      lVar18 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
      if (lVar16 == 0) {
        lVar19 = 0;
      }
      else {
        uVar15 = *(undefined8 *)PTR_DAT_027b1ca8;
        lVar19 = thunk_FUN_0124baac(lVar16,uVar15);
        if (lVar19 == 0) {
LAB_01f93580:
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(lVar16,uVar15);
        }
      }
      uVar15 = *(undefined8 *)(lVar11 + 0x18);
      FUN_01fab77c(lVar18,0);
      *(long *)(lVar18 + 0x10) = lVar19;
      thunk_FUN_01286abc((long *)(lVar18 + 0x10),lVar19);
      *(int *)(lVar18 + 0x18) = (int)uVar15;
      *(byte *)(lVar18 + 0x1c) = bVar5 & 1;
      *in_stack_00000010 = lVar18;
      thunk_FUN_01286abc(in_stack_00000010,lVar18);
      if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
      uVar15 = *(undefined8 *)(unaff_x23 + 0x20);
      lVar16 = *unaff_x28;
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      FUN_01f94678(uVar15,lVar16);
      uVar6 = (uint)unaff_x24[3];
      plVar23 = (long *)PTR_DAT_027b32e0;
    }
    if (uVar6 == 0) goto LAB_01f9340c;
    plVar25 = unaff_x24 + 4;
    plVar10 = (long *)*plVar25;
    if (((plVar10 == (long *)0x0) ||
        (lVar16 = (**(code **)(*plVar10 + 0x378))(plVar10,*(undefined8 *)(*plVar10 + 0x380)),
        lVar16 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
    iVar7 = *(int *)(*unaff_x28 + 0x18);
    if (*(int *)(lVar16 + 0x18) == iVar7) {
      if (plVar9 == (long *)0x0) goto LAB_01f92644;
      if ((int)plVar9[3] == 0) goto LAB_01f9340c;
      lVar11 = plVar9[4];
      if (*(int *)(*plVar23 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar20 = FUN_01f801dc(lVar11,0,0);
      if ((uVar20 & 1) != 0) {
        plVar10 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,
                                       *(undefined4 *)(lVar16 + 0x18));
        uVar8 = *(int *)(lVar16 + 0x18) - 1;
        FUN_01f89ca0(*unaff_x28,0,plVar10,0,uVar8,0);
        if ((int)plVar9[3] == 0) goto LAB_01f9340c;
        lVar11 = plVar9[4];
        lVar16 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
        if (lVar16 == 0) goto LAB_01f92644;
        if (*(int *)(lVar16 + 0x18) == 0) goto LAB_01f9340c;
        *(undefined4 *)(lVar16 + 0x20) = 1;
        lVar16 = thunk_FUN_01f894b8(lVar11,lVar16,0);
        if (plVar10 == (long *)0x0) goto LAB_01f92644;
        if ((lVar16 != 0) &&
           (lVar11 = thunk_FUN_0124baac(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
        goto LAB_01f941d8;
        if (*(uint *)(plVar10 + 3) <= uVar8) goto LAB_01f9340c;
        plVar9 = plVar10 + (long)(int)uVar8 + 4;
        *plVar9 = lVar16;
        thunk_FUN_01286abc(plVar9,lVar16);
        if (*(uint *)(plVar10 + 3) <= uVar8) goto LAB_01f9340c;
        lVar16 = *unaff_x28;
        if (lVar16 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_01f9340c;
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_01f92644;
        bVar5 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar5) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)PTR_DAT_027b3f80
           )) {
LAB_01f942dc:
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(plVar9);
        }
        FUN_01f89750(plVar9,*(undefined8 *)(lVar16 + (long)(int)uVar8 * 8 + 0x20),0,0);
        goto LAB_01f94118;
      }
    }
    else {
      if (iVar7 < *(int *)(lVar16 + 0x18)) {
        plVar10 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
        lVar11 = *unaff_x28;
        if (lVar11 != 0) {
          uVar20 = 0;
          plVar23 = plVar10 + 4;
          do {
            if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar20) {
              uVar8 = *(uint *)(lVar16 + 0x18);
              if ((int)(uVar8 - 1) <= (int)uVar20) goto LAB_01f93a68;
              goto LAB_01f939f4;
            }
            if (*(uint *)(lVar11 + 0x18) <= uVar20) goto LAB_01f9340c;
            if (plVar10 == (long *)0x0) break;
            lVar11 = *(long *)(lVar11 + uVar20 * 8 + 0x20);
            if ((lVar11 != 0) &&
               (lVar18 = thunk_FUN_0124baac(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar18 == 0))
            goto LAB_01f941d8;
            if (*(uint *)(plVar10 + 3) <= uVar20) goto LAB_01f9340c;
            *plVar23 = lVar11;
            thunk_FUN_01286abc(plVar23,lVar11);
            lVar11 = *unaff_x28;
            uVar20 = uVar20 + 1;
            plVar23 = plVar23 + 1;
          } while (lVar11 != 0);
        }
        goto LAB_01f92644;
      }
      if ((int)unaff_x24[3] == 0) goto LAB_01f9340c;
      plVar10 = (long *)*plVar25;
      if (plVar10 == (long *)0x0) goto LAB_01f92644;
      uVar8 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
      if ((uVar8 >> 1 & 1) == 0) {
        plVar10 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,
                                       *(undefined4 *)(lVar16 + 0x18));
        uVar8 = *(int *)(lVar16 + 0x18) - 1;
        FUN_01f89ca0(*unaff_x28,0,plVar10,0,uVar8,0);
        if (plVar9 == (long *)0x0) goto LAB_01f92644;
        if ((int)plVar9[3] == 0) goto LAB_01f9340c;
        lVar11 = plVar9[4];
        lVar16 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
        if ((*unaff_x28 == 0) || (lVar16 == 0)) goto LAB_01f92644;
        if (*(int *)(lVar16 + 0x18) == 0) goto LAB_01f9340c;
        *(uint *)(lVar16 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar8;
        lVar16 = thunk_FUN_01f894b8(lVar11,lVar16,0);
        if (plVar10 == (long *)0x0) goto LAB_01f92644;
        if ((lVar16 != 0) &&
           (lVar11 = thunk_FUN_0124baac(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
        goto LAB_01f941d8;
        if (*(uint *)(plVar10 + 3) <= uVar8) goto LAB_01f9340c;
        plVar9 = plVar10 + (long)(int)uVar8 + 4;
        *plVar9 = lVar16;
        thunk_FUN_01286abc(plVar9,lVar16);
        if (*(uint *)(plVar10 + 3) <= uVar8) goto LAB_01f9340c;
        lVar16 = *unaff_x28;
        if (lVar16 == 0) goto LAB_01f92644;
        plVar9 = (long *)*plVar9;
        if (plVar9 != (long *)0x0) {
          bVar5 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
          if ((*(byte *)(*plVar9 + 0x130) < bVar5) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) !=
              *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
        }
        FUN_01f89ca0(lVar16,uVar8,plVar9,0,*(int *)(lVar16 + 0x18) - uVar8,0);
        *unaff_x28 = (long)plVar10;
        thunk_FUN_01286abc(unaff_x28,plVar10);
      }
    }
    goto LAB_01f94128;
  }
  if (uVar8 == 0) {
LAB_01f9423c:
    uVar15 = thunk_FUN_01279b34(PTR_DAT_027c1bf0);
    thunk_FUN_01279b34(PTR_DAT_027b3ed0);
    uVar26 = thunk_FUN_0124bba8();
    FUN_01f6b058(uVar26,uVar15,0);
LAB_01f9426c:
    uVar15 = thunk_FUN_01279b34(PTR_DAT_027c1bf8);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar26,uVar15);
  }
  if (1 < (int)uVar8) {
    if (uVar6 != 0) {
      lVar16 = 0;
      lVar11 = 0;
      uVar6 = 0;
      bVar3 = false;
      while( true ) {
        if (unaff_x23 == 0) goto LAB_01f92644;
        if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar6) break;
        if (plVar9 == (long *)0x0) goto LAB_01f92644;
        if (((((uint)plVar9[3] <= uVar6) || (uVar20 = lVar16 + 1, uVar17 <= uVar20)) ||
            ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar20)) ||
           ((plVar9[3] & 0xffffffffU) <= uVar20)) break;
        lVar19 = unaff_x24[lVar11 + 4];
        lVar27 = unaff_x24[lVar16 + 5];
        lVar18 = plVar9[lVar11 + 4];
        uVar15 = *(undefined8 *)(unaff_x23 + lVar11 * 8 + 0x20);
        uVar26 = *(undefined8 *)(unaff_x23 + 0x28 + lVar16 * 8);
        lVar24 = plVar9[lVar16 + 5];
        lVar11 = *unaff_x28;
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        iVar7 = FUN_01f947fc(lVar19,uVar15,lVar18,lVar27,uVar26,lVar24,plVar10,lVar11);
        if (iVar7 == 0) {
          bVar3 = true;
        }
        else if (iVar7 == 2) {
          uVar6 = (int)lVar16 + 1;
          bVar3 = false;
        }
        if ((ulong)uVar8 - 2 == lVar16) {
          plVar23 = (long *)PTR_DAT_027b32e0;
          if (!bVar3) goto LAB_01f934c8;
          uVar15 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
          thunk_FUN_01279b34(PTR_DAT_027bc458);
          uVar26 = thunk_FUN_0124bba8();
          FUN_01ee31d4(uVar26,uVar15,0);
          goto LAB_01f9426c;
        }
        lVar11 = (long)(int)uVar6;
        lVar16 = lVar16 + 1;
        uVar17 = unaff_x24[3] & 0xffffffff;
        if ((uint)unaff_x24[3] <= uVar6) break;
      }
    }
    goto LAB_01f9340c;
  }
  uVar6 = 0;
LAB_01f934c8:
  if (unaff_x25 != 0) {
    if (unaff_x23 == 0) goto LAB_01f92644;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
    plVar10 = (long *)(unaff_x23 + (long)(int)uVar6 * 8 + 0x20);
    lVar16 = *plVar10;
    if (lVar16 == 0) goto LAB_01f92644;
    lVar16 = FUN_01f8a1a8(lVar16,0);
    lVar11 = *unaff_x28;
    if ((lVar11 == 0) || (plVar9 == (long *)0x0)) goto LAB_01f92644;
    if (*(uint *)(plVar9 + 3) <= uVar6) goto LAB_01f9340c;
    lVar18 = plVar9[(long)(int)uVar6 + 4];
    if (*(int *)(*plVar23 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    bVar5 = FUN_01f801dc(lVar18,0,0);
    lVar18 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
    if (lVar16 == 0) {
      lVar19 = 0;
    }
    else {
      uVar15 = *(undefined8 *)PTR_DAT_027b1ca8;
      lVar19 = thunk_FUN_0124baac(lVar16,uVar15);
      if (lVar19 == 0) goto LAB_01f93580;
    }
    uVar15 = *(undefined8 *)(lVar11 + 0x18);
    FUN_01fab77c(lVar18,0);
    *(long *)(lVar18 + 0x10) = lVar19;
    thunk_FUN_01286abc((long *)(lVar18 + 0x10),lVar19);
    *(int *)(lVar18 + 0x18) = (int)uVar15;
    *(byte *)(lVar18 + 0x1c) = bVar5 & 1;
    *in_stack_00000010 = lVar18;
    thunk_FUN_01286abc(in_stack_00000010,lVar18);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
    lVar16 = *plVar10;
    lVar11 = *unaff_x28;
    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f94678(lVar16,lVar11);
    plVar23 = (long *)PTR_DAT_027b32e0;
  }
  if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_01f9340c;
  plVar25 = unaff_x24 + (long)(int)uVar6 + 4;
  plVar10 = (long *)*plVar25;
  if (((plVar10 == (long *)0x0) ||
      (lVar16 = (**(code **)(*plVar10 + 0x378))(plVar10,*(undefined8 *)(*plVar10 + 0x380)),
      lVar16 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
  iVar7 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar16 + 0x18) == iVar7) {
    if (plVar9 == (long *)0x0) goto LAB_01f92644;
    if (*(uint *)(plVar9 + 3) <= uVar6) goto LAB_01f9340c;
    lVar11 = plVar9[(long)(int)uVar6 + 4];
    if (*(int *)(*plVar23 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar20 = FUN_01f801dc(lVar11,0,0);
    if ((uVar20 & 1) != 0) {
      plVar10 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar16 + 0x18))
      ;
      uVar8 = *(int *)(lVar16 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar10,0,uVar8,0);
      if (*(uint *)(plVar9 + 3) <= uVar6) goto LAB_01f9340c;
      lVar11 = plVar9[(long)(int)uVar6 + 4];
      lVar16 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if (lVar16 == 0) goto LAB_01f92644;
      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_01f9340c;
      *(undefined4 *)(lVar16 + 0x20) = 1;
      lVar16 = thunk_FUN_01f894b8(lVar11,lVar16,0);
      if (plVar10 == (long *)0x0) goto LAB_01f92644;
      if ((lVar16 != 0) &&
         (lVar11 = thunk_FUN_0124baac(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar10 + 3) <= uVar8) goto LAB_01f9340c;
      plVar9 = plVar10 + (long)(int)uVar8 + 4;
      *plVar9 = lVar16;
      thunk_FUN_01286abc(plVar9,lVar16);
      if (*(uint *)(plVar10 + 3) <= uVar8) goto LAB_01f9340c;
      lVar16 = *unaff_x28;
      if (lVar16 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_01f9340c;
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) goto LAB_01f92644;
      bVar5 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar5) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)PTR_DAT_027b3f80))
      goto LAB_01f942dc;
      FUN_01f89750(plVar9,*(undefined8 *)(lVar16 + (long)(int)uVar8 * 8 + 0x20),0,0);
      goto FUN_01f94198;
    }
  }
  else {
    if (iVar7 < *(int *)(lVar16 + 0x18)) {
      plVar10 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
      lVar11 = *unaff_x28;
      if (lVar11 != 0) {
        uVar20 = 0;
        plVar23 = plVar10 + 4;
        do {
          if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar20) {
            uVar8 = *(uint *)(lVar16 + 0x18);
            if ((int)(uVar8 - 1) <= (int)uVar20) goto LAB_01f94000;
            goto LAB_01f93f8c;
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar20) goto LAB_01f9340c;
          if (plVar10 == (long *)0x0) break;
          lVar11 = *(long *)(lVar11 + uVar20 * 8 + 0x20);
          if ((lVar11 != 0) &&
             (lVar18 = thunk_FUN_0124baac(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar18 == 0))
          goto LAB_01f941d8;
          if (*(uint *)(plVar10 + 3) <= uVar20) goto LAB_01f9340c;
          *plVar23 = lVar11;
          thunk_FUN_01286abc(plVar23,lVar11);
          lVar11 = *unaff_x28;
          uVar20 = uVar20 + 1;
          plVar23 = plVar23 + 1;
        } while (lVar11 != 0);
      }
      goto LAB_01f92644;
    }
    if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_01f9340c;
    plVar10 = (long *)*plVar25;
    if (plVar10 == (long *)0x0) goto LAB_01f92644;
    uVar8 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
    if ((uVar8 >> 1 & 1) == 0) {
      plVar10 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar16 + 0x18))
      ;
      uVar8 = *(int *)(lVar16 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar10,0,uVar8,0);
      if (plVar9 == (long *)0x0) goto LAB_01f92644;
      if (*(uint *)(plVar9 + 3) <= uVar6) goto LAB_01f9340c;
      lVar11 = plVar9[(long)(int)uVar6 + 4];
      lVar16 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if ((*unaff_x28 == 0) || (lVar16 == 0)) goto LAB_01f92644;
      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_01f9340c;
      *(uint *)(lVar16 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar8;
      lVar16 = thunk_FUN_01f894b8(lVar11,lVar16,0);
      if (plVar10 == (long *)0x0) goto LAB_01f92644;
      if ((lVar16 != 0) &&
         (lVar11 = thunk_FUN_0124baac(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar10 + 3) <= uVar8) goto LAB_01f9340c;
      plVar9 = plVar10 + (long)(int)uVar8 + 4;
      *plVar9 = lVar16;
      thunk_FUN_01286abc(plVar9,lVar16);
      if (*(uint *)(plVar10 + 3) <= uVar8) goto LAB_01f9340c;
      lVar16 = *unaff_x28;
      if (lVar16 == 0) goto LAB_01f92644;
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) {
        bVar5 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar5) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)PTR_DAT_027b3f80
           )) goto LAB_01f942dc;
      }
      FUN_01f89ca0(lVar16,uVar8,plVar9,0,*(int *)(lVar16 + 0x18) - uVar8,0);
      *unaff_x28 = (long)plVar10;
      thunk_FUN_01286abc(unaff_x28,plVar10);
    }
  }
  goto OVRPlugin_UnityOpenXR__OnSessionExiting;
  while( true ) {
    plVar12 = *(long **)(lVar16 + 0x20 + uVar20 * 8);
    if ((plVar12 == (long *)0x0) ||
       (lVar11 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200)),
       plVar10 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar11 != 0) &&
       (lVar18 = thunk_FUN_0124baac(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar18 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar10 + 3) <= (uint)uVar20) goto LAB_01f9340c;
    *plVar23 = lVar11;
    thunk_FUN_01286abc(plVar23,lVar11);
    uVar8 = *(uint *)(lVar16 + 0x18);
    uVar20 = uVar20 + 1;
    plVar23 = plVar23 + 1;
    if ((int)(uVar8 - 1) <= (int)uVar20) break;
LAB_01f939f4:
    if (uVar8 <= (uint)uVar20) goto LAB_01f9340c;
  }
LAB_01f93a68:
  if (plVar9 == (long *)0x0) goto LAB_01f92644;
  if ((int)plVar9[3] == 0) goto LAB_01f9340c;
  lVar11 = plVar9[4];
  if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar17 = FUN_01f801dc(lVar11,0,0);
  uVar8 = (uint)uVar20;
  if ((uVar17 & 1) == 0) {
    if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_01f9340c;
    plVar9 = *(long **)(lVar16 + (long)(int)uVar8 * 8 + 0x20);
    if ((plVar9 == (long *)0x0) ||
       (lVar16 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200)),
       plVar10 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar16 != 0) &&
       (lVar11 = thunk_FUN_0124baac(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto LAB_01f941d8;
    uVar6 = *(uint *)(plVar10 + 3);
  }
  else {
    if ((int)plVar9[3] == 0) goto LAB_01f9340c;
    lVar16 = plVar9[4];
    uVar15 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
    lVar16 = thunk_FUN_01f894b8(lVar16,uVar15,0);
    if (plVar10 == (long *)0x0) goto LAB_01f92644;
    if ((lVar16 != 0) &&
       (lVar11 = thunk_FUN_0124baac(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto LAB_01f941d8;
    uVar6 = *(uint *)(plVar10 + 3);
  }
  if (uVar6 <= uVar8) goto LAB_01f9340c;
  plVar10[(long)(int)uVar8 + 4] = lVar16;
  thunk_FUN_01286abc(plVar10 + (long)(int)uVar8 + 4,lVar16);
LAB_01f94118:
  *unaff_x28 = (long)plVar10;
  thunk_FUN_01286abc(unaff_x28,plVar10);
LAB_01f94128:
  if ((int)unaff_x24[3] != 0) goto LAB_01f941b4;
  goto LAB_01f9340c;
  while( true ) {
    uVar20 = uVar20 + 1;
    plVar23 = plVar23 + 1;
    if (lVar16 == 0) break;
LAB_01f925c8:
    if ((long)(int)*(uint *)(lVar16 + 0x18) <= (long)uVar20) {
      if ((int)unaff_x24[3] < 1) goto LAB_01f9423c;
      uVar20 = 0;
      uVar8 = 0;
      uVar17 = unaff_x24[3] & 0xffffffff;
      plVar23 = (long *)PTR_DAT_027b32e0;
      goto LAB_01f9266c;
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_01f9340c;
    lVar11 = *(long *)(lVar16 + uVar20 * 8 + 0x20);
    if (lVar11 != 0) {
      lVar16 = thunk_FUN_0122c1cc(lVar11,0);
      if (plVar10 == (long *)0x0) break;
                    /* try { // try from 01f92604 to 02092673 has its CatchHandler @ 01f929ec */
      if ((lVar16 != 0) &&
         (lVar11 = thunk_FUN_0124baac(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar10 + 3) <= uVar20) goto LAB_01f9340c;
      *plVar23 = lVar16;
      thunk_FUN_01286abc(plVar23,lVar16);
      lVar16 = *unaff_x28;
    }
  }
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
  while( true ) {
    plVar12 = *(long **)(lVar16 + 0x20 + uVar20 * 8);
    if ((plVar12 == (long *)0x0) ||
       (lVar11 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200)),
       plVar10 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar11 != 0) &&
       (lVar18 = thunk_FUN_0124baac(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar18 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar10 + 3) <= (uint)uVar20) goto LAB_01f9340c;
    *plVar23 = lVar11;
    thunk_FUN_01286abc(plVar23,lVar11);
    uVar8 = *(uint *)(lVar16 + 0x18);
    uVar20 = uVar20 + 1;
    plVar23 = plVar23 + 1;
    if ((int)(uVar8 - 1) <= (int)uVar20) break;
LAB_01f93f8c:
    if (uVar8 <= (uint)uVar20) goto LAB_01f9340c;
  }
LAB_01f94000:
  if (plVar9 == (long *)0x0) goto LAB_01f92644;
  if (*(uint *)(plVar9 + 3) <= uVar6) goto LAB_01f9340c;
  lVar11 = plVar9[(long)(int)uVar6 + 4];
  if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar17 = FUN_01f801dc(lVar11,0,0);
  uVar8 = (uint)uVar20;
  if ((uVar17 & 1) == 0) {
    if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_01f9340c;
    plVar9 = *(long **)(lVar16 + (long)(int)uVar8 * 8 + 0x20);
    if ((plVar9 == (long *)0x0) ||
       (lVar16 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200)),
       plVar10 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar16 != 0) &&
       (lVar11 = thunk_FUN_0124baac(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto LAB_01f941d8;
    uVar22 = *(uint *)(plVar10 + 3);
  }
  else {
    if (*(uint *)(plVar9 + 3) <= uVar6) goto LAB_01f9340c;
    lVar16 = plVar9[(long)(int)uVar6 + 4];
    uVar15 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
    lVar16 = thunk_FUN_01f894b8(lVar16,uVar15,0);
    if (plVar10 == (long *)0x0) goto LAB_01f92644;
    if ((lVar16 != 0) &&
       (lVar11 = thunk_FUN_0124baac(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
LAB_01f941d8:
      uVar15 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar15,0);
    }
    uVar22 = *(uint *)(plVar10 + 3);
  }
  if (uVar22 <= uVar8) goto LAB_01f9340c;
  plVar10[(long)(int)uVar8 + 4] = lVar16;
  thunk_FUN_01286abc(plVar10 + (long)(int)uVar8 + 4,lVar16);
FUN_01f94198:
  *unaff_x28 = (long)plVar10;
  thunk_FUN_01286abc(unaff_x28,plVar10);
OVRPlugin_UnityOpenXR__OnSessionExiting:
  if (uVar6 < *(uint *)(unaff_x24 + 3)) {
LAB_01f941b4:
    return *plVar25;
  }
LAB_01f9340c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


