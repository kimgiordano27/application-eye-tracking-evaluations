/*
FUNCTION_NAME: OVRPlugin$$ShareSpaces
ENTRY_POINT: 090af658
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ShareSpaces(long param_1,undefined8 param_2,float param_3,float param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long lVar5;
  long *unaff_x21;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s10;
  float fVar13;
  undefined8 unaff_d11;
  undefined8 uStack0000000000000020;
  float in_stack_00000030;
  float in_stack_00000040;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  uStack0000000000000020 = param_2;
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x21) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_090af6a8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_04980e68();
LAB_090af6a8:
  (*(code *)*puVar1)();
  fVar6 = (float)FUN_090af9bc();
  if (DAT_0b32413d == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    DAT_0b32413d = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_0ac0a830 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (0 < (int)unaff_x19[10]) {
    lVar5 = 0;
    uVar3 = 0;
    fVar9 = (float)uStack0000000000000020;
    fVar11 = (float)unaff_d11 + in_stack_00000040 * fVar9;
    fVar12 = (float)((ulong)unaff_d11 >> 0x20) + in_stack_00000030 * fVar9;
    fVar13 = unaff_s10 + unaff_s8 * fVar9;
    fVar6 = SQRT((fVar13 - param_4) * (fVar13 - param_4) +
                 (fVar11 - fVar6) * (fVar11 - fVar6) + (fVar12 - param_3) * (fVar12 - param_3));
    fVar9 = fVar12 + in_stack_00000030 * fVar6 * 0.5;
    do {
      fVar8 = fVar12;
      fVar10 = fVar13;
      uVar7 = FUN_090afbe0(CONCAT44(fVar12,fVar11),fVar12,fVar13,
                           CONCAT44(fVar9,fVar11 + in_stack_00000040 * fVar6 * 0.5),fVar9,
                           fVar13 + unaff_s8 * fVar6 * 0.5);
      lVar2 = unaff_x19[7];
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      lVar2 = lVar2 + lVar5;
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + 0xc;
      *(undefined4 *)(lVar2 + 0x20) = uVar7;
      *(float *)(lVar2 + 0x24) = fVar8;
      *(float *)(lVar2 + 0x28) = fVar10;
    } while ((long)uVar3 < (long)(int)unaff_x19[10]);
  }
  (**(code **)(*unaff_x19 + 0x1c8))();
  return;
}


