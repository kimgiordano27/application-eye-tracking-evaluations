/*
FUNCTION_NAME: OVRPlugin$$SetWideMotionModeHandPoses
ENTRY_POINT: 06abdff0
PROGRAM: Waifu-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_possible_biometrics_hits_2
*/


void OVRPlugin__SetWideMotionModeHandPoses(long param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  long lVar8;
  long unaff_x22;
  long lVar9;
  long unaff_x23;
  long unaff_x24;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_06abe024;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar5 = (undefined8 *)FUN_0338f71c();
LAB_06abe024:
  uVar6 = (*(code *)*puVar5)();
  puVar5 = (undefined8 *)(unaff_x22 + 0x20);
  *puVar5 = uVar6;
  if (*(int *)(unaff_x24 + 0xcd0) != 0) {
    puVar1 = (ulong *)(unaff_x23 + ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(char *)(unaff_x19 + 0x54) != '\0') {
    if (DAT_086ef190 == (code *)0x0) {
      DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
    }
    lVar7 = (*DAT_086ef190)();
    if ((lVar7 == 0) || (lVar7 = FUN_03fa2a98(lVar7,DAT_0840d008), lVar7 == 0)) {
LAB_06abe130:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar2 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar2) {
      lVar9 = 0;
      do {
        if (uVar2 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        lVar8 = *(long *)(lVar7 + 0x20 + lVar9 * 8);
        if (lVar8 == 0) goto LAB_06abe130;
        if (DAT_086edcc0 == (code *)0x0) {
          DAT_086edcc0 = (code *)FUN_033d1b68("UnityEngine.Renderer::set_enabled(System.Boolean)");
        }
        (*DAT_086edcc0)(lVar8,0);
        uVar2 = *(uint *)(lVar7 + 0x18);
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar2);
    }
  }
  return;
}


