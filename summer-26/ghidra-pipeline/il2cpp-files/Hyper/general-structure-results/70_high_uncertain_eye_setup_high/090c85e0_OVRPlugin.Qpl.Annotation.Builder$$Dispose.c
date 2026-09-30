/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Dispose
ENTRY_POINT: 090c85e0
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Dispose(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  undefined8 *unaff_x23;
  ulong unaff_x24;
  long *plVar5;
  long *unaff_x25;
  
  do {
    if ((unaff_x20 != 0) &&
       (lVar3 = thunk_FUN_04983e64(unaff_x20,*(undefined8 *)(*unaff_x25 + 0x40)), lVar3 == 0)) {
LAB_090c8644:
      uVar4 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar4,0);
    }
    if (*(uint *)(unaff_x25 + 3) <= unaff_x24) {
LAB_090c8640:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    unaff_x25[unaff_x24 + 4] = unaff_x20;
    thunk_FUN_049ee3d8(unaff_x25 + unaff_x24 + 4,unaff_x20);
    uVar1 = unaff_x24 + 1;
    lVar3 = *unaff_x22;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar3 = *unaff_x22;
    }
    if (**(long **)(lVar3 + 0xb8) == 0) break;
    if ((long)*(int *)(**(long **)(lVar3 + 0xb8) + 0x18) <= (long)uVar1) {
      FUN_08fdfedc();
      return;
    }
    plVar5 = *(long **)(unaff_x19 + 0xd8);
    uVar4 = *(undefined8 *)(unaff_x19 + 0xa0);
    lVar3 = thunk_FUN_04983f60(*unaff_x23);
    FUN_0904e168(lVar3,uVar4,0);
    if (plVar5 == (long *)0x0) break;
    if ((lVar3 != 0) &&
       (lVar2 = thunk_FUN_04983e64(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0))
    goto LAB_090c8644;
    if (*(uint *)(plVar5 + 3) <= uVar1) goto LAB_090c8640;
    plVar5[unaff_x24 + 5] = lVar3;
    thunk_FUN_049ee3d8(plVar5 + unaff_x24 + 5,lVar3);
    unaff_x25 = *(long **)(unaff_x19 + 0xe0);
    uVar4 = *(undefined8 *)(unaff_x19 + 0xa8);
    unaff_x20 = thunk_FUN_04983f60(*unaff_x23);
    FUN_0904e168(unaff_x20,uVar4,0);
    unaff_x24 = uVar1;
  } while (unaff_x25 != (long *)0x0);
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


