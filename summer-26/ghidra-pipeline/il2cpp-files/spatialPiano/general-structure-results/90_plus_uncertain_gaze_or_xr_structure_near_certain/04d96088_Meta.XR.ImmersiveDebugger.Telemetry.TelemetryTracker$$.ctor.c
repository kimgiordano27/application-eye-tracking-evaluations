/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$.ctor
ENTRY_POINT: 04d96088
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker___ctor
               (long param_1,long param_2,void *param_3,long param_4)

{
  void *__src;
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulong __n;
  undefined8 *__dest;
  long lVar6;
  long unaff_x25;
  long lVar7;
  long unaff_x29;
  
  __n = (ulong)*(uint *)(*(long *)(param_1 + 0x70) + 0xfc);
  __dest = (undefined8 *)(&stack0x00000000 + -(__n + 0xf & 0x1fffffff0));
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_04d961a0:
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    lVar1 = (*(code *)**(undefined8 **)(param_1 + 0x60))();
    if (lVar1 != 0) {
      do {
        puVar3 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x68);
        (*(code *)puVar3[2])(*puVar3,puVar3,lVar1,0,unaff_x29 + -0x10);
        lVar7 = *(long *)(param_4 + 0x20);
        lVar6 = *(long *)(unaff_x29 + -0x10);
        __src = param_3;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x70) + 0x28)) {
          __src = (void *)(unaff_x29 + -0x18);
        }
        memcpy(__dest,__src,__n);
        if (lVar6 == 0) goto LAB_04d961a0;
        lVar7 = *(long *)(lVar7 + 0xc0);
        puVar3 = __dest;
        if (-1 < *(int *)(*(long *)(lVar7 + 0x70) + 0x28)) {
          puVar3 = (undefined8 *)*__dest;
        }
        puVar4 = *(undefined8 **)(lVar7 + 0x78);
        uVar2 = *puVar4;
        pcVar5 = (code *)puVar4[2];
        *(undefined8 **)(unaff_x29 + -0x10) = puVar3;
        (*pcVar5)(uVar2,puVar4,lVar6,unaff_x29 + -0x10);
        lVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80))
                          (lVar1);
      } while (lVar1 != 0);
    }
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


