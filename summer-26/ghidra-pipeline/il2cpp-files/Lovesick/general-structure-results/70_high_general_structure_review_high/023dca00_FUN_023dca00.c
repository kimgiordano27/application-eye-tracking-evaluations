/*
FUNCTION_NAME: FUN_023dca00
ENTRY_POINT: 023dca00
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_4
*/


void FUN_023dca00(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_24;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03782163 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<float>__ctor__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_IO_StreamWriter_Flush__);
    DAT_03782163 = 1;
  }
  local_24 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar2 = FUN_02681b9c(uVar4,0,0);
  puVar1 = Method_System_IO_StreamWriter_Flush__;
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    plVar3 = *(long **)(param_1 + 0x60);
    FUN_012cb720(*(long *)(param_1 + 0x68),&local_24,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<float>__ctor__);
    uVar4 = FUN_0178eaec(&local_24,*(undefined8 *)puVar1,0);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x5e8))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0x5f0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


