/*
FUNCTION_NAME: OVRPlugin.OVRP_1_36_0$$.cctor
ENTRY_POINT: 0369fae4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_36_0___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x19;
  ulong uVar6;
  long unaff_x25;
  ulong uVar7;
  
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__;
  puVar1 = Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__;
  if (unaff_x25 != 0) {
    uVar6 = 0;
    do {
      if ((long)*(int *)(unaff_x25 + 0x18) <= (long)uVar6) {
        return;
      }
      uVar3 = FUN_01f08890(*(undefined8 *)puVar2,*(undefined4 *)(unaff_x19 + 0x80));
      if (*(uint *)(unaff_x25 + 0x18) <= uVar6) {
LAB_0369fbd4:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(unaff_x25 + uVar6 * 8 + 0x20) = uVar3;
      thunk_FUN_01f51358();
      if (0 < *(int *)(unaff_x19 + 0x80)) {
        uVar7 = 0;
        do {
          lVar4 = *(long *)(unaff_x19 + 0x88);
          if (lVar4 == 0) goto LAB_0369fbb8;
          if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_0369fbd4;
          lVar4 = *(long *)(lVar4 + uVar6 * 8 + 0x20);
          if (DAT_0482ee0f == '\0') {
            thunk_FUN_01efb3a4(puVar1);
            DAT_0482ee0f = '\x01';
          }
          if (lVar4 == 0) goto LAB_0369fbb8;
          if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_0369fbd4;
          puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          uVar3 = *puVar5;
          lVar4 = lVar4 + uVar7 * 0x10;
          uVar7 = uVar7 + 1;
          *(undefined8 *)(lVar4 + 0x28) = puVar5[1];
          *(undefined8 *)(lVar4 + 0x20) = uVar3;
        } while ((long)uVar7 < (long)*(int *)(unaff_x19 + 0x80));
      }
      unaff_x25 = *(long *)(unaff_x19 + 0x88);
      uVar6 = uVar6 + 1;
    } while (unaff_x25 != 0);
  }
LAB_0369fbb8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


