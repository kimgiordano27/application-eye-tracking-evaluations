/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509Store$$Close
ENTRY_POINT: 0393e71c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 138
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0393e678) */

void System_Security_Cryptography_X509Certificates_X509Store__Close(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long lVar5;
  int unaff_w25;
  long *unaff_x26;
  long unaff_x27;
  
  if (unaff_x26 != (long *)0x0) {
    lVar5 = *unaff_x26;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
          goto code_r0x0393e700;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
code_r0x0393e700:
    (*(code *)*puVar2)();
  }
  if (unaff_x27 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990();
  }
  if (unaff_w25 == 1) {
    plVar1 = (long *)__cxa_begin_catch(param_1);
    lVar5 = *plVar1;
    __cxa_end_catch();
    if (unaff_x19 != 0) {
      if (*(int *)(*(long *)Method_System_Configuration_ConfigurationElement_IsModified__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_029da814();
    }
    if (lVar5 == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar5);
  }
  if (unaff_x19 != 0) {
    if (*(int *)(*(long *)Method_System_Configuration_ConfigurationElement_IsModified__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
    FUN_029da814();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01fbfd14(param_1);
}


