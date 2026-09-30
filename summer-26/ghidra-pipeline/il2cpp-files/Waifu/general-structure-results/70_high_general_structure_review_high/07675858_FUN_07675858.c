/*
FUNCTION_NAME: FUN_07675858
ENTRY_POINT: 07675858
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_4;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_07675858(float param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_086ea13c & 1) == 0) {
    FUN_0335b6c8(&DAT_083d2818,1);
    DataMemoryBarrier(2,3);
    DAT_086ea13c = 1;
  }
  plVar6 = *(long **)(param_2 + 0x18);
  if (plVar6 != (long *)0x0) {
    if ((*(byte *)(DAT_083d2818 + 0x130) <= *(byte *)(*plVar6 + 0x130)) &&
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_083d2818 + 0x130) * 8 + -8) ==
        DAT_083d2818)) {
      if (plVar6 != (long *)0x0) {
        if (DAT_086ef128 == (code *)0x0) {
          DAT_086ef128 = (code *)FUN_033d1b68("UnityEngine.AsyncOperation::get_isDone()");
        }
        uVar4 = (*DAT_086ef128)(plVar6);
        if ((uVar4 & 1) != 0) {
          return;
        }
        lVar7 = plVar6[4];
        if (lVar7 != 0) {
          lVar8 = *(long *)(param_2 + 0x90);
          if (DAT_086f3fd0 == (code *)0x0) {
            DAT_086f3fd0 = (code *)FUN_033d1b68(
                                               "UnityEngine.Networking.UnityWebRequest::get_downloadedBytes()"
                                               );
          }
          lVar7 = (*DAT_086f3fd0)(lVar7);
          if (lVar8 == lVar7) {
            iVar1 = *(int *)(param_2 + 0xa0);
            if (DAT_086ef6f0 == (code *)0x0) {
              DAT_086ef6f0 = (code *)FUN_033d1b68("UnityEngine.Time::get_frameCount()");
            }
            iVar2 = (*DAT_086ef6f0)();
            if (iVar1 == iVar2) {
              if (DAT_086ef700 == (code *)0x0) {
                DAT_086ef700 = (code *)FUN_033d1b68("UnityEngine.Time::get_realtimeSinceStartup()");
              }
              param_1 = (float)(*DAT_086ef700)();
              param_1 = param_1 - *(float *)(param_2 + 0xa4);
            }
            param_1 = param_1 + *(float *)(param_2 + 0x98);
            *(float *)(param_2 + 0x98) = param_1;
            if (*(long *)(param_2 + 0x40) != 0) {
              if (((float)*(int *)(*(long *)(param_2 + 0x40) + 0x1c) <= param_1) &&
                 (5 < *(int *)(param_2 + 0x9c))) {
                lVar7 = plVar6[4];
                if (lVar7 == 0) goto LAB_07675a9c;
                if (DAT_086f3f38 == (code *)0x0) {
                  DAT_086f3f38 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Networking.UnityWebRequest::Abort()")
                  ;
                }
                (*DAT_086f3f38)(lVar7);
              }
              *(int *)(param_2 + 0x9c) = *(int *)(param_2 + 0x9c) + 1;
              if (DAT_086ef6f0 == (code *)0x0) {
                DAT_086ef6f0 = (code *)FUN_033d1b68("UnityEngine.Time::get_frameCount()");
              }
              uVar3 = (*DAT_086ef6f0)();
              *(undefined4 *)(param_2 + 0xa0) = uVar3;
              if (DAT_086ef700 == (code *)0x0) {
                DAT_086ef700 = (code *)FUN_033d1b68("UnityEngine.Time::get_realtimeSinceStartup()");
              }
              uVar3 = (*DAT_086ef700)();
              *(undefined4 *)(param_2 + 0xa4) = uVar3;
              return;
            }
          }
          else {
            *(undefined8 *)(param_2 + 0x98) = 0;
            lVar7 = plVar6[4];
            if (lVar7 != 0) {
              if (DAT_086f3fd0 == (code *)0x0) {
                DAT_086f3fd0 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Networking.UnityWebRequest::get_downloadedBytes()"
                                                  );
              }
              uVar5 = (*DAT_086f3fd0)(lVar7);
              *(undefined8 *)(param_2 + 0x90) = uVar5;
              *(undefined8 *)(param_2 + 0xa0) = 0xffffffff;
              return;
            }
          }
        }
      }
LAB_07675a9c:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
  }
  return;
}


