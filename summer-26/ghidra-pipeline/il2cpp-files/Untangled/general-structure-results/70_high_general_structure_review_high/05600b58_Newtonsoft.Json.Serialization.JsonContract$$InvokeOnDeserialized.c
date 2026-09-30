/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$InvokeOnDeserialized
ENTRY_POINT: 05600b58
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint Newtonsoft_Json_Serialization_JsonContract__InvokeOnDeserialized
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long unaff_x26;
  long unaff_x27;
  long *plVar7;
  long unaff_x28;
  long unaff_x29;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  *(undefined8 *)(unaff_x29 + -0x18) = param_1;
  plVar7 = *(long **)(unaff_x27 + 0x298);
  if ((*(byte *)(unaff_x26 + 0xcba) & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d4e298);
    FUN_02f07e70(PTR_DAT_06d18930);
    FUN_02f07e70(PTR_DAT_06d486e0);
    *(undefined1 *)(unaff_x26 + 0xcba) = 1;
  }
  lVar3 = *plVar7;
  *(undefined4 *)(unaff_x29 + -0xa4) = 0;
  *(undefined8 *)(unaff_x29 + -0x2e) = 0;
  *(undefined8 *)(unaff_x29 + -0x36) = 0;
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
  *(undefined8 *)(unaff_x29 + -200) = 0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 0;
  *(undefined8 *)(unaff_x29 + -0xb8) = 0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 0;
  if ((param_2 < 0) || ((int)param_4 != 0)) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar2 = FUN_05604968(param_3,param_4,unaff_x29 + -0xa4);
    lVar3 = FUN_055b21bc(param_5,0);
    iVar5 = *(int *)(unaff_x29 + -0xa4);
    if (((uVar2 & 0xffdf) != 0x44) && ((uVar2 & 0xffdf) != 0x47 || 0 < iVar5)) {
      if ((uVar2 & 0xffdf) == 0x58) {
        if (*(int *)(*plVar7 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        uVar2 = FUN_056091e4(param_2,uVar2 - 0x21,iVar5,param_6);
      }
      else {
        lVar4 = *plVar7;
        *(undefined8 *)(unaff_x29 + -0x2e) = 0;
        *(undefined8 *)(unaff_x29 + -0x36) = 0;
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
        FUN_05608aec(param_2,unaff_x29 + -0xa0);
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
          if (*(int *)(*plVar7 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_05605278(unaff_x29 + -0xd0,unaff_x29 + -0xa0,param_3,param_4,
                       *(undefined8 *)(unaff_x29 + -0xe0));
        }
        else {
          if (*(int *)(*plVar7 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_05604ce8(unaff_x29 + -0xd0,unaff_x29 + -0xa0,uVar2,iVar5,
                       *(undefined8 *)(unaff_x29 + -0xe0),0);
        }
        uVar2 = System_IO_Stream_NullStream__get_Position(unaff_x29 + -0xd0,param_6);
      }
      goto LAB_05600cb4;
    }
    if (param_2 < 0) {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar6 = *(undefined8 *)(lVar3 + 0x30);
      if (*(int *)(*plVar7 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar2 = FUN_05608f18(param_2,iVar5,uVar6,param_6);
      goto LAB_05600cb4;
    }
    if (*(int *)(*plVar7 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
  }
  else {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    iVar5 = -1;
  }
  uVar2 = FUN_05608c94(param_2,iVar5,param_6);
LAB_05600cb4:
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}


