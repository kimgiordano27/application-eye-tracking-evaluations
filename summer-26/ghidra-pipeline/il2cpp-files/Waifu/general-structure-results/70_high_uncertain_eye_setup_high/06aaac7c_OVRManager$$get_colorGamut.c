/*
FUNCTION_NAME: OVRManager$$get_colorGamut
ENTRY_POINT: 06aaac7c
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


void OVRManager__get_colorGamut(undefined1 param_1 [16],long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 in_w8;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long unaff_x24;
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
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined8 uStack0000000000000090;
  
  uStack0000000000000090 = param_1._0_8_;
  if (*(int *)(param_2 + 0x18) != 0) {
    *(undefined8 *)(param_2 + 0x20) = DAT_012e34d0;
    *(undefined4 *)(param_2 + 0x38) = in_w8;
    *(long *)(param_2 + 0x30) = param_1._8_8_;
    *(undefined8 *)(param_2 + 0x28) = uStack0000000000000090;
    in_stack_00000078 = 0;
    in_stack_00000080 = 0;
    in_stack_00000088 = 0;
    if (*(int *)(param_2 + 0x18) != 1) {
      *(undefined8 *)(param_2 + 0x3c) = DAT_012e31d8;
      *(undefined4 *)(param_2 + 0x54) = 0;
      *(undefined8 *)(param_2 + 0x4c) = 0;
      *(undefined8 *)(param_2 + 0x44) = 0;
      lVar4 = FUN_03398a84(DAT_083c88a8);
      if (DAT_086ed260 == (code *)0x0) {
        DAT_086ed260 = (code *)FUN_033d1b68(
                                           "UnityEngine.AnimationCurve::Internal_Create(UnityEngine.Keyframe[])"
                                           );
      }
      uVar5 = (*DAT_086ed260)(param_2);
      *(undefined8 *)(lVar4 + 0x10) = uVar5;
      plVar7 = (long *)(unaff_x19 + 0x30);
      *plVar7 = lVar4;
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
      uVar5 = FUN_079c2f50(0,0x3f800000,0x3f800000,0x3f800000);
      puVar8 = (undefined8 *)(unaff_x19 + 0x38);
      *puVar8 = uVar5;
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
      lVar4 = FUN_03398188(*(undefined8 *)(unaff_x24 + 0x8d8),2);
      in_stack_00000060 = 0;
      in_stack_00000068 = 0;
      in_stack_00000070 = 0;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      in_stack_00000050 = 0;
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined8 *)(lVar4 + 0x20) = 0xc2b40000c2b40000;
        *(undefined4 *)(lVar4 + 0x38) = 0;
        *(undefined8 *)(lVar4 + 0x30) = 0;
        *(undefined8 *)(lVar4 + 0x28) = 0;
        in_stack_00000028 = 0;
        in_stack_00000030 = 0;
        in_stack_00000038 = 0;
        if (*(int *)(lVar4 + 0x18) != 1) {
          *(undefined8 *)(lVar4 + 0x3c) = 0x42b4000042b40000;
          *(undefined4 *)(lVar4 + 0x54) = 0;
          *(undefined8 *)(lVar4 + 0x4c) = 0;
          *(undefined8 *)(lVar4 + 0x44) = 0;
          lVar6 = FUN_03398a84(DAT_083c88a8);
          if (DAT_086ed260 == (code *)0x0) {
            DAT_086ed260 = (code *)FUN_033d1b68(
                                               "UnityEngine.AnimationCurve::Internal_Create(UnityEngine.Keyframe[])"
                                               );
          }
          uVar5 = (*DAT_086ed260)(lVar4);
          *(undefined8 *)(lVar6 + 0x10) = uVar5;
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


