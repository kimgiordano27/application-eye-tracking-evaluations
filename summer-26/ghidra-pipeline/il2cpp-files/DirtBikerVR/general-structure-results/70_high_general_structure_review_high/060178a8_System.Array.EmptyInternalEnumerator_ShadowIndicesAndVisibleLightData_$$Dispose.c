/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ShadowIndicesAndVisibleLightData>$$Dispose
ENTRY_POINT: 060178a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array_EmptyInternalEnumerator<ShadowIndicesAndVisibleLightData>__Dispose(void)

{
  char *pcVar1;
  long lVar2;
  int *piVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  long unaff_x19;
  long unaff_x22;
  void *unaff_x23;
  size_t unaff_x24;
  void *unaff_x25;
  ulong uVar9;
  long unaff_x27;
  long unaff_x29;
  
  memset(unaff_x23,0,unaff_x24);
  pcVar1 = (char *)thunk_FUN_03ae913c();
  if (*pcVar1 == '\0') {
    if (((*(long *)(unaff_x19 + 0x20) != 0) &&
        (lVar2 = FUN_07290d50(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)) &&
       (*(long *)(lVar2 + 0x110) != 0)) {
      FUN_03523280();
      piVar3 = (int *)thunk_FUN_03ae913c();
      if (*piVar3 == 0) {
        puVar4 = (ulong *)thunk_FUN_03ae913c();
        uVar9 = *puVar4;
        puVar4 = (ulong *)thunk_FUN_03ae913c();
        if (uVar9 <= *puVar4) goto LAB_06017980;
        goto LAB_06017b28;
      }
LAB_06017980:
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x90))();
      if (((*(long *)(unaff_x19 + 0x20) != 0) &&
          (lVar2 = FUN_07290d50(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)) &&
         (*(long *)(lVar2 + 0x110) != 0)) {
        lVar2 = *(long *)(*(long *)(lVar2 + 0x110) + 0x38);
        puVar5 = (undefined8 *)thunk_FUN_03ae913c();
        if (lVar2 != 0) {
          FUN_049da1a4(lVar2,*puVar5,*(undefined8 *)PTR_DAT_084971c8);
          goto System_Array_EmptyInternalEnumerator<ShadowRequestIntermediateUpdateData>__Dispose;
        }
      }
    }
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
System_Array_EmptyInternalEnumerator<ShadowRequestIntermediateUpdateData>__Dispose:
    puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x98);
    uVar6 = *puVar5;
    pcVar8 = (code *)puVar5[2];
    *(void **)(unaff_x29 + -0x10) = unaff_x25;
    (*pcVar8)(uVar6);
    memcpy(unaff_x23,unaff_x25,unaff_x24);
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x30);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03ac4090();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    pcVar8 = (code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x28);
    thunk_FUN_03ae913c();
    (*pcVar8)();
    FUN_035ed8a4(0);
    FUN_035ed8a4(0);
    plVar7 = (long *)thunk_FUN_03ae913c();
    if (*plVar7 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0xa8))();
    }
LAB_06017b28:
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


