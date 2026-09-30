/*
FUNCTION_NAME: Pupil_Emulator$$Update
ENTRY_POINT: 0353e58c
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_possible_biometrics_hits_2
*/


undefined8 Pupil_Emulator__Update(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long unaff_x19;
  undefined8 uVar8;
  long unaff_x21;
  long unaff_x22;
  
  pcVar6 = *(code **)(unaff_x22 + 0x838);
                    /* try { // try from 0353e590 to 0363e5b7 has its CatchHandler @ 0353e934 */
  if (pcVar6 == (code *)0x0) {
    pcVar6 = (code *)FUN_033d1b68("UnityEngine.Transform::GetParent()");
    *(code **)(unaff_x22 + 0x838) = pcVar6;
  }
  lVar4 = (*pcVar6)(param_1);
  if (lVar4 != 0) {
    lVar4 = FUN_03c89df4(lVar4,DAT_08405b48);
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870(DAT_083cf7d8);
    }
    uVar5 = FUN_07a0d2c4(lVar4,0,0);
    if ((uVar5 & 1) != 0) {
      if (lVar4 == 0) goto LAB_0353e75c;
      puVar7 = (undefined8 *)(lVar4 + 0x40);
      *puVar7 = 0;
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
      *(undefined4 *)(lVar4 + 0x48) = 0;
    }
    pcVar6 = *(code **)(unaff_x21 + 0x188);
    if (pcVar6 == (code *)0x0) {
      pcVar6 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      *(code **)(unaff_x21 + 0x188) = pcVar6;
    }
    lVar4 = (*pcVar6)();
    if (lVar4 != 0) {
      FUN_07a198f4(lVar4,*(undefined8 *)(unaff_x19 + 0x40),0);
      pcVar6 = *(code **)(unaff_x21 + 0x188);
      if (pcVar6 == (code *)0x0) {
        pcVar6 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
        *(code **)(unaff_x21 + 0x188) = pcVar6;
      }
      lVar4 = (*pcVar6)();
      if (lVar4 != 0) {
        FUN_07a18dcc(*(undefined4 *)(unaff_x19 + 0x24),*(undefined4 *)(unaff_x19 + 0x28),
                     *(undefined4 *)(unaff_x19 + 0x2c),lVar4,0);
        pcVar6 = *(code **)(unaff_x21 + 0x188);
        if (pcVar6 == (code *)0x0) {
          pcVar6 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
          *(code **)(unaff_x21 + 0x188) = pcVar6;
        }
        lVar4 = (*pcVar6)();
        if (lVar4 != 0) {
          FUN_07a1914c(*(undefined4 *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x19 + 0x34),
                       *(undefined4 *)(unaff_x19 + 0x38),*(undefined4 *)(unaff_x19 + 0x3c),lVar4,0);
          uVar8 = *(undefined8 *)(unaff_x19 + 0x48);
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar5 = FUN_07a0d2c4(uVar8,0,0);
          if ((uVar5 & 1) != 0) {
            lVar4 = *(long *)(unaff_x19 + 0x48);
            if (lVar4 == 0) goto LAB_0353e75c;
            if (DAT_086f1e48 == (code *)0x0) {
              DAT_086f1e48 = (code *)FUN_033d1b68(
                                                 "UnityEngine.Rigidbody::set_isKinematic(System.Boolean)"
                                                 );
            }
            (*DAT_086f1e48)(lVar4,0);
          }
          return 0;
        }
      }
    }
  }
LAB_0353e75c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


