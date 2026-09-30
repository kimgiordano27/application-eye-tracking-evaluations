/*
FUNCTION_NAME: Meta.WitAi.ThreadUtility.EarlyTask$$Start
ENTRY_POINT: 013e046c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Meta_WitAi_ThreadUtility_EarlyTask__Start(void)

{
  void *pvVar1;
  byte bVar2;
  char in_NG;
  char in_OV;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x22;
  long lVar9;
  undefined8 *unaff_x24;
  void *unaff_x25;
  undefined8 *puVar10;
  undefined8 *unaff_x26;
  long unaff_x27;
  int unaff_w28;
  long unaff_x29;
  
  do {
    if (in_NG == in_OV) {
      if (*(long *)(*(long *)(unaff_x29 + -0xa0) + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    FUN_0132138c();
    plVar6 = *(long **)(unaff_x29 + -0x68);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    if (plVar6 == (long *)0x0) {
LAB_013e02ac:
      FUN_0132138c();
      plVar6 = *(long **)(unaff_x29 + -0x68);
      if (plVar6 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)
                           Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_Add__
                         + 300);
        if ((bVar2 <= *(byte *)(*plVar6 + 300)) &&
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) ==
            *(long *)
             Method_System_Collections_Generic_List<UnitySynchronizationContext_WorkRequest>_Add__))
        {
          UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal__ValidateHierarchyTraversal
                    (plVar6,0);
          goto LAB_013e0460;
        }
      }
      FUN_0132138c();
      plVar6 = *(long **)(unaff_x22 + 0x28);
      plVar7 = *(long **)(unaff_x29 + -0x68);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,2);
        *(long **)(unaff_x22 + 0x28) = plVar6;
      }
      lVar9 = *(long *)(unaff_x19 + 0x20);
      lVar3 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x48);
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_00d5941c();
        lVar9 = *(long *)(unaff_x19 + 0x20);
      }
      pvVar1 = *(void **)(unaff_x29 + -0x88);
      if (-1 < *(int *)(lVar3 + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x70);
      }
      memcpy(unaff_x24,pvVar1,*(size_t *)(unaff_x29 + -0x80));
      if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x48) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      lVar3 = thunk_FUN_00d61fa0();
      if (plVar6 == (long *)0x0) {
LAB_013e0598:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if ((lVar3 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
LAB_013e05a0:
        uVar4 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar4,0);
      }
      if ((int)plVar6[3] == 0) {
LAB_013e059c:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar6[4] = lVar3;
      lVar9 = *(long *)(unaff_x19 + 0x20);
      plVar6 = *(long **)(unaff_x22 + 0x28);
      lVar3 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x50);
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_00d5941c();
        lVar9 = *(long *)(unaff_x19 + 0x20);
      }
      pvVar1 = unaff_x25;
      if (-1 < *(int *)(lVar3 + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x78);
      }
      memcpy(unaff_x26,pvVar1,*(size_t *)(unaff_x29 + -0x90));
      if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x50) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      lVar3 = thunk_FUN_00d61fa0();
      if (plVar6 == (long *)0x0) goto LAB_013e0598;
      if ((lVar3 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
      goto LAB_013e05a0;
      if (*(uint *)(plVar6 + 3) < 2) goto LAB_013e059c;
      plVar6[5] = lVar3;
      if (plVar7 == (long *)0x0) goto LAB_013e0598;
      (**(code **)(*plVar7 + 0x178))
                (plVar7,*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(*plVar7 + 0x180));
    }
    else {
      if ((*(byte *)(*plVar6 + 300) < *(byte *)(lVar3 + 300)) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar3 + 300) * 8 + -8) != lVar3))
      goto LAB_013e02ac;
      lVar9 = *(long *)(unaff_x19 + 0x20);
      lVar3 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x48);
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_00d5941c();
        lVar9 = *(long *)(unaff_x19 + 0x20);
      }
      pvVar1 = *(void **)(unaff_x29 + -0x88);
      if (-1 < *(int *)(lVar3 + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x70);
      }
      memcpy(unaff_x24,pvVar1,*(size_t *)(unaff_x29 + -0x80));
      lVar3 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x50);
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_00d5941c();
        lVar9 = *(long *)(unaff_x19 + 0x20);
      }
      if (-1 < *(int *)(lVar3 + 0x28)) {
        unaff_x25 = (void *)(unaff_x29 + -0x78);
      }
      memcpy(unaff_x26,unaff_x25,*(size_t *)(unaff_x29 + -0x90));
      lVar3 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x48);
      puVar8 = *(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x58);
      uVar4 = *puVar8;
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_00d5941c();
      }
      puVar10 = unaff_x24;
      if (-1 < *(int *)(lVar3 + 0x28)) {
        puVar10 = (undefined8 *)*unaff_x24;
      }
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50);
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_00d5941c();
      }
      puVar5 = unaff_x26;
      if (-1 < *(int *)(lVar3 + 0x28)) {
        puVar5 = (undefined8 *)*unaff_x26;
      }
      *(undefined8 **)(unaff_x29 + -0x68) = puVar10;
      *(undefined8 **)(unaff_x29 + -0x60) = puVar5;
      (*(code *)puVar8[2])(uVar4,puVar8,plVar6,unaff_x29 + -0x68);
      unaff_x25 = *(void **)(unaff_x29 + -0x98);
    }
LAB_013e0460:
    unaff_w28 = unaff_w28 + 1;
    in_OV = SBORROW4(unaff_w28,*(int *)(unaff_x27 + 0x18));
    in_NG = unaff_w28 - *(int *)(unaff_x27 + 0x18) < 0;
  } while( true );
}


