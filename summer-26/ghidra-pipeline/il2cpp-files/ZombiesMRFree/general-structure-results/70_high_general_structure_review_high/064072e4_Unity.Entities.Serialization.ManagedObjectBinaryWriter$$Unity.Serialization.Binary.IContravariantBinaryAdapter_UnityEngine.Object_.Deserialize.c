/*
FUNCTION_NAME: Unity.Entities.Serialization.ManagedObjectBinaryWriter$$Unity.Serialization.Binary.IContravariantBinaryAdapter<UnityEngine.Object>.Deserialize
ENTRY_POINT: 064072e4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0640744c) */
/* WARNING: Removing unreachable block (ram,0x0640757c) */

void Unity_Entities_Serialization_ManagedObjectBinaryWriter__Unity_Serialization_Binary_IContravariantBinaryAdapter<UnityEngine_Object>_Deserialize
               (void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x20;
  long unaff_x24;
  undefined8 in_stack_00000028;
  
  plVar2 = *(long **)(unaff_x24 + 0xa0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
  }
  plVar2 = *(long **)(unaff_x24 + 0xa8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
  }
  plVar2 = *(long **)(unaff_x24 + 0xb0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
  }
  lVar3 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fdb0c8);
  FUN_0640a608();
  *unaff_x20 = lVar3;
  thunk_FUN_03048534();
  if (in_stack_00000028._4_1_ != '\0') {
    thunk_FUN_0301ce48();
  }
  puVar1 = PTR_DAT_06fd6540;
  if (*(int *)(*(long *)PTR_DAT_06fd6540 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar4 = FUN_063f832c();
  if ((uVar4 & 1) == 0) {
    return;
  }
  plVar2 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6df38,2);
  if (plVar2 == (long *)0x0) {
LAB_06407568:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar3 = *unaff_x20;
  if ((lVar3 != 0) &&
     (lVar5 = thunk_FUN_03010710(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0)) {
LAB_06407570:
    uVar6 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                      ();
                    /* WARNING: Subroutine does not return */
    FUN_02fe93c0(uVar6,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    thunk_FUN_03048534(plVar2 + 4,lVar3);
    if (*unaff_x20 == 0) goto LAB_06407568;
    lVar3 = *(long *)(*unaff_x20 + 0x20);
    if ((lVar3 != 0) &&
       (lVar5 = thunk_FUN_03010710(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar5 == 0))
    goto LAB_06407570;
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = lVar3;
      thunk_FUN_03048534(plVar2 + 5,lVar3);
      FUN_05a14548(*(undefined8 *)PTR_DAT_06fdb210,plVar2,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)puVar1);
      }
      FUN_063f8390();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


