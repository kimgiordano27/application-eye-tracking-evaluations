/*
FUNCTION_NAME: OVRManager$$remove_VrFocusLost
ENTRY_POINT: 03663e6c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 157
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void OVRManager__remove_VrFocusLost
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  char *unaff_x20;
  long unaff_x21;
  long unaff_x25;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float unaff_s14;
  undefined8 in_stack_00000010;
  
  lVar1 = FUN_04070398(param_4,0);
  lVar2 = FUN_04070398();
  if (lVar2 != 0) {
    uVar4 = FUN_0407d3c8(lVar2,0);
    uVar6 = param_2;
    uVar7 = param_3;
    lVar2 = FUN_04070398();
    if ((lVar2 != 0) && (uVar5 = FUN_0407d7c4(lVar2,0), lVar1 != 0)) {
      thunk_FUN_0407e5d4(uVar4,param_2,param_3,uVar5,uVar6,uVar7,lVar1,0);
      if (*(long *)(unaff_x21 + 0x70) != 0) {
        fVar3 = (float)FUN_0403cb70(*(long *)(unaff_x21 + 0x70),0);
        *(float *)(unaff_x19 + 0x104) = fVar3;
        *(float *)(unaff_x19 + 0x108) = unaff_s14;
        if (*unaff_x20 == '\0') {
          uVar6 = CONCAT44(unaff_s14 - (float)((ulong)in_stack_00000010 >> 0x20),
                           fVar3 - (float)in_stack_00000010);
        }
        else {
          if (DAT_0482ee9c == '\0') {
            thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
            DAT_0482ee9c = '\x01';
          }
          uVar6 = **(undefined8 **)
                    (*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
        }
        *(undefined8 *)(unaff_x25 + 8) = uVar6;
        *(undefined4 *)(unaff_x19 + 0x148) = 0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


