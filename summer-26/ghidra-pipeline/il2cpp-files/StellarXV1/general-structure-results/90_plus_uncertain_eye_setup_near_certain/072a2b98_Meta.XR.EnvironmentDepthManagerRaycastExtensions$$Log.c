/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$Log
ENTRY_POINT: 072a2b98
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_EnvironmentDepthManagerRaycastExtensions__Log
              (undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint in_w8;
  long in_x9;
  long lVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(in_x9 + 0x20);
  if (lVar1 == 0) goto LAB_072a2e40;
  if (*(uint *)(lVar1 + 0x18) <= param_3) goto LAB_072a2e3c;
  lVar5 = *(long *)(unaff_x19 + 0x180);
  lVar8 = lVar5 + unaff_x20 * 8;
  if (*(char *)(lVar1 + unaff_x20 + 0x20) == '\0') {
    uVar2 = 0;
    iVar3 = 0;
  }
  else {
    if (lVar5 == 0) goto LAB_072a2e40;
    if (*(uint *)(lVar5 + 0x18) <= param_3) goto LAB_072a2e3c;
    lVar1 = *(long *)(lVar8 + 0x20);
    if (lVar1 == 0) goto LAB_072a2e40;
    if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) == 0) goto LAB_072a2e3c;
    lVar4 = *(long *)(unaff_x19 + 0xb0);
    if (lVar4 == 0) goto LAB_072a2e40;
    lVar1 = *(long *)(lVar1 + 0x38);
    uVar9 = *(uint *)(lVar4 + 0x18);
    iVar3 = 8;
    uVar2 = 3;
    uVar6 = 0;
    do {
      if (uVar9 == uVar6) goto LAB_072a2e3c;
      if (lVar1 == 0) goto LAB_072a2e40;
      if (*(uint *)(lVar1 + 0x18) <= uVar6) goto LAB_072a2e3c;
      uVar7 = uVar6 + 1;
      *(undefined4 *)(lVar1 + 0x20 + uVar6 * 4) = *(undefined4 *)(lVar4 + 0x20 + uVar6 * 4);
      uVar6 = uVar7;
    } while (uVar7 != 8);
  }
  if (lVar5 == 0) {
LAB_072a2e40:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (param_3 < *(uint *)(lVar5 + 0x18)) {
    lVar1 = *(long *)(lVar8 + 0x20);
    if (lVar1 == 0) goto LAB_072a2e40;
    uVar6 = *(ulong *)(lVar1 + 0x18);
    do {
      uVar7 = 0;
      do {
        if ((uVar6 & 0xffffffff) == uVar7) goto LAB_072a2e3c;
        lVar8 = *(long *)(unaff_x19 + 0xb0);
        if (lVar8 == 0) goto LAB_072a2e40;
        uVar9 = iVar3 + (int)uVar7;
        if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_072a2e3c;
        lVar5 = *(long *)(lVar1 + 0x20 + uVar7 * 8);
        if (lVar5 == 0) goto LAB_072a2e40;
        if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_072a2e3c;
        uVar7 = uVar7 + 1;
        *(undefined4 *)(lVar5 + uVar2 * 4 + 0x20) =
             *(undefined4 *)(lVar8 + (long)(int)uVar9 * 4 + 0x20);
      } while (uVar7 != 3);
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 3;
    } while (uVar2 != 0xc);
    uVar9 = (uint)uVar6;
    if (uVar9 != 0) {
      lVar8 = *(long *)(lVar1 + 0x20);
      if (lVar8 == 0) goto LAB_072a2e40;
      if ((0xc < *(uint *)(lVar8 + 0x18)) && (*(undefined4 *)(lVar8 + 0x50) = 0, uVar9 != 1)) {
        lVar8 = *(long *)(lVar1 + 0x28);
        if (lVar8 == 0) goto LAB_072a2e40;
        if ((0xc < *(uint *)(lVar8 + 0x18)) && (*(undefined4 *)(lVar8 + 0x50) = 0, 2 < uVar9)) {
          lVar1 = *(long *)(lVar1 + 0x30);
          if (lVar1 == 0) goto LAB_072a2e40;
          if (0xc < *(uint *)(lVar1 + 0x18)) {
            lVar8 = *(long *)(unaff_x19 + 0xa8);
            *(undefined4 *)(lVar1 + 0x50) = 0;
            if (lVar8 == 0) goto LAB_072a2e40;
            uVar9 = *(uint *)(lVar8 + 0x18);
            if (((((uVar9 != 0) && (in_w8 != 0)) && (uVar9 != 1)) && ((in_w8 != 1 && (2 < uVar9))))
               && ((2 < in_w8 && ((uVar9 != 3 && (in_w8 != 3)))))) {
              return *(int *)(unaff_x22 + 0x20) * *(int *)(lVar8 + 0x20) +
                     *(int *)(unaff_x22 + 0x24) * *(int *)(lVar8 + 0x24) +
                     *(int *)(unaff_x22 + 0x28) * *(int *)(lVar8 + 0x28) +
                     *(int *)(unaff_x22 + 0x2c) * *(int *)(lVar8 + 0x2c);
            }
          }
        }
      }
    }
  }
LAB_072a2e3c:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


