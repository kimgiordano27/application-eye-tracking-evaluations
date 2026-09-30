/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 03ca6440
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 98
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  int *unaff_x21;
  int unaff_w23;
  
  do {
    param_1 = FUN_02dcfd18(param_1);
    do {
      lVar3 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == param_1) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_03ca6490;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02dd004c();
LAB_03ca6490:
      uVar1 = (*(code *)*puVar2)();
      if (((uVar1 & 1) != 0) || (unaff_w23 = unaff_w23 + 1, *unaff_x21 <= unaff_w23)) {
        return uVar1 & 1;
      }
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      FUN_03ca53f8();
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02dcfd18();
      }
      param_1 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xe0);
    } while ((*(ushort *)(param_1 + 0x135) & 1) != 0);
  } while( true );
}


