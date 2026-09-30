/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<LocalDefinition>
ENTRY_POINT: 02415fcc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02415f88) */
/* WARNING: Removing unreachable block (ram,0x02415f8c) */
/* WARNING: Removing unreachable block (ram,0x024160cc) */

undefined8
System_Array__InternalArray__IEnumerable_GetEnumerator<LocalDefinition>
          (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x21;
  long lVar7;
  
  if (param_2 != 1) {
    if (unaff_x19 != (long *)0x0) {
      lVar7 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar1 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto code_r0x024160b4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
code_r0x024160b4:
      (*(code *)*puVar1)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14();
  }
  plVar3 = (long *)__cxa_begin_catch();
  lVar7 = *plVar3;
  __cxa_end_catch();
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02415f34;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02415f34:
    (*(code *)*puVar1)();
  }
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar7);
  }
  if (unaff_x21 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02415f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*unaff_x21 + 0x168))();
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


