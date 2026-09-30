/*
FUNCTION_NAME: OVRPlugin$$GetEyeTextureSize
ENTRY_POINT: 01f7a6ac
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetEyeTextureSize(void)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 *unaff_x19;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  int iVar3;
  long lVar4;
  long unaff_x26;
  
  if (DAT_0293dbb0 == '\0') {
    thunk_FUN_01279b34(PTR_DAT_027be8a0);
    thunk_FUN_01279b34(PTR_DAT_027b9de8);
    DAT_0293dbb0 = '\x01';
  }
  if ((unaff_w21 == unaff_w23) && ((unaff_w21 == 0 || (uVar1 = FUN_01f36130(), (uVar1 & 1) != 0))))
  {
    uVar2 = 0x7f800000;
  }
  else {
    lVar4 = *(long *)(unaff_x22 + 0x78);
    if (*(char *)(unaff_x26 + 0xfb6) == '\0') {
      thunk_FUN_01279b34(PTR_DAT_027b5200);
      *(undefined1 *)(unaff_x26 + 0xfb6) = 1;
    }
    iVar3 = 0;
    if (lVar4 != 0) {
      System_Int32__TryParse(lVar4,0);
      iVar3 = *(int *)(lVar4 + 0x10);
    }
    if (DAT_0293dbb0 == '\0') {
      thunk_FUN_01279b34(PTR_DAT_027be8a0);
      thunk_FUN_01279b34(PTR_DAT_027b9de8);
      DAT_0293dbb0 = '\x01';
    }
    if ((unaff_w21 == iVar3) && ((unaff_w21 == 0 || (uVar1 = FUN_01f36130(), (uVar1 & 1) != 0)))) {
      uVar2 = 0xff800000;
    }
    else {
      lVar4 = *(long *)(unaff_x22 + 0x68);
      if (*(char *)(unaff_x26 + 0xfb6) == '\0') {
        thunk_FUN_01279b34(PTR_DAT_027b5200);
        *(undefined1 *)(unaff_x26 + 0xfb6) = 1;
      }
      iVar3 = 0;
      if (lVar4 != 0) {
        System_Int32__TryParse(lVar4,0);
        iVar3 = *(int *)(lVar4 + 0x10);
      }
      if (DAT_0293dbb0 == '\0') {
        thunk_FUN_01279b34(PTR_DAT_027be8a0);
        thunk_FUN_01279b34(PTR_DAT_027b9de8);
        DAT_0293dbb0 = '\x01';
      }
      if ((unaff_w21 != iVar3) || ((unaff_w21 != 0 && (uVar1 = FUN_01f36130(), (uVar1 & 1) == 0))))
      {
        return 0;
      }
      uVar2 = 0x7fc00000;
    }
  }
  *unaff_x19 = uVar2;
  return 1;
}


