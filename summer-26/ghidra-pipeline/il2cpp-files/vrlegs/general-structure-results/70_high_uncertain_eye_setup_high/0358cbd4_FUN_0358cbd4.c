/*
FUNCTION_NAME: FUN_0358cbd4
ENTRY_POINT: 0358cbd4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0358cbd4(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,undefined4 param_7,float param_8,long param_9,undefined4 param_10,
                 char *param_11,float *param_12)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  
                    /* try { // try from 0358cbd4 to 0368cbdb has its CatchHandler @ 0358cbdc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0358cbd4 with catch @ 0358cbdc
                        */
  if ((DAT_0412e070 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdee0);
    FUN_01ab69ac(OVRPlugin_OVRP_1_31_0_TypeInfo);
    DAT_0412e070 = 1;
  }
  if (0.0 < *(float *)(param_9 + 0x4d8)) {
    fVar16 = *(float *)(param_9 + 0x4c8) - *(float *)(param_9 + 0x4d0);
    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (((DAT_00d38d28 < ABS(fVar16)) && (*(char *)(param_9 + 0x2c4) == '\0')) &&
       (*(char *)(param_9 + 0x33c) == '\0')) {
      FUN_0358c860(fVar16,param_9,*(undefined4 *)(param_9 + 0x498),*(undefined4 *)(param_9 + 0x494))
      ;
      *(float *)(param_9 + 0x4c4) = *(float *)(param_9 + 0x4c4) - fVar16;
      *(float *)(param_9 + 0x4d8) = fVar16 + *(float *)(param_9 + 0x4d8);
    }
  }
  fVar13 = *(float *)(param_9 + 0x4d8);
  fVar12 = *(float *)(param_9 + 0x4cc) - fVar13;
  fVar16 = *(float *)(param_9 + 0x4c4);
  if (fVar12 <= *(float *)(param_9 + 0x4c4)) {
    fVar16 = fVar12;
  }
  *(float *)(param_9 + 0x4c4) = fVar16;
  fVar15 = *(float *)(param_9 + 0x4c8);
  if (*param_11 == '\0') {
    *param_12 = fVar16;
  }
  if ((*(char *)(param_9 + 0x334) != '\0') &&
     ((*(int *)(param_9 + 0x328) <= *(int *)(param_9 + 0x494) ||
      (*(int *)(param_9 + 0x330) <= *(int *)(param_9 + 0x4a8))))) {
    *param_11 = '\x01';
  }
  lVar10 = *(long *)(param_9 + 0x368);
  if ((lVar10 != 0) && (lVar8 = *(long *)(lVar10 + 0x50), lVar8 != 0)) {
    uVar3 = *(uint *)(param_9 + 0x4a8);
    if (uVar3 < *(uint *)(lVar8 + 0x18)) {
      iVar7 = *(int *)(param_9 + 0x498);
      lVar11 = lVar8 + (long)(int)uVar3 * 0x5c;
      *(int *)(lVar11 + 0x34) = iVar7;
      lVar9 = 0x498;
      if (iVar7 <= *(int *)(param_9 + 0x49c)) {
        lVar9 = 0x49c;
      }
      uVar2 = *(undefined4 *)(param_9 + lVar9);
      *(undefined4 *)(param_9 + 0x49c) = uVar2;
      *(undefined4 *)(lVar11 + 0x38) = uVar2;
      uVar5 = *(int *)(param_9 + 0x494) - 1;
      uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
      *(uint *)(param_9 + 0x4a0) = uVar5;
      *(uint *)(lVar11 + 0x3c) = uVar5;
      uVar4 = *(uint *)(param_9 + 0x49c);
      uVar1 = uVar4;
      if ((int)uVar4 <= (int)*(uint *)(param_9 + 0x4a4)) {
        uVar1 = *(uint *)(param_9 + 0x4a4);
      }
      *(uint *)(param_9 + 0x4a4) = uVar1;
      *(uint *)(lVar11 + 0x40) = uVar1;
      *(uint *)(lVar11 + 0x24) = (uVar5 - iVar7) + 1;
      *(undefined4 *)(lVar11 + 0x28) = *(undefined4 *)(param_9 + 0x4ac);
      lVar10 = *(long *)(lVar10 + 0x38);
      if (lVar10 == 0) goto LAB_0358d09c;
      if (uVar4 < *(uint *)(lVar10 + 0x18)) {
        uVar2 = *(undefined4 *)(lVar10 + (long)(int)uVar4 * 0x178 + 0x11c);
        lVar8 = lVar8 + (long)(int)uVar3 * 0x5c;
        *(float *)(lVar8 + 0x70) = fVar12;
        *(undefined4 *)(lVar8 + 0x6c) = uVar2;
        lVar10 = *(long *)(param_9 + 0x368);
        if ((lVar10 == 0) || (lVar8 = *(long *)(lVar10 + 0x50), lVar8 == 0)) goto LAB_0358d09c;
        if (*(uint *)(param_9 + 0x4a8) < *(uint *)(lVar8 + 0x18)) {
          lVar10 = *(long *)(lVar10 + 0x38);
          if (lVar10 == 0) goto LAB_0358d09c;
          if (*(uint *)(param_9 + 0x4a4) < *(uint *)(lVar10 + 0x18)) {
            fVar15 = fVar15 - fVar13;
            lVar8 = lVar8 + (long)(int)*(uint *)(param_9 + 0x4a8) * 0x5c;
            *(undefined4 *)(lVar8 + 0x74) =
                 *(undefined4 *)(lVar10 + (long)(int)*(uint *)(param_9 + 0x4a4) * 0x178 + 0x128);
            *(float *)(lVar8 + 0x78) = fVar15;
            lVar10 = *(long *)(param_9 + 0x368);
            if ((lVar10 == 0) || (lVar8 = *(long *)(lVar10 + 0x50), lVar8 == 0)) goto LAB_0358d09c;
            lVar9 = (long)(int)*(uint *)(param_9 + 0x4a8);
            if (*(uint *)(param_9 + 0x4a8) < *(uint *)(lVar8 + 0x18)) {
              lVar11 = lVar8 + lVar9 * 0x5c;
              *(undefined4 *)(lVar11 + 0x5c) = param_7;
              *(undefined4 *)(lVar11 + 0x44) = *(undefined4 *)(lVar11 + 0x74);
              if ((*(long *)(param_9 + 0x100) == 0) ||
                 (lVar10 = *(long *)(lVar10 + 0x38), lVar10 == 0)) goto LAB_0358d09c;
              uVar3 = *(uint *)(lVar10 + 0x18);
              if (*(uint *)(param_9 + 0x4a4) < uVar3) {
                fVar13 = (1.0 - *(float *)(param_9 + 0x2d4)) *
                         ((param_2 * param_4 +
                          (*(float *)(*(long *)(param_9 + 0x100) + 0x1ac) + param_6 + param_5) *
                          param_3) - *(float *)(param_9 + 0x2ac));
                fVar16 = -fVar13;
                if (*(char *)(param_9 + 0xf0) != '\0') {
                  fVar16 = fVar13;
                }
                fVar16 = *(float *)(lVar10 + (long)(int)*(uint *)(param_9 + 0x4a4) * 0x178 + 0x144)
                         + fVar16;
                *(float *)(lVar8 + lVar9 * 0x5c + 0x58) = fVar16;
                if (uVar5 < uVar3) {
                  *(float *)(lVar10 + (ulong)uVar5 * 0x178 + 0x144) = fVar16;
                  fVar16 = *(float *)(param_9 + 0x4d8);
                  lVar8 = lVar8 + lVar9 * 0x5c;
                  *(float *)(lVar8 + 0x48) = param_1 * param_8 + (fVar15 - fVar12);
                  *(float *)(lVar8 + 0x4c) = fVar15;
                  *(float *)(lVar8 + 0x50) = 0.0 - fVar16;
                  *(float *)(lVar8 + 0x54) = fVar12;
                  puVar6 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                  iVar7 = *(int *)(param_9 + 0x494);
                  *(undefined4 *)(param_9 + 0x4ac) = 0;
                  *(int *)(param_9 + 0x498) = iVar7;
                  lVar10 = *(long *)puVar6;
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    iVar7 = *(int *)(param_9 + 0x494);
                    lVar10 = *(long *)puVar6;
                  }
                  FUN_0358c4f0(param_9,*(long *)(lVar10 + 0xb8) + 0x410,param_10,iVar7 + -1);
                  iVar7 = *(int *)(param_9 + 0x4a8) + 1;
                  *(int *)(param_9 + 0x4a8) = iVar7;
                  if ((*(long *)(param_9 + 0x368) != 0) &&
                     (lVar10 = *(long *)(*(long *)(param_9 + 0x368) + 0x50), lVar10 != 0)) {
                    if (*(int *)(lVar10 + 0x18) <= iVar7) {
                      FUN_0358ca18(param_9);
                    }
                    if (*(float *)(param_9 + 0x2c0) == DAT_00d38ba4) {
                      if ((*(long *)(param_9 + 0x368) == 0) ||
                         (lVar10 = *(long *)(*(long *)(param_9 + 0x368) + 0x38), lVar10 == 0))
                      goto LAB_0358d09c;
                      if (*(uint *)(lVar10 + 0x18) <= *(uint *)(param_9 + 0x494)) goto LAB_0358d0a0;
                      fVar16 = *(float *)(lVar10 + (long)(int)*(uint *)(param_9 + 0x494) * 0x178 +
                                         0x154);
                      *(float *)(param_9 + 0x4d8) =
                           *(float *)(param_9 + 0x4d8) +
                           *(float *)(param_9 + 0x2b8) * param_3 +
                           fVar16 + (0.0 - *(float *)(param_9 + 0x4cc)) +
                           (*(float *)(param_9 + 700) + param_8) * param_1;
                      *(float *)(param_9 + 0x4d0) = fVar16;
                    }
                    else {
                      *(float *)(param_9 + 0x4d8) =
                           *(float *)(param_9 + 0x4d8) +
                           *(float *)(param_9 + 0x2c0) + *(float *)(param_9 + 0x2b8) * param_3;
                    }
                    lVar10 = *(long *)puVar6;
                    if (*(int *)(lVar10 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar10 = *(long *)puVar6;
                    }
                    uVar14 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x15a8);
                    *(float *)(param_9 + 0x640) = *(float *)(param_9 + 0x40c) + 0.0;
                    uVar14 = NEON_rev64(uVar14,4);
                    *(undefined8 *)(param_9 + 0x4c8) = uVar14;
                    return;
                  }
                  goto LAB_0358d09c;
                }
              }
            }
          }
        }
      }
    }
LAB_0358d0a0:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
LAB_0358d09c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


