/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 02912e30
PROGRAM: gunraiders-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>___ctor
               (ulong param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long in_x9;
  int unaff_w21;
  uint uVar4;
  long unaff_x23;
  int iVar5;
  long unaff_x25;
  long lVar6;
  
  iVar5 = *(int *)(unaff_x25 + (param_1 & 0xffffffff) * 4 + 0x20);
  plVar2 = (long *)FUN_022cb9f0(*(undefined8 *)(*(long *)(in_x9 + 0xc0) + 0x18));
  if (unaff_x23 != 0) {
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    uVar4 = iVar5 - 1;
    if (uVar4 < uVar1) {
      iVar5 = 0;
      do {
        lVar6 = (long)(int)uVar4;
        if (*(int *)(unaff_x23 + lVar6 * 0x40 + 0x20) == unaff_w21) {
          if (plVar2 == (long *)0x0) goto LAB_02913020;
          uVar3 = (**(code **)(*plVar2 + 0x1b8))
                            (plVar2,*(undefined8 *)(unaff_x23 + lVar6 * 0x40 + 0x28));
          if ((uVar3 & 1) != 0) {
            return uVar4;
          }
          uVar1 = *(uint *)(unaff_x23 + 0x18);
        }
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        uVar4 = *(uint *)(unaff_x23 + lVar6 * 0x40 + 0x24);
        if ((int)uVar1 <= iVar5) {
          FUN_032f2aac(0);
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        iVar5 = iVar5 + 1;
      } while (uVar4 < uVar1);
    }
    return uVar4;
  }
LAB_02913020:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


