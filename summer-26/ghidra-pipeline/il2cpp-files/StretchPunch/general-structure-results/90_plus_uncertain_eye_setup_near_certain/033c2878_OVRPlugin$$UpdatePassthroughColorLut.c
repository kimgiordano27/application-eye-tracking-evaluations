/*
FUNCTION_NAME: OVRPlugin$$UpdatePassthroughColorLut
ENTRY_POINT: 033c2878
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 98
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin__UpdatePassthroughColorLut(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  long lVar8;
  long *plVar9;
  undefined8 unaff_x29;
  uint uStack0000000000000000;
  uint uStack0000000000000004;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  
code_r0x033c2878:
  plVar9 = (long *)
           Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  if ((int)param_1 == 0) {
                    /* try { // try from 033c2934 to 034c2937 has its CatchHandler @ 033c2d74 */
                    /* try { // try from 033c2938 to 034c294b has its CatchHandler @ 033c2d80 */
    return param_1;
  }
LAB_033c28bc:
  do {
    unaff_x25 = unaff_x25 + 1;
                    /* try { // try from 033c28c8 to 034c291f has its CatchHandler @ 033c2e54 */
    if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x25) {
      if (((uStack0000000000000000 ^ uStack0000000000000004) & 1) != 0) {
        uVar6 = 1;
        if ((uStack0000000000000004 & 1) == 0) {
          uVar6 = 2;
        }
        return (ulong)uVar6;
      }
      if (unaff_x22 == 0 || (uStack0000000000000004 & 1) != 0) {
        return 0;
      }
      if ((unaff_x20 != 0) && (unaff_x19 != 0)) {
        if (*(int *)(unaff_x19 + 0x18) < *(int *)(unaff_x20 + 0x18)) {
          return 1;
        }
        if (*(int *)(unaff_x19 + 0x18) <= *(int *)(unaff_x20 + 0x18)) {
          return 0;
        }
        return 2;
      }
      goto LAB_033c2950;
    }
    if (unaff_x22 == 0) {
      lVar1 = *plVar9;
      break;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_x25) goto thunk_FUN_01d7db78;
    lVar1 = *plVar9;
    lVar8 = *(long *)(in_stack_00000010 + unaff_x25 * 8);
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar1 = *plVar9;
    }
    plVar9 = (long *)
             Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  } while (lVar8 == *(long *)(*(long *)(lVar1 + 0xb8) + 0x18));
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar2 = FUN_033ab18c();
  if ((uVar2 & 1) == 0) {
    if (unaff_x26 == 0) goto LAB_033c2950;
    if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto thunk_FUN_01d7db78;
    if (unaff_x20 == 0) goto LAB_033c2950;
LAB_033c2700:
    uVar6 = *(uint *)(in_stack_00000020 + unaff_x25 * 4);
    if (*(uint *)(unaff_x20 + 0x18) <= uVar6) goto thunk_FUN_01d7db78;
    plVar3 = *(long **)(unaff_x20 + (long)(int)uVar6 * 8 + 0x20);
    if (plVar3 == (long *)0x0) goto LAB_033c2950;
    uVar4 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
  }
  else {
    if (unaff_x26 == 0) goto LAB_033c2950;
    if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto thunk_FUN_01d7db78;
    if (unaff_x20 == 0) goto LAB_033c2950;
    uVar4 = unaff_x23;
    if (*(int *)(in_stack_00000020 + unaff_x25 * 4) < *(int *)(unaff_x20 + 0x18) + -1) {
      if (*(uint *)(unaff_x26 + 0x18) <= unaff_x25) goto thunk_FUN_01d7db78;
      goto LAB_033c2700;
    }
  }
  if (*(int *)(*plVar9 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar2 = FUN_033ab18c();
  if ((uVar2 & 1) == 0) {
    if (unaff_x24 == 0) goto LAB_033c2950;
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) goto thunk_FUN_01d7db78;
    if (unaff_x19 == 0) goto LAB_033c2950;
LAB_033c27a8:
    uVar6 = *(uint *)(in_stack_00000018 + unaff_x25 * 4);
    if (*(uint *)(unaff_x19 + 0x18) <= uVar6) goto thunk_FUN_01d7db78;
    plVar3 = *(long **)(unaff_x19 + (long)(int)uVar6 * 8 + 0x20);
    if (plVar3 == (long *)0x0) {
LAB_033c2950:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar5 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
  }
  else {
    if (unaff_x24 == 0) goto LAB_033c2950;
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) goto thunk_FUN_01d7db78;
    if (unaff_x19 == 0) goto LAB_033c2950;
    uVar5 = unaff_x29;
    if (*(int *)(in_stack_00000018 + unaff_x25 * 4) < *(int *)(unaff_x19 + 0x18) + -1) {
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) goto thunk_FUN_01d7db78;
      goto LAB_033c27a8;
    }
  }
                    /* try { // try from 033c27e0 to 034c27fb has its CatchHandler @ 033c2d4c */
  if (*(int *)(*plVar9 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar2 = FUN_033aa3b4(uVar4,uVar5,0);
  if ((uVar2 & 1) != 0) goto LAB_033c28bc;
  if (unaff_x25 < *(uint *)(unaff_x21 + 0x18)) {
                    /* try { // try from 033c2818 to 034c281b has its CatchHandler @ 033c2d40 */
    uVar7 = *(undefined8 *)(in_stack_00000008 + unaff_x25 * 8);
    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    param_1 = FUN_033c2168(uVar4,uVar5,uVar7);
    plVar9 = (long *)
             Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
    if ((int)param_1 == 1) {
      uStack0000000000000004 = 1;
      goto LAB_033c28bc;
    }
    if ((int)param_1 == 2) {
      uStack0000000000000000 = 1;
      goto LAB_033c28bc;
    }
    goto code_r0x033c2878;
  }
thunk_FUN_01d7db78:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


