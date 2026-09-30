/*
FUNCTION_NAME: SharedDeoVR.Context.Common.ContextSessionValidation$$Dispose
ENTRY_POINT: 0941b390
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 SharedDeoVR_Context_Common_ContextSessionValidation__Dispose(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long in_stack_00000018;
  
  plVar6 = *(long **)(param_1 + 0x30);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac86240) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0941b438;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac86240,0);
LAB_0941b438:
  uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
  *(undefined8 *)(in_stack_00000018 + 0x18) = uVar2;
  thunk_FUN_049ee3d8();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 2;
  return 1;
}


