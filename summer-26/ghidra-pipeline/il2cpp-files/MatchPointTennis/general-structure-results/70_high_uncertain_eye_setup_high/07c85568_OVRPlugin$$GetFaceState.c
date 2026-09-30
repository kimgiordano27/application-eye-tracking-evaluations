/*
FUNCTION_NAME: OVRPlugin$$GetFaceState
ENTRY_POINT: 07c85568
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetFaceState(long param_1)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  float fStack000000000000004c;
  
  if ((DAT_0a5267e9 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f509e8);
    FUN_04447ba8(PTR_DAT_09f509f0);
    FUN_04447ba8(PTR_DAT_09f509f8);
    FUN_04447ba8(PTR_DAT_09f50a00);
                    /* try { // try from 07c855a8 to 07d855cf has its CatchHandler @ 07c858d0 */
    FUN_04447ba8(PTR_DAT_09f50a08);
    DAT_0a5267e9 = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  fStack000000000000004c = 0.0;
  uVar6 = FUN_09525150(param_1,0);
  if ((uVar6 & 1) == 0) {
    return false;
  }
  cVar1 = *(char *)(param_1 + 0x61);
  *(undefined1 *)(param_1 + 0x61) = 1;
                    /* try { // try from 07c855f0 to 07d855fb has its CatchHandler @ 07c858c0 */
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_05bae95c(&stack0x00000008,*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_09f50a08);
    puVar4 = PTR_DAT_09f509f8;
    puVar3 = PTR_DAT_09f509e8;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar6 = FUN_0768d020(&stack0x00000020,*(undefined8 *)puVar4), lVar7 = in_stack_00000030,
          (uVar6 & 1) != 0) {
      if (cVar1 == '\0') {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        fVar9 = *(float *)(in_stack_00000030 + 0x14);
        fVar8 = *(float *)(in_stack_00000030 + 0x18) * -0.5;
      }
      else {
        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        fVar9 = *(float *)(in_stack_00000030 + 0x14);
        fVar8 = *(float *)(in_stack_00000030 + 0x18) * 0.5;
      }
      bVar5 = FUN_07c857dc(param_1,*(undefined4 *)(in_stack_00000030 + 0x10),&stack0x0000004c);
      fVar10 = ABS(fStack000000000000004c);
      if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_07476e6c(fStack000000000000004c,fVar9 + fVar8,*(long *)(param_1 + 0x58),lVar7,
                   *(undefined8 *)puVar3);
      *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) & bVar5 & fVar10 <= fVar9 + fVar8;
    }
    FUN_0768d01c(&stack0x00000020,*(undefined8 *)PTR_DAT_09f509f0);
    lVar7 = *(long *)(param_1 + 0x50);
    if (lVar7 != 0) {
      fVar8 = (float)(**(code **)(lVar7 + 0x18))
                               (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      cVar2 = *(char *)(param_1 + 0x61);
      if (cVar1 == cVar2) {
        fVar9 = *(float *)(param_1 + 100);
      }
      else {
        *(float *)(param_1 + 100) = fVar8;
        fVar9 = fVar8;
      }
      if (*(float *)(param_1 + 0x48) <= fVar8 - fVar9) {
        *(char *)(param_1 + 0x60) = cVar2;
      }
      else {
        cVar2 = *(char *)(param_1 + 0x60);
      }
      return cVar2 != '\0';
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


