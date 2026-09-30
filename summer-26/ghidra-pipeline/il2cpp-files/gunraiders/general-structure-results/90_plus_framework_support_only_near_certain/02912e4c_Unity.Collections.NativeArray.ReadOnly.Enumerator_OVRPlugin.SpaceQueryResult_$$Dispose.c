/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 02912e4c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__Dispose
               (long *param_1)

{
  ulong uVar1;
  uint in_w8;
  int unaff_w21;
  int unaff_w22;
  uint uVar2;
  long unaff_x23;
  int iVar3;
  long lVar4;
  
  uVar2 = unaff_w22 - 1;
  if (uVar2 < in_w8) {
    iVar3 = 0;
    do {
      lVar4 = (long)(int)uVar2;
      if (*(int *)(unaff_x23 + lVar4 * 0x40 + 0x20) == unaff_w21) {
        if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar1 = (**(code **)(*param_1 + 0x1b8))
                          (param_1,*(undefined8 *)(unaff_x23 + lVar4 * 0x40 + 0x28));
        if ((uVar1 & 1) != 0) {
          return uVar2;
        }
        in_w8 = *(uint *)(unaff_x23 + 0x18);
      }
      if (in_w8 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      uVar2 = *(uint *)(unaff_x23 + lVar4 * 0x40 + 0x24);
      if ((int)in_w8 <= iVar3) {
        FUN_032f2aac(0);
      }
      in_w8 = *(uint *)(unaff_x23 + 0x18);
      iVar3 = iVar3 + 1;
    } while (uVar2 < in_w8);
  }
  return uVar2;
}


