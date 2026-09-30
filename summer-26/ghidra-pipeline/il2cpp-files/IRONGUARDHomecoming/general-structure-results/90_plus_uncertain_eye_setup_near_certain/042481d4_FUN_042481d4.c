/*
FUNCTION_NAME: FUN_042481d4
ENTRY_POINT: 042481d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0424830c) */
/* WARNING: Removing unreachable block (ram,0x0424832c) */

void FUN_042481d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  
  if ((DAT_0484134d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0458dcd8);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    DAT_0484134d = 1;
  }
  if (*(int *)(param_1 + 0x54) != -1) {
    uVar8 = **(undefined8 **)
              (*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_0458dcd8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar2 = (long *)FUN_041936e0(param_2,uVar8,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar2,*(undefined8 *)(param_1 + 0x48),0);
    plVar3 = *(long **)(param_1 + 0x48);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar3 + 0x198))(plVar3,plVar2,*(undefined8 *)(*plVar3 + 0x1a0));
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_042482f4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)puVar1,0);
LAB_042482f4:
    (*(code *)*puVar4)(plVar2,puVar4[1]);
    *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  }
  return;
}


