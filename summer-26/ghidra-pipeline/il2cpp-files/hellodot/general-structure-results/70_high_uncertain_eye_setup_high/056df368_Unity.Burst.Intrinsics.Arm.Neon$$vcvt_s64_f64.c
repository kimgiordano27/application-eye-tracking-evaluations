/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vcvt_s64_f64
ENTRY_POINT: 056df368
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x056df520) */

void Unity_Burst_Intrinsics_Arm_Neon__vcvt_s64_f64(void)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  long lVar4;
  long *unaff_x25;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  thunk_FUN_02cd038c();
  lVar1 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 8);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  in_stack_00000070 = *unaff_x21;
  in_stack_00000078 = unaff_x21[1];
  in_stack_00000080 = unaff_x21[2];
  Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>___ctor
            (lVar1,&stack0x00000070);
  lVar1 = *unaff_x25;
  iVar3 = *(int *)(lVar1 + 0xe0);
  if (iVar3 == 0) {
    thunk_FUN_02cd038c(lVar1);
    lVar1 = *unaff_x25;
    iVar3 = *(int *)(lVar1 + 0xe0);
  }
  piVar2 = *(int **)(lVar1 + 0xb8);
  if (*(long *)(piVar2 + 8) == 0) {
    if (iVar3 == 0) {
      thunk_FUN_02cd038c(lVar1);
      piVar2 = *(int **)(*unaff_x25 + 0xb8);
    }
    *(undefined8 *)(piVar2 + 8) = unaff_x20;
  }
  else {
    if (iVar3 == 0) {
      thunk_FUN_02cd038c(lVar1);
      lVar1 = *unaff_x25;
      piVar2 = *(int **)(lVar1 + 0xb8);
    }
    iVar3 = piVar2[4];
    if (*piVar2 < iVar3) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar1);
        lVar1 = *unaff_x25;
        piVar2 = *(int **)(lVar1 + 0xb8);
        iVar3 = piVar2[4];
      }
      lVar4 = *(long *)(piVar2 + 8);
      if (iVar3 < 10) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
      }
      else {
        if (*(int *)(lVar1 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar1);
          piVar2 = *(int **)(*unaff_x25 + 0xb8);
        }
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(long *)(piVar2 + 2) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        in_stack_00000070 = *(undefined8 *)(lVar4 + 0x20);
        in_stack_00000078 = *(undefined8 *)(lVar4 + 0x28);
        in_stack_00000080 = *(undefined8 *)(lVar4 + 0x30);
        OVREnumerable_Enumerator<OVRSceneManager_Metrics>__get_Current
                  (*(long *)(piVar2 + 2),&stack0x00000070,*(undefined8 *)PTR_DAT_06622fb0);
      }
      lVar1 = *(long *)(lVar4 + 0x10);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      *(undefined8 *)(lVar1 + 0x18) = 0;
      lVar4 = *unaff_x25;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar4 = *unaff_x25;
      }
      lVar4 = *(long *)(lVar4 + 0xb8);
      *(long *)(lVar4 + 0x20) = lVar1;
      *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
    }
  }
  if (in_stack_00000068._4_1_ != '\0') {
    thunk_FUN_02c6fbb4();
  }
  return;
}


