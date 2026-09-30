/*
FUNCTION_NAME: System.Array$$Empty<Rect>
ENTRY_POINT: 022e4294
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x022e44d0) */

uint System_Array__Empty<Rect>(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_01ecaf44(param_2);
  }
  lVar5 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == param_2) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto System_Array__Empty<ReflectionSnapshot>;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
System_Array__Empty<ReflectionSnapshot>:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar5 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_022e4358;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_022e4358:
    uVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      break;
    }
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_022e43d0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar5,0);
LAB_022e43d0:
    (*(code *)*puVar3)(&stack0x00000020,plVar4,puVar3[1]);
    uVar7 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000020,
                       *(undefined8 *)(unaff_x21 + 0x28));
  } while ((uVar7 & 1) == 0);
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_022e447c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_022e447c:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  return uVar2 & 1;
}


