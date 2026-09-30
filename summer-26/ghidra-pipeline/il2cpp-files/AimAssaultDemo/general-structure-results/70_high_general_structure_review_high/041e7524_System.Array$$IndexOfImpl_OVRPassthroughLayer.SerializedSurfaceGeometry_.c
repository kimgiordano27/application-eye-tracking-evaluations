/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 041e7524
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__IndexOfImpl<OVRPassthroughLayer_SerializedSurfaceGeometry>(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  uint in_w8;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *unaff_x19;
  long lVar6;
  uint unaff_w20;
  undefined8 unaff_x21;
  void *__dest;
  long unaff_x22;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  uint unaff_w27;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long unaff_x29;
  
  uVar8 = *(ulong *)(unaff_x29 + -0x30);
  uVar7 = (uint)uVar8;
  if (uVar7 < in_w8) {
    uVar2 = *(uint *)(*unaff_x19 + 0x104);
    *(undefined8 *)(unaff_x29 + -0x40) = unaff_x21;
    *(long *)(unaff_x29 + -0x38) = (long)(int)uVar7;
    memcpy(unaff_x24,(void *)((long)unaff_x19 + (ulong)uVar2 * (long)(int)uVar7 + 0x20),unaff_x23);
                    /* try { // try from 041e755c to 042e755f has its CatchHandler @ 041e758c */
                    /* try { // try from 041e7560 to 042e757b has its CatchHandler @ 041e73c0 */
    if (unaff_w27 < *(uint *)(unaff_x19 + 3)) {
                    /* try { // try from 041e757c to 042e757f has its CatchHandler @ 041e7590 */
                    /* try { // try from 041e7580 to 042e758b has its CatchHandler @ 041e7598 */
      memcpy(unaff_x26,
             (void *)((long)unaff_x19 +
                     (ulong)*(uint *)(*unaff_x19 + 0x104) * (long)(int)unaff_w27 + 0x20),unaff_x23);
      if (unaff_x25 != 0) {
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 041e755c with catch @ 041e758c
                       try { // try from 041e758c to 042e75af has its CatchHandler @ 041e73c0 */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 041e757c with catch @ 041e7590
                        */
        puVar1 = *(undefined8 **)(*(long *)(unaff_x22 + 0x38) + 0x20);
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 041e74d8 with catch @ 041e7594
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 041e7580 with catch @ 041e7598
                        */
        uVar3 = *puVar1;
        puVar4 = unaff_x24;
        puVar5 = unaff_x26;
        if (-1 < *(int *)(*(long *)(*(long *)(unaff_x22 + 0x38) + 0x18) + 0x28)) {
          puVar4 = (undefined8 *)*unaff_x24;
          puVar5 = (undefined8 *)*unaff_x26;
        }
        *(undefined8 **)(unaff_x29 + -0x20) = puVar4;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
        (*(code *)puVar1[2])(uVar3);
        if (*(int *)(unaff_x29 + -0xc) < 0) {
          if (*(int *)(*(long *)PTR_DAT_07d97b00 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          (*(code *)**(undefined8 **)(*(long *)(unaff_x22 + 0x38) + 0x28))
                    (unaff_w27,uVar8 & 0xffffffff,unaff_x29 + -0x28);
        }
        plVar9 = *(long **)(unaff_x29 + -0x28);
        if (plVar9 != (long *)0x0) {
          if (unaff_w20 < *(uint *)(plVar9 + 3)) {
            lVar6 = (long)(int)unaff_w20;
            memcpy(unaff_x24,
                   (void *)((long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * lVar6 + 0x20),
                   unaff_x23);
            if (unaff_w27 < *(uint *)(plVar9 + 3)) {
              memcpy(unaff_x26,
                     (void *)((long)plVar9 +
                             (ulong)*(uint *)(*plVar9 + 0x104) * (long)(int)unaff_w27 + 0x20),
                     unaff_x23);
              puVar1 = *(undefined8 **)(*(long *)(unaff_x22 + 0x38) + 0x20);
              uVar3 = *puVar1;
              puVar4 = unaff_x24;
              puVar5 = unaff_x26;
              if (-1 < *(int *)(*(long *)(*(long *)(unaff_x22 + 0x38) + 0x18) + 0x28)) {
                puVar4 = (undefined8 *)*unaff_x24;
                puVar5 = (undefined8 *)*unaff_x26;
              }
              *(undefined8 **)(unaff_x29 + -0x20) = puVar4;
              *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
              (*(code *)puVar1[2])(uVar3);
              uVar8 = *(ulong *)(unaff_x29 + -0x30);
              if (*(int *)(unaff_x29 + -0xc) < 0) {
                if (*(int *)(*(long *)PTR_DAT_07d97b00 + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                }
                (*(code *)**(undefined8 **)(*(long *)(unaff_x22 + 0x38) + 0x28))
                          (unaff_w27,unaff_w20,unaff_x29 + -0x28);
              }
              plVar9 = *(long **)(unaff_x29 + -0x28);
              if (plVar9 == (long *)0x0) goto LAB_041e7840;
              if (((uint)uVar8 < *(uint *)(plVar9 + 3)) &&
                 (memcpy(unaff_x24,
                         (void *)((long)plVar9 +
                                 (ulong)*(uint *)(*plVar9 + 0x104) * *(long *)(unaff_x29 + -0x38) +
                                 0x20),unaff_x23), unaff_w20 < *(uint *)(plVar9 + 3))) {
                memcpy(unaff_x26,
                       (void *)((long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * lVar6 + 0x20),
                       unaff_x23);
                puVar1 = *(undefined8 **)(*(long *)(unaff_x22 + 0x38) + 0x20);
                uVar3 = *puVar1;
                puVar4 = unaff_x24;
                if (-1 < *(int *)(*(long *)(*(long *)(unaff_x22 + 0x38) + 0x18) + 0x28)) {
                  unaff_x26 = (undefined8 *)*unaff_x26;
                  puVar4 = (undefined8 *)*unaff_x24;
                }
                *(undefined8 **)(unaff_x29 + -0x20) = puVar4;
                *(undefined8 **)(unaff_x29 + -0x18) = unaff_x26;
                __dest = *(void **)(unaff_x29 + -0x40);
                (*(code *)puVar1[2])(uVar3);
                if (*(int *)(unaff_x29 + -0xc) < 0) {
                  if (*(int *)(*(long *)PTR_DAT_07d97b00 + 0xe4) == 0) {
                    thunk_FUN_03798b70();
                  }
                  (*(code *)**(undefined8 **)(*(long *)(unaff_x22 + 0x38) + 0x28))
                            (unaff_w20,uVar8 & 0xffffffff,unaff_x29 + -0x28);
                }
                plVar9 = *(long **)(unaff_x29 + -0x28);
                if (plVar9 == (long *)0x0) goto LAB_041e7840;
                if (unaff_w20 < *(uint *)(plVar9 + 3)) {
                  memcpy(unaff_x24,
                         (void *)((long)plVar9 + (ulong)*(uint *)(*plVar9 + 0x104) * lVar6 + 0x20),
                         unaff_x23);
                  memcpy(__dest,unaff_x24,unaff_x23);
                  if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                    __stack_chk_fail();
                  }
                  return;
                }
              }
            }
          }
          goto LAB_041e783c;
        }
      }
LAB_041e7840:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
  }
LAB_041e783c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


