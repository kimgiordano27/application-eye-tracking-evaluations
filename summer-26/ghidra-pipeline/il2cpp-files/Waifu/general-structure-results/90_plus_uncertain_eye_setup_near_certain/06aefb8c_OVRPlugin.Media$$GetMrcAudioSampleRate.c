/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcAudioSampleRate
ENTRY_POINT: 06aefb8c
PROGRAM: Waifu-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__GetMrcAudioSampleRate(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 *puVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x23;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
  pcVar4 = (code *)FUN_033d1b68(param_1 + 0xf0);
  *(code **)(unaff_x23 + 0x188) = pcVar4;
  lVar5 = (*pcVar4)();
  lVar8 = *(long *)(unaff_x20 + 0x20);
  if (lVar8 != 0) {
    pcVar4 = *(code **)(unaff_x23 + 0x188);
    if (pcVar4 == (code *)0x0) {
      pcVar4 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      *(code **)(unaff_x23 + 0x188) = pcVar4;
    }
    lVar8 = (*pcVar4)(lVar8);
    if ((lVar8 != 0) && (FUN_07a1bb0c(lVar8,0), lVar5 != 0)) {
      FUN_07a19820(lVar5,0);
      lVar5 = *(long *)(unaff_x19 + 0x50);
      if (lVar5 != 0) {
        if (DAT_086edcc0 == (code *)0x0) {
          DAT_086edcc0 = (code *)FUN_033d1b68("UnityEngine.Renderer::set_enabled(System.Boolean)");
        }
        (*DAT_086edcc0)(lVar5,1);
        FUN_06ad0110(&stack0x00000020,*(undefined8 *)(unaff_x19 + 0x40),0);
        FUN_06aefd1c(&stack0x00000060);
        lVar5 = *(long *)(unaff_x20 + 0x20);
        if (lVar5 != 0) {
          pcVar4 = *(code **)(unaff_x23 + 0x188);
          if (pcVar4 == (code *)0x0) {
            pcVar4 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
            *(code **)(unaff_x23 + 0x188) = pcVar4;
          }
          uVar6 = (*pcVar4)(lVar5);
          FUN_06a5e4b0(&stack0x00000020,uVar6,0,0);
          in_stack_00000048 = in_stack_00000028;
          in_stack_00000040 = in_stack_00000020;
          uStack0000000000000054 = uStack0000000000000034;
          in_stack_00000050 = uStack0000000000000030;
          uVar6 = FUN_06a559ec(unaff_x19 + 0x58,&stack0x00000040,&stack0x00000060,0);
          puVar7 = (undefined8 *)(unaff_x19 + 0x70);
          *puVar7 = uVar6;
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
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


