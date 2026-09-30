/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 07a0a1a8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 Meta_XR_Samples_SampleMetadata__SendEvent(long *param_1,long param_2)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  float *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  uint unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  ulong unaff_x27;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
code_r0x07a0a1a8:
  puVar4 = (undefined8 *)FUN_040b1e00(param_1,param_2,0);
  param_1 = unaff_x22;
  do {
    uVar5 = (*(code *)*puVar4)(param_1);
    if ((uVar5 & 1) != 0) {
      fVar8 = fStack0000000000000000 - fStack0000000000000004 * unaff_s12;
      fVar9 = fStack0000000000000000 + fStack0000000000000004 * unaff_s12;
      if (unaff_s10 <= fVar8) {
        unaff_s10 = fVar8;
      }
      if (fVar9 <= unaff_s11) {
        unaff_s11 = fVar9;
      }
      if (fStack0000000000000008 <= fStack000000000000000c) {
        unaff_w23 = 0;
        if (unaff_s8 <= fStack0000000000000008) {
          unaff_s8 = fStack0000000000000008;
        }
        if (fStack000000000000000c <= unaff_s9) {
          unaff_s9 = fStack000000000000000c;
        }
      }
      unaff_x27 = 1;
    }
    do {
      unaff_w21 = unaff_w21 + 1;
      lVar6 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_07a0a0fc;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_07a0a0fc:
      iVar3 = (*(code *)*puVar4)();
      uVar1 = _DAT_01aeefd0;
      if (iVar3 <= unaff_w21) {
        if ((unaff_x27 & 1) == 0) {
          *(undefined8 *)(unaff_x19 + 2) = _UNK_01aeefd8;
          *(undefined8 *)unaff_x19 = uVar1;
        }
        else {
          if ((unaff_s11 < unaff_s10) || ((unaff_w23 & 1) == 0 && unaff_s9 < unaff_s8)) {
            unaff_x19[0] = 0.0;
            unaff_x19[1] = 0.0;
            unaff_x19[2] = 0.0;
            unaff_x19[3] = 0.0;
            return 0;
          }
          fVar8 = fmodf(unaff_s10 + (unaff_s11 - unaff_s10) * 0.5,360.0);
          bVar2 = (unaff_w23 & 1) == 0;
          *unaff_x19 = fVar8;
          unaff_x19[1] = unaff_s11 - unaff_s10;
          fVar8 = 1.0;
          if (bVar2) {
            fVar8 = unaff_s8;
          }
          fVar9 = -1.0;
          if (bVar2) {
            fVar9 = unaff_s9;
          }
          unaff_x19[2] = fVar8;
          unaff_x19[3] = fVar9;
        }
        return 1;
      }
      lVar6 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x25) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_07a0a15c;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00();
LAB_07a0a15c:
      param_1 = (long *)(*(code *)*puVar4)();
    } while (param_1 == (long *)0x0);
    lVar6 = *param_1;
    param_2 = *unaff_x26;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    unaff_x22 = param_1;
    if (uVar5 == 0) goto code_r0x07a0a1a8;
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    while (*(long *)(piVar7 + -2) != param_2) {
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 4;
      if (uVar5 == 0) goto code_r0x07a0a1a8;
    }
    puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
  } while( true );
}


