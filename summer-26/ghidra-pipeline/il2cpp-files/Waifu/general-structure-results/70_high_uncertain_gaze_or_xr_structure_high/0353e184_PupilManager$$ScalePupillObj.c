/*
FUNCTION_NAME: PupilManager$$ScalePupillObj
ENTRY_POINT: 0353e184
PROGRAM: Waifu-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_5;functionality_possible_biometrics_hits_4
*/


void PupilManager__ScalePupillObj
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  undefined4 uVar7;
  
  *(undefined1 *)(unaff_x20 + 0x222) = unaff_w21;
  if (DAT_086ef188 == (code *)0x0) {
    DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
  }
  lVar4 = (*DAT_086ef188)();
  if (lVar4 != 0) {
    uVar7 = FUN_07a18d2c(lVar4,0);
    *(undefined4 *)(unaff_x19 + 0x24) = uVar7;
    *(undefined4 *)(unaff_x19 + 0x28) = param_2;
    *(undefined4 *)(unaff_x19 + 0x2c) = param_3;
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    lVar4 = (*DAT_086ef188)();
    if (lVar4 != 0) {
      uVar7 = FUN_07a172b0(lVar4,0);
      *(undefined4 *)(unaff_x19 + 0x30) = uVar7;
      *(undefined4 *)(unaff_x19 + 0x34) = param_2;
      *(undefined4 *)(unaff_x19 + 0x38) = param_3;
      *(undefined4 *)(unaff_x19 + 0x3c) = param_4;
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      lVar4 = (*DAT_086ef188)();
      if (lVar4 != 0) {
        if (DAT_086ef838 == (code *)0x0) {
          DAT_086ef838 = (code *)FUN_033d1b68("UnityEngine.Transform::GetParent()");
        }
        uVar5 = (*DAT_086ef838)(lVar4);
        puVar6 = (undefined8 *)(unaff_x19 + 0x40);
        *puVar6 = uVar5;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uVar5 = FUN_03c89df4();
        puVar6 = (undefined8 *)(unaff_x19 + 0x48);
        *puVar6 = uVar5;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


