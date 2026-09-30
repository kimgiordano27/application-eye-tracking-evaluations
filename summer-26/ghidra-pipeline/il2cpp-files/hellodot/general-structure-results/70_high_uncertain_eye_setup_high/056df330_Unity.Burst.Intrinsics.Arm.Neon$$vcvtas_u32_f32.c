/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vcvtas_u32_f32
ENTRY_POINT: 056df330
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

void Unity_Burst_Intrinsics_Arm_Neon__vcvtas_u32_f32(void)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x25;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  thunk_FUN_02cd038c();
  lVar1 = *unaff_x25;
  lVar2 = *(long *)(lVar1 + 0xb8);
  if (*(int *)(lVar2 + 0x10) == 10) {
    FUN_056df808();
  }
  else {
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar1);
      lVar2 = *(long *)(*unaff_x25 + 0xb8);
    }
    if (*(long *)(lVar2 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    in_stack_00000070 = *unaff_x21;
    in_stack_00000078 = unaff_x21[1];
    in_stack_00000080 = unaff_x21[2];
    Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>___ctor
              (*(long *)(lVar2 + 8),&stack0x00000070);
  }
  lVar1 = *unaff_x25;
  iVar4 = *(int *)(lVar1 + 0xe0);
  if (iVar4 == 0) {
    thunk_FUN_02cd038c(lVar1);
    lVar1 = *unaff_x25;
    iVar4 = *(int *)(lVar1 + 0xe0);
  }
  piVar3 = *(int **)(lVar1 + 0xb8);
  if (*(long *)(piVar3 + 8) == 0) {
    if (iVar4 == 0) {
      thunk_FUN_02cd038c(lVar1);
      piVar3 = *(int **)(*unaff_x25 + 0xb8);
    }
    *(undefined8 *)(piVar3 + 8) = unaff_x20;
  }
  else {
    if (iVar4 == 0) {
      thunk_FUN_02cd038c(lVar1);
      lVar1 = *unaff_x25;
      piVar3 = *(int **)(lVar1 + 0xb8);
    }
    iVar4 = piVar3[4];
    if (*piVar3 < iVar4) {
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar1);
        lVar1 = *unaff_x25;
        piVar3 = *(int **)(lVar1 + 0xb8);
        iVar4 = piVar3[4];
      }
      lVar2 = *(long *)(piVar3 + 8);
      if (iVar4 < 10) {
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
      }
      else {
        if (*(int *)(lVar1 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar1);
          piVar3 = *(int **)(*unaff_x25 + 0xb8);
        }
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(long *)(piVar3 + 2) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        in_stack_00000070 = *(undefined8 *)(lVar2 + 0x20);
        in_stack_00000078 = *(undefined8 *)(lVar2 + 0x28);
        in_stack_00000080 = *(undefined8 *)(lVar2 + 0x30);
        OVREnumerable_Enumerator<OVRSceneManager_Metrics>__get_Current
                  (*(long *)(piVar3 + 2),&stack0x00000070,*(undefined8 *)PTR_DAT_06622fb0);
      }
      lVar1 = *(long *)(lVar2 + 0x10);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      *(undefined8 *)(lVar1 + 0x18) = 0;
      lVar2 = *unaff_x25;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar2 = *unaff_x25;
      }
      lVar2 = *(long *)(lVar2 + 0xb8);
      *(long *)(lVar2 + 0x20) = lVar1;
      *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
    }
  }
  if (in_stack_00000068._4_1_ != '\0') {
    thunk_FUN_02c6fbb4();
  }
  return;
}


