/*
FUNCTION_NAME: OVRManager$$set_colorGamut
ENTRY_POINT: 06aaac84
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_colorGamut(undefined1 param_1 [16],long param_2)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 in_w8;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *in_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x24;
  undefined8 uVar10;
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
  
  in_x9[1] = param_1._8_8_;
  *in_x9 = param_1._0_8_;
  iVar2 = *(int *)(param_2 + 0x18);
  if (iVar2 != 0) {
    *(undefined8 *)(unaff_x20 + 0x20) = DAT_012e34d0;
    uVar10 = in_x9[1];
    uVar6 = *in_x9;
    *(undefined4 *)(unaff_x20 + 0x38) = in_w8;
    *(undefined8 *)(unaff_x20 + 0x30) = uVar10;
    *(undefined8 *)(unaff_x20 + 0x28) = uVar6;
    in_stack_00000078 = 0;
    in_stack_00000080 = 0;
    in_stack_00000088 = 0;
    if (iVar2 != 1) {
      *(undefined8 *)(unaff_x20 + 0x3c) = DAT_012e31d8;
      *(undefined4 *)(unaff_x20 + 0x54) = 0;
      *(undefined8 *)(unaff_x20 + 0x4c) = 0;
      *(undefined8 *)(unaff_x20 + 0x44) = 0;
      lVar5 = FUN_03398a84(DAT_083c88a8);
      if (DAT_086ed260 == (code *)0x0) {
        DAT_086ed260 = (code *)FUN_033d1b68(
                                           "UnityEngine.AnimationCurve::Internal_Create(UnityEngine.Keyframe[])"
                                           );
      }
      uVar6 = (*DAT_086ed260)();
      *(undefined8 *)(lVar5 + 0x10) = uVar6;
      plVar8 = (long *)(unaff_x19 + 0x30);
      *plVar8 = lVar5;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar6 = FUN_079c2f50(0,0x3f800000,0x3f800000,0x3f800000);
      puVar9 = (undefined8 *)(unaff_x19 + 0x38);
      *puVar9 = uVar6;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar9 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar5 = FUN_03398188(*(undefined8 *)(unaff_x24 + 0x8d8),2);
      in_stack_00000060 = 0;
      in_stack_00000068 = 0;
      in_stack_00000070 = 0;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
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
          lVar7 = FUN_03398a84(DAT_083c88a8);
          if (DAT_086ed260 == (code *)0x0) {
            DAT_086ed260 = (code *)FUN_033d1b68(
                                               "UnityEngine.AnimationCurve::Internal_Create(UnityEngine.Keyframe[])"
                                               );
          }
          uVar6 = (*DAT_086ed260)(lVar5);
          *(undefined8 *)(lVar7 + 0x10) = uVar6;
          plVar8 = (long *)(unaff_x19 + 0x40);
          *plVar8 = lVar7;
          if (DAT_08908cd0 != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)plVar8 >> 0x12 & 0x7fff);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
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


