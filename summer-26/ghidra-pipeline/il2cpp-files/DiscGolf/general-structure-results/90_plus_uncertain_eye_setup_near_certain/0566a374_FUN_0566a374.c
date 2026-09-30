/*
FUNCTION_NAME: FUN_0566a374
ENTRY_POINT: 0566a374
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0566a510) */
/* WARNING: Removing unreachable block (ram,0x0566a60c) */
/* WARNING: Removing unreachable block (ram,0x0566a604) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0566a374(undefined4 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  
  if ((DAT_06dbc626 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0f1a0);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_06a155b0);
    FUN_02d965b8(System_Collections_Generic_List<ERSOSection>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<ERSideWalk>_TypeInfo);
    DAT_06dbc626 = 1;
  }
  uVar3 = FUN_0634b3c4(param_2,0);
  if (((uVar3 & 1) != 0) && (*(int *)(param_2 + 0xc0) != 0)) {
    if (*(int *)(*(long *)PTR_DAT_06a0f1a0 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    plVar4 = (long *)FUN_0564de84(1,0);
    if ((((*(char *)(param_2 + 0x20) != '\0') || (*(char *)(param_2 + 0x23) != '\0')) ||
        (*(char *)(param_2 + 0x22) != '\0')) &&
       ((uVar2 = FUN_0566a6c0(param_2), uVar2 < 0xf && ((1 << (ulong)(uVar2 & 0x1f) & 0x6002U) != 0)
        ))) {
      *(undefined1 *)(param_2 + 0x20) = 0;
      *(undefined4 *)(param_2 + 0x1a0) = 0xffffffff;
    }
    if (*(char *)(param_2 + 0x108) != '\0') {
      FUN_0566a71c(param_1,param_2);
    }
    if (*(int *)(param_2 + 0xc0) != 0) {
      FUN_0566a938(param_1,param_2);
    }
    if (((*(char *)(param_2 + 0x2d1) == '\0') && (*(char *)(param_2 + 0x2d0) != '\0')) &&
       (*(char *)(param_2 + 0x20) == '\0')) {
      FUN_0566ace8(param_2);
    }
    if (*(int *)(*(long *)PTR_DAT_06a155b0 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar5 = FUN_056694cc();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if (lVar5 != 0) {
      FUN_062feb1c(lVar5,0);
    }
    FUN_0566ad60(param_2);
    if (lVar5 != 0) {
      FUN_062feba4(lVar5,0);
    }
    iVar1 = *(int *)(param_2 + 0x1a0);
    if (*(int *)(param_2 + 0x1a4) != iVar1) {
      *(int *)(param_2 + 0x1a4) = iVar1;
      if (*(long *)(param_2 + 0x1a8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_04950150(*(long *)(param_2 + 0x1a8),iVar1,
                   *(undefined8 *)System_Collections_Generic_List<ERSideWalk>_TypeInfo);
      if (*(long *)(param_2 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_0495062c(*(long *)(param_2 + 0x1b0),param_2,
                   *(undefined8 *)System_Collections_Generic_List<ERSOSection>_TypeInfo);
    }
    if (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_069fbff0) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto OVRPlugin__set_vsyncCount;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)PTR_DAT_069fbff0,0);
OVRPlugin__set_vsyncCount:
      (*(code *)*puVar6)(plVar4,puVar6[1]);
    }
  }
  return;
}


