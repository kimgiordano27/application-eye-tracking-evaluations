/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 050c4dc4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x050c4df4) */
/* WARNING: Removing unreachable block (ram,0x050c4f18) */

void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>___ctor(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x9;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x22;
  long *unaff_x23;
  long *in_stack_00000030;
  
code_r0x050c4dc4:
  puVar3 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  do {
    (*(code *)*puVar3)(unaff_x22,puVar3[1]);
    iVar1 = FUN_078b1e74();
    if (iVar1 == 0) {
      lVar4 = *unaff_x22;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x23) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_050c4e48;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_044822ac(unaff_x22,*unaff_x23,1);
LAB_050c4e48:
      lVar4 = (*(code *)*puVar3)(unaff_x22,puVar3[1]);
      if (lVar4 != 0) {
        lVar6 = *(long *)(unaff_x20 + 0x18);
        uVar7 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x50);
        if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar7 = FUN_07a4ce38(uVar7,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44(uVar7,uVar7);
        }
        FUN_07442978(lVar6,uVar7,lVar4,*(undefined8 *)PTR_DAT_09f27f18);
        goto LAB_050c4eac;
      }
    }
    uVar2 = FUN_0768d020(&stack0x00000020,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x58));
    unaff_x22 = in_stack_00000030;
    if ((uVar2 & 1) == 0) {
LAB_050c4eac:
      FUN_0768d01c(&stack0x00000020,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x60));
      return;
    }
    if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    param_1 = *in_stack_00000030;
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          in_x9 = (long)*piVar5;
          goto code_r0x050c4dc4;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(in_stack_00000030,*unaff_x23,0);
  } while( true );
}


