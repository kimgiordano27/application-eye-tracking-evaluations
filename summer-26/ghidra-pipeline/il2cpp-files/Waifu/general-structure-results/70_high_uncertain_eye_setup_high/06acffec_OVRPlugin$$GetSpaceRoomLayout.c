/*
FUNCTION_NAME: OVRPlugin$$GetSpaceRoomLayout
ENTRY_POINT: 06acffec
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceRoomLayout(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 unaff_w23;
  undefined4 uStack000000000000000c;
  
  FUN_0335b6c8(param_1,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x2c1) = unaff_w23;
  uStack000000000000000c = 0;
  FUN_06ad0ff4();
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *unaff_x19;
    lVar7 = *(long *)(unaff_x21 + 400);
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_083ccfa8) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06ad0074;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0338f71c();
LAB_06ad0074:
    uVar3 = (*(code *)*puVar2)();
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_083cca38) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06ad00d4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0338f71c();
LAB_06ad00d4:
    uVar1 = (*(code *)*puVar2)();
    if (lVar7 != 0) {
      FUN_06ad139c(lVar7,uVar3,uVar1,uStack000000000000000c,*(undefined8 *)(unaff_x21 + 0x170));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


