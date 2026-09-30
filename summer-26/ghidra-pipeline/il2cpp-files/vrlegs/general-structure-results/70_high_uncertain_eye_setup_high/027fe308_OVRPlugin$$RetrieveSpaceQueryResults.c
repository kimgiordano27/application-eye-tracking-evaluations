/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceQueryResults
ENTRY_POINT: 027fe308
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__RetrieveSpaceQueryResults(void)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  int iVar8;
  long unaff_x21;
  int iVar9;
  
  FUN_01ab69ac();
  *(undefined1 *)(unaff_x21 + 0x280) = 1;
  puVar2 = PTR_DAT_03cfdaf8;
  if (unaff_x19 == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdf98);
    uVar6 = thunk_FUN_01a89e68();
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cc4af0);
    FUN_026a44fc(uVar6,uVar7,0);
    uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cfdb08);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar6,uVar7);
  }
  iVar9 = *(int *)(unaff_x19 + 0x10);
  if (iVar9 == 0) {
    return **(undefined8 **)(*(long *)PTR_DAT_03cbebc0 + 0xb8);
  }
  lVar4 = *(long *)PTR_DAT_03cfdaf8;
  iVar8 = iVar9;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *(long *)puVar2;
    iVar8 = *(int *)(unaff_x19 + 0x10);
  }
  iVar9 = **(int **)(lVar4 + 0xb8) + iVar9;
  if (0 < iVar8) {
    iVar8 = 0;
    do {
      uVar3 = FUN_025b8a2c();
      iVar8 = iVar8 + 1;
      iVar9 = (uVar3 & 0xffff ^ iVar9 << 7) + iVar9;
    } while (iVar8 < *(int *)(unaff_x19 + 0x10));
  }
  lVar4 = *(long *)(unaff_x20 + 0x18);
  if (lVar4 != 0) {
    iVar9 = iVar9 - (iVar9 >> 0x11);
    iVar9 = iVar9 - (iVar9 >> 0xb);
    uVar1 = iVar9 - (iVar9 >> 5);
    uVar3 = *(uint *)(unaff_x20 + 0x20) & uVar1;
    if (*(uint *)(lVar4 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar4 = *(long *)(lVar4 + (long)(int)uVar3 * 8 + 0x20);
    do {
      if (lVar4 == 0) {
        uVar6 = FUN_027fe488();
        return uVar6;
      }
      if (*(uint *)(lVar4 + 0x18) == uVar1) {
        if (*(long *)(lVar4 + 0x10) == 0) break;
        uVar5 = FUN_025bcf20();
        if ((uVar5 & 1) != 0) {
          return *(undefined8 *)(lVar4 + 0x10);
        }
      }
      lVar4 = *(long *)(lVar4 + 0x20);
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


