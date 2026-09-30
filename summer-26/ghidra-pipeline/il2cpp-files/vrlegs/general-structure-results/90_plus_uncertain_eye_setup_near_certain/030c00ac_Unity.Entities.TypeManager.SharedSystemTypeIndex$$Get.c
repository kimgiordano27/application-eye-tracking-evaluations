/*
FUNCTION_NAME: Unity.Entities.TypeManager.SharedSystemTypeIndex$$Get
ENTRY_POINT: 030c00ac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x030c0228) */
/* WARNING: Removing unreachable block (ram,0x030c0220) */

void Unity_Entities_TypeManager_SharedSystemTypeIndex__Get(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 uVar2;
  long unaff_x20;
  long unaff_x21;
  uint uVar3;
  long lVar4;
  char cStack000000000000000c;
  
  FUN_01ab69ac();
  FUN_01ab69ac(System_Comparison<int>_TypeInfo);
  FUN_01ab69ac(System_Comparison<Level2Map>_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x8da) = 1;
  uVar2 = *(undefined8 *)(unaff_x21 + 0x18);
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar2,&stack0x0000000c,0);
  if (*(char *)(unaff_x21 + 0x34) == '\0') {
    uVar3 = 4;
  }
  else {
    if (*(long *)(unaff_x21 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    Unity_XR_OpenVR_HandedViveTracker__get_primary();
    uVar3 = 3;
  }
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
  }
  if ((uVar3 | 4) == 4) {
    uVar2 = *(undefined8 *)(unaff_x21 + 0x20);
    cStack000000000000000c = '\0';
    FUN_027e0bd8(uVar2,&stack0x0000000c,0);
    lVar4 = *(long *)(unaff_x21 + 0x38);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar3 = *(uint *)(unaff_x21 + 0x30);
    if (uVar3 == *(uint *)(lVar4 + 0x18)) {
      if ((int)(uVar3 + 0x40000000) < 0) {
        uVar2 = FUN_01ab6c4c();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar2,*(undefined8 *)System_Comparison<Level2Map>_TypeInfo);
      }
      FUN_01f25968((long *)(unaff_x21 + 0x38),uVar3 << 1,
                   *(undefined8 *)System_Comparison<IXRInteractable>_TypeInfo);
      uVar3 = *(uint *)(unaff_x21 + 0x30);
      lVar4 = *(long *)(unaff_x21 + 0x38);
      *(uint *)(unaff_x21 + 0x30) = uVar3 + 1;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    else {
      *(uint *)(unaff_x21 + 0x30) = uVar3 + 1;
    }
    if ((unaff_x20 != 0) && (lVar1 = thunk_FUN_01a89d6c(), lVar1 == 0)) {
      uVar2 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar2,0);
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    *(long *)(lVar4 + (long)(int)uVar3 * 8 + 0x20) = unaff_x20;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
    }
  }
  return;
}


