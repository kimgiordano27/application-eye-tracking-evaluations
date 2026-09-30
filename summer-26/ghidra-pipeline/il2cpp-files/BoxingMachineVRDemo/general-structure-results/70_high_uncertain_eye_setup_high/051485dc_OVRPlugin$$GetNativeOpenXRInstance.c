/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRInstance
ENTRY_POINT: 051485dc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetNativeOpenXRInstance(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long unaff_x21;
  
  FUN_02d6084c(PTR_DAT_06764580);
  *(undefined1 *)(unaff_x21 + 0xd8c) = 1;
  puVar2 = PTR_DAT_06775808;
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *(long *)PTR_DAT_06775808;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar3 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_0675e258;
    if ((long *)**(long **)(lVar3 + 0xb8) != unaff_x19) {
      lVar3 = *unaff_x19;
      if (lVar3 == *(long *)(PTR_DAT_0675e258 + 0x90)) {
        uVar4 = FUN_0514a080();
        return uVar4;
      }
      if (lVar3 == *(long *)(PTR_DAT_0675e258 + 0x68)) {
        return 6;
      }
      if (lVar3 == *(long *)(PTR_DAT_0675e258 + 0x48)) {
        return 6;
      }
      if (lVar3 == *(long *)(PTR_DAT_0675e258 + 0x38)) {
        return 6;
      }
      if (lVar3 == *(long *)(PTR_DAT_0675e258 + 0x30)) {
        return 6;
      }
      if (lVar3 == *(long *)(PTR_DAT_0675e258 + 0x70)) {
        return 6;
      }
      if (lVar3 == *(long *)(PTR_DAT_0675e258 + 0x50)) {
        return 6;
      }
      if (lVar3 == *(long *)(PTR_DAT_0675e258 + 0x40)) {
        return 6;
      }
      if (lVar3 == *(long *)(PTR_DAT_0675e258 + 0x18)) {
        return 6;
      }
      bVar1 = *(byte *)(*(long *)(PTR_DAT_0675e258 + 0x98) + 0x130);
      if (((bVar1 <= *(byte *)(lVar3 + 0x130)) &&
          (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) ==
           *(long *)(PTR_DAT_0675e258 + 0x98))) || (lVar3 == *(long *)PTR_DAT_067677e0)) {
        return 6;
      }
      if (lVar3 == *(long *)(PTR_DAT_0675e258 + 0x80)) {
        return 7;
      }
      if (lVar3 == *(long *)(PTR_DAT_0675e258 + 0x78)) {
        return 7;
      }
      if (lVar3 == *(long *)PTR_DAT_06767820) {
        return 7;
      }
      if (lVar3 == *(long *)PTR_DAT_067616f8) {
        return 0xc;
      }
      if (lVar3 == *(long *)PTR_DAT_067657d0) {
        return 0xc;
      }
      lVar3 = thunk_FUN_02d9d438();
      if (lVar3 != 0) {
        return 0xe;
      }
      lVar3 = *unaff_x19;
      if (lVar3 == *(long *)(puVar2 + 0x28)) {
        return 9;
      }
      if (lVar3 != *(long *)PTR_DAT_06768958) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_06764580 + 0x130);
        if ((bVar1 <= *(byte *)(lVar3 + 0x130)) &&
           (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06764580))
        {
          return 0x10;
        }
        if (lVar3 == *(long *)PTR_DAT_06762980) {
          return 0x11;
        }
        thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
        FUN_028f4b80();
        uVar4 = FUN_04f8e414(0);
        FUN_028f4e40();
        uVar5 = thunk_FUN_02d709fc();
        uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06781260);
        uVar4 = FUN_050f0ec0(uVar6,uVar4,uVar5,0);
        thunk_FUN_02dc61f4(PTR_DAT_06763b78);
        uVar5 = thunk_FUN_02d9d534();
        FUN_04f7d8e0(uVar5,uVar4,0);
        uVar4 = thunk_FUN_02dc61f4(PTR_DAT_06781c38);
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar5,uVar4);
      }
      return 0xf;
    }
  }
  return 10;
}


