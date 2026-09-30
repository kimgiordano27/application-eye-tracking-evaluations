/*
FUNCTION_NAME: OVRPlugin$$get_EyeTextureArrayEnabled
ENTRY_POINT: 076cd4b0
PROGRAM: m3ar-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_10;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__get_EyeTextureArrayEnabled(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 in_w8;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *plVar10;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  ulong uStack0000000000000030;
  long lStack0000000000000038;
  
  *(undefined1 *)(unaff_x20 + 0x1f7) = in_w8;
  puVar4 = PTR_DAT_08fadd20;
  puVar3 = PTR_DAT_08fadd18;
  puVar2 = PTR_DAT_08fad0e8;
  uStack0000000000000018 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  lStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  if (*(long *)(unaff_x19 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  FUN_0594bf6c(&stack0x00000020,*(long *)(unaff_x19 + 0x48),*(undefined8 *)PTR_DAT_08fadd38);
  do {
    uVar6 = FUN_0725bc24(&stack0x00000020,*(undefined8 *)puVar4);
    uVar5 = uStack0000000000000030;
    if ((uVar6 & 1) == 0) {
      FUN_0725bc20(&stack0x00000020,*(undefined8 *)puVar3);
      return;
    }
    if (lStack0000000000000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    plVar10 = *(long **)(unaff_x19 + 0x38);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar8 = *plVar10;
    uVar1 = *(undefined4 *)(lStack0000000000000038 + 0x14);
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto OVRPlugin__get_localDimmingSupported;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)puVar2,0);
OVRPlugin__get_localDimmingSupported:
    (*(code *)*puVar7)(plVar10,uVar5 & 0xffffffff,uVar1,&stack0x00000018,puVar7[1]);
  } while( true );
}


