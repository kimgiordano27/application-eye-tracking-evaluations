/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_EnqueueDestroyLayer
ENTRY_POINT: 06971384
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_EnqueueDestroyLayer(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar7;
  uint uVar8;
  
  if ((*(byte *)(unaff_x21 + 0xfa) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b72d0);
    *(undefined1 *)(unaff_x21 + 0xfa) = 1;
  }
  if ((unaff_x19 != 0) && (plVar4 = (long *)thunk_FUN_03a9a6e8(), plVar4 != (long *)0x0)) {
    lVar5 = (**(code **)(*plVar4 + 0x6f8))(plVar4,0x1434,*(undefined8 *)(*plVar4 + 0x700));
    puVar3 = PTR_DAT_084b72d0;
    puVar2 = PTR_DAT_08486760;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar1) {
        uVar8 = 0;
        do {
          if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          uVar7 = *(undefined8 *)puVar3;
          plVar4 = *(long **)(lVar5 + (long)(int)uVar8 * 8 + 0x20);
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar7 = FUN_0675ff58(uVar7,0);
          if (plVar4 == (long *)0x0) goto LAB_06971478;
          uVar6 = (**(code **)(*plVar4 + 0x1f8))(plVar4,uVar7,0,*(undefined8 *)(*plVar4 + 0x200));
          if ((uVar6 & 1) != 0) {
            FUN_06971480();
          }
          uVar1 = *(uint *)(lVar5 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar1);
      }
      return;
    }
  }
LAB_06971478:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


