/*
FUNCTION_NAME: Unity.Netcode.NetworkVariableSerializationTypedInitializers$$InitializeSerializer_UnmanagedByMemcpy<Vector3>
ENTRY_POINT: 0362efd8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8
Unity_Netcode_NetworkVariableSerializationTypedInitializers__InitializeSerializer_UnmanagedByMemcpy<Vector3>
          (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_02d965b8(PTR_DAT_06a01128);
    FUN_02d965b8(PTR_DAT_069fb990);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_02dcfd74(param_2);
    }
  }
  puVar1 = PTR_DAT_069fb990;
  if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_06350670(param_1,0,0);
  if ((uVar3 & 1) == 0) {
    if (param_1 == 0) {
LAB_0362f100:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = FUN_0634ee08(param_1,0);
    puVar2 = PTR_DAT_06a01128;
    while( true ) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar3 = FUN_0634eb94(lVar4,0,0);
      if ((uVar3 & 1) == 0) break;
      if (lVar4 == 0) goto LAB_0362f100;
      uVar5 = FUN_0634bbcc(lVar4,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)puVar2);
      }
      uVar3 = FUN_0362e234(uVar5,**(undefined8 **)(param_2 + 0x38));
      if ((uVar3 & 1) != 0) {
        uVar5 = FUN_0634bbcc(lVar4,0);
        return uVar5;
      }
      lVar4 = thunk_FUN_0635e320(lVar4,0);
    }
  }
  return 0;
}


