/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Qpl.Annotation>$$GetEnumerator
ENTRY_POINT: 02876d28
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Qpl_Annotation>__GetEnumerator(long param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long *plVar5;
  long in_x9;
  long lVar6;
  long lVar7;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  ulong __n;
  ulong unaff_x24;
  undefined8 unaff_x25;
  void *pvVar8;
  uint unaff_w26;
  long unaff_x27;
  uint unaff_w28;
  long unaff_x29;
  
  FUN_015d7e34(param_1 + 0x20,*(long *)(in_x9 + 0x80) + 0x40);
  plVar5 = *(long **)(unaff_x19 + 0x28);
  if ((plVar5 == (long *)0x0) || (lVar6 = *(long *)(unaff_x19 + 0x20), lVar6 == 0))
  goto LAB_02876ee0;
  uVar4 = 0;
  if (unaff_w20 != 0) {
    uVar4 = unaff_w26 / unaff_w20;
  }
  uVar4 = unaff_w26 - uVar4 * unaff_w20;
  if (uVar4 < *(uint *)(lVar6 + 0x18)) {
    uVar2 = *(uint *)(plVar5 + 3);
    *(undefined8 *)(unaff_x29 + -0x40) = unaff_x22;
    *(undefined8 *)(unaff_x29 + -0x38) = unaff_x23;
    if (unaff_w28 < uVar2) {
      lVar7 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
      uVar2 = *(uint *)(*plVar5 + 0x104);
      uVar3 = *(undefined4 *)(lVar6 + (ulong)uVar4 * 4 + 0x20);
      *(undefined8 *)(unaff_x29 + -0x48) = unaff_x25;
      FUN_015d7e34((long)plVar5 + (ulong)uVar2 * unaff_x27 + 0x20,
                   *(long *)(*(long *)(lVar7 + 0xa0) + 0x80) + 0x20,uVar3);
      plVar5 = *(long **)(unaff_x19 + 0x28);
      if (plVar5 == (long *)0x0) {
LAB_02876ee0:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      lVar6 = *(long *)(unaff_x21 + 0x20);
      pvVar8 = *(void **)(unaff_x29 + -0x28);
      pvVar1 = *(void **)(unaff_x29 + -0x18);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x60) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x18);
      }
      memcpy(pvVar8,pvVar1,unaff_x24);
      if (unaff_w28 < *(uint *)(plVar5 + 3)) {
        FUN_017fc374((long)plVar5 + (ulong)*(uint *)(*plVar5 + 0x104) * unaff_x27 + 0x20,
                     *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0xa0) + 0x80) + 0x60,pvVar8,
                     unaff_x24 & 0xffffffff);
        plVar5 = *(long **)(unaff_x19 + 0x28);
        if (plVar5 == (long *)0x0) goto LAB_02876ee0;
        lVar6 = *(long *)(unaff_x21 + 0x20);
        pvVar8 = *(void **)(unaff_x29 + -0x40);
        __n = *(ulong *)(unaff_x29 + -0x38);
        pvVar1 = *(void **)(unaff_x29 + -0x48);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0xa8) + 0x28)) {
          pvVar1 = (void *)(unaff_x29 + -0x20);
        }
        memcpy(pvVar8,pvVar1,__n);
        if (unaff_w28 < *(uint *)(plVar5 + 3)) {
          FUN_017fc374((long)plVar5 + (ulong)*(uint *)(*plVar5 + 0x104) * unaff_x27 + 0x20,
                       *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0xa0) + 0x80) + 0x80,pvVar8,
                       __n & 0xffffffff);
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if (lVar6 == 0) goto LAB_02876ee0;
          lVar7 = *(long *)(unaff_x29 + -0x30);
          if (uVar4 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar6 + (ulong)uVar4 * 4 + 0x20) = unaff_w28;
            if (*(long *)(lVar7 + 0x28) == *(long *)(unaff_x29 + -8)) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


