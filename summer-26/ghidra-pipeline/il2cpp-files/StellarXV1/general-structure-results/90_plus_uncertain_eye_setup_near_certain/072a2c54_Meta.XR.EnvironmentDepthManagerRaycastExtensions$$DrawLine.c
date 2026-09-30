/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$DrawLine
ENTRY_POINT: 072a2c54
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_EnvironmentDepthManagerRaycastExtensions__DrawLine(void)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint in_w8;
  long in_x9;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(in_x9 + unaff_x20 * 8 + 0x20);
  if (lVar4 != 0) {
    if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
      lVar6 = *(long *)(unaff_x19 + 0xb0);
      if (lVar6 == 0) goto LAB_072a2e40;
      lVar4 = *(long *)(lVar4 + 0x38);
      uVar2 = *(uint *)(lVar6 + 0x18);
      uVar5 = 0;
      do {
        if (uVar2 == uVar5) goto LAB_072a2e3c;
        if (lVar4 == 0) goto LAB_072a2e40;
        uVar3 = *(uint *)(lVar4 + 0x18);
        if (uVar3 <= uVar5) goto LAB_072a2e3c;
        uVar1 = uVar5 + 1;
        *(undefined4 *)(lVar4 + 0x20 + uVar5 * 4) = *(undefined4 *)(lVar6 + 0x20 + uVar5 * 4);
        uVar5 = uVar1;
      } while (uVar1 != 0x15);
      if (0x16 < uVar3) {
        lVar6 = *(long *)(unaff_x19 + 0xa8);
        *(undefined4 *)(lVar4 + 0x78) = 0;
        if (lVar6 == 0) goto LAB_072a2e40;
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (((((uVar2 != 0) && (in_w8 != 0)) && (uVar2 != 1)) && ((in_w8 != 1 && (2 < uVar2)))) &&
           ((2 < in_w8 && ((uVar2 != 3 && (in_w8 != 3)))))) {
          return *(int *)(unaff_x22 + 0x20) * *(int *)(lVar6 + 0x20) +
                 *(int *)(unaff_x22 + 0x24) * *(int *)(lVar6 + 0x24) +
                 *(int *)(unaff_x22 + 0x28) * *(int *)(lVar6 + 0x28) +
                 *(int *)(unaff_x22 + 0x2c) * *(int *)(lVar6 + 0x2c);
        }
      }
    }
LAB_072a2e3c:
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_072a2e40:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


