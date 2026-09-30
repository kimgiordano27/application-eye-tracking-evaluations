/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SyncMrcFrame
ENTRY_POINT: 01f92394
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


long OVRPlugin_OVRP_1_38_0__ovrp_Media_SyncMrcFrame(void)

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
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long unaff_x19;
  uint uVar23;
  uint uVar24;
  long unaff_x20;
  undefined8 uVar25;
  long *plVar26;
  long *unaff_x23;
  long unaff_x25;
  long lVar27;
  long *plVar28;
  undefined8 uVar29;
  long *unaff_x28;
  long lVar30;
  long *plStack0000000000000048;
  uint in_stack_00000050;
  
  thunk_FUN_01279b34(PTR_DAT_027b5b48);
  thunk_FUN_01279b34(PTR_DAT_027b3ec0);
  thunk_FUN_01279b34(PTR_DAT_027b46c8);
  thunk_FUN_01279b34(PTR_DAT_027b32e0);
  *(undefined1 *)(unaff_x19 + 0xefa) = 1;
  if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x18) == 0)) {
    uVar25 = thunk_FUN_01279b34(PTR_DAT_027c1be8);
    thunk_FUN_01279b34(PTR_DAT_027b3eb0);
    uVar18 = thunk_FUN_0124bba8();
    uVar29 = thunk_FUN_01279b34(PTR_DAT_027b3fe8);
    FUN_01e7598c(uVar18,uVar25,uVar29,0);
LAB_01f9426c:
    uVar25 = thunk_FUN_01279b34(PTR_DAT_027c1bf8);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar18,uVar25);
  }
  lVar9 = FUN_01f8a1a8();
  if (lVar9 == 0) {
    *unaff_x23 = 0;
    thunk_FUN_01286abc();
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar25 = *(undefined8 *)PTR_DAT_027c1bd8;
  plVar10 = (long *)thunk_FUN_0124baac(lVar9,uVar25);
  puVar4 = PTR_DAT_027c1bd0;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230f60(lVar9,uVar25);
  }
  *unaff_x23 = 0;
  thunk_FUN_01286abc();
  lVar9 = FUN_01230af8(*(undefined8 *)puVar4,(int)plVar10[3]);
  lVar19 = plVar10[3];
  if (0 < (int)lVar19) {
    uVar8 = 0;
    do {
      if ((uint)lVar19 <= uVar8) goto LAB_01f9340c;
      plVar14 = plVar10 + (long)(int)uVar8 + 4;
      plVar11 = (long *)*plVar14;
      if (((plVar11 == (long *)0x0) ||
          (lVar19 = (**(code **)(*plVar11 + 0x378))(plVar11,*(undefined8 *)(*plVar11 + 0x380)),
          lVar19 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
      iVar1 = *(int *)(*unaff_x28 + 0x18);
      iVar7 = *(int *)(lVar19 + 0x18);
      if (*(int *)(lVar19 + 0x18) <= iVar1) {
        iVar7 = iVar1;
      }
      lVar12 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,iVar7);
      if (lVar9 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_01f9340c;
      plVar11 = (long *)(lVar9 + (long)(int)uVar8 * 8 + 0x20);
      *plVar11 = lVar12;
      thunk_FUN_01286abc(plVar11,lVar12);
      if (unaff_x25 == 0) {
        if (*unaff_x28 == 0) goto LAB_01f92644;
        lVar19 = *(long *)(*unaff_x28 + 0x18);
        if (0 < lVar19 << 0x20) {
          uVar6 = *(uint *)(lVar9 + 0x18);
          uVar13 = 0;
          do {
            if (uVar6 <= uVar8) goto LAB_01f9340c;
            lVar12 = *plVar11;
            if (lVar12 == 0) goto LAB_01f92644;
            if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_01f9340c;
            *(int *)(lVar12 + uVar13 * 4 + 0x20) = (int)uVar13;
            uVar13 = uVar13 + 1;
          } while ((long)uVar13 < (long)(int)lVar19);
        }
      }
      else {
        if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_01f9340c;
        lVar12 = *plVar11;
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar13 = OVRPlugin_UnityOpenXR__OnSessionDestroy(lVar12,lVar19);
        if ((uVar13 & 1) == 0) {
          if (*(uint *)(plVar10 + 3) <= uVar8) goto LAB_01f9340c;
          *plVar14 = 0;
          thunk_FUN_01286abc(plVar14,0);
        }
      }
      lVar19 = plVar10[3];
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)lVar19);
  }
  puVar4 = PTR_DAT_027b46c8;
  plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b46c8);
  if (*unaff_x28 != 0) {
    plVar14 = (long *)FUN_01230af8(*(undefined8 *)puVar4,*(undefined4 *)(*unaff_x28 + 0x18));
    lVar19 = *unaff_x28;
    if (lVar19 != 0) {
      uVar13 = 0;
      plVar26 = plVar14 + 4;
      do {
        if ((long)(int)*(uint *)(lVar19 + 0x18) <= (long)uVar13) {
          if ((int)plVar10[3] < 1) goto LAB_01f9423c;
          uVar13 = 0;
          uVar8 = 0;
          uVar20 = plVar10[3] & 0xffffffff;
          plVar26 = (long *)PTR_DAT_027b32e0;
          goto LAB_01f9266c;
        }
        if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_01f9340c;
        lVar12 = *(long *)(lVar19 + uVar13 * 8 + 0x20);
        if (lVar12 != 0) {
          lVar19 = thunk_FUN_0122c1cc(lVar12,0);
          if (plVar14 == (long *)0x0) break;
          if ((lVar19 != 0) &&
             (lVar12 = thunk_FUN_0124baac(lVar19,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0))
          goto LAB_01f941d8;
          if (*(uint *)(plVar14 + 3) <= uVar13) goto LAB_01f9340c;
          *plVar26 = lVar19;
          thunk_FUN_01286abc(plVar26,lVar19);
          lVar19 = *unaff_x28;
        }
        uVar13 = uVar13 + 1;
        plVar26 = plVar26 + 1;
      } while (lVar19 != 0);
    }
  }
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
LAB_01f9266c:
  if (uVar20 <= uVar13) goto LAB_01f9340c;
  plVar28 = plVar10 + uVar13 + 4;
  uVar20 = FUN_01ee539c(*plVar28,0,0);
  if ((uVar20 & 1) != 0) goto LAB_01f93214;
  if (*(uint *)(plVar10 + 3) <= uVar13) goto LAB_01f9340c;
  plVar15 = (long *)*plVar28;
  if ((plVar15 == (long *)0x0) ||
     (lVar19 = (**(code **)(*plVar15 + 0x378))(plVar15,*(undefined8 *)(*plVar15 + 0x380)),
     lVar19 == 0)) goto LAB_01f92644;
  uVar20 = *(ulong *)(lVar19 + 0x18);
  lVar12 = *unaff_x28;
  if (uVar20 == 0) {
    if (lVar12 == 0) goto LAB_01f92644;
    if (*(long *)(lVar12 + 0x18) != 0) {
      if (*(uint *)(plVar10 + 3) <= uVar13) goto LAB_01f9340c;
      plVar15 = (long *)*plVar28;
      if (plVar15 == (long *)0x0) goto LAB_01f92644;
      uVar6 = (**(code **)(*plVar15 + 600))(plVar15,*(undefined8 *)(*plVar15 + 0x260));
      if ((uVar6 >> 1 & 1) == 0) goto LAB_01f93214;
    }
    if (lVar9 == 0) goto LAB_01f92644;
    if ((*(uint *)(lVar9 + 0x18) <= uVar13) || (*(uint *)(lVar9 + 0x18) <= uVar8))
    goto LAB_01f9340c;
    *(undefined8 *)(lVar9 + (long)(int)uVar8 * 8 + 0x20) =
         *(undefined8 *)(lVar9 + uVar13 * 8 + 0x20);
    thunk_FUN_01286abc();
    uVar6 = *(uint *)(plVar10 + 3);
    if (uVar6 <= uVar13) goto LAB_01f9340c;
    lVar19 = *plVar28;
joined_r0x01f927d4:
    if (lVar19 != 0) {
      lVar12 = thunk_FUN_0124baac(lVar19,*(undefined8 *)(*plVar10 + 0x40));
      if (lVar12 == 0) goto LAB_01f941d8;
      uVar6 = (uint)plVar10[3];
    }
    lVar12 = (long)(int)uVar8;
    if (uVar6 <= uVar8) goto LAB_01f9340c;
    plVar10[lVar12 + 4] = lVar19;
    uVar8 = uVar8 + 1;
    thunk_FUN_01286abc(plVar10 + lVar12 + 4,lVar19);
    plVar26 = (long *)PTR_DAT_027b32e0;
    goto LAB_01f93214;
  }
  if (lVar12 == 0) goto LAB_01f92644;
  uVar6 = *(uint *)(lVar12 + 0x18);
  iVar7 = (int)uVar20;
  if ((int)uVar6 < iVar7) {
    uVar24 = iVar7 - 1;
    if ((int)uVar6 < (int)uVar24) {
      plVar15 = (long *)(lVar19 + (long)(int)uVar6 * 8 + 0x20);
      do {
        if ((uint)uVar20 <= uVar6) goto LAB_01f9340c;
        plVar16 = (long *)*plVar15;
        if (plVar16 == (long *)0x0) goto LAB_01f92644;
        lVar12 = (**(code **)(*plVar16 + 0x1f8))(plVar16,*(undefined8 *)(*plVar16 + 0x200));
        puVar4 = PTR_DAT_027baa38;
        lVar21 = *(long *)PTR_DAT_027baa38;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_01220628(lVar21);
          lVar21 = *(long *)puVar4;
        }
        if (lVar12 == **(long **)(lVar21 + 0xb8)) {
          uVar20 = (ulong)*(uint *)(lVar19 + 0x18);
          uVar24 = *(uint *)(lVar19 + 0x18) - 1;
          break;
        }
        uVar20 = *(ulong *)(lVar19 + 0x18);
        uVar6 = uVar6 + 1;
        plVar15 = plVar15 + 1;
        uVar24 = (int)uVar20 - 1;
      } while ((int)uVar6 < (int)uVar24);
    }
    if (uVar6 == uVar24) {
      if ((uint)uVar20 <= uVar6) goto LAB_01f9340c;
      plVar16 = (long *)(lVar19 + (long)(int)uVar6 * 8 + 0x20);
      plVar15 = (long *)*plVar16;
      if (plVar15 == (long *)0x0) goto LAB_01f92644;
      lVar12 = (**(code **)(*plVar15 + 0x1f8))(plVar15,*(undefined8 *)(*plVar15 + 0x200));
      puVar4 = PTR_DAT_027baa38;
      lVar21 = *(long *)PTR_DAT_027baa38;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_01220628(lVar21);
        lVar21 = *(long *)puVar4;
      }
      if (lVar12 != **(long **)(lVar21 + 0xb8)) goto LAB_01f92a28;
      if (*(uint *)(lVar19 + 0x18) <= uVar6) goto LAB_01f9340c;
      plVar15 = (long *)*plVar16;
      if ((plVar15 == (long *)0x0) ||
         (lVar12 = (**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0)),
         lVar12 == 0)) goto LAB_01f92644;
      uVar20 = FUN_01f80ec8(lVar12,0);
      if ((uVar20 & 1) != 0) {
        if (*(uint *)(lVar19 + 0x18) <= uVar6) goto LAB_01f9340c;
        plVar15 = (long *)*plVar16;
        uVar25 = *(undefined8 *)PTR_DAT_027c1be0;
        if (*(int *)(*plVar26 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar25 = FUN_01f7d8a0(uVar25,0);
        if (plVar15 == (long *)0x0) goto LAB_01f92644;
        uVar20 = (**(code **)(*plVar15 + 0x208))(plVar15,uVar25,1,*(undefined8 *)(*plVar15 + 0x210))
        ;
        plVar26 = (long *)PTR_DAT_027b32e0;
        if ((uVar20 & 1) != 0) {
          if (uVar6 < *(uint *)(lVar19 + 0x18)) {
            plVar16 = (long *)*plVar16;
            if (plVar16 != (long *)0x0) {
              plVar15 = (long *)(**(code **)(*plVar16 + 0x1d8))
                                          (plVar16,*(undefined8 *)(*plVar16 + 0x1e0));
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
  uVar24 = iVar7 - 1;
  lVar12 = (long)(int)uVar24;
  plVar16 = (long *)(lVar19 + lVar12 * 8 + 0x20);
  plVar15 = (long *)*plVar16;
  if ((plVar15 == (long *)0x0) ||
     (lVar21 = (**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0)),
     lVar21 == 0)) goto LAB_01f92644;
  uVar20 = FUN_01f80ec8(lVar21,0);
  if (iVar7 < (int)uVar6) {
    if ((uVar20 & 1) != 0) {
      if (*(uint *)(lVar19 + 0x18) <= uVar24) goto LAB_01f9340c;
      plVar15 = (long *)*plVar16;
      uVar25 = *(undefined8 *)PTR_DAT_027c1be0;
      if (*(int *)(*plVar26 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar25 = FUN_01f7d8a0(uVar25,0);
      if (plVar15 == (long *)0x0) goto LAB_01f92644;
      uVar20 = (**(code **)(*plVar15 + 0x208))(plVar15,uVar25,1,*(undefined8 *)(*plVar15 + 0x210));
      plVar26 = (long *)PTR_DAT_027b32e0;
      if ((uVar20 & 1) != 0) {
        if (lVar9 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_01f9340c;
        lVar21 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
        if (lVar21 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar21 + 0x18) <= uVar24) goto LAB_01f9340c;
        if (*(uint *)(lVar21 + lVar12 * 4 + 0x20) == uVar24) {
LAB_01f9323c:
          if (uVar24 < *(uint *)(lVar19 + 0x18)) {
            plVar16 = (long *)*plVar16;
            if (plVar16 != (long *)0x0) {
              plVar15 = (long *)(**(code **)(*plVar16 + 0x1d8))
                                          (plVar16,*(undefined8 *)(*plVar16 + 0x1e0));
joined_r0x01f931fc:
              if (plVar15 != (long *)0x0) {
                plStack0000000000000048 =
                     (long *)(**(code **)(*plVar15 + 0x408))
                                       (plVar15,*(undefined8 *)(*plVar15 + 0x410));
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
  if ((uVar20 & 1) == 0) {
LAB_01f92a28:
    plStack0000000000000048 = (long *)0x0;
  }
  else {
    if (*(uint *)(lVar19 + 0x18) <= uVar24) goto LAB_01f9340c;
    plVar15 = (long *)*plVar16;
    uVar25 = *(undefined8 *)PTR_DAT_027c1be0;
    if (*(int *)(*plVar26 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar25 = FUN_01f7d8a0(uVar25,0);
    if (plVar15 == (long *)0x0) goto LAB_01f92644;
    uVar20 = (**(code **)(*plVar15 + 0x208))(plVar15,uVar25,1,*(undefined8 *)(*plVar15 + 0x210));
    plVar26 = (long *)PTR_DAT_027b32e0;
    if ((uVar20 & 1) != 0) {
      if (lVar9 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_01f9340c;
      lVar21 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
      if (lVar21 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar21 + 0x18) <= uVar24) goto LAB_01f9340c;
      if (*(uint *)(lVar21 + lVar12 * 4 + 0x20) != uVar24) goto LAB_01f92a28;
      if (*(uint *)(lVar19 + 0x18) <= uVar24) goto LAB_01f9340c;
      plVar15 = (long *)*plVar16;
      if ((plVar15 == (long *)0x0) ||
         (plVar15 = (long *)(**(code **)(*plVar15 + 0x1d8))
                                      (plVar15,*(undefined8 *)(*plVar15 + 0x1e0)),
         plVar14 == (long *)0x0)) goto LAB_01f92644;
      if (*(uint *)(plVar14 + 3) <= uVar24) goto LAB_01f9340c;
      if (plVar15 == (long *)0x0) goto LAB_01f92644;
      uVar20 = (**(code **)(*plVar15 + 0x288))
                         (plVar15,plVar14[lVar12 + 4],*(undefined8 *)(*plVar15 + 0x290));
      if ((uVar20 & 1) == 0) goto LAB_01f9323c;
      goto LAB_01f92a28;
    }
    plStack0000000000000048 = (long *)0x0;
  }
LAB_01f92a2c:
  if (*(int *)(*plVar26 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar20 = FUN_01f801dc(plStack0000000000000048,0,0);
  if ((uVar20 & 1) == 0) {
    if (*unaff_x28 == 0) goto LAB_01f92644;
    uVar6 = *(uint *)(*unaff_x28 + 0x18);
  }
  else {
    uVar6 = *(int *)(lVar19 + 0x18) - 1;
  }
  if ((int)uVar6 < 1) {
    uVar24 = 0;
  }
  else {
    uVar23 = 0;
    plVar15 = (long *)(lVar9 + uVar13 * 8 + 0x20);
    do {
      if (*(uint *)(lVar19 + 0x18) <= uVar23) goto LAB_01f9340c;
      lVar12 = (long)(int)uVar23;
      plVar16 = *(long **)(lVar19 + lVar12 * 8 + 0x20);
      if ((plVar16 == (long *)0x0) ||
         (plVar16 = (long *)(**(code **)(*plVar16 + 0x1d8))
                                      (plVar16,*(undefined8 *)(*plVar16 + 0x1e0)),
         plVar16 == (long *)0x0)) goto LAB_01f92644;
      uVar20 = FUN_01f80ed8(plVar16,0);
      if ((uVar20 & 1) != 0) {
        plVar16 = (long *)(**(code **)(*plVar16 + 0x408))(plVar16,*(undefined8 *)(*plVar16 + 0x410))
        ;
      }
      if (lVar9 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_01f9340c;
      lVar21 = *plVar15;
      if (lVar21 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_01f9340c;
      if (plVar14 == (long *)0x0) goto LAB_01f92644;
      uVar24 = *(uint *)(lVar21 + lVar12 * 4 + 0x20);
      if (*(uint *)(plVar14 + 3) <= uVar24) goto LAB_01f9340c;
      lVar21 = plVar14[(long)(int)uVar24 + 4];
      if (*(int *)(*plVar26 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar20 = FUN_01f7f404(plVar16,lVar21,0);
      if ((uVar20 & 1) == 0) {
        if ((in_stack_00000050 >> 0x12 & 1) != 0) {
          if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_01f9340c;
          lVar21 = *plVar15;
          if (lVar21 == 0) goto LAB_01f92644;
          if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_01f9340c;
          lVar22 = *unaff_x28;
          if (lVar22 == 0) goto LAB_01f92644;
          uVar24 = *(uint *)(lVar21 + lVar12 * 4 + 0x20);
          if (*(uint *)(lVar22 + 0x18) <= uVar24) goto LAB_01f9340c;
          lVar21 = *plVar26;
          lVar22 = *(long *)(lVar22 + (long)(int)uVar24 * 8 + 0x20);
          if (*(int *)(lVar21 + 0xe0) == 0) {
            thunk_FUN_01220628();
            lVar21 = *plVar26;
          }
          if (lVar22 == *(long *)(*(long *)(lVar21 + 0xb8) + 0x18)) goto LAB_01f92e70;
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_01f9340c;
        lVar21 = *plVar15;
        if (lVar21 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_01f9340c;
        lVar22 = *unaff_x28;
        if (lVar22 == 0) goto LAB_01f92644;
        uVar24 = *(uint *)(lVar21 + lVar12 * 4 + 0x20);
        if (*(uint *)(lVar22 + 0x18) <= uVar24) goto LAB_01f9340c;
        if (*(long *)(lVar22 + (long)(int)uVar24 * 8 + 0x20) != 0) {
          uVar25 = *(undefined8 *)PTR_DAT_027b5b48;
          if (*(int *)(*plVar26 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar25 = FUN_01f7d8a0(uVar25,0);
          uVar20 = FUN_01f7f404(plVar16,uVar25,0);
          if ((uVar20 & 1) == 0) {
            if (plVar16 == (long *)0x0) goto LAB_01f92644;
            uVar20 = FUN_01f81644(plVar16,0);
            if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_01f9340c;
            lVar21 = *plVar15;
            if (lVar21 == 0) goto LAB_01f92644;
            if ((*(uint *)(lVar21 + 0x18) <= uVar23) ||
               (uVar24 = *(uint *)(lVar21 + lVar12 * 4 + 0x20), *(uint *)(plVar14 + 3) <= uVar24))
            goto LAB_01f9340c;
            lVar21 = plVar14[(long)(int)uVar24 + 4];
            if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar17 = FUN_01f7f404(lVar21,0,0);
            plVar26 = (long *)PTR_DAT_027b32e0;
            uVar24 = uVar23;
            if ((uVar20 & 1) == 0) {
              if ((uVar17 & 1) == 0) {
                if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_01f9340c;
                lVar21 = *plVar15;
                if (lVar21 == 0) goto LAB_01f92644;
                if ((*(uint *)(lVar21 + 0x18) <= uVar23) ||
                   (uVar2 = *(uint *)(lVar21 + lVar12 * 4 + 0x20), *(uint *)(plVar14 + 3) <= uVar2))
                goto LAB_01f9340c;
                uVar20 = (**(code **)(*plVar16 + 0x288))
                                   (plVar16,plVar14[(long)(int)uVar2 + 4],
                                    *(undefined8 *)(*plVar16 + 0x290));
                if ((uVar20 & 1) == 0) {
                  if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_01f9340c;
                  lVar21 = *plVar15;
                  if (lVar21 == 0) goto LAB_01f92644;
                  if ((*(uint *)(lVar21 + 0x18) <= uVar23) ||
                     (uVar2 = *(uint *)(lVar21 + lVar12 * 4 + 0x20), *(uint *)(plVar14 + 3) <= uVar2
                     )) goto LAB_01f9340c;
                  if (plVar14[(long)(int)uVar2 + 4] == 0) goto LAB_01f92644;
                  uVar20 = FUN_01f81468(plVar14[(long)(int)uVar2 + 4],0);
                  if ((uVar20 & 1) != 0) {
                    if (uVar13 < *(uint *)(lVar9 + 0x18)) {
                      lVar21 = *plVar15;
                      if (lVar21 != 0) {
                        if (uVar23 < *(uint *)(lVar21 + 0x18)) {
                          lVar22 = *unaff_x28;
                          if (lVar22 != 0) {
                            uVar2 = *(uint *)(lVar21 + lVar12 * 4 + 0x20);
                            if (uVar2 < *(uint *)(lVar22 + 0x18)) {
                              uVar20 = (**(code **)(*plVar16 + 0x828))
                                                 (plVar16,*(undefined8 *)
                                                           (lVar22 + (long)(int)uVar2 * 8 + 0x20),
                                                  *(undefined8 *)(*plVar16 + 0x830));
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
              if ((uVar17 & 1) != 0) break;
              if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_01f9340c;
              lVar21 = *plVar15;
              if (lVar21 == 0) goto LAB_01f92644;
              if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_01f9340c;
              lVar22 = *unaff_x28;
              if (lVar22 == 0) goto LAB_01f92644;
              uVar2 = *(uint *)(lVar21 + lVar12 * 4 + 0x20);
              if (*(uint *)(lVar22 + 0x18) <= uVar2) goto LAB_01f9340c;
              uVar25 = *(undefined8 *)(lVar22 + (long)(int)uVar2 * 8 + 0x20);
              if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              bVar5 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
              if ((*(byte *)(*plVar16 + 0x130) < bVar5) ||
                 (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar5 * 8 + -8) !=
                  *(long *)PTR_DAT_027b3ec0)) {
                    /* WARNING: Subroutine does not return */
                FUN_01230f60(plVar16);
              }
              uVar20 = FUN_01f9451c(uVar25,plVar16);
              plVar26 = (long *)PTR_DAT_027b32e0;
joined_r0x01f92e6c:
              if ((uVar20 & 1) == 0) break;
            }
          }
        }
      }
LAB_01f92e70:
      uVar23 = uVar23 + 1;
      uVar24 = uVar6;
    } while (uVar6 != uVar23);
  }
  if (*(int *)(*plVar26 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar20 = FUN_01f801dc(plStack0000000000000048,0,0);
  if (((uVar20 & 1) != 0) && (uVar24 == *(int *)(lVar19 + 0x18) - 1U)) {
    lVar19 = *unaff_x28;
    if (lVar19 == 0) goto LAB_01f92644;
    lVar12 = (-(ulong)(uVar24 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar24 << 3) + 0x20;
    while ((int)uVar24 < *(int *)(lVar19 + 0x18)) {
      if ((plStack0000000000000048 == (long *)0x0) ||
         (uVar20 = FUN_01f81644(plStack0000000000000048,0), plVar14 == (long *)0x0))
      goto LAB_01f92644;
      if (*(uint *)(plVar14 + 3) <= uVar24) goto LAB_01f9340c;
      uVar25 = *(undefined8 *)((long)plVar14 + lVar12);
      if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar17 = FUN_01f7f404(uVar25,0,0);
      plVar26 = (long *)PTR_DAT_027b32e0;
      if ((uVar20 & 1) == 0) {
        if ((uVar17 & 1) == 0) {
          if (*(uint *)(plVar14 + 3) <= uVar24) goto LAB_01f9340c;
          uVar20 = (**(code **)(*plStack0000000000000048 + 0x288))
                             (plStack0000000000000048,*(undefined8 *)((long)plVar14 + lVar12),
                              *(undefined8 *)(*plStack0000000000000048 + 0x290));
          if ((uVar20 & 1) == 0) {
            if (*(uint *)(plVar14 + 3) <= uVar24) goto LAB_01f9340c;
            if (*(long *)((long)plVar14 + lVar12) == 0) goto LAB_01f92644;
            uVar20 = FUN_01f81468(*(long *)((long)plVar14 + lVar12),0);
            if ((uVar20 & 1) != 0) {
              lVar19 = *unaff_x28;
              if (lVar19 != 0) {
                if (uVar24 < *(uint *)(lVar19 + 0x18)) {
                  uVar20 = (**(code **)(*plStack0000000000000048 + 0x828))
                                     (plStack0000000000000048,*(undefined8 *)(lVar19 + lVar12),
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
        if ((uVar17 & 1) != 0) break;
        lVar19 = *unaff_x28;
        if (lVar19 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar19 + 0x18) <= uVar24) goto LAB_01f9340c;
        uVar25 = *(undefined8 *)(lVar19 + lVar12);
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
        uVar20 = FUN_01f9451c(uVar25,plStack0000000000000048);
        plVar26 = (long *)PTR_DAT_027b32e0;
joined_r0x01f93040:
        if ((uVar20 & 1) == 0) break;
      }
      lVar19 = *unaff_x28;
      uVar24 = uVar24 + 1;
      lVar12 = lVar12 + 8;
      if (lVar19 == 0) goto LAB_01f92644;
    }
  }
  if (*unaff_x28 == 0) goto LAB_01f92644;
  if (uVar24 == *(uint *)(*unaff_x28 + 0x18)) {
    if (lVar9 != 0) {
      if ((uVar13 < *(uint *)(lVar9 + 0x18)) && (uVar8 < *(uint *)(lVar9 + 0x18))) {
        *(undefined8 *)(lVar9 + (long)(int)uVar8 * 8 + 0x20) =
             *(undefined8 *)(lVar9 + uVar13 * 8 + 0x20);
        thunk_FUN_01286abc();
        if (plVar11 != (long *)0x0) {
          if ((plStack0000000000000048 == (long *)0x0) ||
             (lVar19 = thunk_FUN_0124baac(plStack0000000000000048,*(undefined8 *)(*plVar11 + 0x40)),
             lVar19 != 0)) {
            if (uVar8 < *(uint *)(plVar11 + 3)) {
              plVar11[(long)(int)uVar8 + 4] = (long)plStack0000000000000048;
              thunk_FUN_01286abc(plVar11 + (long)(int)uVar8 + 4,plStack0000000000000048);
              uVar6 = *(uint *)(plVar10 + 3);
              if (uVar13 < uVar6) {
                lVar19 = *plVar28;
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
  uVar6 = *(uint *)(plVar10 + 3);
  uVar20 = (ulong)uVar6;
  uVar13 = uVar13 + 1;
  if ((long)(int)uVar6 <= (long)uVar13) goto LAB_01f9329c;
  goto LAB_01f9266c;
LAB_01f9329c:
  if (uVar8 == 1) {
    if (unaff_x25 != 0) {
      if (lVar9 == 0) goto LAB_01f92644;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_01f9340c;
      if (*(long *)(lVar9 + 0x20) == 0) goto LAB_01f92644;
      lVar19 = FUN_01f8a1a8(*(long *)(lVar9 + 0x20),0);
      lVar12 = *unaff_x28;
      if ((lVar12 == 0) || (plVar11 == (long *)0x0)) goto LAB_01f92644;
      if ((int)plVar11[3] == 0) goto LAB_01f9340c;
      lVar21 = plVar11[4];
      if (*(int *)(*plVar26 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      bVar5 = FUN_01f801dc(lVar21,0,0);
      lVar21 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
      if (lVar19 == 0) {
        lVar22 = 0;
      }
      else {
        uVar25 = *(undefined8 *)PTR_DAT_027b1ca8;
        lVar22 = thunk_FUN_0124baac(lVar19,uVar25);
        if (lVar22 == 0) {
LAB_01f93580:
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(lVar19,uVar25);
        }
      }
      uVar25 = *(undefined8 *)(lVar12 + 0x18);
      FUN_01fab77c(lVar21,0);
      *(long *)(lVar21 + 0x10) = lVar22;
      thunk_FUN_01286abc((long *)(lVar21 + 0x10),lVar22);
      *(int *)(lVar21 + 0x18) = (int)uVar25;
      *(byte *)(lVar21 + 0x1c) = bVar5 & 1;
      *unaff_x23 = lVar21;
      thunk_FUN_01286abc(unaff_x23,lVar21);
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_01f9340c;
      uVar25 = *(undefined8 *)(lVar9 + 0x20);
      lVar9 = *unaff_x28;
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      FUN_01f94678(uVar25,lVar9);
      uVar6 = (uint)plVar10[3];
      plVar26 = (long *)PTR_DAT_027b32e0;
    }
    if (uVar6 == 0) goto LAB_01f9340c;
    plVar28 = plVar10 + 4;
    plVar14 = (long *)*plVar28;
    if (((plVar14 == (long *)0x0) ||
        (lVar9 = (**(code **)(*plVar14 + 0x378))(plVar14,*(undefined8 *)(*plVar14 + 0x380)),
        lVar9 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
    iVar7 = *(int *)(*unaff_x28 + 0x18);
    if (*(int *)(lVar9 + 0x18) == iVar7) {
      if (plVar11 == (long *)0x0) goto LAB_01f92644;
      if ((int)plVar11[3] == 0) goto LAB_01f9340c;
      lVar19 = plVar11[4];
      if (*(int *)(*plVar26 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar13 = FUN_01f801dc(lVar19,0,0);
      if ((uVar13 & 1) != 0) {
        plVar14 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar9 + 0x18)
                                      );
        uVar8 = *(int *)(lVar9 + 0x18) - 1;
        FUN_01f89ca0(*unaff_x28,0,plVar14,0,uVar8,0);
        if ((int)plVar11[3] == 0) goto LAB_01f9340c;
        lVar19 = plVar11[4];
        lVar9 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
        if (lVar9 == 0) goto LAB_01f92644;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_01f9340c;
        *(undefined4 *)(lVar9 + 0x20) = 1;
        lVar9 = thunk_FUN_01f894b8(lVar19,lVar9,0);
        if (plVar14 == (long *)0x0) goto LAB_01f92644;
        if ((lVar9 != 0) &&
           (lVar19 = thunk_FUN_0124baac(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0))
        goto LAB_01f941d8;
        if (*(uint *)(plVar14 + 3) <= uVar8) goto LAB_01f9340c;
        plVar11 = plVar14 + (long)(int)uVar8 + 4;
        *plVar11 = lVar9;
        thunk_FUN_01286abc(plVar11,lVar9);
        if (*(uint *)(plVar14 + 3) <= uVar8) goto LAB_01f9340c;
        lVar9 = *unaff_x28;
        if (lVar9 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_01f9340c;
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) goto LAB_01f92644;
        bVar5 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar5) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar5 * 8 + -8) !=
            *(long *)PTR_DAT_027b3f80)) {
LAB_01f942dc:
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(plVar11);
        }
        FUN_01f89750(plVar11,*(undefined8 *)(lVar9 + (long)(int)uVar8 * 8 + 0x20),0,0);
        goto LAB_01f94118;
      }
    }
    else {
      if (iVar7 < *(int *)(lVar9 + 0x18)) {
        plVar14 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
        lVar19 = *unaff_x28;
        if (lVar19 != 0) {
          uVar13 = 0;
          plVar26 = plVar14 + 4;
          do {
            if ((long)(int)*(uint *)(lVar19 + 0x18) <= (long)uVar13) {
              uVar8 = *(uint *)(lVar9 + 0x18);
              if ((int)(uVar8 - 1) <= (int)uVar13) goto LAB_01f93a68;
              goto LAB_01f939f4;
            }
            if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_01f9340c;
            if (plVar14 == (long *)0x0) break;
            lVar19 = *(long *)(lVar19 + uVar13 * 8 + 0x20);
            if ((lVar19 != 0) &&
               (lVar12 = thunk_FUN_0124baac(lVar19,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0))
            goto LAB_01f941d8;
            if (*(uint *)(plVar14 + 3) <= uVar13) goto LAB_01f9340c;
            *plVar26 = lVar19;
            thunk_FUN_01286abc(plVar26,lVar19);
            lVar19 = *unaff_x28;
            uVar13 = uVar13 + 1;
            plVar26 = plVar26 + 1;
          } while (lVar19 != 0);
        }
        goto LAB_01f92644;
      }
      if ((int)plVar10[3] == 0) goto LAB_01f9340c;
      plVar14 = (long *)*plVar28;
      if (plVar14 == (long *)0x0) goto LAB_01f92644;
      uVar8 = (**(code **)(*plVar14 + 600))(plVar14,*(undefined8 *)(*plVar14 + 0x260));
      if ((uVar8 >> 1 & 1) == 0) {
        plVar14 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar9 + 0x18)
                                      );
        uVar8 = *(int *)(lVar9 + 0x18) - 1;
        FUN_01f89ca0(*unaff_x28,0,plVar14,0,uVar8,0);
        if (plVar11 == (long *)0x0) goto LAB_01f92644;
        if ((int)plVar11[3] == 0) goto LAB_01f9340c;
        lVar19 = plVar11[4];
        lVar9 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
        if ((*unaff_x28 == 0) || (lVar9 == 0)) goto LAB_01f92644;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_01f9340c;
        *(uint *)(lVar9 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar8;
        lVar9 = thunk_FUN_01f894b8(lVar19,lVar9,0);
        if (plVar14 == (long *)0x0) goto LAB_01f92644;
        if ((lVar9 != 0) &&
           (lVar19 = thunk_FUN_0124baac(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0))
        goto LAB_01f941d8;
        if (*(uint *)(plVar14 + 3) <= uVar8) goto LAB_01f9340c;
        plVar11 = plVar14 + (long)(int)uVar8 + 4;
        *plVar11 = lVar9;
        thunk_FUN_01286abc(plVar11,lVar9);
        if (*(uint *)(plVar14 + 3) <= uVar8) goto LAB_01f9340c;
        lVar9 = *unaff_x28;
        if (lVar9 == 0) goto LAB_01f92644;
        plVar11 = (long *)*plVar11;
        if (plVar11 != (long *)0x0) {
          bVar5 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar5) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar5 * 8 + -8) !=
              *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
        }
        FUN_01f89ca0(lVar9,uVar8,plVar11,0,*(int *)(lVar9 + 0x18) - uVar8,0);
        *unaff_x28 = (long)plVar14;
        thunk_FUN_01286abc(unaff_x28,plVar14);
      }
    }
    goto LAB_01f94128;
  }
  if (uVar8 == 0) {
LAB_01f9423c:
    uVar25 = thunk_FUN_01279b34(PTR_DAT_027c1bf0);
    thunk_FUN_01279b34(PTR_DAT_027b3ed0);
    uVar18 = thunk_FUN_0124bba8();
    FUN_01f6b058(uVar18,uVar25,0);
    goto LAB_01f9426c;
  }
  if (1 < (int)uVar8) {
    if (uVar6 != 0) {
      lVar19 = 0;
      lVar12 = 0;
      uVar6 = 0;
      bVar3 = false;
      while( true ) {
        if (lVar9 == 0) goto LAB_01f92644;
        if ((uint)*(ulong *)(lVar9 + 0x18) <= uVar6) break;
        if (plVar11 == (long *)0x0) goto LAB_01f92644;
        if (((((uint)plVar11[3] <= uVar6) || (uVar13 = lVar19 + 1, uVar20 <= uVar13)) ||
            ((*(ulong *)(lVar9 + 0x18) & 0xffffffff) <= uVar13)) ||
           ((plVar11[3] & 0xffffffffU) <= uVar13)) break;
        lVar22 = plVar10[lVar12 + 4];
        lVar30 = plVar10[lVar19 + 5];
        lVar21 = plVar11[lVar12 + 4];
        uVar25 = *(undefined8 *)(lVar9 + lVar12 * 8 + 0x20);
        uVar29 = *(undefined8 *)(lVar9 + 0x28 + lVar19 * 8);
        lVar27 = plVar11[lVar19 + 5];
        lVar12 = *unaff_x28;
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        iVar7 = FUN_01f947fc(lVar22,uVar25,lVar21,lVar30,uVar29,lVar27,plVar14,lVar12);
        if (iVar7 == 0) {
          bVar3 = true;
        }
        else if (iVar7 == 2) {
          uVar6 = (int)lVar19 + 1;
          bVar3 = false;
        }
        if ((ulong)uVar8 - 2 == lVar19) {
          plVar26 = (long *)PTR_DAT_027b32e0;
          if (!bVar3) goto LAB_01f934c8;
          uVar25 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
          thunk_FUN_01279b34(PTR_DAT_027bc458);
          uVar18 = thunk_FUN_0124bba8();
          FUN_01ee31d4(uVar18,uVar25,0);
          goto LAB_01f9426c;
        }
        lVar12 = (long)(int)uVar6;
        lVar19 = lVar19 + 1;
        uVar20 = plVar10[3] & 0xffffffff;
        if ((uint)plVar10[3] <= uVar6) break;
      }
    }
    goto LAB_01f9340c;
  }
  uVar6 = 0;
LAB_01f934c8:
  if (unaff_x25 != 0) {
    if (lVar9 == 0) goto LAB_01f92644;
    if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_01f9340c;
    plVar14 = (long *)(lVar9 + (long)(int)uVar6 * 8 + 0x20);
    lVar19 = *plVar14;
    if (lVar19 == 0) goto LAB_01f92644;
    lVar19 = FUN_01f8a1a8(lVar19,0);
    lVar12 = *unaff_x28;
    if ((lVar12 == 0) || (plVar11 == (long *)0x0)) goto LAB_01f92644;
    if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_01f9340c;
    lVar21 = plVar11[(long)(int)uVar6 + 4];
    if (*(int *)(*plVar26 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    bVar5 = FUN_01f801dc(lVar21,0,0);
    lVar21 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
    if (lVar19 == 0) {
      lVar22 = 0;
    }
    else {
      uVar25 = *(undefined8 *)PTR_DAT_027b1ca8;
      lVar22 = thunk_FUN_0124baac(lVar19,uVar25);
      if (lVar22 == 0) goto LAB_01f93580;
    }
    uVar25 = *(undefined8 *)(lVar12 + 0x18);
    FUN_01fab77c(lVar21,0);
    *(long *)(lVar21 + 0x10) = lVar22;
    thunk_FUN_01286abc((long *)(lVar21 + 0x10),lVar22);
    *(int *)(lVar21 + 0x18) = (int)uVar25;
    *(byte *)(lVar21 + 0x1c) = bVar5 & 1;
    *unaff_x23 = lVar21;
    thunk_FUN_01286abc(unaff_x23,lVar21);
    if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_01f9340c;
    lVar9 = *plVar14;
    lVar19 = *unaff_x28;
    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f94678(lVar9,lVar19);
    plVar26 = (long *)PTR_DAT_027b32e0;
  }
  if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_01f9340c;
  plVar28 = plVar10 + (long)(int)uVar6 + 4;
  plVar14 = (long *)*plVar28;
  if (((plVar14 == (long *)0x0) ||
      (lVar9 = (**(code **)(*plVar14 + 0x378))(plVar14,*(undefined8 *)(*plVar14 + 0x380)),
      lVar9 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
  iVar7 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar9 + 0x18) == iVar7) {
    if (plVar11 == (long *)0x0) goto LAB_01f92644;
    if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_01f9340c;
    lVar19 = plVar11[(long)(int)uVar6 + 4];
    if (*(int *)(*plVar26 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar13 = FUN_01f801dc(lVar19,0,0);
    if ((uVar13 & 1) != 0) {
      plVar14 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar9 + 0x18));
      uVar8 = *(int *)(lVar9 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar14,0,uVar8,0);
      if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_01f9340c;
      lVar19 = plVar11[(long)(int)uVar6 + 4];
      lVar9 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if (lVar9 == 0) goto LAB_01f92644;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_01f9340c;
      *(undefined4 *)(lVar9 + 0x20) = 1;
      lVar9 = thunk_FUN_01f894b8(lVar19,lVar9,0);
      if (plVar14 == (long *)0x0) goto LAB_01f92644;
      if ((lVar9 != 0) &&
         (lVar19 = thunk_FUN_0124baac(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar14 + 3) <= uVar8) goto LAB_01f9340c;
      plVar11 = plVar14 + (long)(int)uVar8 + 4;
      *plVar11 = lVar9;
      thunk_FUN_01286abc(plVar11,lVar9);
      if (*(uint *)(plVar14 + 3) <= uVar8) goto LAB_01f9340c;
      lVar9 = *unaff_x28;
      if (lVar9 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_01f9340c;
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) goto LAB_01f92644;
      bVar5 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar5) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)PTR_DAT_027b3f80)
         ) goto LAB_01f942dc;
      FUN_01f89750(plVar11,*(undefined8 *)(lVar9 + (long)(int)uVar8 * 8 + 0x20),0,0);
      goto FUN_01f94198;
    }
  }
  else {
    if (iVar7 < *(int *)(lVar9 + 0x18)) {
      plVar14 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
      lVar19 = *unaff_x28;
      if (lVar19 != 0) {
        uVar13 = 0;
        plVar26 = plVar14 + 4;
        do {
          if ((long)(int)*(uint *)(lVar19 + 0x18) <= (long)uVar13) {
            uVar8 = *(uint *)(lVar9 + 0x18);
            if ((int)(uVar8 - 1) <= (int)uVar13) goto LAB_01f94000;
            goto LAB_01f93f8c;
          }
          if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_01f9340c;
          if (plVar14 == (long *)0x0) break;
          lVar19 = *(long *)(lVar19 + uVar13 * 8 + 0x20);
          if ((lVar19 != 0) &&
             (lVar12 = thunk_FUN_0124baac(lVar19,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0))
          goto LAB_01f941d8;
          if (*(uint *)(plVar14 + 3) <= uVar13) goto LAB_01f9340c;
          *plVar26 = lVar19;
          thunk_FUN_01286abc(plVar26,lVar19);
          lVar19 = *unaff_x28;
          uVar13 = uVar13 + 1;
          plVar26 = plVar26 + 1;
        } while (lVar19 != 0);
      }
      goto LAB_01f92644;
    }
    if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_01f9340c;
    plVar14 = (long *)*plVar28;
    if (plVar14 == (long *)0x0) goto LAB_01f92644;
    uVar8 = (**(code **)(*plVar14 + 600))(plVar14,*(undefined8 *)(*plVar14 + 0x260));
    if ((uVar8 >> 1 & 1) == 0) {
      plVar14 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar9 + 0x18));
      uVar8 = *(int *)(lVar9 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar14,0,uVar8,0);
      if (plVar11 == (long *)0x0) goto LAB_01f92644;
      if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_01f9340c;
      lVar19 = plVar11[(long)(int)uVar6 + 4];
      lVar9 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if ((*unaff_x28 == 0) || (lVar9 == 0)) goto LAB_01f92644;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_01f9340c;
      *(uint *)(lVar9 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar8;
      lVar9 = thunk_FUN_01f894b8(lVar19,lVar9,0);
      if (plVar14 == (long *)0x0) goto LAB_01f92644;
      if ((lVar9 != 0) &&
         (lVar19 = thunk_FUN_0124baac(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar14 + 3) <= uVar8) goto LAB_01f9340c;
      plVar11 = plVar14 + (long)(int)uVar8 + 4;
      *plVar11 = lVar9;
      thunk_FUN_01286abc(plVar11,lVar9);
      if (*(uint *)(plVar14 + 3) <= uVar8) goto LAB_01f9340c;
      lVar9 = *unaff_x28;
      if (lVar9 == 0) goto LAB_01f92644;
      plVar11 = (long *)*plVar11;
      if (plVar11 != (long *)0x0) {
        bVar5 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar5) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar5 * 8 + -8) !=
            *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
      }
      FUN_01f89ca0(lVar9,uVar8,plVar11,0,*(int *)(lVar9 + 0x18) - uVar8,0);
      *unaff_x28 = (long)plVar14;
      thunk_FUN_01286abc(unaff_x28,plVar14);
    }
  }
  goto OVRPlugin_UnityOpenXR__OnSessionExiting;
  while( true ) {
    plVar15 = *(long **)(lVar9 + 0x20 + uVar13 * 8);
    if ((plVar15 == (long *)0x0) ||
       (lVar19 = (**(code **)(*plVar15 + 0x1f8))(plVar15,*(undefined8 *)(*plVar15 + 0x200)),
       plVar14 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar19 != 0) &&
       (lVar12 = thunk_FUN_0124baac(lVar19,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar14 + 3) <= (uint)uVar13) goto LAB_01f9340c;
    *plVar26 = lVar19;
    thunk_FUN_01286abc(plVar26,lVar19);
    uVar8 = *(uint *)(lVar9 + 0x18);
    uVar13 = uVar13 + 1;
    plVar26 = plVar26 + 1;
    if ((int)(uVar8 - 1) <= (int)uVar13) break;
LAB_01f939f4:
    if (uVar8 <= (uint)uVar13) goto LAB_01f9340c;
  }
LAB_01f93a68:
  if (plVar11 == (long *)0x0) goto LAB_01f92644;
  if ((int)plVar11[3] == 0) goto LAB_01f9340c;
  lVar19 = plVar11[4];
  if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar20 = FUN_01f801dc(lVar19,0,0);
  uVar8 = (uint)uVar13;
  if ((uVar20 & 1) == 0) {
    if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_01f9340c;
    plVar11 = *(long **)(lVar9 + (long)(int)uVar8 * 8 + 0x20);
    if ((plVar11 == (long *)0x0) ||
       (lVar9 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200)),
       plVar14 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar9 != 0) &&
       (lVar19 = thunk_FUN_0124baac(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0))
    goto LAB_01f941d8;
    uVar6 = *(uint *)(plVar14 + 3);
  }
  else {
    if ((int)plVar11[3] == 0) goto LAB_01f9340c;
    lVar9 = plVar11[4];
    uVar25 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
    lVar9 = thunk_FUN_01f894b8(lVar9,uVar25,0);
    if (plVar14 == (long *)0x0) goto LAB_01f92644;
    if ((lVar9 != 0) &&
       (lVar19 = thunk_FUN_0124baac(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0))
    goto LAB_01f941d8;
    uVar6 = *(uint *)(plVar14 + 3);
  }
  if (uVar6 <= uVar8) goto LAB_01f9340c;
  plVar14[(long)(int)uVar8 + 4] = lVar9;
  thunk_FUN_01286abc(plVar14 + (long)(int)uVar8 + 4,lVar9);
LAB_01f94118:
  *unaff_x28 = (long)plVar14;
  thunk_FUN_01286abc(unaff_x28,plVar14);
LAB_01f94128:
  if ((int)plVar10[3] != 0) goto LAB_01f941b4;
  goto LAB_01f9340c;
  while( true ) {
    plVar15 = *(long **)(lVar9 + 0x20 + uVar13 * 8);
    if ((plVar15 == (long *)0x0) ||
       (lVar19 = (**(code **)(*plVar15 + 0x1f8))(plVar15,*(undefined8 *)(*plVar15 + 0x200)),
       plVar14 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar19 != 0) &&
       (lVar12 = thunk_FUN_0124baac(lVar19,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar14 + 3) <= (uint)uVar13) goto LAB_01f9340c;
    *plVar26 = lVar19;
    thunk_FUN_01286abc(plVar26,lVar19);
    uVar8 = *(uint *)(lVar9 + 0x18);
    uVar13 = uVar13 + 1;
    plVar26 = plVar26 + 1;
    if ((int)(uVar8 - 1) <= (int)uVar13) break;
LAB_01f93f8c:
    if (uVar8 <= (uint)uVar13) goto LAB_01f9340c;
  }
LAB_01f94000:
  if (plVar11 == (long *)0x0) goto LAB_01f92644;
  if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_01f9340c;
  lVar19 = plVar11[(long)(int)uVar6 + 4];
  if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar20 = FUN_01f801dc(lVar19,0,0);
  uVar8 = (uint)uVar13;
  if ((uVar20 & 1) == 0) {
    if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_01f9340c;
    plVar11 = *(long **)(lVar9 + (long)(int)uVar8 * 8 + 0x20);
    if ((plVar11 == (long *)0x0) ||
       (lVar9 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200)),
       plVar14 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar9 != 0) &&
       (lVar19 = thunk_FUN_0124baac(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0))
    goto LAB_01f941d8;
    uVar24 = *(uint *)(plVar14 + 3);
  }
  else {
    if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_01f9340c;
    lVar9 = plVar11[(long)(int)uVar6 + 4];
    uVar25 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
    lVar9 = thunk_FUN_01f894b8(lVar9,uVar25,0);
    if (plVar14 == (long *)0x0) goto LAB_01f92644;
    if ((lVar9 != 0) &&
       (lVar19 = thunk_FUN_0124baac(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0)) {
LAB_01f941d8:
      uVar25 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar25,0);
    }
    uVar24 = *(uint *)(plVar14 + 3);
  }
  if (uVar24 <= uVar8) goto LAB_01f9340c;
  plVar14[(long)(int)uVar8 + 4] = lVar9;
  thunk_FUN_01286abc(plVar14 + (long)(int)uVar8 + 4,lVar9);
FUN_01f94198:
  *unaff_x28 = (long)plVar14;
  thunk_FUN_01286abc(unaff_x28,plVar14);
OVRPlugin_UnityOpenXR__OnSessionExiting:
  if (uVar6 < *(uint *)(plVar10 + 3)) {
LAB_01f941b4:
    return *plVar28;
  }
LAB_01f9340c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


