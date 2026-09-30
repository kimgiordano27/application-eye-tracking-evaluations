/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 028761f4
PROGRAM: sharks-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar12;
  undefined8 unaff_x22;
  undefined8 *unaff_x24;
  long lVar13;
  undefined8 uVar14;
  long unaff_x29;
  
  FUN_017fce8c();
  lVar8 = *(long *)(unaff_x19 + 0x20);
  if (lVar8 != 0) {
    uVar2 = *(uint *)(unaff_x29 + -0x18);
    uVar1 = *(uint *)(unaff_x19 + 0x1c);
    uVar12 = 0;
    if (uVar1 != 0) {
      uVar12 = uVar2 / uVar1;
    }
    uVar1 = uVar2 - uVar12 * uVar1;
    if (*(uint *)(lVar8 + 0x18) <= uVar1) {
LAB_028765c0:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    uVar1 = *(uint *)(lVar8 + (long)(int)uVar1 * 4 + 0x20);
    if (uVar1 == 0) {
      uVar4 = 0;
    }
    else {
      *(undefined8 *)(unaff_x29 + -0x40) = unaff_x22;
      *(long *)(unaff_x29 + -0x38) = unaff_x21;
      uVar12 = 0;
      do {
        uVar7 = uVar1;
        plVar11 = *(long **)(unaff_x19 + 0x28);
        if (plVar11 == (long *)0x0) goto LAB_028765c4;
        if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_028765c0;
        lVar8 = (long)(int)uVar7;
        puVar3 = (uint *)thunk_FUN_018445e8((long)plVar11 +
                                            (ulong)*(uint *)(*plVar11 + 0x104) * lVar8 + 0x20,
                                            *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20
                                                                                   ) + 0xc0) + 0xa0)
                                                     + 0x80) + 0x40);
        if (*puVar3 == uVar2) {
          plVar11 = *(long **)(unaff_x19 + 0x28);
          if (plVar11 == (long *)0x0) goto LAB_028765c4;
          lVar13 = *(long *)(unaff_x20 + 0x20);
          pvVar6 = *(void **)(unaff_x29 + -0x20);
          if (-1 < *(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x60) + 0x28)) {
            pvVar6 = (void *)(unaff_x29 + -0x20);
          }
          memcpy(unaff_x24,pvVar6,*(size_t *)(unaff_x29 + -0x28));
          lVar9 = *(long *)(lVar13 + 0xc0);
          lVar13 = *(long *)(lVar9 + 0x60);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_0185daa4(lVar13);
            lVar9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
          }
          if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_028765c0;
          uVar14 = *(undefined8 *)(lVar9 + 0xe0);
          uVar4 = thunk_FUN_018445e8((long)plVar11 +
                                     (ulong)*(uint *)(*plVar11 + 0x104) * lVar8 + 0x20,
                                     *(long *)(*(long *)(lVar9 + 0xa0) + 0x80) + 0x60);
          puVar10 = unaff_x24;
          if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x28))
          {
            puVar10 = (undefined8 *)*unaff_x24;
          }
          *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
          FUN_017fce8c(lVar13,uVar14,*(undefined8 *)(unaff_x29 + -0x30),uVar4,unaff_x29 + -0x18,
                       unaff_x29 + -0xc);
          if (*(char *)(unaff_x29 + -0xc) != '\0') {
            if (uVar12 == 0) {
              plVar11 = *(long **)(unaff_x19 + 0x28);
              if (plVar11 == (long *)0x0) goto LAB_028765c4;
              if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_028765c0;
              lVar13 = *(long *)(unaff_x19 + 0x20);
              uVar1 = *(uint *)(unaff_x19 + 0x1c);
              puVar5 = (undefined4 *)
                       thunk_FUN_018445e8((long)plVar11 +
                                          (ulong)*(uint *)(*plVar11 + 0x104) * lVar8 + 0x20,
                                          *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20)
                                                                       + 0xc0) + 0xa0) + 0x80) +
                                          0x20);
              if (lVar13 == 0) goto LAB_028765c4;
              uVar12 = 0;
              if (uVar1 != 0) {
                uVar12 = uVar2 / uVar1;
              }
              uVar2 = uVar2 - uVar12 * uVar1;
              if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_028765c0;
              *(undefined4 *)(lVar13 + (long)(int)uVar2 * 4 + 0x20) = *puVar5;
            }
            else {
              plVar11 = *(long **)(unaff_x19 + 0x28);
              if (plVar11 == (long *)0x0) goto LAB_028765c4;
              if ((*(uint *)(plVar11 + 3) <= uVar7) ||
                 (puVar5 = (undefined4 *)
                           thunk_FUN_018445e8((long)plVar11 +
                                              (ulong)*(uint *)(*plVar11 + 0x104) * lVar8 + 0x20,
                                              *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 +
                                                                                     0x20) + 0xc0) +
                                                                 0xa0) + 0x80) + 0x20),
                 *(uint *)(plVar11 + 3) <= uVar12)) goto LAB_028765c0;
              FUN_015d7e34((long)plVar11 +
                           (ulong)*(uint *)(*plVar11 + 0x104) * (long)(int)uVar12 + 0x20,
                           *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0)
                                    + 0x80) + 0x20,*puVar5);
            }
            plVar11 = *(long **)(unaff_x19 + 0x28);
            if (plVar11 == (long *)0x0) goto LAB_028765c4;
            if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_028765c0;
            FUN_015d6fa0((long)plVar11 + (ulong)*(uint *)(*plVar11 + 0x104) * lVar8 + 0x20,
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0) + 0x80),0
                        );
            plVar11 = *(long **)(unaff_x19 + 0x28);
            if (plVar11 == (long *)0x0) goto LAB_028765c4;
            if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_028765c0;
            FUN_015d7e34((long)plVar11 + (ulong)*(uint *)(*plVar11 + 0x104) * lVar8 + 0x20,
                         *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0) +
                                  0x80) + 0x20,*(undefined4 *)(unaff_x19 + 0x10));
            plVar11 = *(long **)(unaff_x19 + 0x28);
            if (plVar11 == (long *)0x0) goto LAB_028765c4;
            if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_028765c0;
            pvVar6 = (void *)thunk_FUN_018445e8((long)plVar11 +
                                                (ulong)*(uint *)(*plVar11 + 0x104) * lVar8 + 0x20,
                                                *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 +
                                                                                       0x20) + 0xc0)
                                                                   + 0xa0) + 0x80) + 0x80);
            memset(pvVar6,0,*(size_t *)(unaff_x29 + -0x40));
            uVar4 = 1;
            *(uint *)(unaff_x19 + 0x10) = uVar7;
            *(int *)(unaff_x19 + 0x14) = *(int *)(unaff_x19 + 0x14) + 1;
            goto LAB_0287658c;
          }
        }
        plVar11 = *(long **)(unaff_x19 + 0x28);
        if (plVar11 == (long *)0x0) goto LAB_028765c4;
        if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_028765c0;
        puVar3 = (uint *)thunk_FUN_018445e8((long)plVar11 +
                                            (ulong)*(uint *)(*plVar11 + 0x104) * lVar8 + 0x20,
                                            *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20
                                                                                   ) + 0xc0) + 0xa0)
                                                     + 0x80) + 0x20);
        uVar1 = *puVar3;
        uVar12 = uVar7;
      } while (*puVar3 != 0);
      uVar4 = 0;
LAB_0287658c:
      unaff_x21 = *(long *)(unaff_x29 + -0x38);
    }
    if (*(long *)(unaff_x21 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
LAB_028765c4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


