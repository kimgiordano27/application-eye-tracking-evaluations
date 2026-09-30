/*
FUNCTION_NAME: OVRPlugin.OVRP_1_34_0$$ovrp_EnqueueSubmitLayer2
ENTRY_POINT: 0603dcd4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_34_0__ovrp_EnqueueSubmitLayer2(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  long unaff_x19;
  long unaff_x20;
  uint uVar13;
  long lVar14;
  long *in_stack_000000a0;
  ulong in_stack_000000a8;
  long *in_stack_000000b0;
  long *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long *in_stack_000000d0;
  ulong in_stack_000000d8;
  long *in_stack_000000e0;
  long *in_stack_000000e8;
  undefined8 in_stack_000000f0;
  
  FUN_031f20f4(*(undefined8 *)(param_1 + 0xcd0));
  FUN_031f20f4(PTR_DAT_075f2cd8);
  FUN_031f20f4(PTR_DAT_075f7cc8);
  *(undefined1 *)(unaff_x19 + 0xc74) = 1;
  in_stack_000000f0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = (long *)0x0;
  in_stack_000000e8 = (long *)0x0;
  in_stack_000000e0 = (long *)0x0;
  if ((unaff_x20 == 0) || (iVar5 = FUN_05813518(), iVar5 == 0)) {
    return 0;
  }
  uVar6 = FUN_05813518();
  lVar7 = FUN_031f21dc(*(undefined8 *)PTR_DAT_075f7cc8,uVar6);
  FUN_05813c78(&stack0x000000a0);
  puVar2 = PTR_DAT_075f2cc0;
  puVar1 = PTR_DAT_0759b388;
  uVar13 = 0;
  in_stack_000000d8 = in_stack_000000a8;
  in_stack_000000d0 = in_stack_000000a0;
  in_stack_000000e8 = in_stack_000000b8;
  in_stack_000000e0 = in_stack_000000b0;
  in_stack_000000f0 = in_stack_000000c0;
  do {
    uVar8 = FUN_05afc380(&stack0x000000d0,*(undefined8 *)puVar2);
    plVar4 = in_stack_000000e8;
    plVar3 = in_stack_000000e0;
    if ((uVar8 & 1) == 0) {
      FUN_05afc4a0(&stack0x000000d0,*(undefined8 *)PTR_DAT_075f2cb8);
      return lVar7;
    }
    if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar9 = thunk_FUN_03202440(in_stack_000000e8,0);
    lVar14 = *(long *)(puVar1 + 0x48);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar10 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar14 + 0x20,0);
    uVar8 = FUN_05e19a88(uVar9,uVar10,0);
    if ((uVar8 & 1) == 0) {
      uVar9 = thunk_FUN_03202440(plVar4,0);
      lVar14 = *(long *)(puVar1 + 0x90);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar10 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar14 + 0x20,0);
      uVar8 = FUN_05e19a88(uVar9,uVar10,0);
      if ((uVar8 & 1) == 0) {
        uVar9 = thunk_FUN_03202440(plVar4,0);
        lVar14 = *(long *)(puVar1 + 0x80);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar10 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar14 + 0x20,0);
        uVar8 = FUN_05e19a88(uVar9,uVar10,0);
        if ((uVar8 & 1) == 0) {
          thunk_FUN_03257e30(PTR_DAT_0759b3f0);
          uVar9 = thunk_FUN_0322f148();
          uVar10 = thunk_FUN_03257e30(PTR_DAT_075f7cd8);
          FUN_05e38b50(uVar9,uVar10,0);
          uVar10 = thunk_FUN_03257e30(PTR_DAT_075f7ce0);
                    /* WARNING: Subroutine does not return */
          FUN_031f225c(uVar9,uVar10);
        }
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = (long *)0x0;
        in_stack_000000b8 = (long *)0x0;
        in_stack_000000b0 = (long *)0x0;
        if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(puVar1 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2730(plVar4);
        }
        puVar12 = (undefined8 *)thunk_FUN_0322f29c(plVar4);
        uVar9 = *puVar12;
        in_stack_000000a0 = plVar3;
        thunk_FUN_0329bf60(&stack0x000000a0,plVar3);
        in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,2);
        in_stack_000000b0 = (long *)0x0;
        in_stack_000000c0 = uVar9;
        thunk_FUN_0329bf60(&stack0x000000b0,0);
        in_stack_000000b8 = (long *)((ulong)in_stack_000000b8 & 0xffffffff00000000);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        lVar14 = lVar7 + (long)(int)uVar13 * 0x28;
        *(undefined8 *)(lVar14 + 0x40) = in_stack_000000c0;
        *(ulong *)(lVar14 + 0x28) = in_stack_000000a8;
        *(long **)(lVar14 + 0x20) = in_stack_000000a0;
        *(long **)(lVar14 + 0x38) = in_stack_000000b8;
        *(long **)(lVar14 + 0x30) = in_stack_000000b0;
        thunk_FUN_0329bf60(lVar14 + 0x20,0);
      }
      else {
        in_stack_000000c0 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = (long *)0x0;
        in_stack_000000b8 = (long *)0x0;
        in_stack_000000b0 = (long *)0x0;
        if (*plVar4 != *(long *)(puVar1 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2730(plVar4);
        }
        in_stack_000000a0 = plVar3;
        thunk_FUN_0329bf60(&stack0x000000a0,plVar3);
        in_stack_000000a8 = in_stack_000000a8 & 0xffffffff00000000;
        in_stack_000000b0 = plVar4;
        thunk_FUN_0329bf60(&stack0x000000b0,plVar4);
        in_stack_000000b8 = (long *)((ulong)in_stack_000000b8 & 0xffffffff00000000);
        in_stack_000000c0 = 0;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        lVar14 = lVar7 + (long)(int)uVar13 * 0x28;
        *(undefined8 *)(lVar14 + 0x40) = 0;
        *(ulong *)(lVar14 + 0x28) = in_stack_000000a8;
        *(long **)(lVar14 + 0x20) = in_stack_000000a0;
        *(long **)(lVar14 + 0x38) = in_stack_000000b8;
        *(long **)(lVar14 + 0x30) = in_stack_000000b0;
        thunk_FUN_0329bf60(lVar14 + 0x20,0);
      }
    }
    else {
      in_stack_000000c0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000a0 = (long *)0x0;
      in_stack_000000b8 = (long *)0x0;
      in_stack_000000b0 = (long *)0x0;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)(puVar1 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2730(plVar4);
      }
      puVar11 = (undefined4 *)thunk_FUN_0322f29c(plVar4);
      uVar6 = *puVar11;
      in_stack_000000a0 = plVar3;
      thunk_FUN_0329bf60(&stack0x000000a0,plVar3);
      in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,1);
      in_stack_000000b8 = (long *)CONCAT44(in_stack_000000b8._4_4_,uVar6);
      in_stack_000000b0 = (long *)0x0;
      thunk_FUN_0329bf60(&stack0x000000b0,0);
      in_stack_000000c0 = 0;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      lVar14 = lVar7 + (long)(int)uVar13 * 0x28;
      *(undefined8 *)(lVar14 + 0x40) = 0;
      *(ulong *)(lVar14 + 0x28) = in_stack_000000a8;
      *(long **)(lVar14 + 0x20) = in_stack_000000a0;
      *(long **)(lVar14 + 0x38) = in_stack_000000b8;
      *(long **)(lVar14 + 0x30) = in_stack_000000b0;
      thunk_FUN_0329bf60(lVar14 + 0x20,0);
    }
    uVar13 = uVar13 + 1;
  } while( true );
}


