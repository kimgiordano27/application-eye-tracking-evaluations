/*
FUNCTION_NAME: Unity.Entities.Serialization.ManagedObjectBinaryWriter$$Unity.Serialization.Binary.IBinaryAdapter<UnityEngine.AnimationCurve>.Serialize
ENTRY_POINT: 06407330
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

void Unity_Entities_Serialization_ManagedObjectBinaryWriter__Unity_Serialization_Binary_IBinaryAdapter<UnityEngine_AnimationCurve>_Serialize
               (long *param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x20;
  undefined8 in_stack_00000028;
  
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_05ad0aa0(0);
  lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fdb0c8);
  FUN_0640a608();
  *unaff_x20 = lVar2;
  thunk_FUN_03048534();
  if (in_stack_00000028._4_1_ != '\0') {
    thunk_FUN_0301ce48();
  }
  puVar1 = PTR_DAT_06fd6540;
  if (*(int *)(*(long *)PTR_DAT_06fd6540 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_063f832c();
  if ((uVar3 & 1) == 0) {
    return;
  }
  plVar4 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6df38,2);
  if (plVar4 != (long *)0x0) {
    lVar2 = *unaff_x20;
    if ((lVar2 != 0) &&
       (lVar5 = thunk_FUN_03010710(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
LAB_06407570:
      uVar6 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                        ();
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar6,0);
    }
    if ((int)plVar4[3] != 0) {
      plVar4[4] = lVar2;
      thunk_FUN_03048534(plVar4 + 4,lVar2);
      if (*unaff_x20 == 0) goto LAB_06407568;
      lVar2 = *(long *)(*unaff_x20 + 0x20);
      if ((lVar2 != 0) &&
         (lVar5 = thunk_FUN_03010710(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_06407570;
      if (1 < *(uint *)(plVar4 + 3)) {
        plVar4[5] = lVar2;
        thunk_FUN_03048534(plVar4 + 5,lVar2);
        FUN_05a14548(*(undefined8 *)PTR_DAT_06fdb210,plVar4,0);
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
LAB_06407568:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


