/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$get_HapticsClip
ENTRY_POINT: 0636a9b0
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__get_HapticsClip(uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar6;
  long unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  int iVar7;
  int unaff_w27;
  uint unaff_w28;
  ulong unaff_x29;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong uVar11;
  long in_stack_00000000;
  long in_stack_00000008;
  ulong in_stack_00000018;
  
code_r0x0636a9b0:
  uVar4 = (ulong)param_1[2];
  uVar11 = (ulong)param_1[3];
  do {
    uVar10 = unaff_d11;
    uVar9 = unaff_d10;
    uVar8 = unaff_d9;
    if (*(long *)(unaff_x23 + 0x10) == 0) {
LAB_0636aa40:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar6 = *(long *)(unaff_x23 + 0x98);
                    /* try { // try from 0636a9c0 to 0646a9db has its CatchHandler @ 0636af60 */
    lVar5 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0);
                    /* try { // try from 0636a9e8 to 0646a9f3 has its CatchHandler @ 0636af50 */
    if (((*(long *)(unaff_x23 + 0xa0) == 0) || (lVar5 == 0)) ||
       (uVar3 = FUN_06359898(unaff_d8,uVar8,uVar9,uVar10,unaff_d12,uVar4,uVar11,lVar5,unaff_x25,
                             *(undefined4 *)
                              (*(long *)(*(long *)(unaff_x23 + 0xa0) + 0x10) + unaff_x19 * 4)),
       lVar6 == 0)) goto LAB_0636aa40;
    *(undefined4 *)(*(long *)(lVar6 + 0x10) + unaff_x19 * 4) = uVar3;
    do {
      do {
        do {
          do {
            while( true ) {
              if (*(long *)(unaff_x23 + 0x18) == 0) goto LAB_0636aa40;
              unaff_x24 = unaff_x24 + 1;
              *(uint *)(*(long *)(*(long *)(unaff_x23 + 0x18) + 0x10) + unaff_x19 * 4) = unaff_w20;
              if (unaff_x29 == unaff_x24) {
                    /* try { // try from 0636aa14 to 0646aa1b has its CatchHandler @ 0636aef8 */
                    /* try { // try from 0636aa30 to 0646aa47 has its CatchHandler @ 0636af5c */
                return;
              }
              if (*(long *)(unaff_x23 + 0x18) == 0) goto LAB_0636aa40;
              iVar7 = unaff_w27 + (int)unaff_x24;
              unaff_x19 = (long)iVar7;
              uVar1 = *(uint *)(*(long *)(*(long *)(unaff_x23 + 0x18) + 0x10) + (long)iVar7 * 4);
              unaff_w20 = uVar1 & 0xfffffffe | unaff_w28;
              if ((in_stack_00000018 & 0x100000000) != 0) break;
              if ((uVar1 >> 0x12 & 1) != 0) {
                if (*(long *)(unaff_x23 + 0x98) == 0) goto LAB_0636aa40;
                iVar2 = *(int *)(*(long *)(*(long *)(unaff_x23 + 0x98) + 0x10) + unaff_x19 * 4);
                if (-1 < iVar2) {
                  if ((*(long *)(unaff_x23 + 0x10) == 0) ||
                     (lVar5 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0), lVar5 == 0))
                  goto LAB_0636aa40;
                  FUN_063599f0(lVar5,iVar2);
                  if (*(long *)(unaff_x23 + 0x98) == 0) goto LAB_0636aa40;
                  *(undefined4 *)(*(long *)(*(long *)(unaff_x23 + 0x98) + 0x10) + unaff_x19 * 4) =
                       0xffffffff;
                }
              }
              if ((uVar1 & 0x7000) != 0) {
                if (*(long *)(unaff_x23 + 0xa0) == 0) goto LAB_0636aa40;
                iVar2 = *(int *)(*(long *)(*(long *)(unaff_x23 + 0xa0) + 0x10) + unaff_x19 * 4);
                if (-1 < iVar2) {
                  if ((uVar1 >> 0x13 & 1) != 0) {
                    if ((*(long *)(unaff_x23 + 0x10) == 0) ||
                       (lVar5 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0), lVar5 == 0))
                    goto LAB_0636aa40;
                    Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Counter
                              (lVar5,iVar2,0);
                  }
                  if ((uVar1 & 0x20000) == 0) {
                    iVar7 = -1;
                  }
                  if ((*(long *)(unaff_x23 + 0x10) == 0) ||
                     (lVar5 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0), lVar5 == 0))
                  goto LAB_0636aa40;
                  FUN_0635a090(lVar5,iVar2,iVar7);
                  if (*(long *)(unaff_x23 + 0xa0) == 0) goto LAB_0636aa40;
                  *(undefined4 *)(*(long *)(*(long *)(unaff_x23 + 0xa0) + 0x10) + unaff_x19 * 4) =
                       0xffffffff;
                }
              }
            }
            unaff_w20 = unaff_w20 | 0x2000000;
          } while (unaff_x21 == 0);
          unaff_x25 = (**(code **)(unaff_x21 + 0x18))
                                (*(undefined8 *)(unaff_x21 + 0x40),unaff_x24 & 0xffffffff,
                                 *(undefined8 *)(unaff_x21 + 0x28));
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870(DAT_083cf7d8);
          }
          uVar4 = FUN_07a0d2c4(unaff_x25,0,0);
        } while ((uVar4 & 1) == 0);
        if ((uVar1 & 0x7000) != 0) {
          if (*(long *)(unaff_x23 + 0xa0) == 0) goto LAB_0636aa40;
          if (*(int *)(*(long *)(*(long *)(unaff_x23 + 0xa0) + 0x10) + unaff_x19 * 4) == -1) {
            if ((uVar1 & 0x20000) == 0) {
              iVar7 = -1;
            }
            if ((*(long *)(unaff_x23 + 0x10) == 0) ||
               (lVar5 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0), lVar5 == 0)) goto LAB_0636aa40;
            uVar3 = FUN_06359b00(lVar5,unaff_x25,iVar7,uVar1 >> 0x14 & 1);
            if (*(long *)(unaff_x23 + 0xa0) == 0) goto LAB_0636aa40;
            *(undefined4 *)(*(long *)(*(long *)(unaff_x23 + 0xa0) + 0x10) + unaff_x19 * 4) = uVar3;
            if ((uVar1 >> 0x13 & 1) != 0) {
              if ((*(long *)(unaff_x23 + 0x10) == 0) ||
                 (lVar5 = FUN_063178b4(*(long *)(unaff_x23 + 0x10),0), lVar5 == 0))
              goto LAB_0636aa40;
              Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton__set_Counter(lVar5,uVar3,1);
            }
          }
        }
      } while ((uVar1 >> 0x12 & 1) == 0);
      if (*(long *)(unaff_x23 + 0x98) == 0) goto LAB_0636aa40;
    } while (*(int *)(*(long *)(*(long *)(unaff_x23 + 0x98) + 0x10) + unaff_x19 * 4) != -1);
    if (in_stack_00000008 == 0) {
      unaff_d8 = 0;
      unaff_d9 = 0;
      unaff_d10 = 0;
    }
    else {
      unaff_d8 = (**(code **)(in_stack_00000008 + 0x18))
                           (*(undefined8 *)(in_stack_00000008 + 0x40),unaff_x24 & 0xffffffff,
                            *(undefined8 *)(in_stack_00000008 + 0x28));
      unaff_d9 = uVar8;
      unaff_d10 = uVar9;
    }
    if (in_stack_00000000 == 0) break;
    unaff_d11 = (**(code **)(in_stack_00000000 + 0x18))
                          (*(undefined8 *)(in_stack_00000000 + 0x40),unaff_x24 & 0xffffffff,
                           *(undefined8 *)(in_stack_00000000 + 0x28));
    unaff_d12 = uVar8;
    uVar4 = uVar9;
    uVar11 = uVar10;
  } while( true );
  param_1 = *(uint **)(DAT_083d4540 + 0xb8);
  unaff_d11 = (ulong)*param_1;
  unaff_d12 = (ulong)param_1[1];
  goto code_r0x0636a9b0;
}


