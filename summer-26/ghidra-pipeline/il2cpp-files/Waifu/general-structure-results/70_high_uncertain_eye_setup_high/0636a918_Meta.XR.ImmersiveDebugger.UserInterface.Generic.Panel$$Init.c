/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$Init
ENTRY_POINT: 0636a918
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__Init
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar8;
  long unaff_x23;
  ulong unaff_x24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  uint unaff_w28;
  ulong unaff_x29;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long in_stack_00000000;
  long in_stack_00000008;
  ulong in_stack_00000018;
  
  while (lVar6 = FUN_063178b4(param_5,0), lVar6 != 0) {
    FUN_0635a090(lVar6,unaff_w25,unaff_w26);
    if (*(long *)(unaff_x23 + 0xa0) == 0) break;
    *(undefined4 *)(*(long *)(*(long *)(unaff_x23 + 0xa0) + 0x10) + unaff_x19 * 4) = 0xffffffff;
    do {
      do {
        while( true ) {
          if (*(long *)(unaff_x23 + 0x18) == 0) goto LAB_0636aa40;
          unaff_x24 = unaff_x24 + 1;
          *(uint *)(*(long *)(*(long *)(unaff_x23 + 0x18) + 0x10) + unaff_x19 * 4) = unaff_w20;
          if (unaff_x29 == unaff_x24) {
            return;
          }
          if (*(long *)(unaff_x23 + 0x18) == 0) goto LAB_0636aa40;
          unaff_w26 = unaff_w27 + (int)unaff_x24;
          unaff_x19 = (long)unaff_w26;
          uVar1 = *(uint *)(*(long *)(*(long *)(unaff_x23 + 0x18) + 0x10) + (long)unaff_w26 * 4);
          unaff_w20 = uVar1 & 0xfffffffe | unaff_w28;
          if ((in_stack_00000018 & 0x100000000) == 0) break;
          unaff_w20 = unaff_w20 | 0x2000000;
          if (unaff_x21 != 0) {
            uVar4 = (**(code **)(unaff_x21 + 0x18))
                              (*(undefined8 *)(unaff_x21 + 0x40),unaff_x24 & 0xffffffff,
                               *(undefined8 *)(unaff_x21 + 0x28));
            if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
              FUN_033b9870(DAT_083cf7d8);
            }
            uVar5 = FUN_07a0d2c4(uVar4,0,0);
            if ((uVar5 & 1) != 0) {
              if ((uVar1 & 0x7000) != 0) {
                if (*(long *)(unaff_x23 + 0xa0) == 0) goto LAB_0636aa40;
                if (*(int *)(*(long *)(*(long *)(unaff_x23 + 0xa0) + 0x10) + unaff_x19 * 4) == -1) {
                  if ((uVar1 & 0x20000) == 0) {
                    unaff_w26 = -1;
                  }
                  if ((*(long *)(unaff_x23 + 0x10) == 0) ||
                     (lVar6 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0), lVar6 == 0))
                  goto LAB_0636aa40;
                  uVar3 = FUN_06359b00(lVar6,uVar4,unaff_w26,uVar1 >> 0x14 & 1);
                  if (*(long *)(unaff_x23 + 0xa0) == 0) goto LAB_0636aa40;
                  *(undefined4 *)(*(long *)(*(long *)(unaff_x23 + 0xa0) + 0x10) + unaff_x19 * 4) =
                       uVar3;
                  if ((uVar1 >> 0x13 & 1) != 0) {
                    if ((*(long *)(unaff_x23 + 0x10) == 0) ||
                       (lVar6 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0), lVar6 == 0))
                    goto LAB_0636aa40;
                    Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Counter
                              (lVar6,uVar3,1);
                  }
                }
              }
              if ((uVar1 >> 0x12 & 1) != 0) {
                if (*(long *)(unaff_x23 + 0x98) == 0) goto LAB_0636aa40;
                if (*(int *)(*(long *)(*(long *)(unaff_x23 + 0x98) + 0x10) + unaff_x19 * 4) == -1) {
                  if (in_stack_00000008 == 0) {
                    uVar9 = 0;
                    uVar5 = param_2;
                    uVar11 = param_3;
                    param_2 = 0;
                    param_3 = 0;
                  }
                  else {
                    uVar9 = (**(code **)(in_stack_00000008 + 0x18))
                                      (*(undefined8 *)(in_stack_00000008 + 0x40),
                                       unaff_x24 & 0xffffffff,
                                       *(undefined8 *)(in_stack_00000008 + 0x28));
                    uVar5 = param_2;
                    uVar11 = param_3;
                  }
                  if (in_stack_00000000 == 0) {
                    /* try { // try from 0636a9a8 to 0646a9b3 has its CatchHandler @ 0636af3c */
                    puVar7 = *(uint **)(DAT_083d4540 + 0xb8);
                    uVar5 = (ulong)puVar7[1];
                    uVar11 = (ulong)puVar7[2];
                    uVar12 = (ulong)puVar7[3];
                    uVar10 = (ulong)*puVar7;
                  }
                  else {
                    /* try { // try from 0636a984 to 0646a987 has its CatchHandler @ 0636af34 */
                    uVar10 = (**(code **)(in_stack_00000000 + 0x18))
                                       (*(undefined8 *)(in_stack_00000000 + 0x40),
                                        unaff_x24 & 0xffffffff,
                                        *(undefined8 *)(in_stack_00000000 + 0x28));
                    uVar12 = param_4;
                  }
                  param_4 = uVar10;
                  if (*(long *)(unaff_x23 + 0x10) == 0) goto LAB_0636aa40;
                  lVar8 = *(long *)(unaff_x23 + 0x98);
                  lVar6 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0);
                  if (((*(long *)(unaff_x23 + 0xa0) == 0) || (lVar6 == 0)) ||
                     (uVar3 = FUN_06359898(uVar9,param_2,param_3,param_4,uVar5,uVar11,uVar12,lVar6,
                                           uVar4,*(undefined4 *)
                                                  (*(long *)(*(long *)(unaff_x23 + 0xa0) + 0x10) +
                                                  unaff_x19 * 4)), lVar8 == 0)) goto LAB_0636aa40;
                  *(undefined4 *)(*(long *)(lVar8 + 0x10) + unaff_x19 * 4) = uVar3;
                }
              }
            }
          }
        }
        if ((uVar1 >> 0x12 & 1) != 0) {
          if (*(long *)(unaff_x23 + 0x98) == 0) goto LAB_0636aa40;
          iVar2 = *(int *)(*(long *)(*(long *)(unaff_x23 + 0x98) + 0x10) + unaff_x19 * 4);
          if (-1 < iVar2) {
            if ((*(long *)(unaff_x23 + 0x10) == 0) ||
               (lVar6 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0), lVar6 == 0)) goto LAB_0636aa40;
            FUN_063599f0(lVar6,iVar2);
            if (*(long *)(unaff_x23 + 0x98) == 0) goto LAB_0636aa40;
            *(undefined4 *)(*(long *)(*(long *)(unaff_x23 + 0x98) + 0x10) + unaff_x19 * 4) =
                 0xffffffff;
          }
        }
      } while ((uVar1 & 0x7000) == 0);
      if (*(long *)(unaff_x23 + 0xa0) == 0) goto LAB_0636aa40;
      unaff_w25 = *(int *)(*(long *)(*(long *)(unaff_x23 + 0xa0) + 0x10) + unaff_x19 * 4);
    } while (unaff_w25 < 0);
    if ((uVar1 >> 0x13 & 1) != 0) {
      if ((*(long *)(unaff_x23 + 0x10) == 0) ||
         (lVar6 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0), lVar6 == 0)) break;
      Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Counter(lVar6,unaff_w25,0);
    }
    param_5 = *(long *)(unaff_x23 + 0x10);
    if ((uVar1 & 0x20000) == 0) {
      unaff_w26 = -1;
    }
    if (param_5 == 0) break;
  }
LAB_0636aa40:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


