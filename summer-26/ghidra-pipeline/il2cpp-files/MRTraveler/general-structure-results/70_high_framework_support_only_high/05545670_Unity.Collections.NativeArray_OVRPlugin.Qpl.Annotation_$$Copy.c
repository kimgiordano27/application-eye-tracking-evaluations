/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 05545670
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy
               (undefined8 param_1,undefined8 param_2,void *param_3,void *param_4,long param_5)

{
  void *__src;
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 *__dest;
  long *plVar9;
  long unaff_x22;
  ulong uVar10;
  long unaff_x26;
  long lVar11;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  *(void **)(unaff_x29 + -0x30) = param_3;
  lVar11 = *(long *)(param_5 + 0x20);
  lVar5 = *(long *)(lVar11 + 0xc0);
  lVar7 = *(long *)(lVar5 + 0x18);
  uVar10 = (ulong)*(uint *)(lVar7 + 0xfc);
  uVar1 = *(uint *)(*(long *)(lVar5 + 0x70) + 0xfc);
  __dest = (undefined8 *)(&stack0x00000000 + -(uVar10 + 0xf & 0x1fffffff0));
  __src = param_3;
  if (-1 < *(int *)(lVar7 + 0x28)) {
    __src = (void *)(unaff_x29 + -0x30);
  }
  memcpy(__dest,__src,uVar10);
  lVar5 = *(long *)(lVar11 + 0xc0);
  puVar4 = *(undefined8 **)(lVar5 + 0xd8);
  uVar3 = *puVar4;
  puVar6 = __dest;
  if (-1 < *(int *)(*(long *)(lVar5 + 0x18) + 0x28)) {
    puVar6 = (undefined8 *)*__dest;
  }
  *(undefined1 *)(unaff_x29 + -0xc) = 0;
  *(undefined8 **)(unaff_x29 + -0x28) = puVar6;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
  (*(code *)puVar4[2])(uVar3,puVar4,param_2,unaff_x29 + -0x28,unaff_x29 + -0x18);
  plVar9 = *(long **)(unaff_x29 + -0x18);
  memset(param_4,0,(ulong)uVar1);
  if (plVar9 == (long *)0x0) {
    bVar2 = false;
  }
  else {
    lVar5 = *(long *)(unaff_x22 + 0x20);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x18) + 0x28)) {
      param_3 = (void *)(unaff_x29 + -0x30);
    }
    memcpy(__dest,param_3,uVar10);
    lVar7 = *(long *)(lVar5 + 0xc0);
    lVar5 = *(long *)(lVar7 + 0x58);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244(lVar5);
      lVar7 = *(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0);
    }
    if (-1 < *(int *)(*(long *)(lVar7 + 0x18) + 0x28)) {
      __dest = (undefined8 *)*__dest;
    }
    lVar7 = *plVar9;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          lVar5 = lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138;
          goto LAB_055457d4;
        }
        uVar10 = uVar10 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar10 != 0);
    }
    lVar5 = FUN_03cf1348(plVar9,lVar5,2);
LAB_055457d4:
    *(undefined8 **)(unaff_x29 + -0x28) = __dest;
    *(void **)(unaff_x29 + -0x20) = param_4;
    lVar5 = *(long *)(lVar5 + 8);
    (**(code **)(lVar5 + 0x10))
              (*(undefined8 *)(lVar5 + 8),lVar5,plVar9,unaff_x29 + -0x28,unaff_x29 + -0x18);
    bVar2 = *(char *)(unaff_x29 + -0x18) != '\0';
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


