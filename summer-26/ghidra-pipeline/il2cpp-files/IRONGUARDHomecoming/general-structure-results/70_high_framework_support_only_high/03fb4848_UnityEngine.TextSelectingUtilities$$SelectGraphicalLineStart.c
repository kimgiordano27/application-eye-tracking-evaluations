/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$SelectGraphicalLineStart
ENTRY_POINT: 03fb4848
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03fb48c0) */
/* WARNING: Removing unreachable block (ram,0x03fb4a4c) */

void UnityEngine_TextSelectingUtilities__SelectGraphicalLineStart(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x21;
  long *plVar7;
  undefined8 uVar8;
  ulong unaff_x27;
  long *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (unaff_x21 != (long *)0x0) {
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03fb48a8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03fb48a8:
    (*(code *)*puVar3)();
  }
  if ((unaff_x27 & 1) == 0) {
    return;
  }
  lVar4 = FUN_03fe4c98();
  if (lVar4 != 0) {
    lVar4 = FUN_03fca980(lVar4,0);
    plVar7 = (long *)(unaff_x19 + 0xa0);
    *plVar7 = lVar4;
    thunk_FUN_01f51358(plVar7,lVar4);
    lVar4 = *plVar7;
    uVar8 = *(undefined8 *)(unaff_x19 + 0x90);
    if (*(int *)(*(long *)Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_03f74f80(uVar8,0);
    if (lVar4 != 0) {
      FUN_03fe209c(lVar4,uVar8,0);
      if ((*in_stack_00000000 != 0) &&
         (lVar4 = FUN_02b6b114(*in_stack_00000000,*(undefined8 *)PTR_DAT_04583050), lVar4 != 0)) {
        FUN_0300123c(&stack0x00000008,lVar4,*(undefined8 *)PTR_DAT_045830d0);
        puVar2 = PTR_DAT_04583080;
        puVar1 = PTR_DAT_04583048;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        while( true ) {
          uVar5 = FUN_02ce9cdc(&stack0x00000020,*(undefined8 *)puVar2);
          if ((uVar5 & 1) == 0) {
            FUN_02ce9cd8(&stack0x00000020,*(undefined8 *)PTR_DAT_04583078);
            return;
          }
          if (*in_stack_00000000 == 0) break;
          lVar4 = FUN_02b6b264(*in_stack_00000000,in_stack_00000030,*(undefined8 *)puVar1);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar5 = FUN_03ee561c(lVar4,0);
          if ((uVar5 & 1) != 0) {
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


