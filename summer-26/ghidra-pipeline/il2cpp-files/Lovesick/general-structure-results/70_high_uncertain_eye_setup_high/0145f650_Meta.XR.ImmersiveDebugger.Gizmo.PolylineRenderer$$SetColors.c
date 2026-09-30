/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetColors
ENTRY_POINT: 0145f650
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetColors(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  if (0 < in_x9) {
    uVar5 = 0;
    do {
      if (param_1 <= uVar5) goto LAB_0145f730;
      *(undefined1 *)(unaff_x20 + 0x20 + uVar5) = 0;
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)(int)param_1);
  }
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((int)*(ulong *)(unaff_x19 + 0x18) < 1) {
    return;
  }
  uVar5 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
  if (uVar5 != 0) {
    uVar7 = 0;
    do {
      if (0 < (int)param_1) {
        lVar8 = *(long *)(unaff_x19 + uVar7 * 8 + 0x20);
        if (lVar8 == 0) {
LAB_0145f754:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar9 = 0;
        do {
          lVar4 = *(long *)(lVar8 + 0x10);
          if (lVar4 == 0) goto LAB_0145f754;
          if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_0145f730;
          uVar6 = *(undefined8 *)(lVar4 + uVar9 * 8 + 0x20);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar3 = FUN_02681b9c(uVar6,0,0);
          uVar1 = *(uint *)(unaff_x20 + 0x18);
          param_1 = (ulong)uVar1;
          if ((uVar3 & 1) != 0) {
            if (param_1 <= uVar9) goto LAB_0145f730;
            *(undefined1 *)(unaff_x20 + 0x20 + uVar9) = 1;
          }
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)uVar1);
      }
      uVar7 = uVar7 + 1;
      if (uVar7 == uVar5) {
        return;
      }
    } while (uVar7 < *(uint *)(unaff_x19 + 0x18));
  }
LAB_0145f730:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


