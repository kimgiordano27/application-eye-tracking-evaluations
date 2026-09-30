/*
FUNCTION_NAME: Pupil_Manager.<ChangePupilSizeCoroutine>d__7$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0353e4cc
PROGRAM: Waifu-libil2cpp.so
SCORE: 84
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_11;frame_or_lifecycle_behavior;functionality_possible_biometrics_hits_4
*/


undefined8 Pupil_Manager_<ChangePupilSizeCoroutine>d__7__System_Collections_IEnumerator_Reset(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined4 in_w8;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  float fVar9;
  
  *(undefined4 *)(unaff_x20 + 0x10) = in_w8;
  lVar7 = *(long *)(unaff_x20 + 0x28);
  if (DAT_086ef688 == (code *)0x0) {
    DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
  }
  fVar9 = (float)(*DAT_086ef688)();
  if (fVar9 < *(float *)(unaff_x20 + 0x20)) {
    puVar6 = (undefined8 *)(unaff_x20 + 0x18);
    *puVar6 = 0;
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
    *(undefined4 *)(unaff_x20 + 0x10) = 1;
    return 1;
  }
  if (lVar7 != 0) {
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    lVar4 = (*DAT_086ef188)(lVar7);
    if (lVar4 != 0) {
      if (DAT_086ef838 == (code *)0x0) {
        DAT_086ef838 = (code *)FUN_033d1b68("UnityEngine.Transform::GetParent()");
      }
      lVar4 = (*DAT_086ef838)(lVar4);
      if (lVar4 != 0) {
        lVar4 = FUN_03c89df4(lVar4,DAT_08405b48);
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870(DAT_083cf7d8);
        }
        uVar5 = FUN_07a0d2c4(lVar4,0,0);
        if ((uVar5 & 1) != 0) {
          if (lVar4 == 0) goto LAB_0353e75c;
          puVar6 = (undefined8 *)(lVar4 + 0x40);
          *puVar6 = 0;
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
          *(undefined4 *)(lVar4 + 0x48) = 0;
        }
        if (DAT_086ef188 == (code *)0x0) {
          DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
        }
        lVar4 = (*DAT_086ef188)(lVar7);
        if (lVar4 != 0) {
          FUN_07a198f4(lVar4,*(undefined8 *)(lVar7 + 0x40),0);
          if (DAT_086ef188 == (code *)0x0) {
            DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
          }
          lVar4 = (*DAT_086ef188)(lVar7);
          if (lVar4 != 0) {
            FUN_07a18dcc(*(undefined4 *)(lVar7 + 0x24),*(undefined4 *)(lVar7 + 0x28),
                         *(undefined4 *)(lVar7 + 0x2c),lVar4,0);
            if (DAT_086ef188 == (code *)0x0) {
              DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
            }
            lVar4 = (*DAT_086ef188)(lVar7);
            if (lVar4 != 0) {
              FUN_07a1914c(*(undefined4 *)(lVar7 + 0x30),*(undefined4 *)(lVar7 + 0x34),
                           *(undefined4 *)(lVar7 + 0x38),*(undefined4 *)(lVar7 + 0x3c),lVar4,0);
              uVar8 = *(undefined8 *)(lVar7 + 0x48);
              if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
                FUN_033b9870();
              }
              uVar5 = FUN_07a0d2c4(uVar8,0,0);
              if ((uVar5 & 1) != 0) {
                lVar7 = *(long *)(lVar7 + 0x48);
                if (lVar7 == 0) goto LAB_0353e75c;
                if (DAT_086f1e48 == (code *)0x0) {
                  DAT_086f1e48 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Rigidbody::set_isKinematic(System.Boolean)"
                                                  );
                }
                (*DAT_086f1e48)(lVar7,0);
              }
              return 0;
            }
          }
        }
      }
    }
  }
LAB_0353e75c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


