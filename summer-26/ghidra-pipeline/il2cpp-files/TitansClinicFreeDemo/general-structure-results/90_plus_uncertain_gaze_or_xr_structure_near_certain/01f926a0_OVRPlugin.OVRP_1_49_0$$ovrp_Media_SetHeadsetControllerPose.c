/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetHeadsetControllerPose
ENTRY_POINT: 01f926a0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 184
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


long OVRPlugin_OVRP_1_49_0__ovrp_Media_SetHeadsetControllerPose(long *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *unaff_x19;
  uint unaff_w20;
  uint uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  undefined8 uVar20;
  long *unaff_x28;
  long lVar21;
  long *in_stack_00000010;
  long in_stack_00000020;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *plStack0000000000000048;
  uint in_stack_00000050;
  long *in_stack_00000058;
  
code_r0x01f926a0:
  lVar8 = (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
  if (lVar8 == 0) goto LAB_01f92644;
  uVar18 = *(ulong *)(lVar8 + 0x18);
  lVar14 = *unaff_x28;
  if (uVar18 == 0) {
    if (lVar14 == 0) goto LAB_01f92644;
    if (*(long *)(lVar14 + 0x18) != 0) {
      if (*(uint *)(unaff_x24 + 3) <= unaff_x25) goto LAB_01f9340c;
      plVar10 = (long *)*unaff_x19;
      if (plVar10 == (long *)0x0) goto LAB_01f92644;
      uVar6 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
      if ((uVar6 >> 1 & 1) == 0) goto LAB_01f93214;
    }
    if (unaff_x23 == 0) goto LAB_01f92644;
    if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) || (*(uint *)(unaff_x23 + 0x18) <= unaff_w20))
    goto LAB_01f9340c;
    *(undefined8 *)(unaff_x23 + (long)(int)unaff_w20 * 8 + 0x20) =
         *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20);
    thunk_FUN_01286abc();
    uVar6 = *(uint *)(unaff_x24 + 3);
    if (uVar6 <= unaff_x25) goto LAB_01f9340c;
    lVar8 = *unaff_x19;
joined_r0x01f927d4:
    if (lVar8 != 0) {
      lVar14 = thunk_FUN_0124baac(lVar8,*(undefined8 *)(*unaff_x24 + 0x40));
      if (lVar14 == 0) goto LAB_01f941d8;
      uVar6 = (uint)unaff_x24[3];
    }
    lVar14 = (long)(int)unaff_w20;
    if (uVar6 <= unaff_w20) goto LAB_01f9340c;
    unaff_x24[lVar14 + 4] = lVar8;
    unaff_w20 = unaff_w20 + 1;
    thunk_FUN_01286abc(unaff_x24 + lVar14 + 4,lVar8);
    unaff_x22 = (long *)PTR_DAT_027b32e0;
    goto LAB_01f93214;
  }
  if (lVar14 == 0) goto LAB_01f92644;
  uVar6 = *(uint *)(lVar14 + 0x18);
  iVar5 = (int)uVar18;
                    /* try { // try from 01f926d4 to 020926d7 has its CatchHandler @ 01f929c0 */
  if ((int)uVar6 < iVar5) {
    uVar7 = iVar5 - 1;
    if ((int)uVar6 < (int)uVar7) {
      plVar10 = (long *)(lVar8 + (long)(int)uVar6 * 8 + 0x20);
      do {
        if ((uint)uVar18 <= uVar6) goto LAB_01f9340c;
        plVar9 = (long *)*plVar10;
        if (plVar9 == (long *)0x0) goto LAB_01f92644;
        lVar14 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200));
        puVar3 = PTR_DAT_027baa38;
        lVar15 = *(long *)PTR_DAT_027baa38;
                    /* try { // try from 01f92720 to 02092747 has its CatchHandler @ 01f92a14 */
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01220628(lVar15);
          lVar15 = *(long *)puVar3;
        }
        if (lVar14 == **(long **)(lVar15 + 0xb8)) {
          uVar18 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar7 = *(uint *)(lVar8 + 0x18) - 1;
          unaff_x28 = in_stack_00000058;
          break;
        }
        uVar18 = *(ulong *)(lVar8 + 0x18);
        uVar6 = uVar6 + 1;
        plVar10 = plVar10 + 1;
        uVar7 = (int)uVar18 - 1;
        unaff_x28 = in_stack_00000058;
      } while ((int)uVar6 < (int)uVar7);
    }
    if (uVar6 == uVar7) {
      if ((uint)uVar18 <= uVar6) goto LAB_01f9340c;
      plVar9 = (long *)(lVar8 + (long)(int)uVar6 * 8 + 0x20);
      plVar10 = (long *)*plVar9;
      if (plVar10 == (long *)0x0) goto LAB_01f92644;
      lVar14 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200));
      puVar3 = PTR_DAT_027baa38;
      lVar15 = *(long *)PTR_DAT_027baa38;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01220628(lVar15);
        lVar15 = *(long *)puVar3;
      }
      if (lVar14 != **(long **)(lVar15 + 0xb8)) goto LAB_01f92a28;
      if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_01f9340c;
      plVar10 = (long *)*plVar9;
      if ((plVar10 == (long *)0x0) ||
         (lVar14 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0)),
         lVar14 == 0)) goto LAB_01f92644;
      uVar18 = FUN_01f80ec8(lVar14,0);
      if ((uVar18 & 1) != 0) {
        if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_01f9340c;
        plVar10 = (long *)*plVar9;
        uVar19 = *(undefined8 *)PTR_DAT_027c1be0;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar19 = FUN_01f7d8a0(uVar19,0);
        if (plVar10 == (long *)0x0) goto LAB_01f92644;
        uVar18 = (**(code **)(*plVar10 + 0x208))(plVar10,uVar19,1,*(undefined8 *)(*plVar10 + 0x210))
        ;
        unaff_x22 = (long *)PTR_DAT_027b32e0;
        if ((uVar18 & 1) != 0) {
          if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_01f9340c;
          plVar9 = (long *)*plVar9;
          if (plVar9 != (long *)0x0) {
            plVar10 = (long *)(**(code **)(*plVar9 + 0x1d8))
                                        (plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
            goto joined_r0x01f931fc;
          }
          goto LAB_01f92644;
        }
      }
    }
    goto LAB_01f93214;
  }
  if (iVar5 == 0) goto LAB_01f9340c;
  uVar7 = iVar5 - 1;
  lVar14 = (long)(int)uVar7;
  plVar9 = (long *)(lVar8 + lVar14 * 8 + 0x20);
  plVar10 = (long *)*plVar9;
  if ((plVar10 == (long *)0x0) ||
     (lVar15 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0)),
     lVar15 == 0)) goto LAB_01f92644;
  uVar18 = FUN_01f80ec8(lVar15,0);
  if (iVar5 < (int)uVar6) {
    unaff_x24 = in_stack_00000040;
    if ((uVar18 & 1) != 0) {
      if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_01f9340c;
      plVar10 = (long *)*plVar9;
      uVar19 = *(undefined8 *)PTR_DAT_027c1be0;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar19 = FUN_01f7d8a0(uVar19,0);
      if (plVar10 == (long *)0x0) goto LAB_01f92644;
      uVar18 = (**(code **)(*plVar10 + 0x208))(plVar10,uVar19,1,*(undefined8 *)(*plVar10 + 0x210));
      unaff_x22 = (long *)PTR_DAT_027b32e0;
      if ((uVar18 & 1) != 0) {
        if (unaff_x23 == 0) goto LAB_01f92644;
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
        lVar15 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_01f9340c;
        if (*(uint *)(lVar15 + lVar14 * 4 + 0x20) == uVar7) {
LAB_01f9323c:
          if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_01f9340c;
          plVar9 = (long *)*plVar9;
          if (plVar9 != (long *)0x0) {
            plVar10 = (long *)(**(code **)(*plVar9 + 0x1d8))
                                        (plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
            unaff_x24 = in_stack_00000040;
joined_r0x01f931fc:
            if (plVar10 != (long *)0x0) {
              plStack0000000000000048 =
                   (long *)(**(code **)(*plVar10 + 0x408))
                                     (plVar10,*(undefined8 *)(*plVar10 + 0x410));
              goto LAB_01f92a2c;
            }
          }
          goto LAB_01f92644;
        }
      }
    }
    goto LAB_01f93214;
  }
  unaff_x24 = in_stack_00000040;
  if ((uVar18 & 1) == 0) {
LAB_01f92a28:
    plStack0000000000000048 = (long *)0x0;
  }
  else {
    if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_01f9340c;
    plVar10 = (long *)*plVar9;
    uVar19 = *(undefined8 *)PTR_DAT_027c1be0;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar19 = FUN_01f7d8a0(uVar19,0);
    if (plVar10 == (long *)0x0) goto LAB_01f92644;
    uVar18 = (**(code **)(*plVar10 + 0x208))(plVar10,uVar19,1,*(undefined8 *)(*plVar10 + 0x210));
    unaff_x22 = (long *)PTR_DAT_027b32e0;
    if ((uVar18 & 1) != 0) {
      if (unaff_x23 == 0) goto LAB_01f92644;
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
      lVar15 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
      if (lVar15 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_01f9340c;
      if (*(uint *)(lVar15 + lVar14 * 4 + 0x20) != uVar7) goto LAB_01f92a28;
      if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_01f9340c;
      plVar10 = (long *)*plVar9;
      if ((plVar10 == (long *)0x0) ||
         (plVar10 = (long *)(**(code **)(*plVar10 + 0x1d8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x1e0)), unaff_x26 == 0))
      goto LAB_01f92644;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
      if (plVar10 == (long *)0x0) goto LAB_01f92644;
      uVar18 = (**(code **)(*plVar10 + 0x288))
                         (plVar10,*(undefined8 *)(unaff_x26 + lVar14 * 8 + 0x20),
                          *(undefined8 *)(*plVar10 + 0x290));
      if ((uVar18 & 1) == 0) goto LAB_01f9323c;
      goto LAB_01f92a28;
    }
    plStack0000000000000048 = (long *)0x0;
  }
LAB_01f92a2c:
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar18 = FUN_01f801dc(plStack0000000000000048,0,0);
  if ((uVar18 & 1) == 0) {
    if (*unaff_x28 == 0) goto LAB_01f92644;
    uVar6 = *(uint *)(*unaff_x28 + 0x18);
  }
  else {
    uVar6 = *(int *)(lVar8 + 0x18) - 1;
  }
  if ((int)uVar6 < 1) {
    uVar7 = 0;
  }
  else {
    uVar17 = 0;
    plVar10 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
    do {
      if (*(uint *)(lVar8 + 0x18) <= uVar17) goto LAB_01f9340c;
      lVar14 = (long)(int)uVar17;
      plVar9 = *(long **)(lVar8 + lVar14 * 8 + 0x20);
      if ((plVar9 == (long *)0x0) ||
         (plVar9 = (long *)(**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0)),
         plVar9 == (long *)0x0)) goto LAB_01f92644;
      uVar18 = FUN_01f80ed8(plVar9,0);
      if ((uVar18 & 1) != 0) {
        plVar9 = (long *)(**(code **)(*plVar9 + 0x408))(plVar9,*(undefined8 *)(*plVar9 + 0x410));
      }
      if (unaff_x23 == 0) goto LAB_01f92644;
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
      lVar15 = *plVar10;
      if (lVar15 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_01f9340c;
      if (unaff_x26 == 0) goto LAB_01f92644;
      uVar7 = *(uint *)(lVar15 + lVar14 * 4 + 0x20);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
      uVar19 = *(undefined8 *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar18 = FUN_01f7f404(plVar9,uVar19,0);
      if ((uVar18 & 1) == 0) {
        if ((in_stack_00000050 >> 0x12 & 1) != 0) {
          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
          lVar15 = *plVar10;
          if (lVar15 == 0) goto LAB_01f92644;
          if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_01f9340c;
          lVar16 = *in_stack_00000058;
          if (lVar16 == 0) goto LAB_01f92644;
          uVar7 = *(uint *)(lVar15 + lVar14 * 4 + 0x20);
          if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_01f9340c;
          lVar15 = *unaff_x22;
          lVar16 = *(long *)(lVar16 + (long)(int)uVar7 * 8 + 0x20);
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_01220628();
            lVar15 = *unaff_x22;
          }
          if (lVar16 == *(long *)(*(long *)(lVar15 + 0xb8) + 0x18)) goto LAB_01f92e70;
        }
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
        lVar15 = *plVar10;
        if (lVar15 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_01f9340c;
        lVar16 = *in_stack_00000058;
        if (lVar16 == 0) goto LAB_01f92644;
        uVar7 = *(uint *)(lVar15 + lVar14 * 4 + 0x20);
        if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_01f9340c;
        if (*(long *)(lVar16 + (long)(int)uVar7 * 8 + 0x20) != 0) {
          uVar19 = *(undefined8 *)PTR_DAT_027b5b48;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar19 = FUN_01f7d8a0(uVar19,0);
          uVar18 = FUN_01f7f404(plVar9,uVar19,0);
          if ((uVar18 & 1) == 0) {
            if (plVar9 == (long *)0x0) goto LAB_01f92644;
            uVar18 = FUN_01f81644(plVar9,0);
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
            lVar15 = *plVar10;
            if (lVar15 == 0) goto LAB_01f92644;
            if ((*(uint *)(lVar15 + 0x18) <= uVar17) ||
               (uVar7 = *(uint *)(lVar15 + lVar14 * 4 + 0x20), *(uint *)(unaff_x26 + 0x18) <= uVar7)
               ) goto LAB_01f9340c;
            uVar19 = *(undefined8 *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar11 = FUN_01f7f404(uVar19,0,0);
            unaff_x22 = (long *)PTR_DAT_027b32e0;
            uVar7 = uVar17;
            if ((uVar18 & 1) == 0) {
              if ((uVar11 & 1) == 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                lVar15 = *plVar10;
                if (lVar15 == 0) goto LAB_01f92644;
                if ((*(uint *)(lVar15 + 0x18) <= uVar17) ||
                   (uVar1 = *(uint *)(lVar15 + lVar14 * 4 + 0x20),
                   *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_01f9340c;
                uVar18 = (**(code **)(*plVar9 + 0x288))
                                   (plVar9,*(undefined8 *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20),
                                    *(undefined8 *)(*plVar9 + 0x290));
                if ((uVar18 & 1) == 0) {
                  if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                  lVar15 = *plVar10;
                  if (lVar15 == 0) goto LAB_01f92644;
                  if ((*(uint *)(lVar15 + 0x18) <= uVar17) ||
                     (uVar1 = *(uint *)(lVar15 + lVar14 * 4 + 0x20),
                     *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_01f9340c;
                  lVar15 = *(long *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20);
                  if (lVar15 == 0) goto LAB_01f92644;
                  uVar18 = FUN_01f81468(lVar15,0);
                  unaff_x24 = in_stack_00000040;
                  unaff_x28 = in_stack_00000058;
                  if ((uVar18 & 1) != 0) {
                    if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
                      lVar15 = *plVar10;
                      if (lVar15 != 0) {
                        if (uVar17 < *(uint *)(lVar15 + 0x18)) {
                          lVar16 = *in_stack_00000058;
                          if (lVar16 != 0) {
                            uVar1 = *(uint *)(lVar15 + lVar14 * 4 + 0x20);
                            if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                              uVar18 = (**(code **)(*plVar9 + 0x828))
                                                 (plVar9,*(undefined8 *)
                                                          (lVar16 + (long)(int)uVar1 * 8 + 0x20),
                                                  *(undefined8 *)(*plVar9 + 0x830));
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
              unaff_x24 = in_stack_00000040;
              unaff_x28 = in_stack_00000058;
              if ((uVar11 & 1) != 0) break;
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
              lVar15 = *plVar10;
              if (lVar15 == 0) goto LAB_01f92644;
              if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_01f9340c;
              lVar16 = *in_stack_00000058;
              if (lVar16 == 0) goto LAB_01f92644;
              uVar1 = *(uint *)(lVar15 + lVar14 * 4 + 0x20);
              if (*(uint *)(lVar16 + 0x18) <= uVar1) goto LAB_01f9340c;
              uVar19 = *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
              if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              bVar4 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
              if ((*(byte *)(*plVar9 + 0x130) < bVar4) ||
                 (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar4 * 8 + -8) !=
                  *(long *)PTR_DAT_027b3ec0)) {
                    /* WARNING: Subroutine does not return */
                FUN_01230f60(plVar9);
              }
              uVar18 = FUN_01f9451c(uVar19,plVar9);
              unaff_x22 = (long *)PTR_DAT_027b32e0;
joined_r0x01f92e6c:
              unaff_x24 = in_stack_00000040;
              unaff_x28 = in_stack_00000058;
              if ((uVar18 & 1) == 0) break;
            }
          }
        }
      }
LAB_01f92e70:
      uVar17 = uVar17 + 1;
      unaff_x24 = in_stack_00000040;
      unaff_x28 = in_stack_00000058;
      uVar7 = uVar6;
    } while (uVar6 != uVar17);
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar18 = FUN_01f801dc(plStack0000000000000048,0,0);
  if (((uVar18 & 1) != 0) && (uVar7 == *(int *)(lVar8 + 0x18) - 1U)) {
    lVar8 = *unaff_x28;
    if (lVar8 == 0) goto LAB_01f92644;
    lVar14 = (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3) + 0x20;
    while ((int)uVar7 < *(int *)(lVar8 + 0x18)) {
      if ((plStack0000000000000048 == (long *)0x0) ||
         (uVar18 = FUN_01f81644(plStack0000000000000048,0), unaff_x26 == 0)) goto LAB_01f92644;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
      uVar19 = *(undefined8 *)(unaff_x26 + lVar14);
      if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar11 = FUN_01f7f404(uVar19,0,0);
      unaff_x22 = (long *)PTR_DAT_027b32e0;
      if ((uVar18 & 1) == 0) {
        if ((uVar11 & 1) == 0) {
          if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
          uVar18 = (**(code **)(*plStack0000000000000048 + 0x288))
                             (plStack0000000000000048,*(undefined8 *)(unaff_x26 + lVar14),
                              *(undefined8 *)(*plStack0000000000000048 + 0x290));
          if ((uVar18 & 1) == 0) {
            if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
            if (*(long *)(unaff_x26 + lVar14) == 0) goto LAB_01f92644;
            uVar18 = FUN_01f81468(*(long *)(unaff_x26 + lVar14),0);
            if ((uVar18 & 1) != 0) {
              lVar8 = *unaff_x28;
              if (lVar8 != 0) {
                if (uVar7 < *(uint *)(lVar8 + 0x18)) {
                  uVar18 = (**(code **)(*plStack0000000000000048 + 0x828))
                                     (plStack0000000000000048,*(undefined8 *)(lVar8 + lVar14),
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
        if ((uVar11 & 1) != 0) break;
        lVar8 = *unaff_x28;
        if (lVar8 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_01f9340c;
        uVar19 = *(undefined8 *)(lVar8 + lVar14);
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        bVar4 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
        if ((*(byte *)(*plStack0000000000000048 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plStack0000000000000048 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)PTR_DAT_027b3ec0)) {
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(plStack0000000000000048);
        }
        uVar18 = FUN_01f9451c(uVar19,plStack0000000000000048);
        unaff_x22 = (long *)PTR_DAT_027b32e0;
joined_r0x01f93040:
        if ((uVar18 & 1) == 0) break;
      }
      lVar8 = *unaff_x28;
      uVar7 = uVar7 + 1;
      lVar14 = lVar14 + 8;
      if (lVar8 == 0) goto LAB_01f92644;
    }
  }
  if (*unaff_x28 == 0) goto LAB_01f92644;
  if (uVar7 == *(uint *)(*unaff_x28 + 0x18)) {
    if (unaff_x23 != 0) {
      if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) || (*(uint *)(unaff_x23 + 0x18) <= unaff_w20))
      goto LAB_01f9340c;
      *(undefined8 *)(unaff_x23 + (long)(int)unaff_w20 * 8 + 0x20) =
           *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20);
      thunk_FUN_01286abc();
      if (in_stack_00000038 != (long *)0x0) {
        if ((plStack0000000000000048 == (long *)0x0) ||
           (lVar8 = thunk_FUN_0124baac(plStack0000000000000048,
                                       *(undefined8 *)(*in_stack_00000038 + 0x40)), lVar8 != 0)) {
          if (unaff_w20 < *(uint *)(in_stack_00000038 + 3)) {
            in_stack_00000038[(long)(int)unaff_w20 + 4] = (long)plStack0000000000000048;
            thunk_FUN_01286abc(in_stack_00000038 + (long)(int)unaff_w20 + 4,plStack0000000000000048)
            ;
            uVar6 = *(uint *)(unaff_x24 + 3);
            if (unaff_x25 < uVar6) {
              lVar8 = *unaff_x19;
              goto joined_r0x01f927d4;
            }
          }
          goto LAB_01f9340c;
        }
        goto LAB_01f941d8;
      }
    }
    goto LAB_01f92644;
  }
LAB_01f93214:
  do {
    uVar6 = *(uint *)(unaff_x24 + 3);
    uVar11 = (ulong)uVar6;
    uVar18 = unaff_x25 + 1;
    if ((long)(int)uVar6 <= (long)uVar18) {
      if (unaff_w20 != 1) {
        if (unaff_w20 == 0) {
          uVar19 = thunk_FUN_01279b34(PTR_DAT_027c1bf0);
          thunk_FUN_01279b34(PTR_DAT_027b3ed0);
          uVar20 = thunk_FUN_0124bba8();
          FUN_01f6b058(uVar20,uVar19,0);
          goto LAB_01f9426c;
        }
        if ((int)unaff_w20 < 2) {
          uVar6 = 0;
          goto LAB_01f934c8;
        }
        if (uVar6 == 0) goto LAB_01f9340c;
        lVar8 = 0;
        lVar14 = 0;
        uVar6 = 0;
        bVar2 = false;
        plVar10 = unaff_x24;
        goto LAB_01f932e8;
      }
      if (in_stack_00000020 != 0) {
        if (unaff_x23 == 0) goto LAB_01f92644;
        if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
        if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_01f92644;
        lVar8 = FUN_01f8a1a8(*(long *)(unaff_x23 + 0x20),0);
        lVar14 = *unaff_x28;
        if ((lVar14 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_01f92644;
        if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
        lVar15 = in_stack_00000038[4];
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        bVar4 = FUN_01f801dc(lVar15,0,0);
        lVar15 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
        if (lVar8 == 0) {
          lVar16 = 0;
        }
        else {
          uVar19 = *(undefined8 *)PTR_DAT_027b1ca8;
          lVar16 = thunk_FUN_0124baac(lVar8,uVar19);
          if (lVar16 == 0) goto LAB_01f93580;
        }
        uVar19 = *(undefined8 *)(lVar14 + 0x18);
        FUN_01fab77c(lVar15,0);
        *(long *)(lVar15 + 0x10) = lVar16;
        thunk_FUN_01286abc((long *)(lVar15 + 0x10),lVar16);
        *(int *)(lVar15 + 0x18) = (int)uVar19;
        *(byte *)(lVar15 + 0x1c) = bVar4 & 1;
        *in_stack_00000010 = lVar15;
        thunk_FUN_01286abc(in_stack_00000010,lVar15);
        if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
        uVar19 = *(undefined8 *)(unaff_x23 + 0x20);
        lVar8 = *unaff_x28;
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        FUN_01f94678(uVar19,lVar8);
        uVar6 = (uint)in_stack_00000040[3];
        unaff_x22 = (long *)PTR_DAT_027b32e0;
        unaff_x24 = in_stack_00000040;
      }
      if (uVar6 == 0) goto LAB_01f9340c;
      plVar9 = unaff_x24 + 4;
      plVar10 = (long *)*plVar9;
      if (((plVar10 == (long *)0x0) ||
          (lVar8 = (**(code **)(*plVar10 + 0x378))(plVar10,*(undefined8 *)(*plVar10 + 0x380)),
          lVar8 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
      iVar5 = *(int *)(*unaff_x28 + 0x18);
      if (*(int *)(lVar8 + 0x18) != iVar5) {
        if (iVar5 < *(int *)(lVar8 + 0x18)) {
          plVar10 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
          lVar14 = *unaff_x28;
          if (lVar14 == 0) goto LAB_01f92644;
          uVar18 = 0;
          plVar12 = plVar10 + 4;
          goto LAB_01f937fc;
        }
        if ((int)unaff_x24[3] == 0) goto LAB_01f9340c;
        plVar10 = (long *)*plVar9;
        if (plVar10 == (long *)0x0) goto LAB_01f92644;
        uVar6 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
        if ((uVar6 >> 1 & 1) != 0) goto LAB_01f94128;
        plVar10 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar8 + 0x18)
                                      );
        uVar6 = *(int *)(lVar8 + 0x18) - 1;
        FUN_01f89ca0(*unaff_x28,0,plVar10,0,uVar6,0);
        if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
        if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
        lVar14 = in_stack_00000038[4];
        lVar8 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
        if ((*unaff_x28 == 0) || (lVar8 == 0)) goto LAB_01f92644;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_01f9340c;
        *(uint *)(lVar8 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar6;
        lVar8 = thunk_FUN_01f894b8(lVar14,lVar8,0);
        if (plVar10 == (long *)0x0) goto LAB_01f92644;
        if ((lVar8 != 0) &&
           (lVar14 = thunk_FUN_0124baac(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
        goto LAB_01f941d8;
        if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_01f9340c;
        plVar12 = plVar10 + (long)(int)uVar6 + 4;
        *plVar12 = lVar8;
        thunk_FUN_01286abc(plVar12,lVar8);
        if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_01f9340c;
        lVar8 = *unaff_x28;
        if (lVar8 == 0) goto LAB_01f92644;
        plVar12 = (long *)*plVar12;
        if (plVar12 != (long *)0x0) {
          bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
              *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
        }
        FUN_01f89ca0(lVar8,uVar6,plVar12,0,*(int *)(lVar8 + 0x18) - uVar6,0);
        *unaff_x28 = (long)plVar10;
        thunk_FUN_01286abc(unaff_x28,plVar10);
        unaff_x24 = in_stack_00000040;
        goto LAB_01f94128;
      }
      if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
      if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
      lVar14 = in_stack_00000038[4];
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar18 = FUN_01f801dc(lVar14,0,0);
      if ((uVar18 & 1) == 0) goto LAB_01f94128;
      plVar10 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar8 + 0x18));
      uVar6 = *(int *)(lVar8 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar10,0,uVar6,0);
      if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
      lVar14 = in_stack_00000038[4];
      lVar8 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if (lVar8 == 0) goto LAB_01f92644;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_01f9340c;
      *(undefined4 *)(lVar8 + 0x20) = 1;
      lVar8 = thunk_FUN_01f894b8(lVar14,lVar8,0);
      if (plVar10 == (long *)0x0) goto LAB_01f92644;
      if ((lVar8 != 0) &&
         (lVar14 = thunk_FUN_0124baac(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_01f9340c;
      plVar12 = plVar10 + (long)(int)uVar6 + 4;
      *plVar12 = lVar8;
      thunk_FUN_01286abc(plVar12,lVar8);
      if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_01f9340c;
      lVar8 = *unaff_x28;
      if (lVar8 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_01f9340c;
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) goto LAB_01f92644;
      bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_027b3f80)
         ) goto LAB_01f942dc;
      FUN_01f89750(plVar12,*(undefined8 *)(lVar8 + (long)(int)uVar6 * 8 + 0x20),0,0);
      goto LAB_01f94118;
    }
    if (uVar11 <= uVar18) goto LAB_01f9340c;
    unaff_x19 = unaff_x24 + unaff_x25 + 5;
    uVar11 = FUN_01ee539c(*unaff_x19,0,0);
    unaff_x25 = uVar18;
  } while ((uVar11 & 1) != 0);
  if (*(uint *)(unaff_x24 + 3) <= uVar18) goto LAB_01f9340c;
  param_1 = (long *)*unaff_x19;
  if (param_1 == (long *)0x0) goto LAB_01f92644;
  goto code_r0x01f926a0;
LAB_01f932e8:
  if (unaff_x23 == 0) goto LAB_01f92644;
  if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
  if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
  if (((((uint)in_stack_00000038[3] <= uVar6) || (uVar18 = lVar8 + 1, uVar11 <= uVar18)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar18)) ||
     ((in_stack_00000038[3] & 0xffffffffU) <= uVar18)) goto LAB_01f9340c;
  lVar16 = plVar10[lVar14 + 4];
  lVar21 = unaff_x24[lVar8 + 5];
  lVar15 = in_stack_00000038[lVar14 + 4];
  uVar19 = *(undefined8 *)(unaff_x23 + lVar14 * 8 + 0x20);
  uVar20 = *(undefined8 *)(unaff_x23 + 0x28 + lVar8 * 8);
  lVar14 = in_stack_00000038[lVar8 + 5];
  if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  iVar5 = FUN_01f947fc(lVar16,uVar19,lVar15,lVar21,uVar20,lVar14);
  if (iVar5 == 0) {
    bVar2 = true;
  }
  else if (iVar5 == 2) {
    uVar6 = (int)lVar8 + 1;
    bVar2 = false;
  }
  if ((ulong)unaff_w20 - 2 != lVar8) {
    lVar14 = (long)(int)uVar6;
    lVar8 = lVar8 + 1;
    uVar11 = in_stack_00000040[3] & 0xffffffff;
    plVar10 = in_stack_00000040;
    if ((uint)in_stack_00000040[3] <= uVar6) goto LAB_01f9340c;
    goto LAB_01f932e8;
  }
  unaff_x22 = (long *)PTR_DAT_027b32e0;
  unaff_x24 = in_stack_00000040;
  unaff_x28 = in_stack_00000058;
  if (bVar2) {
    uVar19 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
    thunk_FUN_01279b34(PTR_DAT_027bc458);
    uVar20 = thunk_FUN_0124bba8();
    FUN_01ee31d4(uVar20,uVar19,0);
LAB_01f9426c:
    uVar19 = thunk_FUN_01279b34(PTR_DAT_027c1bf8);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar20,uVar19);
  }
LAB_01f934c8:
  if (in_stack_00000020 != 0) {
    if (unaff_x23 == 0) goto LAB_01f92644;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
    plVar10 = (long *)(unaff_x23 + (long)(int)uVar6 * 8 + 0x20);
    lVar8 = *plVar10;
    if (lVar8 == 0) goto LAB_01f92644;
    lVar8 = FUN_01f8a1a8(lVar8,0);
    lVar14 = *unaff_x28;
    if ((lVar14 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_01f92644;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
    lVar15 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    bVar4 = FUN_01f801dc(lVar15,0,0);
    lVar15 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
    if (lVar8 == 0) {
      lVar16 = 0;
    }
    else {
      uVar19 = *(undefined8 *)PTR_DAT_027b1ca8;
      lVar16 = thunk_FUN_0124baac(lVar8,uVar19);
      if (lVar16 == 0) {
LAB_01f93580:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(lVar8,uVar19);
      }
    }
    uVar19 = *(undefined8 *)(lVar14 + 0x18);
    FUN_01fab77c(lVar15,0);
    *(long *)(lVar15 + 0x10) = lVar16;
    thunk_FUN_01286abc((long *)(lVar15 + 0x10),lVar16);
    *(int *)(lVar15 + 0x18) = (int)uVar19;
    *(byte *)(lVar15 + 0x1c) = bVar4 & 1;
    *in_stack_00000010 = lVar15;
    thunk_FUN_01286abc(in_stack_00000010,lVar15);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
    lVar8 = *plVar10;
    lVar14 = *unaff_x28;
    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f94678(lVar8,lVar14);
    unaff_x22 = (long *)PTR_DAT_027b32e0;
    unaff_x24 = in_stack_00000040;
  }
  if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_01f9340c;
  plVar9 = unaff_x24 + (long)(int)uVar6 + 4;
  plVar10 = (long *)*plVar9;
  if (((plVar10 == (long *)0x0) ||
      (lVar8 = (**(code **)(*plVar10 + 0x378))(plVar10,*(undefined8 *)(*plVar10 + 0x380)),
      lVar8 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
  iVar5 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar8 + 0x18) == iVar5) {
    if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
    lVar14 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar18 = FUN_01f801dc(lVar14,0,0);
    if ((uVar18 & 1) != 0) {
      plVar10 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar8 + 0x18));
      uVar7 = *(int *)(lVar8 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar10,0,uVar7,0);
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
      lVar14 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar8 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if (lVar8 == 0) goto LAB_01f92644;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_01f9340c;
      *(undefined4 *)(lVar8 + 0x20) = 1;
      lVar8 = thunk_FUN_01f894b8(lVar14,lVar8,0);
      if (plVar10 == (long *)0x0) goto LAB_01f92644;
      if ((lVar8 != 0) &&
         (lVar14 = thunk_FUN_0124baac(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar10 + 3) <= uVar7) goto LAB_01f9340c;
      plVar12 = plVar10 + (long)(int)uVar7 + 4;
      *plVar12 = lVar8;
      thunk_FUN_01286abc(plVar12,lVar8);
      if (*(uint *)(plVar10 + 3) <= uVar7) goto LAB_01f9340c;
      lVar8 = *unaff_x28;
      if (lVar8 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_01f9340c;
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) goto LAB_01f92644;
      bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_027b3f80)
         ) {
LAB_01f942dc:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(plVar12);
      }
      FUN_01f89750(plVar12,*(undefined8 *)(lVar8 + (long)(int)uVar7 * 8 + 0x20),0,0);
      goto FUN_01f94198;
    }
  }
  else {
    if (iVar5 < *(int *)(lVar8 + 0x18)) {
      plVar10 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
      lVar14 = *unaff_x28;
      if (lVar14 == 0) goto LAB_01f92644;
      uVar18 = 0;
      plVar12 = plVar10 + 4;
      do {
        if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar18) {
          uVar7 = *(uint *)(lVar8 + 0x18);
          if ((int)uVar18 < (int)(uVar7 - 1)) {
            do {
              if (uVar7 <= (uint)uVar18) goto LAB_01f9340c;
              plVar13 = *(long **)(lVar8 + 0x20 + uVar18 * 8);
              if ((plVar13 == (long *)0x0) ||
                 (lVar14 = (**(code **)(*plVar13 + 0x1f8))
                                     (plVar13,*(undefined8 *)(*plVar13 + 0x200)),
                 plVar10 == (long *)0x0)) goto LAB_01f92644;
              if ((lVar14 != 0) &&
                 (lVar15 = thunk_FUN_0124baac(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar15 == 0)
                 ) goto LAB_01f941d8;
              if (*(uint *)(plVar10 + 3) <= (uint)uVar18) goto LAB_01f9340c;
              *plVar12 = lVar14;
              thunk_FUN_01286abc(plVar12,lVar14);
              uVar7 = *(uint *)(lVar8 + 0x18);
              uVar18 = uVar18 + 1;
              plVar12 = plVar12 + 1;
            } while ((int)uVar18 < (int)(uVar7 - 1));
          }
          if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
          if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
          lVar14 = in_stack_00000038[(long)(int)uVar6 + 4];
          if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar11 = FUN_01f801dc(lVar14,0,0);
          uVar7 = (uint)uVar18;
          if ((uVar11 & 1) == 0) {
            if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_01f9340c;
            plVar12 = *(long **)(lVar8 + (long)(int)uVar7 * 8 + 0x20);
            if ((plVar12 == (long *)0x0) ||
               (lVar8 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200)),
               plVar10 == (long *)0x0)) goto LAB_01f92644;
            if ((lVar8 != 0) &&
               (lVar14 = thunk_FUN_0124baac(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
            goto LAB_01f941d8;
            uVar17 = *(uint *)(plVar10 + 3);
          }
          else {
            if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
            lVar8 = in_stack_00000038[(long)(int)uVar6 + 4];
            uVar19 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
            lVar8 = thunk_FUN_01f894b8(lVar8,uVar19,0);
            if (plVar10 == (long *)0x0) goto LAB_01f92644;
            if ((lVar8 != 0) &&
               (lVar14 = thunk_FUN_0124baac(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
            goto LAB_01f941d8;
            uVar17 = *(uint *)(plVar10 + 3);
          }
          if (uVar17 <= uVar7) goto LAB_01f9340c;
          plVar10[(long)(int)uVar7 + 4] = lVar8;
          thunk_FUN_01286abc(plVar10 + (long)(int)uVar7 + 4,lVar8);
FUN_01f94198:
          *unaff_x28 = (long)plVar10;
          thunk_FUN_01286abc(unaff_x28,plVar10);
          unaff_x24 = in_stack_00000040;
          goto OVRPlugin_UnityOpenXR__OnSessionExiting;
        }
        if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_01f9340c;
        if (plVar10 == (long *)0x0) goto LAB_01f92644;
        lVar14 = *(long *)(lVar14 + uVar18 * 8 + 0x20);
        if ((lVar14 != 0) &&
           (lVar15 = thunk_FUN_0124baac(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar15 == 0))
        goto LAB_01f941d8;
        if (*(uint *)(plVar10 + 3) <= uVar18) goto LAB_01f9340c;
        *plVar12 = lVar14;
        thunk_FUN_01286abc(plVar12,lVar14);
        lVar14 = *unaff_x28;
        uVar18 = uVar18 + 1;
        plVar12 = plVar12 + 1;
        if (lVar14 == 0) goto LAB_01f92644;
      } while( true );
    }
    if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_01f9340c;
    plVar10 = (long *)*plVar9;
    if (plVar10 == (long *)0x0) goto LAB_01f92644;
    uVar7 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
    if ((uVar7 >> 1 & 1) == 0) {
      plVar10 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar8 + 0x18));
      uVar7 = *(int *)(lVar8 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar10,0,uVar7,0);
      if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
      lVar14 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar8 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if ((*unaff_x28 == 0) || (lVar8 == 0)) goto LAB_01f92644;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_01f9340c;
      *(uint *)(lVar8 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar7;
      lVar8 = thunk_FUN_01f894b8(lVar14,lVar8,0);
      if (plVar10 == (long *)0x0) goto LAB_01f92644;
      if ((lVar8 != 0) &&
         (lVar14 = thunk_FUN_0124baac(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar10 + 3) <= uVar7) goto LAB_01f9340c;
      plVar12 = plVar10 + (long)(int)uVar7 + 4;
      *plVar12 = lVar8;
      thunk_FUN_01286abc(plVar12,lVar8);
      if (*(uint *)(plVar10 + 3) <= uVar7) goto LAB_01f9340c;
      lVar8 = *unaff_x28;
      if (lVar8 == 0) goto LAB_01f92644;
      plVar12 = (long *)*plVar12;
      if (plVar12 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
      }
      FUN_01f89ca0(lVar8,uVar7,plVar12,0,*(int *)(lVar8 + 0x18) - uVar7,0);
      *unaff_x28 = (long)plVar10;
      thunk_FUN_01286abc(unaff_x28,plVar10);
      unaff_x24 = in_stack_00000040;
    }
  }
OVRPlugin_UnityOpenXR__OnSessionExiting:
  if (uVar6 < *(uint *)(unaff_x24 + 3)) goto LAB_01f941b4;
  goto LAB_01f9340c;
  while( true ) {
    lVar14 = *(long *)(lVar14 + uVar18 * 8 + 0x20);
    if ((lVar14 != 0) &&
       (lVar15 = thunk_FUN_0124baac(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar15 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar10 + 3) <= uVar18) goto LAB_01f9340c;
    *plVar12 = lVar14;
    thunk_FUN_01286abc(plVar12,lVar14);
    lVar14 = *unaff_x28;
    uVar18 = uVar18 + 1;
    plVar12 = plVar12 + 1;
    if (lVar14 == 0) break;
LAB_01f937fc:
    if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar18) {
      uVar6 = *(uint *)(lVar8 + 0x18);
      if ((int)(uVar6 - 1) <= (int)uVar18) goto LAB_01f93a68;
      goto LAB_01f939f4;
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_01f9340c;
    if (plVar10 == (long *)0x0) break;
  }
  goto LAB_01f92644;
  while( true ) {
    plVar13 = *(long **)(lVar8 + 0x20 + uVar18 * 8);
    if ((plVar13 == (long *)0x0) ||
       (lVar14 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200)),
       plVar10 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar14 != 0) &&
       (lVar15 = thunk_FUN_0124baac(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar15 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar10 + 3) <= (uint)uVar18) goto LAB_01f9340c;
    *plVar12 = lVar14;
    thunk_FUN_01286abc(plVar12,lVar14);
    uVar6 = *(uint *)(lVar8 + 0x18);
    uVar18 = uVar18 + 1;
    plVar12 = plVar12 + 1;
    if ((int)(uVar6 - 1) <= (int)uVar18) break;
LAB_01f939f4:
    if (uVar6 <= (uint)uVar18) goto LAB_01f9340c;
  }
LAB_01f93a68:
  if (in_stack_00000038 != (long *)0x0) {
    if ((int)in_stack_00000038[3] != 0) {
      lVar14 = in_stack_00000038[4];
      if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar11 = FUN_01f801dc(lVar14,0,0);
      uVar6 = (uint)uVar18;
      if ((uVar11 & 1) == 0) {
        if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_01f9340c;
        plVar12 = *(long **)(lVar8 + (long)(int)uVar6 * 8 + 0x20);
        if ((plVar12 == (long *)0x0) ||
           (lVar8 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200)),
           plVar10 == (long *)0x0)) goto LAB_01f92644;
        if ((lVar8 != 0) &&
           (lVar14 = thunk_FUN_0124baac(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0))
        goto LAB_01f941d8;
        uVar7 = *(uint *)(plVar10 + 3);
      }
      else {
        if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
        lVar8 = in_stack_00000038[4];
        uVar19 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
        lVar8 = thunk_FUN_01f894b8(lVar8,uVar19,0);
        if (plVar10 == (long *)0x0) goto LAB_01f92644;
        if ((lVar8 != 0) &&
           (lVar14 = thunk_FUN_0124baac(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar14 == 0)) {
LAB_01f941d8:
          uVar19 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar19,0);
        }
        uVar7 = *(uint *)(plVar10 + 3);
      }
      if (uVar6 < uVar7) {
        plVar10[(long)(int)uVar6 + 4] = lVar8;
        thunk_FUN_01286abc(plVar10 + (long)(int)uVar6 + 4,lVar8);
LAB_01f94118:
        *unaff_x28 = (long)plVar10;
        thunk_FUN_01286abc(unaff_x28,plVar10);
        unaff_x24 = in_stack_00000040;
LAB_01f94128:
        if ((int)unaff_x24[3] != 0) {
LAB_01f941b4:
          return *plVar9;
        }
      }
    }
LAB_01f9340c:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca8();
  }
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


