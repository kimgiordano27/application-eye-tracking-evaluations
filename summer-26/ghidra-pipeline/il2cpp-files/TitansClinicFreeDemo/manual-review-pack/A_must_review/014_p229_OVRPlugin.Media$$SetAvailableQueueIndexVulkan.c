/*
FUNCTION_NAME: OVRPlugin.Media$$SetAvailableQueueIndexVulkan
ENTRY_POINT: 01f92410
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


long OVRPlugin_Media__SetAvailableQueueIndexVulkan(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 *unaff_x19;
  uint uVar22;
  uint uVar23;
  long *plVar24;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long lVar25;
  long *plVar26;
  undefined8 uVar27;
  long *unaff_x28;
  long lVar28;
  long *plStack0000000000000048;
  uint in_stack_00000050;
  
  *unaff_x23 = 0;
  thunk_FUN_01286abc();
  lVar9 = FUN_01230af8(*unaff_x19,(int)unaff_x24[3]);
  lVar18 = unaff_x24[3];
  if (0 < (int)lVar18) {
    uVar8 = 0;
    do {
      if ((uint)lVar18 <= uVar8) goto LAB_01f9340c;
      plVar13 = unaff_x24 + (long)(int)uVar8 + 4;
      plVar10 = (long *)*plVar13;
                    /* try { // try from 01f9246c to 02092487 has its CatchHandler @ 01f929d8 */
      if (((plVar10 == (long *)0x0) ||
          (lVar18 = (**(code **)(*plVar10 + 0x378))(plVar10,*(undefined8 *)(*plVar10 + 0x380)),
          lVar18 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
      iVar1 = *(int *)(*unaff_x28 + 0x18);
      iVar7 = *(int *)(lVar18 + 0x18);
      if (*(int *)(lVar18 + 0x18) <= iVar1) {
        iVar7 = iVar1;
      }
      lVar11 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,iVar7);
      if (lVar9 == 0) goto LAB_01f92644;
                    /* try { // try from 01f924a4 to 020924a7 has its CatchHandler @ 01f929cc */
      if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_01f9340c;
      plVar10 = (long *)(lVar9 + (long)(int)uVar8 * 8 + 0x20);
      *plVar10 = lVar11;
      thunk_FUN_01286abc(plVar10,lVar11);
      if (unaff_x25 == 0) {
        if (*unaff_x28 == 0) goto LAB_01f92644;
        lVar18 = *(long *)(*unaff_x28 + 0x18);
        if (0 < lVar18 << 0x20) {
          uVar6 = *(uint *)(lVar9 + 0x18);
          uVar12 = 0;
          do {
            if (uVar6 <= uVar8) goto LAB_01f9340c;
            lVar11 = *plVar10;
            if (lVar11 == 0) goto LAB_01f92644;
            if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_01f9340c;
            *(int *)(lVar11 + uVar12 * 4 + 0x20) = (int)uVar12;
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)(int)lVar18);
        }
      }
      else {
        if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_01f9340c;
        lVar11 = *plVar10;
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar12 = OVRPlugin_UnityOpenXR__OnSessionDestroy(lVar11,lVar18);
        if ((uVar12 & 1) == 0) {
          if (*(uint *)(unaff_x24 + 3) <= uVar8) goto LAB_01f9340c;
          *plVar13 = 0;
          thunk_FUN_01286abc(plVar13,0);
        }
      }
      lVar18 = unaff_x24[3];
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)lVar18);
  }
  puVar4 = PTR_DAT_027b46c8;
  plVar10 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b46c8);
  if (*unaff_x28 != 0) {
    plVar13 = (long *)FUN_01230af8(*(undefined8 *)puVar4,*(undefined4 *)(*unaff_x28 + 0x18));
    lVar18 = *unaff_x28;
    if (lVar18 != 0) {
      uVar12 = 0;
      plVar24 = plVar13 + 4;
      do {
        if ((long)(int)*(uint *)(lVar18 + 0x18) <= (long)uVar12) {
          if ((int)unaff_x24[3] < 1) goto LAB_01f9423c;
          uVar12 = 0;
          uVar8 = 0;
          uVar19 = unaff_x24[3] & 0xffffffff;
          plVar24 = (long *)PTR_DAT_027b32e0;
          goto LAB_01f9266c;
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_01f9340c;
        lVar11 = *(long *)(lVar18 + uVar12 * 8 + 0x20);
        if (lVar11 != 0) {
          lVar18 = thunk_FUN_0122c1cc(lVar11,0);
          if (plVar13 == (long *)0x0) break;
          if ((lVar18 != 0) &&
             (lVar11 = thunk_FUN_0124baac(lVar18,*(undefined8 *)(*plVar13 + 0x40)), lVar11 == 0))
          goto LAB_01f941d8;
          if (*(uint *)(plVar13 + 3) <= uVar12) goto LAB_01f9340c;
          *plVar24 = lVar18;
          thunk_FUN_01286abc(plVar24,lVar18);
          lVar18 = *unaff_x28;
        }
        uVar12 = uVar12 + 1;
        plVar24 = plVar24 + 1;
      } while (lVar18 != 0);
    }
  }
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
LAB_01f9266c:
  if (uVar19 <= uVar12) goto LAB_01f9340c;
  plVar26 = unaff_x24 + uVar12 + 4;
  uVar19 = FUN_01ee539c(*plVar26,0,0);
  if ((uVar19 & 1) != 0) goto LAB_01f93214;
  if (*(uint *)(unaff_x24 + 3) <= uVar12) goto LAB_01f9340c;
  plVar14 = (long *)*plVar26;
  if ((plVar14 == (long *)0x0) ||
     (lVar18 = (**(code **)(*plVar14 + 0x378))(plVar14,*(undefined8 *)(*plVar14 + 0x380)),
     lVar18 == 0)) goto LAB_01f92644;
  uVar19 = *(ulong *)(lVar18 + 0x18);
  lVar11 = *unaff_x28;
  if (uVar19 == 0) {
    if (lVar11 == 0) goto LAB_01f92644;
    if (*(long *)(lVar11 + 0x18) != 0) {
      if (*(uint *)(unaff_x24 + 3) <= uVar12) goto LAB_01f9340c;
      plVar14 = (long *)*plVar26;
      if (plVar14 == (long *)0x0) goto LAB_01f92644;
      uVar6 = (**(code **)(*plVar14 + 600))(plVar14,*(undefined8 *)(*plVar14 + 0x260));
      if ((uVar6 >> 1 & 1) == 0) goto LAB_01f93214;
    }
    if (lVar9 == 0) goto LAB_01f92644;
    if ((*(uint *)(lVar9 + 0x18) <= uVar12) || (*(uint *)(lVar9 + 0x18) <= uVar8))
    goto LAB_01f9340c;
    *(undefined8 *)(lVar9 + (long)(int)uVar8 * 8 + 0x20) =
         *(undefined8 *)(lVar9 + uVar12 * 8 + 0x20);
    thunk_FUN_01286abc();
    uVar6 = *(uint *)(unaff_x24 + 3);
    if (uVar6 <= uVar12) goto LAB_01f9340c;
    lVar18 = *plVar26;
joined_r0x01f927d4:
    if (lVar18 != 0) {
      lVar11 = thunk_FUN_0124baac(lVar18,*(undefined8 *)(*unaff_x24 + 0x40));
      if (lVar11 == 0) goto LAB_01f941d8;
      uVar6 = (uint)unaff_x24[3];
    }
    lVar11 = (long)(int)uVar8;
    if (uVar6 <= uVar8) goto LAB_01f9340c;
    unaff_x24[lVar11 + 4] = lVar18;
    uVar8 = uVar8 + 1;
    thunk_FUN_01286abc(unaff_x24 + lVar11 + 4,lVar18);
    plVar24 = (long *)PTR_DAT_027b32e0;
    goto LAB_01f93214;
  }
  if (lVar11 == 0) goto LAB_01f92644;
  uVar6 = *(uint *)(lVar11 + 0x18);
  iVar7 = (int)uVar19;
  if ((int)uVar6 < iVar7) {
    uVar23 = iVar7 - 1;
    if ((int)uVar6 < (int)uVar23) {
      plVar14 = (long *)(lVar18 + (long)(int)uVar6 * 8 + 0x20);
      do {
        if ((uint)uVar19 <= uVar6) goto LAB_01f9340c;
        plVar15 = (long *)*plVar14;
        if (plVar15 == (long *)0x0) goto LAB_01f92644;
        lVar11 = (**(code **)(*plVar15 + 0x1f8))(plVar15,*(undefined8 *)(*plVar15 + 0x200));
        puVar4 = PTR_DAT_027baa38;
        lVar20 = *(long *)PTR_DAT_027baa38;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_01220628(lVar20);
          lVar20 = *(long *)puVar4;
        }
        if (lVar11 == **(long **)(lVar20 + 0xb8)) {
          uVar19 = (ulong)*(uint *)(lVar18 + 0x18);
          uVar23 = *(uint *)(lVar18 + 0x18) - 1;
          break;
        }
        uVar19 = *(ulong *)(lVar18 + 0x18);
        uVar6 = uVar6 + 1;
        plVar14 = plVar14 + 1;
        uVar23 = (int)uVar19 - 1;
      } while ((int)uVar6 < (int)uVar23);
    }
    if (uVar6 == uVar23) {
      if ((uint)uVar19 <= uVar6) goto LAB_01f9340c;
      plVar15 = (long *)(lVar18 + (long)(int)uVar6 * 8 + 0x20);
      plVar14 = (long *)*plVar15;
      if (plVar14 == (long *)0x0) goto LAB_01f92644;
      lVar11 = (**(code **)(*plVar14 + 0x1f8))(plVar14,*(undefined8 *)(*plVar14 + 0x200));
      puVar4 = PTR_DAT_027baa38;
      lVar20 = *(long *)PTR_DAT_027baa38;
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_01220628(lVar20);
        lVar20 = *(long *)puVar4;
      }
      if (lVar11 != **(long **)(lVar20 + 0xb8)) goto LAB_01f92a28;
      if (*(uint *)(lVar18 + 0x18) <= uVar6) goto LAB_01f9340c;
      plVar14 = (long *)*plVar15;
      if ((plVar14 == (long *)0x0) ||
         (lVar11 = (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0)),
         lVar11 == 0)) goto LAB_01f92644;
      uVar19 = FUN_01f80ec8(lVar11,0);
      if ((uVar19 & 1) != 0) {
        if (*(uint *)(lVar18 + 0x18) <= uVar6) goto LAB_01f9340c;
        plVar14 = (long *)*plVar15;
        uVar17 = *(undefined8 *)PTR_DAT_027c1be0;
        if (*(int *)(*plVar24 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar17 = FUN_01f7d8a0(uVar17,0);
        if (plVar14 == (long *)0x0) goto LAB_01f92644;
        uVar19 = (**(code **)(*plVar14 + 0x208))(plVar14,uVar17,1,*(undefined8 *)(*plVar14 + 0x210))
        ;
        plVar24 = (long *)PTR_DAT_027b32e0;
        if ((uVar19 & 1) != 0) {
          if (uVar6 < *(uint *)(lVar18 + 0x18)) {
            plVar15 = (long *)*plVar15;
            if (plVar15 != (long *)0x0) {
              plVar14 = (long *)(**(code **)(*plVar15 + 0x1d8))
                                          (plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
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
  uVar23 = iVar7 - 1;
  lVar11 = (long)(int)uVar23;
  plVar15 = (long *)(lVar18 + lVar11 * 8 + 0x20);
  plVar14 = (long *)*plVar15;
  if ((plVar14 == (long *)0x0) ||
     (lVar20 = (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0)),
     lVar20 == 0)) goto LAB_01f92644;
  uVar19 = FUN_01f80ec8(lVar20,0);
  if (iVar7 < (int)uVar6) {
    if ((uVar19 & 1) != 0) {
      if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_01f9340c;
      plVar14 = (long *)*plVar15;
      uVar17 = *(undefined8 *)PTR_DAT_027c1be0;
      if (*(int *)(*plVar24 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar17 = FUN_01f7d8a0(uVar17,0);
      if (plVar14 == (long *)0x0) goto LAB_01f92644;
      uVar19 = (**(code **)(*plVar14 + 0x208))(plVar14,uVar17,1,*(undefined8 *)(*plVar14 + 0x210));
      plVar24 = (long *)PTR_DAT_027b32e0;
      if ((uVar19 & 1) != 0) {
        if (lVar9 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01f9340c;
        lVar20 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_01f9340c;
        if (*(uint *)(lVar20 + lVar11 * 4 + 0x20) == uVar23) {
LAB_01f9323c:
          if (uVar23 < *(uint *)(lVar18 + 0x18)) {
            plVar15 = (long *)*plVar15;
            if (plVar15 != (long *)0x0) {
              plVar14 = (long *)(**(code **)(*plVar15 + 0x1d8))
                                          (plVar15,*(undefined8 *)(*plVar15 + 0x1e0));
joined_r0x01f931fc:
              if (plVar14 != (long *)0x0) {
                plStack0000000000000048 =
                     (long *)(**(code **)(*plVar14 + 0x408))
                                       (plVar14,*(undefined8 *)(*plVar14 + 0x410));
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
  if ((uVar19 & 1) == 0) {
LAB_01f92a28:
    plStack0000000000000048 = (long *)0x0;
  }
  else {
    if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_01f9340c;
    plVar14 = (long *)*plVar15;
    uVar17 = *(undefined8 *)PTR_DAT_027c1be0;
    if (*(int *)(*plVar24 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar17 = FUN_01f7d8a0(uVar17,0);
    if (plVar14 == (long *)0x0) goto LAB_01f92644;
    uVar19 = (**(code **)(*plVar14 + 0x208))(plVar14,uVar17,1,*(undefined8 *)(*plVar14 + 0x210));
    plVar24 = (long *)PTR_DAT_027b32e0;
    if ((uVar19 & 1) != 0) {
      if (lVar9 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01f9340c;
      lVar20 = *(long *)(lVar9 + uVar12 * 8 + 0x20);
      if (lVar20 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_01f9340c;
      if (*(uint *)(lVar20 + lVar11 * 4 + 0x20) != uVar23) goto LAB_01f92a28;
      if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_01f9340c;
      plVar14 = (long *)*plVar15;
      if ((plVar14 == (long *)0x0) ||
         (plVar14 = (long *)(**(code **)(*plVar14 + 0x1d8))
                                      (plVar14,*(undefined8 *)(*plVar14 + 0x1e0)),
         plVar13 == (long *)0x0)) goto LAB_01f92644;
      if (*(uint *)(plVar13 + 3) <= uVar23) goto LAB_01f9340c;
      if (plVar14 == (long *)0x0) goto LAB_01f92644;
      uVar19 = (**(code **)(*plVar14 + 0x288))
                         (plVar14,plVar13[lVar11 + 4],*(undefined8 *)(*plVar14 + 0x290));
      if ((uVar19 & 1) == 0) goto LAB_01f9323c;
      goto LAB_01f92a28;
    }
    plStack0000000000000048 = (long *)0x0;
  }
LAB_01f92a2c:
  if (*(int *)(*plVar24 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar19 = FUN_01f801dc(plStack0000000000000048,0,0);
  if ((uVar19 & 1) == 0) {
    if (*unaff_x28 == 0) goto LAB_01f92644;
    uVar6 = *(uint *)(*unaff_x28 + 0x18);
  }
  else {
    uVar6 = *(int *)(lVar18 + 0x18) - 1;
  }
  if ((int)uVar6 < 1) {
    uVar23 = 0;
  }
  else {
    uVar22 = 0;
    plVar14 = (long *)(lVar9 + uVar12 * 8 + 0x20);
    do {
      if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_01f9340c;
      lVar11 = (long)(int)uVar22;
      plVar15 = *(long **)(lVar18 + lVar11 * 8 + 0x20);
      if ((plVar15 == (long *)0x0) ||
         (plVar15 = (long *)(**(code **)(*plVar15 + 0x1d8))
                                      (plVar15,*(undefined8 *)(*plVar15 + 0x1e0)),
         plVar15 == (long *)0x0)) goto LAB_01f92644;
      uVar19 = FUN_01f80ed8(plVar15,0);
      if ((uVar19 & 1) != 0) {
        plVar15 = (long *)(**(code **)(*plVar15 + 0x408))(plVar15,*(undefined8 *)(*plVar15 + 0x410))
        ;
      }
      if (lVar9 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01f9340c;
      lVar20 = *plVar14;
      if (lVar20 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar20 + 0x18) <= uVar22) goto LAB_01f9340c;
      if (plVar13 == (long *)0x0) goto LAB_01f92644;
      uVar23 = *(uint *)(lVar20 + lVar11 * 4 + 0x20);
      if (*(uint *)(plVar13 + 3) <= uVar23) goto LAB_01f9340c;
      lVar20 = plVar13[(long)(int)uVar23 + 4];
      if (*(int *)(*plVar24 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar19 = FUN_01f7f404(plVar15,lVar20,0);
      if ((uVar19 & 1) == 0) {
        if ((in_stack_00000050 >> 0x12 & 1) != 0) {
          if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01f9340c;
          lVar20 = *plVar14;
          if (lVar20 == 0) goto LAB_01f92644;
          if (*(uint *)(lVar20 + 0x18) <= uVar22) goto LAB_01f9340c;
          lVar21 = *unaff_x28;
          if (lVar21 == 0) goto LAB_01f92644;
          uVar23 = *(uint *)(lVar20 + lVar11 * 4 + 0x20);
          if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_01f9340c;
          lVar20 = *plVar24;
          lVar21 = *(long *)(lVar21 + (long)(int)uVar23 * 8 + 0x20);
          if (*(int *)(lVar20 + 0xe0) == 0) {
            thunk_FUN_01220628();
            lVar20 = *plVar24;
          }
          if (lVar21 == *(long *)(*(long *)(lVar20 + 0xb8) + 0x18)) goto LAB_01f92e70;
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01f9340c;
        lVar20 = *plVar14;
        if (lVar20 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar20 + 0x18) <= uVar22) goto LAB_01f9340c;
        lVar21 = *unaff_x28;
        if (lVar21 == 0) goto LAB_01f92644;
        uVar23 = *(uint *)(lVar20 + lVar11 * 4 + 0x20);
        if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_01f9340c;
        if (*(long *)(lVar21 + (long)(int)uVar23 * 8 + 0x20) != 0) {
          uVar17 = *(undefined8 *)PTR_DAT_027b5b48;
          if (*(int *)(*plVar24 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar17 = FUN_01f7d8a0(uVar17,0);
          uVar19 = FUN_01f7f404(plVar15,uVar17,0);
          if ((uVar19 & 1) == 0) {
            if (plVar15 == (long *)0x0) goto LAB_01f92644;
            uVar19 = FUN_01f81644(plVar15,0);
            if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01f9340c;
            lVar20 = *plVar14;
            if (lVar20 == 0) goto LAB_01f92644;
            if ((*(uint *)(lVar20 + 0x18) <= uVar22) ||
               (uVar23 = *(uint *)(lVar20 + lVar11 * 4 + 0x20), *(uint *)(plVar13 + 3) <= uVar23))
            goto LAB_01f9340c;
            lVar20 = plVar13[(long)(int)uVar23 + 4];
            if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar16 = FUN_01f7f404(lVar20,0,0);
            plVar24 = (long *)PTR_DAT_027b32e0;
            uVar23 = uVar22;
            if ((uVar19 & 1) == 0) {
              if ((uVar16 & 1) == 0) {
                if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01f9340c;
                lVar20 = *plVar14;
                if (lVar20 == 0) goto LAB_01f92644;
                if ((*(uint *)(lVar20 + 0x18) <= uVar22) ||
                   (uVar2 = *(uint *)(lVar20 + lVar11 * 4 + 0x20), *(uint *)(plVar13 + 3) <= uVar2))
                goto LAB_01f9340c;
                uVar19 = (**(code **)(*plVar15 + 0x288))
                                   (plVar15,plVar13[(long)(int)uVar2 + 4],
                                    *(undefined8 *)(*plVar15 + 0x290));
                if ((uVar19 & 1) == 0) {
                  if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01f9340c;
                  lVar20 = *plVar14;
                  if (lVar20 == 0) goto LAB_01f92644;
                  if ((*(uint *)(lVar20 + 0x18) <= uVar22) ||
                     (uVar2 = *(uint *)(lVar20 + lVar11 * 4 + 0x20), *(uint *)(plVar13 + 3) <= uVar2
                     )) goto LAB_01f9340c;
                  if (plVar13[(long)(int)uVar2 + 4] == 0) goto LAB_01f92644;
                  uVar19 = FUN_01f81468(plVar13[(long)(int)uVar2 + 4],0);
                  if ((uVar19 & 1) != 0) {
                    if (uVar12 < *(uint *)(lVar9 + 0x18)) {
                      lVar20 = *plVar14;
                      if (lVar20 != 0) {
                        if (uVar22 < *(uint *)(lVar20 + 0x18)) {
                          lVar21 = *unaff_x28;
                          if (lVar21 != 0) {
                            uVar2 = *(uint *)(lVar20 + lVar11 * 4 + 0x20);
                            if (uVar2 < *(uint *)(lVar21 + 0x18)) {
                              uVar19 = (**(code **)(*plVar15 + 0x828))
                                                 (plVar15,*(undefined8 *)
                                                           (lVar21 + (long)(int)uVar2 * 8 + 0x20),
                                                  *(undefined8 *)(*plVar15 + 0x830));
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
              if ((uVar16 & 1) != 0) break;
              if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01f9340c;
              lVar20 = *plVar14;
              if (lVar20 == 0) goto LAB_01f92644;
              if (*(uint *)(lVar20 + 0x18) <= uVar22) goto LAB_01f9340c;
              lVar21 = *unaff_x28;
              if (lVar21 == 0) goto LAB_01f92644;
              uVar2 = *(uint *)(lVar20 + lVar11 * 4 + 0x20);
              if (*(uint *)(lVar21 + 0x18) <= uVar2) goto LAB_01f9340c;
              uVar17 = *(undefined8 *)(lVar21 + (long)(int)uVar2 * 8 + 0x20);
              if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              bVar5 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
              if ((*(byte *)(*plVar15 + 0x130) < bVar5) ||
                 (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar5 * 8 + -8) !=
                  *(long *)PTR_DAT_027b3ec0)) {
                    /* WARNING: Subroutine does not return */
                FUN_01230f60(plVar15);
              }
              uVar19 = FUN_01f9451c(uVar17,plVar15);
              plVar24 = (long *)PTR_DAT_027b32e0;
joined_r0x01f92e6c:
              if ((uVar19 & 1) == 0) break;
            }
          }
        }
      }
LAB_01f92e70:
      uVar22 = uVar22 + 1;
      uVar23 = uVar6;
    } while (uVar6 != uVar22);
  }
  if (*(int *)(*plVar24 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar19 = FUN_01f801dc(plStack0000000000000048,0,0);
  if (((uVar19 & 1) != 0) && (uVar23 == *(int *)(lVar18 + 0x18) - 1U)) {
    lVar18 = *unaff_x28;
    if (lVar18 == 0) goto LAB_01f92644;
    lVar11 = (-(ulong)(uVar23 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar23 << 3) + 0x20;
    while ((int)uVar23 < *(int *)(lVar18 + 0x18)) {
      if ((plStack0000000000000048 == (long *)0x0) ||
         (uVar19 = FUN_01f81644(plStack0000000000000048,0), plVar13 == (long *)0x0))
      goto LAB_01f92644;
      if (*(uint *)(plVar13 + 3) <= uVar23) goto LAB_01f9340c;
      uVar17 = *(undefined8 *)((long)plVar13 + lVar11);
      if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar16 = FUN_01f7f404(uVar17,0,0);
      plVar24 = (long *)PTR_DAT_027b32e0;
      if ((uVar19 & 1) == 0) {
        if ((uVar16 & 1) == 0) {
          if (*(uint *)(plVar13 + 3) <= uVar23) goto LAB_01f9340c;
          uVar19 = (**(code **)(*plStack0000000000000048 + 0x288))
                             (plStack0000000000000048,*(undefined8 *)((long)plVar13 + lVar11),
                              *(undefined8 *)(*plStack0000000000000048 + 0x290));
          if ((uVar19 & 1) == 0) {
            if (*(uint *)(plVar13 + 3) <= uVar23) goto LAB_01f9340c;
            if (*(long *)((long)plVar13 + lVar11) == 0) goto LAB_01f92644;
            uVar19 = FUN_01f81468(*(long *)((long)plVar13 + lVar11),0);
            if ((uVar19 & 1) != 0) {
              lVar18 = *unaff_x28;
              if (lVar18 != 0) {
                if (uVar23 < *(uint *)(lVar18 + 0x18)) {
                  uVar19 = (**(code **)(*plStack0000000000000048 + 0x828))
                                     (plStack0000000000000048,*(undefined8 *)(lVar18 + lVar11),
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
        if ((uVar16 & 1) != 0) break;
        lVar18 = *unaff_x28;
        if (lVar18 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_01f9340c;
        uVar17 = *(undefined8 *)(lVar18 + lVar11);
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
        uVar19 = FUN_01f9451c(uVar17,plStack0000000000000048);
        plVar24 = (long *)PTR_DAT_027b32e0;
joined_r0x01f93040:
        if ((uVar19 & 1) == 0) break;
      }
      lVar18 = *unaff_x28;
      uVar23 = uVar23 + 1;
      lVar11 = lVar11 + 8;
      if (lVar18 == 0) goto LAB_01f92644;
    }
  }
  if (*unaff_x28 == 0) goto LAB_01f92644;
  if (uVar23 == *(uint *)(*unaff_x28 + 0x18)) {
    if (lVar9 != 0) {
      if ((uVar12 < *(uint *)(lVar9 + 0x18)) && (uVar8 < *(uint *)(lVar9 + 0x18))) {
        *(undefined8 *)(lVar9 + (long)(int)uVar8 * 8 + 0x20) =
             *(undefined8 *)(lVar9 + uVar12 * 8 + 0x20);
        thunk_FUN_01286abc();
        if (plVar10 != (long *)0x0) {
          if ((plStack0000000000000048 == (long *)0x0) ||
             (lVar18 = thunk_FUN_0124baac(plStack0000000000000048,*(undefined8 *)(*plVar10 + 0x40)),
             lVar18 != 0)) {
            if (uVar8 < *(uint *)(plVar10 + 3)) {
              plVar10[(long)(int)uVar8 + 4] = (long)plStack0000000000000048;
              thunk_FUN_01286abc(plVar10 + (long)(int)uVar8 + 4,plStack0000000000000048);
              uVar6 = *(uint *)(unaff_x24 + 3);
              if (uVar12 < uVar6) {
                lVar18 = *plVar26;
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
  uVar19 = (ulong)uVar6;
  uVar12 = uVar12 + 1;
  if ((long)(int)uVar6 <= (long)uVar12) goto LAB_01f9329c;
  goto LAB_01f9266c;
LAB_01f9329c:
  if (uVar8 == 1) {
    if (unaff_x25 != 0) {
      if (lVar9 == 0) goto LAB_01f92644;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_01f9340c;
      if (*(long *)(lVar9 + 0x20) == 0) goto LAB_01f92644;
      lVar18 = FUN_01f8a1a8(*(long *)(lVar9 + 0x20),0);
      lVar11 = *unaff_x28;
      if ((lVar11 == 0) || (plVar10 == (long *)0x0)) goto LAB_01f92644;
      if ((int)plVar10[3] == 0) goto LAB_01f9340c;
      lVar20 = plVar10[4];
      if (*(int *)(*plVar24 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      bVar5 = FUN_01f801dc(lVar20,0,0);
      lVar20 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
      if (lVar18 == 0) {
        lVar21 = 0;
      }
      else {
        uVar17 = *(undefined8 *)PTR_DAT_027b1ca8;
        lVar21 = thunk_FUN_0124baac(lVar18,uVar17);
        if (lVar21 == 0) {
LAB_01f93580:
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(lVar18,uVar17);
        }
      }
      uVar17 = *(undefined8 *)(lVar11 + 0x18);
      FUN_01fab77c(lVar20,0);
      *(long *)(lVar20 + 0x10) = lVar21;
      thunk_FUN_01286abc((long *)(lVar20 + 0x10),lVar21);
      *(int *)(lVar20 + 0x18) = (int)uVar17;
      *(byte *)(lVar20 + 0x1c) = bVar5 & 1;
      *unaff_x23 = lVar20;
      thunk_FUN_01286abc(unaff_x23,lVar20);
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_01f9340c;
      uVar17 = *(undefined8 *)(lVar9 + 0x20);
      lVar9 = *unaff_x28;
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      FUN_01f94678(uVar17,lVar9);
      uVar6 = (uint)unaff_x24[3];
      plVar24 = (long *)PTR_DAT_027b32e0;
    }
    if (uVar6 == 0) goto LAB_01f9340c;
    plVar26 = unaff_x24 + 4;
    plVar13 = (long *)*plVar26;
    if (((plVar13 == (long *)0x0) ||
        (lVar9 = (**(code **)(*plVar13 + 0x378))(plVar13,*(undefined8 *)(*plVar13 + 0x380)),
        lVar9 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
    iVar7 = *(int *)(*unaff_x28 + 0x18);
    if (*(int *)(lVar9 + 0x18) == iVar7) {
      if (plVar10 == (long *)0x0) goto LAB_01f92644;
      if ((int)plVar10[3] == 0) goto LAB_01f9340c;
      lVar18 = plVar10[4];
      if (*(int *)(*plVar24 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar12 = FUN_01f801dc(lVar18,0,0);
      if ((uVar12 & 1) != 0) {
        plVar13 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar9 + 0x18)
                                      );
        uVar8 = *(int *)(lVar9 + 0x18) - 1;
        FUN_01f89ca0(*unaff_x28,0,plVar13,0,uVar8,0);
        if ((int)plVar10[3] == 0) goto LAB_01f9340c;
        lVar18 = plVar10[4];
        lVar9 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
        if (lVar9 == 0) goto LAB_01f92644;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_01f9340c;
        *(undefined4 *)(lVar9 + 0x20) = 1;
        lVar9 = thunk_FUN_01f894b8(lVar18,lVar9,0);
        if (plVar13 == (long *)0x0) goto LAB_01f92644;
        if ((lVar9 != 0) &&
           (lVar18 = thunk_FUN_0124baac(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar18 == 0))
        goto LAB_01f941d8;
        if (*(uint *)(plVar13 + 3) <= uVar8) goto LAB_01f9340c;
        plVar10 = plVar13 + (long)(int)uVar8 + 4;
        *plVar10 = lVar9;
        thunk_FUN_01286abc(plVar10,lVar9);
        if (*(uint *)(plVar13 + 3) <= uVar8) goto LAB_01f9340c;
        lVar9 = *unaff_x28;
        if (lVar9 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_01f9340c;
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) goto LAB_01f92644;
        bVar5 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar5) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar5 * 8 + -8) !=
            *(long *)PTR_DAT_027b3f80)) {
LAB_01f942dc:
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(plVar10);
        }
        FUN_01f89750(plVar10,*(undefined8 *)(lVar9 + (long)(int)uVar8 * 8 + 0x20),0,0);
        goto LAB_01f94118;
      }
    }
    else {
      if (iVar7 < *(int *)(lVar9 + 0x18)) {
        plVar13 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
        lVar18 = *unaff_x28;
        if (lVar18 != 0) {
          uVar12 = 0;
          plVar24 = plVar13 + 4;
          do {
            if ((long)(int)*(uint *)(lVar18 + 0x18) <= (long)uVar12) {
              uVar8 = *(uint *)(lVar9 + 0x18);
              if ((int)(uVar8 - 1) <= (int)uVar12) goto LAB_01f93a68;
              goto LAB_01f939f4;
            }
            if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_01f9340c;
            if (plVar13 == (long *)0x0) break;
            lVar18 = *(long *)(lVar18 + uVar12 * 8 + 0x20);
            if ((lVar18 != 0) &&
               (lVar11 = thunk_FUN_0124baac(lVar18,*(undefined8 *)(*plVar13 + 0x40)), lVar11 == 0))
            goto LAB_01f941d8;
            if (*(uint *)(plVar13 + 3) <= uVar12) goto LAB_01f9340c;
            *plVar24 = lVar18;
            thunk_FUN_01286abc(plVar24,lVar18);
            lVar18 = *unaff_x28;
            uVar12 = uVar12 + 1;
            plVar24 = plVar24 + 1;
          } while (lVar18 != 0);
        }
        goto LAB_01f92644;
      }
      if ((int)unaff_x24[3] == 0) goto LAB_01f9340c;
      plVar13 = (long *)*plVar26;
      if (plVar13 == (long *)0x0) goto LAB_01f92644;
      uVar8 = (**(code **)(*plVar13 + 600))(plVar13,*(undefined8 *)(*plVar13 + 0x260));
      if ((uVar8 >> 1 & 1) == 0) {
        plVar13 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar9 + 0x18)
                                      );
        uVar8 = *(int *)(lVar9 + 0x18) - 1;
        FUN_01f89ca0(*unaff_x28,0,plVar13,0,uVar8,0);
        if (plVar10 == (long *)0x0) goto LAB_01f92644;
        if ((int)plVar10[3] == 0) goto LAB_01f9340c;
        lVar18 = plVar10[4];
        lVar9 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
        if ((*unaff_x28 == 0) || (lVar9 == 0)) goto LAB_01f92644;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_01f9340c;
        *(uint *)(lVar9 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar8;
        lVar9 = thunk_FUN_01f894b8(lVar18,lVar9,0);
        if (plVar13 == (long *)0x0) goto LAB_01f92644;
        if ((lVar9 != 0) &&
           (lVar18 = thunk_FUN_0124baac(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar18 == 0))
        goto LAB_01f941d8;
        if (*(uint *)(plVar13 + 3) <= uVar8) goto LAB_01f9340c;
        plVar10 = plVar13 + (long)(int)uVar8 + 4;
        *plVar10 = lVar9;
        thunk_FUN_01286abc(plVar10,lVar9);
        if (*(uint *)(plVar13 + 3) <= uVar8) goto LAB_01f9340c;
        lVar9 = *unaff_x28;
        if (lVar9 == 0) goto LAB_01f92644;
        plVar10 = (long *)*plVar10;
        if (plVar10 != (long *)0x0) {
          bVar5 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar5) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar5 * 8 + -8) !=
              *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
        }
        FUN_01f89ca0(lVar9,uVar8,plVar10,0,*(int *)(lVar9 + 0x18) - uVar8,0);
        *unaff_x28 = (long)plVar13;
        thunk_FUN_01286abc(unaff_x28,plVar13);
      }
    }
    goto LAB_01f94128;
  }
  if (uVar8 == 0) {
LAB_01f9423c:
    uVar17 = thunk_FUN_01279b34(PTR_DAT_027c1bf0);
    thunk_FUN_01279b34(PTR_DAT_027b3ed0);
    uVar27 = thunk_FUN_0124bba8();
    FUN_01f6b058(uVar27,uVar17,0);
LAB_01f9426c:
    uVar17 = thunk_FUN_01279b34(PTR_DAT_027c1bf8);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar27,uVar17);
  }
  if (1 < (int)uVar8) {
    if (uVar6 != 0) {
      lVar18 = 0;
      lVar11 = 0;
      uVar6 = 0;
      bVar3 = false;
      while( true ) {
        if (lVar9 == 0) goto LAB_01f92644;
        if ((uint)*(ulong *)(lVar9 + 0x18) <= uVar6) break;
        if (plVar10 == (long *)0x0) goto LAB_01f92644;
        if (((((uint)plVar10[3] <= uVar6) || (uVar12 = lVar18 + 1, uVar19 <= uVar12)) ||
            ((*(ulong *)(lVar9 + 0x18) & 0xffffffff) <= uVar12)) ||
           ((plVar10[3] & 0xffffffffU) <= uVar12)) break;
        lVar21 = unaff_x24[lVar11 + 4];
        lVar28 = unaff_x24[lVar18 + 5];
        lVar20 = plVar10[lVar11 + 4];
        uVar17 = *(undefined8 *)(lVar9 + lVar11 * 8 + 0x20);
        uVar27 = *(undefined8 *)(lVar9 + 0x28 + lVar18 * 8);
        lVar25 = plVar10[lVar18 + 5];
        lVar11 = *unaff_x28;
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        iVar7 = FUN_01f947fc(lVar21,uVar17,lVar20,lVar28,uVar27,lVar25,plVar13,lVar11);
        if (iVar7 == 0) {
          bVar3 = true;
        }
        else if (iVar7 == 2) {
          uVar6 = (int)lVar18 + 1;
          bVar3 = false;
        }
        if ((ulong)uVar8 - 2 == lVar18) {
          plVar24 = (long *)PTR_DAT_027b32e0;
          if (!bVar3) goto LAB_01f934c8;
          uVar17 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
          thunk_FUN_01279b34(PTR_DAT_027bc458);
          uVar27 = thunk_FUN_0124bba8();
          FUN_01ee31d4(uVar27,uVar17,0);
          goto LAB_01f9426c;
        }
        lVar11 = (long)(int)uVar6;
        lVar18 = lVar18 + 1;
        uVar19 = unaff_x24[3] & 0xffffffff;
        if ((uint)unaff_x24[3] <= uVar6) break;
      }
    }
    goto LAB_01f9340c;
  }
  uVar6 = 0;
LAB_01f934c8:
  if (unaff_x25 != 0) {
    if (lVar9 == 0) goto LAB_01f92644;
    if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_01f9340c;
    plVar13 = (long *)(lVar9 + (long)(int)uVar6 * 8 + 0x20);
    lVar18 = *plVar13;
    if (lVar18 == 0) goto LAB_01f92644;
    lVar18 = FUN_01f8a1a8(lVar18,0);
    lVar11 = *unaff_x28;
    if ((lVar11 == 0) || (plVar10 == (long *)0x0)) goto LAB_01f92644;
    if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_01f9340c;
    lVar20 = plVar10[(long)(int)uVar6 + 4];
    if (*(int *)(*plVar24 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    bVar5 = FUN_01f801dc(lVar20,0,0);
    lVar20 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
    if (lVar18 == 0) {
      lVar21 = 0;
    }
    else {
      uVar17 = *(undefined8 *)PTR_DAT_027b1ca8;
      lVar21 = thunk_FUN_0124baac(lVar18,uVar17);
      if (lVar21 == 0) goto LAB_01f93580;
    }
    uVar17 = *(undefined8 *)(lVar11 + 0x18);
    FUN_01fab77c(lVar20,0);
    *(long *)(lVar20 + 0x10) = lVar21;
    thunk_FUN_01286abc((long *)(lVar20 + 0x10),lVar21);
    *(int *)(lVar20 + 0x18) = (int)uVar17;
    *(byte *)(lVar20 + 0x1c) = bVar5 & 1;
    *unaff_x23 = lVar20;
    thunk_FUN_01286abc(unaff_x23,lVar20);
    if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_01f9340c;
    lVar9 = *plVar13;
    lVar18 = *unaff_x28;
    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f94678(lVar9,lVar18);
    plVar24 = (long *)PTR_DAT_027b32e0;
  }
  if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_01f9340c;
  plVar26 = unaff_x24 + (long)(int)uVar6 + 4;
  plVar13 = (long *)*plVar26;
  if (((plVar13 == (long *)0x0) ||
      (lVar9 = (**(code **)(*plVar13 + 0x378))(plVar13,*(undefined8 *)(*plVar13 + 0x380)),
      lVar9 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
  iVar7 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar9 + 0x18) == iVar7) {
    if (plVar10 == (long *)0x0) goto LAB_01f92644;
    if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_01f9340c;
    lVar18 = plVar10[(long)(int)uVar6 + 4];
    if (*(int *)(*plVar24 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar12 = FUN_01f801dc(lVar18,0,0);
    if ((uVar12 & 1) != 0) {
      plVar13 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar9 + 0x18));
      uVar8 = *(int *)(lVar9 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar13,0,uVar8,0);
      if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_01f9340c;
      lVar18 = plVar10[(long)(int)uVar6 + 4];
      lVar9 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if (lVar9 == 0) goto LAB_01f92644;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_01f9340c;
      *(undefined4 *)(lVar9 + 0x20) = 1;
      lVar9 = thunk_FUN_01f894b8(lVar18,lVar9,0);
      if (plVar13 == (long *)0x0) goto LAB_01f92644;
      if ((lVar9 != 0) &&
         (lVar18 = thunk_FUN_0124baac(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar18 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar13 + 3) <= uVar8) goto LAB_01f9340c;
      plVar10 = plVar13 + (long)(int)uVar8 + 4;
      *plVar10 = lVar9;
      thunk_FUN_01286abc(plVar10,lVar9);
      if (*(uint *)(plVar13 + 3) <= uVar8) goto LAB_01f9340c;
      lVar9 = *unaff_x28;
      if (lVar9 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_01f9340c;
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) goto LAB_01f92644;
      bVar5 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar5) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)PTR_DAT_027b3f80)
         ) goto LAB_01f942dc;
      FUN_01f89750(plVar10,*(undefined8 *)(lVar9 + (long)(int)uVar8 * 8 + 0x20),0,0);
      goto FUN_01f94198;
    }
  }
  else {
    if (iVar7 < *(int *)(lVar9 + 0x18)) {
      plVar13 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
      lVar18 = *unaff_x28;
      if (lVar18 != 0) {
        uVar12 = 0;
        plVar24 = plVar13 + 4;
        do {
          if ((long)(int)*(uint *)(lVar18 + 0x18) <= (long)uVar12) {
            uVar8 = *(uint *)(lVar9 + 0x18);
            if ((int)(uVar8 - 1) <= (int)uVar12) goto LAB_01f94000;
            goto LAB_01f93f8c;
          }
          if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_01f9340c;
          if (plVar13 == (long *)0x0) break;
          lVar18 = *(long *)(lVar18 + uVar12 * 8 + 0x20);
          if ((lVar18 != 0) &&
             (lVar11 = thunk_FUN_0124baac(lVar18,*(undefined8 *)(*plVar13 + 0x40)), lVar11 == 0))
          goto LAB_01f941d8;
          if (*(uint *)(plVar13 + 3) <= uVar12) goto LAB_01f9340c;
          *plVar24 = lVar18;
          thunk_FUN_01286abc(plVar24,lVar18);
          lVar18 = *unaff_x28;
          uVar12 = uVar12 + 1;
          plVar24 = plVar24 + 1;
        } while (lVar18 != 0);
      }
      goto LAB_01f92644;
    }
    if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_01f9340c;
    plVar13 = (long *)*plVar26;
    if (plVar13 == (long *)0x0) goto LAB_01f92644;
    uVar8 = (**(code **)(*plVar13 + 600))(plVar13,*(undefined8 *)(*plVar13 + 0x260));
    if ((uVar8 >> 1 & 1) == 0) {
      plVar13 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar9 + 0x18));
      uVar8 = *(int *)(lVar9 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar13,0,uVar8,0);
      if (plVar10 == (long *)0x0) goto LAB_01f92644;
      if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_01f9340c;
      lVar18 = plVar10[(long)(int)uVar6 + 4];
      lVar9 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if ((*unaff_x28 == 0) || (lVar9 == 0)) goto LAB_01f92644;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_01f9340c;
      *(uint *)(lVar9 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar8;
      lVar9 = thunk_FUN_01f894b8(lVar18,lVar9,0);
      if (plVar13 == (long *)0x0) goto LAB_01f92644;
      if ((lVar9 != 0) &&
         (lVar18 = thunk_FUN_0124baac(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar18 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar13 + 3) <= uVar8) goto LAB_01f9340c;
      plVar10 = plVar13 + (long)(int)uVar8 + 4;
      *plVar10 = lVar9;
      thunk_FUN_01286abc(plVar10,lVar9);
      if (*(uint *)(plVar13 + 3) <= uVar8) goto LAB_01f9340c;
      lVar9 = *unaff_x28;
      if (lVar9 == 0) goto LAB_01f92644;
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) {
        bVar5 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar5) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar5 * 8 + -8) !=
            *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
      }
      FUN_01f89ca0(lVar9,uVar8,plVar10,0,*(int *)(lVar9 + 0x18) - uVar8,0);
      *unaff_x28 = (long)plVar13;
      thunk_FUN_01286abc(unaff_x28,plVar13);
    }
  }
  goto OVRPlugin_UnityOpenXR__OnSessionExiting;
  while( true ) {
    plVar14 = *(long **)(lVar9 + 0x20 + uVar12 * 8);
    if ((plVar14 == (long *)0x0) ||
       (lVar18 = (**(code **)(*plVar14 + 0x1f8))(plVar14,*(undefined8 *)(*plVar14 + 0x200)),
       plVar13 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar18 != 0) &&
       (lVar11 = thunk_FUN_0124baac(lVar18,*(undefined8 *)(*plVar13 + 0x40)), lVar11 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar13 + 3) <= (uint)uVar12) goto LAB_01f9340c;
    *plVar24 = lVar18;
    thunk_FUN_01286abc(plVar24,lVar18);
    uVar8 = *(uint *)(lVar9 + 0x18);
    uVar12 = uVar12 + 1;
    plVar24 = plVar24 + 1;
    if ((int)(uVar8 - 1) <= (int)uVar12) break;
LAB_01f939f4:
    if (uVar8 <= (uint)uVar12) goto LAB_01f9340c;
  }
LAB_01f93a68:
  if (plVar10 == (long *)0x0) goto LAB_01f92644;
  if ((int)plVar10[3] == 0) goto LAB_01f9340c;
  lVar18 = plVar10[4];
  if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar19 = FUN_01f801dc(lVar18,0,0);
  uVar8 = (uint)uVar12;
  if ((uVar19 & 1) == 0) {
    if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_01f9340c;
    plVar10 = *(long **)(lVar9 + (long)(int)uVar8 * 8 + 0x20);
    if ((plVar10 == (long *)0x0) ||
       (lVar9 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200)),
       plVar13 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar9 != 0) &&
       (lVar18 = thunk_FUN_0124baac(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar18 == 0))
    goto LAB_01f941d8;
    uVar6 = *(uint *)(plVar13 + 3);
  }
  else {
    if ((int)plVar10[3] == 0) goto LAB_01f9340c;
    lVar9 = plVar10[4];
    uVar17 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
    lVar9 = thunk_FUN_01f894b8(lVar9,uVar17,0);
    if (plVar13 == (long *)0x0) goto LAB_01f92644;
    if ((lVar9 != 0) &&
       (lVar18 = thunk_FUN_0124baac(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar18 == 0))
    goto LAB_01f941d8;
    uVar6 = *(uint *)(plVar13 + 3);
  }
  if (uVar6 <= uVar8) goto LAB_01f9340c;
  plVar13[(long)(int)uVar8 + 4] = lVar9;
  thunk_FUN_01286abc(plVar13 + (long)(int)uVar8 + 4,lVar9);
LAB_01f94118:
  *unaff_x28 = (long)plVar13;
  thunk_FUN_01286abc(unaff_x28,plVar13);
LAB_01f94128:
  if ((int)unaff_x24[3] != 0) goto LAB_01f941b4;
  goto LAB_01f9340c;
  while( true ) {
    plVar14 = *(long **)(lVar9 + 0x20 + uVar12 * 8);
    if ((plVar14 == (long *)0x0) ||
       (lVar18 = (**(code **)(*plVar14 + 0x1f8))(plVar14,*(undefined8 *)(*plVar14 + 0x200)),
       plVar13 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar18 != 0) &&
       (lVar11 = thunk_FUN_0124baac(lVar18,*(undefined8 *)(*plVar13 + 0x40)), lVar11 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar13 + 3) <= (uint)uVar12) goto LAB_01f9340c;
    *plVar24 = lVar18;
    thunk_FUN_01286abc(plVar24,lVar18);
    uVar8 = *(uint *)(lVar9 + 0x18);
    uVar12 = uVar12 + 1;
    plVar24 = plVar24 + 1;
    if ((int)(uVar8 - 1) <= (int)uVar12) break;
LAB_01f93f8c:
    if (uVar8 <= (uint)uVar12) goto LAB_01f9340c;
  }
LAB_01f94000:
  if (plVar10 == (long *)0x0) goto LAB_01f92644;
  if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_01f9340c;
  lVar18 = plVar10[(long)(int)uVar6 + 4];
  if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar19 = FUN_01f801dc(lVar18,0,0);
  uVar8 = (uint)uVar12;
  if ((uVar19 & 1) == 0) {
    if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_01f9340c;
    plVar10 = *(long **)(lVar9 + (long)(int)uVar8 * 8 + 0x20);
    if ((plVar10 == (long *)0x0) ||
       (lVar9 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200)),
       plVar13 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar9 != 0) &&
       (lVar18 = thunk_FUN_0124baac(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar18 == 0))
    goto LAB_01f941d8;
    uVar23 = *(uint *)(plVar13 + 3);
  }
  else {
    if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_01f9340c;
    lVar9 = plVar10[(long)(int)uVar6 + 4];
    uVar17 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
    lVar9 = thunk_FUN_01f894b8(lVar9,uVar17,0);
    if (plVar13 == (long *)0x0) goto LAB_01f92644;
    if ((lVar9 != 0) &&
       (lVar18 = thunk_FUN_0124baac(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar18 == 0)) {
LAB_01f941d8:
      uVar17 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar17,0);
    }
    uVar23 = *(uint *)(plVar13 + 3);
  }
  if (uVar23 <= uVar8) goto LAB_01f9340c;
  plVar13[(long)(int)uVar8 + 4] = lVar9;
  thunk_FUN_01286abc(plVar13 + (long)(int)uVar8 + 4,lVar9);
FUN_01f94198:
  *unaff_x28 = (long)plVar13;
  thunk_FUN_01286abc(unaff_x28,plVar13);
OVRPlugin_UnityOpenXR__OnSessionExiting:
  if (uVar6 < *(uint *)(unaff_x24 + 3)) {
LAB_01f941b4:
    return *plVar26;
  }
LAB_01f9340c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


