/*
FUNCTION_NAME: OVRPlugin$$get_cpuLevel
ENTRY_POINT: 0566a438
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0566a510) */
/* WARNING: Removing unreachable block (ram,0x0566a60c) */

void OVRPlugin__get_cpuLevel(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  int in_w8;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  if ((((in_w8 != 0) || (*(char *)(unaff_x19 + 0x22) != '\0')) &&
      (uVar2 = FUN_0566a6c0(), uVar2 < 0xf)) && ((1 << (ulong)(uVar2 & 0x1f) & 0x6002U) != 0)) {
    *(undefined1 *)(unaff_x19 + 0x20) = 0;
    *(undefined4 *)(unaff_x19 + 0x1a0) = 0xffffffff;
  }
  if (*(char *)(unaff_x19 + 0x108) != '\0') {
    FUN_0566a71c();
  }
  if (*(int *)(unaff_x19 + 0xc0) != 0) {
    FUN_0566a938();
  }
  if (((*(char *)(unaff_x19 + 0x2d1) == '\0') && (*(char *)(unaff_x19 + 0x2d0) != '\0')) &&
     (*(char *)(unaff_x19 + 0x20) == '\0')) {
    FUN_0566ace8();
  }
  if (*(int *)(*(long *)PTR_DAT_06a155b0 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar3 = FUN_056694cc();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if (lVar3 != 0) {
    FUN_062feb1c(lVar3,0);
  }
  FUN_0566ad60();
  if (lVar3 != 0) {
    FUN_062feba4(lVar3,0);
  }
  iVar1 = *(int *)(unaff_x19 + 0x1a0);
  if (*(int *)(unaff_x19 + 0x1a4) != iVar1) {
    *(int *)(unaff_x19 + 0x1a4) = iVar1;
    if (*(long *)(unaff_x19 + 0x1a8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04950150(*(long *)(unaff_x19 + 0x1a8),iVar1,
                 *(undefined8 *)System_Collections_Generic_List<ERSideWalk>_TypeInfo);
    if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0495062c();
  }
  plVar7 = (long *)*in_stack_00000018;
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto OVRPlugin__set_vsyncCount;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_02dd004c(plVar7,*(long *)PTR_DAT_069fbff0,0);
OVRPlugin__set_vsyncCount:
    (*(code *)*puVar4)(plVar7,puVar4[1]);
  }
  if (in_stack_00000010 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  return;
}


