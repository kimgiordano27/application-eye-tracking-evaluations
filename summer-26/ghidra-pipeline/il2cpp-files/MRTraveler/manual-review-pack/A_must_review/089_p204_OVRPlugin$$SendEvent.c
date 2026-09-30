/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 073e2bc8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SendEvent(void)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  float *unaff_x24;
  float *unaff_x25;
  long unaff_x26;
  undefined1 unaff_w27;
  float *unaff_x28;
  float *pfVar6;
  long unaff_x29;
  undefined4 uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined8 in_stack_00000000;
  
  do {
    *(undefined1 *)(unaff_x22 + 0xb5) = unaff_w27;
    do {
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      fVar8 = (float)((ulong)in_stack_00000000 >> 0x20);
      fVar8 = SQRT((float)in_stack_00000000 * (float)in_stack_00000000 + fVar8 * fVar8 +
                   unaff_s8 * unaff_s8) / unaff_s9 + unaff_s10;
      pfVar6 = unaff_x28;
      do {
        *(float *)(unaff_x29 + unaff_x26) = fVar8;
        uVar2 = *(ulong *)(unaff_x19 + 0x18);
        unaff_x23 = unaff_x23 + 1;
        unaff_x26 = unaff_x26 + 0x20;
        unaff_x28 = pfVar6 + 3;
        uVar1 = (uint)uVar2;
        if ((long)(int)uVar1 <= (long)unaff_x23) {
          return;
        }
        if (unaff_x26 == 0x3c) {
          if (uVar1 < 2) goto LAB_073e2c44;
          uVar9 = *(undefined8 *)(unaff_x19 + 0x2c);
          uVar11 = *(undefined8 *)(unaff_x19 + 0x20);
          pfVar3 = unaff_x25;
          pfVar4 = unaff_x24;
        }
        else {
          if (((uVar2 & 0xffffffff) <= unaff_x23) || (uVar1 <= (int)unaff_x23 - 1U))
          goto LAB_073e2c44;
          uVar9 = *(undefined8 *)(pfVar6 + 1);
          uVar11 = *(undefined8 *)(pfVar6 + -2);
          pfVar3 = pfVar6;
          pfVar4 = unaff_x28;
        }
        fVar8 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar11 >> 0x20);
        in_stack_00000000 = CONCAT44(fVar8,(float)uVar9 - (float)uVar11);
        lVar5 = *unaff_x20;
        if (lVar5 == 0) {
LAB_073e2c48:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if (((uVar2 & 0xffffffff) <= unaff_x23) || (*(uint *)(lVar5 + 0x18) <= unaff_x23))
        goto LAB_073e2c44;
        fVar12 = *unaff_x28;
        fVar13 = *pfVar4;
        fVar10 = *pfVar3;
        *(undefined8 *)(lVar5 + unaff_x26 + -0x1c) = *(undefined8 *)(pfVar6 + 1);
        *(float *)(lVar5 + unaff_x26 + -0x14) = fVar12;
        lVar5 = *unaff_x20;
        if (lVar5 == 0) goto LAB_073e2c48;
        unaff_s8 = fVar13 - fVar10;
        fVar10 = unaff_s8;
        uVar7 = FUN_085d297c(0);
        if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_073e2c44;
        lVar5 = lVar5 + unaff_x26;
        *(undefined4 *)(lVar5 + -0x10) = uVar7;
        *(float *)(lVar5 + -0xc) = fVar8;
        *(float *)(lVar5 + -8) = fVar10;
        *(float *)(lVar5 + -4) = fVar12;
        unaff_x29 = *unaff_x20;
        if (unaff_x29 == 0) goto LAB_073e2c48;
        if ((*(ulong *)(unaff_x29 + 0x18) & 0xffffffff) <= unaff_x23) goto LAB_073e2c44;
        fVar8 = 0.0;
        pfVar6 = unaff_x28;
      } while (unaff_x26 == 0x3c);
      if ((uint)*(ulong *)(unaff_x29 + 0x18) <= (int)unaff_x23 - 1U) {
LAB_073e2c44:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      unaff_s10 = *(float *)(unaff_x29 + unaff_x26 + -0x20);
    } while (*(char *)(unaff_x22 + 0xb5) != '\0');
    FUN_03c8f898();
  } while( true );
}


