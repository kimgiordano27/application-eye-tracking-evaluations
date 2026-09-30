/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$System.IDisposable.Dispose
ENTRY_POINT: 067d2c60
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonReader__System_IDisposable_Dispose(void)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  lVar5 = FUN_03398188(DAT_083c7c90,6);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(int *)(lVar5 + 0x18) != 0) {
    puVar7 = (undefined8 *)(lVar5 + 0x20);
    *puVar7 = DAT_084463d0;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar6 = FUN_0682c29c(unaff_x19 + 0x24,0);
    if (1 < *(uint *)(lVar5 + 0x18)) {
      puVar7 = (undefined8 *)(lVar5 + 0x28);
      *puVar7 = uVar6;
      if (DAT_08908cd0 == 0) {
        if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_067d2ed0;
        *(undefined8 *)(lVar5 + 0x30) = DAT_084303c8;
      }
      else {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_067d2ed0;
        puVar7 = (undefined8 *)(lVar5 + 0x30);
        *puVar7 = DAT_084303c8;
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      in_stack_00000008 = DAT_083c9b70;
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000018 = *(undefined4 *)(unaff_x19 + 0x20);
      uVar6 = FUN_06868764(&stack0x00000008,0);
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (3 < uVar2) {
        puVar7 = (undefined8 *)(lVar5 + 0x38);
        *puVar7 = uVar6;
        if (DAT_08908cd0 == 0) {
          if ((4 < uVar2) && (*(undefined8 *)(lVar5 + 0x40) = DAT_084303c8, uVar2 != 5)) {
            *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(unaff_x19 + 0x10);
LAB_067d2eb0:
            FUN_0666ee4c(lVar5,0);
            return;
          }
        }
        else {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (4 < *(uint *)(lVar5 + 0x18)) {
            puVar7 = (undefined8 *)(lVar5 + 0x40);
            *puVar7 = DAT_084303c8;
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (5 < *(uint *)(lVar5 + 0x18)) {
              puVar7 = (undefined8 *)(lVar5 + 0x48);
              *puVar7 = *(undefined8 *)(unaff_x19 + 0x10);
              puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              goto LAB_067d2eb0;
            }
          }
        }
      }
    }
  }
LAB_067d2ed0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


