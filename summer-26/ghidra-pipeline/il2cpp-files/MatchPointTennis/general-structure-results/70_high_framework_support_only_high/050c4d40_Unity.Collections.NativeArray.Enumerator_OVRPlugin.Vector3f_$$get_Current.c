/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector3f>$$get_Current
ENTRY_POINT: 050c4d40
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x050c4df4) */
/* WARNING: Removing unreachable block (ram,0x050c4f18) */

void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector3f>__get_Current
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  FUN_05bae95c(&stack0x00000008,param_2,*(undefined8 *)(param_1 + 0x18));
  puVar1 = PTR_DAT_09f27988;
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  do {
    do {
      uVar4 = FUN_0768d020(&stack0x00000020,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x58));
      plVar2 = in_stack_00000030;
      if ((uVar4 & 1) == 0) goto LAB_050c4eac;
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar7 = *in_stack_00000030;
      lVar6 = *(long *)puVar1;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_050c4dcc;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_044822ac(in_stack_00000030,lVar6,0);
LAB_050c4dcc:
      (*(code *)*puVar5)(plVar2,puVar5[1]);
      iVar3 = FUN_078b1e74();
    } while (iVar3 != 0);
    lVar7 = *plVar2;
    lVar6 = *(long *)puVar1;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_050c4e48;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_044822ac(plVar2,lVar6,1);
LAB_050c4e48:
    lVar6 = (*(code *)*puVar5)(plVar2,puVar5[1]);
  } while (lVar6 == 0);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x50);
  if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar9 = FUN_07a4ce38(uVar9,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44(uVar9,uVar9);
  }
  FUN_07442978(lVar7,uVar9,lVar6,*(undefined8 *)PTR_DAT_09f27f18);
LAB_050c4eac:
  FUN_0768d01c(&stack0x00000020,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x60));
  return;
}


