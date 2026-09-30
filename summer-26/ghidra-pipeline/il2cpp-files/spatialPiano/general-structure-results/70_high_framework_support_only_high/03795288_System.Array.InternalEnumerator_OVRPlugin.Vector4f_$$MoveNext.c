/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4f>$$MoveNext
ENTRY_POINT: 03795288
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array_InternalEnumerator<OVRPlugin_Vector4f>__MoveNext(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 *unaff_x21;
  ulong uVar8;
  long unaff_x22;
  int unaff_w23;
  
  iVar1 = (*(code *)*param_1)();
  plVar7 = (long *)*unaff_x21;
  if (unaff_w23 < iVar1) {
    if (plVar7 == (long *)0x0) {
LAB_037953d8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar2 = *(long *)(unaff_x22 + 0x20);
    uVar8 = (ulong)*(uint *)((long)unaff_x21 + 0x1c);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    lVar2 = **(long **)(lVar2 + 0xc0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c(lVar2);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) goto LAB_0379539c;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  else {
    if (plVar7 == (long *)0x0) goto LAB_037953d8;
    lVar2 = *(long *)(unaff_x22 + 0x20);
    uVar8 = unaff_x21[1];
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    lVar2 = **(long **)(lVar2 + 0xc0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c(lVar2);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) goto LAB_0379539c;
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
  }
  puVar3 = (undefined8 *)FUN_02f421d0(plVar7,lVar2,3);
  goto LAB_037953ac;
LAB_0379539c:
  puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
LAB_037953ac:
  (*(code *)*puVar3)(plVar7,uVar8,puVar3[1]);
  return unaff_w23 < iVar1;
}


