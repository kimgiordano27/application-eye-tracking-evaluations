/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<TextProcessingStack<MaterialReference>>$$.cctor
ENTRY_POINT: 02afc620
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 124
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void System_Array_EmptyInternalEnumerator<TextProcessingStack<MaterialReference>>___cctor
               (long param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  if ((DAT_044a4d5b & 1) == 0) {
    FUN_01d7d918(StringLiteral_2806);
    FUN_01d7d918(StringLiteral_887);
    DAT_044a4d5b = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(3,0);
  }
  iVar1 = thunk_FUN_01dff4e0(param_2,0);
  if (iVar1 != 1) {
    FUN_033b2d60(7,0);
  }
  iVar1 = thunk_FUN_01dff49c(param_2,0,0);
  if (iVar1 != 0) {
    FUN_033b2d60(6,0);
  }
  uVar2 = FUN_033aadfc(param_2,0);
  if (uVar2 < param_3) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  iVar1 = FUN_033aadfc(param_2,0);
  if ((int)(iVar1 - param_3) < *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x28)) {
    FUN_033b2d60(5,0);
  }
  lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x120);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01dde7f8(lVar8);
  }
  lVar8 = thunk_FUN_01de26bc(param_2,lVar8);
  if (lVar8 != 0) {
    FUN_02afab58(param_1,lVar8,param_3,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x158));
    return;
  }
  lVar8 = thunk_FUN_01de26bc(param_2,*(undefined8 *)StringLiteral_2806);
  if (lVar8 == 0) {
    plVar6 = (long *)thunk_FUN_01de26bc(param_2,*(undefined8 *)StringLiteral_887);
    if (plVar6 == (long *)0x0) {
      FUN_033b3618();
    }
    uVar2 = *(uint *)(param_1 + 0x20);
    if (0 < (int)uVar2) {
      lVar8 = *(long *)(param_1 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar10 = 0;
      puVar11 = (undefined8 *)(lVar8 + 0x38);
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (-1 < *(int *)(puVar11 + -3)) {
          in_stack_00000008 = puVar11[1];
          in_stack_00000000 = *puVar11;
          in_stack_00000018 = puVar11[3];
          in_stack_00000010 = puVar11[2];
          in_stack_00000028 = puVar11[5];
          in_stack_00000020 = puVar11[4];
          in_stack_00000038 = puVar11[7];
          in_stack_00000030 = puVar11[6];
          in_stack_000000c8 = 0;
          in_stack_000000c0 = 0;
          in_stack_000000d8 = 0;
          in_stack_000000d0 = 0;
          in_stack_000000a8 = 0;
          in_stack_000000a0 = 0;
          in_stack_000000b8 = 0;
          in_stack_000000b0 = 0;
          in_stack_00000098 = 0;
          in_stack_00000090 = 0;
          in_stack_00000050 = in_stack_00000000;
          in_stack_00000058 = in_stack_00000008;
          in_stack_00000060 = in_stack_00000010;
          in_stack_00000068 = in_stack_00000018;
          in_stack_00000070 = in_stack_00000020;
          in_stack_00000078 = in_stack_00000028;
          in_stack_00000080 = in_stack_00000030;
          in_stack_00000088 = in_stack_00000038;
          FUN_0306dca8(&stack0x00000090,puVar11[-2],puVar11[-1]);
          memcpy(&stack0x00000000,&stack0x00000090,0x50);
          lVar9 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa8));
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if ((lVar9 != 0) &&
             (lVar7 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
            uVar3 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar3,0);
          }
          if (*(uint *)(plVar6 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          plVar6[(long)(int)param_3 + 4] = lVar9;
          thunk_FUN_01e10808(plVar6 + (long)(int)param_3 + 4,lVar9);
          param_3 = param_3 + 1;
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 0xb;
      } while (uVar2 != uVar10);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    if (0 < iVar1) {
      lVar9 = *(long *)(param_1 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar10 = 0;
      puVar11 = (undefined8 *)(lVar9 + 0x38);
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_02afc97c;
        if (-1 < *(int *)(puVar11 + -3)) {
          in_stack_00000008 = puVar11[-1];
          in_stack_00000000 = puVar11[-2];
          uVar3 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70));
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_02afc97c:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          in_stack_000000b8 = puVar11[5];
          in_stack_000000b0 = puVar11[4];
          in_stack_000000c8 = puVar11[7];
          in_stack_000000c0 = puVar11[6];
          in_stack_00000098 = puVar11[1];
          in_stack_00000090 = *puVar11;
          in_stack_000000a8 = puVar11[3];
          in_stack_000000a0 = puVar11[2];
          uVar4 = thunk_FUN_01de23e8(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78),
                                     &stack0x00000090);
          in_stack_000000e0 = 0;
          in_stack_000000e8 = 0;
          FUN_0336f7b8(&stack0x000000e0,uVar3,uVar4,0);
          if (*(uint *)(lVar8 + 0x18) <= param_3) goto LAB_02afc97c;
          lVar7 = lVar8 + (long)(int)param_3 * 0x10;
          puVar5 = (undefined8 *)(lVar7 + 0x20);
          *(undefined8 *)(lVar7 + 0x28) = in_stack_000000e8;
          *puVar5 = in_stack_000000e0;
          param_3 = param_3 + 1;
          thunk_FUN_01e10808(puVar5,0);
          iVar1 = *(int *)(param_1 + 0x20);
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 0xb;
      } while ((long)uVar10 < (long)iVar1);
    }
  }
  return;
}


