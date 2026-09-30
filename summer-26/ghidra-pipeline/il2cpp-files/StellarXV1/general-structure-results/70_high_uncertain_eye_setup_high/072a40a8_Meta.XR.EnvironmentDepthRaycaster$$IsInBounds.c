/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$IsInBounds
ENTRY_POINT: 072a40a8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__IsInBounds(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  
  if ((param_3 & 1) == 0) {
    uVar12 = 0;
  }
  else {
    FUN_0769cb24(param_2,0,*(undefined8 *)(param_1 + 400),0,0x24,0);
    uVar12 = 3;
  }
  lVar11 = *(long *)(param_1 + 0x158);
  if (lVar11 != 0) {
    uVar14 = *(ulong *)(lVar11 + 0x18);
    uVar13 = (uint)uVar14;
    uVar5 = uVar12;
    if (uVar12 <= uVar13) {
      uVar5 = uVar13;
    }
    uVar16 = (ulong)uVar12;
    do {
      if ((uVar16 == uVar5) || (uVar4 = uVar16 + 1, (uVar14 & 0xffffffff) <= uVar4)) {
LAB_072a41d0:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      lVar15 = 0;
      iVar7 = *(int *)(lVar11 + 0x20 + uVar16 * 4);
      uVar12 = iVar7 * 3;
      uVar8 = *(int *)(lVar11 + 0x20 + uVar4 * 4) - iVar7;
      uVar13 = uVar12;
      do {
        uVar16 = (ulong)uVar13;
        if (0 < (int)uVar8) {
          if (param_2 == 0) goto LAB_072a41d4;
          lVar17 = uVar16 << 0x20;
          lVar9 = *(long *)(param_1 + 400);
          uVar6 = *(uint *)(param_2 + 0x18);
          uVar10 = (ulong)uVar8;
          uVar3 = uVar12;
          do {
            if (uVar6 <= uVar16) goto LAB_072a41d0;
            if (lVar9 == 0) goto LAB_072a41d4;
            if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_072a41d0;
            lVar1 = lVar17 >> 0x1e;
            lVar2 = (long)(int)uVar3;
            uVar10 = uVar10 - 1;
            lVar17 = lVar17 + 0x100000000;
            uVar16 = uVar16 + 1;
            uVar3 = uVar3 + 3;
            *(undefined4 *)(lVar9 + lVar2 * 4 + 0x20) = *(undefined4 *)(param_2 + lVar1 + 0x20);
          } while (uVar10 != 0);
        }
        lVar15 = lVar15 + 1;
        uVar13 = uVar13 + uVar8;
        uVar12 = uVar12 + 1;
      } while (lVar15 != 3);
      uVar16 = uVar4;
      if (uVar4 == 0xd) {
        FUN_0769da98(*(undefined8 *)(param_1 + 400),param_2,0x240,0);
        return;
      }
    } while( true );
  }
LAB_072a41d4:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


