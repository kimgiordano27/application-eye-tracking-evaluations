/*
FUNCTION_NAME: OVRPlugin$$GetTrackingOriginType
ENTRY_POINT: 05d1ab98
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_15;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__GetTrackingOriginType(undefined1 param_1 [16],long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *plVar8;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  ulong unaff_x26;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = param_1._8_8_;
  uStack0000000000000000 = param_1._0_8_;
  do {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    iVar1 = FUN_05d34be4();
    if (iVar1 == 0) {
      lVar4 = *unaff_x19;
      if (lVar4 == 0) goto LAB_05d1adbc;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_05d1adc0;
      *(undefined4 *)(lVar4 + unaff_x21 * 4 + 0x20) = 0;
    }
    else {
      plVar8 = *(long **)(unaff_x20 + 0x130);
      if (plVar8 == (long *)0x0) {
LAB_05d1adbc:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05d1ac30;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02feb5b8(plVar8,*unaff_x24,0);
LAB_05d1ac30:
      fVar9 = (float)(*(code *)*puVar2)(plVar8,unaff_x21 & 0xffffffff,puVar2[1]);
      lVar4 = *(long *)(unaff_x20 + 0xd0);
      if (lVar4 == 0) goto LAB_05d1adbc;
      lVar6 = *unaff_x19;
      fVar10 = (fVar9 - *(float *)(lVar4 + 0xd8)) / (unaff_s9 - *(float *)(lVar4 + 0xd8));
      fVar9 = fVar10;
      if (unaff_s9 < fVar10) {
        fVar9 = unaff_s9;
      }
      if (fVar10 < 0.0) {
        fVar9 = unaff_s8;
      }
      if (lVar6 == 0) goto LAB_05d1adbc;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x21) {
LAB_05d1adc0:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      *(float *)(lVar6 + unaff_x21 * 4 + 0x20) = fVar9;
      uStack0000000000000008 = *(undefined8 *)(lVar4 + 200);
      uStack0000000000000000 = *(undefined8 *)(lVar4 + 0xc0);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      iVar1 = FUN_05d34be4();
      if (iVar1 == 2) {
        lVar4 = *unaff_x19;
        if (lVar4 == 0) goto LAB_05d1adbc;
        if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_05d1adc0;
        fVar9 = *(float *)(lVar4 + unaff_x21 * 4 + 0x20);
        unaff_x26 = 1;
        if (fVar9 <= unaff_s10) {
          unaff_s10 = fVar9;
        }
      }
      else {
        lVar4 = *(long *)(unaff_x20 + 0xd0);
        if (lVar4 == 0) goto LAB_05d1adbc;
        uStack0000000000000008 = *(undefined8 *)(lVar4 + 200);
        uStack0000000000000000 = *(undefined8 *)(lVar4 + 0xc0);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        iVar1 = FUN_05d34be4();
        lVar4 = *unaff_x19;
        if (iVar1 == 1) {
          if (lVar4 == 0) goto LAB_05d1adbc;
          if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_05d1adc0;
          fVar9 = *(float *)(lVar4 + unaff_x21 * 4 + 0x20);
          if (unaff_s11 <= fVar9) {
            unaff_s11 = fVar9;
          }
        }
        else if (lVar4 == 0) goto LAB_05d1adbc;
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_05d1adc0;
      uVar3 = unaff_w25 << (ulong)((uint)unaff_x21 & 0x1f);
      if (*(float *)(lVar4 + unaff_x21 * 4 + 0x20) <= 0.0) {
        uVar3 = *(uint *)(unaff_x20 + 0x158) & (uVar3 ^ 0xffffffff);
      }
      else {
        uVar3 = *(uint *)(unaff_x20 + 0x158) | uVar3;
      }
      *(uint *)(unaff_x20 + 0x158) = uVar3;
    }
    unaff_x21 = unaff_x21 + 1;
    if (unaff_x21 == 5) {
      if ((unaff_x26 & 1) == 0) {
        unaff_s10 = unaff_s11;
      }
      return unaff_s10;
    }
    lVar4 = *(long *)(unaff_x20 + 0xd0);
    if (lVar4 == 0) goto LAB_05d1adbc;
    uStack0000000000000008 = *(undefined8 *)(lVar4 + 200);
    uStack0000000000000000 = *(undefined8 *)(lVar4 + 0xc0);
    param_2 = *unaff_x23;
  } while( true );
}


