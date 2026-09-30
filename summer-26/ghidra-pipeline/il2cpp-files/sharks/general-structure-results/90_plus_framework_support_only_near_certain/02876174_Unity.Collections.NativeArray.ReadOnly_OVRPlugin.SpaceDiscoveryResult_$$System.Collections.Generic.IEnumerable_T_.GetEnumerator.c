/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 02876174
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  int in_w11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar14;
  undefined8 *__dest;
  undefined8 uVar15;
  long unaff_x29;
  
  lVar12 = *(long *)(param_1 + 0xc0);
  lVar9 = *(long *)(lVar12 + 0x60);
  uVar3 = *(ushort *)(lVar9 + 0x135);
  lVar10 = (long)&stack0x00000000 - ((ulong)(in_w11 + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x30) = lVar10;
  uVar14 = *(uint *)(*(long *)(lVar12 + 0xa8) + 0xfc);
  __dest = (undefined8 *)(lVar10 - (*(long *)(unaff_x29 + -0x28) + 0xfU & 0x1fffffff0));
  if ((uVar3 & 1) == 0) {
    lVar9 = FUN_0185daa4(lVar9);
    lVar12 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
  FUN_017fce8c(lVar9,*(undefined8 *)(lVar12 + 0xf0));
  lVar9 = *(long *)(unaff_x19 + 0x20);
  if (lVar9 != 0) {
    uVar2 = *(uint *)(unaff_x29 + -0x18);
    uVar1 = *(uint *)(unaff_x19 + 0x1c);
    uVar8 = 0;
    if (uVar1 != 0) {
      uVar8 = uVar2 / uVar1;
    }
    uVar1 = uVar2 - uVar8 * uVar1;
    if (*(uint *)(lVar9 + 0x18) <= uVar1) {
LAB_028765c0:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    uVar1 = *(uint *)(lVar9 + (long)(int)uVar1 * 4 + 0x20);
    if (uVar1 == 0) {
      uVar5 = 0;
    }
    else {
      *(ulong *)(unaff_x29 + -0x40) = (ulong)uVar14;
      *(long *)(unaff_x29 + -0x38) = unaff_x21;
      uVar14 = 0;
      do {
        uVar8 = uVar1;
        plVar13 = *(long **)(unaff_x19 + 0x28);
        if (plVar13 == (long *)0x0) goto LAB_028765c4;
        if (*(uint *)(plVar13 + 3) <= uVar8) goto LAB_028765c0;
        lVar9 = (long)(int)uVar8;
        puVar4 = (uint *)thunk_FUN_018445e8((long)plVar13 +
                                            (ulong)*(uint *)(*plVar13 + 0x104) * lVar9 + 0x20,
                                            *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20
                                                                                   ) + 0xc0) + 0xa0)
                                                     + 0x80) + 0x40);
        if (*puVar4 == uVar2) {
          plVar13 = *(long **)(unaff_x19 + 0x28);
          if (plVar13 == (long *)0x0) goto LAB_028765c4;
          lVar12 = *(long *)(unaff_x20 + 0x20);
          pvVar7 = *(void **)(unaff_x29 + -0x20);
          if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x60) + 0x28)) {
            pvVar7 = (void *)(unaff_x29 + -0x20);
          }
          memcpy(__dest,pvVar7,*(size_t *)(unaff_x29 + -0x28));
          lVar10 = *(long *)(lVar12 + 0xc0);
          lVar12 = *(long *)(lVar10 + 0x60);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_0185daa4(lVar12);
            lVar10 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
          }
          if (*(uint *)(plVar13 + 3) <= uVar8) goto LAB_028765c0;
          uVar15 = *(undefined8 *)(lVar10 + 0xe0);
          uVar5 = thunk_FUN_018445e8((long)plVar13 +
                                     (ulong)*(uint *)(*plVar13 + 0x104) * lVar9 + 0x20,
                                     *(long *)(*(long *)(lVar10 + 0xa0) + 0x80) + 0x60);
          puVar11 = __dest;
          if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x28))
          {
            puVar11 = (undefined8 *)*__dest;
          }
          *(undefined8 **)(unaff_x29 + -0x18) = puVar11;
          FUN_017fce8c(lVar12,uVar15,*(undefined8 *)(unaff_x29 + -0x30),uVar5,unaff_x29 + -0x18,
                       unaff_x29 + -0xc);
          if (*(char *)(unaff_x29 + -0xc) != '\0') {
            if (uVar14 == 0) {
              plVar13 = *(long **)(unaff_x19 + 0x28);
              if (plVar13 == (long *)0x0) goto LAB_028765c4;
              if (*(uint *)(plVar13 + 3) <= uVar8) goto LAB_028765c0;
              lVar12 = *(long *)(unaff_x19 + 0x20);
              uVar14 = *(uint *)(unaff_x19 + 0x1c);
              puVar6 = (undefined4 *)
                       thunk_FUN_018445e8((long)plVar13 +
                                          (ulong)*(uint *)(*plVar13 + 0x104) * lVar9 + 0x20,
                                          *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20)
                                                                       + 0xc0) + 0xa0) + 0x80) +
                                          0x20);
              if (lVar12 == 0) goto LAB_028765c4;
              uVar1 = 0;
              if (uVar14 != 0) {
                uVar1 = uVar2 / uVar14;
              }
              uVar2 = uVar2 - uVar1 * uVar14;
              if (*(uint *)(lVar12 + 0x18) <= uVar2) goto LAB_028765c0;
              *(undefined4 *)(lVar12 + (long)(int)uVar2 * 4 + 0x20) = *puVar6;
            }
            else {
              plVar13 = *(long **)(unaff_x19 + 0x28);
              if (plVar13 == (long *)0x0) goto LAB_028765c4;
              if ((*(uint *)(plVar13 + 3) <= uVar8) ||
                 (puVar6 = (undefined4 *)
                           thunk_FUN_018445e8((long)plVar13 +
                                              (ulong)*(uint *)(*plVar13 + 0x104) * lVar9 + 0x20,
                                              *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 +
                                                                                     0x20) + 0xc0) +
                                                                 0xa0) + 0x80) + 0x20),
                 *(uint *)(plVar13 + 3) <= uVar14)) goto LAB_028765c0;
              FUN_015d7e34((long)plVar13 +
                           (ulong)*(uint *)(*plVar13 + 0x104) * (long)(int)uVar14 + 0x20,
                           *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0)
                                    + 0x80) + 0x20,*puVar6);
            }
            plVar13 = *(long **)(unaff_x19 + 0x28);
            if (plVar13 == (long *)0x0) goto LAB_028765c4;
            if (*(uint *)(plVar13 + 3) <= uVar8) goto LAB_028765c0;
            FUN_015d6fa0((long)plVar13 + (ulong)*(uint *)(*plVar13 + 0x104) * lVar9 + 0x20,
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0) + 0x80),0
                        );
            plVar13 = *(long **)(unaff_x19 + 0x28);
            if (plVar13 == (long *)0x0) goto LAB_028765c4;
            if (*(uint *)(plVar13 + 3) <= uVar8) goto LAB_028765c0;
            FUN_015d7e34((long)plVar13 + (ulong)*(uint *)(*plVar13 + 0x104) * lVar9 + 0x20,
                         *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0) +
                                  0x80) + 0x20,*(undefined4 *)(unaff_x19 + 0x10));
            plVar13 = *(long **)(unaff_x19 + 0x28);
            if (plVar13 == (long *)0x0) goto LAB_028765c4;
            if (*(uint *)(plVar13 + 3) <= uVar8) goto LAB_028765c0;
            pvVar7 = (void *)thunk_FUN_018445e8((long)plVar13 +
                                                (ulong)*(uint *)(*plVar13 + 0x104) * lVar9 + 0x20,
                                                *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 +
                                                                                       0x20) + 0xc0)
                                                                   + 0xa0) + 0x80) + 0x80);
            memset(pvVar7,0,*(size_t *)(unaff_x29 + -0x40));
            uVar5 = 1;
            *(uint *)(unaff_x19 + 0x10) = uVar8;
            *(int *)(unaff_x19 + 0x14) = *(int *)(unaff_x19 + 0x14) + 1;
            goto LAB_0287658c;
          }
        }
        plVar13 = *(long **)(unaff_x19 + 0x28);
        if (plVar13 == (long *)0x0) goto LAB_028765c4;
        if (*(uint *)(plVar13 + 3) <= uVar8) goto LAB_028765c0;
        puVar4 = (uint *)thunk_FUN_018445e8((long)plVar13 +
                                            (ulong)*(uint *)(*plVar13 + 0x104) * lVar9 + 0x20,
                                            *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20
                                                                                   ) + 0xc0) + 0xa0)
                                                     + 0x80) + 0x20);
        uVar1 = *puVar4;
        uVar14 = uVar8;
      } while (*puVar4 != 0);
      uVar5 = 0;
LAB_0287658c:
      unaff_x21 = *(long *)(unaff_x29 + -0x38);
    }
    if (*(long *)(unaff_x21 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
LAB_028765c4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


