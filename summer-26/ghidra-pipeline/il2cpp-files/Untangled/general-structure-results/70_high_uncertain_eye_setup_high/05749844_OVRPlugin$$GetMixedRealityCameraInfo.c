/*
FUNCTION_NAME: OVRPlugin$$GetMixedRealityCameraInfo
ENTRY_POINT: 05749844
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetMixedRealityCameraInfo(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long unaff_x21;
  
  FUN_02f07e70();
  FUN_02f07e70(PTR_DAT_06d02c80);
  FUN_02f07e70(PTR_DAT_06d4d140);
  FUN_02f07e70(PTR_DAT_06d1b6c8);
  FUN_02f07e70(PTR_DAT_06d023f0);
  FUN_02f07e70(PTR_DAT_06d040e0);
  FUN_02f07e70(PTR_DAT_06d04108);
  FUN_02f07e70(PTR_DAT_06d04128);
  FUN_02f07e70(PTR_DAT_06d051b0);
  FUN_02f07e70(PTR_DAT_06d04140);
  FUN_02f07e70(PTR_DAT_06d02bc8);
  FUN_02f07e70(PTR_DAT_06d040b0);
  FUN_02f07e70(PTR_DAT_06d04158);
  FUN_02f07e70(PTR_DAT_06d02b98);
  FUN_02f07e70(PTR_DAT_06d02350);
  FUN_02f07e70(PTR_DAT_06d028f0);
  FUN_02f07e70(PTR_DAT_06d04170);
  FUN_02f07e70(PTR_DAT_06d04180);
  FUN_02f07e70(PTR_DAT_06d04190);
  FUN_02f07e70(PTR_DAT_06d15fd8);
  *(undefined1 *)(unaff_x21 + 0x9fe) = 1;
  puVar2 = PTR_DAT_06d4d140;
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *(long *)PTR_DAT_06d4d140;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar3 = *(long *)puVar2;
    }
    if ((long *)**(long **)(lVar3 + 0xb8) != unaff_x19) {
      lVar3 = *unaff_x19;
      if (lVar3 == *(long *)PTR_DAT_06d02350) {
        uVar4 = FUN_0574b5b0();
        return uVar4;
      }
      if (lVar3 == *(long *)PTR_DAT_06d040b0) {
        return 6;
      }
      if (lVar3 == *(long *)PTR_DAT_06d02bc8) {
        return 6;
      }
      if (lVar3 == *(long *)PTR_DAT_06d04140) {
        return 6;
      }
      if (lVar3 == *(long *)PTR_DAT_06d04158) {
        return 6;
      }
      if (lVar3 == *(long *)PTR_DAT_06d04190) {
        return 6;
      }
      if (lVar3 == *(long *)PTR_DAT_06d04180) {
        return 6;
      }
      if (lVar3 == *(long *)PTR_DAT_06d04170) {
        return 6;
      }
      if (lVar3 == *(long *)PTR_DAT_06d02c80) {
        return 6;
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_06d04128 + 0x130);
      if (((bVar1 <= *(byte *)(lVar3 + 0x130)) &&
          (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06d04128))
         || (lVar3 == *(long *)PTR_DAT_06d03fe0)) {
        return 6;
      }
      if (lVar3 == *(long *)PTR_DAT_06d04108) {
        return 7;
      }
      if (lVar3 == *(long *)PTR_DAT_06d02b98) {
        return 7;
      }
      if (lVar3 == *(long *)PTR_DAT_06d040e0) {
        return 7;
      }
      if (lVar3 == *(long *)PTR_DAT_06d023f0) {
        return 0xc;
      }
      if (lVar3 == *(long *)PTR_DAT_06d1b6c8) {
        return 0xc;
      }
      lVar3 = thunk_FUN_02ef170c();
      if (lVar3 != 0) {
        return 0xe;
      }
      lVar3 = *unaff_x19;
      if (lVar3 == *(long *)PTR_DAT_06d04020) {
        return 9;
      }
      if (lVar3 != *(long *)PTR_DAT_06d051b0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_06d15fd8 + 0x130);
        if ((bVar1 <= *(byte *)(lVar3 + 0x130)) &&
           (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06d15fd8))
        {
          return 0x10;
        }
        if (lVar3 == *(long *)PTR_DAT_06d028f0) {
          return 0x11;
        }
        thunk_FUN_02f239f0(PTR_DAT_06d06338);
        FUN_02a55ad4();
        uVar4 = FUN_055b5920(0);
        FUN_02a551a0();
        uVar5 = thunk_FUN_02ebbee0();
        uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d58900);
        uVar4 = FUN_056f1630(uVar6,uVar4,uVar5,0);
        thunk_FUN_02f239f0(PTR_DAT_06d02080);
        uVar5 = thunk_FUN_02ef1808();
        FUN_0555e840(uVar5,uVar4,0);
        uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d592d0);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar5,uVar4);
      }
      return 0xf;
    }
  }
  return 10;
}


