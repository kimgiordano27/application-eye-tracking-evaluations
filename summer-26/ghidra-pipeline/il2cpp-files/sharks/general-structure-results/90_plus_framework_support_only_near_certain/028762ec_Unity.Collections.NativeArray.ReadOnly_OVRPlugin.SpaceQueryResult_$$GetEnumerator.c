/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 028762ec
PROGRAM: sharks-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__GetEnumerator(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 in_CY;
  undefined8 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long *plVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long lVar9;
  long unaff_x25;
  undefined8 uVar10;
  uint unaff_w27;
  uint unaff_w28;
  long unaff_x29;
  
  do {
    if ((bool)in_CY) {
LAB_028765c0:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    uVar10 = *(undefined8 *)(param_1 + 0xe0);
    uVar3 = thunk_FUN_018445e8((long)unaff_x23 +
                               (ulong)*(uint *)(*unaff_x23 + 0x104) * unaff_x21 + 0x20,
                               *(long *)(*(long *)(param_1 + 0xa0) + 0x80) + 0x60);
    puVar7 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x24;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    FUN_017fce8c(unaff_x25,uVar10,*(undefined8 *)(unaff_x29 + -0x30),uVar3,unaff_x29 + -0x18,
                 unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      if (unaff_w22 == 0) {
        plVar8 = *(long **)(unaff_x19 + 0x28);
        if (plVar8 == (long *)0x0) goto LAB_028765c4;
        if (*(uint *)(plVar8 + 3) <= unaff_w28) goto LAB_028765c0;
        lVar9 = *(long *)(unaff_x19 + 0x20);
        uVar1 = *(uint *)(unaff_x19 + 0x1c);
        puVar5 = (undefined4 *)
                 thunk_FUN_018445e8((long)plVar8 +
                                    (ulong)*(uint *)(*plVar8 + 0x104) * unaff_x21 + 0x20,
                                    *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0
                                                                 ) + 0xa0) + 0x80) + 0x20);
        if (lVar9 == 0) goto LAB_028765c4;
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = unaff_w27 / uVar1;
        }
        uVar1 = unaff_w27 - uVar2 * uVar1;
        if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_028765c0;
        *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = *puVar5;
      }
      else {
        plVar8 = *(long **)(unaff_x19 + 0x28);
        if (plVar8 == (long *)0x0) goto LAB_028765c4;
        if (*(uint *)(plVar8 + 3) <= unaff_w28) goto LAB_028765c0;
        puVar5 = (undefined4 *)
                 thunk_FUN_018445e8((long)plVar8 +
                                    (ulong)*(uint *)(*plVar8 + 0x104) * unaff_x21 + 0x20,
                                    *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0
                                                                 ) + 0xa0) + 0x80) + 0x20);
        if (*(uint *)(plVar8 + 3) <= unaff_w22) goto LAB_028765c0;
        FUN_015d7e34((long)plVar8 + (ulong)*(uint *)(*plVar8 + 0x104) * (long)(int)unaff_w22 + 0x20,
                     *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0) +
                              0x80) + 0x20,*puVar5);
      }
      plVar8 = *(long **)(unaff_x19 + 0x28);
      if (plVar8 != (long *)0x0) {
        if (*(uint *)(plVar8 + 3) <= unaff_w28) goto LAB_028765c0;
        FUN_015d6fa0((long)plVar8 + (ulong)*(uint *)(*plVar8 + 0x104) * unaff_x21 + 0x20,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0) + 0x80),0);
        plVar8 = *(long **)(unaff_x19 + 0x28);
        if (plVar8 != (long *)0x0) {
          if (*(uint *)(plVar8 + 3) <= unaff_w28) goto LAB_028765c0;
          FUN_015d7e34((long)plVar8 + (ulong)*(uint *)(*plVar8 + 0x104) * unaff_x21 + 0x20,
                       *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0) +
                                0x80) + 0x20,*(undefined4 *)(unaff_x19 + 0x10));
          plVar8 = *(long **)(unaff_x19 + 0x28);
          if (plVar8 != (long *)0x0) {
            if (unaff_w28 < *(uint *)(plVar8 + 3)) {
              pvVar6 = (void *)thunk_FUN_018445e8((long)plVar8 +
                                                  (ulong)*(uint *)(*plVar8 + 0x104) * unaff_x21 +
                                                  0x20,*(long *)(*(long *)(*(long *)(*(long *)(
                                                  unaff_x20 + 0x20) + 0xc0) + 0xa0) + 0x80) + 0x80);
              memset(pvVar6,0,*(size_t *)(unaff_x29 + -0x40));
              uVar3 = 1;
              *(uint *)(unaff_x19 + 0x10) = unaff_w28;
              *(int *)(unaff_x19 + 0x14) = *(int *)(unaff_x19 + 0x14) + 1;
LAB_0287658c:
              if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail(uVar3);
            }
            goto LAB_028765c0;
          }
        }
      }
LAB_028765c4:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    do {
      unaff_w22 = unaff_w28;
      plVar8 = *(long **)(unaff_x19 + 0x28);
      if (plVar8 == (long *)0x0) goto LAB_028765c4;
      if (*(uint *)(plVar8 + 3) <= unaff_w22) goto LAB_028765c0;
      puVar4 = (uint *)thunk_FUN_018445e8((long)plVar8 +
                                          (ulong)*(uint *)(*plVar8 + 0x104) * unaff_x21 + 0x20,
                                          *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20)
                                                                       + 0xc0) + 0xa0) + 0x80) +
                                          0x20);
      unaff_w28 = *puVar4;
      if (unaff_w28 == 0) {
        uVar3 = 0;
        goto LAB_0287658c;
      }
      plVar8 = *(long **)(unaff_x19 + 0x28);
      if (plVar8 == (long *)0x0) goto LAB_028765c4;
      if (*(uint *)(plVar8 + 3) <= unaff_w28) goto LAB_028765c0;
      unaff_x21 = (long)(int)unaff_w28;
      puVar4 = (uint *)thunk_FUN_018445e8((long)plVar8 +
                                          (ulong)*(uint *)(*plVar8 + 0x104) * unaff_x21 + 0x20,
                                          *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20)
                                                                       + 0xc0) + 0xa0) + 0x80) +
                                          0x40);
    } while (*puVar4 != unaff_w27);
    unaff_x23 = *(long **)(unaff_x19 + 0x28);
    if (unaff_x23 == (long *)0x0) goto LAB_028765c4;
    lVar9 = *(long *)(unaff_x20 + 0x20);
    pvVar6 = *(void **)(unaff_x29 + -0x20);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x60) + 0x28)) {
      pvVar6 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x24,pvVar6,*(size_t *)(unaff_x29 + -0x28));
    param_1 = *(long *)(lVar9 + 0xc0);
    unaff_x25 = *(long *)(param_1 + 0x60);
    if ((*(byte *)(unaff_x25 + 0x135) & 1) == 0) {
      unaff_x25 = FUN_0185daa4(unaff_x25);
      param_1 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    }
    in_CY = *(uint *)(unaff_x23 + 3) <= unaff_w28;
  } while( true );
}


