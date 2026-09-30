/*
FUNCTION_NAME: OVRPlugin$$GetBodyState4
ENTRY_POINT: 06016cc8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06017028) */

void OVRPlugin__GetBodyState4(long param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  long *in_x10;
  int *piVar12;
  long unaff_x20;
  long *plVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined4 uStack0000000000000000;
  uint in_stack_00000008;
  float fStack000000000000006c;
  
  if (in_x9 != 0) {
    piVar12 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *in_x10) {
        puVar8 = (undefined8 *)(param_1 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_06016d0c;
      }
      in_x9 = in_x9 + -1;
      piVar12 = piVar12 + 4;
    } while (in_x9 != 0);
  }
  puVar8 = (undefined8 *)FUN_0322c1e8();
LAB_06016d0c:
  puVar3 = PTR_DAT_0759b580;
  plVar9 = (long *)(*(code *)*puVar8)();
  puVar7 = PTR_DAT_075f7508;
  puVar6 = PTR_DAT_075f3968;
  puVar5 = PTR_DAT_075f2ef8;
  puVar4 = PTR_DAT_0759e2a8;
  fVar2 = DAT_014ba724;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  fStack000000000000006c = DAT_014ba600;
  do {
    lVar10 = *plVar9;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06016dac;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_0322c1e8(plVar9,*(long *)puVar4,0);
LAB_06016dac:
    uVar11 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar9 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_06016fb8;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar9;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06016e08;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_0322c1e8(plVar9,*(long *)puVar7,0);
LAB_06016e08:
    auVar21 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if (auVar21._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    plVar13 = *(long **)(unaff_x20 + 0x30);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar10 = *plVar13;
    uVar1 = *(undefined4 *)(auVar21._0_8_ + 0x10);
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar6) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 4) * 0x10 + 0x138);
          goto LAB_06016e78;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_0322c1e8(plVar13,*(long *)puVar6,4);
LAB_06016e78:
    uVar11 = (*(code *)*puVar8)(plVar13,uVar1);
    if ((uVar11 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar17 = (ulong)in_stack_00000008;
      uVar11 = _uStack0000000000000000 >> 0x20;
      uVar15 = FUN_06e6823c(uStack0000000000000000,_uStack0000000000000000 >> 0x20,uVar17,
                            *(long *)(unaff_x20 + 0x38),0);
      fVar14 = auVar21._12_4_;
      if (auVar21._8_4_ <= fVar14) {
        fVar20 = 1.0;
        fVar14 = 0.0;
LAB_06016f2c:
        fVar19 = 0.0;
        fVar16 = 1.0;
      }
      else {
        if (fVar14 <= 0.0) {
          fVar14 = 1.0;
          fVar20 = 0.0;
          goto LAB_06016f2c;
        }
        fVar14 = (auVar21._8_4_ / fVar14) * 0.5;
        fVar16 = fVar14;
        if (1.0 < fVar14) {
          fVar16 = 1.0;
        }
        if (fVar14 < 0.0) {
          fVar16 = 0.0;
        }
        fVar14 = fVar16 * 0.0 + 1.0;
        fVar20 = fStack000000000000006c - fVar16 * fStack000000000000006c;
        fVar19 = fVar2 - fVar16 * fVar2;
        fVar16 = fVar14;
      }
      lVar10 = *(long *)puVar5;
      fVar18 = *(float *)(unaff_x20 + 0x40);
      if (*(int *)(lVar10 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar10 = *(long *)puVar5;
      }
      lVar10 = *(long *)(lVar10 + 0xb8);
      *(float *)(lVar10 + 0x18) = fVar16;
      *(float *)(lVar10 + 0x1c) = fVar18 * 0.5;
      *(float *)(lVar10 + 0xc) = fVar14;
      *(float *)(lVar10 + 0x10) = fVar20;
      *(float *)(lVar10 + 0x14) = fVar19;
      FUN_05f999c0(uVar15,uVar11,uVar17,0,0);
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_06016fd4;
    }
  }
LAB_06016fb8:
  puVar8 = (undefined8 *)FUN_0322c1e8(plVar9,*(long *)puVar3,0);
LAB_06016fd4:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
  return;
}


