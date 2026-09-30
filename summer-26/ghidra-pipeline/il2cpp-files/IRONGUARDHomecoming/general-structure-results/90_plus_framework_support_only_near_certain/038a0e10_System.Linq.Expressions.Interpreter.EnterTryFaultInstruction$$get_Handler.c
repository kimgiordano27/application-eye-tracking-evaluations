/*
FUNCTION_NAME: System.Linq.Expressions.Interpreter.EnterTryFaultInstruction$$get_Handler
ENTRY_POINT: 038a0e10
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x038a109c) */

void System_Linq_Expressions_Interpreter_EnterTryFaultInstruction__get_Handler(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 unaff_w19;
  undefined8 uVar9;
  long *unaff_x24;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  
  lVar3 = *unaff_x24;
  if (*(long *)(*(long *)(lVar3 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *unaff_x24;
    }
    uVar9 = **(undefined8 **)(lVar3 + 0xb8);
    uVar4 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_2323);
    FUN_02e6c0a0(uVar4,uVar9,*(undefined8 *)StringLiteral_2326,0);
    puVar5 = (undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 8);
    *puVar5 = uVar4;
    thunk_FUN_01f51358(puVar5,uVar4);
  }
  plVar6 = (long *)FUN_0230b6f4();
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_2324) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_038a0eec;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)StringLiteral_2324,0);
LAB_038a0eec:
    plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    puVar2 = StringLiteral_2325;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar3 = *plVar6;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_038a0f5c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_038a0f5c:
      uVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar7 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_038a104c;
        lVar3 = *plVar6;
        uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar7 == 0) goto LAB_038a1024;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_038a100c;
      }
      lVar3 = *plVar6;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_038a0fb8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_038a0fb8:
      lVar3 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      unaff_d11 = (ulong)(uint)((float)unaff_d11 * *(float *)(lVar3 + 0x20));
      unaff_d10 = (ulong)(uint)((float)unaff_d10 * *(float *)(lVar3 + 0x24));
      unaff_d9 = (ulong)(uint)((float)unaff_d9 * *(float *)(lVar3 + 0x28));
      unaff_d8 = (ulong)(uint)((float)unaff_d8 * *(float *)(lVar3 + 0x2c));
    } while( true );
  }
  goto System_Linq_Expressions_Interpreter_EnterFinallyInstruction__Create;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_038a100c:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_038a1040;
    }
  }
LAB_038a1024:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_038a1040:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_038a104c:
  lVar3 = FUN_038ab008();
  if (lVar3 != 0) {
    thunk_FUN_0404b1d4(unaff_d11,unaff_d10,unaff_d9,unaff_d8,lVar3,unaff_w19,0);
    return;
  }
System_Linq_Expressions_Interpreter_EnterFinallyInstruction__Create:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


