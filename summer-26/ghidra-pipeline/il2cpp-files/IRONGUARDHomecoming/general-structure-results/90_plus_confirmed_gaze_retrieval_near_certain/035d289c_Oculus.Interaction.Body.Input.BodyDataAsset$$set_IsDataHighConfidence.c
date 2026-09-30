/*
FUNCTION_NAME: Oculus.Interaction.Body.Input.BodyDataAsset$$set_IsDataHighConfidence
ENTRY_POINT: 035d289c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 137
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x035d28d4) */
/* WARNING: Removing unreachable block (ram,0x035d2ab4) */
/* WARNING: Removing unreachable block (ram,0x035d28d8) */
/* WARNING: Removing unreachable block (ram,0x035d2ab0) */
/* WARNING: Removing unreachable block (ram,0x035d28ec) */
/* WARNING: Removing unreachable block (ram,0x035d2988) */
/* WARNING: Removing unreachable block (ram,0x035d2910) */
/* WARNING: Removing unreachable block (ram,0x035d2924) */
/* WARNING: Removing unreachable block (ram,0x035d2928) */
/* WARNING: Removing unreachable block (ram,0x035d2990) */
/* WARNING: Removing unreachable block (ram,0x035d29a4) */
/* WARNING: Removing unreachable block (ram,0x035d29ac) */
/* WARNING: Removing unreachable block (ram,0x035d29b0) */
/* WARNING: Removing unreachable block (ram,0x035d29b8) */
/* WARNING: Removing unreachable block (ram,0x035d29c0) */
/* WARNING: Removing unreachable block (ram,0x035d29c4) */
/* WARNING: Removing unreachable block (ram,0x035d2ad8) */
/* WARNING: Removing unreachable block (ram,0x035d29cc) */
/* WARNING: Removing unreachable block (ram,0x035d2a00) */
/* WARNING: Removing unreachable block (ram,0x035d2a28) */
/* WARNING: Removing unreachable block (ram,0x035d2a2c) */
/* WARNING: Removing unreachable block (ram,0x035d2658) */
/* WARNING: Removing unreachable block (ram,0x035d2c64) */

void Oculus_Interaction_Body_Input_BodyDataAsset__set_IsDataHighConfidence(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long *plVar6;
  int unaff_w24;
  long *unaff_x25;
  
  FUN_035cf660();
  FUN_035cf744();
  if ((unaff_w24 < 0) && (plVar6 = *(long **)(unaff_x19 + 0x10), plVar6 != (long *)0x0)) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_035d2c50;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_035d2c50:
    (*(code *)*puVar2)(plVar6,puVar2[1]);
  }
  *unaff_x19 = 0xfffffffe;
  puVar1 = Method_System_Collections_Generic_Stack<ValueTuple<bool,_GradientFill>>__ctor__;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_026f4d88(unaff_x19 + 2,1,*(undefined8 *)puVar1);
  return;
}


