/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<KeyValuePair<OVRSpace,-int>>
ENTRY_POINT: 023f6eb0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_10;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x023f7080) */
/* WARNING: Removing unreachable block (ram,0x023f708c) */

undefined8 System_Array__InternalArray__ICollection_Remove<KeyValuePair<OVRSpace,_int>>(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x22;
  long *in_stack_00000008;
  
  puVar1 = Method_System_Configuration_ConfigurationElement_IsModified__;
  if (*(int *)(*(long *)Method_System_Configuration_ConfigurationElement_IsModified__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c();
  }
  plVar2 = (long *)FUN_029da4a8(*(undefined8 *)
                                 Method_System_Runtime_Remoting_ConfigHandler_ReadServiceWellKnown__
                               );
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_029dad5c(plVar2,*(undefined8 *)Method_System_Runtime_Remoting_ConfigHandler_ValidatePath__);
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *unaff_x22;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
        goto LAB_023f6f60;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_023f6f60:
  (*(code *)*puVar3)();
  uVar4 = FUN_023f5cfc();
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_023f6fe4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_023f6fe4:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *in_stack_00000008;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_023f7054;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(in_stack_00000008,
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,0)
  ;
LAB_023f7054:
  (*(code *)*puVar3)(in_stack_00000008,puVar3[1]);
  return uVar4;
}


