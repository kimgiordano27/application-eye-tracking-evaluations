/*
FUNCTION_NAME: FUN_026c75cc
ENTRY_POINT: 026c75cc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void FUN_026c75cc(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_03786f9b & 1) == 0) {
    thunk_FUN_00d48444(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<ulong>__);
    thunk_FUN_00d48444(System_Dynamic_ExpandoClass_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_InputSystem_AttitudeSensor_var);
    thunk_FUN_00d48444(Polenter_Serialization_Advanced_Binary_IBinaryWriter_TypeInfo);
    DAT_03786f9b = 1;
  }
  puVar3 = Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<ulong>__;
  puVar2 = System_Dynamic_ExpandoClass_TypeInfo;
  puVar1 = UnityEngine_InputSystem_AttitudeSensor_var;
  uStack_58 = 0;
  local_50 = 0;
  local_60 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_01323390(*(long *)(param_1 + 0x10),&local_78,
                 *(undefined8 *)Polenter_Serialization_Advanced_Binary_IBinaryWriter_TypeInfo);
    uStack_58 = uStack_70;
    local_60 = local_78;
    local_50 = local_68;
    while( true ) {
      uVar4 = FUN_012b894c(&local_60,*(undefined8 *)puVar2);
      if ((uVar4 & 1) == 0) {
        FUN_012b8948(&local_60,*(undefined8 *)puVar3);
        return;
      }
      lVar5 = FUN_00cdb708(&local_60,*(undefined8 *)puVar1);
      if (lVar5 == 0) break;
      uVar4 = FUN_026c6b54(lVar5);
      if (((uVar4 & 1) != 0) && (lVar5 = FUN_026c6b90(lVar5,param_3), lVar5 != 0)) {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_026c777c(param_2);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


