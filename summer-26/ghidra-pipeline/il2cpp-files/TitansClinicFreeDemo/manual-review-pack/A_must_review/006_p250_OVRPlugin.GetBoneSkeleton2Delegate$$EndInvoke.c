/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton2Delegate$$EndInvoke
ENTRY_POINT: 01f92988
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 135
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long OVRPlugin_GetBoneSkeleton2Delegate__EndInvoke(long *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  uint in_w8;
  long lVar13;
  long lVar14;
  uint uVar15;
  long *unaff_x20;
  long *plVar16;
  undefined8 uVar17;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar18;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 uVar19;
  long *unaff_x28;
  long lVar20;
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
  
code_r0x01f92988:
                    /* try { // try from 01f9298c to 02092993 has its CatchHandler @ 01f929c8 */
  if ((uint)unaff_x24 < in_w8) {
    if (param_1 != (long *)0x0) {
                    /* try { // try from 01f92994 to 0209299b has its CatchHandler @ 01f929ec */
                    /* try { // try from 01f9299c to 0209299f has its CatchHandler @ 01f929c4 */
                    /* try { // try from 01f929a0 to 020929a3 has its CatchHandler @ 01f929bc */
                    /* try { // try from 01f929a4 to 020929ab has its CatchHandler @ 01f929e8 */
      uVar8 = (**(code **)(*param_1 + 0x288))
                        (param_1,*(undefined8 *)(unaff_x26 + unaff_x24 * 8 + 0x20),
                         *(undefined8 *)(*param_1 + 0x290));
                    /* try { // try from 01f929ac to 020929af has its CatchHandler @ 01f929b8 */
      if ((uVar8 & 1) == 0) goto LAB_01f9323c;
LAB_01f92a28:
      plStack0000000000000048 = (long *)0x0;
LAB_01f92a2c:
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar8 = FUN_01f801dc(plStack0000000000000048,0,0);
      if ((uVar8 & 1) == 0) {
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
        plVar16 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
        do {
          if (*(uint *)(unaff_x27 + 0x18) <= uVar15) goto LAB_01f9340c;
          lVar20 = (long)(int)uVar15;
          plVar9 = *(long **)(unaff_x27 + lVar20 * 8 + 0x20);
          if ((plVar9 == (long *)0x0) ||
             (plVar9 = (long *)(**(code **)(*plVar9 + 0x1d8))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x1e0)),
             plVar9 == (long *)0x0)) goto LAB_01f92644;
          uVar8 = FUN_01f80ed8(plVar9,0);
          if ((uVar8 & 1) != 0) {
            plVar9 = (long *)(**(code **)(*plVar9 + 0x408))(plVar9,*(undefined8 *)(*plVar9 + 0x410))
            ;
          }
          if (unaff_x23 == 0) goto LAB_01f92644;
          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
          lVar13 = *plVar16;
          if (lVar13 == 0) goto LAB_01f92644;
          if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_01f9340c;
          if (unaff_x26 == 0) goto LAB_01f92644;
          uVar7 = *(uint *)(lVar13 + lVar20 * 4 + 0x20);
          if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
          uVar17 = *(undefined8 *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar8 = FUN_01f7f404(plVar9,uVar17,0);
          if ((uVar8 & 1) == 0) {
            if ((in_stack_00000050 >> 0x12 & 1) != 0) {
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
              lVar13 = *plVar16;
              if (lVar13 == 0) goto LAB_01f92644;
              if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_01f9340c;
              lVar14 = *in_stack_00000058;
              if (lVar14 == 0) goto LAB_01f92644;
              uVar7 = *(uint *)(lVar13 + lVar20 * 4 + 0x20);
              if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_01f9340c;
              lVar13 = *unaff_x22;
              lVar14 = *(long *)(lVar14 + (long)(int)uVar7 * 8 + 0x20);
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01220628();
                lVar13 = *unaff_x22;
              }
              if (lVar14 == *(long *)(*(long *)(lVar13 + 0xb8) + 0x18)) goto LAB_01f92e70;
            }
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
            lVar13 = *plVar16;
            if (lVar13 == 0) goto LAB_01f92644;
            if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_01f9340c;
            lVar14 = *in_stack_00000058;
            if (lVar14 == 0) goto LAB_01f92644;
            uVar7 = *(uint *)(lVar13 + lVar20 * 4 + 0x20);
            if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_01f9340c;
            if (*(long *)(lVar14 + (long)(int)uVar7 * 8 + 0x20) != 0) {
              uVar17 = *(undefined8 *)PTR_DAT_027b5b48;
              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              uVar17 = FUN_01f7d8a0(uVar17,0);
              uVar8 = FUN_01f7f404(plVar9,uVar17,0);
              if ((uVar8 & 1) == 0) {
                if (plVar9 == (long *)0x0) goto LAB_01f92644;
                uVar8 = FUN_01f81644(plVar9,0);
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                lVar13 = *plVar16;
                if (lVar13 == 0) goto LAB_01f92644;
                if ((*(uint *)(lVar13 + 0x18) <= uVar15) ||
                   (uVar7 = *(uint *)(lVar13 + lVar20 * 4 + 0x20),
                   *(uint *)(unaff_x26 + 0x18) <= uVar7)) goto LAB_01f9340c;
                uVar17 = *(undefined8 *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                }
                uVar10 = FUN_01f7f404(uVar17,0,0);
                unaff_x22 = (long *)PTR_DAT_027b32e0;
                uVar7 = uVar15;
                if ((uVar8 & 1) == 0) {
                  if ((uVar10 & 1) == 0) {
                    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                    lVar13 = *plVar16;
                    if (lVar13 == 0) goto LAB_01f92644;
                    if ((*(uint *)(lVar13 + 0x18) <= uVar15) ||
                       (uVar1 = *(uint *)(lVar13 + lVar20 * 4 + 0x20),
                       *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_01f9340c;
                    uVar8 = (**(code **)(*plVar9 + 0x288))
                                      (plVar9,*(undefined8 *)
                                               (unaff_x26 + (long)(int)uVar1 * 8 + 0x20),
                                       *(undefined8 *)(*plVar9 + 0x290));
                    if ((uVar8 & 1) == 0) {
                      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                      lVar13 = *plVar16;
                      if (lVar13 == 0) goto LAB_01f92644;
                      if ((*(uint *)(lVar13 + 0x18) <= uVar15) ||
                         (uVar1 = *(uint *)(lVar13 + lVar20 * 4 + 0x20),
                         *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_01f9340c;
                      lVar13 = *(long *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20);
                      if (lVar13 == 0) goto LAB_01f92644;
                      uVar8 = FUN_01f81468(lVar13,0);
                      unaff_x28 = in_stack_00000058;
                      if ((uVar8 & 1) != 0) {
                        if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
                          lVar13 = *plVar16;
                          if (lVar13 != 0) {
                            if (uVar15 < *(uint *)(lVar13 + 0x18)) {
                              lVar14 = *in_stack_00000058;
                              if (lVar14 != 0) {
                                uVar1 = *(uint *)(lVar13 + lVar20 * 4 + 0x20);
                                if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                  uVar8 = (**(code **)(*plVar9 + 0x828))
                                                    (plVar9,*(undefined8 *)
                                                             (lVar14 + (long)(int)uVar1 * 8 + 0x20),
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
                  unaff_x28 = in_stack_00000058;
                  if ((uVar10 & 1) != 0) break;
                  if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                  lVar13 = *plVar16;
                  if (lVar13 == 0) goto LAB_01f92644;
                  if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_01f9340c;
                  lVar14 = *in_stack_00000058;
                  if (lVar14 == 0) goto LAB_01f92644;
                  uVar1 = *(uint *)(lVar13 + lVar20 * 4 + 0x20);
                  if (*(uint *)(lVar14 + 0x18) <= uVar1) goto LAB_01f9340c;
                  uVar17 = *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
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
                  uVar8 = FUN_01f9451c(uVar17,plVar9);
                  unaff_x22 = (long *)PTR_DAT_027b32e0;
joined_r0x01f92e6c:
                  unaff_x28 = in_stack_00000058;
                  if ((uVar8 & 1) == 0) break;
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
      uVar8 = FUN_01f801dc(plStack0000000000000048,0,0);
      if (((uVar8 & 1) != 0) && (uVar7 == *(int *)(unaff_x27 + 0x18) - 1U)) {
        lVar20 = *unaff_x28;
        if (lVar20 == 0) goto LAB_01f92644;
        lVar13 = (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3) + 0x20;
        while ((int)uVar7 < *(int *)(lVar20 + 0x18)) {
          if ((plStack0000000000000048 == (long *)0x0) ||
             (uVar8 = FUN_01f81644(plStack0000000000000048,0), unaff_x26 == 0)) goto LAB_01f92644;
          if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
          uVar17 = *(undefined8 *)(unaff_x26 + lVar13);
          if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar10 = FUN_01f7f404(uVar17,0,0);
          unaff_x22 = (long *)PTR_DAT_027b32e0;
          if ((uVar8 & 1) == 0) {
            if ((uVar10 & 1) == 0) {
              if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
              uVar8 = (**(code **)(*plStack0000000000000048 + 0x288))
                                (plStack0000000000000048,*(undefined8 *)(unaff_x26 + lVar13),
                                 *(undefined8 *)(*plStack0000000000000048 + 0x290));
              if ((uVar8 & 1) == 0) {
                if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_01f9340c;
                if (*(long *)(unaff_x26 + lVar13) == 0) goto LAB_01f92644;
                uVar8 = FUN_01f81468(*(long *)(unaff_x26 + lVar13),0);
                if ((uVar8 & 1) != 0) {
                  lVar20 = *unaff_x28;
                  if (lVar20 != 0) {
                    if (uVar7 < *(uint *)(lVar20 + 0x18)) {
                      uVar8 = (**(code **)(*plStack0000000000000048 + 0x828))
                                        (plStack0000000000000048,*(undefined8 *)(lVar20 + lVar13),
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
            lVar20 = *unaff_x28;
            if (lVar20 == 0) goto LAB_01f92644;
            if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_01f9340c;
            uVar17 = *(undefined8 *)(lVar20 + lVar13);
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
            uVar8 = FUN_01f9451c(uVar17,plStack0000000000000048);
            unaff_x22 = (long *)PTR_DAT_027b32e0;
joined_r0x01f93040:
            if ((uVar8 & 1) == 0) break;
          }
          lVar20 = *unaff_x28;
          uVar7 = uVar7 + 1;
          lVar13 = lVar13 + 8;
          if (lVar20 == 0) goto LAB_01f92644;
        }
      }
      if (*unaff_x28 != 0) {
        uVar8 = unaff_x25;
        if (uVar7 != *(uint *)(*unaff_x28 + 0x18)) goto LAB_01f93214;
        if (unaff_x23 != 0) {
          if ((unaff_x25 < *(uint *)(unaff_x23 + 0x18)) &&
             (in_stack_00000030 < *(uint *)(unaff_x23 + 0x18))) {
            lVar20 = (long)(int)in_stack_00000030;
            *(undefined8 *)(unaff_x23 + lVar20 * 8 + 0x20) =
                 *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20);
            thunk_FUN_01286abc();
            if (in_stack_00000038 != (long *)0x0) {
              if ((plStack0000000000000048 == (long *)0x0) ||
                 (lVar13 = thunk_FUN_0124baac(plStack0000000000000048,
                                              *(undefined8 *)(*in_stack_00000038 + 0x40)),
                 lVar13 != 0)) {
                if (in_stack_00000030 < *(uint *)(in_stack_00000038 + 3)) {
                  in_stack_00000038[lVar20 + 4] = (long)plStack0000000000000048;
                  thunk_FUN_01286abc(in_stack_00000038 + lVar20 + 4,plStack0000000000000048);
                  uVar8 = (ulong)*(uint *)(in_stack_00000040 + 3);
                  if (unaff_x25 < uVar8) {
                    lVar13 = *in_stack_00000028;
                    do {
                      uVar6 = (uint)uVar8;
                      if (lVar13 != 0) {
                        lVar14 = thunk_FUN_0124baac(lVar13,*(undefined8 *)
                                                            (*in_stack_00000040 + 0x40));
                        if (lVar14 == 0) goto LAB_01f941d8;
                        uVar6 = (uint)in_stack_00000040[3];
                      }
                      if (uVar6 <= in_stack_00000030) break;
                      in_stack_00000040[lVar20 + 4] = lVar13;
                      in_stack_00000030 = in_stack_00000030 + 1;
                      thunk_FUN_01286abc(in_stack_00000040 + lVar20 + 4,lVar13);
                      unaff_x22 = (long *)PTR_DAT_027b32e0;
                      uVar8 = unaff_x25;
LAB_01f93214:
                      do {
                        while( true ) {
                          do {
                            uVar6 = *(uint *)(in_stack_00000040 + 3);
                            uVar10 = (ulong)uVar6;
                            unaff_x25 = uVar8 + 1;
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
                                lVar20 = 0;
                                lVar13 = 0;
                                uVar6 = 0;
                                bVar2 = false;
                                goto LAB_01f932e8;
                              }
                              if (in_stack_00000020 != 0) {
                                if (unaff_x23 == 0) goto LAB_01f92644;
                                if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
                                if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_01f92644;
                                lVar20 = FUN_01f8a1a8(*(long *)(unaff_x23 + 0x20),0);
                                lVar13 = *unaff_x28;
                                if ((lVar13 == 0) || (in_stack_00000038 == (long *)0x0))
                                goto LAB_01f92644;
                                if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
                                lVar14 = in_stack_00000038[4];
                                if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                                  thunk_FUN_01220628();
                                }
                                bVar4 = FUN_01f801dc(lVar14,0,0);
                                lVar14 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
                                if (lVar20 == 0) {
                                  lVar18 = 0;
                                }
                                else {
                                  uVar17 = *(undefined8 *)PTR_DAT_027b1ca8;
                                  lVar18 = thunk_FUN_0124baac(lVar20,uVar17);
                                  if (lVar18 == 0) goto LAB_01f93580;
                                }
                                uVar17 = *(undefined8 *)(lVar13 + 0x18);
                                FUN_01fab77c(lVar14,0);
                                *(long *)(lVar14 + 0x10) = lVar18;
                                thunk_FUN_01286abc((long *)(lVar14 + 0x10),lVar18);
                                *(int *)(lVar14 + 0x18) = (int)uVar17;
                                *(byte *)(lVar14 + 0x1c) = bVar4 & 1;
                                *in_stack_00000010 = lVar14;
                                thunk_FUN_01286abc(in_stack_00000010,lVar14);
                                if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
                                uVar17 = *(undefined8 *)(unaff_x23 + 0x20);
                                lVar20 = *unaff_x28;
                                if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                                  thunk_FUN_01220628();
                                }
                                FUN_01f94678(uVar17,lVar20);
                                uVar6 = (uint)in_stack_00000040[3];
                                unaff_x22 = (long *)PTR_DAT_027b32e0;
                              }
                              if (uVar6 == 0) goto LAB_01f9340c;
                              plVar9 = in_stack_00000040 + 4;
                              plVar16 = (long *)*plVar9;
                              if (((plVar16 == (long *)0x0) ||
                                  (lVar20 = (**(code **)(*plVar16 + 0x378))
                                                      (plVar16,*(undefined8 *)(*plVar16 + 0x380)),
                                  lVar20 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
                              iVar5 = *(int *)(*unaff_x28 + 0x18);
                              if (*(int *)(lVar20 + 0x18) != iVar5) {
                                if (iVar5 < *(int *)(lVar20 + 0x18)) {
                                  plVar16 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
                                  lVar13 = *unaff_x28;
                                  if (lVar13 == 0) goto LAB_01f92644;
                                  uVar8 = 0;
                                  plVar11 = plVar16 + 4;
                                  goto LAB_01f937fc;
                                }
                                if ((int)in_stack_00000040[3] == 0) goto LAB_01f9340c;
                                plVar16 = (long *)*plVar9;
                                if (plVar16 == (long *)0x0) goto LAB_01f92644;
                                uVar6 = (**(code **)(*plVar16 + 600))
                                                  (plVar16,*(undefined8 *)(*plVar16 + 0x260));
                                if ((uVar6 >> 1 & 1) != 0) goto LAB_01f94128;
                                plVar16 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,
                                                               *(undefined4 *)(lVar20 + 0x18));
                                uVar6 = *(int *)(lVar20 + 0x18) - 1;
                                FUN_01f89ca0(*unaff_x28,0,plVar16,0,uVar6,0);
                                if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
                                if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
                                lVar13 = in_stack_00000038[4];
                                lVar20 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
                                if ((*unaff_x28 == 0) || (lVar20 == 0)) goto LAB_01f92644;
                                if (*(int *)(lVar20 + 0x18) == 0) goto LAB_01f9340c;
                                *(uint *)(lVar20 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar6;
                                lVar20 = thunk_FUN_01f894b8(lVar13,lVar20,0);
                                if (plVar16 == (long *)0x0) goto LAB_01f92644;
                                if ((lVar20 != 0) &&
                                   (lVar13 = thunk_FUN_0124baac(lVar20,*(undefined8 *)
                                                                        (*plVar16 + 0x40)),
                                   lVar13 == 0)) goto LAB_01f941d8;
                                if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_01f9340c;
                                plVar11 = plVar16 + (long)(int)uVar6 + 4;
                                *plVar11 = lVar20;
                                thunk_FUN_01286abc(plVar11,lVar20);
                                if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_01f9340c;
                                lVar20 = *unaff_x28;
                                if (lVar20 == 0) goto LAB_01f92644;
                                plVar11 = (long *)*plVar11;
                                if (plVar11 != (long *)0x0) {
                                  bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
                                  if ((*(byte *)(*plVar11 + 0x130) < bVar4) ||
                                     (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar4 * 8 + -8)
                                      != *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
                                }
                                FUN_01f89ca0(lVar20,uVar6,plVar11,0,*(int *)(lVar20 + 0x18) - uVar6,
                                             0);
                                *unaff_x28 = (long)plVar16;
                                thunk_FUN_01286abc(unaff_x28,plVar16);
                                goto LAB_01f94128;
                              }
                              if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
                              if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
                              lVar13 = in_stack_00000038[4];
                              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                                thunk_FUN_01220628();
                              }
                              uVar8 = FUN_01f801dc(lVar13,0,0);
                              if ((uVar8 & 1) == 0) goto LAB_01f94128;
                              plVar16 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,
                                                             *(undefined4 *)(lVar20 + 0x18));
                              uVar6 = *(int *)(lVar20 + 0x18) - 1;
                              FUN_01f89ca0(*unaff_x28,0,plVar16,0,uVar6,0);
                              if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
                              lVar13 = in_stack_00000038[4];
                              lVar20 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
                              if (lVar20 == 0) goto LAB_01f92644;
                              if (*(int *)(lVar20 + 0x18) == 0) goto LAB_01f9340c;
                              *(undefined4 *)(lVar20 + 0x20) = 1;
                              lVar20 = thunk_FUN_01f894b8(lVar13,lVar20,0);
                              if (plVar16 == (long *)0x0) goto LAB_01f92644;
                              if ((lVar20 != 0) &&
                                 (lVar13 = thunk_FUN_0124baac(lVar20,*(undefined8 *)
                                                                      (*plVar16 + 0x40)),
                                 lVar13 == 0)) goto LAB_01f941d8;
                              if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_01f9340c;
                              plVar11 = plVar16 + (long)(int)uVar6 + 4;
                              *plVar11 = lVar20;
                              thunk_FUN_01286abc(plVar11,lVar20);
                              if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_01f9340c;
                              lVar20 = *unaff_x28;
                              if (lVar20 == 0) goto LAB_01f92644;
                              if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_01f9340c;
                              plVar11 = (long *)*plVar11;
                              if (plVar11 == (long *)0x0) goto LAB_01f92644;
                              bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
                              if ((*(byte *)(*plVar11 + 0x130) < bVar4) ||
                                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar4 * 8 + -8) !=
                                  *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
                              FUN_01f89750(plVar11,*(undefined8 *)
                                                    (lVar20 + (long)(int)uVar6 * 8 + 0x20),0,0);
                              goto LAB_01f94118;
                            }
                            if (uVar10 <= unaff_x25) goto LAB_01f9340c;
                            in_stack_00000028 = in_stack_00000040 + uVar8 + 5;
                            uVar10 = FUN_01ee539c(*in_stack_00000028,0,0);
                            uVar8 = unaff_x25;
                          } while ((uVar10 & 1) != 0);
                          if (*(uint *)(in_stack_00000040 + 3) <= unaff_x25) goto LAB_01f9340c;
                          plVar16 = (long *)*in_stack_00000028;
                          if ((plVar16 == (long *)0x0) ||
                             (unaff_x27 = (**(code **)(*plVar16 + 0x378))
                                                    (plVar16,*(undefined8 *)(*plVar16 + 0x380)),
                             unaff_x27 == 0)) goto LAB_01f92644;
                          uVar10 = *(ulong *)(unaff_x27 + 0x18);
                          lVar20 = *unaff_x28;
                          if (uVar10 == 0) break;
                          if (lVar20 == 0) goto LAB_01f92644;
                          uVar6 = *(uint *)(lVar20 + 0x18);
                          iVar5 = (int)uVar10;
                          if ((int)uVar6 < iVar5) {
                            uVar7 = iVar5 - 1;
                            if ((int)uVar6 < (int)uVar7) {
                              plVar16 = (long *)(unaff_x27 + (long)(int)uVar6 * 8 + 0x20);
                              do {
                                if ((uint)uVar10 <= uVar6) goto LAB_01f9340c;
                                plVar9 = (long *)*plVar16;
                                if (plVar9 == (long *)0x0) goto LAB_01f92644;
                                lVar20 = (**(code **)(*plVar9 + 0x1f8))
                                                   (plVar9,*(undefined8 *)(*plVar9 + 0x200));
                                puVar3 = PTR_DAT_027baa38;
                                lVar13 = *(long *)PTR_DAT_027baa38;
                                if (*(int *)(lVar13 + 0xe0) == 0) {
                                  thunk_FUN_01220628(lVar13);
                                  lVar13 = *(long *)puVar3;
                                }
                                if (lVar20 == **(long **)(lVar13 + 0xb8)) {
                    /* catch() { ... } // from try @ 01f92850 with catch @ 01f929b8
                       catch() { ... } // from try @ 01f929ac with catch @ 01f929b8 */
                                  uVar10 = (ulong)*(uint *)(unaff_x27 + 0x18);
                    /* catch() { ... } // from try @ 01f929a0 with catch @ 01f929bc */
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
                            if (uVar6 == uVar7) {
                              if ((uint)uVar10 <= uVar6) goto LAB_01f9340c;
                              plVar9 = (long *)(unaff_x27 + (long)(int)uVar6 * 8 + 0x20);
                              plVar16 = (long *)*plVar9;
                              if (plVar16 == (long *)0x0) goto LAB_01f92644;
                              lVar20 = (**(code **)(*plVar16 + 0x1f8))
                                                 (plVar16,*(undefined8 *)(*plVar16 + 0x200));
                              puVar3 = PTR_DAT_027baa38;
                              lVar13 = *(long *)PTR_DAT_027baa38;
                              if (*(int *)(lVar13 + 0xe0) == 0) {
                                thunk_FUN_01220628(lVar13);
                                lVar13 = *(long *)puVar3;
                              }
                              if (lVar20 != **(long **)(lVar13 + 0xb8)) goto LAB_01f92a28;
                              if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_01f9340c;
                              plVar16 = (long *)*plVar9;
                              if ((plVar16 == (long *)0x0) ||
                                 (lVar20 = (**(code **)(*plVar16 + 0x1d8))
                                                     (plVar16,*(undefined8 *)(*plVar16 + 0x1e0)),
                                 lVar20 == 0)) goto LAB_01f92644;
                              uVar10 = FUN_01f80ec8(lVar20,0);
                              if ((uVar10 & 1) != 0) {
                                if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_01f9340c;
                                plVar16 = (long *)*plVar9;
                                uVar17 = *(undefined8 *)PTR_DAT_027c1be0;
                                if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                                  thunk_FUN_01220628();
                                }
                                uVar17 = FUN_01f7d8a0(uVar17,0);
                                if (plVar16 == (long *)0x0) goto LAB_01f92644;
                                uVar10 = (**(code **)(*plVar16 + 0x208))
                                                   (plVar16,uVar17,1,
                                                    *(undefined8 *)(*plVar16 + 0x210));
                                unaff_x22 = (long *)PTR_DAT_027b32e0;
                                if ((uVar10 & 1) != 0) {
                                  if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_01f9340c;
                                  plVar9 = (long *)*plVar9;
                                  if (plVar9 == (long *)0x0) goto LAB_01f92644;
                                  plVar16 = (long *)(**(code **)(*plVar9 + 0x1d8))
                                                              (plVar9,*(undefined8 *)
                                                                       (*plVar9 + 0x1e0));
                                  goto joined_r0x01f93260;
                                }
                              }
                            }
                          }
                          else {
                            if (iVar5 == 0) goto LAB_01f9340c;
                            uVar7 = iVar5 - 1;
                            unaff_x24 = (long)(int)uVar7;
                            unaff_x20 = (long *)(unaff_x27 + unaff_x24 * 8 + 0x20);
                            plVar16 = (long *)*unaff_x20;
                            if ((plVar16 == (long *)0x0) ||
                               (lVar20 = (**(code **)(*plVar16 + 0x1d8))
                                                   (plVar16,*(undefined8 *)(*plVar16 + 0x1e0)),
                               lVar20 == 0)) goto LAB_01f92644;
                            uVar10 = FUN_01f80ec8(lVar20,0);
                            if ((int)uVar6 <= iVar5) {
                              if ((uVar10 & 1) == 0) goto LAB_01f92a28;
                              if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_01f9340c;
                              plVar16 = (long *)*unaff_x20;
                              uVar17 = *(undefined8 *)PTR_DAT_027c1be0;
                              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                                thunk_FUN_01220628();
                              }
                              uVar17 = FUN_01f7d8a0(uVar17,0);
                              if (plVar16 == (long *)0x0) goto LAB_01f92644;
                              uVar8 = (**(code **)(*plVar16 + 0x208))
                                                (plVar16,uVar17,1,*(undefined8 *)(*plVar16 + 0x210))
                              ;
                              unaff_x22 = (long *)PTR_DAT_027b32e0;
                              if ((uVar8 & 1) == 0) {
                                plStack0000000000000048 = (long *)0x0;
                                goto LAB_01f92a2c;
                              }
                              if (unaff_x23 == 0) goto LAB_01f92644;
                              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                              lVar20 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                              if (lVar20 == 0) goto LAB_01f92644;
                              if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_01f9340c;
                              if (*(uint *)(lVar20 + unaff_x24 * 4 + 0x20) != uVar7)
                              goto LAB_01f92a28;
                              if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_01f9340c;
                              plVar16 = (long *)*unaff_x20;
                              if ((plVar16 == (long *)0x0) ||
                                 (param_1 = (long *)(**(code **)(*plVar16 + 0x1d8))
                                                              (plVar16,*(undefined8 *)
                                                                        (*plVar16 + 0x1e0)),
                                 unaff_x26 == 0)) goto LAB_01f92644;
                              in_w8 = *(uint *)(unaff_x26 + 0x18);
                              goto code_r0x01f92988;
                            }
                            if ((uVar10 & 1) != 0) {
                              if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_01f9340c;
                              plVar16 = (long *)*unaff_x20;
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
                                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_01f9340c;
                                lVar20 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                                if (lVar20 == 0) goto LAB_01f92644;
                                if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_01f9340c;
                                if (*(uint *)(lVar20 + unaff_x24 * 4 + 0x20) == uVar7)
                                goto LAB_01f9323c;
                              }
                            }
                          }
                        }
                        if (lVar20 == 0) goto LAB_01f92644;
                        if (*(long *)(lVar20 + 0x18) == 0) break;
                        if (*(uint *)(in_stack_00000040 + 3) <= unaff_x25) goto LAB_01f9340c;
                        plVar16 = (long *)*in_stack_00000028;
                        if (plVar16 == (long *)0x0) goto LAB_01f92644;
                        uVar6 = (**(code **)(*plVar16 + 600))
                                          (plVar16,*(undefined8 *)(*plVar16 + 0x260));
                      } while ((uVar6 >> 1 & 1) == 0);
                      if (unaff_x23 == 0) goto LAB_01f92644;
                      if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) ||
                         (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000030)) break;
                      lVar20 = (long)(int)in_stack_00000030;
                      *(undefined8 *)(unaff_x23 + lVar20 * 8 + 0x20) =
                           *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                      thunk_FUN_01286abc();
                      uVar8 = (ulong)*(uint *)(in_stack_00000040 + 3);
                      if (uVar8 <= unaff_x25) break;
                      lVar13 = *in_stack_00000028;
                    } while( true );
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
      }
    }
    goto LAB_01f92644;
  }
  goto LAB_01f9340c;
LAB_01f932e8:
  if (unaff_x23 == 0) goto LAB_01f92644;
  if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
  if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
  if (((((uint)in_stack_00000038[3] <= uVar6) || (uVar8 = lVar20 + 1, uVar10 <= uVar8)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar8)) ||
     ((in_stack_00000038[3] & 0xffffffffU) <= uVar8)) goto LAB_01f9340c;
  lVar18 = in_stack_00000040[lVar13 + 4];
  lVar21 = in_stack_00000040[lVar20 + 5];
  lVar14 = in_stack_00000038[lVar13 + 4];
  uVar17 = *(undefined8 *)(unaff_x23 + lVar13 * 8 + 0x20);
  uVar19 = *(undefined8 *)(unaff_x23 + 0x28 + lVar20 * 8);
  lVar13 = in_stack_00000038[lVar20 + 5];
  if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  iVar5 = FUN_01f947fc(lVar18,uVar17,lVar14,lVar21,uVar19,lVar13);
  if (iVar5 == 0) {
    bVar2 = true;
  }
  else if (iVar5 == 2) {
    uVar6 = (int)lVar20 + 1;
    bVar2 = false;
  }
  if ((ulong)in_stack_00000030 - 2 != lVar20) {
    lVar13 = (long)(int)uVar6;
    lVar20 = lVar20 + 1;
    uVar10 = in_stack_00000040[3] & 0xffffffff;
    if ((uint)in_stack_00000040[3] <= uVar6) goto LAB_01f9340c;
    goto LAB_01f932e8;
  }
  unaff_x22 = (long *)PTR_DAT_027b32e0;
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
    lVar20 = *plVar16;
    if (lVar20 == 0) goto LAB_01f92644;
    lVar20 = FUN_01f8a1a8(lVar20,0);
    lVar13 = *unaff_x28;
    if ((lVar13 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_01f92644;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
    lVar14 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    bVar4 = FUN_01f801dc(lVar14,0,0);
    lVar14 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
    if (lVar20 == 0) {
      lVar18 = 0;
    }
    else {
      uVar17 = *(undefined8 *)PTR_DAT_027b1ca8;
      lVar18 = thunk_FUN_0124baac(lVar20,uVar17);
      if (lVar18 == 0) {
LAB_01f93580:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(lVar20,uVar17);
      }
    }
    uVar17 = *(undefined8 *)(lVar13 + 0x18);
    FUN_01fab77c(lVar14,0);
    *(long *)(lVar14 + 0x10) = lVar18;
    thunk_FUN_01286abc((long *)(lVar14 + 0x10),lVar18);
    *(int *)(lVar14 + 0x18) = (int)uVar17;
    *(byte *)(lVar14 + 0x1c) = bVar4 & 1;
    *in_stack_00000010 = lVar14;
    thunk_FUN_01286abc(in_stack_00000010,lVar14);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_01f9340c;
    lVar20 = *plVar16;
    lVar13 = *unaff_x28;
    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f94678(lVar20,lVar13);
    unaff_x22 = (long *)PTR_DAT_027b32e0;
  }
  if (*(uint *)(in_stack_00000040 + 3) <= uVar6) goto LAB_01f9340c;
  plVar9 = in_stack_00000040 + (long)(int)uVar6 + 4;
  plVar16 = (long *)*plVar9;
  if (((plVar16 == (long *)0x0) ||
      (lVar20 = (**(code **)(*plVar16 + 0x378))(plVar16,*(undefined8 *)(*plVar16 + 0x380)),
      lVar20 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
  iVar5 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar20 + 0x18) == iVar5) {
    if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
    lVar13 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar8 = FUN_01f801dc(lVar13,0,0);
    if ((uVar8 & 1) != 0) {
      plVar16 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar20 + 0x18))
      ;
      uVar7 = *(int *)(lVar20 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar16,0,uVar7,0);
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
      lVar13 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar20 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if (lVar20 == 0) goto LAB_01f92644;
      if (*(int *)(lVar20 + 0x18) == 0) goto LAB_01f9340c;
      *(undefined4 *)(lVar20 + 0x20) = 1;
      lVar20 = thunk_FUN_01f894b8(lVar13,lVar20,0);
      if (plVar16 == (long *)0x0) goto LAB_01f92644;
      if ((lVar20 != 0) &&
         (lVar13 = thunk_FUN_0124baac(lVar20,*(undefined8 *)(*plVar16 + 0x40)), lVar13 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_01f9340c;
      plVar11 = plVar16 + (long)(int)uVar7 + 4;
      *plVar11 = lVar20;
      thunk_FUN_01286abc(plVar11,lVar20);
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_01f9340c;
      lVar20 = *unaff_x28;
      if (lVar20 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_01f9340c;
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) goto LAB_01f92644;
      bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_027b3f80)
         ) {
LAB_01f942dc:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(plVar11);
      }
      FUN_01f89750(plVar11,*(undefined8 *)(lVar20 + (long)(int)uVar7 * 8 + 0x20),0,0);
      goto FUN_01f94198;
    }
  }
  else {
    if (iVar5 < *(int *)(lVar20 + 0x18)) {
      plVar16 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
      lVar13 = *unaff_x28;
      if (lVar13 == 0) goto LAB_01f92644;
      uVar8 = 0;
      plVar11 = plVar16 + 4;
      do {
        if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar8) {
          uVar7 = *(uint *)(lVar20 + 0x18);
          if ((int)uVar8 < (int)(uVar7 - 1)) {
            do {
              if (uVar7 <= (uint)uVar8) goto LAB_01f9340c;
              plVar12 = *(long **)(lVar20 + 0x20 + uVar8 * 8);
              if ((plVar12 == (long *)0x0) ||
                 (lVar13 = (**(code **)(*plVar12 + 0x1f8))
                                     (plVar12,*(undefined8 *)(*plVar12 + 0x200)),
                 plVar16 == (long *)0x0)) goto LAB_01f92644;
              if ((lVar13 != 0) &&
                 (lVar14 = thunk_FUN_0124baac(lVar13,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0)
                 ) goto LAB_01f941d8;
              if (*(uint *)(plVar16 + 3) <= (uint)uVar8) goto LAB_01f9340c;
              *plVar11 = lVar13;
              thunk_FUN_01286abc(plVar11,lVar13);
              uVar7 = *(uint *)(lVar20 + 0x18);
              uVar8 = uVar8 + 1;
              plVar11 = plVar11 + 1;
            } while ((int)uVar8 < (int)(uVar7 - 1));
          }
          if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
          if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
          lVar13 = in_stack_00000038[(long)(int)uVar6 + 4];
          if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar10 = FUN_01f801dc(lVar13,0,0);
          uVar7 = (uint)uVar8;
          if ((uVar10 & 1) == 0) {
            if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_01f9340c;
            plVar11 = *(long **)(lVar20 + (long)(int)uVar7 * 8 + 0x20);
            if ((plVar11 == (long *)0x0) ||
               (lVar20 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200)),
               plVar16 == (long *)0x0)) goto LAB_01f92644;
            if ((lVar20 != 0) &&
               (lVar13 = thunk_FUN_0124baac(lVar20,*(undefined8 *)(*plVar16 + 0x40)), lVar13 == 0))
            goto LAB_01f941d8;
            uVar15 = *(uint *)(plVar16 + 3);
          }
          else {
            if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
            lVar20 = in_stack_00000038[(long)(int)uVar6 + 4];
            uVar17 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
            lVar20 = thunk_FUN_01f894b8(lVar20,uVar17,0);
            if (plVar16 == (long *)0x0) goto LAB_01f92644;
            if ((lVar20 != 0) &&
               (lVar13 = thunk_FUN_0124baac(lVar20,*(undefined8 *)(*plVar16 + 0x40)), lVar13 == 0))
            goto LAB_01f941d8;
            uVar15 = *(uint *)(plVar16 + 3);
          }
          if (uVar15 <= uVar7) goto LAB_01f9340c;
          plVar16[(long)(int)uVar7 + 4] = lVar20;
          thunk_FUN_01286abc(plVar16 + (long)(int)uVar7 + 4,lVar20);
FUN_01f94198:
          *unaff_x28 = (long)plVar16;
          thunk_FUN_01286abc(unaff_x28,plVar16);
          goto OVRPlugin_UnityOpenXR__OnSessionExiting;
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_01f9340c;
        if (plVar16 == (long *)0x0) goto LAB_01f92644;
        lVar13 = *(long *)(lVar13 + uVar8 * 8 + 0x20);
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_0124baac(lVar13,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0))
        goto LAB_01f941d8;
        if (*(uint *)(plVar16 + 3) <= uVar8) goto LAB_01f9340c;
        *plVar11 = lVar13;
        thunk_FUN_01286abc(plVar11,lVar13);
        lVar13 = *unaff_x28;
        uVar8 = uVar8 + 1;
        plVar11 = plVar11 + 1;
        if (lVar13 == 0) goto LAB_01f92644;
      } while( true );
    }
    if (*(uint *)(in_stack_00000040 + 3) <= uVar6) goto LAB_01f9340c;
    plVar16 = (long *)*plVar9;
    if (plVar16 == (long *)0x0) goto LAB_01f92644;
    uVar7 = (**(code **)(*plVar16 + 600))(plVar16,*(undefined8 *)(*plVar16 + 0x260));
    if ((uVar7 >> 1 & 1) == 0) {
      plVar16 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar20 + 0x18))
      ;
      uVar7 = *(int *)(lVar20 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar16,0,uVar7,0);
      if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_01f9340c;
      lVar13 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar20 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if ((*unaff_x28 == 0) || (lVar20 == 0)) goto LAB_01f92644;
      if (*(int *)(lVar20 + 0x18) == 0) goto LAB_01f9340c;
      *(uint *)(lVar20 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar7;
      lVar20 = thunk_FUN_01f894b8(lVar13,lVar20,0);
      if (plVar16 == (long *)0x0) goto LAB_01f92644;
      if ((lVar20 != 0) &&
         (lVar13 = thunk_FUN_0124baac(lVar20,*(undefined8 *)(*plVar16 + 0x40)), lVar13 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_01f9340c;
      plVar11 = plVar16 + (long)(int)uVar7 + 4;
      *plVar11 = lVar20;
      thunk_FUN_01286abc(plVar11,lVar20);
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_01f9340c;
      lVar20 = *unaff_x28;
      if (lVar20 == 0) goto LAB_01f92644;
      plVar11 = (long *)*plVar11;
      if (plVar11 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
      }
      FUN_01f89ca0(lVar20,uVar7,plVar11,0,*(int *)(lVar20 + 0x18) - uVar7,0);
      *unaff_x28 = (long)plVar16;
      thunk_FUN_01286abc(unaff_x28,plVar16);
    }
  }
OVRPlugin_UnityOpenXR__OnSessionExiting:
  if (uVar6 < *(uint *)(in_stack_00000040 + 3)) goto LAB_01f941b4;
  goto LAB_01f9340c;
LAB_01f9323c:
  if (*(uint *)(unaff_x27 + 0x18) <= (uint)unaff_x24) goto LAB_01f9340c;
  plVar16 = (long *)*unaff_x20;
  if (plVar16 == (long *)0x0) goto LAB_01f92644;
  plVar16 = (long *)(**(code **)(*plVar16 + 0x1d8))(plVar16,*(undefined8 *)(*plVar16 + 0x1e0));
joined_r0x01f93260:
  if (plVar16 == (long *)0x0) goto LAB_01f92644;
  plStack0000000000000048 =
       (long *)(**(code **)(*plVar16 + 0x408))(plVar16,*(undefined8 *)(*plVar16 + 0x410));
  goto LAB_01f92a2c;
  while( true ) {
    lVar13 = *(long *)(lVar13 + uVar8 * 8 + 0x20);
    if ((lVar13 != 0) &&
       (lVar14 = thunk_FUN_0124baac(lVar13,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar16 + 3) <= uVar8) goto LAB_01f9340c;
    *plVar11 = lVar13;
    thunk_FUN_01286abc(plVar11,lVar13);
    lVar13 = *unaff_x28;
    uVar8 = uVar8 + 1;
    plVar11 = plVar11 + 1;
    if (lVar13 == 0) break;
LAB_01f937fc:
    if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar8) {
      uVar6 = *(uint *)(lVar20 + 0x18);
      if ((int)(uVar6 - 1) <= (int)uVar8) goto LAB_01f93a68;
      goto LAB_01f939f4;
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_01f9340c;
    if (plVar16 == (long *)0x0) break;
  }
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
  while( true ) {
    plVar12 = *(long **)(lVar20 + 0x20 + uVar8 * 8);
    if ((plVar12 == (long *)0x0) ||
       (lVar13 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200)),
       plVar16 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar13 != 0) &&
       (lVar14 = thunk_FUN_0124baac(lVar13,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar16 + 3) <= (uint)uVar8) goto LAB_01f9340c;
    *plVar11 = lVar13;
    thunk_FUN_01286abc(plVar11,lVar13);
    uVar6 = *(uint *)(lVar20 + 0x18);
    uVar8 = uVar8 + 1;
    plVar11 = plVar11 + 1;
    if ((int)(uVar6 - 1) <= (int)uVar8) break;
LAB_01f939f4:
    if (uVar6 <= (uint)uVar8) goto LAB_01f9340c;
  }
LAB_01f93a68:
  if (in_stack_00000038 == (long *)0x0) goto LAB_01f92644;
  if ((int)in_stack_00000038[3] != 0) {
    lVar13 = in_stack_00000038[4];
    if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar10 = FUN_01f801dc(lVar13,0,0);
    uVar6 = (uint)uVar8;
    if ((uVar10 & 1) == 0) {
      if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_01f9340c;
      plVar11 = *(long **)(lVar20 + (long)(int)uVar6 * 8 + 0x20);
      if ((plVar11 == (long *)0x0) ||
         (lVar20 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200)),
         plVar16 == (long *)0x0)) goto LAB_01f92644;
      if ((lVar20 != 0) &&
         (lVar13 = thunk_FUN_0124baac(lVar20,*(undefined8 *)(*plVar16 + 0x40)), lVar13 == 0))
      goto LAB_01f941d8;
      uVar7 = *(uint *)(plVar16 + 3);
    }
    else {
      if ((int)in_stack_00000038[3] == 0) goto LAB_01f9340c;
      lVar20 = in_stack_00000038[4];
      uVar17 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      lVar20 = thunk_FUN_01f894b8(lVar20,uVar17,0);
      if (plVar16 == (long *)0x0) goto LAB_01f92644;
      if ((lVar20 != 0) &&
         (lVar13 = thunk_FUN_0124baac(lVar20,*(undefined8 *)(*plVar16 + 0x40)), lVar13 == 0)) {
LAB_01f941d8:
        uVar17 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar17,0);
      }
      uVar7 = *(uint *)(plVar16 + 3);
    }
    if (uVar6 < uVar7) {
      plVar16[(long)(int)uVar6 + 4] = lVar20;
      thunk_FUN_01286abc(plVar16 + (long)(int)uVar6 + 4,lVar20);
LAB_01f94118:
      *unaff_x28 = (long)plVar16;
      thunk_FUN_01286abc(unaff_x28,plVar16);
LAB_01f94128:
      if ((int)in_stack_00000040[3] != 0) {
LAB_01f941b4:
        return *plVar9;
      }
    }
  }
LAB_01f9340c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


