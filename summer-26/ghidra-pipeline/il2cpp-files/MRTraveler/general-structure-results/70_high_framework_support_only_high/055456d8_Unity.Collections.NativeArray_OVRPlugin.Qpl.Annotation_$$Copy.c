/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 055456d8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy
               (undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *piVar6;
  void *unaff_x19;
  undefined8 *unaff_x20;
  long *plVar7;
  long unaff_x22;
  void *unaff_x23;
  size_t unaff_x24;
  size_t unaff_x25;
  long lVar8;
  long unaff_x26;
  long unaff_x29;
  
  uVar2 = *param_2;
  puVar3 = unaff_x20;
  if (-1 < *(int *)(in_x9 + 0x28)) {
    puVar3 = (undefined8 *)*unaff_x20;
  }
  *(undefined1 *)(unaff_x29 + -0xc) = 0;
  *(undefined8 **)(unaff_x29 + -0x28) = puVar3;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
  (*(code *)param_2[2])(uVar2);
  plVar7 = *(long **)(unaff_x29 + -0x18);
  memset(unaff_x19,0,unaff_x25);
  if (plVar7 == (long *)0x0) {
    bVar1 = false;
  }
  else {
    lVar8 = *(long *)(unaff_x22 + 0x20);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x18) + 0x28)) {
      unaff_x23 = (void *)(unaff_x29 + -0x30);
    }
    memcpy(unaff_x20,unaff_x23,unaff_x24);
    lVar4 = *(long *)(lVar8 + 0xc0);
    lVar8 = *(long *)(lVar4 + 0x58);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03cf1244(lVar8);
      lVar4 = *(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0);
    }
    if (-1 < *(int *)(*(long *)(lVar4 + 0x18) + 0x28)) {
      unaff_x20 = (undefined8 *)*unaff_x20;
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar8) {
          lVar8 = lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138;
          goto LAB_055457d4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar8 = FUN_03cf1348(plVar7,lVar8,2);
LAB_055457d4:
    *(undefined8 **)(unaff_x29 + -0x28) = unaff_x20;
    *(void **)(unaff_x29 + -0x20) = unaff_x19;
    lVar8 = *(long *)(lVar8 + 8);
    (**(code **)(lVar8 + 0x10))
              (*(undefined8 *)(lVar8 + 8),lVar8,plVar7,unaff_x29 + -0x28,unaff_x29 + -0x18);
    bVar1 = *(char *)(unaff_x29 + -0x18) != '\0';
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


