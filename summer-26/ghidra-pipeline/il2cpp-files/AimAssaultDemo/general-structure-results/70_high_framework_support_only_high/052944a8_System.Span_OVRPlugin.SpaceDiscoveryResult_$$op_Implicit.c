/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$op_Implicit
ENTRY_POINT: 052944a8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x052946b8) */
/* WARNING: Removing unreachable block (ram,0x05294744) */

void System_Span<OVRPlugin_SpaceDiscoveryResult>__op_Implicit(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *unaff_x19;
  long unaff_x20;
  void *unaff_x21;
  void *__src;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  long unaff_x29;
  
  iVar1 = (*(code *)**(undefined8 **)(param_1 + 0xc0))();
  if (iVar1 < 1) {
LAB_052946f0:
    if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar6 = *(long *)(unaff_x20 + 0x18);
  if (lVar6 != 0) {
    __src = *(void **)(unaff_x29 + -0x28);
    puVar4 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x70);
    uVar2 = *puVar4;
    *(void **)(unaff_x29 + -0x18) = __src;
    (*(code *)puVar4[2])(uVar2,puVar4,lVar6,unaff_x29 + -0x18,__src);
    memcpy(unaff_x21,__src,*(size_t *)(unaff_x29 + -0x20));
    while (uVar3 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xa0))(),
          (uVar3 & 1) != 0) {
      puVar4 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x80);
      uVar2 = *puVar4;
      *(undefined8 **)(unaff_x29 + -0x18) = unaff_x24;
      (*(code *)puVar4[2])(uVar2);
      memcpy(unaff_x26,unaff_x24,unaff_x23);
      lVar6 = *(long *)(unaff_x20 + 0x38);
      memcpy(unaff_x25,unaff_x26,unaff_x23);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      puVar4 = unaff_x25;
      if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10) + 0x28)) {
        puVar4 = (undefined8 *)*unaff_x25;
      }
      puVar5 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x18);
      uVar2 = *puVar5;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
      (*(code *)puVar5[2])(uVar2,puVar5,lVar6,unaff_x29 + -0x18,unaff_x29 + -0x10);
      if (*(char *)(unaff_x29 + -0x10) == '\0') {
        lVar6 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x90))();
        memcpy(unaff_x24,unaff_x26,unaff_x23);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        puVar4 = unaff_x24;
        if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10) + 0x28)) {
          puVar4 = (undefined8 *)*unaff_x24;
        }
        puVar5 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 200);
        uVar2 = *puVar5;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
        (*(code *)puVar5[2])(uVar2,puVar5,lVar6,unaff_x29 + -0x18);
        lVar6 = *(long *)(unaff_x20 + 0x38);
        memcpy(unaff_x25,unaff_x26,unaff_x23);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        puVar4 = unaff_x25;
        if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10) + 0x28)) {
          puVar4 = (undefined8 *)*unaff_x25;
        }
        puVar5 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x38);
        uVar2 = *puVar5;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
        (*(code *)puVar5[2])(uVar2,puVar5,lVar6,unaff_x29 + -0x18,unaff_x29 + -0x10);
      }
    }
    lVar7 = *(long *)(*unaff_x19 + 0xc0);
    lVar6 = *(long *)(lVar7 + 0x78);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
      lVar7 = *(long *)(*unaff_x19 + 0xc0);
    }
    FUN_0373c0a0(lVar6,*(undefined8 *)(lVar7 + 0xa8),*(undefined8 *)(unaff_x29 + -0x40));
    (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xd0))();
    if (*(long *)(unaff_x20 + 0x28) != 0) {
      (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xb8))();
      goto LAB_052946f0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


