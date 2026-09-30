/*
FUNCTION_NAME: FUN_01b96fc8
ENTRY_POINT: 01b96fc8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void FUN_01b96fc8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_28;
  
  if ((DAT_0377e651 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount__
                      );
    thunk_FUN_00d48444(FullSerializer_fsContext_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_0377e651 = 1;
  }
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(long *)(*(long *)(param_1 + 0x28) + 0x18) == 0) {
      FUN_010c2c5c(param_1,&local_28,*(undefined8 *)FullSerializer_fsContext_TypeInfo);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar2 = FUN_0268b4e0(local_28,0,0);
      if ((uVar2 & 1) != 0) {
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        uVar6 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        uVar5 = thunk_FUN_00d48444(Method_System_Text_RegularExpressions_Regex_Replace__);
        FUN_016f2f28(uVar6,uVar5,0);
        uVar5 = thunk_FUN_00d48444(Method_UnityEngine_Mesh_ApplyAndDisposeWritableMeshData__);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01b97108 to 01c972b7 has its CatchHandler @ 01b97108
                       catch() { ... } // from try @ 01b97108 with catch @ 01b97108
                       catch() { ... } // from try @ 01b975a8 with catch @ 01b97108
                       catch() { ... } // from try @ 01b97648 with catch @ 01b97108
                       catch() { ... } // from try @ 01b976ac with catch @ 01b97108
                       catch() { ... } // from try @ 01b97740 with catch @ 01b97108 */
        FUN_00da5038(uVar6,uVar5);
      }
      plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)
                                     Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount__
                                    ,1);
      if (plVar3 == (long *)0x0) goto LAB_01b970bc;
      if ((local_28 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(local_28,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
        uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar6,0);
      }
      if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar3[4] = local_28;
      *(long **)(param_1 + 0x28) = plVar3;
    }
    return;
  }
LAB_01b970bc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


