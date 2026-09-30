/*
FUNCTION_NAME: FUN_066dc130
ENTRY_POINT: 066dc130
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_6
*/


float FUN_066dc130(long param_1,int param_2,int param_3)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((DAT_073a112d & 1) == 0) {
    FUN_02fe925c(OVRTask<List<OVRPlugin_Result>>_TypeInfo);
    DAT_073a112d = 1;
  }
  puVar1 = OVRTask<List<OVRPlugin_Result>>_TypeInfo;
  if (*(char *)(param_1 + 0x27) == '\0') {
    plVar11 = *(long **)(param_1 + 0x10);
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)OVRTask<List<OVRPlugin_Result>>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 6) * 0x10 + 0x138);
            goto LAB_066dc430;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02feb5b8(plVar11,*(long *)OVRTask<List<OVRPlugin_Result>>_TypeInfo,6);
LAB_066dc430:
      uVar9 = (*(code *)*puVar7)(plVar11,puVar7[1]);
      if ((uVar9 & 1) == 0) {
        iVar5 = *(int *)(param_1 + 0x30);
      }
      else {
        iVar5 = *(int *)(param_1 + 0x30) * *(int *)(param_1 + 0x28);
      }
      param_2 = param_2 - (int)(float)iVar5;
      if (param_2 < 0) {
        param_2 = param_2 + 1;
      }
      return (float)(param_2 >> 1);
    }
  }
  else {
    plVar11 = *(long **)(param_1 + 0x10);
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)OVRTask<List<OVRPlugin_Result>>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_066dc228;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02feb5b8(plVar11,*(long *)OVRTask<List<OVRPlugin_Result>>_TypeInfo,2);
LAB_066dc228:
      iVar5 = (*(code *)*puVar7)(plVar11,puVar7[1]);
      plVar11 = *(long **)(param_1 + 0x10);
      if (plVar11 != (long *)0x0) {
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        fVar13 = (float)param_2 / (float)param_3;
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
              goto LAB_066dc29c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_02feb5b8(plVar11,*(long *)puVar1,4);
LAB_066dc29c:
        iVar6 = (*(code *)*puVar7)(plVar11,puVar7[1]);
        fVar14 = (float)iVar5 / (float)iVar6;
        if (fVar13 <= fVar14) {
          fVar12 = 0.0;
        }
        else {
          fVar12 = fVar14 * (float)param_3;
          iVar5 = -0x80000000;
          if (fVar12 != INFINITY) {
            iVar5 = (int)fVar12;
          }
          iVar5 = param_2 - iVar5;
          if (iVar5 < 0) {
            iVar5 = iVar5 + 1;
          }
          fVar12 = (float)(iVar5 >> 1);
        }
        plVar11 = *(long **)(param_1 + 0x10);
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_066dc380;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02feb5b8(plVar11,*(long *)puVar1,2);
LAB_066dc380:
          iVar6 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          iVar5 = 0;
          if (iVar6 != 0) {
            iVar5 = param_2 / iVar6;
          }
          if (param_2 == iVar5 * iVar6) {
            bVar4 = NAN(fVar13) || NAN(fVar14);
            bVar3 = fVar13 == fVar14;
            bVar2 = fVar13 < fVar14;
          }
          else {
            plVar11 = *(long **)(param_1 + 0x10);
            if (plVar11 == (long *)0x0) goto LAB_066dc4c0;
            lVar8 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                  puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
                  goto LAB_066dc3f8;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar7 = (undefined8 *)FUN_02feb5b8(plVar11,*(long *)puVar1,4);
LAB_066dc3f8:
            iVar6 = (*(code *)*puVar7)(plVar11,puVar7[1]);
            iVar5 = 0;
            if (iVar6 != 0) {
              iVar5 = param_3 / iVar6;
            }
            if (param_3 != iVar5 * iVar6) {
              return fVar12;
            }
            bVar2 = false;
            bVar3 = false;
            bVar4 = true;
            if (!NAN(fVar14) && !NAN(fVar13)) {
              bVar2 = fVar14 < fVar13;
              bVar3 = fVar14 == fVar13;
              bVar4 = false;
            }
          }
          *(bool *)(param_1 + 0x54) = !bVar3 && bVar2 == bVar4;
          return fVar12;
        }
      }
    }
  }
LAB_066dc4c0:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


