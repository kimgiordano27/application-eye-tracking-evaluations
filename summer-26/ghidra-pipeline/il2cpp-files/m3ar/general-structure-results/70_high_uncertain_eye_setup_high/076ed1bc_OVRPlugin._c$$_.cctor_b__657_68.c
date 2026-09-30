/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__657_68
ENTRY_POINT: 076ed1bc
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__657_68(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  FUN_0403162c();
  FUN_0403162c(PTR_DAT_08fae660);
  *(undefined1 *)(unaff_x20 + 0x32d) = 1;
  FUN_06dfbdfc();
  puVar3 = PTR_DAT_08fae660;
  puVar2 = PTR_DAT_08f67f40;
  lVar7 = *(long *)(unaff_x19 + 0x88);
  if (lVar7 != 0) {
    uVar6 = 0;
    do {
      if ((long)*(int *)(lVar7 + 0x18) <= (long)uVar6) {
        return;
      }
      uVar4 = FUN_040316d0(*(undefined8 *)puVar3,*(undefined4 *)(unaff_x19 + 0x80));
      if (*(uint *)(lVar7 + 0x18) <= uVar6) {
LAB_076ed2cc:
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      iVar1 = *(int *)(unaff_x19 + 0x80);
      *(undefined8 *)(lVar7 + uVar6 * 8 + 0x20) = uVar4;
      if (0 < iVar1) {
        uVar8 = 0;
        do {
          lVar7 = *(long *)(unaff_x19 + 0x88);
          if (lVar7 == 0) goto LAB_076ed2b0;
          if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_076ed2cc;
          lVar7 = *(long *)(lVar7 + uVar6 * 8 + 0x20);
          if (DAT_09539e1a == '\0') {
            FUN_0403162c(puVar2);
            DAT_09539e1a = '\x01';
          }
          if (lVar7 == 0) goto LAB_076ed2b0;
          if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_076ed2cc;
          puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
          uVar4 = *puVar5;
          lVar7 = lVar7 + uVar8 * 0x10;
          uVar8 = uVar8 + 1;
          *(undefined8 *)(lVar7 + 0x28) = puVar5[1];
          *(undefined8 *)(lVar7 + 0x20) = uVar4;
        } while ((long)uVar8 < (long)*(int *)(unaff_x19 + 0x80));
      }
      lVar7 = *(long *)(unaff_x19 + 0x88);
      uVar6 = uVar6 + 1;
    } while (lVar7 != 0);
  }
LAB_076ed2b0:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


