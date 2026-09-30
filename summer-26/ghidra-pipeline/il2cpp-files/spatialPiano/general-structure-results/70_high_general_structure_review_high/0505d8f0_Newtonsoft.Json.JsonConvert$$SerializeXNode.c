/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXNode
ENTRY_POINT: 0505d8f0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__SerializeXNode(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long lVar2;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = param_2;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
Newtonsoft_Json_JsonException___ctor:
    if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_0505dfb0;
  }
  if (0xc < *(uint *)(lVar2 + 0x18)) {
    if (*(long *)(lVar2 + 0x80) == unaff_x22) {
      uVar1 = FUN_02a830c8(10,*unaff_x24);
      in_stack_00000008 = uVar1;
      uVar1 = *(undefined8 *)(PTR_DAT_067c9338 + 0x70);
LAB_0505dd64:
      auVar4 = thunk_FUN_02f44ec4(uVar1,&stack0x00000008);
      unaff_x21 = auVar4._0_8_;
LAB_0505dd6c:
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
        return unaff_x21;
      }
      goto LAB_0505dfb0;
    }
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      param_2 = *unaff_x25;
      auVar4._8_8_ = extraout_x1;
      auVar4._0_8_ = param_2;
      lVar2 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
      param_3 = extraout_x1;
      if (lVar2 == 0) goto Newtonsoft_Json_JsonException___ctor;
    }
    auVar4._8_8_ = param_3;
    auVar4._0_8_ = param_2;
    if (0xd < *(uint *)(lVar2 + 0x18)) {
      if (*(long *)(lVar2 + 0x88) == unaff_x22) {
        uVar3 = FUN_02a830c8(0xb,*unaff_x24);
        in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar3);
        uVar1 = *(undefined8 *)(PTR_DAT_067c9338 + 0x78);
        goto LAB_0505dd64;
      }
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        param_2 = *unaff_x25;
        auVar4._8_8_ = extraout_x1_00;
        auVar4._0_8_ = param_2;
        lVar2 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
        param_3 = extraout_x1_00;
        if (lVar2 == 0) goto Newtonsoft_Json_JsonException___ctor;
      }
      auVar4._8_8_ = param_3;
      auVar4._0_8_ = param_2;
      if (*(uint *)(lVar2 + 0x18) < 0xf) goto LAB_0505df34;
      if (*(long *)(lVar2 + 0x90) == unaff_x22) {
        uVar1 = FUN_02a830c8(0xc,*unaff_x24);
        in_stack_00000008 = uVar1;
        uVar1 = *(undefined8 *)(PTR_DAT_067c9338 + 0x80);
        goto LAB_0505dd64;
      }
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        param_2 = *unaff_x25;
        auVar4._8_8_ = extraout_x1_01;
        auVar4._0_8_ = param_2;
        lVar2 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
        param_3 = extraout_x1_01;
        if (lVar2 == 0) goto Newtonsoft_Json_JsonException___ctor;
      }
      auVar4._8_8_ = param_3;
      auVar4._0_8_ = param_2;
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffff0) == 0) goto LAB_0505df34;
      if (*(long *)(lVar2 + 0x98) == unaff_x22) {
        _in_stack_00000008 = FUN_02a830c8(0xd,*unaff_x24);
        uVar1 = *(undefined8 *)PTR_DAT_067c9990;
        goto LAB_0505dd64;
      }
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        param_2 = *unaff_x25;
        auVar4._8_8_ = extraout_x1_02;
        auVar4._0_8_ = param_2;
        lVar2 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
        param_3 = extraout_x1_02;
        if (lVar2 == 0) goto Newtonsoft_Json_JsonException___ctor;
      }
      auVar4._8_8_ = param_3;
      auVar4._0_8_ = param_2;
      if (*(uint *)(lVar2 + 0x18) < 0x11) goto LAB_0505df34;
      if (*(long *)(lVar2 + 0xa0) == unaff_x22) {
        uVar1 = FUN_02a830c8(0xe,*unaff_x24);
        in_stack_00000008 = uVar1;
        uVar1 = *(undefined8 *)PTR_DAT_067c9980;
        goto LAB_0505dd64;
      }
      if (*(int *)(param_2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        param_2 = *unaff_x25;
        auVar4._8_8_ = extraout_x1_03;
        auVar4._0_8_ = param_2;
        lVar2 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
        param_3 = extraout_x1_03;
        if (lVar2 == 0) goto Newtonsoft_Json_JsonException___ctor;
      }
      auVar4._8_8_ = param_3;
      auVar4._0_8_ = param_2;
      if (0x12 < *(uint *)(lVar2 + 0x18)) {
        if (*(long *)(lVar2 + 0xb0) == unaff_x22) {
          auVar4._8_8_ = *unaff_x24;
          if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
            uVar1 = FUN_02a830c8(0xf,*unaff_x24);
            return uVar1;
          }
          goto LAB_0505dfb0;
        }
        if (*(int *)(param_2 + 0xe4) == 0) {
          auVar4 = thunk_FUN_02f6670c();
          lVar2 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 8);
          if (lVar2 == 0) goto Newtonsoft_Json_JsonException___ctor;
        }
        uVar1 = auVar4._0_8_;
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
          if (*(long *)(lVar2 + 0x28) != unaff_x22) {
            auVar4._8_8_ = *unaff_x24;
            auVar4._0_8_ = uVar1;
            if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
              uVar1 = FUN_02b01fe0(0x10);
              return uVar1;
            }
            goto LAB_0505dfb0;
          }
          goto LAB_0505dd6c;
        }
      }
    }
  }
LAB_0505df34:
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
LAB_0505dfb0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar4._0_8_,auVar4._8_8_);
}


