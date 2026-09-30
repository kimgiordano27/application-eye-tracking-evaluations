/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$.ctor
ENTRY_POINT: 06da82c0
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


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager___ctor
               (undefined8 param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  
  if ((DAT_09419ae5 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e8fae8);
    DAT_09419ae5 = 1;
  }
  puVar2 = PTR_DAT_08e8fae8;
  if (param_2 != 0) {
    uVar4 = (ulong)*(uint *)(param_2 + 0x18);
    iVar8 = 0;
    iVar5 = 0x1f;
    if ((param_3 & 1) != 0) {
      iVar5 = 1;
    }
    lVar9 = 0x12;
    lVar10 = param_2;
    do {
      uVar11 = 0;
      lVar12 = 0x11;
      lVar13 = 100;
      do {
        uVar7 = (lVar9 + lVar12) - 0x12;
        if ((uVar4 <= uVar7) || (uVar4 <= lVar9 + uVar11)) {
LAB_06da8428:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        lVar3 = *(long *)puVar2;
        lVar1 = lVar10 + uVar11 * 4;
        fVar14 = *(float *)(lVar10 + lVar13);
        fVar15 = *(float *)(lVar1 + 0x68);
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar3 = *(long *)puVar2;
        }
        lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x48);
        if (lVar6 == 0) goto LAB_06da842c;
        if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_06da8428;
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x50);
        if (lVar3 == 0) goto LAB_06da842c;
        if ((*(uint *)(lVar3 + 0x18) <= uVar11) ||
           (uVar4 = (ulong)*(uint *)(param_2 + 0x18), uVar4 <= uVar7)) goto LAB_06da8428;
        lVar6 = lVar6 + uVar11 * 4;
        lVar3 = lVar3 + uVar11 * 4;
        *(float *)(lVar10 + lVar13) =
             fVar14 * *(float *)(lVar6 + 0x20) - fVar15 * *(float *)(lVar3 + 0x20);
        if (uVar4 <= lVar9 + uVar11) goto LAB_06da8428;
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + -4;
        lVar12 = lVar12 + -1;
        *(float *)(lVar1 + 0x68) =
             fVar15 * *(float *)(lVar6 + 0x20) + fVar14 * *(float *)(lVar3 + 0x20);
      } while (uVar11 != 8);
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 0x12;
      lVar10 = lVar10 + 0x48;
      if (iVar8 == iVar5) {
        return;
      }
    } while( true );
  }
LAB_06da842c:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


