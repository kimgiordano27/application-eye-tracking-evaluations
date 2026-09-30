/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry.<>c$$<InitGizmos>b__3_1
ENTRY_POINT: 06da9000
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c__<InitGizmos>b__3_1(void)

{
  uint uVar1;
  uint in_w8;
  long lVar2;
  long in_x9;
  int iVar3;
  long in_x10;
  long lVar4;
  float *pfVar5;
  long lVar6;
  uint unaff_w19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  float fVar7;
  float fVar8;
  
  if (unaff_w21 < in_w8) {
    if (0 < unaff_w20) {
      lVar2 = *(long *)(unaff_x22 + 0x188);
      if (lVar2 == 0) {
LAB_06da90ac:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      fVar7 = *(float *)(in_x9 + (long)(int)unaff_w21 * 4 + 0x20);
      fVar8 = *(float *)(in_x10 + (long)(int)unaff_w21 * 4 + 0x20);
      uVar1 = *(uint *)(lVar2 + 0x18);
      iVar3 = unaff_w20 + 1;
      do {
        if (uVar1 < 2) goto LAB_06da90a8;
        lVar4 = *(long *)(lVar2 + 0x20);
        if (lVar4 == 0) goto LAB_06da90ac;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w19) goto LAB_06da90a8;
        lVar6 = *(long *)(lVar2 + 0x28);
        if (lVar6 == 0) goto LAB_06da90ac;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w19) goto LAB_06da90a8;
        pfVar5 = (float *)(lVar4 + (long)(int)unaff_w19 * 4 + 0x20);
        iVar3 = iVar3 + -1;
        *(float *)(lVar6 + (long)(int)unaff_w19 * 4 + 0x20) = fVar8 * *pfVar5;
        unaff_w19 = unaff_w19 + 1;
        *pfVar5 = fVar7 * *pfVar5;
      } while (1 < iVar3);
    }
    return;
  }
LAB_06da90a8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


