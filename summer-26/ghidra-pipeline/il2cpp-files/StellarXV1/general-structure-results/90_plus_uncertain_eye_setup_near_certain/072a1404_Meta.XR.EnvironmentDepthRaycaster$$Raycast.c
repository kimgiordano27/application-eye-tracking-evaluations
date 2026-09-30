/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$Raycast
ENTRY_POINT: 072a1404
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__Raycast(void)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined1 in_CY;
  undefined4 uVar4;
  undefined8 *puVar5;
  int in_w8;
  uint uVar6;
  int in_w9;
  ulong uVar7;
  int iVar8;
  long in_x10;
  int *piVar9;
  ulong in_x11;
  long in_x12;
  long lVar10;
  ulong in_x13;
  uint in_w14;
  long lVar11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  while (!(bool)in_CY) {
    iVar8 = *(int *)(in_x12 + (long)(int)in_w14 * 4 + 0x20);
    lVar10 = in_x10;
    do {
      lVar11 = *(long *)(unaff_x19 + 0x160);
      if (lVar11 == 0) goto LAB_072a1540;
      if (*(uint *)(lVar11 + 0x18) <= in_x13) goto LAB_072a1544;
      *(char *)(lVar11 + lVar10) = (char)in_w8;
      lVar11 = *(long *)(unaff_x19 + 0x168);
      if (lVar11 == 0) goto LAB_072a1540;
      if (*(uint *)(lVar11 + 0x18) <= in_x13) goto LAB_072a1544;
      *(char *)(lVar11 + lVar10) = (char)(in_w9 + 1);
      in_x10 = lVar10 + 1;
      if (in_x10 == 0x260) {
        uVar6 = 0;
        uVar7 = 0;
        goto LAB_072a145c;
      }
      in_x13 = lVar10 - 0x1f;
      if (in_x13 == in_x11) {
        lVar10 = *(long *)(unaff_x19 + 0x150);
        if (lVar10 == 0) goto LAB_072a1540;
        uVar6 = in_w8 + 2;
        if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_072a1544;
        in_w8 = in_w8 + 1;
        in_x11 = (ulong)*(uint *)(lVar10 + (long)(int)uVar6 * 4 + 0x20);
      }
      lVar10 = in_x10;
    } while (in_x13 != (uint)(iVar8 * 3));
    in_x12 = *(long *)(unaff_x19 + 0x158);
    if (in_x12 == 0) goto LAB_072a1540;
    in_w14 = in_w9 + 3;
    in_w9 = in_w9 + 1;
    in_CY = *(uint *)(in_x12 + 0x18) <= in_w14;
  }
LAB_072a1544:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
  while( true ) {
    iVar8 = 0;
    iVar2 = *(int *)(lVar10 + 0x20 + uVar1 * 4) - *(int *)(lVar10 + 0x20 + uVar7 * 4);
    do {
      iVar3 = iVar2;
      if (0 < iVar2) {
        do {
          lVar10 = *(long *)(unaff_x19 + 0x170);
          if (lVar10 == 0) goto LAB_072a1540;
          if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_072a1544;
          lVar11 = (long)(int)uVar6;
          iVar3 = iVar3 + -1;
          uVar6 = uVar6 + 1;
          *(char *)(lVar10 + lVar11 + 0x20) = (char)iVar8;
        } while (iVar3 != 0);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 3);
    uVar7 = uVar1;
    if (uVar1 == 0xc) break;
LAB_072a145c:
    lVar10 = *(long *)(unaff_x19 + 0x158);
    if (lVar10 == 0) {
LAB_072a1540:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar1 = uVar7 + 1;
    if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_072a1544;
  }
  lVar10 = *unaff_x20;
  uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x21) {
        puVar5 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_072a1520;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_040b1e00();
LAB_072a1520:
  uVar4 = (*(code *)*puVar5)();
  *(undefined4 *)(unaff_x19 + 0x178) = uVar4;
  return;
}


