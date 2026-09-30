/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$ovrp_Media_IsCastingToRemoteClient
ENTRY_POINT: 01f92834
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long OVRPlugin_OVRP_1_66_0__ovrp_Media_IsCastingToRemoteClient(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined **in_x9;
  long lVar15;
  uint uVar16;
  long *unaff_x20;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar20;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 uVar21;
  long *unaff_x28;
  long lVar22;
  long *in_stack_00000010;
  long in_stack_00000020;
  long *in_stack_00000028;
  uint in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *plStack0000000000000048;
  uint in_stack_00000050;
  long *in_stack_00000058;
  
code_r0x01f92834:
  uVar19 = *(undefined8 *)in_x9[0x17c];
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
                    /* try { // try from 01f92850 to 02092857 has its CatchHandler @ 01f929b8 */
  uVar19 = FUN_01f7d8a0(uVar19,0);
  if (unaff_x22 == (long *)0x0) goto LAB_01f92644;
                    /* try { // try from 01f92858 to 0209285f has its CatchHandler @ 01f929b4 */
  uVar9 = (**(code **)(*unaff_x22 + 0x208))(unaff_x22,uVar19,1,*(undefined8 *)(*unaff_x22 + 0x210));
  plVar11 = (long *)PTR_DAT_027b32e0;
  if ((uVar9 & 1) != 0) {
                    /* try { // try from 01f9287c to 020928eb has its CatchHandler @ 01f929e8 */
    if (unaff_x23 == 0) goto LAB_01f92644;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
    lVar13 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
    if (lVar13 == 0) goto LAB_01f92644;
    if (*(uint *)(lVar13 + 0x18) <= (uint)unaff_x24) goto LAB_01f9340c;
    uVar9 = unaff_x25;
    if (*(uint *)(lVar13 + unaff_x24 * 4 + 0x20) == (uint)unaff_x24) goto LAB_01f9323c;
  }
LAB_01f93214:
  do {
    uVar6 = *(uint *)(in_stack_00000040 + 3);
    uVar14 = (ulong)uVar6;
    uVar9 = unaff_x25 + 1;
    if ((long)(int)uVar6 <= (long)uVar9) {
      if (in_stack_00000030 != 1) {
        if (in_stack_00000030 == 0) {
          uVar19 = thunk_FUN_01279b34(PTR_DAT_027c1bf0);
          thunk_FUN_01279b34(PTR_DAT_027b3ed0);
          uVar21 = thunk_FUN_0124bba8();
          FUN_01f6b058(uVar21,uVar19,0);
          goto LAB_01f9426c;
        }
        if ((int)in_stack_00000030 < 2) {
          uVar6 = 0;
          goto LAB_01f934c8;
        }
        if (uVar6 == 0) goto LAB_01f9340c;
        lVar13 = 0;
        lVar15 = 0;
        uVar6 = 0;
        bVar2 = false;
        goto LAB_01f932e8;
      }
      if (in_stack_00000020 != 0) {
        if (unaff_x23 == 0) goto LAB_01f92644;
        if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
        if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_01f92644;
        lVar13 = FUN_01f8a1a8(*(long *)(unaff_x23 + 0x20),0);
        lVar15 = *unaff_x28;
        if ((lVar15 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_01f92644;
        if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
        lVar17 = in_stack_00000038[4];
        if (*(int *)(*plVar11 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        bVar4 = FUN_01f801dc(lVar17,0,0);
        lVar17 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
        if (lVar13 == 0) {
          lVar20 = 0;
        }
        else {
          uVar19 = *(undefined8 *)PTR_DAT_027b1ca8;
          lVar20 = thunk_FUN_0124baac(lVar13,uVar19);
          if (lVar20 == 0) goto LAB_01f93580;
        }
        uVar19 = *(undefined8 *)(lVar15 + 0x18);
        FUN_01fab77c(lVar17,0);
        *(long *)(lVar17 + 0x10) = lVar20;
        thunk_FUN_01286abc((long *)(lVar17 + 0x10),lVar20);
        *(int *)(lVar17 + 0x18) = (int)uVar19;
        *(byte *)(lVar17 + 0x1c) = bVar4 & 1;
        *in_stack_00000010 = lVar17;
        thunk_FUN_01286abc(in_stack_00000010,lVar17);
        if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
        uVar19 = *(undefined8 *)(unaff_x23 + 0x20);
        lVar13 = *unaff_x28;
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        FUN_01f94678(uVar19,lVar13);
        uVar6 = (uint)in_stack_00000040[3];
        plVar11 = (long *)PTR_DAT_027b32e0;
      }
      if (uVar6 == 0) goto LAB_01f9340c;
      plVar8 = in_stack_00000040 + 4;
      plVar18 = (long *)*plVar8;
      if (((plVar18 == (long *)0x0) ||
          (lVar13 = (**(code **)(*plVar18 + 0x378))(plVar18,*(undefined8 *)(*plVar18 + 0x380)),
          lVar13 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
      iVar5 = *(int *)(*unaff_x28 + 0x18);
      if (*(int *)(lVar13 + 0x18) == iVar5) {
        if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
        if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
        lVar15 = in_stack_00000038[4];
        if (*(int *)(*plVar11 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar9 = FUN_01f801dc(lVar15,0,0);
        if ((uVar9 & 1) == 0) goto LAB_01f94128;
        plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,
                                       *(undefined4 *)(lVar13 + 0x18));
        uVar6 = *(int *)(lVar13 + 0x18) - 1;
        FUN_01f89ca0(*unaff_x28,0,plVar11,0,uVar6,0);
        if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
        lVar15 = in_stack_00000038[4];
        lVar13 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
        if (lVar13 == 0) goto LAB_01f92644;
        if (*(int *)(lVar13 + 0x18) == 0) goto LAB_01f9340c;
        *(undefined4 *)(lVar13 + 0x20) = 1;
        lVar13 = thunk_FUN_01f894b8(lVar15,lVar13,0);
        if (plVar11 == (long *)0x0) goto LAB_01f92644;
        if ((lVar13 != 0) &&
           (lVar15 = thunk_FUN_0124baac(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
        goto LAB_01f941d8;
        if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_01f9340c;
        plVar18 = plVar11 + (long)(int)uVar6 + 4;
        *plVar18 = lVar13;
        thunk_FUN_01286abc(plVar18,lVar13);
        if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_01f9340c;
        lVar13 = *unaff_x28;
        if (lVar13 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar13 + 0x18) <= uVar6) goto LAB_01f9340c;
        plVar18 = (long *)*plVar18;
        if (plVar18 == (long *)0x0) goto LAB_01f92644;
        bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar18 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
        FUN_01f89750(plVar18,*(undefined8 *)(lVar13 + (long)(int)uVar6 * 8 + 0x20),0,0);
        goto LAB_01f94118;
      }
      if (iVar5 < *(int *)(lVar13 + 0x18)) {
        plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
        lVar15 = *unaff_x28;
        if (lVar15 == 0) goto LAB_01f92644;
        uVar9 = 0;
        plVar18 = plVar11 + 4;
        goto LAB_01f937fc;
      }
      if ((int)in_stack_00000040[3] == 0) goto LAB_01f9340c;
      plVar11 = (long *)*plVar8;
      if (plVar11 == (long *)0x0) goto LAB_01f92644;
      uVar6 = (**(code **)(*plVar11 + 600))(plVar11,*(undefined8 *)(*plVar11 + 0x260));
      if ((uVar6 >> 1 & 1) != 0) goto LAB_01f94128;
      plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar13 + 0x18))
      ;
      uVar6 = *(int *)(lVar13 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar11,0,uVar6,0);
      if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
      if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
      lVar15 = in_stack_00000038[4];
      lVar13 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if ((*unaff_x28 == 0) || (lVar13 == 0)) goto LAB_01f92644;
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_01f9340c;
      *(uint *)(lVar13 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar6;
      lVar13 = thunk_FUN_01f894b8(lVar15,lVar13,0);
      if (plVar11 == (long *)0x0) goto LAB_01f92644;
      if ((lVar13 != 0) &&
         (lVar15 = thunk_FUN_0124baac(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_01f9340c;
      plVar18 = plVar11 + (long)(int)uVar6 + 4;
      *plVar18 = lVar13;
      thunk_FUN_01286abc(plVar18,lVar13);
      if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_01f9340c;
      lVar13 = *unaff_x28;
      if (lVar13 == 0) goto LAB_01f92644;
      plVar18 = (long *)*plVar18;
      if (plVar18 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar18 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
      }
      FUN_01f89ca0(lVar13,uVar6,plVar18,0,*(int *)(lVar13 + 0x18) - uVar6,0);
      *unaff_x28 = (long)plVar11;
      thunk_FUN_01286abc(unaff_x28,plVar11);
      goto LAB_01f94128;
    }
    if (uVar14 <= uVar9) goto LAB_01f9340c;
    in_stack_00000028 = in_stack_00000040 + unaff_x25 + 5;
    uVar14 = FUN_01ee539c(*in_stack_00000028,0,0);
    unaff_x25 = uVar9;
  } while ((uVar14 & 1) != 0);
  if (*(uint *)(in_stack_00000040 + 3) <= uVar9) goto LAB_01f9340c;
  plVar18 = (long *)*in_stack_00000028;
  if ((plVar18 == (long *)0x0) ||
     (unaff_x27 = (**(code **)(*plVar18 + 0x378))(plVar18,*(undefined8 *)(*plVar18 + 0x380)),
     unaff_x27 == 0)) goto LAB_01f92644;
  uVar14 = *(ulong *)(unaff_x27 + 0x18);
  lVar13 = *unaff_x28;
  if (uVar14 == 0) {
    if (lVar13 == 0) goto LAB_01f92644;
    if (*(long *)(lVar13 + 0x18) != 0) {
      if (*(uint *)(in_stack_00000040 + 3) <= uVar9) goto LAB_01f9340c;
      plVar18 = (long *)*in_stack_00000028;
      if (plVar18 == (long *)0x0) goto LAB_01f92644;
      uVar6 = (**(code **)(*plVar18 + 600))(plVar18,*(undefined8 *)(*plVar18 + 0x260));
      if ((uVar6 >> 1 & 1) == 0) goto LAB_01f93214;
    }
    if (unaff_x23 == 0) goto LAB_01f92644;
    if ((*(uint *)(unaff_x23 + 0x18) <= uVar9) || (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000030)
       ) goto LAB_01f9340c;
    lVar13 = (long)(int)in_stack_00000030;
    *(undefined8 *)(unaff_x23 + lVar13 * 8 + 0x20) = *(undefined8 *)(unaff_x23 + uVar9 * 8 + 0x20);
    thunk_FUN_01286abc();
    uVar6 = *(uint *)(in_stack_00000040 + 3);
    if (uVar6 <= uVar9) goto LAB_01f9340c;
    lVar15 = *in_stack_00000028;
joined_r0x01f927d4:
    if (lVar15 != 0) {
      lVar17 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*in_stack_00000040 + 0x40));
      if (lVar17 == 0) goto LAB_01f941d8;
      uVar6 = (uint)in_stack_00000040[3];
    }
    if (uVar6 <= in_stack_00000030) goto LAB_01f9340c;
    in_stack_00000040[lVar13 + 4] = lVar15;
    in_stack_00000030 = in_stack_00000030 + 1;
    thunk_FUN_01286abc(in_stack_00000040 + lVar13 + 4,lVar15);
    plVar11 = (long *)PTR_DAT_027b32e0;
    unaff_x25 = uVar9;
    goto LAB_01f93214;
  }
  if (lVar13 == 0) goto LAB_01f92644;
  uVar6 = *(uint *)(lVar13 + 0x18);
  iVar5 = (int)uVar14;
  if ((int)uVar6 < iVar5) {
    uVar7 = iVar5 - 1;
    if ((int)uVar6 < (int)uVar7) {
      plVar18 = (long *)(unaff_x27 + (long)(int)uVar6 * 8 + 0x20);
      do {
        if ((uint)uVar14 <= uVar6) goto LAB_01f9340c;
        plVar8 = (long *)*plVar18;
        if (plVar8 == (long *)0x0) goto LAB_01f92644;
        lVar13 = (**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200));
        puVar3 = PTR_DAT_027baa38;
        lVar15 = *(long *)PTR_DAT_027baa38;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01220628(lVar15);
          lVar15 = *(long *)puVar3;
        }
        if (lVar13 == **(long **)(lVar15 + 0xb8)) {
          uVar14 = (ulong)*(uint *)(unaff_x27 + 0x18);
          uVar7 = *(uint *)(unaff_x27 + 0x18) - 1;
          unaff_x28 = in_stack_00000058;
          break;
        }
        uVar14 = *(ulong *)(unaff_x27 + 0x18);
        uVar6 = uVar6 + 1;
        plVar18 = plVar18 + 1;
        uVar7 = (int)uVar14 - 1;
        unaff_x28 = in_stack_00000058;
      } while ((int)uVar6 < (int)uVar7);
    }
    if (uVar6 != uVar7) goto LAB_01f93214;
    if ((uint)uVar14 <= uVar6) goto LAB_01f9340c;
    plVar8 = (long *)(unaff_x27 + (long)(int)uVar6 * 8 + 0x20);
    plVar18 = (long *)*plVar8;
    if (plVar18 == (long *)0x0) goto LAB_01f92644;
    lVar13 = (**(code **)(*plVar18 + 0x1f8))(plVar18,*(undefined8 *)(*plVar18 + 0x200));
    puVar3 = PTR_DAT_027baa38;
    lVar15 = *(long *)PTR_DAT_027baa38;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01220628(lVar15);
      lVar15 = *(long *)puVar3;
    }
    if (lVar13 == **(long **)(lVar15 + 0xb8)) {
      if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_01f9340c;
      plVar18 = (long *)*plVar8;
      if ((plVar18 == (long *)0x0) ||
         (lVar13 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0)),
         lVar13 == 0)) goto LAB_01f92644;
      uVar14 = FUN_01f80ec8(lVar13,0);
      if ((uVar14 & 1) == 0) goto LAB_01f93214;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_01f9340c;
      plVar18 = (long *)*plVar8;
      uVar19 = *(undefined8 *)PTR_DAT_027c1be0;
      if (*(int *)(*plVar11 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar19 = FUN_01f7d8a0(uVar19,0);
      if (plVar18 == (long *)0x0) goto LAB_01f92644;
      uVar14 = (**(code **)(*plVar18 + 0x208))(plVar18,uVar19,1,*(undefined8 *)(*plVar18 + 0x210));
      plVar11 = (long *)PTR_DAT_027b32e0;
      if ((uVar14 & 1) == 0) goto LAB_01f93214;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_01f9340c;
      plVar8 = (long *)*plVar8;
      if ((plVar8 == (long *)0x0) ||
         (plVar18 = (long *)(**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
         plVar18 == (long *)0x0)) goto LAB_01f92644;
LAB_01f93264:
      plStack0000000000000048 =
           (long *)(**(code **)(*plVar18 + 0x408))(plVar18,*(undefined8 *)(*plVar18 + 0x410));
      goto LAB_01f92a2c;
    }
  }
  else {
    if (iVar5 == 0) goto LAB_01f9340c;
    uVar7 = iVar5 - 1;
    unaff_x24 = (long)(int)uVar7;
    unaff_x20 = (long *)(unaff_x27 + unaff_x24 * 8 + 0x20);
    plVar18 = (long *)*unaff_x20;
    if ((plVar18 == (long *)0x0) ||
       (lVar13 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0)),
       lVar13 == 0)) goto LAB_01f92644;
    uVar14 = FUN_01f80ec8(lVar13,0);
    if (iVar5 < (int)uVar6) {
      if ((uVar14 & 1) != 0) goto code_r0x01f9281c;
      goto LAB_01f93214;
    }
    if ((uVar14 & 1) != 0) {
      if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_01f9340c;
      plVar18 = (long *)*unaff_x20;
      uVar19 = *(undefined8 *)PTR_DAT_027c1be0;
      if (*(int *)(*plVar11 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar19 = FUN_01f7d8a0(uVar19,0);
      if (plVar18 == (long *)0x0) goto LAB_01f92644;
      uVar14 = (**(code **)(*plVar18 + 0x208))(plVar18,uVar19,1,*(undefined8 *)(*plVar18 + 0x210));
      plVar11 = (long *)PTR_DAT_027b32e0;
      if ((uVar14 & 1) == 0) {
        plStack0000000000000048 = (long *)0x0;
        goto LAB_01f92a2c;
      }
      if (unaff_x23 == 0) goto LAB_01f92644;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_01f9340c;
      lVar13 = *(long *)(unaff_x23 + uVar9 * 8 + 0x20);
      if (lVar13 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_01f9340c;
      if (*(uint *)(lVar13 + unaff_x24 * 4 + 0x20) != uVar7) goto LAB_01f92a28;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_01f9340c;
      plVar18 = (long *)*unaff_x20;
      if ((plVar18 == (long *)0x0) ||
         (plVar18 = (long *)(**(code **)(*plVar18 + 0x1d8))
                                      (plVar18,*(undefined8 *)(*plVar18 + 0x1e0)), unaff_x26 == 0))
      goto LAB_01f92644;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
      if (plVar18 == (long *)0x0) goto LAB_01f92644;
      uVar14 = (**(code **)(*plVar18 + 0x288))
                         (plVar18,*(undefined8 *)(unaff_x26 + unaff_x24 * 8 + 0x20),
                          *(undefined8 *)(*plVar18 + 0x290));
      if ((uVar14 & 1) == 0) {
LAB_01f9323c:
        if ((uint)unaff_x24 < *(uint *)(unaff_x27 + 0x18)) {
          plVar18 = (long *)*unaff_x20;
          if ((plVar18 != (long *)0x0) &&
             (plVar18 = (long *)(**(code **)(*plVar18 + 0x1d8))
                                          (plVar18,*(undefined8 *)(*plVar18 + 0x1e0)),
             plVar18 != (long *)0x0)) goto LAB_01f93264;
          goto LAB_01f92644;
        }
        goto LAB_01f9340c;
      }
    }
  }
LAB_01f92a28:
  plStack0000000000000048 = (long *)0x0;
LAB_01f92a2c:
  if (*(int *)(*plVar11 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar14 = FUN_01f801dc(plStack0000000000000048,0,0);
  if ((uVar14 & 1) == 0) {
    if (*unaff_x28 == 0) goto LAB_01f92644;
    uVar6 = *(uint *)(*unaff_x28 + 0x18);
  }
  else {
    uVar6 = *(int *)(unaff_x27 + 0x18) - 1;
  }
  if ((int)uVar6 < 1) {
    uVar7 = 0;
  }
  else {
    uVar16 = 0;
    plVar18 = (long *)(unaff_x23 + uVar9 * 8 + 0x20);
    do {
      if (*(uint *)(unaff_x27 + 0x18) <= uVar16) goto LAB_01f9340c;
      lVar13 = (long)(int)uVar16;
      plVar8 = *(long **)(unaff_x27 + lVar13 * 8 + 0x20);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
         plVar8 == (long *)0x0)) goto LAB_01f92644;
      uVar14 = FUN_01f80ed8(plVar8,0);
      if ((uVar14 & 1) != 0) {
        plVar8 = (long *)(**(code **)(*plVar8 + 0x408))(plVar8,*(undefined8 *)(*plVar8 + 0x410));
      }
      if (unaff_x23 == 0) goto LAB_01f92644;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_01f9340c;
      lVar15 = *plVar18;
      if (lVar15 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar15 + 0x18) <= uVar16) goto LAB_01f9340c;
      if (unaff_x26 == 0) goto LAB_01f92644;
      uVar7 = *(uint *)(lVar15 + lVar13 * 4 + 0x20);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
      uVar19 = *(undefined8 *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
      if (*(int *)(*plVar11 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar14 = FUN_01f7f404(plVar8,uVar19,0);
      if ((uVar14 & 1) == 0) {
        if ((in_stack_00000050 >> 0x12 & 1) != 0) {
          if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_01f9340c;
          lVar15 = *plVar18;
          if (lVar15 == 0) goto LAB_01f92644;
          if (*(uint *)(lVar15 + 0x18) <= uVar16) goto LAB_01f9340c;
          lVar17 = *in_stack_00000058;
          if (lVar17 == 0) goto LAB_01f92644;
          uVar7 = *(uint *)(lVar15 + lVar13 * 4 + 0x20);
          if (*(uint *)(lVar17 + 0x18) <= uVar7) goto LAB_01f9340c;
          lVar15 = *plVar11;
          lVar17 = *(long *)(lVar17 + (long)(int)uVar7 * 8 + 0x20);
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_01220628();
            lVar15 = *plVar11;
          }
          if (lVar17 == *(long *)(*(long *)(lVar15 + 0xb8) + 0x18)) goto LAB_01f92e70;
        }
        if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_01f9340c;
        lVar15 = *plVar18;
        if (lVar15 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar15 + 0x18) <= uVar16) goto LAB_01f9340c;
        lVar17 = *in_stack_00000058;
        if (lVar17 == 0) goto LAB_01f92644;
        uVar7 = *(uint *)(lVar15 + lVar13 * 4 + 0x20);
        if (*(uint *)(lVar17 + 0x18) <= uVar7) goto LAB_01f9340c;
        if (*(long *)(lVar17 + (long)(int)uVar7 * 8 + 0x20) != 0) {
          uVar19 = *(undefined8 *)PTR_DAT_027b5b48;
          if (*(int *)(*plVar11 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar19 = FUN_01f7d8a0(uVar19,0);
          uVar14 = FUN_01f7f404(plVar8,uVar19,0);
          if ((uVar14 & 1) == 0) {
            if (plVar8 == (long *)0x0) goto LAB_01f92644;
            uVar14 = FUN_01f81644(plVar8,0);
            if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_01f9340c;
            lVar15 = *plVar18;
            if (lVar15 == 0) goto LAB_01f92644;
            if ((*(uint *)(lVar15 + 0x18) <= uVar16) ||
               (uVar7 = *(uint *)(lVar15 + lVar13 * 4 + 0x20), *(uint *)(unaff_x26 + 0x18) <= uVar7)
               ) goto LAB_01f9340c;
            uVar19 = *(undefined8 *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar10 = FUN_01f7f404(uVar19,0,0);
            plVar11 = (long *)PTR_DAT_027b32e0;
            uVar7 = uVar16;
            if ((uVar14 & 1) == 0) {
              if ((uVar10 & 1) == 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_01f9340c;
                lVar15 = *plVar18;
                if (lVar15 == 0) goto LAB_01f92644;
                if ((*(uint *)(lVar15 + 0x18) <= uVar16) ||
                   (uVar1 = *(uint *)(lVar15 + lVar13 * 4 + 0x20),
                   *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_01f9340c;
                uVar14 = (**(code **)(*plVar8 + 0x288))
                                   (plVar8,*(undefined8 *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20),
                                    *(undefined8 *)(*plVar8 + 0x290));
                if ((uVar14 & 1) == 0) {
                  if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_01f9340c;
                  lVar15 = *plVar18;
                  if (lVar15 == 0) goto LAB_01f92644;
                  if ((*(uint *)(lVar15 + 0x18) <= uVar16) ||
                     (uVar1 = *(uint *)(lVar15 + lVar13 * 4 + 0x20),
                     *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_01f9340c;
                  lVar15 = *(long *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20);
                  if (lVar15 == 0) goto LAB_01f92644;
                  uVar14 = FUN_01f81468(lVar15,0);
                  unaff_x28 = in_stack_00000058;
                  if ((uVar14 & 1) != 0) {
                    if (uVar9 < *(uint *)(unaff_x23 + 0x18)) {
                      lVar15 = *plVar18;
                      if (lVar15 != 0) {
                        if (uVar16 < *(uint *)(lVar15 + 0x18)) {
                          lVar17 = *in_stack_00000058;
                          if (lVar17 != 0) {
                            uVar1 = *(uint *)(lVar15 + lVar13 * 4 + 0x20);
                            if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                              uVar14 = (**(code **)(*plVar8 + 0x828))
                                                 (plVar8,*(undefined8 *)
                                                          (lVar17 + (long)(int)uVar1 * 8 + 0x20),
                                                  *(undefined8 *)(*plVar8 + 0x830));
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
              unaff_x28 = in_stack_00000058;
              if ((uVar10 & 1) != 0) break;
              if (*(uint *)(unaff_x23 + 0x18) <= uVar9) goto LAB_01f9340c;
              lVar15 = *plVar18;
              if (lVar15 == 0) goto LAB_01f92644;
              if (*(uint *)(lVar15 + 0x18) <= uVar16) goto LAB_01f9340c;
              lVar17 = *in_stack_00000058;
              if (lVar17 == 0) goto LAB_01f92644;
              uVar1 = *(uint *)(lVar15 + lVar13 * 4 + 0x20);
              if (*(uint *)(lVar17 + 0x18) <= uVar1) goto LAB_01f9340c;
              uVar19 = *(undefined8 *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
              if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              bVar4 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
              if ((*(byte *)(*plVar8 + 0x130) < bVar4) ||
                 (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar4 * 8 + -8) !=
                  *(long *)PTR_DAT_027b3ec0)) {
                    /* WARNING: Subroutine does not return */
                FUN_01230f60(plVar8);
              }
              uVar14 = FUN_01f9451c(uVar19,plVar8);
              plVar11 = (long *)PTR_DAT_027b32e0;
joined_r0x01f92e6c:
              unaff_x28 = in_stack_00000058;
              if ((uVar14 & 1) == 0) break;
            }
          }
        }
      }
LAB_01f92e70:
      uVar16 = uVar16 + 1;
      unaff_x28 = in_stack_00000058;
      uVar7 = uVar6;
    } while (uVar6 != uVar16);
  }
  if (*(int *)(*plVar11 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar14 = FUN_01f801dc(plStack0000000000000048,0,0);
  if (((uVar14 & 1) != 0) && (uVar7 == *(int *)(unaff_x27 + 0x18) - 1U)) {
    lVar13 = *unaff_x28;
    if (lVar13 == 0) goto LAB_01f92644;
    lVar15 = (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3) + 0x20;
    while ((int)uVar7 < *(int *)(lVar13 + 0x18)) {
      if ((plStack0000000000000048 == (long *)0x0) ||
         (uVar14 = FUN_01f81644(plStack0000000000000048,0), unaff_x26 == 0)) goto LAB_01f92644;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
      uVar19 = *(undefined8 *)(unaff_x26 + lVar15);
      if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar10 = FUN_01f7f404(uVar19,0,0);
      plVar11 = (long *)PTR_DAT_027b32e0;
      if ((uVar14 & 1) == 0) {
        if ((uVar10 & 1) == 0) {
          if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
          uVar14 = (**(code **)(*plStack0000000000000048 + 0x288))
                             (plStack0000000000000048,*(undefined8 *)(unaff_x26 + lVar15),
                              *(undefined8 *)(*plStack0000000000000048 + 0x290));
          if ((uVar14 & 1) == 0) {
            if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
            if (*(long *)(unaff_x26 + lVar15) == 0) goto LAB_01f92644;
            uVar14 = FUN_01f81468(*(long *)(unaff_x26 + lVar15),0);
            if ((uVar14 & 1) != 0) {
              lVar13 = *unaff_x28;
              if (lVar13 != 0) {
                if (uVar7 < *(uint *)(lVar13 + 0x18)) {
                  uVar14 = (**(code **)(*plStack0000000000000048 + 0x828))
                                     (plStack0000000000000048,*(undefined8 *)(lVar13 + lVar15),
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
        if ((uVar10 & 1) != 0) break;
        lVar13 = *unaff_x28;
        if (lVar13 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_01f9340c;
        uVar19 = *(undefined8 *)(lVar13 + lVar15);
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
        uVar14 = FUN_01f9451c(uVar19,plStack0000000000000048);
        plVar11 = (long *)PTR_DAT_027b32e0;
joined_r0x01f93040:
        if ((uVar14 & 1) == 0) break;
      }
      lVar13 = *unaff_x28;
      uVar7 = uVar7 + 1;
      lVar15 = lVar15 + 8;
      if (lVar13 == 0) goto LAB_01f92644;
    }
  }
  if (*unaff_x28 == 0) goto LAB_01f92644;
  unaff_x25 = uVar9;
  if (uVar7 == *(uint *)(*unaff_x28 + 0x18)) {
    if (unaff_x23 != 0) {
      if ((uVar9 < *(uint *)(unaff_x23 + 0x18)) && (in_stack_00000030 < *(uint *)(unaff_x23 + 0x18))
         ) {
        lVar13 = (long)(int)in_stack_00000030;
        *(undefined8 *)(unaff_x23 + lVar13 * 8 + 0x20) =
             *(undefined8 *)(unaff_x23 + uVar9 * 8 + 0x20);
        thunk_FUN_01286abc();
        if (in_stack_00000038 != (long *)0x0) {
          if ((plStack0000000000000048 == (long *)0x0) ||
             (lVar15 = thunk_FUN_0124baac(plStack0000000000000048,
                                          *(undefined8 *)(*in_stack_00000038 + 0x40)), lVar15 != 0))
          {
            if (in_stack_00000030 < *(uint *)(in_stack_00000038 + 3)) {
              in_stack_00000038[lVar13 + 4] = (long)plStack0000000000000048;
              thunk_FUN_01286abc(in_stack_00000038 + lVar13 + 4,plStack0000000000000048);
              uVar6 = *(uint *)(in_stack_00000040 + 3);
              if (uVar9 < uVar6) {
                lVar15 = *in_stack_00000028;
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
  goto LAB_01f93214;
LAB_01f932e8:
  if (unaff_x23 == 0) goto LAB_01f92644;
  if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
  if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
  if (((((uint)in_stack_00000038[3] <= uVar6) || (uVar9 = lVar13 + 1, uVar14 <= uVar9)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar9)) ||
     ((in_stack_00000038[3] & 0xffffffffU) <= uVar9)) goto LAB_01f9340c;
  lVar20 = in_stack_00000040[lVar15 + 4];
  lVar22 = in_stack_00000040[lVar13 + 5];
  lVar17 = in_stack_00000038[lVar15 + 4];
  uVar19 = *(undefined8 *)(unaff_x23 + lVar15 * 8 + 0x20);
  uVar21 = *(undefined8 *)(unaff_x23 + 0x28 + lVar13 * 8);
  lVar15 = in_stack_00000038[lVar13 + 5];
  if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  iVar5 = FUN_01f947fc(lVar20,uVar19,lVar17,lVar22,uVar21,lVar15);
  if (iVar5 == 0) {
    bVar2 = true;
  }
  else if (iVar5 == 2) {
    uVar6 = (int)lVar13 + 1;
    bVar2 = false;
  }
  if ((ulong)in_stack_00000030 - 2 != lVar13) {
    lVar15 = (long)(int)uVar6;
    lVar13 = lVar13 + 1;
    uVar14 = in_stack_00000040[3] & 0xffffffff;
    if ((uint)in_stack_00000040[3] <= uVar6) goto LAB_01f9340c;
    goto LAB_01f932e8;
  }
  plVar11 = (long *)PTR_DAT_027b32e0;
  unaff_x28 = in_stack_00000058;
  if (bVar2) {
    uVar19 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
    thunk_FUN_01279b34(PTR_DAT_027bc458);
    uVar21 = thunk_FUN_0124bba8();
    FUN_01ee31d4(uVar21,uVar19,0);
LAB_01f9426c:
    uVar19 = thunk_FUN_01279b34(PTR_DAT_027c1bf8);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar21,uVar19);
  }
LAB_01f934c8:
  if (in_stack_00000020 != 0) {
    if (unaff_x23 == 0) goto LAB_01f92644;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
    plVar18 = (long *)(unaff_x23 + (long)(int)uVar6 * 8 + 0x20);
    lVar13 = *plVar18;
    if (lVar13 == 0) goto LAB_01f92644;
    lVar13 = FUN_01f8a1a8(lVar13,0);
    lVar15 = *unaff_x28;
    if ((lVar15 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_01f92644;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
    lVar17 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*plVar11 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    bVar4 = FUN_01f801dc(lVar17,0,0);
    lVar17 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
    if (lVar13 == 0) {
      lVar20 = 0;
    }
    else {
      uVar19 = *(undefined8 *)PTR_DAT_027b1ca8;
      lVar20 = thunk_FUN_0124baac(lVar13,uVar19);
      if (lVar20 == 0) {
LAB_01f93580:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(lVar13,uVar19);
      }
    }
    uVar19 = *(undefined8 *)(lVar15 + 0x18);
    FUN_01fab77c(lVar17,0);
    *(long *)(lVar17 + 0x10) = lVar20;
    thunk_FUN_01286abc((long *)(lVar17 + 0x10),lVar20);
    *(int *)(lVar17 + 0x18) = (int)uVar19;
    *(byte *)(lVar17 + 0x1c) = bVar4 & 1;
    *in_stack_00000010 = lVar17;
    thunk_FUN_01286abc(in_stack_00000010,lVar17);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
    lVar13 = *plVar18;
    lVar15 = *unaff_x28;
    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f94678(lVar13,lVar15);
    plVar11 = (long *)PTR_DAT_027b32e0;
  }
  if (*(uint *)(in_stack_00000040 + 3) <= uVar6) goto LAB_01f9340c;
  plVar8 = in_stack_00000040 + (long)(int)uVar6 + 4;
  plVar18 = (long *)*plVar8;
  if (((plVar18 == (long *)0x0) ||
      (lVar13 = (**(code **)(*plVar18 + 0x378))(plVar18,*(undefined8 *)(*plVar18 + 0x380)),
      lVar13 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
  iVar5 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar13 + 0x18) == iVar5) {
    if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
    lVar15 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*plVar11 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar9 = FUN_01f801dc(lVar15,0,0);
    if ((uVar9 & 1) != 0) {
      plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar13 + 0x18))
      ;
      uVar7 = *(int *)(lVar13 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar11,0,uVar7,0);
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
      lVar15 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar13 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if (lVar13 == 0) goto LAB_01f92644;
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_01f9340c;
      *(undefined4 *)(lVar13 + 0x20) = 1;
      lVar13 = thunk_FUN_01f894b8(lVar15,lVar13,0);
      if (plVar11 == (long *)0x0) goto LAB_01f92644;
      if ((lVar13 != 0) &&
         (lVar15 = thunk_FUN_0124baac(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_01f9340c;
      plVar18 = plVar11 + (long)(int)uVar7 + 4;
      *plVar18 = lVar13;
      thunk_FUN_01286abc(plVar18,lVar13);
      if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_01f9340c;
      lVar13 = *unaff_x28;
      if (lVar13 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_01f9340c;
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) goto LAB_01f92644;
      bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
      if ((*(byte *)(*plVar18 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_027b3f80)
         ) {
LAB_01f942dc:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(plVar18);
      }
      FUN_01f89750(plVar18,*(undefined8 *)(lVar13 + (long)(int)uVar7 * 8 + 0x20),0,0);
      goto FUN_01f94198;
    }
  }
  else {
    if (iVar5 < *(int *)(lVar13 + 0x18)) {
      plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
      lVar15 = *unaff_x28;
      if (lVar15 == 0) goto LAB_01f92644;
      uVar9 = 0;
      plVar18 = plVar11 + 4;
      do {
        if ((long)(int)*(uint *)(lVar15 + 0x18) <= (long)uVar9) {
          uVar7 = *(uint *)(lVar13 + 0x18);
          if ((int)uVar9 < (int)(uVar7 - 1)) {
            do {
              if (uVar7 <= (uint)uVar9) goto LAB_01f9340c;
              plVar12 = *(long **)(lVar13 + 0x20 + uVar9 * 8);
              if ((plVar12 == (long *)0x0) ||
                 (lVar15 = (**(code **)(*plVar12 + 0x1f8))
                                     (plVar12,*(undefined8 *)(*plVar12 + 0x200)),
                 plVar11 == (long *)0x0)) goto LAB_01f92644;
              if ((lVar15 != 0) &&
                 (lVar17 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0)
                 ) goto LAB_01f941d8;
              if (*(uint *)(plVar11 + 3) <= (uint)uVar9) goto LAB_01f9340c;
              *plVar18 = lVar15;
              thunk_FUN_01286abc(plVar18,lVar15);
              uVar7 = *(uint *)(lVar13 + 0x18);
              uVar9 = uVar9 + 1;
              plVar18 = plVar18 + 1;
            } while ((int)uVar9 < (int)(uVar7 - 1));
          }
          if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
          if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
          lVar15 = in_stack_00000038[(long)(int)uVar6 + 4];
          if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar14 = FUN_01f801dc(lVar15,0,0);
          uVar7 = (uint)uVar9;
          if ((uVar14 & 1) == 0) {
            if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_01f9340c;
            plVar18 = *(long **)(lVar13 + (long)(int)uVar7 * 8 + 0x20);
            if ((plVar18 == (long *)0x0) ||
               (lVar13 = (**(code **)(*plVar18 + 0x1f8))(plVar18,*(undefined8 *)(*plVar18 + 0x200)),
               plVar11 == (long *)0x0)) goto LAB_01f92644;
            if ((lVar13 != 0) &&
               (lVar15 = thunk_FUN_0124baac(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
            goto LAB_01f941d8;
            uVar16 = *(uint *)(plVar11 + 3);
          }
          else {
            if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
            lVar13 = in_stack_00000038[(long)(int)uVar6 + 4];
            uVar19 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
            lVar13 = thunk_FUN_01f894b8(lVar13,uVar19,0);
            if (plVar11 == (long *)0x0) goto LAB_01f92644;
            if ((lVar13 != 0) &&
               (lVar15 = thunk_FUN_0124baac(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
            goto LAB_01f941d8;
            uVar16 = *(uint *)(plVar11 + 3);
          }
          if (uVar16 <= uVar7) goto LAB_01f9340c;
          plVar11[(long)(int)uVar7 + 4] = lVar13;
          thunk_FUN_01286abc(plVar11 + (long)(int)uVar7 + 4,lVar13);
FUN_01f94198:
          *unaff_x28 = (long)plVar11;
          thunk_FUN_01286abc(unaff_x28,plVar11);
          goto OVRPlugin_UnityOpenXR__OnSessionExiting;
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_01f9340c;
        if (plVar11 == (long *)0x0) goto LAB_01f92644;
        lVar15 = *(long *)(lVar15 + uVar9 * 8 + 0x20);
        if ((lVar15 != 0) &&
           (lVar17 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0))
        goto LAB_01f941d8;
        if (*(uint *)(plVar11 + 3) <= uVar9) goto LAB_01f9340c;
        *plVar18 = lVar15;
        thunk_FUN_01286abc(plVar18,lVar15);
        lVar15 = *unaff_x28;
        uVar9 = uVar9 + 1;
        plVar18 = plVar18 + 1;
        if (lVar15 == 0) goto LAB_01f92644;
      } while( true );
    }
    if (*(uint *)(in_stack_00000040 + 3) <= uVar6) goto LAB_01f9340c;
    plVar11 = (long *)*plVar8;
    if (plVar11 == (long *)0x0) goto LAB_01f92644;
    uVar7 = (**(code **)(*plVar11 + 600))(plVar11,*(undefined8 *)(*plVar11 + 0x260));
    if ((uVar7 >> 1 & 1) == 0) {
      plVar11 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar13 + 0x18))
      ;
      uVar7 = *(int *)(lVar13 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar11,0,uVar7,0);
      if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
      lVar15 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar13 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if ((*unaff_x28 == 0) || (lVar13 == 0)) goto LAB_01f92644;
      if (*(int *)(lVar13 + 0x18) == 0) goto LAB_01f9340c;
      *(uint *)(lVar13 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar7;
      lVar13 = thunk_FUN_01f894b8(lVar15,lVar13,0);
      if (plVar11 == (long *)0x0) goto LAB_01f92644;
      if ((lVar13 != 0) &&
         (lVar15 = thunk_FUN_0124baac(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_01f9340c;
      plVar18 = plVar11 + (long)(int)uVar7 + 4;
      *plVar18 = lVar13;
      thunk_FUN_01286abc(plVar18,lVar13);
      if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_01f9340c;
      lVar13 = *unaff_x28;
      if (lVar13 == 0) goto LAB_01f92644;
      plVar18 = (long *)*plVar18;
      if (plVar18 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar18 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
      }
      FUN_01f89ca0(lVar13,uVar7,plVar18,0,*(int *)(lVar13 + 0x18) - uVar7,0);
      *unaff_x28 = (long)plVar11;
      thunk_FUN_01286abc(unaff_x28,plVar11);
    }
  }
OVRPlugin_UnityOpenXR__OnSessionExiting:
  if (uVar6 < *(uint *)(in_stack_00000040 + 3)) goto LAB_01f941b4;
  goto LAB_01f9340c;
  while( true ) {
    lVar15 = *(long *)(lVar15 + uVar9 * 8 + 0x20);
    if ((lVar15 != 0) &&
       (lVar17 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar11 + 3) <= uVar9) goto LAB_01f9340c;
    *plVar18 = lVar15;
    thunk_FUN_01286abc(plVar18,lVar15);
    lVar15 = *unaff_x28;
    uVar9 = uVar9 + 1;
    plVar18 = plVar18 + 1;
    if (lVar15 == 0) break;
LAB_01f937fc:
    if ((long)(int)*(uint *)(lVar15 + 0x18) <= (long)uVar9) {
      uVar6 = *(uint *)(lVar13 + 0x18);
      if ((int)(uVar6 - 1) <= (int)uVar9) goto LAB_01f93a68;
      goto LAB_01f939f4;
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_01f9340c;
    if (plVar11 == (long *)0x0) break;
  }
  goto LAB_01f92644;
code_r0x01f9281c:
  if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_01f9340c;
  param_1 = *plVar11;
  in_x9 = &PTR_DAT_027c1000;
  unaff_x22 = (long *)*unaff_x20;
  goto code_r0x01f92834;
  while( true ) {
    plVar12 = *(long **)(lVar13 + 0x20 + uVar9 * 8);
    if ((plVar12 == (long *)0x0) ||
       (lVar15 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200)),
       plVar11 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar15 != 0) &&
       (lVar17 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar11 + 3) <= (uint)uVar9) goto LAB_01f9340c;
    *plVar18 = lVar15;
    thunk_FUN_01286abc(plVar18,lVar15);
    uVar6 = *(uint *)(lVar13 + 0x18);
    uVar9 = uVar9 + 1;
    plVar18 = plVar18 + 1;
    if ((int)(uVar6 - 1) <= (int)uVar9) break;
LAB_01f939f4:
    if (uVar6 <= (uint)uVar9) goto LAB_01f9340c;
  }
LAB_01f93a68:
  if (in_stack_00000038 != (long *)0x0) {
    if ((int)in_stack_00000038[3] != 0) {
      lVar15 = in_stack_00000038[4];
      if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar14 = FUN_01f801dc(lVar15,0,0);
      uVar6 = (uint)uVar9;
      if ((uVar14 & 1) == 0) {
        if (*(uint *)(lVar13 + 0x18) <= uVar6) goto LAB_01f9340c;
        plVar18 = *(long **)(lVar13 + (long)(int)uVar6 * 8 + 0x20);
        if ((plVar18 == (long *)0x0) ||
           (lVar13 = (**(code **)(*plVar18 + 0x1f8))(plVar18,*(undefined8 *)(*plVar18 + 0x200)),
           plVar11 == (long *)0x0)) goto LAB_01f92644;
        if ((lVar13 != 0) &&
           (lVar15 = thunk_FUN_0124baac(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0))
        goto LAB_01f941d8;
        uVar7 = *(uint *)(plVar11 + 3);
      }
      else {
        if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
        lVar13 = in_stack_00000038[4];
        uVar19 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
        lVar13 = thunk_FUN_01f894b8(lVar13,uVar19,0);
        if (plVar11 == (long *)0x0) goto LAB_01f92644;
        if ((lVar13 != 0) &&
           (lVar15 = thunk_FUN_0124baac(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar15 == 0)) {
LAB_01f941d8:
          uVar19 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar19,0);
        }
        uVar7 = *(uint *)(plVar11 + 3);
      }
      if (uVar6 < uVar7) {
        plVar11[(long)(int)uVar6 + 4] = lVar13;
        thunk_FUN_01286abc(plVar11 + (long)(int)uVar6 + 4,lVar13);
LAB_01f94118:
        *unaff_x28 = (long)plVar11;
        thunk_FUN_01286abc(unaff_x28,plVar11);
LAB_01f94128:
        if ((int)in_stack_00000040[3] != 0) {
LAB_01f941b4:
          return *plVar8;
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


