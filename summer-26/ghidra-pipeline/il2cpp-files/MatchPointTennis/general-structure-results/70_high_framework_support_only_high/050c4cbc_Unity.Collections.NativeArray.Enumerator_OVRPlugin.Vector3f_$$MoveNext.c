/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector3f>$$MoveNext
ENTRY_POINT: 050c4cbc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x050c4df4) */
/* WARNING: Removing unreachable block (ram,0x050c4f18) */

void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector3f>__MoveNext
               (long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  if (param_1 == 0) {
    FUN_04447ba8(PTR_DAT_09f27f18);
    FUN_04447ba8(PTR_DAT_09f27988);
    FUN_04447ba8(PTR_DAT_09f1fa18);
    if (*(long *)(unaff_x19 + 0x38) == 0) {
      FUN_04482014();
    }
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  if (unaff_x22 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar10 = thunk_FUN_0448520c();
    uVar6 = thunk_FUN_044adef4(PTR_DAT_09f27f20);
    FUN_07996cc8(uVar10,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar10);
  }
  if (*(int *)(*(long *)PTR_DAT_09f1fa18 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_04fe0520();
  if (0 < *(int *)(unaff_x22 + 0x18)) {
    FUN_05bae95c(&stack0x00000008);
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
        lVar8 = *in_stack_00000030;
        lVar7 = *(long *)puVar1;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar7) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_050c4dcc;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_044822ac(in_stack_00000030,lVar7,0);
LAB_050c4dcc:
        (*(code *)*puVar5)(plVar2,puVar5[1]);
        iVar3 = FUN_078b1e74();
      } while (iVar3 != 0);
      lVar8 = *plVar2;
      lVar7 = *(long *)puVar1;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_050c4e48;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_044822ac(plVar2,lVar7,1);
LAB_050c4e48:
      lVar7 = (*(code *)*puVar5)(plVar2,puVar5[1]);
    } while (lVar7 == 0);
    lVar8 = *(long *)(param_2 + 0x18);
    uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x50);
    if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar10 = FUN_07a4ce38(uVar10,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44(uVar10,uVar10);
    }
    FUN_07442978(lVar8,uVar10,lVar7,*(undefined8 *)PTR_DAT_09f27f18);
LAB_050c4eac:
    FUN_0768d01c(&stack0x00000020,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x60));
  }
  return;
}


