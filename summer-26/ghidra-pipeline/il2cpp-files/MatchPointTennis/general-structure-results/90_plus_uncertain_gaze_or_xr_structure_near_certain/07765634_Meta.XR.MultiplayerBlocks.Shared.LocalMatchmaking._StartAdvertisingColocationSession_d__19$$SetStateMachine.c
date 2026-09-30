/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartAdvertisingColocationSession>d__19$$SetStateMachine
ENTRY_POINT: 07765634
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartAdvertisingColocationSession>d__19__SetStateMachine
               (void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int in_w8;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  undefined4 *unaff_x25;
  long lVar5;
  long unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000b0;
  float fStack00000000000000b8;
  uint uStack00000000000000bc;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  int iStack00000000000000d0;
  int iStack00000000000000d4;
  
  do {
    if (3 < in_w8) {
      lVar2 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,0x10);
      if (lVar2 == 0) goto LAB_07765a28;
      if (*(int *)(lVar2 + 0x18) == 0) {
LAB_07765a24:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_09f32df8;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x20));
      uVar3 = FUN_07a3b850((long)&stack0x000000b8 + 4,0);
      if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_07765a24;
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x28),uVar3);
      if (*(uint *)(lVar2 + 0x18) < 3) goto LAB_07765a24;
      *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)PTR_DAT_09f32db0;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x30));
      uVar3 = FUN_07a3b850(unaff_x25,0);
      if (*(uint *)(lVar2 + 0x18) < 4) goto LAB_07765a24;
      *(undefined8 *)(lVar2 + 0x38) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x38),uVar3);
      if (*(uint *)(lVar2 + 0x18) < 5) goto LAB_07765a24;
      *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)PTR_DAT_09f32dc8;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x40));
      fStack00000000000000b8 = unaff_s11 * (float)iStack00000000000000d4;
      uVar3 = FUN_07a5081c(&stack0x000000b8,0);
      if (*(uint *)(lVar2 + 0x18) < 6) goto LAB_07765a24;
      *(undefined8 *)(lVar2 + 0x48) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x48),uVar3);
      if (*(uint *)(lVar2 + 0x18) < 7) goto LAB_07765a24;
      *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)PTR_DAT_09f32da8;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x50));
      fStack00000000000000b8 = unaff_s10 * (float)iStack00000000000000d0;
      uVar3 = FUN_07a5081c(&stack0x000000b8,0);
      if (*(uint *)(lVar2 + 0x18) < 8) goto LAB_07765a24;
      *(undefined8 *)(lVar2 + 0x58) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x58),uVar3);
      if (*(uint *)(lVar2 + 0x18) < 9) goto LAB_07765a24;
      *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)PTR_DAT_09f32de8;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x60));
      fStack00000000000000b8 = unaff_s9 * (float)iStack00000000000000d4;
      uVar3 = FUN_07a5081c(&stack0x000000b8,0);
      if (*(uint *)(lVar2 + 0x18) < 10) goto LAB_07765a24;
      *(undefined8 *)(lVar2 + 0x68) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x68),uVar3);
      if (*(uint *)(lVar2 + 0x18) < 0xb) goto LAB_07765a24;
      *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)PTR_DAT_09f307b8;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x70));
      fStack00000000000000b8 = unaff_s8 * (float)iStack00000000000000d0;
      uVar3 = FUN_07a5081c(&stack0x000000b8,0);
      if (*(uint *)(lVar2 + 0x18) < 0xc) goto LAB_07765a24;
      *(undefined8 *)(lVar2 + 0x78) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x78),uVar3);
      if (*(uint *)(lVar2 + 0x18) < 0xd) goto LAB_07765a24;
      *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)PTR_DAT_09f307e8;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x80));
      uVar4 = FUN_05a28f70(in_stack_00000088,uStack00000000000000bc,*(undefined8 *)PTR_DAT_09f32c78)
      ;
      in_stack_000000b0._4_4_ = (uint)(uVar4 >> 0x1f) & 0xfffffffe;
      uVar3 = FUN_07a3b850((long)&stack0x000000b0 + 4,0);
      if (*(uint *)(lVar2 + 0x18) < 0xe) goto LAB_07765a24;
      *(undefined8 *)(lVar2 + 0x88) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x88),uVar3);
      if (*(uint *)(lVar2 + 0x18) < 0xf) goto LAB_07765a24;
      *(undefined8 *)(lVar2 + 0x90) = *unaff_x28;
      thunk_FUN_044bb4b4((undefined8 *)(lVar2 + 0x90));
      iVar1 = FUN_05a28f70(in_stack_00000088,uStack00000000000000bc,*(undefined8 *)PTR_DAT_09f32c78)
      ;
      in_stack_000000b0._4_4_ = iVar1 << 1;
      uVar3 = FUN_07a3b850((long)&stack0x000000b0 + 4,0);
      if (*(uint *)(lVar2 + 0x18) < 0x10) goto LAB_07765a24;
      *(undefined8 *)(lVar2 + 0x98) = uVar3;
      thunk_FUN_044bb4b4();
      uVar3 = FUN_078b57fc(lVar2,0);
      lVar5 = *unaff_x29;
      lVar2 = *(long *)(lVar5 + 0x38);
      if (lVar2 == 0) {
        FUN_04482014(lVar5);
        lVar2 = *(long *)(lVar5 + 0x38);
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04481fb8();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      lVar2 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04481fb8();
      }
      FUN_0771ec00(uVar3,**(undefined8 **)(lVar2 + 0xb8),0);
    }
    uStack00000000000000bc = uStack00000000000000bc + 1;
    if (*(int *)(unaff_x27 + 0x18) <= (int)uStack00000000000000bc) {
      FUN_077606dc();
      return;
    }
    lVar2 = FUN_05badb74();
    if ((lVar2 == 0) || (lVar5 = *unaff_x22, lVar5 == 0)) {
LAB_07765a28:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(lVar5 + 0x18) <= uStack00000000000000bc) goto LAB_07765a24;
    unaff_s11 = fStack00000000000000cc +
                (float)*(int *)(lVar2 + 0x1c) / (float)iStack00000000000000d4;
    lVar5 = lVar5 + (long)(int)uStack00000000000000bc * 0x10;
    unaff_s10 = fStack00000000000000c8 +
                (float)*(int *)(lVar2 + 0x20) / (float)iStack00000000000000d0;
    unaff_s9 = (float)*(int *)(lVar2 + 0x14) / (float)iStack00000000000000d4 -
               (fStack00000000000000cc + fStack00000000000000cc);
    unaff_s8 = (float)*(int *)(lVar2 + 0x18) / (float)iStack00000000000000d0 -
               (fStack00000000000000c8 + fStack00000000000000c8);
    *(float *)(lVar5 + 0x20) = unaff_s11;
    *(float *)(lVar5 + 0x24) = unaff_s10;
    *(float *)(lVar5 + 0x28) = unaff_s9;
    *(float *)(lVar5 + 0x2c) = unaff_s8;
    lVar5 = *unaff_x23;
    unaff_x25 = (undefined4 *)(lVar2 + 0x10);
    if (lVar5 == 0) goto LAB_07765a28;
    if (*(uint *)(lVar5 + 0x18) <= uStack00000000000000bc) goto LAB_07765a24;
    *(undefined4 *)(lVar5 + (long)(int)uStack00000000000000bc * 4 + 0x20) = *unaff_x25;
    in_w8 = *(int *)(unaff_x20 + 0x10);
  } while( true );
}


