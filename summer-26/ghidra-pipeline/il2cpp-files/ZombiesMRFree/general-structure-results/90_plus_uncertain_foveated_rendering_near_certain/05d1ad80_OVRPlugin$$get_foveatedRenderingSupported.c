/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingSupported
ENTRY_POINT: 05d1ad80
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 109
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_foveation_hits_2;functionality_foveated_rendering
*/


float OVRPlugin__get_foveatedRenderingSupported(void)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint in_w8;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *plVar7;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  ulong unaff_x26;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
  do {
    *(uint *)(unaff_x20 + 0x158) = in_w8;
    while( true ) {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 5) {
        if ((unaff_x26 & 1) == 0) {
          unaff_s10 = unaff_s11;
        }
        return unaff_s10;
      }
      if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_05d1adbc;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      iVar2 = FUN_05d34be4();
      if (iVar2 != 0) break;
      lVar4 = *unaff_x19;
      if (lVar4 == 0) goto LAB_05d1adbc;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_05d1adc0;
      *(undefined4 *)(lVar4 + unaff_x21 * 4 + 0x20) = 0;
    }
    plVar7 = *(long **)(unaff_x20 + 0x130);
    if (plVar7 == (long *)0x0) {
LAB_05d1adbc:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05d1ac30;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02feb5b8(plVar7,*unaff_x24,0);
LAB_05d1ac30:
    fVar8 = (float)(*(code *)*puVar3)(plVar7,unaff_x21 & 0xffffffff,puVar3[1]);
    if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_05d1adbc;
    fVar9 = *(float *)(*(long *)(unaff_x20 + 0xd0) + 0xd8);
    lVar4 = *unaff_x19;
    fVar9 = (fVar8 - fVar9) / (unaff_s9 - fVar9);
    fVar8 = fVar9;
    if (unaff_s9 < fVar9) {
      fVar8 = unaff_s9;
    }
    if (fVar9 < 0.0) {
      fVar8 = unaff_s8;
    }
    if (lVar4 == 0) goto LAB_05d1adbc;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x21) {
LAB_05d1adc0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(float *)(lVar4 + unaff_x21 * 4 + 0x20) = fVar8;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    iVar2 = FUN_05d34be4();
    if (iVar2 == 2) {
      lVar4 = *unaff_x19;
      if (lVar4 == 0) goto LAB_05d1adbc;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_05d1adc0;
      fVar8 = *(float *)(lVar4 + unaff_x21 * 4 + 0x20);
      unaff_x26 = 1;
      if (fVar8 <= unaff_s10) {
        unaff_s10 = fVar8;
      }
    }
    else {
      if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_05d1adbc;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      iVar2 = FUN_05d34be4();
      lVar4 = *unaff_x19;
      if (iVar2 == 1) {
        if (lVar4 == 0) goto LAB_05d1adbc;
        if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_05d1adc0;
        fVar8 = *(float *)(lVar4 + unaff_x21 * 4 + 0x20);
        if (unaff_s11 <= fVar8) {
          unaff_s11 = fVar8;
        }
      }
      else if (lVar4 == 0) goto LAB_05d1adbc;
    }
    if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_05d1adc0;
    uVar1 = unaff_w25 << (ulong)((uint)unaff_x21 & 0x1f);
    if (*(float *)(lVar4 + unaff_x21 * 4 + 0x20) <= 0.0) {
      in_w8 = *(uint *)(unaff_x20 + 0x158) & (uVar1 ^ 0xffffffff);
    }
    else {
      in_w8 = *(uint *)(unaff_x20 + 0x158) | uVar1;
    }
  } while( true );
}


