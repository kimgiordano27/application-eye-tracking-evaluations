/*
FUNCTION_NAME: ParadoxNotion.Serialization.FullSerializer.fsBaseConverter$$SerializeMember<Vector2>
ENTRY_POINT: 03d86fc0
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
ParadoxNotion_Serialization_FullSerializer_fsBaseConverter__SerializeMember<Vector2>(void)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x19;
  undefined8 uVar5;
  long *unaff_x21;
  
  thunk_FUN_02fdcff0();
  lVar2 = FUN_05afde1c();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  uVar3 = FUN_05b092bc(lVar2,0);
  if ((uVar3 & 1) == 0) {
    return 1;
  }
  uVar5 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  plVar4 = (long *)FUN_05afde1c(uVar5,0);
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06f98ef0 + 0x130);
    if (*(byte *)(*plVar4 + 0x130) < bVar1) {
      plVar4 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_06f98ef0) {
      plVar4 = (long *)0x0;
    }
  }
  uVar5 = thunk_FUN_02ff69f4(plVar4,0);
  return uVar5;
}


