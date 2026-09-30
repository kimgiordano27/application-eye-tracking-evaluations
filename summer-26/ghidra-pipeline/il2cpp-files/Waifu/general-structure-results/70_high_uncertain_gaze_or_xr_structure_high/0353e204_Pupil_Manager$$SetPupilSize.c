/*
FUNCTION_NAME: Pupil_Manager$$SetPupilSize
ENTRY_POINT: 0353e204
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_3;functionality_possible_biometrics_hits_4
*/


void Pupil_Manager__SetPupilSize(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long unaff_x20;
  
  pcVar4 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
  *(code **)(unaff_x20 + 0x188) = pcVar4;
  lVar5 = (*pcVar4)();
  if (lVar5 != 0) {
    if (DAT_086ef838 == (code *)0x0) {
      DAT_086ef838 = (code *)FUN_033d1b68("UnityEngine.Transform::GetParent()");
    }
    uVar6 = (*DAT_086ef838)(lVar5);
    puVar7 = (undefined8 *)(unaff_x19 + 0x40);
    *puVar7 = uVar6;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar6 = FUN_03c89df4();
    puVar7 = (undefined8 *)(unaff_x19 + 0x48);
    *puVar7 = uVar6;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


