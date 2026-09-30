/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryVisible
ENTRY_POINT: 06ac051c
PROGRAM: Waifu-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBoundaryVisible(long param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  ulong in_x9;
  int *piVar5;
  long in_x10;
  long unaff_x19;
  ulong unaff_x20;
  long *plVar6;
  long unaff_x22;
  long unaff_x23;
  
  while (in_x10 != 0) {
    if ((((uint)*(ulong *)(param_1 + 0x18) <= (uint)in_x9) ||
        (*(uint *)(in_x10 + 0x18) <= unaff_x20)) ||
       ((*(ulong *)(param_1 + 0x18) & 0xffffffff) <= unaff_x20)) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    FUN_06a70228(param_1 + in_x9 * unaff_x23 + 0x20,in_x10 + unaff_x20 * unaff_x23 + 0x20,
                 param_1 + unaff_x20 * unaff_x23 + 0x20,0);
    do {
      do {
        unaff_x20 = unaff_x20 + 1;
        if (unaff_x20 == 0x18) {
          *(undefined4 *)(unaff_x19 + 0x44) = 0;
          return;
        }
      } while ((*(uint *)(unaff_x19 + 0x44) >> (ulong)((uint)unaff_x20 & 0x1f) & 1) == 0);
      plVar6 = *(long **)(unaff_x19 + 0x38);
      if (plVar6 == (long *)0x0) goto LAB_06ac0590;
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(unaff_x22 + 0xf80)) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_06ac04f8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_0338f71c(plVar6,*(long *)(unaff_x22 + 0xf80),0);
LAB_06ac04f8:
      puVar2 = (uint *)(*(code *)*puVar1)(plVar6,unaff_x20 & 0xffffffff,puVar1[1]);
      in_x9 = (ulong)*puVar2;
    } while ((int)*puVar2 < 0);
    param_1 = *(long *)(unaff_x19 + 0x18);
    if (param_1 == 0) break;
    in_x10 = *(long *)(unaff_x19 + 0x10);
  }
LAB_06ac0590:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


