/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$GetTypeHash
ENTRY_POINT: 052c2800
PROGRAM: Untangled-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__GetTypeHash
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  long unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  undefined8 uVar8;
  long unaff_x22;
  long unaff_x23;
  float *pfVar9;
  int unaff_w24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  do {
    FUN_0669ad2c(0,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_0669aa00(param_1,param_2,param_3,*(undefined4 *)(unaff_x19 + 0x28),0);
    unaff_w24 = unaff_w24 + 1;
    if (*(int *)(unaff_x23 + 0x18) <= unaff_w24) {
      do {
        do {
          lVar3 = *(long *)(unaff_x28 + 0x20);
          unaff_w21 = unaff_w21 + 1;
          if (lVar3 == 0) goto LAB_052c28cc;
          while (*(int *)(lVar3 + 0x18) <= unaff_w21) {
            do {
              if (*(char *)(unaff_x19 + 0x51) != '\0') {
                if (unaff_x28 == 0) goto LAB_052c28cc;
                uVar8 = *(undefined8 *)(unaff_x28 + 0x18);
                if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                uVar4 = FUN_066cd30c(uVar8,0);
                if ((uVar4 & 1) != 0) {
                  param_2 = 0;
                  param_3 = 0x3f800000;
                  FUN_0669ad2c(0x3f800000,0,0x3f800000,0x3f800000,0);
                  if (*(long *)(unaff_x28 + 0x18) == 0) goto LAB_052c28cc;
                  FUN_066d48c0(*(long *)(unaff_x28 + 0x18),0);
                  FUN_0669aa00(0);
                }
              }
              lVar3 = *(long *)(unaff_x19 + 0x30);
              unaff_x20 = unaff_x20 + 1;
              if (lVar3 == 0) goto LAB_052c28cc;
              lVar5 = *(long *)(lVar3 + 0x80);
              if ((lVar5 == 0) || (*(long *)(lVar5 + 0x18) == 0)) {
                FUN_052c35a0(lVar3);
                lVar5 = *(long *)(lVar3 + 0x80);
                if (lVar5 == 0) goto LAB_052c28cc;
              }
              puVar2 = PTR_DAT_06d02c10;
              fVar1 = DAT_013f69d8;
              if ((long)*(int *)(lVar5 + 0x18) <= (long)unaff_x20) {
                if (*(char *)(unaff_x19 + 0x52) == '\0') {
                  return;
                }
                lVar3 = *(long *)(unaff_x19 + 0x68);
                if (lVar3 != 0) {
                  if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
                    uVar4 = 0;
                    uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
                    pfVar9 = (float *)(lVar3 + 0x28);
                    do {
                      if (uVar6 <= uVar4) {
LAB_052c29d4:
                    /* WARNING: Subroutine does not return */
                        FUN_02f080c8();
                      }
                      fVar13 = pfVar9[-2];
                      fVar14 = pfVar9[-1];
                      fVar15 = *pfVar9;
                      if (DAT_071babf5 == '\0') {
                        FUN_02f07e70(puVar2);
                        DAT_071babf5 = '\x01';
                      }
                      pfVar7 = *(float **)(*(long *)puVar2 + 0xb8);
                      fVar10 = fVar13 - *pfVar7;
                      fVar11 = fVar14 - pfVar7[1];
                      fVar12 = fVar15 - pfVar7[2];
                      if (fVar1 <= fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11) {
                        FUN_0669ad2c(0x3f800000,0,0,0x3f800000,0);
                        FUN_0669aa00(fVar13,fVar14,fVar15,*(undefined4 *)(unaff_x19 + 0x28),0);
                      }
                      uVar6 = (ulong)*(uint *)(lVar3 + 0x18);
                      uVar4 = uVar4 + 1;
                      pfVar9 = pfVar9 + 3;
                    } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
                  }
                  return;
                }
                goto LAB_052c28cc;
              }
              lVar3 = *(long *)(unaff_x19 + 0x30);
              if (lVar3 == 0) goto LAB_052c28cc;
              lVar5 = *(long *)(lVar3 + 0x80);
              if ((lVar5 == 0) || (*(long *)(lVar5 + 0x18) == 0)) {
                FUN_052c35a0(lVar3);
                lVar5 = *(long *)(lVar3 + 0x80);
                if (lVar5 == 0) goto LAB_052c28cc;
              }
              if (*(uint *)(lVar5 + 0x18) <= unaff_x20) goto LAB_052c29d4;
              unaff_x28 = *(long *)(lVar5 + unaff_x20 * 8 + 0x20);
            } while (*(char *)(unaff_x19 + 0x50) == '\0');
            if ((unaff_x28 == 0) || (lVar3 = *(long *)(unaff_x28 + 0x20), lVar3 == 0))
            goto LAB_052c28cc;
            unaff_w21 = 0;
          }
        } while ((unaff_w21 != *(int *)(lVar3 + 0x18) + -1) && (*(char *)(unaff_x19 + 0x2c) != '\0')
                );
        unaff_x22 = FUN_03fd09cc(lVar3,unaff_w21,*unaff_x26);
        unaff_x23 = FUN_052c211c();
        if (unaff_x23 == 0) goto LAB_052c28cc;
      } while (*(int *)(unaff_x23 + 0x18) < 1);
      unaff_w24 = 0;
    }
    FUN_0407af38(unaff_x23,unaff_w24,*unaff_x27);
    if ((unaff_x22 == 0) || (*(long *)(unaff_x22 + 0x10) == 0)) {
LAB_052c28cc:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    param_1 = FUN_066d31a4(*(long *)(unaff_x22 + 0x10),0);
  } while( true );
}


