/*
FUNCTION_NAME: Newtonsoft.Json.JsonValidatingReader$$ValidateEndArray
ENTRY_POINT: 058e5e88
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined2 Newtonsoft_Json_JsonValidatingReader__ValidateEndArray(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x20;
  uint unaff_w21;
  uint uVar6;
  uint unaff_w22;
  uint unaff_w23;
  long unaff_x24;
  
  while (iVar1 = FUN_057a933c(), iVar1 != 0) {
    uVar6 = unaff_w22;
    if (iVar1 < 0) {
      uVar6 = unaff_w21;
      unaff_w23 = unaff_w22;
    }
    if ((int)(unaff_w23 - uVar6) < 4) goto LAB_058e5f0c;
    lVar2 = *unaff_x20;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x20;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_058e5fa8;
    unaff_w22 = uVar6 + (unaff_w23 - uVar6 >> 1);
    if (*(uint *)(**(long **)(lVar2 + 0xb8) + 0x18) <= unaff_w22) goto LAB_058e5fac;
    unaff_x24 = (long)(int)unaff_w22;
    unaff_w21 = uVar6;
  }
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x20;
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  if (lVar2 == 0) {
LAB_058e5fa8:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  if (*(uint *)(lVar2 + 0x18) <= unaff_w22) {
LAB_058e5fac:
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
  lVar2 = lVar2 + unaff_x24 * 0x10;
LAB_058e5f90:
  return *(undefined2 *)(lVar2 + 0x28);
LAB_058e5f0c:
  if ((int)unaff_w23 < (int)uVar6) {
    thunk_FUN_032e1da0(PTR_DAT_07280380);
    FUN_02d9d3e0();
    uVar3 = FUN_058e6040();
    uVar4 = thunk_FUN_032e1da0(PTR_DAT_07298938);
    uVar4 = FUN_05966098(uVar4,0);
    uVar3 = FUN_057ab74c(uVar3,uVar4);
    thunk_FUN_032e1da0(PTR_DAT_0727dd40);
    uVar4 = thunk_FUN_032a56a0();
    uVar5 = thunk_FUN_032e1da0(PTR_DAT_07280168);
    FUN_05897d8c(uVar4,uVar3,uVar5,0);
    uVar3 = thunk_FUN_032e1da0(PTR_DAT_07298940);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar4,uVar3);
  }
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x20;
  }
  if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_058e5fa8;
  if (*(uint *)(**(long **)(lVar2 + 0xb8) + 0x18) <= uVar6) goto LAB_058e5fac;
  iVar1 = FUN_057a933c();
  if (iVar1 == 0) {
    lVar2 = *unaff_x20;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x20;
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
    if (lVar2 == 0) goto LAB_058e5fa8;
    if (*(uint *)(lVar2 + 0x18) <= uVar6) goto LAB_058e5fac;
    lVar2 = lVar2 + (long)(int)uVar6 * 0x10;
    goto LAB_058e5f90;
  }
  uVar6 = uVar6 + 1;
  goto LAB_058e5f0c;
}


