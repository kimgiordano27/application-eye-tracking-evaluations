/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcFrameSize
ENTRY_POINT: 076db330
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcFrameSize(undefined8 param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  float fVar11;
  long lVar12;
  float fVar13;
  ulong uVar14;
  int *piVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  if ((DAT_09548274 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08fae190);
    FUN_0403162c(PTR_DAT_08fae198);
    FUN_0403162c(PTR_DAT_08fae1a0);
    DAT_09548274 = 1;
  }
  plVar8 = (long *)FUN_076da990(param_1);
  puVar6 = PTR_DAT_08fae1a0;
  puVar5 = PTR_DAT_08fae198;
  puVar4 = PTR_DAT_08fae190;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  fVar11 = 3.4028235e+38;
  fVar13 = -3.4028235e+38;
  bVar1 = false;
  iVar16 = 0;
  bVar2 = true;
  fVar18 = fVar13;
  fVar19 = fVar11;
  do {
    lVar12 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_076db418;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)puVar5,0);
LAB_076db418:
    iVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    uVar3 = _DAT_01a2f1d0;
    if (iVar7 <= iVar16) {
      if (bVar1) {
        if ((fVar11 < fVar13) || (!bVar2 && fVar19 < fVar18)) {
          param_2[0] = 0.0;
          param_2[1] = 0.0;
          param_2[2] = 0.0;
          param_2[3] = 0.0;
          return 0;
        }
        fVar17 = fmodf(fVar13 + (fVar11 - fVar13) * 0.5,360.0);
        *param_2 = fVar17;
        param_2[1] = fVar11 - fVar13;
        fVar13 = 1.0;
        if (!bVar2) {
          fVar13 = fVar18;
        }
        fVar11 = -1.0;
        if (!bVar2) {
          fVar11 = fVar19;
        }
        param_2[2] = fVar13;
        param_2[3] = fVar11;
      }
      else {
        *(undefined8 *)(param_2 + 2) = _UNK_01a2f1d8;
        *(undefined8 *)param_2 = uVar3;
      }
      return 1;
    }
    lVar12 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_076db478;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)puVar6,0);
LAB_076db478:
    plVar10 = (long *)(*(code *)*puVar9)(plVar8,iVar16,puVar9[1]);
    if (plVar10 != (long *)0x0) {
      lVar12 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_076db4dc;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)puVar4,0);
LAB_076db4dc:
      uVar14 = (*(code *)*puVar9)(plVar10);
      if ((uVar14 & 1) != 0) {
        fStack0000000000000008 = 0.0;
        fStack000000000000000c = 0.0;
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        if (0.0 <= fVar11) {
          fVar11 = 0.0;
        }
        bVar2 = false;
        if (fVar18 <= 0.0) {
          fVar18 = fStack0000000000000008;
        }
        if (0.0 <= fVar19) {
          fVar19 = fStack000000000000000c;
        }
        bVar1 = true;
      }
    }
    iVar16 = iVar16 + 1;
  } while( true );
}


