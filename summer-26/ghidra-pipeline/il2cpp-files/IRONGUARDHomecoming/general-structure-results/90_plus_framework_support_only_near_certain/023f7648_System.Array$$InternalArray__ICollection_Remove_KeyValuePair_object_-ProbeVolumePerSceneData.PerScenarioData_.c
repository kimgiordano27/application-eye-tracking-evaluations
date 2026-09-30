/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<KeyValuePair<object,-ProbeVolumePerSceneData.PerScenarioData>>
ENTRY_POINT: 023f7648
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 108
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x023f785c) */
/* WARNING: Removing unreachable block (ram,0x023f7788) */
/* WARNING: Removing unreachable block (ram,0x023f7868) */
/* WARNING: Removing unreachable block (ram,0x023f7804) */

void System_Array__InternalArray__ICollection_Remove<KeyValuePair<object,_ProbeVolumePerSceneData_PerScenarioData>>
               (void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  void *unaff_x19;
  size_t unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  long *unaff_x23;
  long *plVar6;
  undefined8 unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x28;
  long unaff_x29;
  
  thunk_FUN_01ee6d7c();
  FUN_029dad5c();
  if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *unaff_x26;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 023f767c to 024f76a3 has its CatchHandler @ 023f76b8 */
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 9) * 0x10 + 0x138);
        goto LAB_023f76c0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023f76c0:
  (*(code *)*puVar1)();
  puVar1 = (undefined8 *)**(undefined8 **)(unaff_x25 + 0x38);
  uVar2 = *puVar1;
  *(long **)(unaff_x29 + -0x20) = unaff_x26;
  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x24;
  *(void **)(unaff_x29 + -0x10) = unaff_x21;
  (*(code *)puVar1[2])(uVar2,puVar1,0,unaff_x29 + -0x20);
  memcpy(unaff_x22,unaff_x21,unaff_x20);
  if (unaff_x23 != (long *)0x0) {
    lVar3 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_023f776c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023f776c:
    (*(code *)*puVar1)();
  }
  plVar6 = *(long **)(unaff_x29 + -0x28);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_023f77ec;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f77ec:
  (*(code *)*puVar1)(plVar6,puVar1[1]);
  memcpy(unaff_x21,unaff_x22,unaff_x20);
  memcpy(unaff_x19,unaff_x21,unaff_x20);
  if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


