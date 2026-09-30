/*
FUNCTION_NAME: OVRManager$$GetCurrentInputSubsystem
ENTRY_POINT: 033ab608
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRManager__GetCurrentInputSubsystem(ulong param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x19;
  long *unaff_x20;
  uint uVar5;
  long *unaff_x21;
  uint uVar6;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
                    /* try { // try from 033ab618 to 034ab63f has its CatchHandler @ 033abbb0 */
    *(undefined1 *)(unaff_x22 + 0x8b2) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  if (unaff_x19 == (long *)0x0) {
LAB_033ab778:
    uVar5 = 0;
  }
  else {
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    if (unaff_x20 != unaff_x19) {
      plVar2 = (long *)(**(code **)(*unaff_x20 + 0x308))();
      if (plVar2 == (long *)0x0) {
LAB_033ab790:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar3 = FUN_033ab100();
                    /* try { // try from 033ab674 to 034ab69f has its CatchHandler @ 033abba8 */
      if ((uVar3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x033ab698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar2 + 0x288))(plVar2);
        return uVar3;
      }
      uVar3 = (**(code **)(*unaff_x19 + 0x278))();
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_033ab798();
        if ((uVar3 & 1) != 0) {
          uVar3 = FUN_033ab85c();
          return uVar3;
        }
                    /* try { // try from 033ab6e8 to 034ab6eb has its CatchHandler @ 033abb70 */
        uVar3 = (**(code **)(*unaff_x20 + 0x388))();
        if ((uVar3 & 1) != 0) {
                    /* try { // try from 033ab70c to 034ab70f has its CatchHandler @ 033abb90 */
          lVar4 = (**(code **)(*unaff_x20 + 0x488))();
          if (lVar4 == 0) goto LAB_033ab790;
          uVar1 = *(uint *)(lVar4 + 0x18);
          uVar5 = (uint)(0 < (int)uVar1);
          if (0 < (int)uVar1) {
            uVar6 = 0;
            uVar5 = (uint)(0 < (int)uVar1);
            do {
              if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db78();
              }
              plVar2 = *(long **)(lVar4 + (long)(int)uVar6 * 8 + 0x20);
              if (plVar2 == (long *)0x0) goto LAB_033ab790;
                    /* try { // try from 033ab744 to 034ab74f has its CatchHandler @ 033abb88 */
              uVar3 = (**(code **)(*plVar2 + 0x288))();
              if ((uVar3 & 1) == 0) break;
              uVar1 = *(uint *)(lVar4 + 0x18);
                    /* try { // try from 033ab760 to 034ab7c7 has its CatchHandler @ 033abeb8 */
              uVar6 = uVar6 + 1;
              uVar5 = (uint)((int)uVar6 < (int)uVar1);
            } while ((int)uVar6 < (int)uVar1);
          }
          uVar5 = uVar5 ^ 1;
          goto LAB_033ab77c;
        }
        goto LAB_033ab778;
      }
    }
    uVar5 = 1;
  }
LAB_033ab77c:
  return (ulong)uVar5;
}


