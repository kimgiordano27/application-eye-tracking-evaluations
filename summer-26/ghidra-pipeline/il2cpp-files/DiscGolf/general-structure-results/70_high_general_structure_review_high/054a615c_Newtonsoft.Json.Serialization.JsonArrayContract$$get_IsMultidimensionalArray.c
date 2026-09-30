/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonArrayContract$$get_IsMultidimensionalArray
ENTRY_POINT: 054a615c
PROGRAM: DiscGolf-libil2cpp.so
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
               (ulong param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int unaff_w20;
  long unaff_x21;
  long unaff_x23;
  undefined8 uStack0000000000000000;
  long lStack0000000000000008;
  
  uStack0000000000000000 = param_3;
  lStack0000000000000008 = param_2;
  if ((param_1 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a21290);
    *(undefined1 *)(unaff_x23 + 0xc46) = 1;
  }
  puVar2 = PTR_DAT_06a21290;
  if (param_2 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar3 = thunk_FUN_02dd3144();
    puVar2 = PTR_DAT_06a0dcf8;
  }
  else {
    if (unaff_x21 != 0) {
      if (*(int *)(*(long *)PTR_DAT_06a21290 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_054c26ec(&stack0x00000008);
      lVar1 = lStack0000000000000008;
      uVar3 = uStack0000000000000000;
      if (unaff_w20 == 3) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_054c3688(lVar1,uVar3);
        return;
      }
      if (unaff_w20 == 2) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_054c348c(lVar1,uVar3);
        return;
      }
      if (unaff_w20 == 1) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_054c3290(lVar1,uVar3);
        return;
      }
      thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
      uVar3 = thunk_FUN_02dd3144();
      uVar4 = thunk_FUN_02dfd288(PTR_DAT_06a212a8);
      FUN_05453f78(uVar3,uVar4,0);
      goto LAB_054a62ac;
    }
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar3 = thunk_FUN_02dd3144();
    puVar2 = PTR_DAT_06a21298;
  }
  uVar4 = thunk_FUN_02dfd288(puVar2);
  FUN_0544bf54(uVar3,uVar4,0);
LAB_054a62ac:
  uVar4 = thunk_FUN_02dfd288(PTR_DAT_06a212a0);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar3,uVar4);
}


