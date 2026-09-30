/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$ovrp_Media_GetPlatformCameraMode
ENTRY_POINT: 06aeef3c
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_57_0__ovrp_Media_GetPlatformCameraMode
               (undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
                    /* try { // try from 06aeef3c to 06beef43 has its CatchHandler @ 06aef028 */
  if (DAT_086ef188 == (code *)0x0) {
    DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
  }
  lVar1 = (*DAT_086ef188)();
  plVar7 = *(long **)(unaff_x19 + 0x40);
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
                    /* try { // try from 06aeef84 to 06bef013 has its CatchHandler @ 06aef02c */
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_083cc7b0) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_06aeefc4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0338f71c(plVar7,DAT_083cc7b0,1);
LAB_06aeefc4:
    (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((unaff_x20 != 0) && (FUN_06aed8c4(), lVar1 != 0)) {
      FUN_07a18dcc(lVar1,0);
      lVar1 = *(long *)(unaff_x19 + 0x48);
      if (lVar1 != 0) {
        if (DAT_086edcb8 == (code *)0x0) {
          DAT_086edcb8 = (code *)FUN_033d1b68("UnityEngine.Renderer::get_enabled()");
        }
        uVar5 = (*DAT_086edcb8)(lVar1);
        if ((uVar5 & 1) == 0) {
          return;
        }
        if (*(long *)(unaff_x19 + 0x50) != 0) {
          fVar8 = (float)FUN_07a18d2c(*(long *)(unaff_x19 + 0x50),0);
          fVar12 = param_2;
          fVar10 = param_3;
          if (DAT_086ef188 == (code *)0x0) {
            DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
          }
          lVar1 = (*DAT_086ef188)();
          if (lVar1 != 0) {
            fVar9 = (float)FUN_07a18d2c(lVar1,0);
            if (DAT_086d7cc3 == '\0') {
              FUN_0335b6c8(&DAT_083ce8b0,1);
              DataMemoryBarrier(2,3);
              DAT_086d7cc3 = '\x01';
            }
            fVar8 = fVar8 - fVar9;
            param_2 = param_2 - fVar12;
            param_3 = param_3 - fVar10;
            if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
              FUN_033b9870();
            }
            fVar9 = param_3 * param_3;
            fVar10 = SQRT(fVar9 + fVar8 * fVar8 + param_2 * param_2);
            fVar12 = DAT_012edb5c;
            if (fVar10 <= DAT_012edb5c) {
              if (DAT_086d7cc6 == '\0') {
                FUN_0335b6c8(&DAT_083d2c90,1);
                DataMemoryBarrier(2,3);
                DAT_086d7cc6 = '\x01';
              }
              pfVar4 = *(float **)(DAT_083d2c90 + 0xb8);
              fVar8 = *pfVar4;
              param_2 = pfVar4[1];
              param_3 = pfVar4[2];
            }
            else {
              fVar8 = fVar8 / fVar10;
              param_2 = param_2 / fVar10;
              param_3 = param_3 / fVar10;
            }
            if (DAT_086ef188 == (code *)0x0) {
              DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
            }
            lVar1 = (*DAT_086ef188)();
            if (DAT_086ef188 == (code *)0x0) {
              DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
            }
            lVar3 = (*DAT_086ef188)();
            if (lVar3 != 0) {
              fVar10 = (float)FUN_07a18d2c(lVar3,0);
              if (DAT_086d7c56 == '\0') {
                FUN_0335b6c8(&DAT_083d2c90,1);
                DataMemoryBarrier(2,3);
                DAT_086d7c56 = '\x01';
              }
              if (lVar1 != 0) {
                fVar12 = fVar12 - param_2;
                fVar9 = fVar9 - param_3;
                lVar3 = *(long *)(DAT_083d2c90 + 0xb8);
                FUN_07a1a680(fVar10 - fVar8,fVar12,fVar9,*(undefined4 *)(lVar3 + 0x18),
                             *(undefined4 *)(lVar3 + 0x1c),*(undefined4 *)(lVar3 + 0x20),lVar1);
                if (*(char *)(unaff_x19 + 0x60) == '\0') {
                  return;
                }
                if (DAT_086ef188 == (code *)0x0) {
                  DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
                }
                lVar1 = (*DAT_086ef188)();
                if (lVar1 != 0) {
                  fVar10 = (float)FUN_07a18d2c(lVar1,0);
                  if (*(long *)(unaff_x19 + 0x50) != 0) {
                    fVar8 = fVar12;
                    fVar13 = fVar9;
                    fVar11 = (float)FUN_07a18d2c(*(long *)(unaff_x19 + 0x50),0);
                    if (DAT_086d7ff6 == '\0') {
                      FUN_0335b6c8(&DAT_083ce8b0,1);
                      DataMemoryBarrier(2,3);
                      DAT_086d7ff6 = '\x01';
                    }
                    if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                      FUN_033b9870();
                    }
                    lVar1 = *(long *)(unaff_x19 + 0x48);
                    if (lVar1 != 0) {
                      if (DAT_086ef188 == (code *)0x0) {
                        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()"
                                                           );
                      }
                      lVar1 = (*DAT_086ef188)(lVar1);
                      if (lVar1 != 0) {
                        fVar12 = SQRT((fVar9 - fVar13) * (fVar9 - fVar13) +
                                      (fVar10 - fVar11) * (fVar10 - fVar11) +
                                      (fVar12 - fVar8) * (fVar12 - fVar8));
                        FUN_07a19820(fVar12 * *(float *)(unaff_x19 + 100),
                                     fVar12 * *(float *)(unaff_x19 + 0x68),
                                     fVar12 * *(float *)(unaff_x19 + 0x6c),lVar1,0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


