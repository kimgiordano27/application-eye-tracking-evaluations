/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$DrawBox
ENTRY_POINT: 0729cfd0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawBox(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long in_x10;
  ulong uVar8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w23;
  long *unaff_x24;
  uint uVar9;
  long unaff_x25;
  long lVar10;
  
  do {
    lVar6 = *(long *)(unaff_x21 + 0xd8);
    if (lVar6 == 0) {
LAB_0729d0dc:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if ((*(int *)(lVar6 + 0x18) == 0) || (*(int *)(lVar6 + 0x18) == 1)) break;
    lVar10 = *(long *)(param_1 + in_x10 * 8 + 0x20);
    if (lVar10 == 0) goto LAB_0729d0dc;
    if (*(int *)(lVar10 + 0x18) == 0) break;
    if (unaff_x20 == (long *)0x0) goto LAB_0729d0dc;
    lVar5 = *unaff_x20;
    lVar1 = *(long *)(lVar6 + 0x20);
    lVar6 = *(long *)(lVar6 + 0x28);
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xe) * 0x10 + 0x138);
          goto LAB_0729d058;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00();
LAB_0729d058:
    iVar3 = (*(code *)*puVar4)();
    if (*(uint *)(lVar10 + 0x18) <= iVar3 + 1U) break;
    if (lVar6 == 0) goto LAB_0729d0dc;
    uVar9 = (uint)unaff_x25;
    if (*(uint *)(lVar6 + 0x18) <= uVar9) break;
    uVar2 = *(undefined4 *)(lVar10 + (long)(int)(iVar3 + 1U) * 4 + 0x20);
    *(undefined4 *)(lVar6 + unaff_x25 * 4 + 0x20) = uVar2;
    if (lVar1 == 0) goto LAB_0729d0dc;
    if (*(uint *)(lVar1 + 0x18) <= uVar9) break;
    uVar9 = uVar9 + 1;
    *(undefined4 *)(lVar1 + unaff_x25 * 4 + 0x20) = uVar2;
    if (uVar9 == unaff_w23) {
      return;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= uVar9) break;
    param_1 = *(long *)(unaff_x21 + 0xb0);
    if (param_1 == 0) goto LAB_0729d0dc;
    unaff_x25 = (long)(int)uVar9;
    uVar9 = *(uint *)(unaff_x19 + unaff_x25 * 4 + 0x20);
    in_x10 = (long)(int)uVar9;
  } while (uVar9 < *(uint *)(param_1 + 0x18));
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


