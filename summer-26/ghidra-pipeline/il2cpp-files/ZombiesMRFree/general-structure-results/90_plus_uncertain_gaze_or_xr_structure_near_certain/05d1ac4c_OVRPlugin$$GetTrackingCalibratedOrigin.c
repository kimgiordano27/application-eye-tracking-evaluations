/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 05d1ac4c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__GetTrackingCalibratedOrigin(float param_1,float param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
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
  
  while( true ) {
    lVar5 = *unaff_x19;
    fVar8 = (param_1 - param_2) / (unaff_s9 - param_2);
    fVar9 = fVar8;
    if (unaff_s9 < fVar8) {
      fVar9 = unaff_s9;
    }
    if (fVar8 < 0.0) {
      fVar9 = unaff_s8;
    }
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x21) {
LAB_05d1adc0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(float *)(lVar5 + unaff_x21 * 4 + 0x20) = fVar9;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    iVar1 = FUN_05d34be4();
    if (iVar1 == 2) {
      lVar5 = *unaff_x19;
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x21) goto LAB_05d1adc0;
      fVar9 = *(float *)(lVar5 + unaff_x21 * 4 + 0x20);
      unaff_x26 = 1;
      if (fVar9 <= unaff_s10) {
        unaff_s10 = fVar9;
      }
    }
    else {
      if (*(long *)(unaff_x20 + 0xd0) == 0) break;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      iVar1 = FUN_05d34be4();
      lVar5 = *unaff_x19;
      if (iVar1 == 1) {
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x21) goto LAB_05d1adc0;
        fVar9 = *(float *)(lVar5 + unaff_x21 * 4 + 0x20);
        if (unaff_s11 <= fVar9) {
          unaff_s11 = fVar9;
        }
      }
      else if (lVar5 == 0) break;
    }
    if (*(uint *)(lVar5 + 0x18) <= unaff_x21) goto LAB_05d1adc0;
    uVar3 = unaff_w25 << (ulong)((uint)unaff_x21 & 0x1f);
    if (*(float *)(lVar5 + unaff_x21 * 4 + 0x20) <= 0.0) {
      uVar3 = *(uint *)(unaff_x20 + 0x158) & (uVar3 ^ 0xffffffff);
    }
    else {
      uVar3 = *(uint *)(unaff_x20 + 0x158) | uVar3;
    }
    *(uint *)(unaff_x20 + 0x158) = uVar3;
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
      iVar1 = FUN_05d34be4();
      if (iVar1 != 0) break;
      lVar5 = *unaff_x19;
      if (lVar5 == 0) goto LAB_05d1adbc;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x21) goto LAB_05d1adc0;
      *(undefined4 *)(lVar5 + unaff_x21 * 4 + 0x20) = 0;
    }
    plVar7 = *(long **)(unaff_x20 + 0x130);
    if (plVar7 == (long *)0x0) break;
    lVar5 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05d1ac30;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8(plVar7,*unaff_x24,0);
LAB_05d1ac30:
    param_1 = (float)(*(code *)*puVar2)(plVar7,unaff_x21 & 0xffffffff,puVar2[1]);
    if (*(long *)(unaff_x20 + 0xd0) == 0) break;
    param_2 = *(float *)(*(long *)(unaff_x20 + 0xd0) + 0xd8);
  }
LAB_05d1adbc:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


