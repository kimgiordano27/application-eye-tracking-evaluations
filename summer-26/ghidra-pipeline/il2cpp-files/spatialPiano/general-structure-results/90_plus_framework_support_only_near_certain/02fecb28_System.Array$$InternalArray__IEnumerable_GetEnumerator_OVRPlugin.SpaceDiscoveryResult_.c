/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 02fecb28
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceDiscoveryResult>(void)

{
  void *pvVar1;
  size_t sVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  undefined2 unaff_w24;
  long lVar5;
  
  while( true ) {
    lVar3 = unaff_x21;
    unaff_x19[1] = lVar3;
    unaff_x22 = unaff_x22 + 1;
    unaff_x21 = lVar3;
    if (unaff_x22 == *(long *)(unaff_x20 + 0x20)) break;
    while( true ) {
      lVar5 = unaff_x21;
      if ((unaff_x23 & 1) == 0) {
        pvVar1 = (void *)*unaff_x19;
        lVar3 = unaff_x21;
        if ((ulong)unaff_x19[2] < unaff_x21 + 2U) {
          sVar2 = unaff_x19[2] * 2;
          uVar4 = unaff_x21 + 0x3e2;
          if (sVar2 < uVar4 || sVar2 - uVar4 == 0) {
            sVar2 = uVar4;
          }
          unaff_x19[2] = sVar2;
          pvVar1 = realloc(pvVar1,sVar2);
          *unaff_x19 = pvVar1;
          if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar3 = unaff_x19[1];
        }
        *(undefined2 *)((long)pvVar1 + lVar3) = unaff_w24;
        lVar5 = unaff_x19[1] + 2;
        unaff_x19[1] = lVar5;
      }
      FUN_02fe7288(*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + unaff_x22 * 8));
      lVar3 = unaff_x19[1];
      if (lVar5 == lVar3) break;
      unaff_x23 = 0;
      unaff_x22 = unaff_x22 + 1;
      unaff_x21 = lVar3;
      if (unaff_x22 == *(long *)(unaff_x20 + 0x20)) goto LAB_02fecbd0;
    }
  }
LAB_02fecbd0:
  uVar4 = lVar3 + 1;
  pvVar1 = (void *)*unaff_x19;
  if ((ulong)unaff_x19[2] < uVar4) {
    sVar2 = unaff_x19[2] * 2;
    uVar4 = lVar3 + 0x3e1;
    if (sVar2 < uVar4 || sVar2 - uVar4 == 0) {
      sVar2 = uVar4;
    }
    unaff_x19[2] = sVar2;
    pvVar1 = realloc(pvVar1,sVar2);
    *unaff_x19 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = unaff_x19[1];
    uVar4 = lVar3 + 1;
  }
  unaff_x19[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x7d;
  return;
}


