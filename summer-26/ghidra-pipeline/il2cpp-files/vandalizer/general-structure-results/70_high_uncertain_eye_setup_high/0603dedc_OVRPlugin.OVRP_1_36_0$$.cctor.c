/*
FUNCTION_NAME: OVRPlugin.OVRP_1_36_0$$.cctor
ENTRY_POINT: 0603dedc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_36_0___cctor(ulong param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x21;
  undefined8 unaff_x22;
  uint unaff_w24;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined4 unaff_w27;
  long unaff_x28;
  undefined8 in_stack_000000a0;
  ulong in_stack_000000a8;
  long *in_stack_000000b0;
  ulong in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000e0;
  long *in_stack_000000e8;
  
  do {
    if ((param_1 & 1) == 0) {
      uVar3 = thunk_FUN_03202440(unaff_x21,0);
      lVar7 = *(long *)(unaff_x26 + 0x80);
      if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
      uVar2 = FUN_05e19a88(uVar3,uVar4,0);
      if ((uVar2 & 1) == 0) {
        thunk_FUN_03257e30(PTR_DAT_0759b3f0);
        uVar3 = thunk_FUN_0322f148();
        uVar4 = thunk_FUN_03257e30(PTR_DAT_075f7cd8);
        FUN_05e38b50(uVar3,uVar4,0);
        uVar4 = thunk_FUN_03257e30(PTR_DAT_075f7ce0);
                    /* WARNING: Subroutine does not return */
        FUN_031f225c(uVar3,uVar4);
      }
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = (long *)0x0;
      if (*(long *)(*unaff_x21 + 0x40) != *(long *)(*(long *)(unaff_x26 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2730(unaff_x21);
      }
      puVar6 = (undefined8 *)thunk_FUN_0322f29c(unaff_x21);
      uVar3 = *puVar6;
      in_stack_000000a0 = unaff_x22;
      thunk_FUN_0329bf60(&stack0x000000a0,unaff_x22);
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
      in_stack_000000b0 = (long *)0x0;
      in_stack_000000c0 = uVar3;
      thunk_FUN_0329bf60();
      in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      lVar7 = unaff_x19 + (int)unaff_w24 * unaff_x28;
      *(undefined8 *)(lVar7 + 0x40) = in_stack_000000c0;
      *(ulong *)(lVar7 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar7 + 0x20) = in_stack_000000a0;
      *(ulong *)(lVar7 + 0x38) = in_stack_000000b8;
      *(long **)(lVar7 + 0x30) = in_stack_000000b0;
      thunk_FUN_0329bf60(lVar7 + 0x20,0);
    }
    else {
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = (long *)0x0;
      if (*unaff_x21 != *(long *)(unaff_x26 + 0x90)) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2730(unaff_x21);
      }
      in_stack_000000a0 = unaff_x22;
      thunk_FUN_0329bf60(&stack0x000000a0,unaff_x22);
      in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
      in_stack_000000b0 = unaff_x21;
      thunk_FUN_0329bf60();
      in_stack_000000b8 = in_stack_000000b8 & 0xffffffff00000000;
      in_stack_000000c0 = 0;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      lVar7 = unaff_x19 + (int)unaff_w24 * unaff_x28;
      *(undefined8 *)(lVar7 + 0x40) = 0;
      *(ulong *)(lVar7 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar7 + 0x20) = in_stack_000000a0;
      *(ulong *)(lVar7 + 0x38) = in_stack_000000b8;
      *(long **)(lVar7 + 0x30) = in_stack_000000b0;
      thunk_FUN_0329bf60(lVar7 + 0x20,0);
    }
    while( true ) {
      unaff_w24 = unaff_w24 + 1;
      uVar2 = FUN_05afc380(&stack0x000000d0,*unaff_x25);
      unaff_x21 = in_stack_000000e8;
      unaff_x22 = in_stack_000000e0;
      if ((uVar2 & 1) == 0) {
        FUN_05afc4a0(&stack0x000000d0,*(undefined8 *)PTR_DAT_075f2cb8);
        return;
      }
      if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar3 = thunk_FUN_03202440(in_stack_000000e8,0);
      lVar7 = *(long *)(unaff_x26 + 0x48);
      if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
      uVar2 = FUN_05e19a88(uVar3,uVar4,0);
      if ((uVar2 & 1) == 0) break;
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = (long *)0x0;
      if (*(long *)(*unaff_x21 + 0x40) != *(long *)(*(long *)(unaff_x26 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2730(unaff_x21);
      }
      puVar5 = (undefined4 *)thunk_FUN_0322f29c(unaff_x21);
      uVar1 = *puVar5;
      in_stack_000000a0 = unaff_x22;
      thunk_FUN_0329bf60(&stack0x000000a0,unaff_x22);
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,unaff_w27);
      in_stack_000000b8 = CONCAT44(in_stack_000000b8._4_4_,uVar1);
      in_stack_000000b0 = (long *)0x0;
      thunk_FUN_0329bf60();
      in_stack_000000c0 = 0;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      lVar7 = unaff_x19 + (int)unaff_w24 * unaff_x28;
      *(undefined8 *)(lVar7 + 0x40) = 0;
      *(ulong *)(lVar7 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar7 + 0x20) = in_stack_000000a0;
      *(ulong *)(lVar7 + 0x38) = in_stack_000000b8;
      *(long **)(lVar7 + 0x30) = in_stack_000000b0;
      thunk_FUN_0329bf60(lVar7 + 0x20,0);
    }
    uVar3 = thunk_FUN_03202440(unaff_x21,0);
    lVar7 = *(long *)(unaff_x26 + 0x90);
    if (*(int *)(*(long *)(unaff_x26 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
    param_1 = FUN_05e19a88(uVar3,uVar4,0);
  } while( true );
}


