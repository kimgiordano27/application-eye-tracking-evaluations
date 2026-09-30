/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_0$$.cctor
ENTRY_POINT: 06af4ae4
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_0_1_0___cctor(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long *plVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_s3;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  FUN_0335b6c8(param_1 + 0x4b8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x22 + 0x4d3) = 1;
  plVar6 = *(long **)(unaff_x20 + 0x50);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_083cc4b8) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_06af4b58;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0338f71c(plVar6,DAT_083cc4b8,4);
LAB_06af4b58:
    uVar1 = (*(code *)*puVar2)(plVar6,unaff_w21);
    if ((uVar1 & 1) == 0) {
LAB_06af4c68:
      return uVar1 & 1;
    }
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    lVar3 = (*DAT_086ef188)();
    if (lVar3 != 0) {
      fVar9 = (float)unaff_x19[1];
      fVar10 = (float)unaff_x19[2];
      uVar7 = FUN_07a17248(*unaff_x19,lVar3,0);
      *unaff_x19 = uVar7;
      unaff_x19[1] = fVar9;
      unaff_x19[2] = fVar10;
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      lVar3 = (*DAT_086ef188)();
      if (lVar3 != 0) {
        fVar8 = (float)FUN_07a172b0(lVar3,0);
        fVar11 = (float)unaff_x19[3];
        fVar14 = (float)unaff_x19[4];
        fVar13 = (float)unaff_x19[5];
        fVar12 = (float)unaff_x19[6];
        unaff_x19[3] = (fVar9 * fVar13 + in_s3 * fVar11 + fVar8 * fVar12) - fVar10 * fVar14;
        unaff_x19[4] = (fVar10 * fVar11 + in_s3 * fVar14 + fVar9 * fVar12) - fVar8 * fVar13;
        unaff_x19[5] = (fVar8 * fVar14 + in_s3 * fVar13 + fVar10 * fVar12) - fVar9 * fVar11;
        unaff_x19[6] = ((in_s3 * fVar12 - fVar8 * fVar11) - fVar9 * fVar14) - fVar10 * fVar13;
        goto LAB_06af4c68;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


