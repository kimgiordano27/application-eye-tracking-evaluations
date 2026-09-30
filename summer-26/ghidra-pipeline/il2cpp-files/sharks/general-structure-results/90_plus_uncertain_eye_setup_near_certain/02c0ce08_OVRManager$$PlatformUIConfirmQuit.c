/*
FUNCTION_NAME: OVRManager$$PlatformUIConfirmQuit
ENTRY_POINT: 02c0ce08
PROGRAM: sharks-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c0d0d4) */
/* WARNING: Removing unreachable block (ram,0x02c0d0d8) */

undefined8 OVRManager__PlatformUIConfirmQuit(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long unaff_x19;
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
    thunk_FUN_0188fd20(param_1,param_2);
    param_2 = unaff_x20;
LAB_02c0ce28:
    do {
      lVar8 = *(long *)(unaff_x19 + 0x10);
      lVar10 = *(long *)PTR_DAT_03803070;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_02c0d1d0;
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      plVar6 = param_2;
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
        plVar3 = (long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
        *plVar3 = (long)unaff_x28;
        thunk_FUN_0188fd20(plVar3,unaff_x28);
      }
      else {
        FUN_0270a444(unaff_x19,unaff_x28,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      do {
        do {
          param_2 = plVar6;
          unaff_w21 = unaff_w21 + 1;
          if ((int)*(uint *)(unaff_x24 + 0x18) <= (int)unaff_w21) {
            if (unaff_x19 != 0) {
              in_stack_00000010 =
                   (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,
                                        *(undefined4 *)(unaff_x19 + 0x18));
              FUN_0270a8f8(unaff_x19,in_stack_00000010,*(undefined8 *)PTR_DAT_0380b0a0);
            }
            uVar4 = FUN_02b0f518(param_2,0,0);
            if ((uVar4 & 1) != 0) {
              if ((in_stack_00000048._4_4_ == 0) && (in_stack_00000010 == (long *)0x0)) {
                if ((param_2 == (long *)0x0) ||
                   (lVar8 = (**(code **)(*param_2 + 0x398))
                                      (param_2,*(undefined8 *)(*param_2 + 0x3a0)), lVar8 == 0))
                goto LAB_02c0d1d0;
                if (((unaff_w25 >> 0x12 & 1) == 0) && (*(long *)(lVar8 + 0x18) == 0)) {
                  uVar5 = (**(code **)(*param_2 + 0x328))
                                    (param_2,in_stack_00000040,unaff_w25,in_stack_00000018,
                                     in_stack_00000058);
                  return uVar5;
                }
              }
              if (in_stack_00000010 == (long *)0x0) {
                in_stack_00000010 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,1);
                if (in_stack_00000010 == (long *)0x0) goto LAB_02c0d1d0;
                if ((param_2 != (long *)0x0) &&
                   (lVar8 = thunk_FUN_01861ac0(param_2,*(undefined8 *)(*in_stack_00000010 + 0x40)),
                   lVar8 == 0)) {
                  uVar5 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
                  FUN_017fc474(uVar5,0);
                }
                if ((int)in_stack_00000010[3] == 0) goto LAB_02c0d1d4;
                in_stack_00000010[4] = (long)param_2;
                thunk_FUN_0188fd20(in_stack_00000010 + 4,param_2);
              }
              if (in_stack_00000058 == 0) {
                lVar10 = *(long *)PTR_DAT_037f4dc8;
                lVar8 = *(long *)(lVar10 + 0x38);
                if (lVar8 == 0) {
                  FUN_0185db00(lVar10);
                  lVar8 = *(long *)(lVar10 + 0x38);
                }
                lVar8 = *(long *)(lVar8 + 0x10);
                if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                  lVar8 = FUN_0185daa4();
                }
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  thunk_FUN_01843fdc();
                }
                lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
                if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
                  lVar8 = FUN_0185daa4();
                }
                in_stack_00000058 = **(long **)(lVar8 + 0xb8);
              }
              if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_017fc5a8();
              }
              plVar6 = (long *)(**(code **)(*in_stack_00000018 + 0x188))
                                         (in_stack_00000018,unaff_w25,in_stack_00000010,
                                          &stack0x00000058,in_stack_00000020);
              uVar4 = FUN_02b0f0b4(plVar6,0,0);
              if ((uVar4 & 1) == 0) {
                if (plVar6 != (long *)0x0) {
                  lVar8 = *plVar6;
                  bVar1 = *(byte *)(*(long *)PTR_DAT_037fc238 + 0x130);
                  if ((bVar1 <= *(byte *)(lVar8 + 0x130)) &&
                     (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) ==
                      *(long *)PTR_DAT_037fc238)) {
                    uVar5 = (**(code **)(lVar8 + 0x328))
                                      (plVar6,in_stack_00000040,unaff_w25,in_stack_00000018,
                                       in_stack_00000058);
                    return uVar5;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_017fc944(plVar6);
                }
                goto LAB_02c0d1d0;
              }
            }
            uVar5 = (**(code **)(*in_stack_00000028 + 0x2c8))
                              (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x2d0));
            thunk_FUN_01851c08(PTR_DAT_037f87c8);
            uVar7 = thunk_FUN_01861bbc();
            FUN_02bd1250(uVar7,uVar5,in_stack_00000030,0);
            uVar5 = thunk_FUN_01851c08(PTR_DAT_0380b110);
                    /* WARNING: Subroutine does not return */
            FUN_017fc474(uVar7,uVar5);
          }
          if (*(uint *)(unaff_x24 + 0x18) <= unaff_w21) {
LAB_02c0d1d4:
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          plVar6 = *(long **)(unaff_x24 + (long)(int)unaff_w21 * 8 + 0x20);
          if (plVar6 == (long *)0x0) goto LAB_02c0d1d0;
          lVar8 = *plVar6;
          if (unaff_w26 == 0) {
            pcVar9 = *(code **)(lVar8 + 0x288);
            uVar5 = *(undefined8 *)(lVar8 + 0x290);
          }
          else {
            pcVar9 = *(code **)(lVar8 + 0x2b8);
            uVar5 = *(undefined8 *)(lVar8 + 0x2c0);
          }
          unaff_x28 = (long *)(*pcVar9)(plVar6,1,uVar5);
          uVar4 = FUN_02b0f554(unaff_x28,0,0);
          plVar6 = param_2;
        } while ((uVar4 & 1) != 0);
        uVar5 = FUN_017fc3f4(*unaff_x23,in_stack_00000048._4_4_);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01843fdc(*unaff_x29);
        }
        if (unaff_x28 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_03802908 + 0x130);
          if ((*(byte *)(*unaff_x28 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*unaff_x28 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_03802908)) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc944(unaff_x28);
          }
        }
        uVar4 = FUN_02c070a0(unaff_x28,unaff_w25,3,uVar5);
      } while (((uVar4 & 1) == 0) ||
              (uVar4 = FUN_02b0f554(param_2,0,0), plVar6 = unaff_x28, (uVar4 & 1) != 0));
    } while (unaff_x19 != 0);
    unaff_x19 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03803088);
    FUN_02709c80(unaff_x19,*(undefined4 *)(unaff_x24 + 0x18),*(undefined8 *)PTR_DAT_0380b0a8);
    if (unaff_x19 == 0) {
LAB_02c0d1d0:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar8 = *(long *)(unaff_x19 + 0x10);
    lVar10 = *(long *)PTR_DAT_03803070;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_02c0d1d0;
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if (*(uint *)(lVar8 + 0x18) <= uVar2) {
      FUN_0270a444(unaff_x19,param_2,
                   *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      goto LAB_02c0ce28;
    }
    *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
    param_1 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
    *param_1 = param_2;
    unaff_x20 = param_2;
  } while( true );
}


