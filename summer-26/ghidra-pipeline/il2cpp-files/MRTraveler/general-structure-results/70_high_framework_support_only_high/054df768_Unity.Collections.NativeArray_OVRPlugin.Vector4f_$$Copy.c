/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 054df768
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  
  FUN_03cf1244();
  FUN_054df1c0();
  if ((int)unaff_w23 <= (int)unaff_w19) {
Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe:
    lVar4 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    FUN_054df1c0();
    return unaff_w19;
  }
  do {
    do {
      unaff_w19 = unaff_w19 + 1;
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) {
LAB_054df8f8:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar4 = unaff_x20 + (long)(int)unaff_w19 * 0x10;
      uVar1 = *(undefined8 *)(lVar4 + 0x20);
      uVar2 = *(undefined8 *)(lVar4 + 0x28);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      iVar3 = (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40),uVar1,uVar2);
    } while (iVar3 < 0);
    do {
      unaff_w23 = unaff_w23 - 1;
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w23) goto LAB_054df8f8;
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      iVar3 = (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40));
    } while (iVar3 < 0);
    if ((int)unaff_w23 <= (int)unaff_w19)
    goto Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe;
    lVar4 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03cf1244();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    FUN_054df1c0();
  } while( true );
}


