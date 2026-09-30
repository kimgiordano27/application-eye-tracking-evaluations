/*
FUNCTION_NAME: FUN_06600648
ENTRY_POINT: 06600648
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06600648(int *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 local_28 [8];
  
  if ((DAT_086dfc5d & 1) == 0) {
    FUN_0335b6c8(&DAT_08402630,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083c8be0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083d1c30,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083db2f0,1);
    DataMemoryBarrier(2,3);
    DAT_086dfc5d = 1;
  }
  local_28[0] = 0;
  if (*param_1 == 0) {
    local_28[0] = (undefined1)param_1[0x12];
    *(undefined1 *)(param_1 + 0x12) = 0;
    *param_1 = -1;
    if (*(int *)(DAT_083db2f0 + 0xe0) == 0) {
      FUN_033b9870();
    }
  }
  else {
    if (DAT_086ef688 == (code *)0x0) {
      DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
    }
    iVar3 = (*DAT_086ef688)();
    param_1[0xe] = iVar3;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  if (*(long *)(param_1 + 8) != 0) {
    lVar1 = *(long *)(param_1 + 0xc);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (DAT_086f3fb8 == (code *)0x0) {
      DAT_086f3fb8 = (code *)FUN_033d1b68("UnityEngine.Networking.UnityWebRequest::get_result()");
    }
    iVar3 = (*DAT_086f3fb8)(lVar1);
    if (iVar3 == 0) {
      lVar2 = *(long *)(param_1 + 8);
      lVar1 = *(long *)(param_1 + 0xc);
      if ((char)param_1[10] == '\0') {
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        fVar4 = (float)FUN_07cb4e50(lVar1,0);
      }
      else {
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        fVar4 = (float)FUN_07cb4f78(lVar1,0);
      }
      if (lVar2 != 0) {
        *(float *)(lVar2 + 0x1c) = fVar4 * DAT_012eda40;
        lVar1 = *(long *)(param_1 + 0xc);
        if ((char)param_1[10] == '\0') {
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          if (DAT_086f3fc8 == (code *)0x0) {
            DAT_086f3fc8 = (code *)FUN_033d1b68(
                                               "UnityEngine.Networking.UnityWebRequest::get_uploadedBytes()"
                                               );
          }
          lVar1 = (*DAT_086f3fc8)(lVar1);
        }
        else {
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          if (DAT_086f3fd0 == (code *)0x0) {
            DAT_086f3fd0 = (code *)FUN_033d1b68(
                                               "UnityEngine.Networking.UnityWebRequest::get_downloadedBytes()"
                                               );
          }
          lVar1 = (*DAT_086f3fd0)(lVar1);
        }
        if (DAT_086ef688 == (code *)0x0) {
          DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
        }
        fVar4 = (float)(*DAT_086ef688)();
        fVar5 = fVar4 - (float)param_1[0xe];
        if ((1.0 < fVar5) || (*(long *)(param_1 + 0x10) == 0)) {
          if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          fVar6 = (float)(ulong)(lVar1 - *(long *)(param_1 + 0x10)) / fVar5;
          lVar2 = -0x8000000000000000;
          if (fVar6 != INFINITY) {
            lVar2 = (long)fVar6;
          }
          *(long *)(*(long *)(param_1 + 8) + 0x20) = lVar2;
          if (1.0 < fVar5) {
            param_1[0xe] = (int)fVar4;
            *(long *)(param_1 + 0x10) = lVar1;
          }
        }
        if (*(int *)(DAT_083d1c30 + 0xe0) == 0) {
          FUN_033b9870();
        }
        local_28[0] = 0;
        if (*(int *)(DAT_083db2f0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        *param_1 = 0;
        *(undefined1 *)(param_1 + 0x12) = local_28[0];
        if (*(int *)(DAT_083c8be0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        FUN_03c37994(param_1 + 2,local_28,param_1,DAT_08402630);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
  }
  *param_1 = -2;
  if (*(int *)(DAT_083c8be0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_06734760(param_1 + 2,0);
  return;
}


