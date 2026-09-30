/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$RaycastInternal
ENTRY_POINT: 072a40bc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__RaycastInternal(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long unaff_x19;
  long unaff_x20;
  
  FUN_0769cb24();
  lVar12 = *(long *)(unaff_x20 + 0x158);
  if (lVar12 != 0) {
    uVar14 = *(ulong *)(lVar12 + 0x18);
    uVar13 = (uint)uVar14;
    uVar6 = 3;
    if (2 < uVar13) {
      uVar6 = uVar13;
    }
    uVar16 = 3;
    do {
      if ((uVar16 == uVar6) || (uVar4 = uVar16 + 1, (uVar14 & 0xffffffff) <= uVar4)) {
LAB_072a41d0:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar15 = 0;
      iVar8 = *(int *)(lVar12 + 0x20 + uVar16 * 4);
      uVar13 = iVar8 * 3;
      uVar9 = *(int *)(lVar12 + 0x20 + uVar4 * 4) - iVar8;
      uVar5 = uVar13;
      do {
        uVar16 = (ulong)uVar5;
        if (0 < (int)uVar9) {
          if (unaff_x19 == 0) goto LAB_072a41d4;
          lVar17 = uVar16 << 0x20;
          lVar10 = *(long *)(unaff_x20 + 400);
          uVar7 = *(uint *)(unaff_x19 + 0x18);
          uVar11 = (ulong)uVar9;
          uVar3 = uVar13;
          do {
            if (uVar7 <= uVar16) goto LAB_072a41d0;
            if (lVar10 == 0) goto LAB_072a41d4;
            if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_072a41d0;
            lVar1 = lVar17 >> 0x1e;
            lVar2 = (long)(int)uVar3;
            uVar11 = uVar11 - 1;
            lVar17 = lVar17 + 0x100000000;
            uVar16 = uVar16 + 1;
            uVar3 = uVar3 + 3;
            *(undefined4 *)(lVar10 + lVar2 * 4 + 0x20) = *(undefined4 *)(unaff_x19 + lVar1 + 0x20);
          } while (uVar11 != 0);
        }
        lVar15 = lVar15 + 1;
        uVar5 = uVar5 + uVar9;
        uVar13 = uVar13 + 1;
      } while (lVar15 != 3);
      uVar16 = uVar4;
      if (uVar4 == 0xd) {
        FUN_0769da98(*(undefined8 *)(unaff_x20 + 400));
        return;
      }
    } while( true );
  }
LAB_072a41d4:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


