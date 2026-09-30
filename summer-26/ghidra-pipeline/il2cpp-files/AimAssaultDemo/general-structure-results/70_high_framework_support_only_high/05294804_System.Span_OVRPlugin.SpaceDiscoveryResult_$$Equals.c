/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$Equals
ENTRY_POINT: 05294804
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x052946b8) */
/* WARNING: Removing unreachable block (ram,0x05294744) */

void System_Span<OVRPlugin_SpaceDiscoveryResult>__Equals(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *unaff_x19;
  long unaff_x20;
  void *unaff_x21;
  void *__src;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  long lVar9;
  long unaff_x29;
  
  plVar5 = (long *)__cxa_begin_catch();
  lVar9 = *plVar5;
  __cxa_end_catch();
  lVar8 = *(long *)(*unaff_x19 + 0xc0);
  lVar2 = *(long *)(lVar8 + 0x78);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678();
    lVar8 = *(long *)(*unaff_x19 + 0xc0);
  }
  FUN_0373c0a0(lVar2,*(undefined8 *)(lVar8 + 0xa8),*(undefined8 *)(unaff_x29 + -0x38));
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7ac(lVar9);
  }
  (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xb0))();
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xb8))();
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xc0))();
    if (iVar1 < 1) {
LAB_052946f0:
      if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x18);
    if (lVar2 != 0) {
      __src = *(void **)(unaff_x29 + -0x28);
      puVar6 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x70);
      uVar3 = *puVar6;
      *(void **)(unaff_x29 + -0x18) = __src;
      (*(code *)puVar6[2])(uVar3,puVar6,lVar2,unaff_x29 + -0x18,__src);
      memcpy(unaff_x21,__src,*(size_t *)(unaff_x29 + -0x20));
      while (uVar4 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xa0))(),
            (uVar4 & 1) != 0) {
        puVar6 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x80);
        uVar3 = *puVar6;
        *(undefined8 **)(unaff_x29 + -0x18) = unaff_x24;
        (*(code *)puVar6[2])(uVar3);
        memcpy(unaff_x26,unaff_x24,unaff_x23);
        lVar2 = *(long *)(unaff_x20 + 0x38);
        memcpy(unaff_x25,unaff_x26,unaff_x23);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        puVar6 = unaff_x25;
        if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10) + 0x28)) {
          puVar6 = (undefined8 *)*unaff_x25;
        }
        puVar7 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x18);
        uVar3 = *puVar7;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
        (*(code *)puVar7[2])(uVar3,puVar7,lVar2,unaff_x29 + -0x18,unaff_x29 + -0x10);
        if (*(char *)(unaff_x29 + -0x10) == '\0') {
          lVar2 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x90))();
          memcpy(unaff_x24,unaff_x26,unaff_x23);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          puVar6 = unaff_x24;
          if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10) + 0x28)) {
            puVar6 = (undefined8 *)*unaff_x24;
          }
          puVar7 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 200);
          uVar3 = *puVar7;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
          (*(code *)puVar7[2])(uVar3,puVar7,lVar2,unaff_x29 + -0x18);
          lVar2 = *(long *)(unaff_x20 + 0x38);
          memcpy(unaff_x25,unaff_x26,unaff_x23);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          puVar6 = unaff_x25;
          if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10) + 0x28)) {
            puVar6 = (undefined8 *)*unaff_x25;
          }
          puVar7 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x38);
          uVar3 = *puVar7;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
          (*(code *)puVar7[2])(uVar3,puVar7,lVar2,unaff_x29 + -0x18,unaff_x29 + -0x10);
        }
      }
      lVar8 = *(long *)(*unaff_x19 + 0xc0);
      lVar2 = *(long *)(lVar8 + 0x78);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03775678();
        lVar8 = *(long *)(*unaff_x19 + 0xc0);
      }
      FUN_0373c0a0(lVar2,*(undefined8 *)(lVar8 + 0xa8),*(undefined8 *)(unaff_x29 + -0x40));
      (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xd0))();
      if (*(long *)(unaff_x20 + 0x28) != 0) {
        (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xb8))();
        goto LAB_052946f0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


