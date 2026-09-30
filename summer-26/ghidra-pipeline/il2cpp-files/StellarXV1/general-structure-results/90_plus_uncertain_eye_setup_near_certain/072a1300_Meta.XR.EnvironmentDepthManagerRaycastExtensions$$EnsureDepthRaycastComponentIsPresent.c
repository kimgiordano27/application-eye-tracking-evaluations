/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$EnsureDepthRaycastComponentIsPresent
ENTRY_POINT: 072a1300
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


void Meta_XR_EnvironmentDepthManagerRaycastExtensions__EnsureDepthRaycastComponentIsPresent
               (long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(param_1 + 0x28);
  thunk_FUN_040ec700(unaff_x19 + 0x158);
  lVar7 = *(long *)(unaff_x19 + 0x150);
  if (lVar7 != 0) {
    if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
      lVar9 = *(long *)(unaff_x19 + 0x158);
      if (lVar9 == 0) goto LAB_072a1540;
      if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
        uVar10 = (ulong)*(uint *)(lVar7 + 0x24);
        iVar6 = 0;
        iVar5 = 0;
        lVar7 = 0x20;
        uVar11 = *(int *)(lVar9 + 0x24) * 3;
        do {
          uVar12 = lVar7 - 0x20;
          if (uVar12 == uVar10) {
            lVar9 = *(long *)(unaff_x19 + 0x150);
            if (lVar9 == 0) goto LAB_072a1540;
            uVar1 = iVar6 + 2;
            if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_072a1544;
            iVar6 = iVar6 + 1;
            uVar10 = (ulong)*(uint *)(lVar9 + (long)(int)uVar1 * 4 + 0x20);
          }
          if (uVar12 == uVar11) {
            lVar9 = *(long *)(unaff_x19 + 0x158);
            if (lVar9 == 0) goto LAB_072a1540;
            uVar11 = iVar5 + 2;
            if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_072a1544;
            iVar5 = iVar5 + 1;
            uVar11 = *(int *)(lVar9 + (long)(int)uVar11 * 4 + 0x20) * 3;
          }
          lVar9 = *(long *)(unaff_x19 + 0x160);
          if (lVar9 == 0) goto LAB_072a1540;
          if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a1544;
          *(char *)(lVar9 + lVar7) = (char)iVar6;
          lVar9 = *(long *)(unaff_x19 + 0x168);
          if (lVar9 == 0) goto LAB_072a1540;
          if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_072a1544;
          *(char *)(lVar9 + lVar7) = (char)iVar5;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x260);
        uVar11 = 0;
        uVar10 = 0;
        do {
          lVar7 = *(long *)(unaff_x19 + 0x158);
          if (lVar7 == 0) goto LAB_072a1540;
          uVar12 = uVar10 + 1;
          if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_072a1544;
          iVar6 = 0;
          iVar5 = *(int *)(lVar7 + 0x20 + uVar12 * 4) - *(int *)(lVar7 + 0x20 + uVar10 * 4);
          do {
            iVar2 = iVar5;
            if (0 < iVar5) {
              do {
                lVar7 = *(long *)(unaff_x19 + 0x170);
                if (lVar7 == 0) goto LAB_072a1540;
                if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_072a1544;
                lVar9 = (long)(int)uVar11;
                iVar2 = iVar2 + -1;
                uVar11 = uVar11 + 1;
                *(char *)(lVar7 + lVar9 + 0x20) = (char)iVar6;
              } while (iVar2 != 0);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 != 3);
          uVar10 = uVar12;
        } while (uVar12 != 0xc);
        lVar7 = *unaff_x20;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_072a1520;
            }
            uVar10 = uVar10 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072a1520:
        uVar3 = (*(code *)*puVar4)();
        *(undefined4 *)(unaff_x19 + 0x178) = uVar3;
        return;
      }
    }
LAB_072a1544:
                    /* WARNING: Subroutine does not return */
    FUN_04077838();
  }
LAB_072a1540:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


