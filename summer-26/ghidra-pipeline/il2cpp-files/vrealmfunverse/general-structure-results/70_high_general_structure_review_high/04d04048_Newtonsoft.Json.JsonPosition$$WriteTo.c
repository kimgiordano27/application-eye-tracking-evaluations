/*
FUNCTION_NAME: Newtonsoft.Json.JsonPosition$$WriteTo
ENTRY_POINT: 04d04048
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonPosition__WriteTo(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  *(undefined8 *)(param_1 + 0x90) = unaff_x20;
  thunk_FUN_02bb0e9c();
  lVar4 = FUN_04d8a7b0(*unaff_x23,0);
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0)) {
LAB_04d04234:
    uVar6 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar6,0);
  }
  puVar1 = PTR_DAT_0631e428;
  if ((*(uint *)(unaff_x19 + 3) & 0xfffffff0) != 0) {
    unaff_x19[0x13] = lVar4;
    thunk_FUN_02bb0e9c(unaff_x19 + 0x13,lVar4);
    lVar4 = FUN_04d8a7b0(*(undefined8 *)puVar1,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
    goto LAB_04d04234;
    if (0x10 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[0x14] = lVar4;
      thunk_FUN_02bb0e9c(unaff_x19 + 0x14,lVar4);
      lVar4 = FUN_04d8a7b0(*(long *)(unaff_x22 + 0x10) + 0x20,0);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
      goto LAB_04d04234;
      if (0x11 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[0x15] = lVar4;
        thunk_FUN_02bb0e9c(unaff_x19 + 0x15,lVar4);
        lVar4 = FUN_04d8a7b0(*(long *)(unaff_x22 + 0x90) + 0x20,0);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_02b79548(lVar4,*(undefined8 *)(*unaff_x19 + 0x40)), lVar5 == 0))
        goto LAB_04d04234;
        puVar3 = PTR_DAT_0632ff10;
        puVar2 = PTR_DAT_0632e6c8;
        puVar1 = PTR_DAT_0631c570;
        if (0x12 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[0x16] = lVar4;
          thunk_FUN_02bb0e9c(unaff_x19 + 0x16,lVar4);
          *(long **)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
          thunk_FUN_02bb0e9c();
          uVar6 = FUN_04d8a7b0(*(long *)(unaff_x22 + 0x98) + 0x20,0);
          puVar7 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
          *puVar7 = uVar6;
          thunk_FUN_02bb0e9c(puVar7,uVar6);
          uVar6 = FUN_02b3c908(*(undefined8 *)puVar1,0x41);
          FUN_04cac0f0(uVar6,*(undefined8 *)puVar3,0);
          puVar7 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x18);
          *puVar7 = uVar6;
          thunk_FUN_02bb0e9c(puVar7,uVar6);
          lVar4 = *(long *)puVar2;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar4 = *(long *)puVar2;
          }
          *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x20) = **(undefined8 **)(lVar4 + 0xb8);
          thunk_FUN_02bb0e9c();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


