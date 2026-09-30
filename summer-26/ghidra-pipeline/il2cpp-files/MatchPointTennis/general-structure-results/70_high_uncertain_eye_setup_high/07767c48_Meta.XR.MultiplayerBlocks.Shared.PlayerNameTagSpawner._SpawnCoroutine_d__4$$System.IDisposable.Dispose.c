/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlayerNameTagSpawner.<SpawnCoroutine>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 07767c48
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_PlayerNameTagSpawner_<SpawnCoroutine>d__4__System_IDisposable_Dispose
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  uint in_stack_000000b0;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  int iStack00000000000000c8;
  int iStack00000000000000cc;
  
  plVar6 = (long *)(unaff_x22 + 0x30);
  *plVar6 = param_1;
  thunk_FUN_044bb4b4(plVar6,param_1);
  *(int *)(unaff_x22 + 0x10) = iStack00000000000000cc;
  *(int *)(unaff_x22 + 0x14) = iStack00000000000000c8;
  puVar2 = PTR_DAT_09f22e40;
  puVar1 = PTR_DAT_09f1e5f0;
  in_stack_000000b0 = 0;
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    do {
      lVar3 = FUN_05badb74();
      if (lVar3 == 0) {
LAB_077681f4:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar5 = *unaff_x23;
      if (*(int *)(unaff_x20 + 0x18) == 1) {
        fVar7 = 1.0;
        if (*(char *)(unaff_x20 + 0x1c) == '\0') {
          fVar7 = (float)*(int *)(lVar3 + 0x18) / (float)iStack00000000000000c8;
        }
        if (lVar5 == 0) goto LAB_077681f4;
        if (*(uint *)(lVar5 + 0x18) <= in_stack_000000b0) goto LAB_077681f8;
        fVar9 = (float)*(int *)(lVar3 + 0x20) / (float)iStack00000000000000c8;
        fVar8 = (float)*(int *)(lVar3 + 0x14) / (float)iStack00000000000000cc -
                (fStack00000000000000c4 + fStack00000000000000c4);
        fVar10 = (float)*(int *)(lVar3 + 0x1c) / (float)iStack00000000000000cc +
                 fStack00000000000000c4;
      }
      else {
        fVar8 = 1.0;
        if (*(char *)(unaff_x20 + 0x1c) == '\0') {
          fVar8 = (float)*(int *)(lVar3 + 0x14) / (float)iStack00000000000000cc;
        }
        if (lVar5 == 0) goto LAB_077681f4;
        if (*(uint *)(lVar5 + 0x18) <= in_stack_000000b0) goto LAB_077681f8;
        fVar10 = (float)*(int *)(lVar3 + 0x1c) / (float)iStack00000000000000cc;
        fVar9 = fStack00000000000000c0 +
                (float)*(int *)(lVar3 + 0x20) / (float)iStack00000000000000c8;
        fVar7 = (float)*(int *)(lVar3 + 0x18) / (float)iStack00000000000000c8 -
                (fStack00000000000000c0 + fStack00000000000000c0);
      }
      lVar5 = lVar5 + (long)(int)in_stack_000000b0 * 0x10;
      *(float *)(lVar5 + 0x20) = fVar10;
      *(float *)(lVar5 + 0x24) = fVar9;
      *(float *)(lVar5 + 0x28) = fVar8;
      *(float *)(lVar5 + 0x2c) = fVar7;
      lVar5 = *plVar6;
      if (lVar5 == 0) goto LAB_077681f4;
      if (*(uint *)(lVar5 + 0x18) <= in_stack_000000b0) goto LAB_077681f8;
      *(undefined4 *)(lVar5 + (long)(int)in_stack_000000b0 * 4 + 0x20) =
           *(undefined4 *)(lVar3 + 0x10);
      if (3 < *(int *)(unaff_x20 + 0x10)) {
        lVar5 = FUN_04447c90(*(undefined8 *)puVar1,0x12);
        if (lVar5 == 0) goto LAB_077681f4;
        if (*(int *)(lVar5 + 0x18) == 0) {
LAB_077681f8:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_09f32df8;
        thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x20));
        uVar4 = FUN_07a3b850(&stack0x000000b0,0);
        if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_077681f8;
        *(undefined8 *)(lVar5 + 0x28) = uVar4;
        thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x28),uVar4);
        if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_077681f8;
        *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_09f32db0;
        thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x30));
        uVar4 = FUN_07a3b850((undefined4 *)(lVar3 + 0x10),0);
        if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_077681f8;
        *(undefined8 *)(lVar5 + 0x38) = uVar4;
        thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x38),uVar4);
        if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_077681f8;
        *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_09f32dc8;
        thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x40));
        in_stack_000000a8._4_4_ = fVar10 * (float)iStack00000000000000cc;
        uVar4 = FUN_07a5081c((long)&stack0x000000a8 + 4,0);
        if (*(uint *)(lVar5 + 0x18) < 6) goto LAB_077681f8;
        *(undefined8 *)(lVar5 + 0x48) = uVar4;
        thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x48),uVar4);
        if (*(uint *)(lVar5 + 0x18) < 7) goto LAB_077681f8;
        *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)PTR_DAT_09f32da8;
        thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x50));
        in_stack_000000a8._4_4_ = fVar9 * (float)iStack00000000000000c8;
        uVar4 = FUN_07a5081c((long)&stack0x000000a8 + 4,0);
        if (*(uint *)(lVar5 + 0x18) < 8) goto LAB_077681f8;
        *(undefined8 *)(lVar5 + 0x58) = uVar4;
        thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x58),uVar4);
        if (*(uint *)(lVar5 + 0x18) < 9) goto LAB_077681f8;
        *(undefined8 *)(lVar5 + 0x60) = *(undefined8 *)PTR_DAT_09f32de8;
        thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x60));
        in_stack_000000a8._4_4_ = fVar8 * (float)iStack00000000000000cc;
        uVar4 = FUN_07a5081c((long)&stack0x000000a8 + 4,0);
        if (*(uint *)(lVar5 + 0x18) < 10) goto LAB_077681f8;
        *(undefined8 *)(lVar5 + 0x68) = uVar4;
        thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x68),uVar4);
        if (*(uint *)(lVar5 + 0x18) < 0xb) goto LAB_077681f8;
        *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)PTR_DAT_09f307b8;
        thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x70));
        in_stack_000000a8._4_4_ = fVar7 * (float)iStack00000000000000c8;
        uVar4 = FUN_07a5081c((long)&stack0x000000a8 + 4,0);
        if (*(uint *)(lVar5 + 0x18) < 0xc) goto LAB_077681f8;
        *(undefined8 *)(lVar5 + 0x78) = uVar4;
        thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x78),uVar4);
        if (*(uint *)(lVar5 + 0x18) < 0xd) goto LAB_077681f8;
        *(undefined8 *)(lVar5 + 0x80) = *(undefined8 *)PTR_DAT_09f307e8;
        thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x80));
        in_stack_000000a0 =
             FUN_05a28f70(in_stack_00000088,in_stack_000000b0,*(undefined8 *)PTR_DAT_09f32c78);
        in_stack_00000090 = *(undefined8 *)PTR_DAT_09f2bec8;
        in_stack_00000098 = 0xffffffffffffffff;
        uVar4 = FUN_07a98bb4(&stack0x00000090,0);
        if (*(uint *)(lVar5 + 0x18) < 0xe) goto LAB_077681f8;
        *(undefined8 *)(lVar5 + 0x88) = uVar4;
        thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x88),uVar4);
        if (*(uint *)(lVar5 + 0x18) < 0xf) goto LAB_077681f8;
        *(undefined8 *)(lVar5 + 0x90) = *(undefined8 *)PTR_DAT_09f32e60;
        thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x90));
        uVar4 = FUN_07a3b850((long)&stack0x000000c8 + 4,0);
        if (*(uint *)(lVar5 + 0x18) < 0x10) goto LAB_077681f8;
        *(undefined8 *)(lVar5 + 0x98) = uVar4;
        thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x98),uVar4);
        if (*(uint *)(lVar5 + 0x18) < 0x11) goto LAB_077681f8;
        *(undefined8 *)(lVar5 + 0xa0) = *(undefined8 *)PTR_DAT_09f32e58;
        thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0xa0));
        uVar4 = FUN_07a3b850(&stack0x000000c8,0);
        if (*(uint *)(lVar5 + 0x18) < 0x12) goto LAB_077681f8;
        *(undefined8 *)(lVar5 + 0xa8) = uVar4;
        thunk_FUN_044bb4b4();
        uVar4 = FUN_078b57fc(lVar5,0);
        lVar5 = *(long *)puVar2;
        lVar3 = *(long *)(lVar5 + 0x38);
        if (lVar3 == 0) {
          FUN_04482014(lVar5);
          lVar3 = *(long *)(lVar5 + 0x38);
        }
        lVar3 = *(long *)(lVar3 + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_04481fb8();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar3 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_04481fb8();
        }
        FUN_0771ec00(uVar4,**(undefined8 **)(lVar3 + 0xb8),0);
      }
      in_stack_000000b0 = in_stack_000000b0 + 1;
    } while ((int)in_stack_000000b0 < *(int *)(unaff_x21 + 0x18));
  }
  FUN_077606dc();
  return;
}


