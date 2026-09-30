/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 017d1ee4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe(ulong param_1)

{
  char in_NG;
  char in_OV;
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  if (in_NG == in_OV) {
    uVar5 = 0;
    do {
      lVar3 = *(long *)(unaff_x19 + 0x10);
      if (lVar3 == 0) goto LAB_017d200c;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_017d2010;
      if (unaff_x20 == 0) goto LAB_017d200c;
      uVar1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar3 + uVar5 * 8 + 0x20)
                         ,*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar1 & 1) != 0) {
        param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
        break;
      }
      param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)param_1);
  }
  else {
    uVar5 = 0;
  }
  if ((int)param_1 <= (int)uVar5) {
    return 0;
  }
  uVar1 = uVar5 & 0xffffffff;
  do {
    uVar5 = (ulong)((int)uVar5 + 1);
    do {
      uVar6 = (uint)uVar1;
      if ((int)param_1 <= (int)uVar5) {
        *(uint *)(unaff_x19 + 0x18) = uVar6;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return (int)param_1 - uVar6;
      }
      uVar5 = (ulong)(int)uVar5;
      do {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto LAB_017d200c;
        if (*(uint *)(lVar3 + 0x18) <= (uint)uVar5) goto LAB_017d2010;
        if (unaff_x20 == 0) goto LAB_017d200c;
        uVar2 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),
                           *(undefined8 *)(lVar3 + uVar5 * 8 + 0x20),
                           *(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar2 & 1) == 0) {
          param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)param_1);
      uVar4 = (uint)uVar5;
    } while ((int)param_1 <= (int)uVar4);
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 == 0) {
LAB_017d200c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if ((*(uint *)(lVar3 + 0x18) <= uVar4) || (*(uint *)(lVar3 + 0x18) <= uVar6)) {
LAB_017d2010:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    *(undefined8 *)(lVar3 + 0x20 + (long)(int)uVar6 * 8) =
         *(undefined8 *)(lVar3 + 0x20 + (long)(int)uVar4 * 8);
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
    uVar1 = (ulong)(uVar6 + 1);
  } while( true );
}


