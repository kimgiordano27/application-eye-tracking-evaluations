/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry.<>c$$.ctor
ENTRY_POINT: 06da8f40
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c___ctor(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined1 in_w8;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  uint unaff_w19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  float fVar9;
  float fVar10;
  
  *(undefined1 *)(unaff_x23 + 0xae3) = in_w8;
  puVar3 = PTR_DAT_08e8fae8;
  if (*(int *)(unaff_x22 + 0x28) == 3) {
    if (0 < unaff_w20) {
      lVar4 = *(long *)(unaff_x22 + 0x188);
      if (lVar4 == 0) goto LAB_06da90ac;
      iVar1 = *(int *)(lVar4 + 0x18);
      iVar6 = unaff_w20 + 1;
      do {
        if (iVar1 == 0) goto LAB_06da90a8;
        lVar7 = *(long *)(lVar4 + 0x20);
        if (lVar7 == 0) goto LAB_06da90ac;
        if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_06da90a8;
        lVar7 = lVar7 + (long)(int)unaff_w19 * 4;
        iVar6 = iVar6 + -1;
        unaff_w19 = unaff_w19 + 1;
        *(float *)(lVar7 + 0x20) = *(float *)(lVar7 + 0x20) * 0.5;
      } while (1 < iVar6);
    }
    return;
  }
  lVar4 = *(long *)PTR_DAT_08e8fae8;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar4 = *(long *)puVar3;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x38);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) != 0) {
      lVar7 = *(long *)(lVar4 + 0x20);
      if (lVar7 == 0) goto LAB_06da90ac;
      if ((unaff_w21 < *(uint *)(lVar7 + 0x18)) && (1 < *(uint *)(lVar4 + 0x18))) {
        lVar4 = *(long *)(lVar4 + 0x28);
        if (lVar4 == 0) goto LAB_06da90ac;
        if (unaff_w21 < *(uint *)(lVar4 + 0x18)) {
          if (unaff_w20 < 1) {
            return;
          }
          lVar5 = *(long *)(unaff_x22 + 0x188);
          if (lVar5 == 0) goto LAB_06da90ac;
          fVar9 = *(float *)(lVar7 + (long)(int)unaff_w21 * 4 + 0x20);
          fVar10 = *(float *)(lVar4 + (long)(int)unaff_w21 * 4 + 0x20);
          uVar2 = *(uint *)(lVar5 + 0x18);
          iVar6 = unaff_w20 + 1;
          while (1 < uVar2) {
            lVar4 = *(long *)(lVar5 + 0x20);
            if (lVar4 == 0) goto LAB_06da90ac;
            if (*(uint *)(lVar4 + 0x18) <= unaff_w19) break;
            lVar7 = *(long *)(lVar5 + 0x28);
            if (lVar7 == 0) goto LAB_06da90ac;
            if (*(uint *)(lVar7 + 0x18) <= unaff_w19) break;
            pfVar8 = (float *)(lVar4 + (long)(int)unaff_w19 * 4 + 0x20);
            iVar6 = iVar6 + -1;
            *(float *)(lVar7 + (long)(int)unaff_w19 * 4 + 0x20) = fVar10 * *pfVar8;
            unaff_w19 = unaff_w19 + 1;
            *pfVar8 = fVar9 * *pfVar8;
            if (iVar6 < 2) {
              return;
            }
          }
        }
      }
    }
LAB_06da90a8:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
LAB_06da90ac:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


