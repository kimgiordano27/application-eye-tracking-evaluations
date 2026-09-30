/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$SerializeMember<Vector3>
ENTRY_POINT: 03d87b8c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_VisualScripting_FullSerializer_fsBaseConverter__SerializeMember<Vector3>(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long unaff_x19;
  undefined8 uVar7;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0x6a0));
  puVar6 = *(undefined8 **)(unaff_x19 + 0x38);
  if (puVar6 == (undefined8 *)0x0) {
    FUN_02feb320();
    puVar6 = *(undefined8 **)(unaff_x19 + 0x38);
  }
  puVar2 = PTR_DAT_06f6d6a0;
  uVar7 = *puVar6;
  if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar3 = FUN_05afde1c(uVar7,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  uVar4 = FUN_05b092bc(lVar3,0);
  if ((uVar4 & 1) == 0) {
    return 1;
  }
  uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  plVar5 = (long *)FUN_05afde1c(uVar7,0);
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06f98ef0 + 0x130);
    if (*(byte *)(*plVar5 + 0x130) < bVar1) {
      plVar5 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_06f98ef0) {
      plVar5 = (long *)0x0;
    }
  }
  uVar7 = thunk_FUN_02ff69f4(plVar5,0);
  return uVar7;
}


