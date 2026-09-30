/*
FUNCTION_NAME: OVRPlugin$$ToBool
ENTRY_POINT: 07a32a0c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ToBool(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  long unaff_x21;
  long *unaff_x23;
  long lVar9;
  ulong uVar10;
  
  FUN_04077588(PTR_DAT_092f03e8);
  FUN_04077588(PTR_DAT_092f03f0);
  FUN_04077588(PTR_DAT_092f03f8);
  *(undefined1 *)(unaff_x20 + 0x24d) = 1;
  lVar4 = *unaff_x23;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar4 = *unaff_x23;
  }
  puVar2 = PTR_DAT_092f03f0;
  puVar1 = PTR_DAT_092f03e8;
  if (**(long **)(lVar4 + 0xb8) == 0) {
LAB_07a32ba8:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = FUN_04077674(*(undefined8 *)PTR_DAT_092869a0,
                       *(undefined4 *)(**(long **)(lVar4 + 0xb8) + 0x18));
  plVar8 = (long *)(unaff_x21 + 0x10);
  *plVar8 = lVar4;
  thunk_FUN_040ec700(plVar8,lVar4);
  FUN_076bca34();
  *(long *)(unaff_x21 + 0x18) = unaff_x19;
  thunk_FUN_040ec700((long *)(unaff_x21 + 0x18));
  lVar4 = 8;
  while( true ) {
    lVar5 = *unaff_x23;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar5 = *unaff_x23;
    }
    if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_07a32ba8;
    uVar10 = lVar4 - 8;
    if ((long)*(int *)(**(long **)(lVar5 + 0xb8) + 0x18) <= (long)uVar10) {
      return;
    }
    lVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092f03f8);
    FUN_076bca34(lVar5,0);
    lVar6 = *unaff_x23;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar6 = *unaff_x23;
    }
    lVar6 = **(long **)(lVar6 + 0xb8);
    if (lVar6 == 0) goto LAB_07a32ba8;
    if (*(uint *)(lVar6 + 0x18) <= uVar10) break;
    if (lVar5 == 0) goto LAB_07a32ba8;
    uVar7 = *(undefined8 *)puVar1;
    lVar9 = *plVar8;
    *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(lVar6 + lVar4 * 4);
    uVar7 = thunk_FUN_040b4efc(uVar7);
    FUN_061da510(uVar7,lVar5,*(undefined8 *)puVar2,0);
    if ((unaff_x19 == 0) || (uVar3 = FUN_05c275dc(), lVar9 == 0)) goto LAB_07a32ba8;
    if (*(uint *)(lVar9 + 0x18) <= uVar10) break;
    *(undefined4 *)(lVar9 + lVar4 * 4) = uVar3;
    lVar4 = lVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


