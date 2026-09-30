/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 017d4550
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(ulong param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar5;
  ulong unaff_x22;
  
  do {
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      if ((int)param_1 <= (int)unaff_x22) {
        FUN_01d6ab30(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,(int)param_1 - unaff_w21,0);
        iVar2 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar2 - unaff_w21;
      }
      unaff_x22 = (ulong)(int)unaff_x22;
      do {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) goto LAB_017d4630;
        if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x22) goto LAB_017d4634;
        if (unaff_x20 == 0) goto LAB_017d4630;
        uVar3 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),
                           *(undefined8 *)(lVar4 + unaff_x22 * 8 + 0x20),
                           *(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar3 & 1) == 0) {
          param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
        unaff_x22 = unaff_x22 + 1;
      } while ((long)unaff_x22 < (long)param_1);
      uVar5 = (uint)unaff_x22;
    } while ((int)param_1 <= (int)uVar5);
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) {
LAB_017d4630:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if ((*(uint *)(lVar4 + 0x18) <= uVar5) || (*(uint *)(lVar4 + 0x18) <= unaff_w21)) {
LAB_017d4634:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    lVar1 = (long)(int)unaff_w21;
    unaff_w21 = unaff_w21 + 1;
    *(undefined8 *)(lVar4 + lVar1 * 8 + 0x20) = *(undefined8 *)(lVar4 + (long)(int)uVar5 * 8 + 0x20)
    ;
    thunk_FUN_0106e12c();
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
  } while( true );
}


