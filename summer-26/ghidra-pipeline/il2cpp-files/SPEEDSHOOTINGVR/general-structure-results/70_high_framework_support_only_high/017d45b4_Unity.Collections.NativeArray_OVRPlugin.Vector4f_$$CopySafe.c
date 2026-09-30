/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopySafe
ENTRY_POINT: 017d45b4
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


int Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopySafe(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar5;
  ulong unaff_x22;
  
  do {
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 == 0) {
LAB_017d4630:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar5 = (uint)unaff_x22;
    if ((*(uint *)(lVar3 + 0x18) <= uVar5) || (*(uint *)(lVar3 + 0x18) <= unaff_w21)) {
LAB_017d4634:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    lVar1 = (long)(int)unaff_w21;
    unaff_w21 = unaff_w21 + 1;
    *(undefined8 *)(lVar3 + lVar1 * 8 + 0x20) = *(undefined8 *)(lVar3 + (long)(int)uVar5 * 8 + 0x20)
    ;
    thunk_FUN_0106e12c();
    uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
    unaff_x22 = (ulong)(uVar5 + 1);
    do {
      if ((int)uVar4 <= (int)unaff_x22) {
        FUN_01d6ab30(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,(int)uVar4 - unaff_w21,0);
        iVar2 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar2 - unaff_w21;
      }
      unaff_x22 = (ulong)(int)unaff_x22;
      do {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto LAB_017d4630;
        if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x22) goto LAB_017d4634;
        if (unaff_x20 == 0) goto LAB_017d4630;
        uVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),
                           *(undefined8 *)(lVar3 + unaff_x22 * 8 + 0x20),
                           *(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar4 & 1) == 0) {
          uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        uVar4 = (ulong)*(int *)(unaff_x19 + 0x18);
        unaff_x22 = unaff_x22 + 1;
      } while ((long)unaff_x22 < (long)uVar4);
    } while ((int)uVar4 <= (int)unaff_x22);
  } while( true );
}


