/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$ovrp_Media_SetAvailableQueueIndexVulkan
ENTRY_POINT: 01f924d8
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


long OVRPlugin_OVRP_1_45_0__ovrp_Media_SetAvailableQueueIndexVulkan(long *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long unaff_x19;
  uint uVar20;
  uint uVar21;
  long *unaff_x21;
  long lVar22;
  long *plVar23;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long lVar24;
  long unaff_x26;
  long *plVar25;
  long *unaff_x27;
  undefined8 uVar26;
  long *unaff_x28;
  long lVar27;
  long *in_stack_00000010;
  long *plStack0000000000000048;
  uint in_stack_00000050;
  
  do {
    lVar22 = *unaff_x27;
    if (*(int *)(*param_1 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
                    /* try { // try from 01f924f8 to 0209251f has its CatchHandler @ 01f92adc */
    uVar9 = OVRPlugin_UnityOpenXR__OnSessionDestroy(lVar22,unaff_x26);
    if ((uVar9 & 1) == 0) {
      if (*(uint *)(unaff_x24 + 3) <= (uint)unaff_x19) goto LAB_01f9340c;
      *unaff_x21 = 0;
      thunk_FUN_01286abc(unaff_x21,0);
    }
    while( true ) {
      puVar4 = PTR_DAT_027b46c8;
      uVar8 = (int)unaff_x19 + 1;
      if ((int)(uint)unaff_x24[3] <= (int)uVar8) {
        plVar10 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b46c8);
        if (*unaff_x28 == 0) goto LAB_01f92644;
        plVar11 = (long *)FUN_01230af8(*(undefined8 *)puVar4,*(undefined4 *)(*unaff_x28 + 0x18));
        lVar22 = *unaff_x28;
        if (lVar22 == 0) goto LAB_01f92644;
        uVar9 = 0;
        plVar23 = plVar11 + 4;
        goto LAB_01f925c8;
      }
      if ((uint)unaff_x24[3] <= uVar8) goto LAB_01f9340c;
      unaff_x19 = (long)(int)uVar8;
      unaff_x21 = unaff_x24 + unaff_x19 + 4;
      plVar10 = (long *)*unaff_x21;
      if (((plVar10 == (long *)0x0) ||
          (unaff_x26 = (**(code **)(*plVar10 + 0x378))(plVar10,*(undefined8 *)(*plVar10 + 0x380)),
          unaff_x26 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
      iVar1 = *(int *)(*unaff_x28 + 0x18);
      iVar7 = *(int *)(unaff_x26 + 0x18);
      if (*(int *)(unaff_x26 + 0x18) <= iVar1) {
        iVar7 = iVar1;
      }
      lVar22 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,iVar7);
      if (unaff_x23 == 0) goto LAB_01f92644;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_01f9340c;
      unaff_x27 = (long *)(unaff_x23 + unaff_x19 * 8 + 0x20);
      *unaff_x27 = lVar22;
      thunk_FUN_01286abc(unaff_x27,lVar22);
      if (unaff_x25 != 0) break;
      if (*unaff_x28 == 0) goto LAB_01f92644;
      lVar22 = *(long *)(*unaff_x28 + 0x18);
      if (0 < lVar22 << 0x20) {
        uVar6 = *(uint *)(unaff_x23 + 0x18);
        uVar9 = 0;
        do {
          if (uVar6 <= uVar8) goto LAB_01f9340c;
          lVar12 = *unaff_x27;
          if (lVar12 == 0) goto LAB_01f92644;
          if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_01f9340c;
          *(int *)(lVar12 + uVar9 * 4 + 0x20) = (int)uVar9;
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)lVar22);
      }
    }
    param_1 = (long *)PTR_DAT_027c1390;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_01f9340c;
  } while( true );
LAB_01f9266c:
  if (uVar17 <= uVar9) goto LAB_01f9340c;
  plVar25 = unaff_x24 + uVar9 + 4;
  uVar17 = FUN_01ee539c(*plVar25,0,0);
  if ((uVar17 & 1) != 0) goto LAB_01f93214;
  if (*(uint *)(unaff_x24 + 3) <= uVar9) goto LAB_01f9340c;
  plVar13 = (long *)*plVar25;
  if ((plVar13 == (long *)0x0) ||
     (lVar22 = (**(code **)(*plVar13 + 0x378))(plVar13,*(undefined8 *)(*plVar13 + 0x380)),
     lVar22 == 0)) goto LAB_01f92644;
  uVar17 = *(ulong *)(lVar22 + 0x18);
  lVar12 = *unaff_x28;
  if (uVar17 == 0) {
    if (lVar12 == 0) goto LAB_01f92644;
    if (*(long *)(lVar12 + 0x18) != 0) {
      if (*(uint *)(unaff_x24 + 3) <= uVar9) goto LAB_01f9340c;
      plVar13 = (long *)*plVar25;
      if (plVar13 == (long *)0x0) goto LAB_01f92644;
      uVar6 = (**(code **)(*plVar13 + 600))(plVar13,*(undefined8 *)(*plVar13 + 0x260));
      if ((uVar6 >> 1 & 1) == 0) goto LAB_01f93214;
    }
    if (unaff_x23 == 0) goto LAB_01f92644;
    if ((*(uint *)(unaff_x23 + 0x18) <= uVar9) || (*(uint *)(unaff_x23 + 0x18) <= uVar8))
    goto LAB_01f9340c;
    *(undefined8 *)(unaff_x23 + (long)(int)uVar8 * 8 + 0x20) =
         *(undefined8 *)(unaff_x23 + uVar9 * 8 + 0x20);
    thunk_FUN_01286abc();
    uVar6 = *(uint *)(unaff_x24 + 3);
    if (uVar6 <= uVar9) goto LAB_01f9340c;
    lVar22 = *plVar25;
joined_r0x01f927d4:
    if (lVar22 != 0) {
      lVar12 = thunk_FUN_0124baac(lVar22,*(undefined8 *)(*unaff_x24 + 0x40));
      if (lVar12 == 0) goto LAB_01f941d8;
      uVar6 = (uint)unaff_x24[3];
    }
    lVar12 = (long)(int)uVar8;
    if (uVar6 <= uVar8) goto LAB_01f9340c;
    unaff_x24[lVar12 + 4] = lVar22;
    uVar8 = uVar8 + 1;
    thunk_FUN_01286abc(unaff_x24 + lVar12 + 4,lVar22);
    plVar23 = (long *)PTR_DAT_027b32e0;
    goto LAB_01f93214;
  }
  if (lVar12 == 0) goto LAB_01f92644;
  uVar6 = *(uint *)(lVar12 + 0x18);
  iVar7 = (int)uVar17;
  if ((int)uVar6 < iVar7) {
    uVar21 = iVar7 - 1;
    if ((int)uVar6 < (int)uVar21) {
      plVar13 = (long *)(lVar22 + (long)(int)uVar6 * 8 + 0x20);
      do {
        if ((uint)uVar17 <= uVar6) goto LAB_01f9340c;
        plVar14 = (long *)*plVar13;
        if (plVar14 == (long *)0x0) goto LAB_01f92644;
        lVar12 = (**(code **)(*plVar14 + 0x1f8))(plVar14,*(undefined8 *)(*plVar14 + 0x200));
        puVar4 = PTR_DAT_027baa38;
        lVar18 = *(long *)PTR_DAT_027baa38;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01220628(lVar18);
          lVar18 = *(long *)puVar4;
        }
        if (lVar12 == **(long **)(lVar18 + 0xb8)) {
          uVar17 = (ulong)*(uint *)(lVar22 + 0x18);
          uVar21 = *(uint *)(lVar22 + 0x18) - 1;
          break;
        }
        uVar17 = *(ulong *)(lVar22 + 0x18);
        uVar6 = uVar6 + 1;
        plVar13 = plVar13 + 1;
        uVar21 = (int)uVar17 - 1;
      } while ((int)uVar6 < (int)uVar21);
    }
    if (uVar6 == uVar21) {
      if ((uint)uVar17 <= uVar6) goto LAB_01f9340c;
      plVar14 = (long *)(lVar22 + (long)(int)uVar6 * 8 + 0x20);
      plVar13 = (long *)*plVar14;
      if (plVar13 == (long *)0x0) goto LAB_01f92644;
      lVar12 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200));
      puVar4 = PTR_DAT_027baa38;
      lVar18 = *(long *)PTR_DAT_027baa38;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01220628(lVar18);
        lVar18 = *(long *)puVar4;
      }
      if (lVar12 != **(long **)(lVar18 + 0xb8)) goto LAB_01f92a28;
      if (*(uint *)(lVar22 + 0x18) <= uVar6) goto LAB_01f9340c;
      plVar13 = (long *)*plVar14;
      if ((plVar13 == (long *)0x0) ||
         (lVar12 = (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0)),
         lVar12 == 0)) goto LAB_01f92644;
      uVar17 = FUN_01f80ec8(lVar12,0);
      if ((uVar17 & 1) != 0) {
        if (*(uint *)(lVar22 + 0x18) <= uVar6) goto LAB_01f9340c;
        plVar13 = (long *)*plVar14;
        uVar16 = *(undefined8 *)PTR_DAT_027c1be0;
        if (*(int *)(*plVar23 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar16 = FUN_01f7d8a0(uVar16,0);
        if (plVar13 == (long *)0x0) goto LAB_01f92644;
        uVar17 = (**(code **)(*plVar13 + 0x208))(plVar13,uVar16,1,*(undefined8 *)(*plVar13 + 0x210))
        ;
        plVar23 = (long *)PTR_DAT_027b32e0;
        if ((uVar17 & 1) != 0) {
          if (uVar6 < *(uint *)(lVar22 + 0x18)) {
            plVar14 = (long *)*plVar14;
            if (plVar14 != (long *)0x0) {
              plVar13 = (long *)(**(code **)(*plVar14 + 0x1d8))
                                          (plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
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
  uVar21 = iVar7 - 1;
  lVar12 = (long)(int)uVar21;
  plVar14 = (long *)(lVar22 + lVar12 * 8 + 0x20);
  plVar13 = (long *)*plVar14;
  if ((plVar13 == (long *)0x0) ||
     (lVar18 = (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0)),
     lVar18 == 0)) goto LAB_01f92644;
  uVar17 = FUN_01f80ec8(lVar18,0);
  if (iVar7 < (int)uVar6) {
    if ((uVar17 & 1) != 0) {
      if (*(uint *)(lVar22 + 0x18) <= uVar21) goto LAB_01f9340c;
      plVar13 = (long *)*plVar14;
      uVar16 = *(undefined8 *)PTR_DAT_027c1be0;
      if (*(int *)(*plVar23 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar16 = FUN_01f7d8a0(uVar16,0);
      if (plVar13 == (long *)0x0) goto LAB_01f92644;
      uVar17 = (**(code **)(*plVar13 + 0x208))(plVar13,uVar16,1,*(undefined8 *)(*plVar13 + 0x210));
      plVar23 = (long *)PTR_DAT_027b32e0;
      if ((uVar17 & 1) != 0) {
        if (unaff_x23 == 0) goto LAB_01f92644;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_01f9340c;
        lVar18 = *(long *)(unaff_x23 + uVar9 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar18 + 0x18) <= uVar21) goto LAB_01f9340c;
        if (*(uint *)(lVar18 + lVar12 * 4 + 0x20) == uVar21) {
LAB_01f9323c:
          if (uVar21 < *(uint *)(lVar22 + 0x18)) {
            plVar14 = (long *)*plVar14;
            if (plVar14 != (long *)0x0) {
              plVar13 = (long *)(**(code **)(*plVar14 + 0x1d8))
                                          (plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
joined_r0x01f931fc:
              if (plVar13 != (long *)0x0) {
                plStack0000000000000048 =
                     (long *)(**(code **)(*plVar13 + 0x408))
                                       (plVar13,*(undefined8 *)(*plVar13 + 0x410));
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
    if (*(uint *)(lVar22 + 0x18) <= uVar21) goto LAB_01f9340c;
    plVar13 = (long *)*plVar14;
    uVar16 = *(undefined8 *)PTR_DAT_027c1be0;
    if (*(int *)(*plVar23 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar16 = FUN_01f7d8a0(uVar16,0);
    if (plVar13 == (long *)0x0) goto LAB_01f92644;
    uVar17 = (**(code **)(*plVar13 + 0x208))(plVar13,uVar16,1,*(undefined8 *)(*plVar13 + 0x210));
    plVar23 = (long *)PTR_DAT_027b32e0;
    if ((uVar17 & 1) != 0) {
      if (unaff_x23 == 0) goto LAB_01f92644;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_01f9340c;
      lVar18 = *(long *)(unaff_x23 + uVar9 * 8 + 0x20);
      if (lVar18 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar18 + 0x18) <= uVar21) goto LAB_01f9340c;
      if (*(uint *)(lVar18 + lVar12 * 4 + 0x20) != uVar21) goto LAB_01f92a28;
      if (*(uint *)(lVar22 + 0x18) <= uVar21) goto LAB_01f9340c;
      plVar13 = (long *)*plVar14;
      if ((plVar13 == (long *)0x0) ||
         (plVar13 = (long *)(**(code **)(*plVar13 + 0x1d8))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x1e0)),
         plVar11 == (long *)0x0)) goto LAB_01f92644;
      if (*(uint *)(plVar11 + 3) <= uVar21) goto LAB_01f9340c;
      if (plVar13 == (long *)0x0) goto LAB_01f92644;
      uVar17 = (**(code **)(*plVar13 + 0x288))
                         (plVar13,plVar11[lVar12 + 4],*(undefined8 *)(*plVar13 + 0x290));
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
    uVar6 = *(int *)(lVar22 + 0x18) - 1;
  }
  if ((int)uVar6 < 1) {
    uVar21 = 0;
  }
  else {
    uVar20 = 0;
    plVar13 = (long *)(unaff_x23 + uVar9 * 8 + 0x20);
    do {
      if (*(uint *)(lVar22 + 0x18) <= uVar20) goto LAB_01f9340c;
      lVar12 = (long)(int)uVar20;
      plVar14 = *(long **)(lVar22 + lVar12 * 8 + 0x20);
      if ((plVar14 == (long *)0x0) ||
         (plVar14 = (long *)(**(code **)(*plVar14 + 0x1d8))
                                      (plVar14,*(undefined8 *)(*plVar14 + 0x1e0)),
         plVar14 == (long *)0x0)) goto LAB_01f92644;
      uVar17 = FUN_01f80ed8(plVar14,0);
      if ((uVar17 & 1) != 0) {
        plVar14 = (long *)(**(code **)(*plVar14 + 0x408))(plVar14,*(undefined8 *)(*plVar14 + 0x410))
        ;
      }
      if (unaff_x23 == 0) goto LAB_01f92644;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_01f9340c;
      lVar18 = *plVar13;
      if (lVar18 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_01f9340c;
      if (plVar11 == (long *)0x0) goto LAB_01f92644;
      uVar21 = *(uint *)(lVar18 + lVar12 * 4 + 0x20);
      if (*(uint *)(plVar11 + 3) <= uVar21) goto LAB_01f9340c;
      lVar18 = plVar11[(long)(int)uVar21 + 4];
      if (*(int *)(*plVar23 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar17 = FUN_01f7f404(plVar14,lVar18,0);
      if ((uVar17 & 1) == 0) {
        if ((in_stack_00000050 >> 0x12 & 1) != 0) {
          if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_01f9340c;
          lVar18 = *plVar13;
          if (lVar18 == 0) goto LAB_01f92644;
          if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_01f9340c;
          lVar19 = *unaff_x28;
          if (lVar19 == 0) goto LAB_01f92644;
          uVar21 = *(uint *)(lVar18 + lVar12 * 4 + 0x20);
          if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_01f9340c;
          lVar18 = *plVar23;
          lVar19 = *(long *)(lVar19 + (long)(int)uVar21 * 8 + 0x20);
          if (*(int *)(lVar18 + 0xe0) == 0) {
            thunk_FUN_01220628();
            lVar18 = *plVar23;
          }
          if (lVar19 == *(long *)(*(long *)(lVar18 + 0xb8) + 0x18)) goto LAB_01f92e70;
        }
        if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_01f9340c;
        lVar18 = *plVar13;
        if (lVar18 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_01f9340c;
        lVar19 = *unaff_x28;
        if (lVar19 == 0) goto LAB_01f92644;
        uVar21 = *(uint *)(lVar18 + lVar12 * 4 + 0x20);
        if (*(uint *)(lVar19 + 0x18) <= uVar21) goto LAB_01f9340c;
        if (*(long *)(lVar19 + (long)(int)uVar21 * 8 + 0x20) != 0) {
          uVar16 = *(undefined8 *)PTR_DAT_027b5b48;
          if (*(int *)(*plVar23 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar16 = FUN_01f7d8a0(uVar16,0);
          uVar17 = FUN_01f7f404(plVar14,uVar16,0);
          if ((uVar17 & 1) == 0) {
            if (plVar14 == (long *)0x0) goto LAB_01f92644;
            uVar17 = FUN_01f81644(plVar14,0);
            if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_01f9340c;
            lVar18 = *plVar13;
            if (lVar18 == 0) goto LAB_01f92644;
            if ((*(uint *)(lVar18 + 0x18) <= uVar20) ||
               (uVar21 = *(uint *)(lVar18 + lVar12 * 4 + 0x20), *(uint *)(plVar11 + 3) <= uVar21))
            goto LAB_01f9340c;
            lVar18 = plVar11[(long)(int)uVar21 + 4];
            if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar15 = FUN_01f7f404(lVar18,0,0);
            plVar23 = (long *)PTR_DAT_027b32e0;
            uVar21 = uVar20;
            if ((uVar17 & 1) == 0) {
              if ((uVar15 & 1) == 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_01f9340c;
                lVar18 = *plVar13;
                if (lVar18 == 0) goto LAB_01f92644;
                if ((*(uint *)(lVar18 + 0x18) <= uVar20) ||
                   (uVar2 = *(uint *)(lVar18 + lVar12 * 4 + 0x20), *(uint *)(plVar11 + 3) <= uVar2))
                goto LAB_01f9340c;
                uVar17 = (**(code **)(*plVar14 + 0x288))
                                   (plVar14,plVar11[(long)(int)uVar2 + 4],
                                    *(undefined8 *)(*plVar14 + 0x290));
                if ((uVar17 & 1) == 0) {
                  if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_01f9340c;
                  lVar18 = *plVar13;
                  if (lVar18 == 0) goto LAB_01f92644;
                  if ((*(uint *)(lVar18 + 0x18) <= uVar20) ||
                     (uVar2 = *(uint *)(lVar18 + lVar12 * 4 + 0x20), *(uint *)(plVar11 + 3) <= uVar2
                     )) goto LAB_01f9340c;
                  if (plVar11[(long)(int)uVar2 + 4] == 0) goto LAB_01f92644;
                  uVar17 = FUN_01f81468(plVar11[(long)(int)uVar2 + 4],0);
                  if ((uVar17 & 1) != 0) {
                    if (uVar9 < *(uint *)(unaff_x23 + 0x18)) {
                      lVar18 = *plVar13;
                      if (lVar18 != 0) {
                        if (uVar20 < *(uint *)(lVar18 + 0x18)) {
                          lVar19 = *unaff_x28;
                          if (lVar19 != 0) {
                            uVar2 = *(uint *)(lVar18 + lVar12 * 4 + 0x20);
                            if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                              uVar17 = (**(code **)(*plVar14 + 0x828))
                                                 (plVar14,*(undefined8 *)
                                                           (lVar19 + (long)(int)uVar2 * 8 + 0x20),
                                                  *(undefined8 *)(*plVar14 + 0x830));
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
              if ((uVar15 & 1) != 0) break;
              if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_01f9340c;
              lVar18 = *plVar13;
              if (lVar18 == 0) goto LAB_01f92644;
              if (*(uint *)(lVar18 + 0x18) <= uVar20) goto LAB_01f9340c;
              lVar19 = *unaff_x28;
              if (lVar19 == 0) goto LAB_01f92644;
              uVar2 = *(uint *)(lVar18 + lVar12 * 4 + 0x20);
              if (*(uint *)(lVar19 + 0x18) <= uVar2) goto LAB_01f9340c;
              uVar16 = *(undefined8 *)(lVar19 + (long)(int)uVar2 * 8 + 0x20);
              if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              bVar5 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
              if ((*(byte *)(*plVar14 + 0x130) < bVar5) ||
                 (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar5 * 8 + -8) !=
                  *(long *)PTR_DAT_027b3ec0)) {
                    /* WARNING: Subroutine does not return */
                FUN_01230f60(plVar14);
              }
              uVar17 = FUN_01f9451c(uVar16,plVar14);
              plVar23 = (long *)PTR_DAT_027b32e0;
joined_r0x01f92e6c:
              if ((uVar17 & 1) == 0) break;
            }
          }
        }
      }
LAB_01f92e70:
      uVar20 = uVar20 + 1;
      uVar21 = uVar6;
    } while (uVar6 != uVar20);
  }
  if (*(int *)(*plVar23 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar17 = FUN_01f801dc(plStack0000000000000048,0,0);
  if (((uVar17 & 1) != 0) && (uVar21 == *(int *)(lVar22 + 0x18) - 1U)) {
    lVar22 = *unaff_x28;
    if (lVar22 == 0) goto LAB_01f92644;
    lVar12 = (-(ulong)(uVar21 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar21 << 3) + 0x20;
    while ((int)uVar21 < *(int *)(lVar22 + 0x18)) {
      if ((plStack0000000000000048 == (long *)0x0) ||
         (uVar17 = FUN_01f81644(plStack0000000000000048,0), plVar11 == (long *)0x0))
      goto LAB_01f92644;
      if (*(uint *)(plVar11 + 3) <= uVar21) goto LAB_01f9340c;
      uVar16 = *(undefined8 *)((long)plVar11 + lVar12);
      if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar15 = FUN_01f7f404(uVar16,0,0);
      plVar23 = (long *)PTR_DAT_027b32e0;
      if ((uVar17 & 1) == 0) {
        if ((uVar15 & 1) == 0) {
          if (*(uint *)(plVar11 + 3) <= uVar21) goto LAB_01f9340c;
          uVar17 = (**(code **)(*plStack0000000000000048 + 0x288))
                             (plStack0000000000000048,*(undefined8 *)((long)plVar11 + lVar12),
                              *(undefined8 *)(*plStack0000000000000048 + 0x290));
          if ((uVar17 & 1) == 0) {
            if (*(uint *)(plVar11 + 3) <= uVar21) goto LAB_01f9340c;
            if (*(long *)((long)plVar11 + lVar12) == 0) goto LAB_01f92644;
            uVar17 = FUN_01f81468(*(long *)((long)plVar11 + lVar12),0);
            if ((uVar17 & 1) != 0) {
              lVar22 = *unaff_x28;
              if (lVar22 != 0) {
                if (uVar21 < *(uint *)(lVar22 + 0x18)) {
                  uVar17 = (**(code **)(*plStack0000000000000048 + 0x828))
                                     (plStack0000000000000048,*(undefined8 *)(lVar22 + lVar12),
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
        if ((uVar15 & 1) != 0) break;
        lVar22 = *unaff_x28;
        if (lVar22 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar22 + 0x18) <= uVar21) goto LAB_01f9340c;
        uVar16 = *(undefined8 *)(lVar22 + lVar12);
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
        uVar17 = FUN_01f9451c(uVar16,plStack0000000000000048);
        plVar23 = (long *)PTR_DAT_027b32e0;
joined_r0x01f93040:
        if ((uVar17 & 1) == 0) break;
      }
      lVar22 = *unaff_x28;
      uVar21 = uVar21 + 1;
      lVar12 = lVar12 + 8;
      if (lVar22 == 0) goto LAB_01f92644;
    }
  }
  if (*unaff_x28 == 0) goto LAB_01f92644;
  if (uVar21 == *(uint *)(*unaff_x28 + 0x18)) {
    if (unaff_x23 != 0) {
      if ((uVar9 < *(uint *)(unaff_x23 + 0x18)) && (uVar8 < *(uint *)(unaff_x23 + 0x18))) {
        *(undefined8 *)(unaff_x23 + (long)(int)uVar8 * 8 + 0x20) =
             *(undefined8 *)(unaff_x23 + uVar9 * 8 + 0x20);
        thunk_FUN_01286abc();
        if (plVar10 != (long *)0x0) {
          if ((plStack0000000000000048 == (long *)0x0) ||
             (lVar22 = thunk_FUN_0124baac(plStack0000000000000048,*(undefined8 *)(*plVar10 + 0x40)),
             lVar22 != 0)) {
            if (uVar8 < *(uint *)(plVar10 + 3)) {
              plVar10[(long)(int)uVar8 + 4] = (long)plStack0000000000000048;
              thunk_FUN_01286abc(plVar10 + (long)(int)uVar8 + 4,plStack0000000000000048);
              uVar6 = *(uint *)(unaff_x24 + 3);
              if (uVar9 < uVar6) {
                lVar22 = *plVar25;
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
  uVar9 = uVar9 + 1;
  if ((long)(int)uVar6 <= (long)uVar9) goto LAB_01f9329c;
  goto LAB_01f9266c;
LAB_01f9329c:
  if (uVar8 == 1) {
    if (unaff_x25 != 0) {
      if (unaff_x23 == 0) goto LAB_01f92644;
      if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
      if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_01f92644;
      lVar22 = FUN_01f8a1a8(*(long *)(unaff_x23 + 0x20),0);
      lVar12 = *unaff_x28;
      if ((lVar12 == 0) || (plVar10 == (long *)0x0)) goto LAB_01f92644;
      if ((int)plVar10[3] == 0) goto LAB_01f9340c;
      lVar18 = plVar10[4];
      if (*(int *)(*plVar23 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      bVar5 = FUN_01f801dc(lVar18,0,0);
      lVar18 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
      if (lVar22 == 0) {
        lVar19 = 0;
      }
      else {
        uVar16 = *(undefined8 *)PTR_DAT_027b1ca8;
        lVar19 = thunk_FUN_0124baac(lVar22,uVar16);
        if (lVar19 == 0) {
LAB_01f93580:
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(lVar22,uVar16);
        }
      }
      uVar16 = *(undefined8 *)(lVar12 + 0x18);
      FUN_01fab77c(lVar18,0);
      *(long *)(lVar18 + 0x10) = lVar19;
      thunk_FUN_01286abc((long *)(lVar18 + 0x10),lVar19);
      *(int *)(lVar18 + 0x18) = (int)uVar16;
      *(byte *)(lVar18 + 0x1c) = bVar5 & 1;
      *in_stack_00000010 = lVar18;
      thunk_FUN_01286abc(in_stack_00000010,lVar18);
      if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
      uVar16 = *(undefined8 *)(unaff_x23 + 0x20);
      lVar22 = *unaff_x28;
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      FUN_01f94678(uVar16,lVar22);
      uVar6 = (uint)unaff_x24[3];
      plVar23 = (long *)PTR_DAT_027b32e0;
    }
    if (uVar6 == 0) goto LAB_01f9340c;
    plVar25 = unaff_x24 + 4;
    plVar11 = (long *)*plVar25;
    if (((plVar11 == (long *)0x0) ||
        (lVar22 = (**(code **)(*plVar11 + 0x378))(plVar11,*(undefined8 *)(*plVar11 + 0x380)),
        lVar22 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
    iVar7 = *(int *)(*unaff_x28 + 0x18);
    if (*(int *)(lVar22 + 0x18) == iVar7) {
      if (plVar10 == (long *)0x0) goto LAB_01f92644;
      if ((int)plVar10[3] == 0) goto LAB_01f9340c;
      lVar12 = plVar10[4];
      if (*(int *)(*plVar23 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar9 = FUN_01f801dc(lVar12,0,0);
      if ((uVar9 & 1) != 0) {
        plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,
                                       *(undefined4 *)(lVar22 + 0x18));
        uVar8 = *(int *)(lVar22 + 0x18) - 1;
        FUN_01f89ca0(*unaff_x28,0,plVar11,0,uVar8,0);
        if ((int)plVar10[3] == 0) goto LAB_01f9340c;
        lVar12 = plVar10[4];
        lVar22 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
        if (lVar22 == 0) goto LAB_01f92644;
        if (*(int *)(lVar22 + 0x18) == 0) goto LAB_01f9340c;
        *(undefined4 *)(lVar22 + 0x20) = 1;
        lVar22 = thunk_FUN_01f894b8(lVar12,lVar22,0);
        if (plVar11 == (long *)0x0) goto LAB_01f92644;
        if ((lVar22 != 0) &&
           (lVar12 = thunk_FUN_0124baac(lVar22,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
        goto LAB_01f941d8;
        if (*(uint *)(plVar11 + 3) <= uVar8) goto LAB_01f9340c;
        plVar10 = plVar11 + (long)(int)uVar8 + 4;
        *plVar10 = lVar22;
        thunk_FUN_01286abc(plVar10,lVar22);
        if (*(uint *)(plVar11 + 3) <= uVar8) goto LAB_01f9340c;
        lVar22 = *unaff_x28;
        if (lVar22 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar22 + 0x18) <= uVar8) goto LAB_01f9340c;
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
        FUN_01f89750(plVar10,*(undefined8 *)(lVar22 + (long)(int)uVar8 * 8 + 0x20),0,0);
        goto LAB_01f94118;
      }
    }
    else {
      if (iVar7 < *(int *)(lVar22 + 0x18)) {
        plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
        lVar12 = *unaff_x28;
        if (lVar12 != 0) {
          uVar9 = 0;
          plVar23 = plVar11 + 4;
          do {
            if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar9) {
              uVar8 = *(uint *)(lVar22 + 0x18);
              if ((int)(uVar8 - 1) <= (int)uVar9) goto LAB_01f93a68;
              goto LAB_01f939f4;
            }
            if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_01f9340c;
            if (plVar11 == (long *)0x0) break;
            lVar12 = *(long *)(lVar12 + uVar9 * 8 + 0x20);
            if ((lVar12 != 0) &&
               (lVar18 = thunk_FUN_0124baac(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar18 == 0))
            goto LAB_01f941d8;
            if (*(uint *)(plVar11 + 3) <= uVar9) goto LAB_01f9340c;
            *plVar23 = lVar12;
            thunk_FUN_01286abc(plVar23,lVar12);
            lVar12 = *unaff_x28;
            uVar9 = uVar9 + 1;
            plVar23 = plVar23 + 1;
          } while (lVar12 != 0);
        }
        goto LAB_01f92644;
      }
      if ((int)unaff_x24[3] == 0) goto LAB_01f9340c;
      plVar11 = (long *)*plVar25;
      if (plVar11 == (long *)0x0) goto LAB_01f92644;
      uVar8 = (**(code **)(*plVar11 + 600))(plVar11,*(undefined8 *)(*plVar11 + 0x260));
      if ((uVar8 >> 1 & 1) == 0) {
        plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,
                                       *(undefined4 *)(lVar22 + 0x18));
        uVar8 = *(int *)(lVar22 + 0x18) - 1;
        FUN_01f89ca0(*unaff_x28,0,plVar11,0,uVar8,0);
        if (plVar10 == (long *)0x0) goto LAB_01f92644;
        if ((int)plVar10[3] == 0) goto LAB_01f9340c;
        lVar12 = plVar10[4];
        lVar22 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
        if ((*unaff_x28 == 0) || (lVar22 == 0)) goto LAB_01f92644;
        if (*(int *)(lVar22 + 0x18) == 0) goto LAB_01f9340c;
        *(uint *)(lVar22 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar8;
        lVar22 = thunk_FUN_01f894b8(lVar12,lVar22,0);
        if (plVar11 == (long *)0x0) goto LAB_01f92644;
        if ((lVar22 != 0) &&
           (lVar12 = thunk_FUN_0124baac(lVar22,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
        goto LAB_01f941d8;
        if (*(uint *)(plVar11 + 3) <= uVar8) goto LAB_01f9340c;
        plVar10 = plVar11 + (long)(int)uVar8 + 4;
        *plVar10 = lVar22;
        thunk_FUN_01286abc(plVar10,lVar22);
        if (*(uint *)(plVar11 + 3) <= uVar8) goto LAB_01f9340c;
        lVar22 = *unaff_x28;
        if (lVar22 == 0) goto LAB_01f92644;
        plVar10 = (long *)*plVar10;
        if (plVar10 != (long *)0x0) {
          bVar5 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar5) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar5 * 8 + -8) !=
              *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
        }
        FUN_01f89ca0(lVar22,uVar8,plVar10,0,*(int *)(lVar22 + 0x18) - uVar8,0);
        *unaff_x28 = (long)plVar11;
        thunk_FUN_01286abc(unaff_x28,plVar11);
      }
    }
    goto LAB_01f94128;
  }
  if (uVar8 == 0) {
LAB_01f9423c:
    uVar16 = thunk_FUN_01279b34(PTR_DAT_027c1bf0);
    thunk_FUN_01279b34(PTR_DAT_027b3ed0);
    uVar26 = thunk_FUN_0124bba8();
    FUN_01f6b058(uVar26,uVar16,0);
LAB_01f9426c:
    uVar16 = thunk_FUN_01279b34(PTR_DAT_027c1bf8);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar26,uVar16);
  }
  if (1 < (int)uVar8) {
    if (uVar6 != 0) {
      lVar22 = 0;
      lVar12 = 0;
      uVar6 = 0;
      bVar3 = false;
      while( true ) {
        if (unaff_x23 == 0) goto LAB_01f92644;
        if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar6) break;
        if (plVar10 == (long *)0x0) goto LAB_01f92644;
        if (((((uint)plVar10[3] <= uVar6) || (uVar9 = lVar22 + 1, uVar17 <= uVar9)) ||
            ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar9)) ||
           ((plVar10[3] & 0xffffffffU) <= uVar9)) break;
        lVar19 = unaff_x24[lVar12 + 4];
        lVar27 = unaff_x24[lVar22 + 5];
        lVar18 = plVar10[lVar12 + 4];
        uVar16 = *(undefined8 *)(unaff_x23 + lVar12 * 8 + 0x20);
        uVar26 = *(undefined8 *)(unaff_x23 + 0x28 + lVar22 * 8);
        lVar24 = plVar10[lVar22 + 5];
        lVar12 = *unaff_x28;
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        iVar7 = FUN_01f947fc(lVar19,uVar16,lVar18,lVar27,uVar26,lVar24,plVar11,lVar12);
        if (iVar7 == 0) {
          bVar3 = true;
        }
        else if (iVar7 == 2) {
          uVar6 = (int)lVar22 + 1;
          bVar3 = false;
        }
        if ((ulong)uVar8 - 2 == lVar22) {
          plVar23 = (long *)PTR_DAT_027b32e0;
          if (!bVar3) goto LAB_01f934c8;
          uVar16 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
          thunk_FUN_01279b34(PTR_DAT_027bc458);
          uVar26 = thunk_FUN_0124bba8();
          FUN_01ee31d4(uVar26,uVar16,0);
          goto LAB_01f9426c;
        }
        lVar12 = (long)(int)uVar6;
        lVar22 = lVar22 + 1;
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
    plVar11 = (long *)(unaff_x23 + (long)(int)uVar6 * 8 + 0x20);
    lVar22 = *plVar11;
    if (lVar22 == 0) goto LAB_01f92644;
    lVar22 = FUN_01f8a1a8(lVar22,0);
    lVar12 = *unaff_x28;
    if ((lVar12 == 0) || (plVar10 == (long *)0x0)) goto LAB_01f92644;
    if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_01f9340c;
    lVar18 = plVar10[(long)(int)uVar6 + 4];
    if (*(int *)(*plVar23 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    bVar5 = FUN_01f801dc(lVar18,0,0);
    lVar18 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
    if (lVar22 == 0) {
      lVar19 = 0;
    }
    else {
      uVar16 = *(undefined8 *)PTR_DAT_027b1ca8;
      lVar19 = thunk_FUN_0124baac(lVar22,uVar16);
      if (lVar19 == 0) goto LAB_01f93580;
    }
    uVar16 = *(undefined8 *)(lVar12 + 0x18);
    FUN_01fab77c(lVar18,0);
    *(long *)(lVar18 + 0x10) = lVar19;
    thunk_FUN_01286abc((long *)(lVar18 + 0x10),lVar19);
    *(int *)(lVar18 + 0x18) = (int)uVar16;
    *(byte *)(lVar18 + 0x1c) = bVar5 & 1;
    *in_stack_00000010 = lVar18;
    thunk_FUN_01286abc(in_stack_00000010,lVar18);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
    lVar22 = *plVar11;
    lVar12 = *unaff_x28;
    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f94678(lVar22,lVar12);
    plVar23 = (long *)PTR_DAT_027b32e0;
  }
  if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_01f9340c;
  plVar25 = unaff_x24 + (long)(int)uVar6 + 4;
  plVar11 = (long *)*plVar25;
  if (((plVar11 == (long *)0x0) ||
      (lVar22 = (**(code **)(*plVar11 + 0x378))(plVar11,*(undefined8 *)(*plVar11 + 0x380)),
      lVar22 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
  iVar7 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar22 + 0x18) == iVar7) {
    if (plVar10 == (long *)0x0) goto LAB_01f92644;
    if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_01f9340c;
    lVar12 = plVar10[(long)(int)uVar6 + 4];
    if (*(int *)(*plVar23 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar9 = FUN_01f801dc(lVar12,0,0);
    if ((uVar9 & 1) != 0) {
      plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar22 + 0x18))
      ;
      uVar8 = *(int *)(lVar22 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar11,0,uVar8,0);
      if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_01f9340c;
      lVar12 = plVar10[(long)(int)uVar6 + 4];
      lVar22 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if (lVar22 == 0) goto LAB_01f92644;
      if (*(int *)(lVar22 + 0x18) == 0) goto LAB_01f9340c;
      *(undefined4 *)(lVar22 + 0x20) = 1;
      lVar22 = thunk_FUN_01f894b8(lVar12,lVar22,0);
      if (plVar11 == (long *)0x0) goto LAB_01f92644;
      if ((lVar22 != 0) &&
         (lVar12 = thunk_FUN_0124baac(lVar22,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar11 + 3) <= uVar8) goto LAB_01f9340c;
      plVar10 = plVar11 + (long)(int)uVar8 + 4;
      *plVar10 = lVar22;
      thunk_FUN_01286abc(plVar10,lVar22);
      if (*(uint *)(plVar11 + 3) <= uVar8) goto LAB_01f9340c;
      lVar22 = *unaff_x28;
      if (lVar22 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar22 + 0x18) <= uVar8) goto LAB_01f9340c;
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) goto LAB_01f92644;
      bVar5 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar5) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)PTR_DAT_027b3f80)
         ) goto LAB_01f942dc;
      FUN_01f89750(plVar10,*(undefined8 *)(lVar22 + (long)(int)uVar8 * 8 + 0x20),0,0);
      goto FUN_01f94198;
    }
  }
  else {
    if (iVar7 < *(int *)(lVar22 + 0x18)) {
      plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
      lVar12 = *unaff_x28;
      if (lVar12 != 0) {
        uVar9 = 0;
        plVar23 = plVar11 + 4;
        do {
          if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar9) {
            uVar8 = *(uint *)(lVar22 + 0x18);
            if ((int)(uVar8 - 1) <= (int)uVar9) goto LAB_01f94000;
            goto LAB_01f93f8c;
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_01f9340c;
          if (plVar11 == (long *)0x0) break;
          lVar12 = *(long *)(lVar12 + uVar9 * 8 + 0x20);
          if ((lVar12 != 0) &&
             (lVar18 = thunk_FUN_0124baac(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar18 == 0))
          goto LAB_01f941d8;
          if (*(uint *)(plVar11 + 3) <= uVar9) goto LAB_01f9340c;
          *plVar23 = lVar12;
          thunk_FUN_01286abc(plVar23,lVar12);
          lVar12 = *unaff_x28;
          uVar9 = uVar9 + 1;
          plVar23 = plVar23 + 1;
        } while (lVar12 != 0);
      }
      goto LAB_01f92644;
    }
    if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_01f9340c;
    plVar11 = (long *)*plVar25;
    if (plVar11 == (long *)0x0) goto LAB_01f92644;
    uVar8 = (**(code **)(*plVar11 + 600))(plVar11,*(undefined8 *)(*plVar11 + 0x260));
    if ((uVar8 >> 1 & 1) == 0) {
      plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar22 + 0x18))
      ;
      uVar8 = *(int *)(lVar22 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar11,0,uVar8,0);
      if (plVar10 == (long *)0x0) goto LAB_01f92644;
      if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_01f9340c;
      lVar12 = plVar10[(long)(int)uVar6 + 4];
      lVar22 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if ((*unaff_x28 == 0) || (lVar22 == 0)) goto LAB_01f92644;
      if (*(int *)(lVar22 + 0x18) == 0) goto LAB_01f9340c;
      *(uint *)(lVar22 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar8;
      lVar22 = thunk_FUN_01f894b8(lVar12,lVar22,0);
      if (plVar11 == (long *)0x0) goto LAB_01f92644;
      if ((lVar22 != 0) &&
         (lVar12 = thunk_FUN_0124baac(lVar22,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar11 + 3) <= uVar8) goto LAB_01f9340c;
      plVar10 = plVar11 + (long)(int)uVar8 + 4;
      *plVar10 = lVar22;
      thunk_FUN_01286abc(plVar10,lVar22);
      if (*(uint *)(plVar11 + 3) <= uVar8) goto LAB_01f9340c;
      lVar22 = *unaff_x28;
      if (lVar22 == 0) goto LAB_01f92644;
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) {
        bVar5 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar5) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar5 * 8 + -8) !=
            *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
      }
      FUN_01f89ca0(lVar22,uVar8,plVar10,0,*(int *)(lVar22 + 0x18) - uVar8,0);
      *unaff_x28 = (long)plVar11;
      thunk_FUN_01286abc(unaff_x28,plVar11);
    }
  }
  goto OVRPlugin_UnityOpenXR__OnSessionExiting;
  while( true ) {
    plVar13 = *(long **)(lVar22 + 0x20 + uVar9 * 8);
    if ((plVar13 == (long *)0x0) ||
       (lVar12 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200)),
       plVar11 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar12 != 0) &&
       (lVar18 = thunk_FUN_0124baac(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar18 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar11 + 3) <= (uint)uVar9) goto LAB_01f9340c;
    *plVar23 = lVar12;
    thunk_FUN_01286abc(plVar23,lVar12);
    uVar8 = *(uint *)(lVar22 + 0x18);
    uVar9 = uVar9 + 1;
    plVar23 = plVar23 + 1;
    if ((int)(uVar8 - 1) <= (int)uVar9) break;
LAB_01f939f4:
    if (uVar8 <= (uint)uVar9) goto LAB_01f9340c;
  }
LAB_01f93a68:
  if (plVar10 == (long *)0x0) goto LAB_01f92644;
  if ((int)plVar10[3] == 0) goto LAB_01f9340c;
  lVar12 = plVar10[4];
  if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar17 = FUN_01f801dc(lVar12,0,0);
  uVar8 = (uint)uVar9;
  if ((uVar17 & 1) == 0) {
    if (*(uint *)(lVar22 + 0x18) <= uVar8) goto LAB_01f9340c;
    plVar10 = *(long **)(lVar22 + (long)(int)uVar8 * 8 + 0x20);
    if ((plVar10 == (long *)0x0) ||
       (lVar22 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200)),
       plVar11 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar22 != 0) &&
       (lVar12 = thunk_FUN_0124baac(lVar22,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
    goto LAB_01f941d8;
    uVar6 = *(uint *)(plVar11 + 3);
  }
  else {
    if ((int)plVar10[3] == 0) goto LAB_01f9340c;
    lVar22 = plVar10[4];
    uVar16 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
    lVar22 = thunk_FUN_01f894b8(lVar22,uVar16,0);
    if (plVar11 == (long *)0x0) goto LAB_01f92644;
    if ((lVar22 != 0) &&
       (lVar12 = thunk_FUN_0124baac(lVar22,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
    goto LAB_01f941d8;
    uVar6 = *(uint *)(plVar11 + 3);
  }
  if (uVar6 <= uVar8) goto LAB_01f9340c;
  plVar11[(long)(int)uVar8 + 4] = lVar22;
  thunk_FUN_01286abc(plVar11 + (long)(int)uVar8 + 4,lVar22);
LAB_01f94118:
  *unaff_x28 = (long)plVar11;
  thunk_FUN_01286abc(unaff_x28,plVar11);
LAB_01f94128:
  if ((int)unaff_x24[3] != 0) goto LAB_01f941b4;
  goto LAB_01f9340c;
  while( true ) {
    uVar9 = uVar9 + 1;
    plVar23 = plVar23 + 1;
    if (lVar22 == 0) break;
LAB_01f925c8:
    if ((long)(int)*(uint *)(lVar22 + 0x18) <= (long)uVar9) {
      if ((int)unaff_x24[3] < 1) goto LAB_01f9423c;
      uVar9 = 0;
      uVar8 = 0;
      uVar17 = unaff_x24[3] & 0xffffffff;
      plVar23 = (long *)PTR_DAT_027b32e0;
      goto LAB_01f9266c;
    }
    if (*(uint *)(lVar22 + 0x18) <= uVar9) goto LAB_01f9340c;
    lVar12 = *(long *)(lVar22 + uVar9 * 8 + 0x20);
    if (lVar12 != 0) {
      lVar22 = thunk_FUN_0122c1cc(lVar12,0);
      if (plVar11 == (long *)0x0) break;
      if ((lVar22 != 0) &&
         (lVar12 = thunk_FUN_0124baac(lVar22,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar11 + 3) <= uVar9) goto LAB_01f9340c;
      *plVar23 = lVar22;
      thunk_FUN_01286abc(plVar23,lVar22);
      lVar22 = *unaff_x28;
    }
  }
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
  while( true ) {
    plVar13 = *(long **)(lVar22 + 0x20 + uVar9 * 8);
    if ((plVar13 == (long *)0x0) ||
       (lVar12 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200)),
       plVar11 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar12 != 0) &&
       (lVar18 = thunk_FUN_0124baac(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar18 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar11 + 3) <= (uint)uVar9) goto LAB_01f9340c;
    *plVar23 = lVar12;
    thunk_FUN_01286abc(plVar23,lVar12);
    uVar8 = *(uint *)(lVar22 + 0x18);
    uVar9 = uVar9 + 1;
    plVar23 = plVar23 + 1;
    if ((int)(uVar8 - 1) <= (int)uVar9) break;
LAB_01f93f8c:
    if (uVar8 <= (uint)uVar9) goto LAB_01f9340c;
  }
LAB_01f94000:
  if (plVar10 == (long *)0x0) goto LAB_01f92644;
  if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_01f9340c;
  lVar12 = plVar10[(long)(int)uVar6 + 4];
  if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar17 = FUN_01f801dc(lVar12,0,0);
  uVar8 = (uint)uVar9;
  if ((uVar17 & 1) == 0) {
    if (*(uint *)(lVar22 + 0x18) <= uVar8) goto LAB_01f9340c;
    plVar10 = *(long **)(lVar22 + (long)(int)uVar8 * 8 + 0x20);
    if ((plVar10 == (long *)0x0) ||
       (lVar22 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200)),
       plVar11 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar22 != 0) &&
       (lVar12 = thunk_FUN_0124baac(lVar22,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
    goto LAB_01f941d8;
    uVar21 = *(uint *)(plVar11 + 3);
  }
  else {
    if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_01f9340c;
    lVar22 = plVar10[(long)(int)uVar6 + 4];
    uVar16 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
    lVar22 = thunk_FUN_01f894b8(lVar22,uVar16,0);
    if (plVar11 == (long *)0x0) goto LAB_01f92644;
    if ((lVar22 != 0) &&
       (lVar12 = thunk_FUN_0124baac(lVar22,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0)) {
LAB_01f941d8:
      uVar16 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar16,0);
    }
    uVar21 = *(uint *)(plVar11 + 3);
  }
  if (uVar21 <= uVar8) goto LAB_01f9340c;
  plVar11[(long)(int)uVar8 + 4] = lVar22;
  thunk_FUN_01286abc(plVar11 + (long)(int)uVar8 + 4,lVar22);
FUN_01f94198:
  *unaff_x28 = (long)plVar11;
  thunk_FUN_01286abc(unaff_x28,plVar11);
OVRPlugin_UnityOpenXR__OnSessionExiting:
  if (uVar6 < *(uint *)(unaff_x24 + 3)) {
LAB_01f941b4:
    return *plVar25;
  }
LAB_01f9340c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


