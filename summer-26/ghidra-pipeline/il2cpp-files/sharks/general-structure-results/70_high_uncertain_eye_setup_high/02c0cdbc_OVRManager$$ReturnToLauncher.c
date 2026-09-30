/*
FUNCTION_NAME: OVRManager$$ReturnToLauncher
ENTRY_POINT: 02c0cdbc
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c0d0d4) */
/* WARNING: Removing unreachable block (ram,0x02c0d0d8) */

undefined8 OVRManager__ReturnToLauncher(long param_1,ulong param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
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
  
  while (FUN_02709c80(param_1,param_2,param_3), unaff_x19 != 0) {
    lVar9 = *(long *)(unaff_x19 + 0x10);
    lVar11 = *(long *)PTR_DAT_03803070;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      puVar3 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
      *puVar3 = unaff_x20;
      thunk_FUN_0188fd20(puVar3,unaff_x20);
    }
    else {
      FUN_0270a444(unaff_x19,unaff_x20,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
    do {
      lVar9 = *(long *)(unaff_x19 + 0x10);
      lVar11 = *(long *)PTR_DAT_03803070;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_02c0d1d0;
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      plVar7 = unaff_x20;
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
        plVar4 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
        *plVar4 = (long)unaff_x28;
        thunk_FUN_0188fd20(plVar4,unaff_x28);
      }
      else {
        FUN_0270a444(unaff_x19,unaff_x28,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      do {
        do {
          unaff_x20 = plVar7;
          unaff_w21 = unaff_w21 + 1;
          if ((int)*(uint *)(unaff_x24 + 0x18) <= (int)unaff_w21) {
            if (unaff_x19 != 0) {
              in_stack_00000010 =
                   (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,
                                        *(undefined4 *)(unaff_x19 + 0x18));
              FUN_0270a8f8(unaff_x19,in_stack_00000010,*(undefined8 *)PTR_DAT_0380b0a0);
            }
            uVar5 = FUN_02b0f518(unaff_x20,0,0);
            if ((uVar5 & 1) != 0) {
              if ((in_stack_00000048._4_4_ == 0) && (in_stack_00000010 == (long *)0x0)) {
                if ((unaff_x20 == (long *)0x0) ||
                   (lVar9 = (**(code **)(*unaff_x20 + 0x398))
                                      (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x3a0)), lVar9 == 0))
                goto LAB_02c0d1d0;
                if (((unaff_w25 >> 0x12 & 1) == 0) && (*(long *)(lVar9 + 0x18) == 0)) {
                  uVar6 = (**(code **)(*unaff_x20 + 0x328))
                                    (unaff_x20,in_stack_00000040,unaff_w25,in_stack_00000018,
                                     in_stack_00000058);
                  return uVar6;
                }
              }
              if (in_stack_00000010 == (long *)0x0) {
                in_stack_00000010 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,1);
                if (in_stack_00000010 == (long *)0x0) goto LAB_02c0d1d0;
                if ((unaff_x20 != (long *)0x0) &&
                   (lVar9 = thunk_FUN_01861ac0(unaff_x20,*(undefined8 *)(*in_stack_00000010 + 0x40))
                   , lVar9 == 0)) {
                  uVar6 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
                  FUN_017fc474(uVar6,0);
                }
                if ((int)in_stack_00000010[3] == 0) goto LAB_02c0d1d4;
                in_stack_00000010[4] = (long)unaff_x20;
                thunk_FUN_0188fd20(in_stack_00000010 + 4,unaff_x20);
              }
              if (in_stack_00000058 == 0) {
                lVar11 = *(long *)PTR_DAT_037f4dc8;
                lVar9 = *(long *)(lVar11 + 0x38);
                if (lVar9 == 0) {
                  FUN_0185db00(lVar11);
                  lVar9 = *(long *)(lVar11 + 0x38);
                }
                lVar9 = *(long *)(lVar9 + 0x10);
                if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                  lVar9 = FUN_0185daa4();
                }
                if (*(int *)(lVar9 + 0xe0) == 0) {
                  thunk_FUN_01843fdc();
                }
                lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
                if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                  lVar9 = FUN_0185daa4();
                }
                in_stack_00000058 = **(long **)(lVar9 + 0xb8);
              }
              if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_017fc5a8();
              }
              plVar7 = (long *)(**(code **)(*in_stack_00000018 + 0x188))
                                         (in_stack_00000018,unaff_w25,in_stack_00000010,
                                          &stack0x00000058,in_stack_00000020);
              uVar5 = FUN_02b0f0b4(plVar7,0,0);
              if ((uVar5 & 1) == 0) {
                if (plVar7 != (long *)0x0) {
                  lVar9 = *plVar7;
                  bVar1 = *(byte *)(*(long *)PTR_DAT_037fc238 + 0x130);
                  if ((bVar1 <= *(byte *)(lVar9 + 0x130)) &&
                     (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) ==
                      *(long *)PTR_DAT_037fc238)) {
                    uVar6 = (**(code **)(lVar9 + 0x328))
                                      (plVar7,in_stack_00000040,unaff_w25,in_stack_00000018,
                                       in_stack_00000058);
                    return uVar6;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_017fc944(plVar7);
                }
                goto LAB_02c0d1d0;
              }
            }
            uVar6 = (**(code **)(*in_stack_00000028 + 0x2c8))
                              (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x2d0));
            thunk_FUN_01851c08(PTR_DAT_037f87c8);
            uVar8 = thunk_FUN_01861bbc();
            FUN_02bd1250(uVar8,uVar6,in_stack_00000030,0);
            uVar6 = thunk_FUN_01851c08(PTR_DAT_0380b110);
                    /* WARNING: Subroutine does not return */
            FUN_017fc474(uVar8,uVar6);
          }
          if (*(uint *)(unaff_x24 + 0x18) <= unaff_w21) {
LAB_02c0d1d4:
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          plVar7 = *(long **)(unaff_x24 + (long)(int)unaff_w21 * 8 + 0x20);
          if (plVar7 == (long *)0x0) goto LAB_02c0d1d0;
          lVar9 = *plVar7;
          if (unaff_w26 == 0) {
            pcVar10 = *(code **)(lVar9 + 0x288);
            uVar6 = *(undefined8 *)(lVar9 + 0x290);
          }
          else {
            pcVar10 = *(code **)(lVar9 + 0x2b8);
            uVar6 = *(undefined8 *)(lVar9 + 0x2c0);
          }
          unaff_x28 = (long *)(*pcVar10)(plVar7,1,uVar6);
          uVar5 = FUN_02b0f554(unaff_x28,0,0);
          plVar7 = unaff_x20;
        } while ((uVar5 & 1) != 0);
        uVar6 = FUN_017fc3f4(*unaff_x23,in_stack_00000048._4_4_);
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
        uVar5 = FUN_02c070a0(unaff_x28,unaff_w25,3,uVar6);
      } while (((uVar5 & 1) == 0) ||
              (uVar5 = FUN_02b0f554(unaff_x20,0,0), plVar7 = unaff_x28, (uVar5 & 1) != 0));
    } while (unaff_x19 != 0);
    param_1 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03803088);
    param_2 = (ulong)*(uint *)(unaff_x24 + 0x18);
    param_3 = *(undefined8 *)PTR_DAT_0380b0a8;
    unaff_x19 = param_1;
  }
LAB_02c0d1d0:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


