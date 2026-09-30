/*
FUNCTION_NAME: OVRPlugin.Media$$.ctor
ENTRY_POINT: 01f928b0
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


long OVRPlugin_Media___ctor(void)

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
  long *plVar10;
  long *plVar11;
  uint in_w8;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long *unaff_x20;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar19;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 uVar20;
  long *unaff_x28;
  long lVar21;
  long *in_stack_00000010;
  long in_stack_00000020;
  long *in_stack_00000028;
  uint in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *plStack0000000000000048;
  uint in_stack_00000050;
  long *in_stack_00000058;
  
code_r0x01f928b0:
  uVar6 = (uint)unaff_x24;
  uVar9 = unaff_x25;
  if (in_w8 == uVar6) goto LAB_01f9323c;
LAB_01f93214:
  do {
    uVar6 = *(uint *)(in_stack_00000040 + 3);
    uVar12 = (ulong)uVar6;
    unaff_x25 = uVar9 + 1;
    if ((long)(int)uVar6 <= (long)unaff_x25) {
      if (in_stack_00000030 != 1) {
        if (in_stack_00000030 == 0) {
          uVar18 = thunk_FUN_01279b34(PTR_DAT_027c1bf0);
          thunk_FUN_01279b34(PTR_DAT_027b3ed0);
          uVar20 = thunk_FUN_0124bba8();
          FUN_01f6b058(uVar20,uVar18,0);
          goto LAB_01f9426c;
        }
        if ((int)in_stack_00000030 < 2) {
          uVar6 = 0;
          goto LAB_01f934c8;
        }
        if (uVar6 == 0) goto LAB_01f9340c;
        lVar14 = 0;
        lVar13 = 0;
        uVar6 = 0;
        bVar2 = false;
        goto LAB_01f932e8;
      }
      if (in_stack_00000020 != 0) {
        if (unaff_x23 == 0) goto LAB_01f92644;
        if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
        if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_01f92644;
        lVar14 = FUN_01f8a1a8(*(long *)(unaff_x23 + 0x20),0);
        lVar13 = *unaff_x28;
        if ((lVar13 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_01f92644;
        if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
        lVar16 = in_stack_00000038[4];
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        bVar4 = FUN_01f801dc(lVar16,0,0);
        lVar16 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
        if (lVar14 == 0) {
          lVar19 = 0;
        }
        else {
          uVar18 = *(undefined8 *)PTR_DAT_027b1ca8;
          lVar19 = thunk_FUN_0124baac(lVar14,uVar18);
          if (lVar19 == 0) goto LAB_01f93580;
        }
        uVar18 = *(undefined8 *)(lVar13 + 0x18);
        FUN_01fab77c(lVar16,0);
        *(long *)(lVar16 + 0x10) = lVar19;
        thunk_FUN_01286abc((long *)(lVar16 + 0x10),lVar19);
        *(int *)(lVar16 + 0x18) = (int)uVar18;
        *(byte *)(lVar16 + 0x1c) = bVar4 & 1;
        *in_stack_00000010 = lVar16;
        thunk_FUN_01286abc(in_stack_00000010,lVar16);
        if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
        uVar18 = *(undefined8 *)(unaff_x23 + 0x20);
        lVar14 = *unaff_x28;
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        FUN_01f94678(uVar18,lVar14);
        uVar6 = (uint)in_stack_00000040[3];
        unaff_x22 = (long *)PTR_DAT_027b32e0;
      }
      if (uVar6 == 0) goto LAB_01f9340c;
      plVar8 = in_stack_00000040 + 4;
      plVar17 = (long *)*plVar8;
      if (((plVar17 == (long *)0x0) ||
          (lVar14 = (**(code **)(*plVar17 + 0x378))(plVar17,*(undefined8 *)(*plVar17 + 0x380)),
          lVar14 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
      iVar5 = *(int *)(*unaff_x28 + 0x18);
      if (*(int *)(lVar14 + 0x18) == iVar5) {
        if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
        if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
        lVar13 = in_stack_00000038[4];
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar9 = FUN_01f801dc(lVar13,0,0);
        if ((uVar9 & 1) == 0) goto LAB_01f94128;
        plVar17 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,
                                       *(undefined4 *)(lVar14 + 0x18));
        uVar6 = *(int *)(lVar14 + 0x18) - 1;
        FUN_01f89ca0(*unaff_x28,0,plVar17,0,uVar6,0);
        if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
        lVar13 = in_stack_00000038[4];
        lVar14 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
        if (lVar14 == 0) goto LAB_01f92644;
        if (*(int *)(lVar14 + 0x18) == 0) goto LAB_01f9340c;
        *(undefined4 *)(lVar14 + 0x20) = 1;
        lVar14 = thunk_FUN_01f894b8(lVar13,lVar14,0);
        if (plVar17 == (long *)0x0) goto LAB_01f92644;
        if ((lVar14 != 0) &&
           (lVar13 = thunk_FUN_0124baac(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar13 == 0))
        goto LAB_01f941d8;
        if (*(uint *)(plVar17 + 3) <= uVar6) goto LAB_01f9340c;
        plVar10 = plVar17 + (long)(int)uVar6 + 4;
        *plVar10 = lVar14;
        thunk_FUN_01286abc(plVar10,lVar14);
        if (*(uint *)(plVar17 + 3) <= uVar6) goto LAB_01f9340c;
        lVar14 = *unaff_x28;
        if (lVar14 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_01f9340c;
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) goto LAB_01f92644;
        bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
        FUN_01f89750(plVar10,*(undefined8 *)(lVar14 + (long)(int)uVar6 * 8 + 0x20),0,0);
        goto LAB_01f94118;
      }
      if (iVar5 < *(int *)(lVar14 + 0x18)) {
        plVar17 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
        lVar13 = *unaff_x28;
        if (lVar13 == 0) goto LAB_01f92644;
        uVar9 = 0;
        plVar10 = plVar17 + 4;
        goto LAB_01f937fc;
      }
      if ((int)in_stack_00000040[3] == 0) goto LAB_01f9340c;
      plVar17 = (long *)*plVar8;
      if (plVar17 == (long *)0x0) goto LAB_01f92644;
      uVar6 = (**(code **)(*plVar17 + 600))(plVar17,*(undefined8 *)(*plVar17 + 0x260));
      if ((uVar6 >> 1 & 1) != 0) goto LAB_01f94128;
      plVar17 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar14 + 0x18))
      ;
      uVar6 = *(int *)(lVar14 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar17,0,uVar6,0);
      if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
      if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
      lVar13 = in_stack_00000038[4];
      lVar14 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if ((*unaff_x28 == 0) || (lVar14 == 0)) goto LAB_01f92644;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_01f9340c;
      *(uint *)(lVar14 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar6;
      lVar14 = thunk_FUN_01f894b8(lVar13,lVar14,0);
      if (plVar17 == (long *)0x0) goto LAB_01f92644;
      if ((lVar14 != 0) &&
         (lVar13 = thunk_FUN_0124baac(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar13 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar17 + 3) <= uVar6) goto LAB_01f9340c;
      plVar10 = plVar17 + (long)(int)uVar6 + 4;
      *plVar10 = lVar14;
      thunk_FUN_01286abc(plVar10,lVar14);
      if (*(uint *)(plVar17 + 3) <= uVar6) goto LAB_01f9340c;
      lVar14 = *unaff_x28;
      if (lVar14 == 0) goto LAB_01f92644;
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
      }
      FUN_01f89ca0(lVar14,uVar6,plVar10,0,*(int *)(lVar14 + 0x18) - uVar6,0);
      *unaff_x28 = (long)plVar17;
      thunk_FUN_01286abc(unaff_x28,plVar17);
      goto LAB_01f94128;
    }
    if (uVar12 <= unaff_x25) goto LAB_01f9340c;
    in_stack_00000028 = in_stack_00000040 + uVar9 + 5;
    uVar12 = FUN_01ee539c(*in_stack_00000028,0,0);
    uVar9 = unaff_x25;
  } while ((uVar12 & 1) != 0);
  if (*(uint *)(in_stack_00000040 + 3) <= unaff_x25) goto LAB_01f9340c;
  plVar17 = (long *)*in_stack_00000028;
  if ((plVar17 == (long *)0x0) ||
     (unaff_x27 = (**(code **)(*plVar17 + 0x378))(plVar17,*(undefined8 *)(*plVar17 + 0x380)),
     unaff_x27 == 0)) goto LAB_01f92644;
  uVar12 = *(ulong *)(unaff_x27 + 0x18);
  lVar14 = *unaff_x28;
  if (uVar12 == 0) {
    if (lVar14 == 0) goto LAB_01f92644;
    if (*(long *)(lVar14 + 0x18) != 0) {
      if (*(uint *)(in_stack_00000040 + 3) <= unaff_x25) goto LAB_01f9340c;
      plVar17 = (long *)*in_stack_00000028;
      if (plVar17 == (long *)0x0) goto LAB_01f92644;
      uVar6 = (**(code **)(*plVar17 + 600))(plVar17,*(undefined8 *)(*plVar17 + 0x260));
      if ((uVar6 >> 1 & 1) == 0) goto LAB_01f93214;
    }
    if (unaff_x23 == 0) goto LAB_01f92644;
    if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) ||
       (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000030)) goto LAB_01f9340c;
    lVar14 = (long)(int)in_stack_00000030;
    *(undefined8 *)(unaff_x23 + lVar14 * 8 + 0x20) =
         *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20);
    thunk_FUN_01286abc();
    uVar6 = *(uint *)(in_stack_00000040 + 3);
    if (uVar6 <= unaff_x25) goto LAB_01f9340c;
    lVar13 = *in_stack_00000028;
joined_r0x01f927d4:
    if (lVar13 != 0) {
      lVar16 = thunk_FUN_0124baac(lVar13,*(undefined8 *)(*in_stack_00000040 + 0x40));
      if (lVar16 == 0) goto LAB_01f941d8;
      uVar6 = (uint)in_stack_00000040[3];
    }
    if (uVar6 <= in_stack_00000030) goto LAB_01f9340c;
    in_stack_00000040[lVar14 + 4] = lVar13;
    in_stack_00000030 = in_stack_00000030 + 1;
    thunk_FUN_01286abc(in_stack_00000040 + lVar14 + 4,lVar13);
    unaff_x22 = (long *)PTR_DAT_027b32e0;
    uVar9 = unaff_x25;
    goto LAB_01f93214;
  }
  if (lVar14 == 0) goto LAB_01f92644;
  uVar7 = *(uint *)(lVar14 + 0x18);
  iVar5 = (int)uVar12;
  if ((int)uVar7 < iVar5) {
    uVar6 = iVar5 - 1;
    if ((int)uVar7 < (int)uVar6) {
      plVar17 = (long *)(unaff_x27 + (long)(int)uVar7 * 8 + 0x20);
      do {
        if ((uint)uVar12 <= uVar7) goto LAB_01f9340c;
        plVar8 = (long *)*plVar17;
        if (plVar8 == (long *)0x0) goto LAB_01f92644;
        lVar14 = (**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200));
        puVar3 = PTR_DAT_027baa38;
        lVar13 = *(long *)PTR_DAT_027baa38;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01220628(lVar13);
          lVar13 = *(long *)puVar3;
        }
        if (lVar14 == **(long **)(lVar13 + 0xb8)) {
          uVar12 = (ulong)*(uint *)(unaff_x27 + 0x18);
          uVar6 = *(uint *)(unaff_x27 + 0x18) - 1;
          unaff_x28 = in_stack_00000058;
          break;
        }
        uVar12 = *(ulong *)(unaff_x27 + 0x18);
        uVar7 = uVar7 + 1;
        plVar17 = plVar17 + 1;
        uVar6 = (int)uVar12 - 1;
        unaff_x28 = in_stack_00000058;
      } while ((int)uVar7 < (int)uVar6);
    }
    if (uVar7 != uVar6) goto LAB_01f93214;
    if ((uint)uVar12 <= uVar7) goto LAB_01f9340c;
    plVar8 = (long *)(unaff_x27 + (long)(int)uVar7 * 8 + 0x20);
    plVar17 = (long *)*plVar8;
    if (plVar17 == (long *)0x0) goto LAB_01f92644;
    lVar14 = (**(code **)(*plVar17 + 0x1f8))(plVar17,*(undefined8 *)(*plVar17 + 0x200));
    puVar3 = PTR_DAT_027baa38;
    lVar13 = *(long *)PTR_DAT_027baa38;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01220628(lVar13);
      lVar13 = *(long *)puVar3;
    }
    if (lVar14 == **(long **)(lVar13 + 0xb8)) {
      if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_01f9340c;
      plVar17 = (long *)*plVar8;
      if ((plVar17 == (long *)0x0) ||
         (lVar14 = (**(code **)(*plVar17 + 0x1d8))(plVar17,*(undefined8 *)(*plVar17 + 0x1e0)),
         lVar14 == 0)) goto LAB_01f92644;
      uVar12 = FUN_01f80ec8(lVar14,0);
      if ((uVar12 & 1) == 0) goto LAB_01f93214;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_01f9340c;
      plVar17 = (long *)*plVar8;
      uVar18 = *(undefined8 *)PTR_DAT_027c1be0;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar18 = FUN_01f7d8a0(uVar18,0);
      if (plVar17 == (long *)0x0) goto LAB_01f92644;
      uVar12 = (**(code **)(*plVar17 + 0x208))(plVar17,uVar18,1,*(undefined8 *)(*plVar17 + 0x210));
      unaff_x22 = (long *)PTR_DAT_027b32e0;
      if ((uVar12 & 1) == 0) goto LAB_01f93214;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_01f9340c;
      plVar8 = (long *)*plVar8;
      if ((plVar8 == (long *)0x0) ||
         (plVar17 = (long *)(**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
         plVar17 == (long *)0x0)) goto LAB_01f92644;
LAB_01f93264:
      plStack0000000000000048 =
           (long *)(**(code **)(*plVar17 + 0x408))(plVar17,*(undefined8 *)(*plVar17 + 0x410));
      goto LAB_01f92a2c;
    }
  }
  else {
    if (iVar5 == 0) goto LAB_01f9340c;
    uVar6 = iVar5 - 1;
    unaff_x24 = (long)(int)uVar6;
    unaff_x20 = (long *)(unaff_x27 + unaff_x24 * 8 + 0x20);
    plVar17 = (long *)*unaff_x20;
    if ((plVar17 == (long *)0x0) ||
       (lVar14 = (**(code **)(*plVar17 + 0x1d8))(plVar17,*(undefined8 *)(*plVar17 + 0x1e0)),
       lVar14 == 0)) goto LAB_01f92644;
    uVar12 = FUN_01f80ec8(lVar14,0);
    if (iVar5 < (int)uVar7) {
      if ((uVar12 & 1) == 0) goto LAB_01f93214;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_01f9340c;
      plVar17 = (long *)*unaff_x20;
      uVar18 = *(undefined8 *)PTR_DAT_027c1be0;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar18 = FUN_01f7d8a0(uVar18,0);
      if (plVar17 == (long *)0x0) goto LAB_01f92644;
      uVar12 = (**(code **)(*plVar17 + 0x208))(plVar17,uVar18,1,*(undefined8 *)(*plVar17 + 0x210));
      unaff_x22 = (long *)PTR_DAT_027b32e0;
      if ((uVar12 & 1) != 0) goto code_r0x01f92878;
      goto LAB_01f93214;
    }
    if ((uVar12 & 1) != 0) {
      if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_01f9340c;
      plVar17 = (long *)*unaff_x20;
      uVar18 = *(undefined8 *)PTR_DAT_027c1be0;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar18 = FUN_01f7d8a0(uVar18,0);
      if (plVar17 == (long *)0x0) goto LAB_01f92644;
      uVar9 = (**(code **)(*plVar17 + 0x208))(plVar17,uVar18,1,*(undefined8 *)(*plVar17 + 0x210));
      unaff_x22 = (long *)PTR_DAT_027b32e0;
      if ((uVar9 & 1) == 0) {
        plStack0000000000000048 = (long *)0x0;
        goto LAB_01f92a2c;
      }
      if (unaff_x23 == 0) goto LAB_01f92644;
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
      lVar14 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
      if (lVar14 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_01f9340c;
      if (*(uint *)(lVar14 + unaff_x24 * 4 + 0x20) != uVar6) goto LAB_01f92a28;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_01f9340c;
      plVar17 = (long *)*unaff_x20;
      if ((plVar17 == (long *)0x0) ||
         (plVar17 = (long *)(**(code **)(*plVar17 + 0x1d8))
                                      (plVar17,*(undefined8 *)(*plVar17 + 0x1e0)), unaff_x26 == 0))
      goto LAB_01f92644;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_01f9340c;
      if (plVar17 == (long *)0x0) goto LAB_01f92644;
      uVar9 = (**(code **)(*plVar17 + 0x288))
                        (plVar17,*(undefined8 *)(unaff_x26 + unaff_x24 * 8 + 0x20),
                         *(undefined8 *)(*plVar17 + 0x290));
      if ((uVar9 & 1) == 0) {
LAB_01f9323c:
        if (uVar6 < *(uint *)(unaff_x27 + 0x18)) {
          plVar17 = (long *)*unaff_x20;
          if ((plVar17 != (long *)0x0) &&
             (plVar17 = (long *)(**(code **)(*plVar17 + 0x1d8))
                                          (plVar17,*(undefined8 *)(*plVar17 + 0x1e0)),
             plVar17 != (long *)0x0)) goto LAB_01f93264;
          goto LAB_01f92644;
        }
        goto LAB_01f9340c;
      }
    }
  }
LAB_01f92a28:
  plStack0000000000000048 = (long *)0x0;
LAB_01f92a2c:
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar9 = FUN_01f801dc(plStack0000000000000048,0,0);
  if ((uVar9 & 1) == 0) {
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
    uVar15 = 0;
    plVar17 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
    do {
      if (*(uint *)(unaff_x27 + 0x18) <= uVar15) goto LAB_01f9340c;
      lVar14 = (long)(int)uVar15;
      plVar8 = *(long **)(unaff_x27 + lVar14 * 8 + 0x20);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
         plVar8 == (long *)0x0)) goto LAB_01f92644;
      uVar9 = FUN_01f80ed8(plVar8,0);
      if ((uVar9 & 1) != 0) {
        plVar8 = (long *)(**(code **)(*plVar8 + 0x408))(plVar8,*(undefined8 *)(*plVar8 + 0x410));
      }
      if (unaff_x23 == 0) goto LAB_01f92644;
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
      lVar13 = *plVar17;
      if (lVar13 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_01f9340c;
      if (unaff_x26 == 0) goto LAB_01f92644;
      uVar7 = *(uint *)(lVar13 + lVar14 * 4 + 0x20);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
      uVar18 = *(undefined8 *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar9 = FUN_01f7f404(plVar8,uVar18,0);
      if ((uVar9 & 1) == 0) {
        if ((in_stack_00000050 >> 0x12 & 1) != 0) {
          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
          lVar13 = *plVar17;
          if (lVar13 == 0) goto LAB_01f92644;
          if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_01f9340c;
          lVar16 = *in_stack_00000058;
          if (lVar16 == 0) goto LAB_01f92644;
          uVar7 = *(uint *)(lVar13 + lVar14 * 4 + 0x20);
          if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_01f9340c;
          lVar13 = *unaff_x22;
          lVar16 = *(long *)(lVar16 + (long)(int)uVar7 * 8 + 0x20);
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01220628();
            lVar13 = *unaff_x22;
          }
          if (lVar16 == *(long *)(*(long *)(lVar13 + 0xb8) + 0x18)) goto LAB_01f92e70;
        }
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
        lVar13 = *plVar17;
        if (lVar13 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_01f9340c;
        lVar16 = *in_stack_00000058;
        if (lVar16 == 0) goto LAB_01f92644;
        uVar7 = *(uint *)(lVar13 + lVar14 * 4 + 0x20);
        if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_01f9340c;
        if (*(long *)(lVar16 + (long)(int)uVar7 * 8 + 0x20) != 0) {
          uVar18 = *(undefined8 *)PTR_DAT_027b5b48;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar18 = FUN_01f7d8a0(uVar18,0);
          uVar9 = FUN_01f7f404(plVar8,uVar18,0);
          if ((uVar9 & 1) == 0) {
            if (plVar8 == (long *)0x0) goto LAB_01f92644;
            uVar9 = FUN_01f81644(plVar8,0);
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
            lVar13 = *plVar17;
            if (lVar13 == 0) goto LAB_01f92644;
            if ((*(uint *)(lVar13 + 0x18) <= uVar15) ||
               (uVar7 = *(uint *)(lVar13 + lVar14 * 4 + 0x20), *(uint *)(unaff_x26 + 0x18) <= uVar7)
               ) goto LAB_01f9340c;
            uVar18 = *(undefined8 *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar12 = FUN_01f7f404(uVar18,0,0);
            unaff_x22 = (long *)PTR_DAT_027b32e0;
            uVar7 = uVar15;
            if ((uVar9 & 1) == 0) {
              if ((uVar12 & 1) == 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                lVar13 = *plVar17;
                if (lVar13 == 0) goto LAB_01f92644;
                if ((*(uint *)(lVar13 + 0x18) <= uVar15) ||
                   (uVar1 = *(uint *)(lVar13 + lVar14 * 4 + 0x20),
                   *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_01f9340c;
                uVar9 = (**(code **)(*plVar8 + 0x288))
                                  (plVar8,*(undefined8 *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20),
                                   *(undefined8 *)(*plVar8 + 0x290));
                if ((uVar9 & 1) == 0) {
                  if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                  lVar13 = *plVar17;
                  if (lVar13 == 0) goto LAB_01f92644;
                  if ((*(uint *)(lVar13 + 0x18) <= uVar15) ||
                     (uVar1 = *(uint *)(lVar13 + lVar14 * 4 + 0x20),
                     *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_01f9340c;
                  lVar13 = *(long *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20);
                  if (lVar13 == 0) goto LAB_01f92644;
                  uVar9 = FUN_01f81468(lVar13,0);
                  unaff_x28 = in_stack_00000058;
                  if ((uVar9 & 1) != 0) {
                    if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
                      lVar13 = *plVar17;
                      if (lVar13 != 0) {
                        if (uVar15 < *(uint *)(lVar13 + 0x18)) {
                          lVar16 = *in_stack_00000058;
                          if (lVar16 != 0) {
                            uVar1 = *(uint *)(lVar13 + lVar14 * 4 + 0x20);
                            if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                              uVar9 = (**(code **)(*plVar8 + 0x828))
                                                (plVar8,*(undefined8 *)
                                                         (lVar16 + (long)(int)uVar1 * 8 + 0x20),
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
              if ((uVar12 & 1) != 0) break;
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
              lVar13 = *plVar17;
              if (lVar13 == 0) goto LAB_01f92644;
              if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_01f9340c;
              lVar16 = *in_stack_00000058;
              if (lVar16 == 0) goto LAB_01f92644;
              uVar1 = *(uint *)(lVar13 + lVar14 * 4 + 0x20);
              if (*(uint *)(lVar16 + 0x18) <= uVar1) goto LAB_01f9340c;
              uVar18 = *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
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
              uVar9 = FUN_01f9451c(uVar18,plVar8);
              unaff_x22 = (long *)PTR_DAT_027b32e0;
joined_r0x01f92e6c:
              unaff_x28 = in_stack_00000058;
              if ((uVar9 & 1) == 0) break;
            }
          }
        }
      }
LAB_01f92e70:
      uVar15 = uVar15 + 1;
      unaff_x28 = in_stack_00000058;
      uVar7 = uVar6;
    } while (uVar6 != uVar15);
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar9 = FUN_01f801dc(plStack0000000000000048,0,0);
  if (((uVar9 & 1) != 0) && (uVar7 == *(int *)(unaff_x27 + 0x18) - 1U)) {
    lVar14 = *unaff_x28;
    if (lVar14 == 0) goto LAB_01f92644;
    lVar13 = (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3) + 0x20;
    while ((int)uVar7 < *(int *)(lVar14 + 0x18)) {
      if ((plStack0000000000000048 == (long *)0x0) ||
         (uVar9 = FUN_01f81644(plStack0000000000000048,0), unaff_x26 == 0)) goto LAB_01f92644;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
      uVar18 = *(undefined8 *)(unaff_x26 + lVar13);
      if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar12 = FUN_01f7f404(uVar18,0,0);
      unaff_x22 = (long *)PTR_DAT_027b32e0;
      if ((uVar9 & 1) == 0) {
        if ((uVar12 & 1) == 0) {
          if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
          uVar9 = (**(code **)(*plStack0000000000000048 + 0x288))
                            (plStack0000000000000048,*(undefined8 *)(unaff_x26 + lVar13),
                             *(undefined8 *)(*plStack0000000000000048 + 0x290));
          if ((uVar9 & 1) == 0) {
            if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
            if (*(long *)(unaff_x26 + lVar13) == 0) goto LAB_01f92644;
            uVar9 = FUN_01f81468(*(long *)(unaff_x26 + lVar13),0);
            if ((uVar9 & 1) != 0) {
              lVar14 = *unaff_x28;
              if (lVar14 != 0) {
                if (uVar7 < *(uint *)(lVar14 + 0x18)) {
                  uVar9 = (**(code **)(*plStack0000000000000048 + 0x828))
                                    (plStack0000000000000048,*(undefined8 *)(lVar14 + lVar13),
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
        if ((uVar12 & 1) != 0) break;
        lVar14 = *unaff_x28;
        if (lVar14 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_01f9340c;
        uVar18 = *(undefined8 *)(lVar14 + lVar13);
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
        uVar9 = FUN_01f9451c(uVar18,plStack0000000000000048);
        unaff_x22 = (long *)PTR_DAT_027b32e0;
joined_r0x01f93040:
        if ((uVar9 & 1) == 0) break;
      }
      lVar14 = *unaff_x28;
      uVar7 = uVar7 + 1;
      lVar13 = lVar13 + 8;
      if (lVar14 == 0) goto LAB_01f92644;
    }
  }
  if (*unaff_x28 == 0) goto LAB_01f92644;
  uVar9 = unaff_x25;
  if (uVar7 == *(uint *)(*unaff_x28 + 0x18)) {
    if (unaff_x23 != 0) {
      if ((unaff_x25 < *(uint *)(unaff_x23 + 0x18)) &&
         (in_stack_00000030 < *(uint *)(unaff_x23 + 0x18))) {
        lVar14 = (long)(int)in_stack_00000030;
        *(undefined8 *)(unaff_x23 + lVar14 * 8 + 0x20) =
             *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20);
        thunk_FUN_01286abc();
        if (in_stack_00000038 != (long *)0x0) {
          if ((plStack0000000000000048 == (long *)0x0) ||
             (lVar13 = thunk_FUN_0124baac(plStack0000000000000048,
                                          *(undefined8 *)(*in_stack_00000038 + 0x40)), lVar13 != 0))
          {
            if (in_stack_00000030 < *(uint *)(in_stack_00000038 + 3)) {
              in_stack_00000038[lVar14 + 4] = (long)plStack0000000000000048;
              thunk_FUN_01286abc(in_stack_00000038 + lVar14 + 4,plStack0000000000000048);
              uVar6 = *(uint *)(in_stack_00000040 + 3);
              if (unaff_x25 < uVar6) {
                lVar13 = *in_stack_00000028;
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
  if (((((uint)in_stack_00000038[3] <= uVar6) || (uVar9 = lVar14 + 1, uVar12 <= uVar9)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar9)) ||
     ((in_stack_00000038[3] & 0xffffffffU) <= uVar9)) goto LAB_01f9340c;
  lVar19 = in_stack_00000040[lVar13 + 4];
  lVar21 = in_stack_00000040[lVar14 + 5];
  lVar16 = in_stack_00000038[lVar13 + 4];
  uVar18 = *(undefined8 *)(unaff_x23 + lVar13 * 8 + 0x20);
  uVar20 = *(undefined8 *)(unaff_x23 + 0x28 + lVar14 * 8);
  lVar13 = in_stack_00000038[lVar14 + 5];
  if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  iVar5 = FUN_01f947fc(lVar19,uVar18,lVar16,lVar21,uVar20,lVar13);
  if (iVar5 == 0) {
    bVar2 = true;
  }
  else if (iVar5 == 2) {
    uVar6 = (int)lVar14 + 1;
    bVar2 = false;
  }
  if ((ulong)in_stack_00000030 - 2 != lVar14) {
    lVar13 = (long)(int)uVar6;
    lVar14 = lVar14 + 1;
    uVar12 = in_stack_00000040[3] & 0xffffffff;
    if ((uint)in_stack_00000040[3] <= uVar6) goto LAB_01f9340c;
    goto LAB_01f932e8;
  }
  unaff_x22 = (long *)PTR_DAT_027b32e0;
  unaff_x28 = in_stack_00000058;
  if (bVar2) {
    uVar18 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
    thunk_FUN_01279b34(PTR_DAT_027bc458);
    uVar20 = thunk_FUN_0124bba8();
    FUN_01ee31d4(uVar20,uVar18,0);
LAB_01f9426c:
    uVar18 = thunk_FUN_01279b34(PTR_DAT_027c1bf8);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar20,uVar18);
  }
LAB_01f934c8:
  if (in_stack_00000020 != 0) {
    if (unaff_x23 == 0) goto LAB_01f92644;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
    plVar17 = (long *)(unaff_x23 + (long)(int)uVar6 * 8 + 0x20);
    lVar14 = *plVar17;
    if (lVar14 == 0) goto LAB_01f92644;
    lVar14 = FUN_01f8a1a8(lVar14,0);
    lVar13 = *unaff_x28;
    if ((lVar13 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_01f92644;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
    lVar16 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    bVar4 = FUN_01f801dc(lVar16,0,0);
    lVar16 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
    if (lVar14 == 0) {
      lVar19 = 0;
    }
    else {
      uVar18 = *(undefined8 *)PTR_DAT_027b1ca8;
      lVar19 = thunk_FUN_0124baac(lVar14,uVar18);
      if (lVar19 == 0) {
LAB_01f93580:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(lVar14,uVar18);
      }
    }
    uVar18 = *(undefined8 *)(lVar13 + 0x18);
    FUN_01fab77c(lVar16,0);
    *(long *)(lVar16 + 0x10) = lVar19;
    thunk_FUN_01286abc((long *)(lVar16 + 0x10),lVar19);
    *(int *)(lVar16 + 0x18) = (int)uVar18;
    *(byte *)(lVar16 + 0x1c) = bVar4 & 1;
    *in_stack_00000010 = lVar16;
    thunk_FUN_01286abc(in_stack_00000010,lVar16);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
    lVar14 = *plVar17;
    lVar13 = *unaff_x28;
    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f94678(lVar14,lVar13);
    unaff_x22 = (long *)PTR_DAT_027b32e0;
  }
  if (*(uint *)(in_stack_00000040 + 3) <= uVar6) goto LAB_01f9340c;
  plVar8 = in_stack_00000040 + (long)(int)uVar6 + 4;
  plVar17 = (long *)*plVar8;
  if (((plVar17 == (long *)0x0) ||
      (lVar14 = (**(code **)(*plVar17 + 0x378))(plVar17,*(undefined8 *)(*plVar17 + 0x380)),
      lVar14 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
  iVar5 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar14 + 0x18) == iVar5) {
    if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
    lVar13 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar9 = FUN_01f801dc(lVar13,0,0);
    if ((uVar9 & 1) != 0) {
      plVar17 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar14 + 0x18))
      ;
      uVar7 = *(int *)(lVar14 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar17,0,uVar7,0);
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
      lVar13 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar14 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if (lVar14 == 0) goto LAB_01f92644;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_01f9340c;
      *(undefined4 *)(lVar14 + 0x20) = 1;
      lVar14 = thunk_FUN_01f894b8(lVar13,lVar14,0);
      if (plVar17 == (long *)0x0) goto LAB_01f92644;
      if ((lVar14 != 0) &&
         (lVar13 = thunk_FUN_0124baac(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar13 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar17 + 3) <= uVar7) goto LAB_01f9340c;
      plVar10 = plVar17 + (long)(int)uVar7 + 4;
      *plVar10 = lVar14;
      thunk_FUN_01286abc(plVar10,lVar14);
      if (*(uint *)(plVar17 + 3) <= uVar7) goto LAB_01f9340c;
      lVar14 = *unaff_x28;
      if (lVar14 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_01f9340c;
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) goto LAB_01f92644;
      bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_027b3f80)
         ) {
LAB_01f942dc:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(plVar10);
      }
      FUN_01f89750(plVar10,*(undefined8 *)(lVar14 + (long)(int)uVar7 * 8 + 0x20),0,0);
      goto FUN_01f94198;
    }
  }
  else {
    if (iVar5 < *(int *)(lVar14 + 0x18)) {
      plVar17 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
      lVar13 = *unaff_x28;
      if (lVar13 == 0) goto LAB_01f92644;
      uVar9 = 0;
      plVar10 = plVar17 + 4;
      do {
        if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar9) {
          uVar7 = *(uint *)(lVar14 + 0x18);
          if ((int)uVar9 < (int)(uVar7 - 1)) {
            do {
              if (uVar7 <= (uint)uVar9) goto LAB_01f9340c;
              plVar11 = *(long **)(lVar14 + 0x20 + uVar9 * 8);
              if ((plVar11 == (long *)0x0) ||
                 (lVar13 = (**(code **)(*plVar11 + 0x1f8))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x200)),
                 plVar17 == (long *)0x0)) goto LAB_01f92644;
              if ((lVar13 != 0) &&
                 (lVar16 = thunk_FUN_0124baac(lVar13,*(undefined8 *)(*plVar17 + 0x40)), lVar16 == 0)
                 ) goto LAB_01f941d8;
              if (*(uint *)(plVar17 + 3) <= (uint)uVar9) goto LAB_01f9340c;
              *plVar10 = lVar13;
              thunk_FUN_01286abc(plVar10,lVar13);
              uVar7 = *(uint *)(lVar14 + 0x18);
              uVar9 = uVar9 + 1;
              plVar10 = plVar10 + 1;
            } while ((int)uVar9 < (int)(uVar7 - 1));
          }
          if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
          if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
          lVar13 = in_stack_00000038[(long)(int)uVar6 + 4];
          if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar12 = FUN_01f801dc(lVar13,0,0);
          uVar7 = (uint)uVar9;
          if ((uVar12 & 1) == 0) {
            if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_01f9340c;
            plVar10 = *(long **)(lVar14 + (long)(int)uVar7 * 8 + 0x20);
            if ((plVar10 == (long *)0x0) ||
               (lVar14 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200)),
               plVar17 == (long *)0x0)) goto LAB_01f92644;
            if ((lVar14 != 0) &&
               (lVar13 = thunk_FUN_0124baac(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar13 == 0))
            goto LAB_01f941d8;
            uVar15 = *(uint *)(plVar17 + 3);
          }
          else {
            if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
            lVar14 = in_stack_00000038[(long)(int)uVar6 + 4];
            uVar18 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
            lVar14 = thunk_FUN_01f894b8(lVar14,uVar18,0);
            if (plVar17 == (long *)0x0) goto LAB_01f92644;
            if ((lVar14 != 0) &&
               (lVar13 = thunk_FUN_0124baac(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar13 == 0))
            goto LAB_01f941d8;
            uVar15 = *(uint *)(plVar17 + 3);
          }
          if (uVar15 <= uVar7) goto LAB_01f9340c;
          plVar17[(long)(int)uVar7 + 4] = lVar14;
          thunk_FUN_01286abc(plVar17 + (long)(int)uVar7 + 4,lVar14);
FUN_01f94198:
          *unaff_x28 = (long)plVar17;
          thunk_FUN_01286abc(unaff_x28,plVar17);
          goto OVRPlugin_UnityOpenXR__OnSessionExiting;
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_01f9340c;
        if (plVar17 == (long *)0x0) goto LAB_01f92644;
        lVar13 = *(long *)(lVar13 + uVar9 * 8 + 0x20);
        if ((lVar13 != 0) &&
           (lVar16 = thunk_FUN_0124baac(lVar13,*(undefined8 *)(*plVar17 + 0x40)), lVar16 == 0))
        goto LAB_01f941d8;
        if (*(uint *)(plVar17 + 3) <= uVar9) goto LAB_01f9340c;
        *plVar10 = lVar13;
        thunk_FUN_01286abc(plVar10,lVar13);
        lVar13 = *unaff_x28;
        uVar9 = uVar9 + 1;
        plVar10 = plVar10 + 1;
        if (lVar13 == 0) goto LAB_01f92644;
      } while( true );
    }
    if (*(uint *)(in_stack_00000040 + 3) <= uVar6) goto LAB_01f9340c;
    plVar17 = (long *)*plVar8;
    if (plVar17 == (long *)0x0) goto LAB_01f92644;
    uVar7 = (**(code **)(*plVar17 + 600))(plVar17,*(undefined8 *)(*plVar17 + 0x260));
    if ((uVar7 >> 1 & 1) == 0) {
      plVar17 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar14 + 0x18))
      ;
      uVar7 = *(int *)(lVar14 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar17,0,uVar7,0);
      if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
      lVar13 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar14 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if ((*unaff_x28 == 0) || (lVar14 == 0)) goto LAB_01f92644;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_01f9340c;
      *(uint *)(lVar14 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar7;
      lVar14 = thunk_FUN_01f894b8(lVar13,lVar14,0);
      if (plVar17 == (long *)0x0) goto LAB_01f92644;
      if ((lVar14 != 0) &&
         (lVar13 = thunk_FUN_0124baac(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar13 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar17 + 3) <= uVar7) goto LAB_01f9340c;
      plVar10 = plVar17 + (long)(int)uVar7 + 4;
      *plVar10 = lVar14;
      thunk_FUN_01286abc(plVar10,lVar14);
      if (*(uint *)(plVar17 + 3) <= uVar7) goto LAB_01f9340c;
      lVar14 = *unaff_x28;
      if (lVar14 == 0) goto LAB_01f92644;
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
      }
      FUN_01f89ca0(lVar14,uVar7,plVar10,0,*(int *)(lVar14 + 0x18) - uVar7,0);
      *unaff_x28 = (long)plVar17;
      thunk_FUN_01286abc(unaff_x28,plVar17);
    }
  }
OVRPlugin_UnityOpenXR__OnSessionExiting:
  if (uVar6 < *(uint *)(in_stack_00000040 + 3)) goto LAB_01f941b4;
  goto LAB_01f9340c;
  while( true ) {
    lVar13 = *(long *)(lVar13 + uVar9 * 8 + 0x20);
    if ((lVar13 != 0) &&
       (lVar16 = thunk_FUN_0124baac(lVar13,*(undefined8 *)(*plVar17 + 0x40)), lVar16 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar17 + 3) <= uVar9) goto LAB_01f9340c;
    *plVar10 = lVar13;
    thunk_FUN_01286abc(plVar10,lVar13);
    lVar13 = *unaff_x28;
    uVar9 = uVar9 + 1;
    plVar10 = plVar10 + 1;
    if (lVar13 == 0) break;
LAB_01f937fc:
    if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar9) {
      uVar6 = *(uint *)(lVar14 + 0x18);
      if ((int)(uVar6 - 1) <= (int)uVar9) goto LAB_01f93a68;
      goto LAB_01f939f4;
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_01f9340c;
    if (plVar17 == (long *)0x0) break;
  }
  goto LAB_01f92644;
code_r0x01f92878:
  if (unaff_x23 == 0) goto LAB_01f92644;
  if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
  lVar14 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
  if (lVar14 == 0) goto LAB_01f92644;
  if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_01f9340c;
  in_w8 = *(uint *)(lVar14 + unaff_x24 * 4 + 0x20);
  goto code_r0x01f928b0;
  while( true ) {
    plVar11 = *(long **)(lVar14 + 0x20 + uVar9 * 8);
    if ((plVar11 == (long *)0x0) ||
       (lVar13 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200)),
       plVar17 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar13 != 0) &&
       (lVar16 = thunk_FUN_0124baac(lVar13,*(undefined8 *)(*plVar17 + 0x40)), lVar16 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar17 + 3) <= (uint)uVar9) goto LAB_01f9340c;
    *plVar10 = lVar13;
    thunk_FUN_01286abc(plVar10,lVar13);
    uVar6 = *(uint *)(lVar14 + 0x18);
    uVar9 = uVar9 + 1;
    plVar10 = plVar10 + 1;
    if ((int)(uVar6 - 1) <= (int)uVar9) break;
LAB_01f939f4:
    if (uVar6 <= (uint)uVar9) goto LAB_01f9340c;
  }
LAB_01f93a68:
  if (in_stack_00000038 != (long *)0x0) {
    if ((int)in_stack_00000038[3] != 0) {
      lVar13 = in_stack_00000038[4];
      if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar12 = FUN_01f801dc(lVar13,0,0);
      uVar6 = (uint)uVar9;
      if ((uVar12 & 1) == 0) {
        if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_01f9340c;
        plVar10 = *(long **)(lVar14 + (long)(int)uVar6 * 8 + 0x20);
        if ((plVar10 == (long *)0x0) ||
           (lVar14 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200)),
           plVar17 == (long *)0x0)) goto LAB_01f92644;
        if ((lVar14 != 0) &&
           (lVar13 = thunk_FUN_0124baac(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar13 == 0))
        goto LAB_01f941d8;
        uVar7 = *(uint *)(plVar17 + 3);
      }
      else {
        if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
        lVar14 = in_stack_00000038[4];
        uVar18 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
        lVar14 = thunk_FUN_01f894b8(lVar14,uVar18,0);
        if (plVar17 == (long *)0x0) goto LAB_01f92644;
        if ((lVar14 != 0) &&
           (lVar13 = thunk_FUN_0124baac(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar13 == 0)) {
LAB_01f941d8:
          uVar18 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar18,0);
        }
        uVar7 = *(uint *)(plVar17 + 3);
      }
      if (uVar6 < uVar7) {
        plVar17[(long)(int)uVar6 + 4] = lVar14;
        thunk_FUN_01286abc(plVar17 + (long)(int)uVar6 + 4,lVar14);
LAB_01f94118:
        *unaff_x28 = (long)plVar17;
        thunk_FUN_01286abc(unaff_x28,plVar17);
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


