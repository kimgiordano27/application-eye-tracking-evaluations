/*
FUNCTION_NAME: Meta.Conduit.InvocationContext$$get_MaxConfidence
ENTRY_POINT: 0327f918
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 121
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void Meta_Conduit_InvocationContext__get_MaxConfidence(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x21;
  long *unaff_x23;
  
  if (unaff_x23 != (long *)0x0) {
    lVar2 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto code_r0x0327f970;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
code_r0x0327f970:
    (*(code *)*puVar1)();
  }
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01eed990();
}


