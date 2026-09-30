/*
FUNCTION_NAME: Amazon.S3.Model.WriteGetObjectResponseRequest$$set_BucketKeyEnabled
ENTRY_POINT: 04b66790
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;eye_or_gaze_keyword_boost_only
*/


void Amazon_S3_Model_WriteGetObjectResponseRequest__set_BucketKeyEnabled
               (undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long in_stack_00000008;
  
  if ((DAT_0b31fb31 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac118e0);
    FUN_04947ee4(PTR_DAT_0ac107f0);
    DAT_0b31fb31 = 1;
  }
  in_stack_00000008 = 0;
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac107f0) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_04b6682c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(param_2,*(long *)PTR_DAT_0ac107f0,2);
LAB_04b6682c:
    lVar4 = (*(code *)*puVar1)(param_2,puVar1[1]);
    if (lVar4 != 0) {
      uVar8 = *(undefined8 *)(lVar4 + 0x10);
      lVar2 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac118e0);
      FUN_08dbf2f0(lVar2,0);
      *(undefined8 *)(lVar2 + 0x10) = uVar8;
      thunk_FUN_049ee3d8((undefined8 *)(lVar2 + 0x10),uVar8);
      uVar5 = FUN_04b66a80(lVar2,*(undefined8 *)(lVar4 + 0x18),&stack0x00000008);
      if ((uVar5 & 1) == 0) {
        FUN_04338ac4(lVar4);
        uVar7 = *(undefined8 *)(lVar4 + 0x18);
        uVar8 = thunk_FUN_049ae08c(PTR_DAT_0ac11fe8);
        uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac133c0);
        uVar8 = FUN_08bd9aa0(uVar8,uVar7,uVar3,0);
        thunk_FUN_049ae08c(PTR_DAT_0ac10b50);
        uVar3 = thunk_FUN_04983f60();
        FUN_04b2b4f8(uVar3,uVar8,0);
        uVar8 = thunk_FUN_049ae08c(PTR_DAT_0ac133c8);
                    /* WARNING: Subroutine does not return */
        FUN_04948050(uVar3,uVar8);
      }
      if (in_stack_00000008 != 0) {
        FUN_04b66b8c(in_stack_00000008,lVar2,1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
  }
  FUN_04b66bf8(param_1);
  return;
}


