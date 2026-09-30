/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 017d44e4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  if ((int)param_1 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    do {
      lVar4 = *(long *)(unaff_x19 + 0x10);
      if (lVar4 == 0) goto LAB_017d4630;
      if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_017d4634;
      if (unaff_x20 == 0) goto LAB_017d4630;
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar4 + uVar7 * 8 + 0x20)
                         ,*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar2 & 1) != 0) {
        param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
        break;
      }
      param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)param_1);
  }
  if ((int)param_1 <= (int)uVar7) {
    return 0;
  }
  uVar2 = uVar7 & 0xffffffff;
  do {
    uVar7 = (ulong)((int)uVar7 + 1);
    do {
      uVar5 = (uint)uVar2;
      if ((int)param_1 <= (int)uVar7) {
        FUN_01d6ab30(*(undefined8 *)(unaff_x19 + 0x10),uVar2,(int)param_1 - uVar5,0);
        iVar1 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar5;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar1 - uVar5;
      }
      uVar7 = (ulong)(int)uVar7;
      do {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0) goto LAB_017d4630;
        if (*(uint *)(lVar4 + 0x18) <= (uint)uVar7) goto LAB_017d4634;
        if (unaff_x20 == 0) goto LAB_017d4630;
        uVar3 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),
                           *(undefined8 *)(lVar4 + uVar7 * 8 + 0x20),
                           *(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar3 & 1) == 0) {
          param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)param_1);
      uVar6 = (uint)uVar7;
    } while ((int)param_1 <= (int)uVar6);
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) {
LAB_017d4630:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if ((*(uint *)(lVar4 + 0x18) <= uVar6) || (*(uint *)(lVar4 + 0x18) <= uVar5)) {
LAB_017d4634:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    *(undefined8 *)(lVar4 + (long)(int)uVar5 * 8 + 0x20) =
         *(undefined8 *)(lVar4 + (long)(int)uVar6 * 8 + 0x20);
    thunk_FUN_0106e12c();
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
    uVar2 = (ulong)(uVar5 + 1);
  } while( true );
}


