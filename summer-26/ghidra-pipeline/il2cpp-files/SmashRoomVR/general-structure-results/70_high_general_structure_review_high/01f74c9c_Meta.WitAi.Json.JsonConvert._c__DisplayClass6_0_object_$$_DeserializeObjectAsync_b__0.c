/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert.<>c__DisplayClass6_0<object>$$<DeserializeObjectAsync>b__0
ENTRY_POINT: 01f74c9c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
Meta_WitAi_Json_JsonConvert_<>c__DisplayClass6_0<object>__<DeserializeObjectAsync>b__0
          (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          long param_6)

{
  ulong uVar1;
  void *__src;
  long lVar2;
  void *unaff_x19;
  long unaff_x20;
  ulong __n;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x27;
  long unaff_x29;
  undefined1 auVar5 [16];
  
  lVar2 = *(long *)(param_6 + 0x38);
  if (lVar2 == 0) {
    thunk_FUN_01ad9084(StringLiteral_2837);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_2838);
    thunk_FUN_01ad9084(StringLiteral_2839);
    thunk_FUN_01ad9084(StringLiteral_2840);
    lVar2 = *(long *)(unaff_x20 + 0x38);
    if (lVar2 == 0) {
      FUN_01ae9ed0();
      lVar2 = *(long *)(unaff_x20 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar2 + 8) + 0xfc);
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined8 *)(unaff_x29 + -0x10) = 0;
  if (param_2 != 0) {
    uVar1 = FUN_025bddd0(param_2);
    if ((uVar1 & 1) == 0) {
      memset(unaff_x19,0,__n);
      uVar3 = FUN_02ee6c30(*(undefined8 *)StringLiteral_2838);
      if (*(int *)(*(long *)StringLiteral_2840 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)StringLiteral_2840);
      }
      auVar5 = FUN_037d0e00(uVar3,0);
    }
    else {
      *(undefined8 *)(unaff_x29 + -0x18) = 0;
      lVar2 = *(long *)(param_1 + 0x10);
      uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x10);
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_0304eec0(uVar4,0);
      if (lVar2 == 0) goto LAB_01f74eac;
      auVar5 = FUN_037e7680(lVar2,uVar3,uVar4,param_3,unaff_x29 + -0x18,0);
      uVar3 = *(undefined8 *)(unaff_x29 + -0x18);
      lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ae9e74(lVar2);
      }
      __src = (void *)FUN_01b48074(uVar3,lVar2,(long)&stack0x00000000 - (__n + 0xf & 0x1fffffff0));
      memcpy(unaff_x19,__src,__n);
      if ((*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 8) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      FUN_01b47ef0();
    }
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return auVar5;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_01f74eac:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


