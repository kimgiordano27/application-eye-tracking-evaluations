/*
FUNCTION_NAME: OVRPlugin.Vector4f$$.cctor
ENTRY_POINT: 069647ac
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector4f___cctor
               (float param_1,undefined4 param_2,float param_3,long param_4,long param_5,
               long *param_6)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar15 = param_3;
  if ((DAT_0897d0ac & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486bf8);
    DAT_0897d0ac = 1;
  }
  if (param_5 != 0) {
                    /* try { // try from 069647ec to 06a647ef has its CatchHandler @ 06964a68 */
    lVar6 = FUN_07d4e488(param_5,0);
    plVar12 = (long *)(param_4 + 0x58);
    *plVar12 = lVar6;
    thunk_FUN_03afed3c(plVar12,lVar6);
    lVar6 = FUN_07c98f88(param_5,0);
    if (lVar6 != 0) {
      uVar13 = FUN_07cac280(lVar6,0);
      *(undefined4 *)(param_4 + 0x60) = uVar13;
      *(undefined4 *)(param_4 + 100) = param_2;
      *(float *)(param_4 + 0x68) = fVar15;
      if (*(long *)(param_4 + 0x58) != 0) {
        iVar4 = thunk_FUN_07d50a28(*(long *)(param_4 + 0x58),0);
        if (*plVar12 != 0) {
          iVar5 = thunk_FUN_07d50a28(*plVar12,0);
          if (*plVar12 != 0) {
            fVar16 = *(float *)(param_4 + 0x60);
            fVar14 = (float)FUN_07d4f4e0(*plVar12,0);
            if (*(long *)(param_4 + 0x58) != 0) {
              fVar17 = *(float *)(param_4 + 0x68);
              FUN_07d4f4e0(*(long *)(param_4 + 0x58),0);
              if (*(long *)(param_4 + 0x58) != 0) {
                fVar15 = ((param_3 - fVar17) / fVar15) * (float)iVar5;
                iVar1 = -0x80000000;
                if (fVar15 != INFINITY) {
                  iVar1 = (int)fVar15;
                }
                fVar15 = ((param_1 - fVar16) / fVar14) * (float)iVar4;
                iVar2 = iVar1;
                if (iVar5 + -1 <= iVar1) {
                  iVar2 = iVar5 + -1;
                }
                iVar5 = 0;
                if (-1 < iVar1) {
                  iVar5 = iVar2;
                }
                iVar1 = -0x80000000;
                if (fVar15 != INFINITY) {
                  iVar1 = (int)fVar15;
                }
                iVar2 = iVar1;
                if (iVar4 + -1 <= iVar1) {
                  iVar2 = iVar4 + -1;
                }
                iVar4 = 0;
                if (-1 < iVar1) {
                  iVar4 = iVar2;
                }
                lVar6 = FUN_07d5088c(*(long *)(param_4 + 0x58),iVar4,iVar5,1,1,0);
                plVar12 = (long *)(param_4 + 0x50);
                *plVar12 = lVar6;
                thunk_FUN_03afed3c(plVar12,lVar6);
                puVar3 = PTR_DAT_08486bf8;
                if (*plVar12 != 0) {
                  iVar4 = FUN_06776874(*plVar12,2,0);
                  lVar6 = FUN_03a8a804(*(undefined8 *)puVar3,iVar4 + 1);
                  *param_6 = lVar6;
                  thunk_FUN_03afed3c(param_6,lVar6);
                  lVar6 = *param_6;
                  if (lVar6 != 0) {
                    uVar10 = *(ulong *)(lVar6 + 0x18);
                    uVar9 = (uint)uVar10;
                    if (0 < (int)uVar9) {
                      lVar8 = *plVar12;
                      uVar7 = 0;
                      do {
                        if (lVar8 == 0) goto LAB_069649dc;
                        piVar11 = *(int **)(lVar8 + 0x10);
                        if ((((*piVar11 == 0) || (piVar11[4] == 0)) || ((uint)piVar11[8] <= uVar7))
                           || ((uVar10 & 0xffffffff) == uVar7)) {
                    /* WARNING: Subroutine does not return */
                          FUN_03a8a9c8();
                        }
                        *(undefined4 *)(lVar6 + 0x20 + uVar7 * 4) =
                             *(undefined4 *)(lVar8 + 0x20 + uVar7 * 4);
                        uVar7 = uVar7 + 1;
                      } while ((uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU)) != uVar7);
                    }
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
LAB_069649dc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


