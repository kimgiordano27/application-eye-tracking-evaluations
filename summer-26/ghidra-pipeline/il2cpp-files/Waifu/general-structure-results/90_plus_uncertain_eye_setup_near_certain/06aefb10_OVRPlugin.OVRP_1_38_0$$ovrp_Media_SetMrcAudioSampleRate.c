/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcAudioSampleRate
ENTRY_POINT: 06aefb10
PROGRAM: Waifu-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcAudioSampleRate(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
  lVar6 = *(long *)(param_1 + 0x48);
  if (DAT_086ee508 == (code *)0x0) {
    DAT_086ee508 = (code *)FUN_033d1b68("UnityEngine.MeshFilter::get_sharedMesh()");
  }
  uVar4 = (*DAT_086ee508)();
  if (lVar6 != 0) {
    if (DAT_086ee510 == (code *)0x0) {
      DAT_086ee510 = (code *)FUN_033d1b68("UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)"
                                         );
    }
    (*DAT_086ee510)(lVar6,uVar4);
    lVar6 = *(long *)(param_1 + 0x48);
    if (lVar6 != 0) {
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      lVar6 = (*DAT_086ef188)(lVar6);
      lVar7 = *(long *)(unaff_x20 + 0x20);
      if (lVar7 != 0) {
        if (DAT_086ef188 == (code *)0x0) {
          DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
        }
        lVar7 = (*DAT_086ef188)(lVar7);
        if ((lVar7 != 0) && (FUN_07a1bb0c(lVar7,0), lVar6 != 0)) {
          FUN_07a19820(lVar6,0);
          lVar6 = *(long *)(param_1 + 0x50);
          if (lVar6 != 0) {
            if (DAT_086edcc0 == (code *)0x0) {
              DAT_086edcc0 = (code *)FUN_033d1b68(
                                                 "UnityEngine.Renderer::set_enabled(System.Boolean)"
                                                 );
            }
            (*DAT_086edcc0)(lVar6,1);
            FUN_06ad0110(&stack0x00000020,*(undefined8 *)(param_1 + 0x40),0);
            FUN_06aefd1c(&stack0x00000060,param_1);
            lVar6 = *(long *)(unaff_x20 + 0x20);
            if (lVar6 != 0) {
              if (DAT_086ef188 == (code *)0x0) {
                DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
              }
              uVar4 = (*DAT_086ef188)(lVar6);
              FUN_06a5e4b0(&stack0x00000020,uVar4,0,0);
              in_stack_00000048 = in_stack_00000028;
              in_stack_00000040 = in_stack_00000020;
              uStack0000000000000054 = uStack0000000000000034;
              in_stack_00000050 = uStack0000000000000030;
              uVar4 = FUN_06a559ec(param_1 + 0x58,&stack0x00000040,&stack0x00000060,0);
              puVar5 = (undefined8 *)(param_1 + 0x70);
              *puVar5 = uVar4;
              if (DAT_08908cd0 != 0) {
                puVar1 = &DAT_0873ccb0 + ((ulong)puVar5 >> 0x12 & 0x7fff);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


