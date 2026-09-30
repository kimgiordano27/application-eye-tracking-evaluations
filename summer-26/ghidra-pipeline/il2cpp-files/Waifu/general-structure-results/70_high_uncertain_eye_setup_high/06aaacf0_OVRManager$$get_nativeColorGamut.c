/*
FUNCTION_NAME: OVRManager$$get_nativeColorGamut
ENTRY_POINT: 06aaacf0
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_nativeColorGamut(code *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long unaff_x19;
  long unaff_x22;
  long unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined8 uStack000000000000001c;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 in_stack_00000070;
  
  if (param_1 == (code *)0x0) {
    param_1 = (code *)FUN_033d1b68(
                                  "UnityEngine.AnimationCurve::Internal_Create(UnityEngine.Keyframe[])"
                                  );
    *(code **)(unaff_x22 + 0x260) = param_1;
  }
  uVar4 = (*param_1)();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  plVar7 = (long *)(unaff_x19 + 0x30);
  *plVar7 = param_2;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar7 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = FUN_079c2f50(0,0x3f800000,0x3f800000,0x3f800000);
  puVar8 = (undefined8 *)(unaff_x19 + 0x38);
  *puVar8 = uVar4;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar8 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar5 = FUN_03398188(*(undefined8 *)(unaff_x24 + 0x8d8),2);
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  if (lVar5 != 0) {
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    in_stack_00000050 = 0;
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(undefined8 *)(lVar5 + 0x20) = 0xc2b40000c2b40000;
      *(undefined4 *)(lVar5 + 0x38) = 0;
      *(undefined8 *)(lVar5 + 0x30) = 0;
      *(undefined8 *)(lVar5 + 0x28) = 0;
      in_stack_00000028 = 0;
      in_stack_00000030 = 0;
      in_stack_00000038 = 0;
      if (*(int *)(lVar5 + 0x18) != 1) {
        *(undefined8 *)(lVar5 + 0x3c) = 0x42b4000042b40000;
        *(undefined4 *)(lVar5 + 0x54) = 0;
        *(undefined8 *)(lVar5 + 0x4c) = 0;
        *(undefined8 *)(lVar5 + 0x44) = 0;
        lVar6 = FUN_03398a84(*(undefined8 *)(unaff_x25 + 0x8a8));
        pcVar9 = *(code **)(unaff_x22 + 0x260);
        if (pcVar9 == (code *)0x0) {
          pcVar9 = (code *)FUN_033d1b68(
                                       "UnityEngine.AnimationCurve::Internal_Create(UnityEngine.Keyframe[])"
                                       );
          *(code **)(unaff_x22 + 0x260) = pcVar9;
        }
        uVar4 = (*pcVar9)(lVar5);
        *(undefined8 *)(lVar6 + 0x10) = uVar4;
        plVar7 = (long *)(unaff_x19 + 0x40);
        *plVar7 = lVar6;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar7 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *(undefined8 *)(unaff_x19 + 0x48) = 0x1e40133333;
        if (*(int *)(DAT_083cffc8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        FUN_07a1747c(&stack0x00000008,0);
        *(undefined8 *)(unaff_x19 + 100) = uStack000000000000001c;
        *(ulong *)(unaff_x19 + 0x5c) = CONCAT44(uStack0000000000000018,uStack0000000000000014);
        *(ulong *)(unaff_x19 + 0x58) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
        *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000008;
        FUN_07a0900c();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


