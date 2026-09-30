/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxLoadFromMemory
ENTRY_POINT: 01f92b0c
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


long OVRPlugin_OVRP_1_65_0__ovrp_KtxLoadFromMemory(long param_1)

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
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  uint unaff_w19;
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
  long unaff_x28;
  long lVar20;
  long *unaff_x29;
  long *in_stack_00000010;
  long in_stack_00000020;
  long *in_stack_00000028;
  uint in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  uint in_stack_00000050;
  long *in_stack_00000058;
  
  do {
    uVar17 = *(undefined8 *)(unaff_x26 + param_1 * 8 + 0x20);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
                    /* try { // try from 01f92b24 to 02092b93 has its CatchHandler @ 01f92c04 */
    uVar9 = FUN_01f7f404(unaff_x29,uVar17,0);
    if ((uVar9 & 1) == 0) {
      if ((in_stack_00000050 >> 0x12 & 1) != 0) {
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) break;
        lVar15 = *unaff_x24;
        if (lVar15 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar15 + 0x18) <= unaff_w20) break;
        lVar14 = *in_stack_00000058;
        if (lVar14 == 0) goto LAB_01f92644;
        uVar6 = *(uint *)(lVar15 + unaff_x28 * 4 + 0x20);
        if (*(uint *)(lVar14 + 0x18) <= uVar6) break;
        lVar15 = *unaff_x22;
        lVar14 = *(long *)(lVar14 + (long)(int)uVar6 * 8 + 0x20);
        if (*(int *)(lVar15 + 0xe0) == 0) {
                    /* try { // try from 01f92b94 to 02092baf has its CatchHandler @ 01f92368 */
          thunk_FUN_01220628();
          lVar15 = *unaff_x22;
        }
        if (lVar14 == *(long *)(*(long *)(lVar15 + 0xb8) + 0x18)) goto LAB_01f92e70;
      }
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) break;
      lVar15 = *unaff_x24;
      if (lVar15 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar15 + 0x18) <= unaff_w20) break;
      lVar14 = *in_stack_00000058;
      if (lVar14 == 0) goto LAB_01f92644;
      uVar6 = *(uint *)(lVar15 + unaff_x28 * 4 + 0x20);
      if (*(uint *)(lVar14 + 0x18) <= uVar6) break;
      if (*(long *)(lVar14 + (long)(int)uVar6 * 8 + 0x20) != 0) {
        uVar17 = *(undefined8 *)PTR_DAT_027b5b48;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar17 = FUN_01f7d8a0(uVar17,0);
        uVar9 = FUN_01f7f404(unaff_x29,uVar17,0);
        if ((uVar9 & 1) == 0) {
          if (unaff_x29 == (long *)0x0) goto LAB_01f92644;
          uVar9 = FUN_01f81644(unaff_x29,0);
          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) break;
          lVar15 = *unaff_x24;
          if (lVar15 == 0) goto LAB_01f92644;
          if ((*(uint *)(lVar15 + 0x18) <= unaff_w20) ||
             (uVar6 = *(uint *)(lVar15 + unaff_x28 * 4 + 0x20), *(uint *)(unaff_x26 + 0x18) <= uVar6
             )) break;
          uVar17 = *(undefined8 *)(unaff_x26 + (long)(int)uVar6 * 8 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar10 = FUN_01f7f404(uVar17,0,0);
          unaff_x22 = (long *)PTR_DAT_027b32e0;
          uVar6 = unaff_w20;
          if ((uVar9 & 1) == 0) {
            if ((uVar10 & 1) == 0) {
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) break;
              lVar15 = *unaff_x24;
              if (lVar15 == 0) goto LAB_01f92644;
              if ((*(uint *)(lVar15 + 0x18) <= unaff_w20) ||
                 (uVar7 = *(uint *)(lVar15 + unaff_x28 * 4 + 0x20),
                 *(uint *)(unaff_x26 + 0x18) <= uVar7)) break;
              uVar9 = (**(code **)(*unaff_x29 + 0x288))
                                (unaff_x29,*(undefined8 *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20),
                                 *(undefined8 *)(*unaff_x29 + 0x290));
              if ((uVar9 & 1) == 0) {
                if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
                  lVar15 = *unaff_x24;
                  if (lVar15 == 0) goto LAB_01f92644;
                  if ((unaff_w20 < *(uint *)(lVar15 + 0x18)) &&
                     (uVar7 = *(uint *)(lVar15 + unaff_x28 * 4 + 0x20),
                     uVar7 < *(uint *)(unaff_x26 + 0x18))) {
                    lVar15 = *(long *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
                    if (lVar15 == 0) goto LAB_01f92644;
                    uVar9 = FUN_01f81468(lVar15,0);
                    if ((uVar9 & 1) == 0) goto LAB_01f92e90;
                    if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
                      lVar15 = *unaff_x24;
                      if (lVar15 == 0) goto LAB_01f92644;
                      if (unaff_w20 < *(uint *)(lVar15 + 0x18)) {
                        lVar14 = *in_stack_00000058;
                        if (lVar14 == 0) goto LAB_01f92644;
                        uVar7 = *(uint *)(lVar15 + unaff_x28 * 4 + 0x20);
                        if (uVar7 < *(uint *)(lVar14 + 0x18)) {
                          uVar9 = (**(code **)(*unaff_x29 + 0x828))
                                            (unaff_x29,
                                             *(undefined8 *)(lVar14 + (long)(int)uVar7 * 8 + 0x20),
                                             *(undefined8 *)(*unaff_x29 + 0x830));
                          goto joined_r0x01f92d5c;
                        }
                      }
                    }
                  }
                }
                break;
              }
            }
          }
          else {
            if ((uVar10 & 1) != 0) goto LAB_01f92e90;
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) break;
            lVar15 = *unaff_x24;
            if (lVar15 == 0) goto LAB_01f92644;
            if (*(uint *)(lVar15 + 0x18) <= unaff_w20) break;
            lVar14 = *in_stack_00000058;
            if (lVar14 == 0) goto LAB_01f92644;
            uVar7 = *(uint *)(lVar15 + unaff_x28 * 4 + 0x20);
            if (*(uint *)(lVar14 + 0x18) <= uVar7) break;
            uVar17 = *(undefined8 *)(lVar14 + (long)(int)uVar7 * 8 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            bVar4 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
            if ((*(byte *)(*unaff_x29 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*unaff_x29 + 200) + (ulong)bVar4 * 8 + -8) !=
                *(long *)PTR_DAT_027b3ec0)) {
                    /* WARNING: Subroutine does not return */
              FUN_01230f60(unaff_x29);
            }
            uVar9 = FUN_01f9451c(uVar17,unaff_x29);
            unaff_x22 = (long *)PTR_DAT_027b32e0;
joined_r0x01f92d5c:
            if ((uVar9 & 1) == 0) goto LAB_01f92e90;
          }
        }
      }
    }
LAB_01f92e70:
    unaff_w20 = unaff_w20 + 1;
    uVar6 = unaff_w19;
    if (unaff_w19 == unaff_w20) {
LAB_01f92e90:
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar9 = FUN_01f801dc(in_stack_00000048,0,0);
      if (((uVar9 & 1) != 0) && (uVar6 == *(int *)(unaff_x27 + 0x18) - 1U)) {
        lVar15 = *in_stack_00000058;
        if (lVar15 == 0) goto LAB_01f92644;
        lVar14 = (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3) + 0x20;
        while ((int)uVar6 < *(int *)(lVar15 + 0x18)) {
          if ((in_stack_00000048 == (long *)0x0) ||
             (uVar9 = FUN_01f81644(in_stack_00000048,0), unaff_x26 == 0)) goto LAB_01f92644;
          if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_01f9340c;
          uVar17 = *(undefined8 *)(unaff_x26 + lVar14);
          if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar10 = FUN_01f7f404(uVar17,0,0);
          unaff_x22 = (long *)PTR_DAT_027b32e0;
          if ((uVar9 & 1) == 0) {
            if ((uVar10 & 1) == 0) {
              if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_01f9340c;
              uVar9 = (**(code **)(*in_stack_00000048 + 0x288))
                                (in_stack_00000048,*(undefined8 *)(unaff_x26 + lVar14),
                                 *(undefined8 *)(*in_stack_00000048 + 0x290));
              if ((uVar9 & 1) == 0) {
                if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_01f9340c;
                if (*(long *)(unaff_x26 + lVar14) == 0) goto LAB_01f92644;
                uVar9 = FUN_01f81468(*(long *)(unaff_x26 + lVar14),0);
                if ((uVar9 & 1) != 0) {
                  lVar15 = *in_stack_00000058;
                  if (lVar15 != 0) {
                    if (uVar6 < *(uint *)(lVar15 + 0x18)) {
                      uVar9 = (**(code **)(*in_stack_00000048 + 0x828))
                                        (in_stack_00000048,*(undefined8 *)(lVar15 + lVar14),
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
            lVar15 = *in_stack_00000058;
            if (lVar15 == 0) goto LAB_01f92644;
            if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_01f9340c;
            uVar17 = *(undefined8 *)(lVar15 + lVar14);
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
          lVar15 = *in_stack_00000058;
          uVar6 = uVar6 + 1;
          lVar14 = lVar14 + 8;
          if (lVar15 == 0) goto LAB_01f92644;
        }
      }
      if (*in_stack_00000058 != 0) {
        uVar9 = unaff_x25;
        if (uVar6 != *(uint *)(*in_stack_00000058 + 0x18)) goto LAB_01f93214;
        if (unaff_x23 != 0) {
          if ((unaff_x25 < *(uint *)(unaff_x23 + 0x18)) &&
             (in_stack_00000030 < *(uint *)(unaff_x23 + 0x18))) {
            lVar15 = (long)(int)in_stack_00000030;
            *(undefined8 *)(unaff_x23 + lVar15 * 8 + 0x20) =
                 *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20);
            thunk_FUN_01286abc();
            if (in_stack_00000038 != (long *)0x0) {
              if ((in_stack_00000048 == (long *)0x0) ||
                 (lVar14 = thunk_FUN_0124baac(in_stack_00000048,
                                              *(undefined8 *)(*in_stack_00000038 + 0x40)),
                 lVar14 != 0)) {
                if (in_stack_00000030 < *(uint *)(in_stack_00000038 + 3)) {
                  in_stack_00000038[lVar15 + 4] = (long)in_stack_00000048;
                  thunk_FUN_01286abc(in_stack_00000038 + lVar15 + 4,in_stack_00000048);
                  uVar9 = (ulong)*(uint *)(in_stack_00000040 + 3);
                  if (unaff_x25 < uVar9) {
                    lVar14 = *in_stack_00000028;
                    if (lVar14 == 0) goto LAB_01f93120;
LAB_01f93108:
                    lVar11 = thunk_FUN_0124baac(lVar14,*(undefined8 *)(*in_stack_00000040 + 0x40));
                    if (lVar11 != 0) {
                      uVar9 = in_stack_00000040[3];
LAB_01f93120:
                      if (in_stack_00000030 < (uint)uVar9) {
                        in_stack_00000040[lVar15 + 4] = lVar14;
                        in_stack_00000030 = in_stack_00000030 + 1;
                        thunk_FUN_01286abc(in_stack_00000040 + lVar15 + 4,lVar14);
                        unaff_x22 = (long *)PTR_DAT_027b32e0;
                        uVar9 = unaff_x25;
LAB_01f93214:
                        do {
                          uVar6 = *(uint *)(in_stack_00000040 + 3);
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
                              lVar14 = 0;
                              uVar6 = 0;
                              bVar2 = false;
                              goto LAB_01f932e8;
                            }
                            if (in_stack_00000020 != 0) {
                              if (unaff_x23 == 0) goto LAB_01f92644;
                              if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
                              if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_01f92644;
                              lVar15 = FUN_01f8a1a8(*(long *)(unaff_x23 + 0x20),0);
                              lVar14 = *in_stack_00000058;
                              if ((lVar14 == 0) || (in_stack_00000038 == (long *)0x0))
                              goto LAB_01f92644;
                              if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
                              lVar11 = in_stack_00000038[4];
                              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                                thunk_FUN_01220628();
                              }
                              bVar4 = FUN_01f801dc(lVar11,0,0);
                              lVar11 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
                              if (lVar15 == 0) {
                                lVar18 = 0;
                              }
                              else {
                                uVar17 = *(undefined8 *)PTR_DAT_027b1ca8;
                                lVar18 = thunk_FUN_0124baac(lVar15,uVar17);
                                if (lVar18 == 0) goto LAB_01f93580;
                              }
                              uVar17 = *(undefined8 *)(lVar14 + 0x18);
                              FUN_01fab77c(lVar11,0);
                              *(long *)(lVar11 + 0x10) = lVar18;
                              thunk_FUN_01286abc((long *)(lVar11 + 0x10),lVar18);
                              *(int *)(lVar11 + 0x18) = (int)uVar17;
                              *(byte *)(lVar11 + 0x1c) = bVar4 & 1;
                              *in_stack_00000010 = lVar11;
                              thunk_FUN_01286abc(in_stack_00000010,lVar11);
                              if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
                              uVar17 = *(undefined8 *)(unaff_x23 + 0x20);
                              lVar15 = *in_stack_00000058;
                              if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                                thunk_FUN_01220628();
                              }
                              FUN_01f94678(uVar17,lVar15);
                              uVar6 = (uint)in_stack_00000040[3];
                              unaff_x22 = (long *)PTR_DAT_027b32e0;
                            }
                            if (uVar6 == 0) goto LAB_01f9340c;
                            plVar8 = in_stack_00000040 + 4;
                            plVar16 = (long *)*plVar8;
                            if (((plVar16 == (long *)0x0) ||
                                (lVar15 = (**(code **)(*plVar16 + 0x378))
                                                    (plVar16,*(undefined8 *)(*plVar16 + 0x380)),
                                lVar15 == 0)) || (*in_stack_00000058 == 0)) goto LAB_01f92644;
                            iVar5 = *(int *)(*in_stack_00000058 + 0x18);
                            if (*(int *)(lVar15 + 0x18) != iVar5) {
                              if (iVar5 < *(int *)(lVar15 + 0x18)) {
                                plVar16 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
                                lVar14 = *in_stack_00000058;
                                if (lVar14 == 0) goto LAB_01f92644;
                                uVar9 = 0;
                                plVar12 = plVar16 + 4;
                                goto LAB_01f937fc;
                              }
                              if ((int)in_stack_00000040[3] == 0) goto LAB_01f9340c;
                              plVar16 = (long *)*plVar8;
                              if (plVar16 == (long *)0x0) goto LAB_01f92644;
                              uVar6 = (**(code **)(*plVar16 + 600))
                                                (plVar16,*(undefined8 *)(*plVar16 + 0x260));
                              if ((uVar6 >> 1 & 1) != 0) goto LAB_01f94128;
                              plVar16 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,
                                                             *(undefined4 *)(lVar15 + 0x18));
                              uVar6 = *(int *)(lVar15 + 0x18) - 1;
                              FUN_01f89ca0(*in_stack_00000058,0,plVar16,0,uVar6,0);
                              if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
                              if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
                              lVar14 = in_stack_00000038[4];
                              lVar15 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
                              if ((*in_stack_00000058 == 0) || (lVar15 == 0)) goto LAB_01f92644;
                              if (*(int *)(lVar15 + 0x18) == 0) goto LAB_01f9340c;
                              *(uint *)(lVar15 + 0x20) = *(int *)(*in_stack_00000058 + 0x18) - uVar6
                              ;
                              lVar15 = thunk_FUN_01f894b8(lVar14,lVar15,0);
                              if (plVar16 == (long *)0x0) goto LAB_01f92644;
                              if ((lVar15 != 0) &&
                                 (lVar14 = thunk_FUN_0124baac(lVar15,*(undefined8 *)
                                                                      (*plVar16 + 0x40)),
                                 lVar14 == 0)) goto LAB_01f941d8;
                              if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_01f9340c;
                              plVar12 = plVar16 + (long)(int)uVar6 + 4;
                              *plVar12 = lVar15;
                              thunk_FUN_01286abc(plVar12,lVar15);
                              if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_01f9340c;
                              lVar15 = *in_stack_00000058;
                              if (lVar15 == 0) goto LAB_01f92644;
                              plVar12 = (long *)*plVar12;
                              if (plVar12 != (long *)0x0) {
                                bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
                                if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
                                   (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
                                    *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
                              }
                              FUN_01f89ca0(lVar15,uVar6,plVar12,0,*(int *)(lVar15 + 0x18) - uVar6,0)
                              ;
                              *in_stack_00000058 = (long)plVar16;
                              thunk_FUN_01286abc(in_stack_00000058,plVar16);
                              goto LAB_01f94128;
                            }
                            if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
                            if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
                            lVar14 = in_stack_00000038[4];
                            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                              thunk_FUN_01220628();
                            }
                            uVar9 = FUN_01f801dc(lVar14,0,0);
                            if ((uVar9 & 1) == 0) goto LAB_01f94128;
                            plVar16 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,
                                                           *(undefined4 *)(lVar15 + 0x18));
                            uVar6 = *(int *)(lVar15 + 0x18) - 1;
                            FUN_01f89ca0(*in_stack_00000058,0,plVar16,0,uVar6,0);
                            if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
                            lVar14 = in_stack_00000038[4];
                            lVar15 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
                            if (lVar15 == 0) goto LAB_01f92644;
                            if (*(int *)(lVar15 + 0x18) == 0) goto LAB_01f9340c;
                            *(undefined4 *)(lVar15 + 0x20) = 1;
                            lVar15 = thunk_FUN_01f894b8(lVar14,lVar15,0);
                            if (plVar16 == (long *)0x0) goto LAB_01f92644;
                            if ((lVar15 != 0) &&
                               (lVar14 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar16 + 0x40))
                               , lVar14 == 0)) goto LAB_01f941d8;
                            if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_01f9340c;
                            plVar12 = plVar16 + (long)(int)uVar6 + 4;
                            *plVar12 = lVar15;
                            thunk_FUN_01286abc(plVar12,lVar15);
                            if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_01f9340c;
                            lVar15 = *in_stack_00000058;
                            if (lVar15 == 0) goto LAB_01f92644;
                            if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_01f9340c;
                            plVar12 = (long *)*plVar12;
                            if (plVar12 == (long *)0x0) goto LAB_01f92644;
                            bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
                            if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
                               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
                                *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
                            FUN_01f89750(plVar12,*(undefined8 *)
                                                  (lVar15 + (long)(int)uVar6 * 8 + 0x20),0,0);
                            goto LAB_01f94118;
                          }
                          if (uVar10 <= unaff_x25) goto LAB_01f9340c;
                          in_stack_00000028 = in_stack_00000040 + uVar9 + 5;
                          uVar10 = FUN_01ee539c(*in_stack_00000028,0,0);
                          uVar9 = unaff_x25;
                        } while ((uVar10 & 1) != 0);
                        if (*(uint *)(in_stack_00000040 + 3) <= unaff_x25) break;
                        plVar16 = (long *)*in_stack_00000028;
                        if ((plVar16 == (long *)0x0) ||
                           (unaff_x27 = (**(code **)(*plVar16 + 0x378))
                                                  (plVar16,*(undefined8 *)(*plVar16 + 0x380)),
                           unaff_x27 == 0)) goto LAB_01f92644;
                        uVar10 = *(ulong *)(unaff_x27 + 0x18);
                        lVar15 = *in_stack_00000058;
                        if (uVar10 == 0) {
                          if (lVar15 == 0) goto LAB_01f92644;
                          if (*(long *)(lVar15 + 0x18) == 0) goto LAB_01f92790;
                          if (*(uint *)(in_stack_00000040 + 3) <= unaff_x25) break;
                          plVar16 = (long *)*in_stack_00000028;
                          if (plVar16 == (long *)0x0) goto LAB_01f92644;
                          uVar6 = (**(code **)(*plVar16 + 600))
                                            (plVar16,*(undefined8 *)(*plVar16 + 0x260));
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
                              lVar14 = *(long *)PTR_DAT_027baa38;
                              if (*(int *)(lVar14 + 0xe0) == 0) {
                                thunk_FUN_01220628(lVar14);
                                lVar14 = *(long *)puVar3;
                              }
                              if (lVar15 == **(long **)(lVar14 + 0xb8)) {
                                uVar10 = (ulong)*(uint *)(unaff_x27 + 0x18);
                                uVar7 = *(uint *)(unaff_x27 + 0x18) - 1;
                                break;
                              }
                              uVar10 = *(ulong *)(unaff_x27 + 0x18);
                              uVar6 = uVar6 + 1;
                              plVar16 = plVar16 + 1;
                              uVar7 = (int)uVar10 - 1;
                            } while ((int)uVar6 < (int)uVar7);
                          }
                          if (uVar6 != uVar7) goto LAB_01f93214;
                          if ((uint)uVar10 <= uVar6) break;
                          plVar8 = (long *)(unaff_x27 + (long)(int)uVar6 * 8 + 0x20);
                          plVar16 = (long *)*plVar8;
                          if (plVar16 == (long *)0x0) goto LAB_01f92644;
                          lVar15 = (**(code **)(*plVar16 + 0x1f8))
                                             (plVar16,*(undefined8 *)(*plVar16 + 0x200));
                          puVar3 = PTR_DAT_027baa38;
                          lVar14 = *(long *)PTR_DAT_027baa38;
                          if (*(int *)(lVar14 + 0xe0) == 0) {
                            thunk_FUN_01220628(lVar14);
                            lVar14 = *(long *)puVar3;
                          }
                          if (lVar15 != **(long **)(lVar14 + 0xb8)) goto LAB_01f92a28;
                          if (*(uint *)(unaff_x27 + 0x18) <= uVar6) break;
                          plVar16 = (long *)*plVar8;
                          if ((plVar16 == (long *)0x0) ||
                             (lVar15 = (**(code **)(*plVar16 + 0x1d8))
                                                 (plVar16,*(undefined8 *)(*plVar16 + 0x1e0)),
                             lVar15 == 0)) goto LAB_01f92644;
                          uVar10 = FUN_01f80ec8(lVar15,0);
                          if ((uVar10 & 1) == 0) goto LAB_01f93214;
                          if (*(uint *)(unaff_x27 + 0x18) <= uVar6) break;
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
                          if (*(uint *)(unaff_x27 + 0x18) <= uVar6) break;
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
                          if (iVar5 == 0) break;
                          uVar7 = iVar5 - 1;
                          lVar15 = (long)(int)uVar7;
                          plVar8 = (long *)(unaff_x27 + lVar15 * 8 + 0x20);
                          plVar16 = (long *)*plVar8;
                          if ((plVar16 == (long *)0x0) ||
                             (lVar14 = (**(code **)(*plVar16 + 0x1d8))
                                                 (plVar16,*(undefined8 *)(*plVar16 + 0x1e0)),
                             lVar14 == 0)) goto LAB_01f92644;
                          uVar10 = FUN_01f80ec8(lVar14,0);
                          if (iVar5 < (int)uVar6) {
                            if ((uVar10 & 1) != 0) {
                              if (*(uint *)(unaff_x27 + 0x18) <= uVar7) break;
                              plVar16 = (long *)*plVar8;
                              uVar17 = *(undefined8 *)PTR_DAT_027c1be0;
                              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                                thunk_FUN_01220628();
                              }
                              uVar17 = FUN_01f7d8a0(uVar17,0);
                              if (plVar16 == (long *)0x0) goto LAB_01f92644;
                              uVar10 = (**(code **)(*plVar16 + 0x208))
                                                 (plVar16,uVar17,1,*(undefined8 *)(*plVar16 + 0x210)
                                                 );
                              unaff_x22 = (long *)PTR_DAT_027b32e0;
                              if ((uVar10 & 1) != 0) {
                                if (unaff_x23 == 0) goto LAB_01f92644;
                                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) break;
                                lVar14 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                                if (lVar14 == 0) goto LAB_01f92644;
                                if (*(uint *)(lVar14 + 0x18) <= uVar7) break;
                                if (*(uint *)(lVar14 + lVar15 * 4 + 0x20) == uVar7) {
LAB_01f9323c:
                                  if (*(uint *)(unaff_x27 + 0x18) <= uVar7) break;
                                  plVar8 = (long *)*plVar8;
                                  if ((plVar8 != (long *)0x0) &&
                                     (plVar16 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                                                  (plVar8,*(undefined8 *)
                                                                           (*plVar8 + 0x1e0)),
                                     plVar16 != (long *)0x0)) goto LAB_01f93264;
                                  goto LAB_01f92644;
                                }
                              }
                            }
                            goto LAB_01f93214;
                          }
                          if ((uVar10 & 1) != 0) {
                            if (*(uint *)(unaff_x27 + 0x18) <= uVar7) break;
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
                            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) break;
                            lVar14 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                            if (lVar14 == 0) goto LAB_01f92644;
                            if (*(uint *)(lVar14 + 0x18) <= uVar7) break;
                            if (*(uint *)(lVar14 + lVar15 * 4 + 0x20) != uVar7) goto LAB_01f92a28;
                            if (*(uint *)(unaff_x27 + 0x18) <= uVar7) break;
                            plVar16 = (long *)*plVar8;
                            if ((plVar16 == (long *)0x0) ||
                               (plVar16 = (long *)(**(code **)(*plVar16 + 0x1d8))
                                                            (plVar16,*(undefined8 *)
                                                                      (*plVar16 + 0x1e0)),
                               unaff_x26 == 0)) goto LAB_01f92644;
                            if (*(uint *)(unaff_x26 + 0x18) <= uVar7) break;
                            if (plVar16 == (long *)0x0) goto LAB_01f92644;
                            uVar9 = (**(code **)(*plVar16 + 0x288))
                                              (plVar16,*(undefined8 *)
                                                        (unaff_x26 + lVar15 * 8 + 0x20),
                                               *(undefined8 *)(*plVar16 + 0x290));
                            if ((uVar9 & 1) == 0) goto LAB_01f9323c;
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
                          if (*in_stack_00000058 == 0) goto LAB_01f92644;
                          unaff_w19 = *(uint *)(*in_stack_00000058 + 0x18);
                        }
                        else {
                          unaff_w19 = *(int *)(unaff_x27 + 0x18) - 1;
                        }
                        if ((int)unaff_w19 < 1) {
                          uVar6 = 0;
                          goto LAB_01f92e90;
                        }
                        unaff_w20 = 0;
                        unaff_x24 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                        goto LAB_01f92a7c;
                      }
                      break;
                    }
                    goto LAB_01f941d8;
                  }
                }
                break;
              }
              goto LAB_01f941d8;
            }
            goto LAB_01f92644;
          }
          break;
        }
      }
      goto LAB_01f92644;
    }
LAB_01f92a7c:
    if (*(uint *)(unaff_x27 + 0x18) <= unaff_w20) break;
    unaff_x28 = (long)(int)unaff_w20;
    plVar16 = *(long **)(unaff_x27 + unaff_x28 * 8 + 0x20);
    if ((plVar16 == (long *)0x0) ||
       (unaff_x29 = (long *)(**(code **)(*plVar16 + 0x1d8))
                                      (plVar16,*(undefined8 *)(*plVar16 + 0x1e0)),
       unaff_x29 == (long *)0x0)) goto LAB_01f92644;
    uVar9 = FUN_01f80ed8(unaff_x29,0);
    if ((uVar9 & 1) != 0) {
      unaff_x29 = (long *)(**(code **)(*unaff_x29 + 0x408))
                                    (unaff_x29,*(undefined8 *)(*unaff_x29 + 0x410));
    }
    if (unaff_x23 == 0) goto LAB_01f92644;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) break;
    lVar15 = *unaff_x24;
    if (lVar15 == 0) goto LAB_01f92644;
    if (*(uint *)(lVar15 + 0x18) <= unaff_w20) break;
    if (unaff_x26 == 0) goto LAB_01f92644;
    uVar6 = *(uint *)(lVar15 + unaff_x28 * 4 + 0x20);
    param_1 = (long)(int)uVar6;
  } while (uVar6 < *(uint *)(unaff_x26 + 0x18));
  goto LAB_01f9340c;
LAB_01f932e8:
  if (unaff_x23 == 0) goto LAB_01f92644;
  if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
  if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
  if (((((uint)in_stack_00000038[3] <= uVar6) || (uVar9 = lVar15 + 1, uVar10 <= uVar9)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar9)) ||
     ((in_stack_00000038[3] & 0xffffffffU) <= uVar9)) goto LAB_01f9340c;
  lVar18 = in_stack_00000040[lVar14 + 4];
  lVar20 = in_stack_00000040[lVar15 + 5];
  lVar11 = in_stack_00000038[lVar14 + 4];
  uVar17 = *(undefined8 *)(unaff_x23 + lVar14 * 8 + 0x20);
  uVar19 = *(undefined8 *)(unaff_x23 + 0x28 + lVar15 * 8);
  lVar14 = in_stack_00000038[lVar15 + 5];
  if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  iVar5 = FUN_01f947fc(lVar18,uVar17,lVar11,lVar20,uVar19,lVar14);
  if (iVar5 == 0) {
    bVar2 = true;
  }
  else if (iVar5 == 2) {
    uVar6 = (int)lVar15 + 1;
    bVar2 = false;
  }
  if ((ulong)in_stack_00000030 - 2 != lVar15) {
    lVar14 = (long)(int)uVar6;
    lVar15 = lVar15 + 1;
    uVar10 = in_stack_00000040[3] & 0xffffffff;
    if ((uint)in_stack_00000040[3] <= uVar6) goto LAB_01f9340c;
    goto LAB_01f932e8;
  }
  unaff_x22 = (long *)PTR_DAT_027b32e0;
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
    lVar14 = *in_stack_00000058;
    if ((lVar14 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_01f92644;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
    lVar11 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    bVar4 = FUN_01f801dc(lVar11,0,0);
    lVar11 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
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
    uVar17 = *(undefined8 *)(lVar14 + 0x18);
    FUN_01fab77c(lVar11,0);
    *(long *)(lVar11 + 0x10) = lVar18;
    thunk_FUN_01286abc((long *)(lVar11 + 0x10),lVar18);
    *(int *)(lVar11 + 0x18) = (int)uVar17;
    *(byte *)(lVar11 + 0x1c) = bVar4 & 1;
    *in_stack_00000010 = lVar11;
    thunk_FUN_01286abc(in_stack_00000010,lVar11);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
    lVar15 = *plVar16;
    lVar14 = *in_stack_00000058;
    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f94678(lVar15,lVar14);
    unaff_x22 = (long *)PTR_DAT_027b32e0;
  }
  if (*(uint *)(in_stack_00000040 + 3) <= uVar6) goto LAB_01f9340c;
  plVar8 = in_stack_00000040 + (long)(int)uVar6 + 4;
  plVar16 = (long *)*plVar8;
  if (((plVar16 == (long *)0x0) ||
      (lVar15 = (**(code **)(*plVar16 + 0x378))(plVar16,*(undefined8 *)(*plVar16 + 0x380)),
      lVar15 == 0)) || (*in_stack_00000058 == 0)) goto LAB_01f92644;
  iVar5 = *(int *)(*in_stack_00000058 + 0x18);
  if (*(int *)(lVar15 + 0x18) == iVar5) {
    if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
    lVar14 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar9 = FUN_01f801dc(lVar14,0,0);
    if ((uVar9 & 1) != 0) {
      plVar16 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar15 + 0x18))
      ;
      uVar7 = *(int *)(lVar15 + 0x18) - 1;
      FUN_01f89ca0(*in_stack_00000058,0,plVar16,0,uVar7,0);
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
      lVar14 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar15 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if (lVar15 == 0) goto LAB_01f92644;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_01f9340c;
      *(undefined4 *)(lVar15 + 0x20) = 1;
      lVar15 = thunk_FUN_01f894b8(lVar14,lVar15,0);
      if (plVar16 == (long *)0x0) goto LAB_01f92644;
      if ((lVar15 != 0) &&
         (lVar14 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_01f9340c;
      plVar12 = plVar16 + (long)(int)uVar7 + 4;
      *plVar12 = lVar15;
      thunk_FUN_01286abc(plVar12,lVar15);
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_01f9340c;
      lVar15 = *in_stack_00000058;
      if (lVar15 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_01f9340c;
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
      FUN_01f89750(plVar12,*(undefined8 *)(lVar15 + (long)(int)uVar7 * 8 + 0x20),0,0);
      goto FUN_01f94198;
    }
  }
  else {
    if (iVar5 < *(int *)(lVar15 + 0x18)) {
      plVar16 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
      lVar14 = *in_stack_00000058;
      if (lVar14 == 0) goto LAB_01f92644;
      uVar9 = 0;
      plVar12 = plVar16 + 4;
      do {
        if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar9) {
          uVar7 = *(uint *)(lVar15 + 0x18);
          if ((int)uVar9 < (int)(uVar7 - 1)) {
            do {
              if (uVar7 <= (uint)uVar9) goto LAB_01f9340c;
              plVar13 = *(long **)(lVar15 + 0x20 + uVar9 * 8);
              if ((plVar13 == (long *)0x0) ||
                 (lVar14 = (**(code **)(*plVar13 + 0x1f8))
                                     (plVar13,*(undefined8 *)(*plVar13 + 0x200)),
                 plVar16 == (long *)0x0)) goto LAB_01f92644;
              if ((lVar14 != 0) &&
                 (lVar11 = thunk_FUN_0124baac(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0)
                 ) goto LAB_01f941d8;
              if (*(uint *)(plVar16 + 3) <= (uint)uVar9) goto LAB_01f9340c;
              *plVar12 = lVar14;
              thunk_FUN_01286abc(plVar12,lVar14);
              uVar7 = *(uint *)(lVar15 + 0x18);
              uVar9 = uVar9 + 1;
              plVar12 = plVar12 + 1;
            } while ((int)uVar9 < (int)(uVar7 - 1));
          }
          if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
          if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
          lVar14 = in_stack_00000038[(long)(int)uVar6 + 4];
          if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar10 = FUN_01f801dc(lVar14,0,0);
          uVar7 = (uint)uVar9;
          if ((uVar10 & 1) == 0) {
            if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_01f9340c;
            plVar12 = *(long **)(lVar15 + (long)(int)uVar7 * 8 + 0x20);
            if ((plVar12 == (long *)0x0) ||
               (lVar15 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200)),
               plVar16 == (long *)0x0)) goto LAB_01f92644;
            if ((lVar15 != 0) &&
               (lVar14 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0))
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
               (lVar14 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0))
            goto LAB_01f941d8;
            uVar1 = *(uint *)(plVar16 + 3);
          }
          if (uVar1 <= uVar7) goto LAB_01f9340c;
          plVar16[(long)(int)uVar7 + 4] = lVar15;
          thunk_FUN_01286abc(plVar16 + (long)(int)uVar7 + 4,lVar15);
FUN_01f94198:
          *in_stack_00000058 = (long)plVar16;
          thunk_FUN_01286abc(in_stack_00000058,plVar16);
          goto OVRPlugin_UnityOpenXR__OnSessionExiting;
        }
        if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_01f9340c;
        if (plVar16 == (long *)0x0) goto LAB_01f92644;
        lVar14 = *(long *)(lVar14 + uVar9 * 8 + 0x20);
        if ((lVar14 != 0) &&
           (lVar11 = thunk_FUN_0124baac(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
        goto LAB_01f941d8;
        if (*(uint *)(plVar16 + 3) <= uVar9) goto LAB_01f9340c;
        *plVar12 = lVar14;
        thunk_FUN_01286abc(plVar12,lVar14);
        lVar14 = *in_stack_00000058;
        uVar9 = uVar9 + 1;
        plVar12 = plVar12 + 1;
        if (lVar14 == 0) goto LAB_01f92644;
      } while( true );
    }
    if (*(uint *)(in_stack_00000040 + 3) <= uVar6) goto LAB_01f9340c;
    plVar16 = (long *)*plVar8;
    if (plVar16 == (long *)0x0) goto LAB_01f92644;
    uVar7 = (**(code **)(*plVar16 + 600))(plVar16,*(undefined8 *)(*plVar16 + 0x260));
    if ((uVar7 >> 1 & 1) == 0) {
      plVar16 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar15 + 0x18))
      ;
      uVar7 = *(int *)(lVar15 + 0x18) - 1;
      FUN_01f89ca0(*in_stack_00000058,0,plVar16,0,uVar7,0);
      if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
      lVar14 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar15 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if ((*in_stack_00000058 == 0) || (lVar15 == 0)) goto LAB_01f92644;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_01f9340c;
      *(uint *)(lVar15 + 0x20) = *(int *)(*in_stack_00000058 + 0x18) - uVar7;
      lVar15 = thunk_FUN_01f894b8(lVar14,lVar15,0);
      if (plVar16 == (long *)0x0) goto LAB_01f92644;
      if ((lVar15 != 0) &&
         (lVar14 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_01f9340c;
      plVar12 = plVar16 + (long)(int)uVar7 + 4;
      *plVar12 = lVar15;
      thunk_FUN_01286abc(plVar12,lVar15);
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_01f9340c;
      lVar15 = *in_stack_00000058;
      if (lVar15 == 0) goto LAB_01f92644;
      plVar12 = (long *)*plVar12;
      if (plVar12 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
      }
      FUN_01f89ca0(lVar15,uVar7,plVar12,0,*(int *)(lVar15 + 0x18) - uVar7,0);
      *in_stack_00000058 = (long)plVar16;
      thunk_FUN_01286abc(in_stack_00000058,plVar16);
    }
  }
OVRPlugin_UnityOpenXR__OnSessionExiting:
  if (uVar6 < *(uint *)(in_stack_00000040 + 3)) goto LAB_01f941b4;
  goto LAB_01f9340c;
LAB_01f92790:
  if (unaff_x23 == 0) goto LAB_01f92644;
  if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) ||
     (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000030)) goto LAB_01f9340c;
  lVar15 = (long)(int)in_stack_00000030;
  *(undefined8 *)(unaff_x23 + lVar15 * 8 + 0x20) = *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20)
  ;
  thunk_FUN_01286abc();
  uVar9 = (ulong)*(uint *)(in_stack_00000040 + 3);
  if (uVar9 <= unaff_x25) goto LAB_01f9340c;
  lVar14 = *in_stack_00000028;
  if (lVar14 != 0) goto LAB_01f93108;
  goto LAB_01f93120;
  while( true ) {
    lVar14 = *(long *)(lVar14 + uVar9 * 8 + 0x20);
    if ((lVar14 != 0) &&
       (lVar11 = thunk_FUN_0124baac(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar16 + 3) <= uVar9) goto LAB_01f9340c;
    *plVar12 = lVar14;
    thunk_FUN_01286abc(plVar12,lVar14);
    lVar14 = *in_stack_00000058;
    uVar9 = uVar9 + 1;
    plVar12 = plVar12 + 1;
    if (lVar14 == 0) break;
LAB_01f937fc:
    if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar9) {
      uVar6 = *(uint *)(lVar15 + 0x18);
      if ((int)(uVar6 - 1) <= (int)uVar9) goto LAB_01f93a68;
      goto LAB_01f939f4;
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_01f9340c;
    if (plVar16 == (long *)0x0) break;
  }
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
  while( true ) {
    plVar13 = *(long **)(lVar15 + 0x20 + uVar9 * 8);
    if ((plVar13 == (long *)0x0) ||
       (lVar14 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200)),
       plVar16 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar14 != 0) &&
       (lVar11 = thunk_FUN_0124baac(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar16 + 3) <= (uint)uVar9) goto LAB_01f9340c;
    *plVar12 = lVar14;
    thunk_FUN_01286abc(plVar12,lVar14);
    uVar6 = *(uint *)(lVar15 + 0x18);
    uVar9 = uVar9 + 1;
    plVar12 = plVar12 + 1;
    if ((int)(uVar6 - 1) <= (int)uVar9) break;
LAB_01f939f4:
    if (uVar6 <= (uint)uVar9) goto LAB_01f9340c;
  }
LAB_01f93a68:
  if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
  if ((int)in_stack_00000038[3] != 0) {
    lVar14 = in_stack_00000038[4];
    if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar10 = FUN_01f801dc(lVar14,0,0);
    uVar6 = (uint)uVar9;
    if ((uVar10 & 1) == 0) {
      if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_01f9340c;
      plVar12 = *(long **)(lVar15 + (long)(int)uVar6 * 8 + 0x20);
      if ((plVar12 == (long *)0x0) ||
         (lVar15 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200)),
         plVar16 == (long *)0x0)) goto LAB_01f92644;
      if ((lVar15 != 0) &&
         (lVar14 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0))
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
         (lVar14 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0)) {
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
      *in_stack_00000058 = (long)plVar16;
      thunk_FUN_01286abc(in_stack_00000058,plVar16);
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


