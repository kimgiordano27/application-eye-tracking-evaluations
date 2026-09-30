/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 03e3b85c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Empty<OVRPlugin_VirtualKeyboardModelAnimationState>
               (undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar7;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long *in_stack_00000178;
  
  FUN_0367c9fc(param_2);
  plVar1 = (long *)thunk_FUN_0367fd24();
  if (plVar1 != (long *)0x0) {
    FUN_07253408(&stack0x00000150,0);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03e3b80c with catch @ 03e3b888
                        */
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03e3b7d4 with catch @ 03e3b88c
                        */
    lVar3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x78);
                    /* catch(type#1 @ 07542bc8) { ... } // from try @ 03e3b7b0 with catch @ 03e3b890
                        */
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc(lVar3);
    }
    lVar4 = *plVar1;
                    /* try { // try from 03e3b8ac to 03f3b8af has its CatchHandler @ 03e3b8b8 */
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
                    /* catch() { ... } // from try @ 03e3b8ac with catch @ 03e3b8b8 */
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* try { // try from 03e3b8bc to 03f3b8c3 has its CatchHandler @ 03e3b8e0 */
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03e3b8f0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(plVar1,lVar3,0);
LAB_03e3b8f0:
    uVar5 = (*(code *)*puVar2)(plVar1);
    plVar1 = in_stack_00000178;
    if ((uVar5 & 1) != 0) {
      uVar7 = *(undefined8 *)(unaff_x19 + 0xa8);
      lVar4 = thunk_FUN_0367fd24(in_stack_00000178,DAT_07b68d08);
      lVar3 = DAT_07b68d08;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      plVar1 = (long *)thunk_FUN_0367fd24(plVar1,DAT_07b68d08);
      uVar7 = thunk_FUN_0367fd24(uVar7,DAT_07b68d08);
      lVar4 = *plVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_03e3bbe8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30(plVar1,lVar3,4);
LAB_03e3bbe8:
      _in_stack_00000060 = (*(code *)*puVar2)(plVar1,uVar7,puVar2[1]);
      plVar1 = in_stack_00000178;
      if (in_stack_00000178 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0367c9fc(lVar3);
      }
      lVar4 = *plVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_03e3bc98;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0367cd30(plVar1,lVar3,0);
LAB_03e3bc98:
      (*(code *)*puVar2)(plVar1);
      FUN_07253298(&stack0x00000060,0);
      return;
    }
  }
  *(undefined4 *)(unaff_x19 + 0xb4) = 4;
  return;
}


