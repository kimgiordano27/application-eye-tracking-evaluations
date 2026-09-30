/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcFrameSize
ENTRY_POINT: 076db494
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

undefined8
OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcFrameSize(long param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  float *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
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
  
  do {
    uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == param_3) {
          puVar4 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076db4dc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(param_2,param_3,0);
LAB_076db4dc:
    uVar6 = (*(code *)*puVar4)(param_2);
    if ((uVar6 & 1) != 0) {
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
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076db418;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0406ae20();
LAB_076db418:
      iVar3 = (*(code *)*puVar4)();
      uVar1 = _DAT_01a2f1d0;
      if (iVar3 <= unaff_w21) {
        if ((unaff_x27 & 1) == 0) {
          *(undefined8 *)(unaff_x19 + 2) = _UNK_01a2f1d8;
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
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x25) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076db478;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0406ae20();
LAB_076db478:
      param_2 = (long *)(*(code *)*puVar4)();
    } while (param_2 == (long *)0x0);
    param_1 = *param_2;
    param_3 = *unaff_x26;
  } while( true );
}


