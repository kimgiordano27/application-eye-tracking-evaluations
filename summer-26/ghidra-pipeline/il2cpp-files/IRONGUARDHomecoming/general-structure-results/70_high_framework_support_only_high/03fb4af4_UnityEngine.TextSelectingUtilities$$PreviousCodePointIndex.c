/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$PreviousCodePointIndex
ENTRY_POINT: 03fb4af4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03fb4bbc) */

void UnityEngine_TextSelectingUtilities__PreviousCodePointIndex(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x21;
  undefined8 uVar8;
  long lVar9;
  ulong unaff_x27;
  long *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (param_2 != 1) {
    if (unaff_x21 != (long *)0x0) {
      lVar9 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
            goto code_r0x03fb4ba4;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238();
code_r0x03fb4ba4:
      (*(code *)*puVar3)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14(param_1);
  }
  plVar5 = (long *)__cxa_begin_catch();
  lVar9 = *plVar5;
  __cxa_end_catch();
  if (unaff_x21 != (long *)0x0) {
    lVar6 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03fb48a8;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03fb48a8:
    (*(code *)*puVar3)();
  }
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar9);
  }
  if ((unaff_x27 & 1) == 0) {
    return;
  }
  lVar9 = FUN_03fe4c98();
  if (lVar9 != 0) {
    lVar9 = FUN_03fca980(lVar9,0);
    plVar5 = (long *)(unaff_x19 + 0xa0);
    *plVar5 = lVar9;
    thunk_FUN_01f51358(plVar5,lVar9);
    lVar9 = *plVar5;
    uVar8 = *(undefined8 *)(unaff_x19 + 0x90);
    if (*(int *)(*(long *)Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_03f74f80(uVar8,0);
    if (lVar9 != 0) {
      FUN_03fe209c(lVar9,uVar8,0);
      if ((*in_stack_00000000 != 0) &&
         (lVar9 = FUN_02b6b114(*in_stack_00000000,*(undefined8 *)PTR_DAT_04583050), lVar9 != 0)) {
        FUN_0300123c(&stack0x00000008,lVar9,*(undefined8 *)PTR_DAT_045830d0);
        puVar2 = PTR_DAT_04583080;
        puVar1 = PTR_DAT_04583048;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        while( true ) {
          uVar4 = FUN_02ce9cdc(&stack0x00000020,*(undefined8 *)puVar2);
          if ((uVar4 & 1) == 0) {
            FUN_02ce9cd8(&stack0x00000020,*(undefined8 *)PTR_DAT_04583078);
            return;
          }
          if (*in_stack_00000000 == 0) break;
          lVar9 = FUN_02b6b264(*in_stack_00000000,in_stack_00000030,*(undefined8 *)puVar1);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar4 = FUN_03ee561c(lVar9,0);
          if ((uVar4 & 1) != 0) {
            thunk_FUN_03fe9acc();
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


