/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$.ctor
ENTRY_POINT: 0636a8fc
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel___ctor
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,long param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  uint unaff_w22;
  long lVar6;
  long unaff_x23;
  ulong unaff_x24;
  int unaff_w25;
  int iVar7;
  long unaff_x26;
  long unaff_x27;
  uint unaff_w28;
  ulong unaff_x29;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long in_stack_00000000;
  long in_stack_00000008;
  ulong in_stack_00000018;
  
  do {
    Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Counter(param_5,unaff_w25,0);
    do {
      uVar1 = (undefined4)unaff_x26;
      if ((unaff_w22 & 0x20000) == 0) {
        uVar1 = 0xffffffff;
      }
      if ((*(long *)(unaff_x23 + 0x10) == 0) ||
         (lVar4 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0), lVar4 == 0)) goto LAB_0636aa40;
      FUN_0635a090(lVar4,unaff_w25,uVar1);
      if (*(long *)(unaff_x23 + 0xa0) == 0) goto LAB_0636aa40;
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
            unaff_x26 = unaff_x27 + unaff_x24;
            iVar7 = (int)unaff_x26;
            unaff_x19 = (long)iVar7;
            unaff_w22 = *(uint *)(*(long *)(*(long *)(unaff_x23 + 0x18) + 0x10) + (long)iVar7 * 4);
            unaff_w20 = unaff_w22 & 0xfffffffe | unaff_w28;
            if ((in_stack_00000018 & 0x100000000) == 0) break;
            unaff_w20 = unaff_w20 | 0x2000000;
            if (unaff_x21 != 0) {
              uVar2 = (**(code **)(unaff_x21 + 0x18))
                                (*(undefined8 *)(unaff_x21 + 0x40),unaff_x24 & 0xffffffff,
                                 *(undefined8 *)(unaff_x21 + 0x28));
              if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                FUN_033b9870(DAT_083cf7d8);
              }
              uVar3 = FUN_07a0d2c4(uVar2,0,0);
              if ((uVar3 & 1) != 0) {
                if ((unaff_w22 & 0x7000) != 0) {
                  if (*(long *)(unaff_x23 + 0xa0) == 0) goto LAB_0636aa40;
                  if (*(int *)(*(long *)(*(long *)(unaff_x23 + 0xa0) + 0x10) + unaff_x19 * 4) == -1)
                  {
                    if ((unaff_w22 & 0x20000) == 0) {
                      iVar7 = -1;
                    }
                    if ((*(long *)(unaff_x23 + 0x10) == 0) ||
                       (lVar4 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0), lVar4 == 0))
                    goto LAB_0636aa40;
                    uVar1 = FUN_06359b00(lVar4,uVar2,iVar7,unaff_w22 >> 0x14 & 1);
                    if (*(long *)(unaff_x23 + 0xa0) == 0) goto LAB_0636aa40;
                    *(undefined4 *)(*(long *)(*(long *)(unaff_x23 + 0xa0) + 0x10) + unaff_x19 * 4) =
                         uVar1;
                    if ((unaff_w22 >> 0x13 & 1) != 0) {
                      if ((*(long *)(unaff_x23 + 0x10) == 0) ||
                         (lVar4 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0), lVar4 == 0))
                      goto LAB_0636aa40;
                      Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Counter
                                (lVar4,uVar1,1);
                    }
                  }
                }
                if ((unaff_w22 >> 0x12 & 1) != 0) {
                  if (*(long *)(unaff_x23 + 0x98) == 0) goto LAB_0636aa40;
                  if (*(int *)(*(long *)(*(long *)(unaff_x23 + 0x98) + 0x10) + unaff_x19 * 4) == -1)
                  {
                    if (in_stack_00000008 == 0) {
                      uVar8 = 0;
                      uVar3 = param_2;
                      uVar10 = param_3;
                      param_2 = 0;
                      param_3 = 0;
                    }
                    else {
                      uVar8 = (**(code **)(in_stack_00000008 + 0x18))
                                        (*(undefined8 *)(in_stack_00000008 + 0x40),
                                         unaff_x24 & 0xffffffff,
                                         *(undefined8 *)(in_stack_00000008 + 0x28));
                      uVar3 = param_2;
                      uVar10 = param_3;
                    }
                    if (in_stack_00000000 == 0) {
                      puVar5 = *(uint **)(DAT_083d4540 + 0xb8);
                      uVar3 = (ulong)puVar5[1];
                      uVar10 = (ulong)puVar5[2];
                      uVar11 = (ulong)puVar5[3];
                      uVar9 = (ulong)*puVar5;
                    }
                    else {
                      uVar9 = (**(code **)(in_stack_00000000 + 0x18))
                                        (*(undefined8 *)(in_stack_00000000 + 0x40),
                                         unaff_x24 & 0xffffffff,
                                         *(undefined8 *)(in_stack_00000000 + 0x28));
                      uVar11 = param_4;
                    }
                    param_4 = uVar9;
                    if (*(long *)(unaff_x23 + 0x10) == 0) goto LAB_0636aa40;
                    lVar6 = *(long *)(unaff_x23 + 0x98);
                    lVar4 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0);
                    if (((*(long *)(unaff_x23 + 0xa0) == 0) || (lVar4 == 0)) ||
                       (uVar1 = FUN_06359898(uVar8,param_2,param_3,param_4,uVar3,uVar10,uVar11,lVar4
                                             ,uVar2,*(undefined4 *)
                                                     (*(long *)(*(long *)(unaff_x23 + 0xa0) + 0x10)
                                                     + unaff_x19 * 4)), lVar6 == 0))
                    goto LAB_0636aa40;
                    *(undefined4 *)(*(long *)(lVar6 + 0x10) + unaff_x19 * 4) = uVar1;
                  }
                }
              }
            }
          }
          if ((unaff_w22 >> 0x12 & 1) != 0) {
            if (*(long *)(unaff_x23 + 0x98) == 0) goto LAB_0636aa40;
            iVar7 = *(int *)(*(long *)(*(long *)(unaff_x23 + 0x98) + 0x10) + unaff_x19 * 4);
            if (-1 < iVar7) {
              if ((*(long *)(unaff_x23 + 0x10) == 0) ||
                 (lVar4 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0), lVar4 == 0))
              goto LAB_0636aa40;
              FUN_063599f0(lVar4,iVar7);
              if (*(long *)(unaff_x23 + 0x98) == 0) goto LAB_0636aa40;
              *(undefined4 *)(*(long *)(*(long *)(unaff_x23 + 0x98) + 0x10) + unaff_x19 * 4) =
                   0xffffffff;
            }
          }
        } while ((unaff_w22 & 0x7000) == 0);
        if (*(long *)(unaff_x23 + 0xa0) == 0) goto LAB_0636aa40;
        unaff_w25 = *(int *)(*(long *)(*(long *)(unaff_x23 + 0xa0) + 0x10) + unaff_x19 * 4);
      } while (unaff_w25 < 0);
    } while ((unaff_w22 >> 0x13 & 1) == 0);
  } while ((*(long *)(unaff_x23 + 0x10) != 0) &&
          (param_5 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0), param_5 != 0));
LAB_0636aa40:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


