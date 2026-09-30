/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Qpl.Annotation>$$get_Length
ENTRY_POINT: 02876c94
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Qpl_Annotation>__get_Length(void)

{
  void *pvVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  ulong __n;
  ulong unaff_x24;
  undefined8 unaff_x25;
  void *pvVar9;
  long lVar10;
  uint unaff_w28;
  long unaff_x29;
  
  FUN_017fce8c();
  plVar6 = *(long **)(unaff_x19 + 0x28);
  if (plVar6 != (long *)0x0) {
    uVar2 = *(uint *)(plVar6 + 3);
    *(undefined8 *)(unaff_x29 + -0x28) = unaff_x20;
    if (unaff_w28 < uVar2) {
      uVar4 = *(uint *)(unaff_x29 + -0xc);
      uVar2 = *(uint *)(unaff_x19 + 0x1c);
      lVar10 = (long)(int)unaff_w28;
      FUN_015d6fa0((long)plVar6 + (ulong)*(uint *)(*plVar6 + 0x104) * lVar10 + 0x20,
                   *(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa0) + 0x80),1);
      plVar6 = *(long **)(unaff_x19 + 0x28);
      if (plVar6 == (long *)0x0) goto LAB_02876ee0;
      if (unaff_w28 < *(uint *)(plVar6 + 3)) {
        FUN_015d7e34((long)plVar6 + (ulong)*(uint *)(*plVar6 + 0x104) * lVar10 + 0x20,
                     *(long *)(*(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0xa0) +
                              0x80) + 0x40,uVar4);
        plVar6 = *(long **)(unaff_x19 + 0x28);
        if ((plVar6 == (long *)0x0) || (lVar7 = *(long *)(unaff_x19 + 0x20), lVar7 == 0))
        goto LAB_02876ee0;
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar4 / uVar2;
        }
        uVar4 = uVar4 - uVar5 * uVar2;
        if (uVar4 < *(uint *)(lVar7 + 0x18)) {
          uVar2 = *(uint *)(plVar6 + 3);
          *(undefined8 *)(unaff_x29 + -0x40) = unaff_x22;
          *(undefined8 *)(unaff_x29 + -0x38) = unaff_x23;
          if (unaff_w28 < uVar2) {
            lVar8 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
            uVar2 = *(uint *)(*plVar6 + 0x104);
            uVar3 = *(undefined4 *)(lVar7 + (ulong)uVar4 * 4 + 0x20);
            *(undefined8 *)(unaff_x29 + -0x48) = unaff_x25;
            FUN_015d7e34((long)plVar6 + (ulong)uVar2 * lVar10 + 0x20,
                         *(long *)(*(long *)(lVar8 + 0xa0) + 0x80) + 0x20,uVar3);
            plVar6 = *(long **)(unaff_x19 + 0x28);
            if (plVar6 == (long *)0x0) goto LAB_02876ee0;
            lVar7 = *(long *)(unaff_x21 + 0x20);
            pvVar9 = *(void **)(unaff_x29 + -0x28);
            pvVar1 = *(void **)(unaff_x29 + -0x18);
            if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x60) + 0x28)) {
              pvVar1 = (void *)(unaff_x29 + -0x18);
            }
            memcpy(pvVar9,pvVar1,unaff_x24);
            if (unaff_w28 < *(uint *)(plVar6 + 3)) {
              FUN_017fc374((long)plVar6 + (ulong)*(uint *)(*plVar6 + 0x104) * lVar10 + 0x20,
                           *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0xa0) + 0x80) + 0x60,pvVar9
                           ,unaff_x24 & 0xffffffff);
              plVar6 = *(long **)(unaff_x19 + 0x28);
              if (plVar6 == (long *)0x0) goto LAB_02876ee0;
              lVar7 = *(long *)(unaff_x21 + 0x20);
              pvVar9 = *(void **)(unaff_x29 + -0x40);
              __n = *(ulong *)(unaff_x29 + -0x38);
              pvVar1 = *(void **)(unaff_x29 + -0x48);
              if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0xa8) + 0x28)) {
                pvVar1 = (void *)(unaff_x29 + -0x20);
              }
              memcpy(pvVar9,pvVar1,__n);
              if (unaff_w28 < *(uint *)(plVar6 + 3)) {
                FUN_017fc374((long)plVar6 + (ulong)*(uint *)(*plVar6 + 0x104) * lVar10 + 0x20,
                             *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0xa0) + 0x80) + 0x80,
                             pvVar9,__n & 0xffffffff);
                lVar10 = *(long *)(unaff_x19 + 0x20);
                if (lVar10 == 0) goto LAB_02876ee0;
                lVar7 = *(long *)(unaff_x29 + -0x30);
                if (uVar4 < *(uint *)(lVar10 + 0x18)) {
                  *(uint *)(lVar10 + (ulong)uVar4 * 4 + 0x20) = unaff_w28;
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
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_017fc5b0();
  }
LAB_02876ee0:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


