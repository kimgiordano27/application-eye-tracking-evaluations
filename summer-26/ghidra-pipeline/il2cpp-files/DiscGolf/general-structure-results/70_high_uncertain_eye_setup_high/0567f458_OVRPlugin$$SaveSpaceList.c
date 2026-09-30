/*
FUNCTION_NAME: OVRPlugin$$SaveSpaceList
ENTRY_POINT: 0567f458
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SaveSpaceList(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  FUN_02d965b8();
  FUN_02d965b8(PTR_DAT_06a0e888);
  *(undefined1 *)(unaff_x20 + 0x715) = 1;
  if (DAT_06dbbb4d == '\0') {
    FUN_02d965b8(System_Func<float,_float,_float,_float>_TypeInfo);
    DAT_06dbbb4d = '\x01';
  }
  puVar1 = PTR_DAT_06a0e888;
  if ((**(char **)(*(long *)System_Func<float,_float,_float,_float>_TypeInfo + 0xb8) != '\0') &&
     (plVar4 = (long *)(unaff_x19 + 0x40), *plVar4 == 0)) {
    lVar2 = *(long *)(*(long *)PTR_DAT_06a0e888 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
    if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)PTR_DAT_069fb990);
    }
    uVar3 = FUN_06350670(uVar5,0,0);
    if ((uVar3 & 1) == 0) {
      lVar2 = *(long *)(*(long *)puVar1 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02dcfd18();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02dcfd18();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar2 != 0) {
        if (*(long *)(lVar2 + 0x1a0) == 0) {
          return;
        }
        lVar2 = *(long *)(*(long *)puVar1 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02dcfd18();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02dcfd18();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
        if (lVar2 != 0) {
          *plVar4 = *(long *)(lVar2 + 0x1a0);
          LeanTween__value(plVar4);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  return;
}


