/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<float>$$get_NumberOfValues
ENTRY_POINT: 02782214
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<float>__get_NumberOfValues(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int in_w8;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar7;
  
  if (in_w8 < (int)unaff_w19) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  if (*(long *)(unaff_x21 + 0x10) != 0) {
    iVar3 = FUN_02a7c7a4(*(long *)(unaff_x21 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x28));
    if ((int)(*(int *)(unaff_x20 + 0x18) - unaff_w19) < iVar3) {
      FUN_033b2d60(5,0);
    }
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 != 0) {
      uVar2 = *(uint *)(lVar4 + 0x20);
      if (0 < (int)uVar2) {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_027822e4;
        uVar5 = 0;
        puVar6 = (undefined8 *)(lVar4 + 0x38);
        do {
          if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_027822cc:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          if (-1 < *(int *)(puVar6 + -3)) {
            if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) goto LAB_027822cc;
            uVar7 = *puVar6;
            lVar1 = unaff_x20 + (long)(int)unaff_w19 * 0x10;
            unaff_w19 = unaff_w19 + 1;
            *(undefined8 *)(lVar1 + 0x28) = puVar6[1];
            *(undefined8 *)(lVar1 + 0x20) = uVar7;
          }
          uVar5 = uVar5 + 1;
          puVar6 = puVar6 + 5;
        } while (uVar2 != uVar5);
      }
      return;
    }
  }
LAB_027822e4:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


