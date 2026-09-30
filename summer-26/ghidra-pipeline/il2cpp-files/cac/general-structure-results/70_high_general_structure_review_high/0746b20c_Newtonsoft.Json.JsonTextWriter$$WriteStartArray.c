/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteStartArray
ENTRY_POINT: 0746b20c
PROGRAM: cac-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_4;frame_or_lifecycle_behavior
*/


void Newtonsoft_Json_JsonTextWriter__WriteStartArray
               (ulong param_1,long param_2,long *param_3,long param_4,int param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint unaff_w22;
  long unaff_x24;
  long *plVar7;
  long unaff_x25;
  
  plVar7 = *(long **)(unaff_x24 + 0x560);
  if ((param_1 & 1) == 0) {
    FUN_03f13384(PTR_DAT_0910b560);
    FUN_03f13384(PTR_DAT_09131d60);
    *(undefined1 *)(unaff_x25 + 0x134) = 1;
  }
  if (*(int *)(*plVar7 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  if (DAT_0968d894 == '\0') {
    FUN_03f13384(PTR_DAT_0910b560);
    DAT_0968d894 = '\x01';
  }
  puVar1 = PTR_DAT_09131d60;
  lVar2 = *plVar7;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
    lVar2 = *plVar7;
  }
  *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x30);
  thunk_FUN_03f86000();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  FUN_074711c8(param_2,0,0);
  if ((param_3 != (long *)0x0) && (param_4 != 0)) {
    uVar3 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
    if ((uVar3 & 1) == 0) {
      thunk_FUN_03f786f8(PTR_DAT_0910e988);
      uVar4 = thunk_FUN_03f4e68c();
      uVar5 = thunk_FUN_03f786f8(PTR_DAT_09129da0);
      FUN_07419a00(uVar4,uVar5,0);
    }
    else {
      if (0 < param_5) {
        FUN_0746b40c(param_2,param_3,param_4,param_5,unaff_w22 & 1);
        return;
      }
      thunk_FUN_03f786f8(PTR_DAT_0910bbd0);
      uVar4 = thunk_FUN_03f4e68c();
      uVar5 = thunk_FUN_03f786f8(PTR_DAT_09123e50);
      uVar6 = thunk_FUN_03f786f8(PTR_DAT_0912e890);
      FUN_07416834(uVar4,uVar5,uVar6,0);
    }
    uVar5 = thunk_FUN_03f786f8(PTR_DAT_09131d68);
                    /* WARNING: Subroutine does not return */
    FUN_03f134f0(uVar4,uVar5);
  }
  puVar1 = PTR_DAT_09129da8;
  if (param_3 != (long *)0x0) {
    puVar1 = PTR_DAT_0911d020;
  }
  uVar5 = thunk_FUN_03f786f8(puVar1);
  thunk_FUN_03f786f8(PTR_DAT_0910e1d8);
  uVar4 = thunk_FUN_03f4e68c();
  FUN_0740f0b8(uVar4,uVar5,0);
  uVar5 = thunk_FUN_03f786f8(PTR_DAT_09131d68);
                    /* WARNING: Subroutine does not return */
  FUN_03f134f0(uVar4,uVar5);
}


