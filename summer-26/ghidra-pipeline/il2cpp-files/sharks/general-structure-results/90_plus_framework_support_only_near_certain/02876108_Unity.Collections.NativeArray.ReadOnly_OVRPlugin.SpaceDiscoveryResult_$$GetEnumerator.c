/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$GetEnumerator
ENTRY_POINT: 02876108
PROGRAM: sharks-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__GetEnumerator(void)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  void *pvVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  long in_x9;
  long *plVar12;
  uint uVar13;
  long lVar14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *__dest;
  long unaff_x25;
  undefined8 uVar15;
  long unaff_x29;
  
  lVar10 = *(long *)(in_x9 + 0x60);
  uVar3 = *(ushort *)(lVar10 + 0x135);
  lVar4 = lVar10;
  if ((uVar3 & 1) == 0) {
    lVar10 = FUN_0185daa4(lVar10);
    in_x9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    uVar3 = *(ushort *)(*(long *)(in_x9 + 0x60) + 0x135);
    lVar4 = *(long *)(in_x9 + 0x60);
  }
  lVar10 = (long)&stack0x00000000 - ((ulong)(*(int *)(lVar10 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar13 = *(uint *)(lVar4 + 0xfc);
  *(ulong *)(unaff_x29 + -0x28) = (ulong)uVar13;
  if ((uVar3 & 1) == 0) {
    lVar4 = FUN_0185daa4(lVar4);
    uVar13 = *(uint *)(lVar4 + 0xfc);
    in_x9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    lVar4 = *(long *)(in_x9 + 0x60);
    uVar3 = *(ushort *)(lVar4 + 0x135);
  }
  lVar14 = lVar10 - ((ulong)(uVar13 + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x30) = lVar14;
  uVar13 = *(uint *)(*(long *)(in_x9 + 0xa8) + 0xfc);
  __dest = (undefined8 *)(lVar14 - (*(long *)(unaff_x29 + -0x28) + 0xfU & 0x1fffffff0));
  lVar14 = lVar4;
  if ((uVar3 & 1) == 0) {
    lVar4 = FUN_0185daa4(lVar4);
    in_x9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    lVar14 = *(long *)(in_x9 + 0x60);
  }
  if (-1 < *(int *)(lVar14 + 0x28)) {
    unaff_x25 = unaff_x29 + -0x20;
  }
  FUN_017fce8c(lVar4,*(undefined8 *)(in_x9 + 0xf0),lVar10,unaff_x25,0,unaff_x29 + -0x18);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if (lVar4 == 0) {
LAB_028765c4:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar2 = *(uint *)(unaff_x29 + -0x18);
  uVar1 = *(uint *)(unaff_x19 + 0x1c);
  uVar9 = 0;
  if (uVar1 != 0) {
    uVar9 = uVar2 / uVar1;
  }
  uVar1 = uVar2 - uVar9 * uVar1;
  if (*(uint *)(lVar4 + 0x18) <= uVar1) {
LAB_028765c0:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5b0();
  }
  uVar1 = *(uint *)(lVar4 + (long)(int)uVar1 * 4 + 0x20);
  if (uVar1 == 0) {
    uVar6 = 0;
  }
  else {
    *(ulong *)(unaff_x29 + -0x40) = (ulong)uVar13;
    *(long *)(unaff_x29 + -0x38) = unaff_x21;
    uVar13 = 0;
    do {
      uVar9 = uVar1;
      plVar12 = *(long **)(unaff_x19 + 0x28);
      if (plVar12 == (long *)0x0) goto LAB_028765c4;
      if (*(uint *)(plVar12 + 3) <= uVar9) goto LAB_028765c0;
      lVar4 = (long)(int)uVar9;
      puVar5 = (uint *)thunk_FUN_018445e8((long)plVar12 +
                                          (ulong)*(uint *)(*plVar12 + 0x104) * lVar4 + 0x20,
                                          *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20)
                                                                       + 0xc0) + 0xa0) + 0x80) +
                                          0x40);
      if (*puVar5 == uVar2) {
        plVar12 = *(long **)(unaff_x19 + 0x28);
        if (plVar12 == (long *)0x0) goto LAB_028765c4;
        lVar10 = *(long *)(unaff_x20 + 0x20);
        pvVar8 = *(void **)(unaff_x29 + -0x20);
        if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x60) + 0x28)) {
          pvVar8 = (void *)(unaff_x29 + -0x20);
        }
        memcpy(__dest,pvVar8,*(size_t *)(unaff_x29 + -0x28));
        lVar14 = *(long *)(lVar10 + 0xc0);
        lVar10 = *(long *)(lVar14 + 0x60);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_0185daa4(lVar10);
          lVar14 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
        }
        if (*(uint *)(plVar12 + 3) <= uVar9) goto LAB_028765c0;
        uVar15 = *(undefined8 *)(lVar14 + 0xe0);
        uVar6 = thunk_FUN_018445e8((long)plVar12 + (ulong)*(uint *)(*plVar12 + 0x104) * lVar4 + 0x20
                                   ,*(long *)(*(long *)(lVar14 + 0xa0) + 0x80) + 0x60);
        puVar11 = __dest;
        if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x28)) {
          puVar11 = (undefined8 *)*__dest;
        }
        *(undefined8 **)(unaff_x29 + -0x18) = puVar11;
        FUN_017fce8c(lVar10,uVar15,*(undefined8 *)(unaff_x29 + -0x30),uVar6,unaff_x29 + -0x18,
                     unaff_x29 + -0xc);
        if (*(char *)(unaff_x29 + -0xc) != '\0') {
          if (uVar13 == 0) {
            plVar12 = *(long **)(unaff_x19 + 0x28);
            if (plVar12 == (long *)0x0) goto LAB_028765c4;
            if (*(uint *)(plVar12 + 3) <= uVar9) goto LAB_028765c0;
            lVar10 = *(long *)(unaff_x19 + 0x20);
            uVar13 = *(uint *)(unaff_x19 + 0x1c);
            puVar7 = (undefined4 *)
                     thunk_FUN_018445e8((long)plVar12 +
                                        (ulong)*(uint *)(*plVar12 + 0x104) * lVar4 + 0x20,
                                        *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) +
                                                                     0xc0) + 0xa0) + 0x80) + 0x20);
            if (lVar10 == 0) goto LAB_028765c4;
            uVar1 = 0;
            if (uVar13 != 0) {
              uVar1 = uVar2 / uVar13;
            }
            uVar2 = uVar2 - uVar1 * uVar13;
            if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_028765c0;
            *(undefined4 *)(lVar10 + (long)(int)uVar2 * 4 + 0x20) = *puVar7;
          }
          else {
            plVar12 = *(long **)(unaff_x19 + 0x28);
            if (plVar12 == (long *)0x0) goto LAB_028765c4;
            if ((*(uint *)(plVar12 + 3) <= uVar9) ||
               (puVar7 = (undefined4 *)
                         thunk_FUN_018445e8((long)plVar12 +
                                            (ulong)*(uint *)(*plVar12 + 0x104) * lVar4 + 0x20,
                                            *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20
                                                                                   ) + 0xc0) + 0xa0)
                                                     + 0x80) + 0x20),
               *(uint *)(plVar12 + 3) <= uVar13)) goto LAB_028765c0;
            FUN_015d7e34((long)plVar12 +
                         (ulong)*(uint *)(*plVar12 + 0x104) * (long)(int)uVar13 + 0x20,
                         *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0) +
                                  0x80) + 0x20,*puVar7);
          }
          plVar12 = *(long **)(unaff_x19 + 0x28);
          if (plVar12 == (long *)0x0) goto LAB_028765c4;
          if (*(uint *)(plVar12 + 3) <= uVar9) goto LAB_028765c0;
          FUN_015d6fa0((long)plVar12 + (ulong)*(uint *)(*plVar12 + 0x104) * lVar4 + 0x20,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0) + 0x80),0);
          plVar12 = *(long **)(unaff_x19 + 0x28);
          if (plVar12 == (long *)0x0) goto LAB_028765c4;
          if (*(uint *)(plVar12 + 3) <= uVar9) goto LAB_028765c0;
          FUN_015d7e34((long)plVar12 + (ulong)*(uint *)(*plVar12 + 0x104) * lVar4 + 0x20,
                       *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0) +
                                0x80) + 0x20,*(undefined4 *)(unaff_x19 + 0x10));
          plVar12 = *(long **)(unaff_x19 + 0x28);
          if (plVar12 == (long *)0x0) goto LAB_028765c4;
          if (*(uint *)(plVar12 + 3) <= uVar9) goto LAB_028765c0;
          pvVar8 = (void *)thunk_FUN_018445e8((long)plVar12 +
                                              (ulong)*(uint *)(*plVar12 + 0x104) * lVar4 + 0x20,
                                              *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 +
                                                                                     0x20) + 0xc0) +
                                                                 0xa0) + 0x80) + 0x80);
          memset(pvVar8,0,*(size_t *)(unaff_x29 + -0x40));
          uVar6 = 1;
          *(uint *)(unaff_x19 + 0x10) = uVar9;
          *(int *)(unaff_x19 + 0x14) = *(int *)(unaff_x19 + 0x14) + 1;
          goto LAB_0287658c;
        }
      }
      plVar12 = *(long **)(unaff_x19 + 0x28);
      if (plVar12 == (long *)0x0) goto LAB_028765c4;
      if (*(uint *)(plVar12 + 3) <= uVar9) goto LAB_028765c0;
      puVar5 = (uint *)thunk_FUN_018445e8((long)plVar12 +
                                          (ulong)*(uint *)(*plVar12 + 0x104) * lVar4 + 0x20,
                                          *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20)
                                                                       + 0xc0) + 0xa0) + 0x80) +
                                          0x20);
      uVar1 = *puVar5;
      uVar13 = uVar9;
    } while (*puVar5 != 0);
    uVar6 = 0;
LAB_0287658c:
    unaff_x21 = *(long *)(unaff_x29 + -0x38);
  }
  if (*(long *)(unaff_x21 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


