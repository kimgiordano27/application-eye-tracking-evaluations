/*
FUNCTION_NAME: FUN_03522164
ENTRY_POINT: 03522164
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * FUN_03522164(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  
  if ((DAT_0483305e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Voice_ObjectVoiceExperience_HandleUploadProgressChange__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vabd_s16__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_ActiveStateFingerVisual_<UpdateGlowValue>d__22_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_0483305e = 1;
  }
  puVar2 = 
  Method_Oculus_Interaction_ActiveStateFingerVisual_<UpdateGlowValue>d__22_System_Collections_IEnumerator_Reset__
  ;
  if (param_1 == (long *)0x0) {
LAB_035222cc:
    plVar4 = (long *)FUN_03522310();
    return plVar4;
  }
  lVar5 = *param_1;
  bVar1 = *(byte *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0x130);
  if (((*(byte *)(lVar5 + 0x130) < bVar1) ||
      (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
       *(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__)) ||
     ((char)param_1[0x19] != '\0')) {
    plVar4 = param_1;
    if (lVar5 != *(long *)
                  Method_Oculus_Interaction_ActiveStateFingerVisual_<UpdateGlowValue>d__22_System_Collections_IEnumerator_Reset__
       ) {
      uVar8 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabd_s16__;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar8 = FUN_03579868(uVar8,0);
      lVar5 = *param_1;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              *(long *)Method_Oculus_Voice_ObjectVoiceExperience_HandleUploadProgressChange__) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_035222a4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(param_1,*(long *)
                                     Method_Oculus_Voice_ObjectVoiceExperience_HandleUploadProgressChange__
                            ,0);
LAB_035222a4:
      plVar4 = (long *)(*(code *)*puVar3)(param_1,uVar8,puVar3[1]);
      if ((plVar4 == (long *)0x0) || (*plVar4 != *(long *)puVar2)) goto LAB_035222cc;
    }
  }
  else {
    plVar4 = (long *)param_1[6];
    thunk_FUN_01f3e6f0();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0352230c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar4 = (long *)(**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
      return plVar4;
    }
  }
  return plVar4;
}


