/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.AppPerfFrameStats>$$MoveNext
ENTRY_POINT: 03ccea80
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__MoveNext
                (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  uVar2 = FUN_03cd1428(param_2,param_3,*(undefined8 *)(param_1 + 0x48));
  if ((uVar2 & 1) == 0) {
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      FUN_02eea768(lVar5);
    }
    plVar3 = (long *)thunk_FUN_02ef170c();
    if ((plVar3 != (long *)0x0) && (*(int *)(unaff_x20 + 0x20) == 0)) {
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02eea768(lVar5);
      }
      lVar6 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_03cceba4;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_02eea86c(plVar3,lVar5,0);
LAB_03cceba4:
      iVar1 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (0 < iVar1) goto LAB_03ccebb8;
    }
    uVar2 = System_Array_InternalEnumerator<OVRTriangleMesh_Triangle>__Dispose();
    uVar2 = (ulong)(uVar2 >> 0x20 == 0 && *(int *)(unaff_x20 + 0x20) == (int)uVar2);
  }
  else {
    if (*(int *)(unaff_x20 + 0x20) == *(int *)(unaff_x21 + 0x20)) {
      uVar2 = FUN_03ccf7e0();
      return uVar2;
    }
LAB_03ccebb8:
    uVar2 = 0;
  }
  return uVar2;
}


