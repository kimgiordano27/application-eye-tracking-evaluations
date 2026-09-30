/*
FUNCTION_NAME: OVRManager$$set_headPoseRelativeOffsetTranslation
ENTRY_POINT: 06a9ca78
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_headPoseRelativeOffsetTranslation(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  ulong *in_x9;
  undefined4 *puVar5;
  ulong in_x10;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long in_x12;
  long unaff_x19;
  byte unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 in_stack_00000058;
  
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(in_x9,0x10);
    if (bVar3) {
      *in_x9 = *in_x9 | in_x12 << (in_x10 & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (1 < *(uint *)(unaff_x22 + 0x18)) {
    puVar6 = (undefined8 *)(unaff_x22 + 0x28);
    *puVar6 = in_stack_00000058;
    puVar1 = (ulong *)(param_1 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (2 < *(uint *)(unaff_x22 + 0x18)) {
      puVar6 = (undefined8 *)(unaff_x22 + 0x30);
      *puVar6 = DAT_0842dda8;
      puVar1 = (ulong *)(param_1 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (3 < *(uint *)(unaff_x22 + 0x18)) {
        puVar6 = (undefined8 *)(unaff_x22 + 0x38);
        *puVar6 = unaff_x23;
        puVar1 = (ulong *)(param_1 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (4 < *(uint *)(unaff_x22 + 0x18)) {
          puVar6 = (undefined8 *)(unaff_x22 + 0x40);
          *puVar6 = DAT_084301d0;
          puVar1 = (ulong *)(param_1 + ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x464e0);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          FUN_0666ee4c();
          if (unaff_x21 != (long *)0x0) {
            (**(code **)(*unaff_x21 + 0x558))();
            if (*(byte *)(unaff_x19 + 0x68) != (unaff_w20 & 1)) {
              bVar3 = (unaff_w20 & 1) == 0;
              if (bVar3) {
                puVar4 = (undefined4 *)(unaff_x19 + 0x28);
                puVar5 = (undefined4 *)(unaff_x19 + 0x2c);
                puVar7 = (undefined4 *)(unaff_x19 + 0x30);
                puVar8 = (undefined4 *)(unaff_x19 + 0x34);
              }
              else {
                puVar4 = (undefined4 *)(unaff_x19 + 0x38);
                puVar5 = (undefined4 *)(unaff_x19 + 0x3c);
                puVar7 = (undefined4 *)(unaff_x19 + 0x40);
                puVar8 = (undefined4 *)(unaff_x19 + 0x44);
              }
              if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_06a9cca0;
              FUN_079de5f8(*puVar4,*puVar5,*puVar7,*puVar8,*(long *)(unaff_x19 + 0x60),0);
              *(byte *)(unaff_x19 + 0x68) = !bVar3;
            }
            return;
          }
LAB_06a9cca0:
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


