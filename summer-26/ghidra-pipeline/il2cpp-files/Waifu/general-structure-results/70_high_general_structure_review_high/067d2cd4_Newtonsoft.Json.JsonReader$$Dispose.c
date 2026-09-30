/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$Dispose
ENTRY_POINT: 067d2cd4
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonReader__Dispose(void)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  uVar5 = FUN_0682c29c(unaff_x19 + 0x24,0);
  if (1 < *(uint *)(unaff_x20 + 0x18)) {
    puVar6 = (undefined8 *)(unaff_x20 + 0x28);
    *puVar6 = uVar5;
    if (*(int *)(unaff_x22 + 0xcd0) == 0) {
      if (*(uint *)(unaff_x20 + 0x18) < 3) goto LAB_067d2ed0;
      *(undefined8 *)(unaff_x20 + 0x30) = DAT_084303c8;
    }
    else {
      puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (*(uint *)(unaff_x20 + 0x18) < 3) goto LAB_067d2ed0;
      puVar6 = (undefined8 *)(unaff_x20 + 0x30);
      *puVar6 = DAT_084303c8;
      puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    in_stack_00000008 = DAT_083c9b70;
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000018 = *(undefined4 *)(unaff_x19 + 0x20);
    uVar5 = FUN_06868764(&stack0x00000008,0);
    uVar2 = *(uint *)(unaff_x20 + 0x18);
    if (3 < uVar2) {
      puVar6 = (undefined8 *)(unaff_x20 + 0x38);
      *puVar6 = uVar5;
      if (*(int *)(unaff_x22 + 0xcd0) == 0) {
        if ((4 < uVar2) && (*(undefined8 *)(unaff_x20 + 0x40) = DAT_084303c8, uVar2 != 5)) {
          *(undefined8 *)(unaff_x20 + 0x48) = *(undefined8 *)(unaff_x19 + 0x10);
LAB_067d2eb0:
          FUN_0666ee4c();
          return;
        }
      }
      else {
        puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (4 < *(uint *)(unaff_x20 + 0x18)) {
          puVar6 = (undefined8 *)(unaff_x20 + 0x40);
          *puVar6 = DAT_084303c8;
          puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (5 < *(uint *)(unaff_x20 + 0x18)) {
            puVar6 = (undefined8 *)(unaff_x20 + 0x48);
            *puVar6 = *(undefined8 *)(unaff_x19 + 0x10);
            puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            goto LAB_067d2eb0;
          }
        }
      }
    }
  }
LAB_067d2ed0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


