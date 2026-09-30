/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxTextureHeight
ENTRY_POINT: 01f92e94
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


long OVRPlugin_OVRP_1_65_0__ovrp_KtxTextureHeight(long param_1)

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
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  uint unaff_w20;
  long *plVar16;
  undefined8 uVar17;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long lVar18;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 uVar19;
  long *unaff_x28;
  long lVar20;
  long *in_stack_00000010;
  long in_stack_00000020;
  long *in_stack_00000028;
  uint in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  uint in_stack_00000050;
  long *in_stack_00000058;
  
code_r0x01f92e94:
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar9 = FUN_01f801dc(in_stack_00000048,0,0);
                    /* try { // try from 01f92eb8 to 02092ec7 has its CatchHandler @ 01f92f2c */
  if (((uVar9 & 1) != 0) && (unaff_w20 == *(int *)(unaff_x27 + 0x18) - 1U)) {
    lVar15 = *unaff_x28;
                    /* try { // try from 01f92ec8 to 02092f23 has its CatchHandler @ 01f92d74 */
    if (lVar15 == 0) goto LAB_01f92644;
    lVar11 = (-(ulong)(unaff_w20 >> 0x1f) & 0xfffffff800000000 | (ulong)unaff_w20 << 3) + 0x20;
    while ((int)unaff_w20 < *(int *)(lVar15 + 0x18)) {
      if ((in_stack_00000048 == (long *)0x0) ||
         (uVar9 = FUN_01f81644(in_stack_00000048,0), unaff_x26 == 0)) goto LAB_01f92644;
      if (*(uint *)(unaff_x26 + 0x18) <= unaff_w20) goto LAB_01f9340c;
      uVar17 = *(undefined8 *)(unaff_x26 + lVar11);
      if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar10 = FUN_01f7f404(uVar17,0,0);
      unaff_x22 = (long *)PTR_DAT_027b32e0;
      if ((uVar9 & 1) == 0) {
        if ((uVar10 & 1) == 0) {
          if (*(uint *)(unaff_x26 + 0x18) <= unaff_w20) goto LAB_01f9340c;
          uVar9 = (**(code **)(*in_stack_00000048 + 0x288))
                            (in_stack_00000048,*(undefined8 *)(unaff_x26 + lVar11),
                             *(undefined8 *)(*in_stack_00000048 + 0x290));
          if ((uVar9 & 1) == 0) {
            if (*(uint *)(unaff_x26 + 0x18) <= unaff_w20) goto LAB_01f9340c;
            if (*(long *)(unaff_x26 + lVar11) == 0) goto LAB_01f92644;
            uVar9 = FUN_01f81468(*(long *)(unaff_x26 + lVar11),0);
            if ((uVar9 & 1) != 0) {
              lVar15 = *unaff_x28;
              if (lVar15 != 0) {
                if (unaff_w20 < *(uint *)(lVar15 + 0x18)) {
                  uVar9 = (**(code **)(*in_stack_00000048 + 0x828))
                                    (in_stack_00000048,*(undefined8 *)(lVar15 + lVar11),
                                     *(undefined8 *)(*in_stack_00000048 + 0x830));
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
        lVar15 = *unaff_x28;
        if (lVar15 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar15 + 0x18) <= unaff_w20) goto LAB_01f9340c;
        uVar17 = *(undefined8 *)(lVar15 + lVar11);
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        bVar4 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
        if ((*(byte *)(*in_stack_00000048 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*in_stack_00000048 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)PTR_DAT_027b3ec0)) {
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(in_stack_00000048);
        }
        uVar9 = FUN_01f9451c(uVar17,in_stack_00000048);
        unaff_x22 = (long *)PTR_DAT_027b32e0;
joined_r0x01f93040:
        if ((uVar9 & 1) == 0) break;
      }
      lVar15 = *unaff_x28;
      unaff_w20 = unaff_w20 + 1;
      lVar11 = lVar11 + 8;
      if (lVar15 == 0) goto LAB_01f92644;
    }
  }
  if (*unaff_x28 != 0) {
    unaff_x22 = unaff_x22;
    uVar9 = unaff_x25;
    if (unaff_w20 != *(uint *)(*unaff_x28 + 0x18)) goto LAB_01f93214;
    if (unaff_x23 != 0) {
      if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) ||
         (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000030)) goto LAB_01f9340c;
      lVar15 = (long)(int)in_stack_00000030;
      *(undefined8 *)(unaff_x23 + lVar15 * 8 + 0x20) =
           *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20);
      thunk_FUN_01286abc();
      if (in_stack_00000038 != (long *)0x0) {
        if ((in_stack_00000048 == (long *)0x0) ||
           (lVar11 = thunk_FUN_0124baac(in_stack_00000048,*(undefined8 *)(*in_stack_00000038 + 0x40)
                                       ), lVar11 != 0)) {
          if (in_stack_00000030 < *(uint *)(in_stack_00000038 + 3)) {
            in_stack_00000038[lVar15 + 4] = (long)in_stack_00000048;
            thunk_FUN_01286abc(in_stack_00000038 + lVar15 + 4,in_stack_00000048);
            uVar9 = (ulong)*(uint *)(unaff_x24 + 3);
            if (unaff_x25 < uVar9) {
              lVar11 = *in_stack_00000028;
              if (lVar11 == 0) goto LAB_01f93120;
LAB_01f93108:
              lVar12 = thunk_FUN_0124baac(lVar11,*(undefined8 *)(*unaff_x24 + 0x40));
              if (lVar12 != 0) {
                uVar9 = unaff_x24[3];
LAB_01f93120:
                if (in_stack_00000030 < (uint)uVar9) {
                  unaff_x24[lVar15 + 4] = lVar11;
                  in_stack_00000030 = in_stack_00000030 + 1;
                  thunk_FUN_01286abc(unaff_x24 + lVar15 + 4,lVar11);
                  unaff_x22 = (long *)PTR_DAT_027b32e0;
                  uVar9 = unaff_x25;
LAB_01f93214:
                  do {
                    uVar6 = *(uint *)(unaff_x24 + 3);
                    uVar10 = (ulong)uVar6;
                    unaff_x25 = uVar9 + 1;
                    if ((long)(int)uVar6 <= (long)unaff_x25) {
                      if (in_stack_00000030 != 1) {
                        if (in_stack_00000030 == 0) {
                          uVar17 = thunk_FUN_01279b34(PTR_DAT_027c1bf0);
                          thunk_FUN_01279b34(PTR_DAT_027b3ed0);
                          uVar19 = thunk_FUN_0124bba8();
                          FUN_01f6b058(uVar19,uVar17,0);
                          goto LAB_01f9426c;
                        }
                        if ((int)in_stack_00000030 < 2) {
                          uVar6 = 0;
                          goto LAB_01f934c8;
                        }
                        if (uVar6 == 0) goto LAB_01f9340c;
                        lVar15 = 0;
                        lVar11 = 0;
                        uVar6 = 0;
                        bVar2 = false;
                        plVar16 = unaff_x24;
                        goto LAB_01f932e8;
                      }
                      if (in_stack_00000020 != 0) {
                        if (unaff_x23 == 0) goto LAB_01f92644;
                        if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
                        if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_01f92644;
                        lVar15 = FUN_01f8a1a8(*(long *)(unaff_x23 + 0x20),0);
                        lVar11 = *unaff_x28;
                        if ((lVar11 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_01f92644;
                        if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
                        lVar12 = in_stack_00000038[4];
                        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                          thunk_FUN_01220628();
                        }
                        bVar4 = FUN_01f801dc(lVar12,0,0);
                        lVar12 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
                        if (lVar15 == 0) {
                          lVar18 = 0;
                        }
                        else {
                          uVar17 = *(undefined8 *)PTR_DAT_027b1ca8;
                          lVar18 = thunk_FUN_0124baac(lVar15,uVar17);
                          if (lVar18 == 0) goto LAB_01f93580;
                        }
                        uVar17 = *(undefined8 *)(lVar11 + 0x18);
                        FUN_01fab77c(lVar12,0);
                        *(long *)(lVar12 + 0x10) = lVar18;
                        thunk_FUN_01286abc((long *)(lVar12 + 0x10),lVar18);
                        *(int *)(lVar12 + 0x18) = (int)uVar17;
                        *(byte *)(lVar12 + 0x1c) = bVar4 & 1;
                        *in_stack_00000010 = lVar12;
                        thunk_FUN_01286abc(in_stack_00000010,lVar12);
                        if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
                        uVar17 = *(undefined8 *)(unaff_x23 + 0x20);
                        lVar15 = *unaff_x28;
                        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                          thunk_FUN_01220628();
                        }
                        FUN_01f94678(uVar17,lVar15);
                        uVar6 = (uint)in_stack_00000040[3];
                        unaff_x22 = (long *)PTR_DAT_027b32e0;
                        unaff_x24 = in_stack_00000040;
                      }
                      if (uVar6 == 0) goto LAB_01f9340c;
                      plVar8 = unaff_x24 + 4;
                      plVar16 = (long *)*plVar8;
                      if (((plVar16 == (long *)0x0) ||
                          (lVar15 = (**(code **)(*plVar16 + 0x378))
                                              (plVar16,*(undefined8 *)(*plVar16 + 0x380)),
                          lVar15 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
                      iVar5 = *(int *)(*unaff_x28 + 0x18);
                      if (*(int *)(lVar15 + 0x18) == iVar5) {
                        if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
                        if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
                        lVar11 = in_stack_00000038[4];
                        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                          thunk_FUN_01220628();
                        }
                        uVar9 = FUN_01f801dc(lVar11,0,0);
                        if ((uVar9 & 1) == 0) goto LAB_01f94128;
                        plVar16 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,
                                                       *(undefined4 *)(lVar15 + 0x18));
                        uVar6 = *(int *)(lVar15 + 0x18) - 1;
                        FUN_01f89ca0(*unaff_x28,0,plVar16,0,uVar6,0);
                        if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
                        lVar11 = in_stack_00000038[4];
                        lVar15 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
                        if (lVar15 == 0) goto LAB_01f92644;
                        if (*(int *)(lVar15 + 0x18) == 0) goto LAB_01f9340c;
                        *(undefined4 *)(lVar15 + 0x20) = 1;
                        lVar15 = thunk_FUN_01f894b8(lVar11,lVar15,0);
                        if (plVar16 == (long *)0x0) goto LAB_01f92644;
                        if ((lVar15 != 0) &&
                           (lVar11 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar16 + 0x40)),
                           lVar11 == 0)) goto LAB_01f941d8;
                        if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_01f9340c;
                        plVar13 = plVar16 + (long)(int)uVar6 + 4;
                        *plVar13 = lVar15;
                        thunk_FUN_01286abc(plVar13,lVar15);
                        if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_01f9340c;
                        lVar15 = *unaff_x28;
                        if (lVar15 == 0) goto LAB_01f92644;
                        if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_01f9340c;
                        plVar13 = (long *)*plVar13;
                        if (plVar13 == (long *)0x0) goto LAB_01f92644;
                        bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
                        if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
                           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) !=
                            *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
                        FUN_01f89750(plVar13,*(undefined8 *)(lVar15 + (long)(int)uVar6 * 8 + 0x20),0
                                     ,0);
                        goto LAB_01f94118;
                      }
                      if (iVar5 < *(int *)(lVar15 + 0x18)) {
                        plVar16 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
                        lVar11 = *unaff_x28;
                        if (lVar11 == 0) goto LAB_01f92644;
                        uVar9 = 0;
                        plVar13 = plVar16 + 4;
                        goto LAB_01f937fc;
                      }
                      if ((int)unaff_x24[3] == 0) goto LAB_01f9340c;
                      plVar16 = (long *)*plVar8;
                      if (plVar16 == (long *)0x0) goto LAB_01f92644;
                      uVar6 = (**(code **)(*plVar16 + 600))
                                        (plVar16,*(undefined8 *)(*plVar16 + 0x260));
                      if ((uVar6 >> 1 & 1) != 0) goto LAB_01f94128;
                      plVar16 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,
                                                     *(undefined4 *)(lVar15 + 0x18));
                      uVar6 = *(int *)(lVar15 + 0x18) - 1;
                      FUN_01f89ca0(*unaff_x28,0,plVar16,0,uVar6,0);
                      if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
                      if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
                      lVar11 = in_stack_00000038[4];
                      lVar15 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
                      if ((*unaff_x28 == 0) || (lVar15 == 0)) goto LAB_01f92644;
                      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_01f9340c;
                      *(uint *)(lVar15 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar6;
                      lVar15 = thunk_FUN_01f894b8(lVar11,lVar15,0);
                      if (plVar16 == (long *)0x0) goto LAB_01f92644;
                      if ((lVar15 != 0) &&
                         (lVar11 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar16 + 0x40)),
                         lVar11 == 0)) goto LAB_01f941d8;
                      if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_01f9340c;
                      plVar13 = plVar16 + (long)(int)uVar6 + 4;
                      *plVar13 = lVar15;
                      thunk_FUN_01286abc(plVar13,lVar15);
                      if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_01f9340c;
                      lVar15 = *unaff_x28;
                      if (lVar15 == 0) goto LAB_01f92644;
                      plVar13 = (long *)*plVar13;
                      if (plVar13 != (long *)0x0) {
                        bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
                        if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
                           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) !=
                            *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
                      }
                      FUN_01f89ca0(lVar15,uVar6,plVar13,0,*(int *)(lVar15 + 0x18) - uVar6,0);
                      *unaff_x28 = (long)plVar16;
                      thunk_FUN_01286abc(unaff_x28,plVar16);
                      unaff_x24 = in_stack_00000040;
                      goto LAB_01f94128;
                    }
                    if (uVar10 <= unaff_x25) goto LAB_01f9340c;
                    in_stack_00000028 = unaff_x24 + uVar9 + 5;
                    uVar10 = FUN_01ee539c(*in_stack_00000028,0,0);
                    uVar9 = unaff_x25;
                  } while ((uVar10 & 1) != 0);
                  if (*(uint *)(unaff_x24 + 3) <= unaff_x25) goto LAB_01f9340c;
                  plVar16 = (long *)*in_stack_00000028;
                  if ((plVar16 == (long *)0x0) ||
                     (unaff_x27 = (**(code **)(*plVar16 + 0x378))
                                            (plVar16,*(undefined8 *)(*plVar16 + 0x380)),
                     unaff_x27 == 0)) goto LAB_01f92644;
                  uVar10 = *(ulong *)(unaff_x27 + 0x18);
                  lVar15 = *unaff_x28;
                  if (uVar10 == 0) {
                    if (lVar15 == 0) goto LAB_01f92644;
                    if (*(long *)(lVar15 + 0x18) == 0) goto LAB_01f92790;
                    if (*(uint *)(unaff_x24 + 3) <= unaff_x25) goto LAB_01f9340c;
                    plVar16 = (long *)*in_stack_00000028;
                    if (plVar16 == (long *)0x0) goto LAB_01f92644;
                    uVar6 = (**(code **)(*plVar16 + 600))(plVar16,*(undefined8 *)(*plVar16 + 0x260))
                    ;
                    if ((uVar6 >> 1 & 1) != 0) goto LAB_01f92790;
                    goto LAB_01f93214;
                  }
                  if (lVar15 == 0) goto LAB_01f92644;
                  uVar6 = *(uint *)(lVar15 + 0x18);
                  iVar5 = (int)uVar10;
                  if ((int)uVar6 < iVar5) {
                    uVar7 = iVar5 - 1;
                    if ((int)uVar6 < (int)uVar7) {
                      plVar16 = (long *)(unaff_x27 + (long)(int)uVar6 * 8 + 0x20);
                      do {
                        if ((uint)uVar10 <= uVar6) goto LAB_01f9340c;
                        plVar8 = (long *)*plVar16;
                        if (plVar8 == (long *)0x0) goto LAB_01f92644;
                        lVar15 = (**(code **)(*plVar8 + 0x1f8))
                                           (plVar8,*(undefined8 *)(*plVar8 + 0x200));
                        puVar3 = PTR_DAT_027baa38;
                        lVar11 = *(long *)PTR_DAT_027baa38;
                        if (*(int *)(lVar11 + 0xe0) == 0) {
                          thunk_FUN_01220628(lVar11);
                          lVar11 = *(long *)puVar3;
                        }
                        if (lVar15 == **(long **)(lVar11 + 0xb8)) {
                          uVar10 = (ulong)*(uint *)(unaff_x27 + 0x18);
                          uVar7 = *(uint *)(unaff_x27 + 0x18) - 1;
                          unaff_x28 = in_stack_00000058;
                          break;
                        }
                        uVar10 = *(ulong *)(unaff_x27 + 0x18);
                        uVar6 = uVar6 + 1;
                        plVar16 = plVar16 + 1;
                        uVar7 = (int)uVar10 - 1;
                        unaff_x28 = in_stack_00000058;
                      } while ((int)uVar6 < (int)uVar7);
                    }
                    if (uVar6 != uVar7) goto LAB_01f93214;
                    if ((uint)uVar10 <= uVar6) goto LAB_01f9340c;
                    plVar8 = (long *)(unaff_x27 + (long)(int)uVar6 * 8 + 0x20);
                    plVar16 = (long *)*plVar8;
                    if (plVar16 == (long *)0x0) goto LAB_01f92644;
                    lVar15 = (**(code **)(*plVar16 + 0x1f8))
                                       (plVar16,*(undefined8 *)(*plVar16 + 0x200));
                    puVar3 = PTR_DAT_027baa38;
                    lVar11 = *(long *)PTR_DAT_027baa38;
                    if (*(int *)(lVar11 + 0xe0) == 0) {
                      thunk_FUN_01220628(lVar11);
                      lVar11 = *(long *)puVar3;
                    }
                    if (lVar15 != **(long **)(lVar11 + 0xb8)) goto LAB_01f92a28;
                    if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_01f9340c;
                    plVar16 = (long *)*plVar8;
                    if ((plVar16 == (long *)0x0) ||
                       (lVar15 = (**(code **)(*plVar16 + 0x1d8))
                                           (plVar16,*(undefined8 *)(*plVar16 + 0x1e0)), lVar15 == 0)
                       ) goto LAB_01f92644;
                    uVar10 = FUN_01f80ec8(lVar15,0);
                    if ((uVar10 & 1) == 0) goto LAB_01f93214;
                    if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_01f9340c;
                    plVar16 = (long *)*plVar8;
                    uVar17 = *(undefined8 *)PTR_DAT_027c1be0;
                    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                      thunk_FUN_01220628();
                    }
                    uVar17 = FUN_01f7d8a0(uVar17,0);
                    if (plVar16 == (long *)0x0) goto LAB_01f92644;
                    uVar10 = (**(code **)(*plVar16 + 0x208))
                                       (plVar16,uVar17,1,*(undefined8 *)(*plVar16 + 0x210));
                    unaff_x22 = (long *)PTR_DAT_027b32e0;
                    if ((uVar10 & 1) == 0) goto LAB_01f93214;
                    if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_01f9340c;
                    plVar8 = (long *)*plVar8;
                    if ((plVar8 == (long *)0x0) ||
                       (plVar16 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                                    (plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
                       plVar16 == (long *)0x0)) goto LAB_01f92644;
LAB_01f93264:
                    in_stack_00000048 =
                         (long *)(**(code **)(*plVar16 + 0x408))
                                           (plVar16,*(undefined8 *)(*plVar16 + 0x410));
                  }
                  else {
                    if (iVar5 == 0) goto LAB_01f9340c;
                    uVar7 = iVar5 - 1;
                    lVar15 = (long)(int)uVar7;
                    plVar8 = (long *)(unaff_x27 + lVar15 * 8 + 0x20);
                    plVar16 = (long *)*plVar8;
                    if ((plVar16 == (long *)0x0) ||
                       (lVar11 = (**(code **)(*plVar16 + 0x1d8))
                                           (plVar16,*(undefined8 *)(*plVar16 + 0x1e0)), lVar11 == 0)
                       ) goto LAB_01f92644;
                    uVar10 = FUN_01f80ec8(lVar11,0);
                    if (iVar5 < (int)uVar6) {
                      unaff_x24 = in_stack_00000040;
                      if ((uVar10 & 1) != 0) {
                        if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_01f9340c;
                        plVar16 = (long *)*plVar8;
                        uVar17 = *(undefined8 *)PTR_DAT_027c1be0;
                        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                          thunk_FUN_01220628();
                        }
                        uVar17 = FUN_01f7d8a0(uVar17,0);
                        if (plVar16 == (long *)0x0) goto LAB_01f92644;
                        uVar10 = (**(code **)(*plVar16 + 0x208))
                                           (plVar16,uVar17,1,*(undefined8 *)(*plVar16 + 0x210));
                        unaff_x22 = (long *)PTR_DAT_027b32e0;
                        if ((uVar10 & 1) != 0) {
                          if (unaff_x23 == 0) goto LAB_01f92644;
                          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                          lVar11 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                          if (lVar11 == 0) goto LAB_01f92644;
                          if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_01f9340c;
                          if (*(uint *)(lVar11 + lVar15 * 4 + 0x20) == uVar7) {
LAB_01f9323c:
                            if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_01f9340c;
                            plVar8 = (long *)*plVar8;
                            if ((plVar8 != (long *)0x0) &&
                               (plVar16 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                                            (plVar8,*(undefined8 *)(*plVar8 + 0x1e0)
                                                            ), unaff_x24 = in_stack_00000040,
                               plVar16 != (long *)0x0)) goto LAB_01f93264;
                            goto LAB_01f92644;
                          }
                        }
                      }
                      goto LAB_01f93214;
                    }
                    unaff_x24 = in_stack_00000040;
                    if ((uVar10 & 1) != 0) {
                      if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_01f9340c;
                      plVar16 = (long *)*plVar8;
                      uVar17 = *(undefined8 *)PTR_DAT_027c1be0;
                      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                        thunk_FUN_01220628();
                      }
                      uVar17 = FUN_01f7d8a0(uVar17,0);
                      if (plVar16 == (long *)0x0) goto LAB_01f92644;
                      uVar9 = (**(code **)(*plVar16 + 0x208))
                                        (plVar16,uVar17,1,*(undefined8 *)(*plVar16 + 0x210));
                      unaff_x22 = (long *)PTR_DAT_027b32e0;
                      if ((uVar9 & 1) == 0) {
                        in_stack_00000048 = (long *)0x0;
                        goto LAB_01f92a2c;
                      }
                      if (unaff_x23 == 0) goto LAB_01f92644;
                      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                      lVar11 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                      if (lVar11 == 0) goto LAB_01f92644;
                      if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_01f9340c;
                      if (*(uint *)(lVar11 + lVar15 * 4 + 0x20) == uVar7) {
                        if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_01f9340c;
                        plVar16 = (long *)*plVar8;
                        if ((plVar16 == (long *)0x0) ||
                           (plVar16 = (long *)(**(code **)(*plVar16 + 0x1d8))
                                                        (plVar16,*(undefined8 *)(*plVar16 + 0x1e0)),
                           unaff_x26 == 0)) goto LAB_01f92644;
                        if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
                        if (plVar16 != (long *)0x0) {
                          uVar9 = (**(code **)(*plVar16 + 0x288))
                                            (plVar16,*(undefined8 *)(unaff_x26 + lVar15 * 8 + 0x20),
                                             *(undefined8 *)(*plVar16 + 0x290));
                          if ((uVar9 & 1) == 0) goto LAB_01f9323c;
                          goto LAB_01f92a28;
                        }
                        goto LAB_01f92644;
                      }
                    }
LAB_01f92a28:
                    in_stack_00000048 = (long *)0x0;
                  }
LAB_01f92a2c:
                  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                    thunk_FUN_01220628();
                  }
                  uVar9 = FUN_01f801dc(in_stack_00000048,0,0);
                  if ((uVar9 & 1) == 0) {
                    if (*unaff_x28 == 0) goto LAB_01f92644;
                    uVar6 = *(uint *)(*unaff_x28 + 0x18);
                  }
                  else {
                    uVar6 = *(int *)(unaff_x27 + 0x18) - 1;
                  }
                  if (0 < (int)uVar6) {
                    uVar7 = 0;
                    plVar16 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                    goto LAB_01f92a7c;
                  }
                  unaff_w20 = 0;
                  goto LAB_01f92e90;
                }
                goto LAB_01f9340c;
              }
              goto LAB_01f941d8;
            }
          }
          goto LAB_01f9340c;
        }
        goto LAB_01f941d8;
      }
    }
  }
  goto LAB_01f92644;
LAB_01f932e8:
  if (unaff_x23 == 0) goto LAB_01f92644;
  if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
  if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
  if (((((uint)in_stack_00000038[3] <= uVar6) || (uVar9 = lVar15 + 1, uVar10 <= uVar9)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar9)) ||
     ((in_stack_00000038[3] & 0xffffffffU) <= uVar9)) goto LAB_01f9340c;
  lVar18 = plVar16[lVar11 + 4];
  lVar20 = unaff_x24[lVar15 + 5];
  lVar12 = in_stack_00000038[lVar11 + 4];
  uVar17 = *(undefined8 *)(unaff_x23 + lVar11 * 8 + 0x20);
  uVar19 = *(undefined8 *)(unaff_x23 + 0x28 + lVar15 * 8);
  lVar11 = in_stack_00000038[lVar15 + 5];
  if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  iVar5 = FUN_01f947fc(lVar18,uVar17,lVar12,lVar20,uVar19,lVar11);
  if (iVar5 == 0) {
    bVar2 = true;
  }
  else if (iVar5 == 2) {
    uVar6 = (int)lVar15 + 1;
    bVar2 = false;
  }
  if ((ulong)in_stack_00000030 - 2 != lVar15) {
    lVar11 = (long)(int)uVar6;
    lVar15 = lVar15 + 1;
    uVar10 = in_stack_00000040[3] & 0xffffffff;
    plVar16 = in_stack_00000040;
    if ((uint)in_stack_00000040[3] <= uVar6) goto LAB_01f9340c;
    goto LAB_01f932e8;
  }
  unaff_x22 = (long *)PTR_DAT_027b32e0;
  unaff_x24 = in_stack_00000040;
  unaff_x28 = in_stack_00000058;
  if (bVar2) {
    uVar17 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
    thunk_FUN_01279b34(PTR_DAT_027bc458);
    uVar19 = thunk_FUN_0124bba8();
    FUN_01ee31d4(uVar19,uVar17,0);
LAB_01f9426c:
    uVar17 = thunk_FUN_01279b34(PTR_DAT_027c1bf8);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar19,uVar17);
  }
LAB_01f934c8:
  if (in_stack_00000020 != 0) {
    if (unaff_x23 == 0) goto LAB_01f92644;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
    plVar16 = (long *)(unaff_x23 + (long)(int)uVar6 * 8 + 0x20);
    lVar15 = *plVar16;
    if (lVar15 == 0) goto LAB_01f92644;
    lVar15 = FUN_01f8a1a8(lVar15,0);
    lVar11 = *unaff_x28;
    if ((lVar11 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_01f92644;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
    lVar12 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    bVar4 = FUN_01f801dc(lVar12,0,0);
    lVar12 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
    if (lVar15 == 0) {
      lVar18 = 0;
    }
    else {
      uVar17 = *(undefined8 *)PTR_DAT_027b1ca8;
      lVar18 = thunk_FUN_0124baac(lVar15,uVar17);
      if (lVar18 == 0) {
LAB_01f93580:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(lVar15,uVar17);
      }
    }
    uVar17 = *(undefined8 *)(lVar11 + 0x18);
    FUN_01fab77c(lVar12,0);
    *(long *)(lVar12 + 0x10) = lVar18;
    thunk_FUN_01286abc((long *)(lVar12 + 0x10),lVar18);
    *(int *)(lVar12 + 0x18) = (int)uVar17;
    *(byte *)(lVar12 + 0x1c) = bVar4 & 1;
    *in_stack_00000010 = lVar12;
    thunk_FUN_01286abc(in_stack_00000010,lVar12);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
    lVar15 = *plVar16;
    lVar11 = *unaff_x28;
    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f94678(lVar15,lVar11);
    unaff_x22 = (long *)PTR_DAT_027b32e0;
    unaff_x24 = in_stack_00000040;
  }
  if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_01f9340c;
  plVar8 = unaff_x24 + (long)(int)uVar6 + 4;
  plVar16 = (long *)*plVar8;
  if (((plVar16 == (long *)0x0) ||
      (lVar15 = (**(code **)(*plVar16 + 0x378))(plVar16,*(undefined8 *)(*plVar16 + 0x380)),
      lVar15 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
  iVar5 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar15 + 0x18) == iVar5) {
    if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
    lVar11 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar9 = FUN_01f801dc(lVar11,0,0);
    if ((uVar9 & 1) != 0) {
      plVar16 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar15 + 0x18))
      ;
      uVar7 = *(int *)(lVar15 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar16,0,uVar7,0);
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
      lVar11 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar15 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if (lVar15 == 0) goto LAB_01f92644;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_01f9340c;
      *(undefined4 *)(lVar15 + 0x20) = 1;
      lVar15 = thunk_FUN_01f894b8(lVar11,lVar15,0);
      if (plVar16 == (long *)0x0) goto LAB_01f92644;
      if ((lVar15 != 0) &&
         (lVar11 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_01f9340c;
      plVar13 = plVar16 + (long)(int)uVar7 + 4;
      *plVar13 = lVar15;
      thunk_FUN_01286abc(plVar13,lVar15);
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_01f9340c;
      lVar15 = *unaff_x28;
      if (lVar15 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_01f9340c;
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) goto LAB_01f92644;
      bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_027b3f80)
         ) {
LAB_01f942dc:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(plVar13);
      }
      FUN_01f89750(plVar13,*(undefined8 *)(lVar15 + (long)(int)uVar7 * 8 + 0x20),0,0);
      goto FUN_01f94198;
    }
  }
  else {
    if (iVar5 < *(int *)(lVar15 + 0x18)) {
      plVar16 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
      lVar11 = *unaff_x28;
      if (lVar11 == 0) goto LAB_01f92644;
      uVar9 = 0;
      plVar13 = plVar16 + 4;
      do {
        if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar9) {
          uVar7 = *(uint *)(lVar15 + 0x18);
          if ((int)uVar9 < (int)(uVar7 - 1)) {
            do {
              if (uVar7 <= (uint)uVar9) goto LAB_01f9340c;
              plVar14 = *(long **)(lVar15 + 0x20 + uVar9 * 8);
              if ((plVar14 == (long *)0x0) ||
                 (lVar11 = (**(code **)(*plVar14 + 0x1f8))
                                     (plVar14,*(undefined8 *)(*plVar14 + 0x200)),
                 plVar16 == (long *)0x0)) goto LAB_01f92644;
              if ((lVar11 != 0) &&
                 (lVar12 = thunk_FUN_0124baac(lVar11,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0)
                 ) goto LAB_01f941d8;
              if (*(uint *)(plVar16 + 3) <= (uint)uVar9) goto LAB_01f9340c;
              *plVar13 = lVar11;
              thunk_FUN_01286abc(plVar13,lVar11);
              uVar7 = *(uint *)(lVar15 + 0x18);
              uVar9 = uVar9 + 1;
              plVar13 = plVar13 + 1;
            } while ((int)uVar9 < (int)(uVar7 - 1));
          }
          if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
          if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
          lVar11 = in_stack_00000038[(long)(int)uVar6 + 4];
          if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar10 = FUN_01f801dc(lVar11,0,0);
          uVar7 = (uint)uVar9;
          if ((uVar10 & 1) == 0) {
            if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_01f9340c;
            plVar13 = *(long **)(lVar15 + (long)(int)uVar7 * 8 + 0x20);
            if ((plVar13 == (long *)0x0) ||
               (lVar15 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200)),
               plVar16 == (long *)0x0)) goto LAB_01f92644;
            if ((lVar15 != 0) &&
               (lVar11 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
            goto LAB_01f941d8;
            uVar1 = *(uint *)(plVar16 + 3);
          }
          else {
            if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
            lVar15 = in_stack_00000038[(long)(int)uVar6 + 4];
            uVar17 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
            lVar15 = thunk_FUN_01f894b8(lVar15,uVar17,0);
            if (plVar16 == (long *)0x0) goto LAB_01f92644;
            if ((lVar15 != 0) &&
               (lVar11 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
            goto LAB_01f941d8;
            uVar1 = *(uint *)(plVar16 + 3);
          }
          if (uVar1 <= uVar7) goto LAB_01f9340c;
          plVar16[(long)(int)uVar7 + 4] = lVar15;
          thunk_FUN_01286abc(plVar16 + (long)(int)uVar7 + 4,lVar15);
FUN_01f94198:
          *unaff_x28 = (long)plVar16;
          thunk_FUN_01286abc(unaff_x28,plVar16);
          unaff_x24 = in_stack_00000040;
          goto OVRPlugin_UnityOpenXR__OnSessionExiting;
        }
        if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_01f9340c;
        if (plVar16 == (long *)0x0) goto LAB_01f92644;
        lVar11 = *(long *)(lVar11 + uVar9 * 8 + 0x20);
        if ((lVar11 != 0) &&
           (lVar12 = thunk_FUN_0124baac(lVar11,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0))
        goto LAB_01f941d8;
        if (*(uint *)(plVar16 + 3) <= uVar9) goto LAB_01f9340c;
        *plVar13 = lVar11;
        thunk_FUN_01286abc(plVar13,lVar11);
        lVar11 = *unaff_x28;
        uVar9 = uVar9 + 1;
        plVar13 = plVar13 + 1;
        if (lVar11 == 0) goto LAB_01f92644;
      } while( true );
    }
    if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_01f9340c;
    plVar16 = (long *)*plVar8;
    if (plVar16 == (long *)0x0) goto LAB_01f92644;
    uVar7 = (**(code **)(*plVar16 + 600))(plVar16,*(undefined8 *)(*plVar16 + 0x260));
    if ((uVar7 >> 1 & 1) == 0) {
      plVar16 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar15 + 0x18))
      ;
      uVar7 = *(int *)(lVar15 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar16,0,uVar7,0);
      if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
      lVar11 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar15 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if ((*unaff_x28 == 0) || (lVar15 == 0)) goto LAB_01f92644;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_01f9340c;
      *(uint *)(lVar15 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar7;
      lVar15 = thunk_FUN_01f894b8(lVar11,lVar15,0);
      if (plVar16 == (long *)0x0) goto LAB_01f92644;
      if ((lVar15 != 0) &&
         (lVar11 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_01f9340c;
      plVar13 = plVar16 + (long)(int)uVar7 + 4;
      *plVar13 = lVar15;
      thunk_FUN_01286abc(plVar13,lVar15);
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_01f9340c;
      lVar15 = *unaff_x28;
      if (lVar15 == 0) goto LAB_01f92644;
      plVar13 = (long *)*plVar13;
      if (plVar13 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
      }
      FUN_01f89ca0(lVar15,uVar7,plVar13,0,*(int *)(lVar15 + 0x18) - uVar7,0);
      *unaff_x28 = (long)plVar16;
      thunk_FUN_01286abc(unaff_x28,plVar16);
      unaff_x24 = in_stack_00000040;
    }
  }
OVRPlugin_UnityOpenXR__OnSessionExiting:
  if (uVar6 < *(uint *)(unaff_x24 + 3)) goto LAB_01f941b4;
  goto LAB_01f9340c;
  while( true ) {
    lVar11 = *(long *)(lVar11 + uVar9 * 8 + 0x20);
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_0124baac(lVar11,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar16 + 3) <= uVar9) goto LAB_01f9340c;
    *plVar13 = lVar11;
    thunk_FUN_01286abc(plVar13,lVar11);
    lVar11 = *unaff_x28;
    uVar9 = uVar9 + 1;
    plVar13 = plVar13 + 1;
    if (lVar11 == 0) break;
LAB_01f937fc:
    if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar9) {
      uVar6 = *(uint *)(lVar15 + 0x18);
      if ((int)(uVar6 - 1) <= (int)uVar9) goto LAB_01f93a68;
      goto LAB_01f939f4;
    }
    if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_01f9340c;
    if (plVar16 == (long *)0x0) break;
  }
  goto LAB_01f92644;
LAB_01f92790:
  if (unaff_x23 == 0) goto LAB_01f92644;
  if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) ||
     (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000030)) goto LAB_01f9340c;
  lVar15 = (long)(int)in_stack_00000030;
  *(undefined8 *)(unaff_x23 + lVar15 * 8 + 0x20) = *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20)
  ;
  thunk_FUN_01286abc();
  uVar9 = (ulong)*(uint *)(unaff_x24 + 3);
  if (uVar9 <= unaff_x25) goto LAB_01f9340c;
  lVar11 = *in_stack_00000028;
  if (lVar11 != 0) goto LAB_01f93108;
  goto LAB_01f93120;
LAB_01f92a7c:
  do {
    if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_01f9340c;
    lVar15 = (long)(int)uVar7;
    plVar8 = *(long **)(unaff_x27 + lVar15 * 8 + 0x20);
    if ((plVar8 == (long *)0x0) ||
       (plVar8 = (long *)(**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
       plVar8 == (long *)0x0)) goto LAB_01f92644;
    uVar9 = FUN_01f80ed8(plVar8,0);
    if ((uVar9 & 1) != 0) {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x408))(plVar8,*(undefined8 *)(*plVar8 + 0x410));
    }
    if (unaff_x23 == 0) goto LAB_01f92644;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
    lVar11 = *plVar16;
    if (lVar11 == 0) goto LAB_01f92644;
    if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_01f9340c;
    if (unaff_x26 == 0) goto LAB_01f92644;
    uVar1 = *(uint *)(lVar11 + lVar15 * 4 + 0x20);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar1) goto LAB_01f9340c;
    uVar17 = *(undefined8 *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar9 = FUN_01f7f404(plVar8,uVar17,0);
    if ((uVar9 & 1) == 0) {
      if ((in_stack_00000050 >> 0x12 & 1) != 0) {
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
        lVar11 = *plVar16;
        if (lVar11 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_01f9340c;
        lVar12 = *in_stack_00000058;
        if (lVar12 == 0) goto LAB_01f92644;
        uVar1 = *(uint *)(lVar11 + lVar15 * 4 + 0x20);
        if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_01f9340c;
        lVar11 = *unaff_x22;
        lVar12 = *(long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01220628();
          lVar11 = *unaff_x22;
        }
        if (lVar12 == *(long *)(*(long *)(lVar11 + 0xb8) + 0x18)) goto LAB_01f92e70;
      }
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
      lVar11 = *plVar16;
      if (lVar11 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_01f9340c;
      lVar12 = *in_stack_00000058;
      if (lVar12 == 0) goto LAB_01f92644;
      uVar1 = *(uint *)(lVar11 + lVar15 * 4 + 0x20);
      if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_01f9340c;
      if (*(long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) != 0) {
        uVar17 = *(undefined8 *)PTR_DAT_027b5b48;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar17 = FUN_01f7d8a0(uVar17,0);
        uVar9 = FUN_01f7f404(plVar8,uVar17,0);
        if ((uVar9 & 1) == 0) {
          if (plVar8 == (long *)0x0) goto LAB_01f92644;
          uVar9 = FUN_01f81644(plVar8,0);
          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
          lVar11 = *plVar16;
          if (lVar11 == 0) goto LAB_01f92644;
          if ((*(uint *)(lVar11 + 0x18) <= uVar7) ||
             (uVar1 = *(uint *)(lVar11 + lVar15 * 4 + 0x20), *(uint *)(unaff_x26 + 0x18) <= uVar1))
          goto LAB_01f9340c;
          uVar17 = *(undefined8 *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar10 = FUN_01f7f404(uVar17,0,0);
          unaff_x22 = (long *)PTR_DAT_027b32e0;
          unaff_w20 = uVar7;
          if ((uVar9 & 1) == 0) {
            if ((uVar10 & 1) == 0) {
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
              lVar11 = *plVar16;
              if (lVar11 == 0) goto LAB_01f92644;
              if ((*(uint *)(lVar11 + 0x18) <= uVar7) ||
                 (uVar1 = *(uint *)(lVar11 + lVar15 * 4 + 0x20),
                 *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_01f9340c;
              uVar9 = (**(code **)(*plVar8 + 0x288))
                                (plVar8,*(undefined8 *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20),
                                 *(undefined8 *)(*plVar8 + 0x290));
              if ((uVar9 & 1) == 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                lVar11 = *plVar16;
                if (lVar11 == 0) goto LAB_01f92644;
                if ((*(uint *)(lVar11 + 0x18) <= uVar7) ||
                   (uVar1 = *(uint *)(lVar11 + lVar15 * 4 + 0x20),
                   *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_01f9340c;
                lVar11 = *(long *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20);
                if (lVar11 == 0) goto LAB_01f92644;
                uVar9 = FUN_01f81468(lVar11,0);
                unaff_x24 = in_stack_00000040;
                unaff_x28 = in_stack_00000058;
                if ((uVar9 & 1) != 0) {
                  if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
                    lVar11 = *plVar16;
                    if (lVar11 != 0) {
                      if (uVar7 < *(uint *)(lVar11 + 0x18)) {
                        lVar12 = *in_stack_00000058;
                        if (lVar12 != 0) {
                          uVar1 = *(uint *)(lVar11 + lVar15 * 4 + 0x20);
                          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                            uVar9 = (**(code **)(*plVar8 + 0x828))
                                              (plVar8,*(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20),
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
            unaff_x24 = in_stack_00000040;
            unaff_x28 = in_stack_00000058;
            if ((uVar10 & 1) != 0) break;
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
            lVar11 = *plVar16;
            if (lVar11 == 0) goto LAB_01f92644;
            if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_01f9340c;
            lVar12 = *in_stack_00000058;
            if (lVar12 == 0) goto LAB_01f92644;
            uVar1 = *(uint *)(lVar11 + lVar15 * 4 + 0x20);
            if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_01f9340c;
            uVar17 = *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
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
            uVar9 = FUN_01f9451c(uVar17,plVar8);
            unaff_x22 = (long *)PTR_DAT_027b32e0;
joined_r0x01f92e6c:
            unaff_x24 = in_stack_00000040;
            unaff_x28 = in_stack_00000058;
            if ((uVar9 & 1) == 0) break;
          }
        }
      }
    }
LAB_01f92e70:
    uVar7 = uVar7 + 1;
    unaff_x24 = in_stack_00000040;
    unaff_x28 = in_stack_00000058;
    unaff_w20 = uVar6;
  } while (uVar6 != uVar7);
LAB_01f92e90:
  param_1 = *unaff_x22;
  goto code_r0x01f92e94;
  while( true ) {
    plVar14 = *(long **)(lVar15 + 0x20 + uVar9 * 8);
    if ((plVar14 == (long *)0x0) ||
       (lVar11 = (**(code **)(*plVar14 + 0x1f8))(plVar14,*(undefined8 *)(*plVar14 + 0x200)),
       plVar16 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_0124baac(lVar11,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar16 + 3) <= (uint)uVar9) goto LAB_01f9340c;
    *plVar13 = lVar11;
    thunk_FUN_01286abc(plVar13,lVar11);
    uVar6 = *(uint *)(lVar15 + 0x18);
    uVar9 = uVar9 + 1;
    plVar13 = plVar13 + 1;
    if ((int)(uVar6 - 1) <= (int)uVar9) break;
LAB_01f939f4:
    if (uVar6 <= (uint)uVar9) goto LAB_01f9340c;
  }
LAB_01f93a68:
  if (in_stack_00000038 != (long *)0x0) {
    if ((int)in_stack_00000038[3] != 0) {
      lVar11 = in_stack_00000038[4];
      if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar10 = FUN_01f801dc(lVar11,0,0);
      uVar6 = (uint)uVar9;
      if ((uVar10 & 1) == 0) {
        if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_01f9340c;
        plVar13 = *(long **)(lVar15 + (long)(int)uVar6 * 8 + 0x20);
        if ((plVar13 == (long *)0x0) ||
           (lVar15 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200)),
           plVar16 == (long *)0x0)) goto LAB_01f92644;
        if ((lVar15 != 0) &&
           (lVar11 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
        goto LAB_01f941d8;
        uVar7 = *(uint *)(plVar16 + 3);
      }
      else {
        if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
        lVar15 = in_stack_00000038[4];
        uVar17 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
        lVar15 = thunk_FUN_01f894b8(lVar15,uVar17,0);
        if (plVar16 == (long *)0x0) goto LAB_01f92644;
        if ((lVar15 != 0) &&
           (lVar11 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0)) {
LAB_01f941d8:
          uVar17 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar17,0);
        }
        uVar7 = *(uint *)(plVar16 + 3);
      }
      if (uVar6 < uVar7) {
        plVar16[(long)(int)uVar6 + 4] = lVar15;
        thunk_FUN_01286abc(plVar16 + (long)(int)uVar6 + 4,lVar15);
LAB_01f94118:
        *unaff_x28 = (long)plVar16;
        thunk_FUN_01286abc(unaff_x28,plVar16);
        unaff_x24 = in_stack_00000040;
LAB_01f94128:
        if ((int)unaff_x24[3] != 0) {
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


