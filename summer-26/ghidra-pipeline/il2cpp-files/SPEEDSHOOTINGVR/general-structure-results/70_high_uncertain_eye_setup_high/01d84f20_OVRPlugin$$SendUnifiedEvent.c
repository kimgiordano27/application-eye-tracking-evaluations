/*
FUNCTION_NAME: OVRPlugin$$SendUnifiedEvent
ENTRY_POINT: 01d84f20
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d8519c) */
/* WARNING: Removing unreachable block (ram,0x01d851a0) */

undefined8 OVRPlugin__SendUnifiedEvent(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long in_x10;
  long unaff_x19;
  long lVar10;
  long *unaff_x20;
  uint unaff_w21;
  undefined8 *unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w26;
  long *unaff_x28;
  long *unaff_x29;
  long *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  
  do {
    *(int *)(unaff_x19 + 0x18) = (int)in_x10 + 1;
    plVar4 = (long *)(param_1 + in_x10 * 8 + 0x20);
    *plVar4 = (long)unaff_x28;
    thunk_FUN_0106e12c(plVar4,unaff_x28);
    plVar4 = unaff_x20;
LAB_01d84f54:
    do {
      do {
        unaff_x20 = plVar4;
        unaff_w21 = unaff_w21 + 1;
        if ((int)*(uint *)(unaff_x24 + 0x18) <= (int)unaff_w21) {
          if (unaff_x19 != 0) {
                    /* catch() { ... } // from try @ 01d84e30 with catch @ 01d84f70 */
                    /* catch() { ... } // from try @ 01d84e50 with catch @ 01d84f74 */
                    /* catch() { ... } // from try @ 01d84f00 with catch @ 01d84f78 */
            in_stack_00000010 =
                 (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353e90,
                                      *(undefined4 *)(unaff_x19 + 0x18));
                    /* catch() { ... } // from try @ 01d84dc8 with catch @ 01d84f7c */
                    /* catch() { ... } // from try @ 01d84db0 with catch @ 01d84f80 */
                    /* catch() { ... } // from try @ 01d84d94 with catch @ 01d84f84 */
                    /* catch() { ... } // from try @ 01d84ee8 with catch @ 01d84f88 */
                    /* catch() { ... } // from try @ 01d84de0 with catch @ 01d84f8c */
            FUN_017d34e4(unaff_x19,in_stack_00000010,*(undefined8 *)PTR_DAT_02359228);
          }
                    /* catch() { ... } // from try @ 01d84fa4 with catch @ 01d84fb4 */
                    /* try { // try from 01d84fc0 to 01e84fd7 has its CatchHandler @ 01d85068 */
          uVar5 = FUN_01cc8674(unaff_x20,0,0);
          if ((uVar5 & 1) != 0) {
                    /* catch() { ... } // from try @ 01d84d14 with catch @ 01d84fd8
                       try { // try from 01d84fd8 to 01e84fef has its CatchHandler @ 01d843d0 */
            if ((in_stack_00000048._4_4_ == 0) && (in_stack_00000010 == (long *)0x0)) {
                    /* try { // try from 01d84ff0 to 01e85007 has its CatchHandler @ 01d85058 */
              if ((unaff_x20 == (long *)0x0) ||
                 (lVar6 = (**(code **)(*unaff_x20 + 0x398))
                                    (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x3a0)), lVar6 == 0))
              goto LAB_01d85298;
              if (((unaff_w25 >> 0x12 & 1) == 0) && (*(long *)(lVar6 + 0x18) == 0)) {
                    /* try { // try from 01d85008 to 01e85047 has its CatchHandler @ 01d843d0 */
                uVar7 = (**(code **)(*unaff_x20 + 0x328))
                                  (unaff_x20,in_stack_00000040,unaff_w25,in_stack_00000018,
                                   in_stack_00000058);
                return uVar7;
              }
            }
            if (in_stack_00000010 == (long *)0x0) {
              in_stack_00000010 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02353e90,1);
                    /* try { // try from 01d85048 to 01e85057 has its CatchHandler @ 01d85058 */
              if (in_stack_00000010 == (long *)0x0) goto LAB_01d85298;
                    /* catch() { ... } // from try @ 01d84ff0 with catch @ 01d85058
                       catch() { ... } // from try @ 01d85048 with catch @ 01d85058 */
                    /* try { // try from 01d8505c to 01e8505f has its CatchHandler @ 01d85068 */
                    /* try { // try from 01d85060 to 01e8506b has its CatchHandler @ 01d843d0 */
              if ((unaff_x20 != (long *)0x0) &&
                 (lVar6 = thunk_FUN_0103ffe0(unaff_x20,*(undefined8 *)(*in_stack_00000010 + 0x40)),
                 lVar6 == 0)) {
                uVar7 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
                FUN_00fdc400(uVar7,0);
              }
                    /* catch() { ... } // from try @ 01d84fc0 with catch @ 01d85068
                       catch() { ... } // from try @ 01d8505c with catch @ 01d85068 */
                    /* try { // try from 01d8506c to 01e8519b has its CatchHandler @ 01d8506c
                       catch() { ... } // from try @ 01d8506c with catch @ 01d8506c
                       catch() { ... } // from try @ 01d851ac with catch @ 01d8506c
                       catch() { ... } // from try @ 01d85278 with catch @ 01d8506c
                       catch() { ... } // from try @ 01d85360 with catch @ 01d8506c
                       catch() { ... } // from try @ 01d85374 with catch @ 01d8506c */
              if ((int)in_stack_00000010[3] == 0) goto LAB_01d8529c;
              in_stack_00000010[4] = (long)unaff_x20;
              thunk_FUN_0106e12c(in_stack_00000010 + 4,unaff_x20);
            }
            if (in_stack_00000058 == 0) {
              lVar10 = *(long *)PTR_DAT_023508c0;
              lVar6 = *(long *)(lVar10 + 0x38);
              if (lVar6 == 0) {
                FUN_0103c2a0(lVar10);
                lVar6 = *(long *)(lVar10 + 0x38);
              }
              lVar6 = *(long *)(lVar6 + 0x10);
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_0103c244();
              }
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_01022c14();
              }
              lVar6 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
              if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_0103c244();
              }
              in_stack_00000058 = **(long **)(lVar6 + 0xb8);
            }
            if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc534();
            }
            plVar4 = (long *)(**(code **)(*in_stack_00000018 + 0x188))
                                       (in_stack_00000018,unaff_w25,in_stack_00000010,
                                        &stack0x00000058,in_stack_00000020);
            uVar5 = FUN_01cc8210(plVar4,0,0);
            if ((uVar5 & 1) == 0) {
              if (plVar4 != (long *)0x0) {
                lVar6 = *plVar4;
                bVar1 = *(byte *)(*(long *)PTR_DAT_0234ebc0 + 0x130);
                if ((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
                   (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)PTR_DAT_0234ebc0)) {
                  uVar7 = (**(code **)(lVar6 + 0x328))
                                    (plVar4,in_stack_00000040,unaff_w25,in_stack_00000018,
                                     in_stack_00000058);
                  return uVar7;
                }
                    /* WARNING: Subroutine does not return */
                FUN_00fdc8d0(plVar4);
              }
              goto LAB_01d85298;
            }
          }
          uVar7 = (**(code **)(*in_stack_00000028 + 0x2c8))
                            (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x2d0));
          thunk_FUN_010303a8(PTR_DAT_0234bcf0);
          uVar8 = thunk_FUN_010400dc();
          FUN_01d4c060(uVar8,uVar7,in_stack_00000030,0);
          uVar7 = thunk_FUN_010303a8(PTR_DAT_02359298);
                    /* WARNING: Subroutine does not return */
          FUN_00fdc400(uVar8,uVar7);
        }
        if (*(uint *)(unaff_x24 + 0x18) <= unaff_w21) {
LAB_01d8529c:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        plVar4 = *(long **)(unaff_x24 + (long)(int)unaff_w21 * 8 + 0x20);
        if (plVar4 == (long *)0x0) goto LAB_01d85298;
        lVar6 = *plVar4;
        if (unaff_w26 == 0) {
          pcVar9 = *(code **)(lVar6 + 0x278);
          uVar7 = *(undefined8 *)(lVar6 + 0x280);
        }
        else {
          pcVar9 = *(code **)(lVar6 + 0x298);
          uVar7 = *(undefined8 *)(lVar6 + 0x2a0);
        }
        unaff_x28 = (long *)(*pcVar9)(plVar4,1,uVar7);
        uVar5 = FUN_01cc86b0(unaff_x28,0,0);
        plVar4 = unaff_x20;
      } while ((uVar5 & 1) != 0);
      uVar7 = FUN_00fdc388(*unaff_x23,in_stack_00000048._4_4_);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01022c14(*unaff_x29);
      }
      if (unaff_x28 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_02351e10 + 0x130);
        if ((*(byte *)(*unaff_x28 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x28 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_02351e10)) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(unaff_x28);
        }
      }
      uVar5 = FUN_01d7f588(unaff_x28,unaff_w25,3,uVar7);
    } while (((uVar5 & 1) == 0) ||
            (uVar5 = FUN_01cc86b0(unaff_x20,0,0), plVar4 = unaff_x28, (uVar5 & 1) != 0));
    if (unaff_x19 == 0) {
      unaff_x19 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02352660);
      FUN_017d2874(unaff_x19,*(undefined4 *)(unaff_x24 + 0x18),*(undefined8 *)PTR_DAT_02359230);
      if (unaff_x19 == 0) goto LAB_01d85298;
      lVar6 = *(long *)(unaff_x19 + 0x10);
      lVar10 = *(long *)PTR_DAT_02352648;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_01d85298;
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
        puVar3 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
        *puVar3 = unaff_x20;
        thunk_FUN_0106e12c(puVar3,unaff_x20);
      }
      else {
        FUN_017d3030(unaff_x19,unaff_x20,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
    lVar6 = *(long *)PTR_DAT_02352648;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) {
LAB_01d85298:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    in_x10 = (long)(int)*(uint *)(unaff_x19 + 0x18);
  } while (*(uint *)(unaff_x19 + 0x18) < *(uint *)(param_1 + 0x18));
  FUN_017d3030(unaff_x19,unaff_x28,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
              );
  plVar4 = unaff_x20;
  goto LAB_01d84f54;
}


