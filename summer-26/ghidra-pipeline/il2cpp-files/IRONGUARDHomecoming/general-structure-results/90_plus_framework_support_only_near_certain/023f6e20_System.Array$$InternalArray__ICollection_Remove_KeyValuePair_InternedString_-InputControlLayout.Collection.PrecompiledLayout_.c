/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<KeyValuePair<InternedString,-InputControlLayout.Collection.PrecompiledLayout>>
ENTRY_POINT: 023f6e20
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x023f7080) */
/* WARNING: Removing unreachable block (ram,0x023f708c) */

undefined8
System_Array__InternalArray__ICollection_Remove<KeyValuePair<InternedString,_InputControlLayout_Collection_PrecompiledLayout>>
          (long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x21;
  undefined4 unaff_w22;
  long *in_stack_00000008;
  
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadServiceWellKnown__);
                    /* try { // try from 023f6e34 to 024f6e3f has its CatchHandler @ 023f69fc */
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ValidatePath__);
                    /* try { // try from 023f6e40 to 024f6e47 has its CatchHandler @ 023f6e48 */
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_IsModified__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023f6e0c with catch @ 023f6e48
                       catch(type#2 @ 00000000) { ... } // from try @ 023f6e40 with catch @ 023f6e48
                        */
                    /* try { // try from 023f6e4c to 024f70cf has its CatchHandler @ 023f6e4c
                       catch() { ... } // from try @ 023f6e4c with catch @ 023f6e4c
                       catch() { ... } // from try @ 023f718c with catch @ 023f6e4c
                       catch() { ... } // from try @ 023f729c with catch @ 023f6e4c
                       catch() { ... } // from try @ 023f7348 with catch @ 023f6e4c */
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    if (*(long *)(unaff_x21 + 0x38) == 0) {
      FUN_01ecafa0();
    }
  }
  in_stack_00000008 = (long *)0x0;
  plVar2 = (long *)FUN_0391ef4c(&stack0x00000008,unaff_w22);
  puVar1 = Method_System_Configuration_ConfigurationElement_IsModified__;
  if (unaff_x19 == 0) {
    if (*(int *)(*(long *)Method_System_Configuration_ConfigurationElement_IsModified__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_029da4a8(*(undefined8 *)
                                   Method_System_Runtime_Remoting_ConfigHandler_ReadServiceWellKnown__
                                 );
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_029dad5c(plVar4,*(undefined8 *)
                                 Method_System_Runtime_Remoting_ConfigHandler_ValidatePath__);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
          goto LAB_023f6f60;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__
                          ,9);
LAB_023f6f60:
    (*(code *)*puVar5)(plVar2,uVar3,puVar5[1]);
    uVar3 = FUN_023f5cfc(plVar2);
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_023f6fe4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_023f6fe4:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
  }
  else {
    uVar3 = FUN_023f5cfc(plVar2);
  }
  plVar2 = in_stack_00000008;
  if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *in_stack_00000008;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_023f7054;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01ecb238(in_stack_00000008,
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,0)
  ;
LAB_023f7054:
  (*(code *)*puVar5)(plVar2,puVar5[1]);
  return uVar3;
}


