/*
FUNCTION_NAME: Unity.Netcode.RpcTargetGroup$$Dispose
ENTRY_POINT: 05d9a004
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Netcode_RpcTargetGroup__Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  long in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000158;
  long in_stack_00000160;
  long in_stack_00000168;
  long in_stack_00000170;
  long in_stack_00000178;
  long in_stack_00000180;
  long in_stack_00000188;
  long in_stack_00000190;
  long in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  long in_stack_000001d0;
  long in_stack_000001d8;
  long in_stack_000001e0;
  long in_stack_000001e8;
  long in_stack_000001f0;
  long in_stack_000001f8;
  long in_stack_00000200;
  long in_stack_00000208;
  long in_stack_00000210;
  long in_stack_00000218;
  long in_stack_00000220;
  long in_stack_00000228;
  long in_stack_00000230;
  long in_stack_00000238;
  long in_stack_00000240;
  long in_stack_00000248;
  long in_stack_00000250;
  long in_stack_00000258;
  long in_stack_00000260;
  long in_stack_00000268;
  long in_stack_00000270;
  long in_stack_00000278;
  long in_stack_00000280;
  long in_stack_00000288;
  long in_stack_00000290;
  long in_stack_00000298;
  long in_stack_000002a0;
  long in_stack_000002a8;
  long in_stack_000002b0;
  long in_stack_000002b8;
  long in_stack_000002c0;
  long in_stack_000002c8;
  long in_stack_000002d0;
  long in_stack_000002d8;
  long in_stack_000002e0;
  long in_stack_000002e8;
  long in_stack_000002f0;
  long in_stack_000002f8;
  long in_stack_00000300;
  long in_stack_00000308;
  long in_stack_00000310;
  long in_stack_00000318;
  long in_stack_00000320;
  long in_stack_00000328;
  long in_stack_00000330;
  long in_stack_00000338;
  long in_stack_00000340;
  long in_stack_00000348;
  long in_stack_00000350;
  long in_stack_00000358;
  long in_stack_00000360;
  long in_stack_00000368;
  long in_stack_00000370;
  long in_stack_00000378;
  long in_stack_00000380;
  long in_stack_00000388;
  long in_stack_00000390;
  long in_stack_00000398;
  long in_stack_000003a0;
  long in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003e8;
  long in_stack_000003f0;
  long in_stack_000003f8;
  long in_stack_000005a8;
  
  lVar5 = thunk_FUN_02dd3048();
  if (lVar5 == 0) goto LAB_05d9be1c;
  if (0xc < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined8 *)(unaff_x20 + 0x80) = in_stack_000003b0;
    LeanTween__value((undefined8 *)(unaff_x20 + 0x80),in_stack_000003b0);
    plVar9 = *(long **)(unaff_x19 + 0x1d0);
    if (plVar9 != (long *)0x0) {
      if (in_stack_000003a8 != 0) {
        lVar5 = thunk_FUN_02dd3048(in_stack_000003a8,*(undefined8 *)(*plVar9 + 0x40));
        if (lVar5 == 0) goto LAB_05d9be1c;
      }
      if (*(uint *)(plVar9 + 3) < 0xe) goto LAB_05d9be18;
      plVar9[0x11] = in_stack_000003a8;
      LeanTween__value(plVar9 + 0x11,in_stack_000003a8);
      plVar9 = *(long **)(unaff_x19 + 0x1d0);
      if (plVar9 != (long *)0x0) {
        if (in_stack_000003a0 != 0) {
          lVar5 = thunk_FUN_02dd3048(in_stack_000003a0,*(undefined8 *)(*plVar9 + 0x40));
          if (lVar5 == 0) goto LAB_05d9be1c;
        }
        if (*(uint *)(plVar9 + 3) < 0xf) goto LAB_05d9be18;
        plVar9[0x12] = in_stack_000003a0;
        LeanTween__value(plVar9 + 0x12,in_stack_000003a0);
        plVar9 = *(long **)(unaff_x19 + 0x1d0);
        if (plVar9 != (long *)0x0) {
          if (in_stack_00000398 != 0) {
            lVar5 = thunk_FUN_02dd3048(in_stack_00000398,*(undefined8 *)(*plVar9 + 0x40));
            if (lVar5 == 0) goto LAB_05d9be1c;
          }
                    /* try { // try from 05d9a0e4 to 05e9a1ab has its CatchHandler @ 05d9a0e4
                       catch() { ... } // from try @ 05d9a0e4 with catch @ 05d9a0e4
                       catch() { ... } // from try @ 05d9a368 with catch @ 05d9a0e4
                       catch() { ... } // from try @ 05d9a3dc with catch @ 05d9a0e4
                       catch() { ... } // from try @ 05d9a4b4 with catch @ 05d9a0e4 */
          if ((*(uint *)(plVar9 + 3) & 0xfffffff0) == 0) goto LAB_05d9be18;
          plVar9[0x13] = in_stack_00000398;
          LeanTween__value(plVar9 + 0x13,in_stack_00000398);
          plVar9 = *(long **)(unaff_x19 + 0x1d0);
          if (plVar9 != (long *)0x0) {
            if (in_stack_00000390 != 0) {
              lVar5 = thunk_FUN_02dd3048(in_stack_00000390,*(undefined8 *)(*plVar9 + 0x40));
              if (lVar5 == 0) goto LAB_05d9be1c;
            }
            if (*(uint *)(plVar9 + 3) < 0x11) goto LAB_05d9be18;
            plVar9[0x14] = in_stack_00000390;
            LeanTween__value(plVar9 + 0x14,in_stack_00000390);
            plVar9 = *(long **)(unaff_x19 + 0x1d0);
            if (plVar9 != (long *)0x0) {
              if (in_stack_00000388 != 0) {
                lVar5 = thunk_FUN_02dd3048(in_stack_00000388,*(undefined8 *)(*plVar9 + 0x40));
                if (lVar5 == 0) goto LAB_05d9be1c;
              }
              if (*(uint *)(plVar9 + 3) < 0x12) goto LAB_05d9be18;
              plVar9[0x15] = in_stack_00000388;
              LeanTween__value(plVar9 + 0x15,in_stack_00000388);
              plVar9 = *(long **)(unaff_x19 + 0x1d0);
              if (plVar9 != (long *)0x0) {
                if (in_stack_00000380 != 0) {
                  lVar5 = thunk_FUN_02dd3048(in_stack_00000380,*(undefined8 *)(*plVar9 + 0x40));
                    /* try { // try from 05d9a1ac to 05e9a1b3 has its CatchHandler @ 05d9a3ac */
                  if (lVar5 == 0) goto LAB_05d9be1c;
                }
                if (*(uint *)(plVar9 + 3) < 0x13) goto LAB_05d9be18;
                    /* try { // try from 05d9a1bc to 05e9a1cb has its CatchHandler @ 05d9a398 */
                plVar9[0x16] = in_stack_00000380;
                LeanTween__value(plVar9 + 0x16,in_stack_00000380);
                plVar9 = *(long **)(unaff_x19 + 0x1d0);
                if (plVar9 != (long *)0x0) {
                    /* try { // try from 05d9a1d8 to 05e9a1eb has its CatchHandler @ 05d9a378 */
                  if (in_stack_00000378 != 0) {
                    lVar5 = thunk_FUN_02dd3048(in_stack_00000378,*(undefined8 *)(*plVar9 + 0x40));
                    if (lVar5 == 0) goto LAB_05d9be1c;
                  }
                    /* try { // try from 05d9a1f8 to 05e9a203 has its CatchHandler @ 05d9a374 */
                  if (*(uint *)(plVar9 + 3) < 0x14) goto LAB_05d9be18;
                  plVar9[0x17] = in_stack_00000378;
                  LeanTween__value(plVar9 + 0x17,in_stack_00000378);
                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                    /* try { // try from 05d9a214 to 05e9a21b has its CatchHandler @ 05d9a3a8 */
                  if (plVar9 != (long *)0x0) {
                    if (in_stack_00000370 != 0) {
                      lVar5 = thunk_FUN_02dd3048(in_stack_00000370,*(undefined8 *)(*plVar9 + 0x40));
                    /* try { // try from 05d9a230 to 05e9a23f has its CatchHandler @ 05d9a380 */
                      if (lVar5 == 0) goto LAB_05d9be1c;
                    }
                    if (*(uint *)(plVar9 + 3) < 0x15) goto LAB_05d9be18;
                    plVar9[0x18] = in_stack_00000370;
                    LeanTween__value(plVar9 + 0x18,in_stack_00000370);
                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                    /* try { // try from 05d9a258 to 05e9a267 has its CatchHandler @ 05d9a3a4 */
                    if (plVar9 != (long *)0x0) {
                      if (in_stack_00000368 != 0) {
                    /* try { // try from 05d9a26c to 05e9a27f has its CatchHandler @ 05d9a394 */
                        lVar5 = thunk_FUN_02dd3048(in_stack_00000368,*(undefined8 *)(*plVar9 + 0x40)
                                                  );
                        if (lVar5 == 0) goto LAB_05d9be1c;
                      }
                      if (*(uint *)(plVar9 + 3) < 0x16) goto LAB_05d9be18;
                      plVar9[0x19] = in_stack_00000368;
                      LeanTween__value(plVar9 + 0x19,in_stack_00000368);
                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                      if (plVar9 != (long *)0x0) {
                        if (in_stack_00000360 != 0) {
                          lVar5 = thunk_FUN_02dd3048(in_stack_00000360,
                                                     *(undefined8 *)(*plVar9 + 0x40));
                          if (lVar5 == 0) goto LAB_05d9be1c;
                        }
                        if (*(uint *)(plVar9 + 3) < 0x17) goto LAB_05d9be18;
                        plVar9[0x1a] = in_stack_00000360;
                        LeanTween__value(plVar9 + 0x1a,in_stack_00000360);
                        plVar9 = *(long **)(unaff_x19 + 0x1d0);
                        if (plVar9 != (long *)0x0) {
                          if (in_stack_00000358 != 0) {
                            lVar5 = thunk_FUN_02dd3048(in_stack_00000358,
                                                       *(undefined8 *)(*plVar9 + 0x40));
                            if (lVar5 == 0) goto LAB_05d9be1c;
                          }
                          if (*(uint *)(plVar9 + 3) < 0x18) goto LAB_05d9be18;
                          plVar9[0x1b] = in_stack_00000358;
                          LeanTween__value(plVar9 + 0x1b,in_stack_00000358);
                          plVar9 = *(long **)(unaff_x19 + 0x1d0);
                          if (plVar9 != (long *)0x0) {
                            if (in_stack_00000350 != 0) {
                              lVar5 = thunk_FUN_02dd3048(in_stack_00000350,
                                                         *(undefined8 *)(*plVar9 + 0x40));
                              if (lVar5 == 0) goto LAB_05d9be1c;
                            }
                            if (*(uint *)(plVar9 + 3) < 0x19) goto LAB_05d9be18;
                            plVar9[0x1c] = in_stack_00000350;
                            LeanTween__value(plVar9 + 0x1c,in_stack_00000350);
                            plVar9 = *(long **)(unaff_x19 + 0x1d0);
                            if (plVar9 != (long *)0x0) {
                              if (in_stack_00000348 != 0) {
                                lVar5 = thunk_FUN_02dd3048(in_stack_00000348,
                                                           *(undefined8 *)(*plVar9 + 0x40));
                                if (lVar5 == 0) goto LAB_05d9be1c;
                              }
                              if (*(uint *)(plVar9 + 3) < 0x1a) goto LAB_05d9be18;
                              plVar9[0x1d] = in_stack_00000348;
                              LeanTween__value(plVar9 + 0x1d,in_stack_00000348);
                              plVar9 = *(long **)(unaff_x19 + 0x1d0);
                              if (plVar9 != (long *)0x0) {
                                if (in_stack_00000340 != 0) {
                                  lVar5 = thunk_FUN_02dd3048(in_stack_00000340,
                                                             *(undefined8 *)(*plVar9 + 0x40));
                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                }
                                if (*(uint *)(plVar9 + 3) < 0x1b) goto LAB_05d9be18;
                                plVar9[0x1e] = in_stack_00000340;
                                LeanTween__value(plVar9 + 0x1e,in_stack_00000340);
                                plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                if (plVar9 != (long *)0x0) {
                                  if (in_stack_00000338 != 0) {
                                    lVar5 = thunk_FUN_02dd3048(in_stack_00000338,
                                                               *(undefined8 *)(*plVar9 + 0x40));
                                    if (lVar5 == 0) goto LAB_05d9be1c;
                                  }
                                  if (*(uint *)(plVar9 + 3) < 0x1c) goto LAB_05d9be18;
                                  plVar9[0x1f] = in_stack_00000338;
                                  LeanTween__value(plVar9 + 0x1f,in_stack_00000338);
                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                  if (plVar9 != (long *)0x0) {
                                    if (in_stack_00000330 != 0) {
                                      lVar5 = thunk_FUN_02dd3048(in_stack_00000330,
                                                                 *(undefined8 *)(*plVar9 + 0x40));
                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                    }
                                    if (*(uint *)(plVar9 + 3) < 0x1d) goto LAB_05d9be18;
                                    plVar9[0x20] = in_stack_00000330;
                                    LeanTween__value(plVar9 + 0x20,in_stack_00000330);
                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                    if (plVar9 != (long *)0x0) {
                                      if (in_stack_00000328 != 0) {
                                        lVar5 = thunk_FUN_02dd3048(in_stack_00000328,
                                                                   *(undefined8 *)(*plVar9 + 0x40));
                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                      }
                                      if (*(uint *)(plVar9 + 3) < 0x1e) goto LAB_05d9be18;
                                      plVar9[0x21] = in_stack_00000328;
                                      LeanTween__value(plVar9 + 0x21,in_stack_00000328);
                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                      if (plVar9 != (long *)0x0) {
                                        if (in_stack_00000320 != 0) {
                                          lVar5 = thunk_FUN_02dd3048(in_stack_00000320,
                                                                     *(undefined8 *)(*plVar9 + 0x40)
                                                                    );
                                          if (lVar5 == 0) goto LAB_05d9be1c;
                                        }
                                        if (*(uint *)(plVar9 + 3) < 0x1f) goto LAB_05d9be18;
                                        plVar9[0x22] = in_stack_00000320;
                                        LeanTween__value(plVar9 + 0x22,in_stack_00000320);
                                        plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                        if (plVar9 != (long *)0x0) {
                                          if (in_stack_00000318 != 0) {
                                            lVar5 = thunk_FUN_02dd3048(in_stack_00000318,
                                                                       *(undefined8 *)
                                                                        (*plVar9 + 0x40));
                                            if (lVar5 == 0) goto LAB_05d9be1c;
                                          }
                                          if ((*(uint *)(plVar9 + 3) & 0xffffffe0) == 0)
                                          goto LAB_05d9be18;
                                          plVar9[0x23] = in_stack_00000318;
                                          LeanTween__value(plVar9 + 0x23,in_stack_00000318);
                                          plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                          if (plVar9 != (long *)0x0) {
                                            if (in_stack_00000310 != 0) {
                                              lVar5 = thunk_FUN_02dd3048(in_stack_00000310,
                                                                         *(undefined8 *)
                                                                          (*plVar9 + 0x40));
                                              if (lVar5 == 0) goto LAB_05d9be1c;
                                            }
                                            if (*(uint *)(plVar9 + 3) < 0x21) goto LAB_05d9be18;
                                            plVar9[0x24] = in_stack_00000310;
                                            LeanTween__value(plVar9 + 0x24,in_stack_00000310);
                                            plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                            if (plVar9 != (long *)0x0) {
                                              if (in_stack_00000308 != 0) {
                                                lVar5 = thunk_FUN_02dd3048(in_stack_00000308,
                                                                           *(undefined8 *)
                                                                            (*plVar9 + 0x40));
                                                if (lVar5 == 0) goto LAB_05d9be1c;
                                              }
                                              if (*(uint *)(plVar9 + 3) < 0x22) goto LAB_05d9be18;
                                              plVar9[0x25] = in_stack_00000308;
                                              LeanTween__value(plVar9 + 0x25,in_stack_00000308);
                                              plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                              if (plVar9 != (long *)0x0) {
                                                if (in_stack_00000300 != 0) {
                                                  lVar5 = thunk_FUN_02dd3048(in_stack_00000300,
                                                                             *(undefined8 *)
                                                                              (*plVar9 + 0x40));
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                }
                                                if (*(uint *)(plVar9 + 3) < 0x23) goto LAB_05d9be18;
                                                plVar9[0x26] = in_stack_00000300;
                                                LeanTween__value(plVar9 + 0x26,in_stack_00000300);
                                                plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                if (plVar9 != (long *)0x0) {
                                                  if (in_stack_000002f8 != 0) {
                                                    lVar5 = thunk_FUN_02dd3048(in_stack_000002f8,
                                                                               *(undefined8 *)
                                                                                (*plVar9 + 0x40));
                                                    if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x24)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x27] = in_stack_000002f8;
                                                  LeanTween__value(plVar9 + 0x27,in_stack_000002f8);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_000002f0 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_000002f0,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x25)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x28] = in_stack_000002f0;
                                                    LeanTween__value(plVar9 + 0x28,in_stack_000002f0
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_000002e8 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_000002e8
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x26)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x29] = in_stack_000002e8;
                                                      LeanTween__value(plVar9 + 0x29,
                                                                       in_stack_000002e8);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_000002e0 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_000002e0,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x27)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x2a] = in_stack_000002e0;
                                                  LeanTween__value(plVar9 + 0x2a,in_stack_000002e0);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_000002d8 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_000002d8,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x28)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x2b] = in_stack_000002d8;
                                                    LeanTween__value(plVar9 + 0x2b,in_stack_000002d8
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_000002d0 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_000002d0
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x29)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x2c] = in_stack_000002d0;
                                                      LeanTween__value(plVar9 + 0x2c,
                                                                       in_stack_000002d0);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_000002c8 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_000002c8,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x2a)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x2d] = in_stack_000002c8;
                                                  LeanTween__value(plVar9 + 0x2d,in_stack_000002c8);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_000002c0 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_000002c0,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x2b)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x2e] = in_stack_000002c0;
                                                    LeanTween__value(plVar9 + 0x2e,in_stack_000002c0
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_000002b8 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_000002b8
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x2c)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x2f] = in_stack_000002b8;
                                                      LeanTween__value(plVar9 + 0x2f,
                                                                       in_stack_000002b8);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_000002b0 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_000002b0,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x2d)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x30] = in_stack_000002b0;
                                                  LeanTween__value(plVar9 + 0x30,in_stack_000002b0);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_000002a8 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_000002a8,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x2e)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x31] = in_stack_000002a8;
                                                    LeanTween__value(plVar9 + 0x31,in_stack_000002a8
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_000002a0 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_000002a0
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x2f)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x32] = in_stack_000002a0;
                                                      LeanTween__value(plVar9 + 0x32,
                                                                       in_stack_000002a0);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_00000298 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_00000298,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x30)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x33] = in_stack_00000298;
                                                  LeanTween__value(plVar9 + 0x33,in_stack_00000298);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_00000290 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_00000290,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x31)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x34] = in_stack_00000290;
                                                    LeanTween__value(plVar9 + 0x34,in_stack_00000290
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_00000288 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_00000288
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x32)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x35] = in_stack_00000288;
                                                      LeanTween__value(plVar9 + 0x35,
                                                                       in_stack_00000288);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_00000280 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_00000280,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x33)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x36] = in_stack_00000280;
                                                  LeanTween__value(plVar9 + 0x36,in_stack_00000280);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_00000278 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_00000278,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x34)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x37] = in_stack_00000278;
                                                    LeanTween__value(plVar9 + 0x37,in_stack_00000278
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_00000270 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_00000270
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x35)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x38] = in_stack_00000270;
                                                      LeanTween__value(plVar9 + 0x38,
                                                                       in_stack_00000270);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_00000268 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_00000268,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x36)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x39] = in_stack_00000268;
                                                  LeanTween__value(plVar9 + 0x39,in_stack_00000268);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_00000260 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_00000260,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x37)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x3a] = in_stack_00000260;
                                                    LeanTween__value(plVar9 + 0x3a,in_stack_00000260
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_00000258 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_00000258
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x38)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x3b] = in_stack_00000258;
                                                      LeanTween__value(plVar9 + 0x3b,
                                                                       in_stack_00000258);
                                                      lVar5 = *(long *)(unaff_x19 + 0x1d0);
                                                      if (lVar5 != 0) {
                                                        if ((unaff_x28 != 0) &&
                                                           (lVar6 = thunk_FUN_02dd3048(), lVar6 == 0
                                                           )) goto LAB_05d9be1c;
                                                        if (*(uint *)(lVar5 + 0x18) < 0x39)
                                                        goto LAB_05d9be18;
                                                        *(long *)(lVar5 + 0x1e0) = unaff_x28;
                                                        LeanTween__value(lVar5 + 0x1e0,unaff_x28);
                                                        plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                        if (plVar9 != (long *)0x0) {
                                                          if (in_stack_000003f8 != 0) {
                                                            lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_000003f8,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x3a)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x3d] = in_stack_000003f8;
                                                  LeanTween__value(plVar9 + 0x3d,in_stack_000003f8);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_000003f0 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_000003f0,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x3b)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x3e] = in_stack_000003f0;
                                                    LeanTween__value(plVar9 + 0x3e,in_stack_000003f0
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_00000250 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_00000250
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x3c)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x3f] = in_stack_00000250;
                                                      LeanTween__value(plVar9 + 0x3f,
                                                                       in_stack_00000250);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_00000248 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_00000248,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x3d)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x40] = in_stack_00000248;
                                                  LeanTween__value(plVar9 + 0x40,in_stack_00000248);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_00000240 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_00000240,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x3e)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x41] = in_stack_00000240;
                                                    LeanTween__value(plVar9 + 0x41,in_stack_00000240
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_00000238 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_00000238
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x3f)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x42] = in_stack_00000238;
                                                      LeanTween__value(plVar9 + 0x42,
                                                                       in_stack_00000238);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_00000230 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_00000230,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if ((*(uint *)(plVar9 + 3) & 0xffffffc0) == 0)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x43] = in_stack_00000230;
                                                  LeanTween__value(plVar9 + 0x43,in_stack_00000230);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_00000228 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_00000228,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x41)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x44] = in_stack_00000228;
                                                    LeanTween__value(plVar9 + 0x44,in_stack_00000228
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_00000220 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_00000220
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x42)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x45] = in_stack_00000220;
                                                      LeanTween__value(plVar9 + 0x45,
                                                                       in_stack_00000220);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_00000218 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_00000218,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x43)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x46] = in_stack_00000218;
                                                  LeanTween__value(plVar9 + 0x46,in_stack_00000218);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_00000210 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_00000210,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x44)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x47] = in_stack_00000210;
                                                    LeanTween__value(plVar9 + 0x47,in_stack_00000210
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_00000208 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_00000208
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x45)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x48] = in_stack_00000208;
                                                      LeanTween__value(plVar9 + 0x48,
                                                                       in_stack_00000208);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_00000200 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_00000200,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x46)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x49] = in_stack_00000200;
                                                  LeanTween__value(plVar9 + 0x49,in_stack_00000200);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_000001f8 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_000001f8,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x47)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x4a] = in_stack_000001f8;
                                                    LeanTween__value(plVar9 + 0x4a,in_stack_000001f8
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_000001f0 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_000001f0
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x48)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x4b] = in_stack_000001f0;
                                                      LeanTween__value(plVar9 + 0x4b,
                                                                       in_stack_000001f0);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_000001e8 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_000001e8,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x49)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x4c] = in_stack_000001e8;
                                                  LeanTween__value(plVar9 + 0x4c,in_stack_000001e8);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_000001e0 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_000001e0,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x4a)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x4d] = in_stack_000001e0;
                                                    LeanTween__value(plVar9 + 0x4d,in_stack_000001e0
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_000001d8 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_000001d8
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x4b)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x4e] = in_stack_000001d8;
                                                      LeanTween__value(plVar9 + 0x4e,
                                                                       in_stack_000001d8);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_000001d0 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_000001d0,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x4c)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x4f] = in_stack_000001d0;
                                                  LeanTween__value(plVar9 + 0x4f,in_stack_000001d0);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_000001c8 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_000001c8,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x4d)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x50] = in_stack_000001c8;
                                                    LeanTween__value(plVar9 + 0x50,in_stack_000001c8
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_000001c0 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_000001c0
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x4e)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x51] = in_stack_000001c0;
                                                      LeanTween__value(plVar9 + 0x51,
                                                                       in_stack_000001c0);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_000001b8 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_000001b8,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x4f)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x52] = in_stack_000001b8;
                                                  LeanTween__value(plVar9 + 0x52,in_stack_000001b8);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_000001b0 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_000001b0,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x50)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x53] = in_stack_000001b0;
                                                    LeanTween__value(plVar9 + 0x53,in_stack_000001b0
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_000001a8 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_000001a8
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x51)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x54] = in_stack_000001a8;
                                                      LeanTween__value(plVar9 + 0x54,
                                                                       in_stack_000001a8);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_000001a0 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_000001a0,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x52)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x55] = in_stack_000001a0;
                                                  LeanTween__value(plVar9 + 0x55,in_stack_000001a0);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_00000198 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_00000198,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x53)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x56] = in_stack_00000198;
                                                    LeanTween__value(plVar9 + 0x56,in_stack_00000198
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_00000190 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_00000190
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x54)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x57] = in_stack_00000190;
                                                      LeanTween__value(plVar9 + 0x57,
                                                                       in_stack_00000190);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_00000188 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_00000188,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x55)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x58] = in_stack_00000188;
                                                  LeanTween__value(plVar9 + 0x58,in_stack_00000188);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_00000180 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_00000180,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x56)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x59] = in_stack_00000180;
                                                    LeanTween__value(plVar9 + 0x59,in_stack_00000180
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_00000178 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_00000178
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x57)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x5a] = in_stack_00000178;
                                                      LeanTween__value(plVar9 + 0x5a,
                                                                       in_stack_00000178);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_00000170 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_00000170,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x58)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x5b] = in_stack_00000170;
                                                  LeanTween__value(plVar9 + 0x5b,in_stack_00000170);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_00000168 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_00000168,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x59)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x5c] = in_stack_00000168;
                                                    LeanTween__value(plVar9 + 0x5c,in_stack_00000168
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_00000160 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_00000160
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x5a)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x5d] = in_stack_00000160;
                                                      LeanTween__value(plVar9 + 0x5d,
                                                                       in_stack_00000160);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_00000158 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_00000158,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x5b)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x5e] = in_stack_00000158;
                                                  LeanTween__value(plVar9 + 0x5e,in_stack_00000158);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_00000150 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_00000150,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x5c)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x5f] = in_stack_00000150;
                                                    LeanTween__value(plVar9 + 0x5f,in_stack_00000150
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_00000148 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_00000148
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x5d)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x60] = in_stack_00000148;
                                                      LeanTween__value(plVar9 + 0x60,
                                                                       in_stack_00000148);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_00000140 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_00000140,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x5e)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x61] = in_stack_00000140;
                                                  LeanTween__value(plVar9 + 0x61,in_stack_00000140);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_00000138 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_00000138,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x5f)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x62] = in_stack_00000138;
                                                    LeanTween__value(plVar9 + 0x62,in_stack_00000138
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_00000130 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_00000130
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x60)
                                                      goto LAB_05d9be18;
                                                      plVar9[99] = in_stack_00000130;
                                                      LeanTween__value(plVar9 + 99,in_stack_00000130
                                                                      );
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_00000128 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_00000128,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x61)
                                                  goto LAB_05d9be18;
                                                  plVar9[100] = in_stack_00000128;
                                                  LeanTween__value(plVar9 + 100,in_stack_00000128);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_00000120 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_00000120,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x62)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x65] = in_stack_00000120;
                                                    LeanTween__value(plVar9 + 0x65,in_stack_00000120
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_00000118 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_00000118
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 99)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x66] = in_stack_00000118;
                                                      LeanTween__value(plVar9 + 0x66,
                                                                       in_stack_00000118);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_00000110 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_00000110,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 100)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x67] = in_stack_00000110;
                                                  LeanTween__value(plVar9 + 0x67,in_stack_00000110);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_00000108 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_00000108,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x65)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x68] = in_stack_00000108;
                                                    LeanTween__value(plVar9 + 0x68,in_stack_00000108
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_00000100 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_00000100
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x66)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x69] = in_stack_00000100;
                                                      LeanTween__value(plVar9 + 0x69,
                                                                       in_stack_00000100);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_000000f8 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_000000f8,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x67)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x6a] = in_stack_000000f8;
                                                  LeanTween__value(plVar9 + 0x6a,in_stack_000000f8);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_000000f0 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_000000f0,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x68)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x6b] = in_stack_000000f0;
                                                    LeanTween__value(plVar9 + 0x6b,in_stack_000000f0
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_000000e8 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_000000e8
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x69)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x6c] = in_stack_000000e8;
                                                      LeanTween__value(plVar9 + 0x6c,
                                                                       in_stack_000000e8);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_000000e0 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_000000e0,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x6a)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x6d] = in_stack_000000e0;
                                                  LeanTween__value(plVar9 + 0x6d,in_stack_000000e0);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_000000d8 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_000000d8,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x6b)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x6e] = in_stack_000000d8;
                                                    LeanTween__value(plVar9 + 0x6e,in_stack_000000d8
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_000000d0 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_000000d0
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x6c)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x6f] = in_stack_000000d0;
                                                      LeanTween__value(plVar9 + 0x6f,
                                                                       in_stack_000000d0);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_000000c8 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_000000c8,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x6d)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x70] = in_stack_000000c8;
                                                  LeanTween__value(plVar9 + 0x70,in_stack_000000c8);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_000000c0 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_000000c0,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x6e)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x71] = in_stack_000000c0;
                                                    LeanTween__value(plVar9 + 0x71,in_stack_000000c0
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_000000b8 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_000000b8
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x70)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x73] = in_stack_000000b8;
                                                      LeanTween__value(plVar9 + 0x73,
                                                                       in_stack_000000b8);
                                                      plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                      if (plVar9 != (long *)0x0) {
                                                        if (in_stack_000000b0 != 0) {
                                                          lVar5 = thunk_FUN_02dd3048(
                                                  in_stack_000000b0,*(undefined8 *)(*plVar9 + 0x40))
                                                  ;
                                                  if (lVar5 == 0) goto LAB_05d9be1c;
                                                  }
                                                  if (*(uint *)(plVar9 + 3) < 0x71)
                                                  goto LAB_05d9be18;
                                                  plVar9[0x74] = in_stack_000000b0;
                                                  LeanTween__value(plVar9 + 0x74,in_stack_000000b0);
                                                  plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                  if (plVar9 != (long *)0x0) {
                                                    if (in_stack_000000a8 != 0) {
                                                      lVar5 = thunk_FUN_02dd3048(in_stack_000000a8,
                                                                                 *(undefined8 *)
                                                                                  (*plVar9 + 0x40));
                                                      if (lVar5 == 0) goto LAB_05d9be1c;
                                                    }
                                                    if (*(uint *)(plVar9 + 3) < 0x72)
                                                    goto LAB_05d9be18;
                                                    plVar9[0x75] = in_stack_000000a8;
                                                    LeanTween__value(plVar9 + 0x75,in_stack_000000a8
                                                                    );
                                                    plVar9 = *(long **)(unaff_x19 + 0x1d0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if (in_stack_000000a0 != 0) {
                                                        lVar5 = thunk_FUN_02dd3048(in_stack_000000a0
                                                                                   ,*(undefined8 *)
                                                                                     (*plVar9 + 0x40
                                                                                     ));
                                                        if (lVar5 == 0) goto LAB_05d9be1c;
                                                      }
                                                      if (*(uint *)(plVar9 + 3) < 0x73)
                                                      goto LAB_05d9be18;
                                                      plVar9[0x76] = in_stack_000000a0;
                                                      LeanTween__value(plVar9 + 0x76,
                                                                       in_stack_000000a0);
                                                      lVar5 = *(long *)(unaff_x19 + 0x1d0);
                                                      if (lVar5 != 0) {
                                                        if ((unaff_x29 != 0) &&
                                                           (lVar6 = thunk_FUN_02dd3048(), lVar6 == 0
                                                           )) {
LAB_05d9be1c:
                                                          uVar7 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                                                          FUN_02d96724(uVar7,0);
                                                        }
                                                        if (*(uint *)(lVar5 + 0x18) < 0x74)
                                                        goto LAB_05d9be18;
                                                        *(long *)(lVar5 + 0x3b8) = unaff_x29;
                                                        LeanTween__value(lVar5 + 0x3b8);
                                                        lVar5 = *(long *)(unaff_x19 + 0x1d0);
                                                        if (lVar5 != 0) {
                                                          if ((unaff_x27 != 0) &&
                                                             (lVar6 = thunk_FUN_02dd3048(),
                                                             lVar6 == 0)) goto LAB_05d9be1c;
                                                          if (*(uint *)(lVar5 + 0x18) < 0x75)
                                                          goto LAB_05d9be18;
                                                          *(long *)(lVar5 + 0x3c0) = unaff_x27;
                                                          LeanTween__value(lVar5 + 0x3c0);
                                                          lVar5 = *(long *)(unaff_x19 + 0x1d0);
                                                          if (lVar5 != 0) {
                                                            if ((unaff_x26 != 0) &&
                                                               (lVar6 = thunk_FUN_02dd3048(),
                                                               lVar6 == 0)) goto LAB_05d9be1c;
                                                            if (*(uint *)(lVar5 + 0x18) < 0x76)
                                                            goto LAB_05d9be18;
                                                            *(long *)(lVar5 + 0x3c8) = unaff_x26;
                                                            LeanTween__value(lVar5 + 0x3c8);
                                                            lVar5 = *(long *)(unaff_x19 + 0x1d0);
                                                            if (lVar5 != 0) {
                                                              if ((unaff_x25 != 0) &&
                                                                 (lVar6 = thunk_FUN_02dd3048(),
                                                                 lVar6 == 0)) goto LAB_05d9be1c;
                                                              if (*(uint *)(lVar5 + 0x18) < 0x77)
                                                              goto LAB_05d9be18;
                                                              *(long *)(lVar5 + 0x3d0) = unaff_x25;
                                                              LeanTween__value(lVar5 + 0x3d0);
                                                              lVar5 = *(long *)(unaff_x19 + 0x1d0);
                                                              if (lVar5 != 0) {
                                                                if ((unaff_x24 != 0) &&
                                                                   (lVar6 = thunk_FUN_02dd3048(),
                                                                   lVar6 == 0)) goto LAB_05d9be1c;
                                                                if (*(uint *)(lVar5 + 0x18) < 0x78)
                                                                goto LAB_05d9be18;
                                                                *(long *)(lVar5 + 0x3d8) = unaff_x24
                                                                ;
                                                                LeanTween__value(lVar5 + 0x3d8);
                                                                lVar5 = *(long *)(unaff_x19 + 0x1d0)
                                                                ;
                                                                if (lVar5 != 0) {
                                                                  if ((unaff_x22 != 0) &&
                                                                     (lVar6 = thunk_FUN_02dd3048(),
                                                                     lVar6 == 0)) goto LAB_05d9be1c;
                                                                  if (*(uint *)(lVar5 + 0x18) < 0x79
                                                                     ) goto LAB_05d9be18;
                                                                  *(long *)(lVar5 + 0x3e0) =
                                                                       unaff_x22;
                                                                  LeanTween__value(lVar5 + 0x3e0);
                                                                  lVar5 = *(long *)(unaff_x19 +
                                                                                   0x1d0);
                                                                  if (lVar5 != 0) {
                                                                    if ((unaff_x21 != 0) &&
                                                                       (lVar6 = thunk_FUN_02dd3048()
                                                                       , lVar6 == 0))
                                                                    goto LAB_05d9be1c;
                                                                    if (*(uint *)(lVar5 + 0x18) <
                                                                        0x7a) goto LAB_05d9be18;
                                                                    *(long *)(lVar5 + 1000) =
                                                                         unaff_x21;
                                                                    LeanTween__value(lVar5 + 1000);
                                                                    lVar5 = *(long *)(unaff_x19 +
                                                                                     0x1d0);
                                                                    if (lVar5 != 0) {
                                                                      if ((unaff_x23 != 0) &&
                                                                         (lVar6 = thunk_FUN_02dd3048
                                                  (), lVar6 == 0)) goto LAB_05d9be1c;
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_List<IXRHoverInteractable>_get_Item__
                                                  ;
                                                  puVar1 = PTR_DAT_06a146e0;
                                                  if (*(uint *)(lVar5 + 0x18) < 0x7b)
                                                  goto LAB_05d9be18;
                                                  *(long *)(lVar5 + 0x3f0) = unaff_x23;
                                                  LeanTween__value(lVar5 + 0x3f0);
                                                  *(undefined8 *)(unaff_x19 + 0x188) =
                                                       in_stack_00000020;
                                                  LeanTween__value(unaff_x19 + 0x188);
                                                  *(undefined8 *)(unaff_x19 + 400) =
                                                       in_stack_00000018;
                                                  LeanTween__value(unaff_x19 + 400);
                                                  *(undefined8 *)(unaff_x19 + 0x198) =
                                                       in_stack_000003e8;
                                                  LeanTween__value(unaff_x19 + 0x198);
                                                  *(undefined8 *)(unaff_x19 + 0x1a0) =
                                                       in_stack_00000010;
                                                  LeanTween__value(unaff_x19 + 0x1a0);
                                                  *(undefined8 *)(unaff_x19 + 0x1a8) =
                                                       in_stack_00000008;
                                                  LeanTween__value(unaff_x19 + 0x1a8);
                                                  uVar7 = FUN_02d966a4(*(undefined8 *)puVar1,0x7f);
                                                  FUN_05411dc0(uVar7,*(undefined8 *)puVar2,0);
                                                  puVar4 = 
                                                  Method_System_Collections_Generic_List<IXRHoverInteractor>_get_Count__
                                                  ;
                                                  puVar3 = 
                                                  Method_System_Collections_Generic_List<IXRHoverInteractable>_get_Count__
                                                  ;
                                                  puVar2 = PTR_DAT_06a1a490;
                                                  puVar1 = PTR_DAT_069fc2e8;
                                                  if (in_stack_000005a8 != 0) {
                                                    *(undefined8 *)(in_stack_000005a8 + 0x170) =
                                                         uVar7;
                                                    LeanTween__value(in_stack_000005a8 + 0x170,uVar7
                                                                    );
                                                    uVar7 = FUN_02d966a4(*(undefined8 *)puVar1,0x707
                                                                        );
                                                    FUN_05411dc0(uVar7,*(undefined8 *)puVar4,0);
                                                    uVar8 = FUN_02d966a4(*(undefined8 *)puVar2,0x83)
                                                    ;
                                                    FUN_05411dc0(uVar8,*(undefined8 *)puVar3,0);
                                                    FUN_05d979a8(&stack0x000005a8,uVar7,uVar8,0);
                                                    FUN_05d97af4(&stack0x000005a8,0);
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
LAB_05d9be18:
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


