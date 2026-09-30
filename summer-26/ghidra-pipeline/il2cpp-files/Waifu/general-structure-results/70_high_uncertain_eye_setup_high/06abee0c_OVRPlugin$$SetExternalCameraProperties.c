/*
FUNCTION_NAME: OVRPlugin$$SetExternalCameraProperties
ENTRY_POINT: 06abee0c
PROGRAM: Waifu-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetExternalCameraProperties(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uVar8;
  long lVar9;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  
  puVar4 = (undefined8 *)(unaff_x19 + 0x20);
  *puVar4 = param_1;
  if (*(int *)(unaff_x22 + 0xcd0) != 0) {
    puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(unaff_x19 + 0x48) = 0xffffffff;
  lVar9 = *(long *)(unaff_x19 + 0x18);
  if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_07a1747c(&stack0x00000020,0);
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    *(undefined8 *)(lVar9 + 0x34) = uStack0000000000000034;
    *(ulong *)(lVar9 + 0x2c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    *(ulong *)(lVar9 + 0x28) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *(undefined8 *)(lVar9 + 0x20) = in_stack_00000020;
    uVar8 = *unaff_x24;
    lVar9 = FUN_03398a84(DAT_083d04f0);
    puVar4 = (undefined8 *)(lVar9 + 0x10);
    *puVar4 = uVar8;
    if (*(int *)(unaff_x22 + 0xcd0) == 0) {
      *(long *)(unaff_x19 + 0x28) = lVar9;
    }
    else {
      puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = (long *)(unaff_x19 + 0x28);
      *plVar5 = lVar9;
      puVar1 = (ulong *)(unaff_x21 + ((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar8 = *unaff_x23;
    lVar9 = FUN_03398a84(DAT_083d04f0);
    puVar4 = (undefined8 *)(lVar9 + 0x10);
    *puVar4 = uVar8;
    if (*(int *)(unaff_x22 + 0xcd0) == 0) {
      *(long *)(unaff_x19 + 0x30) = lVar9;
    }
    else {
      puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = (long *)(unaff_x19 + 0x30);
      *plVar5 = lVar9;
      puVar1 = (ulong *)(unaff_x21 + ((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x464e0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (unaff_x20 != (long *)0x0) {
      lVar9 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_083ccf78) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_06abf018;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0338f71c();
LAB_06abf018:
      uVar8 = (*(code *)*puVar4)();
      puVar4 = (undefined8 *)(unaff_x19 + 0x38);
      *puVar4 = uVar8;
      if (*(int *)(unaff_x22 + 0xcd0) != 0) {
        puVar1 = (ulong *)(unaff_x21 + ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x464e0);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


