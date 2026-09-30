/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert.<>c__DisplayClass6_0<object>$$<DeserializeObjectAsync>b__1
ENTRY_POINT: 01f74d20
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
Meta_WitAi_Json_JsonConvert_<>c__DisplayClass6_0<object>__<DeserializeObjectAsync>b__1(void)

{
  ulong uVar1;
  void *__src;
  void *unaff_x19;
  long unaff_x20;
  size_t unaff_x22;
  long lVar2;
  long unaff_x25;
  undefined8 uVar3;
  long unaff_x26;
  undefined8 uVar4;
  long unaff_x27;
  long unaff_x29;
  undefined1 auVar5 [16];
  
  if (unaff_x26 != 0) {
    uVar1 = FUN_025bddd0();
    if ((uVar1 & 1) == 0) {
      memset(unaff_x19,0,unaff_x22);
      uVar3 = FUN_02ee6c30(*(undefined8 *)StringLiteral_2838);
      if (*(int *)(*(long *)StringLiteral_2840 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)StringLiteral_2840);
      }
      auVar5 = FUN_037d0e00(uVar3,0);
    }
    else {
      *(undefined8 *)(unaff_x29 + -0x18) = 0;
      lVar2 = *(long *)(unaff_x25 + 0x10);
      uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x10);
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_0304eec0(uVar4,0);
      if (lVar2 == 0) goto LAB_01f74eac;
      auVar5 = FUN_037e7680(lVar2,uVar3,uVar4);
      uVar3 = *(undefined8 *)(unaff_x29 + -0x18);
      lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ae9e74(lVar2);
      }
      __src = (void *)FUN_01b48074(uVar3,lVar2);
      memcpy(unaff_x19,__src,unaff_x22);
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


