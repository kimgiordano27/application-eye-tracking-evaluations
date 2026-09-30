/*
FUNCTION_NAME: System.Collections.Generic.KeyValuePair<object,-float>$$.ctor
ENTRY_POINT: 02f1bc28
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f1beec) */

void System_Collections_Generic_KeyValuePair<object,_float>___ctor(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int iVar9;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  *(undefined8 *)(unaff_x21 + 0x30) = param_1;
  thunk_FUN_01f51358();
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44(lVar3);
  }
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02f1bcb0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02f1bcb0:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar9 = 0;
  do {
    lVar3 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02f1bd30;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_02f1bd30:
    uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar3 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 == 0) goto LAB_02f1be94;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto FUN_02f1bdb4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar3,0);
FUN_02f1bdb4:
    (*(code *)*puVar4)(&stack0x00000030,plVar5,puVar4[1]);
    in_stack_00000068 = in_stack_00000038;
    in_stack_00000060 = in_stack_00000030;
    in_stack_00000078 = in_stack_00000048;
    in_stack_00000070 = in_stack_00000040;
    in_stack_00000080 = in_stack_00000050;
    if (iVar9 == 0) {
      *(undefined8 *)(unaff_x21 + 0x28) = in_stack_00000050;
      *(undefined8 *)(unaff_x21 + 0x10) = in_stack_00000038;
      *(undefined8 *)(unaff_x21 + 8) = in_stack_00000030;
      *(undefined8 *)(unaff_x21 + 0x20) = in_stack_00000048;
      *(undefined8 *)(unaff_x21 + 0x18) = in_stack_00000040;
      thunk_FUN_01f51358(unaff_x21 + 0x20,0);
    }
    else {
      lVar3 = *(long *)(unaff_x21 + 0x30);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar3 + 0x18) <= iVar9 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar3 = lVar3 + (long)(int)(iVar9 - 1U) * 0x28;
      *(undefined8 *)(lVar3 + 0x40) = in_stack_00000050;
      *(undefined8 *)(lVar3 + 0x28) = in_stack_00000038;
      *(undefined8 *)(lVar3 + 0x20) = in_stack_00000030;
      *(undefined8 *)(lVar3 + 0x38) = in_stack_00000048;
      *(undefined8 *)(lVar3 + 0x30) = in_stack_00000040;
      thunk_FUN_01f51358(lVar3 + 0x38,0);
    }
    iVar9 = iVar9 + 1;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_02f1beb0;
    }
  }
LAB_02f1be94:
  puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_02f1beb0:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return;
}


