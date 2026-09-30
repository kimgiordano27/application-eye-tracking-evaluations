/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$ApplyMaterial
ENTRY_POINT: 06e006c0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__ApplyMaterial(ulong param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x25;
  undefined8 uVar6;
  ulong unaff_x27;
  ulong unaff_x29;
  
  do {
    if ((long)(int)param_1 <= (long)unaff_x29) {
      do {
        unaff_x27 = unaff_x27 + 1;
        if ((long)(int)*(uint *)(unaff_x22 + 0x18) <= (long)unaff_x27) {
          return;
        }
        if (*(uint *)(unaff_x22 + 0x18) <= unaff_x27) goto LAB_06e00758;
        plVar2 = *(long **)(unaff_x22 + unaff_x27 * 8 + 0x20);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        unaff_x25 = (**(code **)(*plVar2 + 600))(plVar2,*(undefined8 *)(*plVar2 + 0x260));
        if (unaff_x25 == 0) goto LAB_06e00754;
      } while ((int)*(ulong *)(unaff_x25 + 0x18) < 1);
      unaff_x29 = 0;
      param_1 = *(ulong *)(unaff_x25 + 0x18) & 0xffffffff;
      unaff_x23 = unaff_x25 + 0x20;
    }
    if ((param_1 & 0xffffffff) <= unaff_x29) {
LAB_06e00758:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    if (unaff_x20 == 0) goto LAB_06e00754;
    uVar6 = *(undefined8 *)(unaff_x23 + unaff_x29 * 8);
    uVar3 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),uVar6,*(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar3 & 1) != 0) {
      if (unaff_x21 == 0) {
LAB_06e00754:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar5 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_06e00754;
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
        puVar4 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        *puVar4 = uVar6;
        thunk_FUN_03d233cc(puVar4,uVar6);
      }
      else {
        FUN_05212cf4();
      }
      if ((unaff_x19 & 1) != 0) {
        return;
      }
    }
    param_1 = (ulong)*(uint *)(unaff_x25 + 0x18);
    unaff_x29 = unaff_x29 + 1;
  } while( true );
}


