/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$set_NumberOfDisplayStrings
ENTRY_POINT: 05594bd0
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__set_NumberOfDisplayStrings(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  
  uVar4 = FUN_0682c29c();
  if (3 < *(uint *)(unaff_x19 + 0x18)) {
    puVar5 = (undefined8 *)(unaff_x19 + 0x38);
    *puVar5 = uVar4;
    if (*(int *)(unaff_x23 + 0xcd0) == 0) {
      if (4 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x40) = DAT_084301d0;
        goto LAB_05594c90;
      }
    }
    else {
      puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (4 < *(uint *)(unaff_x19 + 0x18)) {
        puVar5 = (undefined8 *)(unaff_x19 + 0x40);
        *puVar5 = DAT_084301d0;
        puVar1 = (ulong *)(unaff_x22 + ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_05594c90:
        FUN_0666ee4c();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


