/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$.ctor
ENTRY_POINT: 05176440
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_5;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>___ctor(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000068;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0x28));
  thunk_FUN_032e1da0(PTR_DAT_07279560);
  *(undefined1 *)(unaff_x23 + 0xaa) = 1;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05935240(3,0);
  }
  iVar1 = thunk_FUN_032f6668();
  if (iVar1 != 1) {
    FUN_059441cc(7,0);
  }
  iVar1 = thunk_FUN_032f6624();
  if (iVar1 != 0) {
    FUN_059441cc(6,0);
  }
  uVar2 = FUN_0593be7c();
  if (uVar2 < unaff_w20) {
    FUN_05944a4c(0);
  }
  iVar1 = FUN_0593be7c();
  if ((int)(iVar1 - unaff_w20) < *(int *)(unaff_x21 + 0x20) - *(int *)(unaff_x21 + 0x28)) {
    FUN_059441cc(5,0);
  }
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    FUN_032934b8(lVar8);
  }
  lVar8 = thunk_FUN_032a55a4();
  if (lVar8 != 0) {
    FUN_05174b2c();
    return;
  }
  lVar8 = thunk_FUN_032a55a4();
  if (lVar8 == 0) {
    plVar4 = (long *)thunk_FUN_032a55a4();
    if (plVar4 == (long *)0x0) {
      FUN_05944a84();
    }
    uVar2 = *(uint *)(unaff_x21 + 0x20);
    if (0 < (int)uVar2) {
      lVar8 = *(long *)(unaff_x21 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar10 = 0;
      lVar9 = lVar8 + 0x2c;
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        if (-1 < *(int *)(lVar9 + -0xc)) {
          in_stack_00000040 = 0;
          uStack0000000000000048 = 0;
          uStack000000000000004c = 0;
          in_stack_00000058 = 0;
          uStack0000000000000050 = 0;
          uStack0000000000000054 = 0;
          FUN_03fc0384(&stack0x00000040,*(undefined4 *)(lVar9 + -4));
          lVar5 = thunk_FUN_032a52d0(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
            uVar7 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
            FUN_032d5dbc(uVar7,0);
          }
          if (*(uint *)(plVar4 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          plVar4[(long)(int)unaff_w20 + 4] = lVar5;
          thunk_FUN_0333a630(plVar4 + (long)(int)unaff_w20 + 4,lVar5);
          unaff_w20 = unaff_w20 + 1;
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x24;
      } while (uVar2 != uVar10);
    }
  }
  else {
    iVar1 = *(int *)(unaff_x21 + 0x20);
    if (0 < iVar1) {
      lVar9 = *(long *)(unaff_x21 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar10 = 0;
      puVar11 = (undefined8 *)(lVar9 + 0x2c);
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10)
        goto System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__Dispose;
        if (-1 < *(int *)((long)puVar11 + -0xc)) {
          in_stack_00000068._4_4_ = *(undefined4 *)((long)puVar11 + -4);
          thunk_FUN_032a52d0(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70),
                             (long)&stack0x00000068 + 4);
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__Dispose:
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          in_stack_00000040 = *puVar11;
          uStack0000000000000050 = (undefined4)puVar11[2];
          uStack0000000000000054 = (undefined4)((ulong)puVar11[2] >> 0x20);
          uStack0000000000000048 = (undefined4)puVar11[1];
          uStack000000000000004c = (undefined4)((ulong)puVar11[1] >> 0x20);
          thunk_FUN_032a52d0(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x78),
                             &stack0x00000040);
          FUN_058f08a8();
          if (*(uint *)(lVar8 + 0x18) <= unaff_w20)
          goto System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__Dispose;
          lVar5 = lVar8 + (long)(int)unaff_w20 * 0x10;
          puVar3 = (undefined8 *)(lVar5 + 0x20);
          *(undefined8 *)(lVar5 + 0x28) = 0;
          *puVar3 = 0;
          unaff_w20 = unaff_w20 + 1;
          thunk_FUN_0333a630(puVar3,0);
          iVar1 = *(int *)(unaff_x21 + 0x20);
        }
        uVar10 = uVar10 + 1;
        puVar11 = (undefined8 *)((long)puVar11 + 0x24);
      } while ((long)uVar10 < (long)iVar1);
    }
  }
  return;
}


