/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonArrayContract$$get_IsMultidimensionalArray
ENTRY_POINT: 08e6d5fc
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void Newtonsoft_Json_Serialization_JsonArrayContract__get_IsMultidimensionalArray
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 *unaff_x19;
  long *unaff_x27;
  undefined8 in_stack_00000028;
  
  puVar3 = (undefined8 *)FUN_04980e68(param_1,param_2,3);
  lVar4 = (*(code *)*puVar3)();
  if (lVar4 != 0) {
    in_stack_00000028 = FUN_07764808(lVar4,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar5 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000028;
      thunk_FUN_049ee3d8(unaff_x19 + 0x18,0);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_0548c400(unaff_x19 + 2,&stack0x00000028);
    }
    else {
      uVar6 = FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac0e258);
      uVar6 = FUN_05c7e4a8(uVar6,*(undefined8 *)PTR_DAT_0ac6d6d0);
      puVar2 = PTR_DAT_0ac6d6c8;
      iVar1 = *(int *)(*unaff_x27 + 0xe4);
      *unaff_x19 = 0xfffffffe;
      if (iVar1 == 0) {
        thunk_FUN_049a583c();
      }
      FUN_07b6c5d8(unaff_x19 + 2,uVar6,*(undefined8 *)puVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


