/*
FUNCTION_NAME: Unity.Mathematics.math$$log10
ENTRY_POINT: 03b29488
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03b29660) */
/* WARNING: Removing unreachable block (ram,0x03b29724) */

undefined8 Unity_Mathematics_math__log10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *in_x10;
  int *piVar9;
  long unaff_x19;
  long in_stack_00000060;
  long in_stack_000000b8;
  
  uVar8 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *in_x10) {
        puVar4 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_03b294d4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(param_2,*in_x10,0);
LAB_03b294d4:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  puVar3 = StringLiteral_11739;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03b2954c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_03b2954c:
    uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar8 & 1) == 0) break;
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03b295a8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_03b295a8:
    (*(code *)*puVar4)(&stack0x00000060,plVar5,puVar4[1]);
    memcpy(&stack0x000000c0,&stack0x00000060,0x58);
    memcpy(&stack0x00000008,&stack0x000000c0,0x58);
    FUN_03b297dc();
  } while( true );
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03b29648;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_03b29648:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(unaff_x19 + 0x18) == 0) {
    uVar6 = **(undefined8 **)
              (*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8);
  }
  else {
    in_stack_000000b8 = unaff_x19;
    thunk_FUN_01f51358(&stack0x000000b8);
    in_stack_00000060 = in_stack_000000b8;
    uVar6 = thunk_FUN_01f113fc(*(undefined8 *)StringLiteral_11745,&stack0x00000060);
    uVar6 = FUN_040b8fb0(uVar6,0);
  }
  return uVar6;
}


