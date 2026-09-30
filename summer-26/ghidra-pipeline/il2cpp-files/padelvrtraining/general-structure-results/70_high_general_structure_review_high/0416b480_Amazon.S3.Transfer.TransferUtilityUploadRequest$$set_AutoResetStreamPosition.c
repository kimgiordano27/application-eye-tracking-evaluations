/*
FUNCTION_NAME: Amazon.S3.Transfer.TransferUtilityUploadRequest$$set_AutoResetStreamPosition
ENTRY_POINT: 0416b480
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Amazon_S3_Transfer_TransferUtilityUploadRequest__set_AutoResetStreamPosition
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  undefined8 in_stack_00000008;
  
  puVar3 = (undefined8 *)FUN_03d8f370(param_1,param_2,0);
  uVar4 = (*(code *)*puVar3)();
  *(undefined8 *)(unaff_x19 + 0x108) = uVar4;
  thunk_FUN_03d1023c(unaff_x19 + 0x108);
  puVar1 = PTR_DAT_091b06d0;
  plVar8 = *(long **)(unaff_x19 + 0x108);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091b0698) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0416b520;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_03d8f370(plVar8,*(long *)PTR_DAT_091b0698,0);
LAB_0416b520:
  uVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
  in_stack_00000008 = 0;
  FUN_05ed62b8(&stack0x00000008,uVar2,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000008;
  return;
}


