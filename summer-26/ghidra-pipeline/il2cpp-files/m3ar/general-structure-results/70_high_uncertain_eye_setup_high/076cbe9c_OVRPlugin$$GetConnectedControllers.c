/*
FUNCTION_NAME: OVRPlugin$$GetConnectedControllers
ENTRY_POINT: 076cbe9c
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetConnectedControllers(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  undefined8 *unaff_x22;
  long lVar8;
  undefined8 uVar9;
  
  FUN_0403162c(PTR_DAT_08fadc08);
  FUN_0403162c(PTR_DAT_08fadc48);
  FUN_0403162c(PTR_DAT_08fadc50);
  FUN_0403162c(PTR_DAT_08fadc58);
  *(undefined1 *)(unaff_x21 + 0x1e2) = 1;
  lVar4 = thunk_FUN_0406deb8(*unaff_x22);
  FUN_057d4bb0(lVar4,*unaff_x19);
  puVar3 = PTR_DAT_08fadc58;
  if (unaff_x20 != 0) {
    uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
    lVar5 = *(long *)PTR_DAT_08fadc58;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      lVar5 = *(long *)puVar3;
    }
    puVar2 = PTR_DAT_08fadc18;
    puVar6 = *(undefined8 **)(lVar5 + 0xb8);
    lVar8 = puVar6[1];
    if (lVar8 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        puVar6 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar9 = *puVar6;
      lVar8 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fadc30);
      FUN_05345534(lVar8,uVar9,*(undefined8 *)PTR_DAT_08fadc48,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar8;
    }
    uVar7 = FUN_04afa5dc(uVar7,lVar8,*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_08fadc40;
    if (lVar4 != 0) {
      FUN_057d55b4(lVar4,uVar7,*(undefined8 *)PTR_DAT_08fadc38);
      lVar5 = *(long *)(lVar4 + 0x10);
      uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
      lVar8 = *(long *)puVar2;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
        }
        else {
          FUN_057d53ac(lVar4,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
        lVar5 = *(long *)puVar3;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          lVar5 = *(long *)puVar3;
        }
        puVar2 = PTR_DAT_08fadc20;
        puVar6 = *(undefined8 **)(lVar5 + 0xb8);
        lVar8 = puVar6[2];
        if (lVar8 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0408f364();
            puVar6 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
          }
          uVar7 = *puVar6;
          lVar8 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fadc28);
          FUN_053442e0(lVar8,uVar7,*(undefined8 *)PTR_DAT_08fadc50,0);
          *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = lVar8;
        }
        FUN_04b0f494(lVar4,lVar8,*(undefined8 *)puVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


