/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$get_Item
ENTRY_POINT: 02876288
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__get_Item(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  uint in_w8;
  long lVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *plVar9;
  undefined8 *unaff_x24;
  long lVar10;
  undefined8 uVar11;
  uint unaff_w27;
  uint unaff_w28;
  uint uVar12;
  long unaff_x29;
  
  do {
    uVar12 = unaff_w28;
    if (in_w8 == unaff_w27) {
      plVar9 = *(long **)(unaff_x19 + 0x28);
      if (plVar9 == (long *)0x0) goto LAB_028765c4;
      lVar10 = *(long *)(unaff_x20 + 0x20);
      pvVar6 = *(void **)(unaff_x29 + -0x20);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x60) + 0x28)) {
        pvVar6 = (void *)(unaff_x29 + -0x20);
      }
      memcpy(unaff_x24,pvVar6,*(size_t *)(unaff_x29 + -0x28));
      lVar7 = *(long *)(lVar10 + 0xc0);
      lVar10 = *(long *)(lVar7 + 0x60);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_0185daa4(lVar10);
        lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      }
      if (*(uint *)(plVar9 + 3) <= uVar12) goto LAB_028765c0;
      uVar11 = *(undefined8 *)(lVar7 + 0xe0);
      uVar3 = thunk_FUN_018445e8((long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * unaff_x21 + 0x20
                                 ,*(long *)(*(long *)(lVar7 + 0xa0) + 0x80) + 0x60);
      puVar8 = unaff_x24;
      if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x28)) {
        puVar8 = (undefined8 *)*unaff_x24;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
      FUN_017fce8c(lVar10,uVar11,*(undefined8 *)(unaff_x29 + -0x30),uVar3,unaff_x29 + -0x18,
                   unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) != '\0') {
        if (unaff_w22 == 0) {
          plVar9 = *(long **)(unaff_x19 + 0x28);
          if (plVar9 == (long *)0x0) goto LAB_028765c4;
          if (*(uint *)(plVar9 + 3) <= uVar12) goto LAB_028765c0;
          lVar10 = *(long *)(unaff_x19 + 0x20);
          uVar1 = *(uint *)(unaff_x19 + 0x1c);
          puVar5 = (undefined4 *)
                   thunk_FUN_018445e8((long)plVar9 +
                                      (ulong)*(uint *)(*plVar9 + 0x104) * unaff_x21 + 0x20,
                                      *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) +
                                                                   0xc0) + 0xa0) + 0x80) + 0x20);
          if (lVar10 == 0) goto LAB_028765c4;
          uVar2 = 0;
          if (uVar1 != 0) {
            uVar2 = unaff_w27 / uVar1;
          }
          uVar1 = unaff_w27 - uVar2 * uVar1;
          if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_028765c0;
          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = *puVar5;
        }
        else {
          plVar9 = *(long **)(unaff_x19 + 0x28);
          if (plVar9 == (long *)0x0) goto LAB_028765c4;
          if (*(uint *)(plVar9 + 3) <= uVar12) goto LAB_028765c0;
          puVar5 = (undefined4 *)
                   thunk_FUN_018445e8((long)plVar9 +
                                      (ulong)*(uint *)(*plVar9 + 0x104) * unaff_x21 + 0x20,
                                      *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) +
                                                                   0xc0) + 0xa0) + 0x80) + 0x20);
          if (*(uint *)(plVar9 + 3) <= unaff_w22) goto LAB_028765c0;
          FUN_015d7e34((long)plVar9 +
                       (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)unaff_w22 + 0x20,
                       *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0) +
                                0x80) + 0x20,*puVar5);
        }
        plVar9 = *(long **)(unaff_x19 + 0x28);
        if (plVar9 == (long *)0x0) goto LAB_028765c4;
        if (uVar12 < *(uint *)(plVar9 + 3)) {
          FUN_015d6fa0((long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * unaff_x21 + 0x20,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0) + 0x80),0);
          plVar9 = *(long **)(unaff_x19 + 0x28);
          if (plVar9 == (long *)0x0) goto LAB_028765c4;
          if (uVar12 < *(uint *)(plVar9 + 3)) {
            FUN_015d7e34((long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * unaff_x21 + 0x20,
                         *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0) +
                                  0x80) + 0x20,*(undefined4 *)(unaff_x19 + 0x10));
            plVar9 = *(long **)(unaff_x19 + 0x28);
            if (plVar9 == (long *)0x0) goto LAB_028765c4;
            if (uVar12 < *(uint *)(plVar9 + 3)) {
              pvVar6 = (void *)thunk_FUN_018445e8((long)plVar9 +
                                                  (ulong)*(uint *)(*plVar9 + 0x104) * unaff_x21 +
                                                  0x20,*(long *)(*(long *)(*(long *)(*(long *)(
                                                  unaff_x20 + 0x20) + 0xc0) + 0xa0) + 0x80) + 0x80);
              memset(pvVar6,0,*(size_t *)(unaff_x29 + -0x40));
              uVar3 = 1;
              *(uint *)(unaff_x19 + 0x10) = uVar12;
              *(int *)(unaff_x19 + 0x14) = *(int *)(unaff_x19 + 0x14) + 1;
              goto LAB_0287658c;
            }
          }
        }
LAB_028765c0:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
    }
    plVar9 = *(long **)(unaff_x19 + 0x28);
    if (plVar9 == (long *)0x0) {
LAB_028765c4:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if (*(uint *)(plVar9 + 3) <= uVar12) goto LAB_028765c0;
    puVar4 = (uint *)thunk_FUN_018445e8((long)plVar9 +
                                        (ulong)*(uint *)(*plVar9 + 0x104) * unaff_x21 + 0x20,
                                        *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) +
                                                                     0xc0) + 0xa0) + 0x80) + 0x20);
    unaff_w28 = *puVar4;
    if (unaff_w28 == 0) {
      uVar3 = 0;
LAB_0287658c:
      if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar3);
    }
    plVar9 = *(long **)(unaff_x19 + 0x28);
    if (plVar9 == (long *)0x0) goto LAB_028765c4;
    if (*(uint *)(plVar9 + 3) <= unaff_w28) goto LAB_028765c0;
    unaff_x21 = (long)(int)unaff_w28;
    puVar4 = (uint *)thunk_FUN_018445e8((long)plVar9 +
                                        (ulong)*(uint *)(*plVar9 + 0x104) * unaff_x21 + 0x20,
                                        *(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) +
                                                                     0xc0) + 0xa0) + 0x80) + 0x40);
    in_w8 = *puVar4;
    unaff_w22 = uVar12;
  } while( true );
}


