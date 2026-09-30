/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetSubArray
ENTRY_POINT: 017d1fd4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetSubArray(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 in_x9;
  long unaff_x19;
  long unaff_x20;
  uint uVar3;
  ulong unaff_x21;
  uint unaff_w22;
  
  do {
    *(undefined8 *)(param_1 + (long)(int)unaff_w22 * 8) = in_x9;
    uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
    unaff_w22 = unaff_w22 + 1;
    unaff_x21 = (ulong)((int)unaff_x21 + 1);
    do {
      if ((int)uVar2 <= (int)unaff_x21) {
        *(uint *)(unaff_x19 + 0x18) = unaff_w22;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return (int)uVar2 - unaff_w22;
      }
      unaff_x21 = (ulong)(int)unaff_x21;
      do {
        lVar1 = *(long *)(unaff_x19 + 0x10);
        if (lVar1 == 0) goto LAB_017d200c;
        if (*(uint *)(lVar1 + 0x18) <= (uint)unaff_x21) goto LAB_017d2010;
        if (unaff_x20 == 0) goto LAB_017d200c;
        uVar2 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),
                           *(undefined8 *)(lVar1 + unaff_x21 * 8 + 0x20),
                           *(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar2 & 1) == 0) {
          uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        uVar2 = (ulong)*(int *)(unaff_x19 + 0x18);
        unaff_x21 = unaff_x21 + 1;
      } while ((long)unaff_x21 < (long)uVar2);
      uVar3 = (uint)unaff_x21;
    } while ((int)uVar2 <= (int)uVar3);
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) {
LAB_017d200c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if ((*(uint *)(param_1 + 0x18) <= uVar3) || (*(uint *)(param_1 + 0x18) <= unaff_w22)) {
LAB_017d2010:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    param_1 = param_1 + 0x20;
    in_x9 = *(undefined8 *)(param_1 + (long)(int)uVar3 * 8);
  } while( true );
}


