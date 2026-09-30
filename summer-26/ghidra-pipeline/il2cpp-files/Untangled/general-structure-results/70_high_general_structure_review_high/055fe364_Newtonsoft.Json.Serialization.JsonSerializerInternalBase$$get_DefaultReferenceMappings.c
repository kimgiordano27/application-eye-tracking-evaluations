/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$get_DefaultReferenceMappings
ENTRY_POINT: 055fe364
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalBase__get_DefaultReferenceMappings
               (undefined1 param_1 [16],long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long unaff_x19;
  int unaff_w22;
  int unaff_w23;
  undefined8 uVar6;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  uVar7 = param_1._8_8_;
  uVar6 = param_1._0_8_;
  *(undefined8 *)(unaff_x29 + -0x48) = uVar7;
  *(undefined8 *)(unaff_x29 + -0x50) = uVar6;
  *(undefined8 *)(unaff_x29 + -0x38) = uVar7;
  *(undefined8 *)(unaff_x29 + -0x40) = uVar6;
  *(undefined8 *)(unaff_x29 + -0x68) = uVar7;
  *(undefined8 *)(unaff_x29 + -0x70) = uVar6;
  *(undefined8 *)(unaff_x29 + -0x58) = uVar7;
  *(undefined8 *)(unaff_x29 + -0x60) = uVar6;
  *(undefined8 *)(unaff_x29 + -0x88) = uVar7;
  *(undefined8 *)(unaff_x29 + -0x90) = uVar6;
  *(undefined8 *)(unaff_x29 + -0x78) = uVar7;
  *(undefined8 *)(unaff_x29 + -0x80) = uVar6;
  *(undefined8 *)(unaff_x29 + -0x98) = uVar7;
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar6;
  *(undefined8 *)(unaff_x29 + -200) = uVar7;
  *(undefined8 *)(unaff_x29 + -0xd0) = uVar6;
  *(undefined8 *)(unaff_x29 + -0xb8) = uVar7;
  *(undefined8 *)(unaff_x29 + -0xc0) = uVar6;
  if ((unaff_w22 < 0) || (unaff_w23 != 0)) {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar2 = FUN_05604968();
    lVar3 = FUN_055b21bc();
    iVar5 = *(int *)(unaff_x29 + -0xa4);
    if (((uVar2 & 0xffdf) != 0x44) && ((uVar2 & 0xffdf) != 0x47 || 0 < iVar5)) {
      if ((uVar2 & 0xffdf) == 0x58) {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar2 = FUN_05608290(unaff_w22,uVar2 - 0x21,iVar5);
      }
      else {
        lVar4 = *unaff_x27;
        *(undefined8 *)(unaff_x19 + 0x72) = 0;
        *(undefined8 *)(unaff_x19 + 0x6a) = 0;
        *(undefined8 *)(unaff_x29 + -0x48) = 0;
        *(undefined8 *)(unaff_x29 + -0x50) = 0;
        *(undefined8 *)(unaff_x29 + -0x38) = 0;
        *(undefined8 *)(unaff_x29 + -0x40) = 0;
        *(undefined8 *)(unaff_x29 + -0x68) = 0;
        *(undefined8 *)(unaff_x29 + -0x70) = 0;
        *(undefined8 *)(unaff_x29 + -0x58) = 0;
        *(undefined8 *)(unaff_x29 + -0x60) = 0;
        *(undefined8 *)(unaff_x29 + -0x88) = 0;
        *(undefined8 *)(unaff_x29 + -0x90) = 0;
        *(undefined8 *)(unaff_x29 + -0x78) = 0;
        *(undefined8 *)(unaff_x29 + -0x80) = 0;
        *(undefined8 *)(unaff_x29 + -0x98) = 0;
        *(undefined8 *)(unaff_x29 + -0xa0) = 0;
        iVar1 = *(int *)(lVar4 + 0xe0);
        *(long *)(unaff_x29 + -0xe0) = lVar3;
        if (iVar1 == 0) {
          thunk_FUN_02f12b58();
        }
        FUN_056102bc(unaff_w22,unaff_x29 + -0xa0,0);
        uStack_18 = 0;
        uStack_20 = 0;
        uStack_8 = 0;
        uStack_10 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        uStack_28 = 0;
        uStack_30 = 0;
        FUN_05483054(unaff_x29 + -0xd0,&uStack_40,0x20,0);
        if ((uVar2 & 0xffff) == 0) {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_05605278(unaff_x29 + -0xd0,unaff_x29 + -0xa0);
        }
        else {
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_05604ce8(unaff_x29 + -0xd0,unaff_x29 + -0xa0,uVar2,iVar5,
                       *(undefined8 *)(unaff_x29 + -0xe0),0);
        }
        uVar2 = System_IO_Stream_NullStream__get_Position(unaff_x29 + -0xd0);
      }
      goto LAB_055fe45c;
    }
    if (unaff_w22 < 0) {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar6 = *(undefined8 *)(lVar3 + 0x30);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar2 = FUN_056080a8(unaff_w22,iVar5,uVar6);
      goto LAB_055fe45c;
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
  }
  else {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    iVar5 = -1;
  }
  uVar2 = FUN_05607ee4(unaff_w22,iVar5);
LAB_055fe45c:
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}


