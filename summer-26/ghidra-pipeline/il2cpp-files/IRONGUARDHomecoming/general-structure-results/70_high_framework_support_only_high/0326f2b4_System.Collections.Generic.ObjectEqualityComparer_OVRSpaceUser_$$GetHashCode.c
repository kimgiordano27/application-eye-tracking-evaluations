/*
FUNCTION_NAME: System.Collections.Generic.ObjectEqualityComparer<OVRSpaceUser>$$GetHashCode
ENTRY_POINT: 0326f2b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0326f3d4) */
/* WARNING: Removing unreachable block (ram,0x0326f3d0) */
/* WARNING: Removing unreachable block (ram,0x0326f418) */

void System_Collections_Generic_ObjectEqualityComparer<OVRSpaceUser>__GetHashCode
               (undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  byte in_w8;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  do {
    if ((in_w8 & 1) == 0) {
      param_2 = FUN_01ecaf44(param_2);
    }
    lVar2 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == param_2) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0326f248;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0326f248:
    (*(code *)*puVar1)(&stack0x00000030);
    FUN_0326ecd4();
    lVar2 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0326f294;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0326f294:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) break;
    param_2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    in_w8 = *(byte *)(param_2 + 0x135);
  } while( true );
  if (unaff_x23 != (long *)0x0) {
    lVar2 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0326f3b8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0326f3b8:
    (*(code *)*puVar1)();
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


