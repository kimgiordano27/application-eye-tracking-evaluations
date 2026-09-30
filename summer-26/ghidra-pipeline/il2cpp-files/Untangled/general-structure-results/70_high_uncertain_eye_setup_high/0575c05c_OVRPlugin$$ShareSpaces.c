/*
FUNCTION_NAME: OVRPlugin$$ShareSpaces
ENTRY_POINT: 0575c05c
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


void OVRPlugin__ShareSpaces(void)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x24;
  
code_r0x0575c05c:
  puVar3 = (undefined8 *)FUN_02eea86c();
  do {
    (*(code *)*puVar3)();
    while( true ) {
      uVar4 = (**(code **)(*unaff_x19 + 0x288))();
      if ((uVar4 & 1) == 0) goto LAB_0575c0a0;
      iVar1 = (**(code **)(*unaff_x19 + 0x238))();
      if (iVar1 == 4) break;
      if (iVar1 == 0xd) {
        return;
      }
    }
    plVar2 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar2 == (long *)0x0) {
LAB_0575c0f0:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    uVar4 = (**(code **)(*unaff_x19 + 0x288))();
    if ((uVar4 & 1) == 0) {
LAB_0575c0a0:
      thunk_FUN_02f239f0(PTR_DAT_06d59840);
      uVar5 = FUN_05692378();
      uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d59868);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar5,uVar6);
    }
    FUN_0575bdb8();
    if (unaff_x21 == (long *)0x0) goto LAB_0575c0f0;
    lVar7 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 == 0) goto code_r0x0575c05c;
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    while (*(long *)(piVar8 + -2) != *unaff_x24) {
      uVar4 = uVar4 - 1;
      piVar8 = piVar8 + 4;
      if (uVar4 == 0) goto code_r0x0575c05c;
    }
    puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
  } while( true );
}


