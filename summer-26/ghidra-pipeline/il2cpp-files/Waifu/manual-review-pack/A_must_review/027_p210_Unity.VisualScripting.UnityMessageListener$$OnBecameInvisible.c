/*
FUNCTION_NAME: Unity.VisualScripting.UnityMessageListener$$OnBecameInvisible
ENTRY_POINT: 07675938
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_UnityMessageListener__OnBecameInvisible(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  long unaff_x23;
  float fVar7;
  float unaff_s8;
  
  if (unaff_x23 == param_1) {
    iVar1 = *(int *)(unaff_x19 + 0xa0);
    if (DAT_086ef6f0 == (code *)0x0) {
      DAT_086ef6f0 = (code *)FUN_033d1b68("UnityEngine.Time::get_frameCount()");
    }
    iVar2 = (*DAT_086ef6f0)();
    if (iVar1 == iVar2) {
      if (DAT_086ef700 == (code *)0x0) {
        DAT_086ef700 = (code *)FUN_033d1b68("UnityEngine.Time::get_realtimeSinceStartup()");
      }
      fVar7 = (float)(*DAT_086ef700)();
      unaff_s8 = fVar7 - *(float *)(unaff_x19 + 0xa4);
    }
    fVar7 = unaff_s8 + *(float *)(unaff_x19 + 0x98);
    *(float *)(unaff_x19 + 0x98) = fVar7;
    if (*(long *)(unaff_x19 + 0x40) == 0) {
LAB_07675a9c:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (((float)*(int *)(*(long *)(unaff_x19 + 0x40) + 0x1c) <= fVar7) &&
       (5 < *(int *)(unaff_x19 + 0x9c))) {
      lVar6 = *(long *)(unaff_x20 + 0x20);
      if (lVar6 == 0) goto LAB_07675a9c;
      if (DAT_086f3f38 == (code *)0x0) {
        DAT_086f3f38 = (code *)FUN_033d1b68("UnityEngine.Networking.UnityWebRequest::Abort()");
      }
      (*DAT_086f3f38)(lVar6);
    }
    *(int *)(unaff_x19 + 0x9c) = *(int *)(unaff_x19 + 0x9c) + 1;
    if (DAT_086ef6f0 == (code *)0x0) {
      DAT_086ef6f0 = (code *)FUN_033d1b68("UnityEngine.Time::get_frameCount()");
    }
    uVar3 = (*DAT_086ef6f0)();
    *(undefined4 *)(unaff_x19 + 0xa0) = uVar3;
    if (DAT_086ef700 == (code *)0x0) {
      DAT_086ef700 = (code *)FUN_033d1b68("UnityEngine.Time::get_realtimeSinceStartup()");
    }
    uVar3 = (*DAT_086ef700)();
    *(undefined4 *)(unaff_x19 + 0xa4) = uVar3;
  }
  else {
    *(undefined8 *)(unaff_x19 + 0x98) = 0;
    lVar6 = *(long *)(unaff_x20 + 0x20);
    if (lVar6 == 0) goto LAB_07675a9c;
    pcVar5 = *(code **)(unaff_x22 + 0xfd0);
    if (pcVar5 == (code *)0x0) {
      pcVar5 = (code *)FUN_033d1b68("UnityEngine.Networking.UnityWebRequest::get_downloadedBytes()")
      ;
      *(code **)(unaff_x22 + 0xfd0) = pcVar5;
    }
    uVar4 = (*pcVar5)(lVar6);
    *(undefined8 *)(unaff_x19 + 0x90) = uVar4;
    *(undefined8 *)(unaff_x19 + 0xa0) = 0xffffffff;
  }
  return;
}


