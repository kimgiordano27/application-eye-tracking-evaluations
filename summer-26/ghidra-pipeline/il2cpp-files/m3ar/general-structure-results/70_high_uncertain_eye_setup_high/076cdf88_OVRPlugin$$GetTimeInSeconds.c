/*
FUNCTION_NAME: OVRPlugin$$GetTimeInSeconds
ENTRY_POINT: 076cdf88
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTimeInSeconds(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar9;
  undefined8 *unaff_x24;
  long lVar10;
  
  FUN_0403162c(PTR_DAT_08fadda8);
  FUN_0403162c(PTR_DAT_08faddb0);
  FUN_0403162c(PTR_DAT_08faddb8);
  FUN_0403162c(PTR_DAT_08faddc0);
  FUN_0403162c(PTR_DAT_08faddc8);
  FUN_0403162c(PTR_DAT_08faddd0);
  FUN_0403162c(PTR_DAT_08fadd80);
  FUN_0403162c(PTR_DAT_08faddd8);
  *(undefined1 *)(unaff_x21 + 0x203) = 1;
  lVar4 = thunk_FUN_0406deb8(*unaff_x24);
  FUN_075273c0(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = unaff_x23;
    *(long *)(lVar4 + 0x18) = unaff_x22;
    puVar3 = PTR_DAT_08faddd8;
    puVar2 = PTR_DAT_08faddd0;
    puVar1 = PTR_DAT_08faddb0;
    if ((unaff_x22 != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
      FUN_06efa7d0(*(long *)(unaff_x19 + 0x10),*(undefined4 *)(unaff_x22 + 0x38),
                   *(undefined8 *)PTR_DAT_08fadd90);
      uVar5 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
      FUN_05320da4(uVar5,lVar4,*(undefined8 *)puVar2,0);
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0408f364();
        lVar6 = *(long *)puVar3;
      }
      puVar2 = PTR_DAT_08faddc0;
      puVar1 = PTR_DAT_08fadda8;
      puVar7 = *(undefined8 **)(lVar6 + 0xb8);
      lVar10 = puVar7[1];
      if (lVar10 == 0) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_0408f364();
          puVar7 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        }
        uVar9 = *puVar7;
        lVar10 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08faddb8);
        FUN_053210c4(lVar10,uVar9,*(undefined8 *)PTR_DAT_08faddc8,0);
        *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar10;
      }
      lVar6 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
      FUN_052668e0(lVar6,uVar5,lVar10);
      uVar5 = *(undefined8 *)(lVar4 + 0x18);
      lVar10 = thunk_FUN_0406deb8(*(undefined8 *)puVar2);
      FUN_075273c0(lVar10,0);
      lVar8 = *(long *)(lVar4 + 0x18);
      *(undefined8 *)(lVar10 + 0x10) = uVar5;
      *(long *)(lVar10 + 0x18) = lVar6;
      if ((lVar8 != 0) && (lVar6 != 0)) {
        FUN_0526691c(lVar6,*(undefined8 *)(lVar8 + 0x30),*(undefined8 *)PTR_DAT_08fadd98);
        if ((*(long *)(lVar4 + 0x18) != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) {
          FUN_06efa5dc(*(long *)(unaff_x19 + 0x10),*(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x38),
                       lVar10,*(undefined8 *)PTR_DAT_08fadd88);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


