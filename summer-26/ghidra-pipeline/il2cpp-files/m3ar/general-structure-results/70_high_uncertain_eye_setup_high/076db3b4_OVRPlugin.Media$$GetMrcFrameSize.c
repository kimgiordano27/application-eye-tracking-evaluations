/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcFrameSize
ENTRY_POINT: 076db3b4
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 OVRPlugin_Media__GetMrcFrameSize(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  float *unaff_x19;
  long *unaff_x20;
  int iVar10;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s10;
  float unaff_s11;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  bVar1 = false;
  iVar10 = 0;
  bVar2 = true;
  fVar12 = unaff_s10;
  fVar14 = unaff_s11;
  do {
    lVar7 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x24) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076db418;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20();
LAB_076db418:
    iVar4 = (*(code *)*puVar5)();
    uVar3 = _DAT_01a2f1d0;
    if (iVar4 <= iVar10) {
      if (bVar1) {
        if ((unaff_s11 < unaff_s10) || (!bVar2 && fVar14 < fVar12)) {
          unaff_x19[0] = 0.0;
          unaff_x19[1] = 0.0;
          unaff_x19[2] = 0.0;
          unaff_x19[3] = 0.0;
          return 0;
        }
        fVar11 = fmodf(unaff_s10 + (unaff_s11 - unaff_s10) * 0.5,360.0);
        *unaff_x19 = fVar11;
        unaff_x19[1] = unaff_s11 - unaff_s10;
        fVar11 = 1.0;
        if (!bVar2) {
          fVar11 = fVar12;
        }
        fVar12 = -1.0;
        if (!bVar2) {
          fVar12 = fVar14;
        }
        unaff_x19[2] = fVar11;
        unaff_x19[3] = fVar12;
      }
      else {
        *(undefined8 *)(unaff_x19 + 2) = _UNK_01a2f1d8;
        *(undefined8 *)unaff_x19 = uVar3;
      }
      return 1;
    }
    lVar7 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x25) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076db478;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20();
LAB_076db478:
    plVar6 = (long *)(*(code *)*puVar5)();
    if (plVar6 != (long *)0x0) {
      lVar7 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_076db4dc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_0406ae20(plVar6,*unaff_x26,0);
LAB_076db4dc:
      uVar8 = (*(code *)*puVar5)(plVar6);
      if ((uVar8 & 1) != 0) {
        fVar11 = fStack0000000000000000 - fStack0000000000000004 * 0.5;
        fVar13 = fStack0000000000000000 + fStack0000000000000004 * 0.5;
        if (unaff_s10 <= fVar11) {
          unaff_s10 = fVar11;
        }
        if (fVar13 <= unaff_s11) {
          unaff_s11 = fVar13;
        }
        if (fStack0000000000000008 <= fStack000000000000000c) {
          bVar2 = false;
          if (fVar12 <= fStack0000000000000008) {
            fVar12 = fStack0000000000000008;
          }
          if (fStack000000000000000c <= fVar14) {
            fVar14 = fStack000000000000000c;
          }
        }
        bVar1 = true;
      }
    }
    iVar10 = iVar10 + 1;
  } while( true );
}


