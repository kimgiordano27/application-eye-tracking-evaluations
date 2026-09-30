/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$CopyTo
ENTRY_POINT: 052943a0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x052946b8) */
/* WARNING: Removing unreachable block (ram,0x05294464) */
/* WARNING: Removing unreachable block (ram,0x05294744) */
/* WARNING: Removing unreachable block (ram,0x0529473c) */

void System_Span<OVRPlugin_SpaceDiscoveryResult>__CopyTo(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *in_x9;
  long *unaff_x19;
  long unaff_x20;
  void *unaff_x21;
  long unaff_x22;
  long lVar7;
  void *__src;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  while( true ) {
    puVar4 = *(undefined8 **)(param_1 + 0x98);
    uVar3 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x18) = in_x9;
    (*(code *)puVar4[2])(uVar3,puVar4,unaff_x22,unaff_x29 + -0x18,unaff_x29 + -0xc);
    lVar7 = *(long *)(unaff_x20 + 0x38);
    memcpy(unaff_x28,unaff_x27,unaff_x23);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    puVar4 = unaff_x28;
    if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x28;
    }
    puVar5 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
    uVar3 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
    (*(code *)puVar5[2])(uVar3,puVar5,lVar7,unaff_x29 + -0x18,unaff_x29 + -0xc);
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xa0))();
    if ((uVar2 & 1) == 0) break;
    puVar4 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x80);
    uVar3 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x24;
    (*(code *)puVar4[2])(uVar3);
    memcpy(unaff_x27,unaff_x24,unaff_x23);
    unaff_x22 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x90))();
    memcpy(unaff_x25,unaff_x27,unaff_x23);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    param_1 = *(long *)(*unaff_x19 + 0xc0);
    in_x9 = unaff_x25;
    if (-1 < *(int *)(*(long *)(param_1 + 0x10) + 0x28)) {
      in_x9 = (undefined8 *)*unaff_x25;
    }
  }
  lVar6 = *(long *)(*unaff_x19 + 0xc0);
  lVar7 = *(long *)(lVar6 + 0x78);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03775678();
    lVar6 = *(long *)(*unaff_x19 + 0xc0);
  }
  FUN_0373c0a0(lVar7,*(undefined8 *)(lVar6 + 0xa8),*(undefined8 *)(unaff_x29 + -0x38));
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
    lVar7 = *(long *)(unaff_x20 + 0x18);
    if (lVar7 != 0) {
      __src = *(void **)(unaff_x29 + -0x28);
      puVar4 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x70);
      uVar3 = *puVar4;
      *(void **)(unaff_x29 + -0x18) = __src;
      (*(code *)puVar4[2])(uVar3,puVar4,lVar7,unaff_x29 + -0x18,__src);
      memcpy(unaff_x21,__src,*(size_t *)(unaff_x29 + -0x20));
      while (uVar2 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xa0))(),
            (uVar2 & 1) != 0) {
        puVar4 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x80);
        uVar3 = *puVar4;
        *(undefined8 **)(unaff_x29 + -0x18) = unaff_x24;
        (*(code *)puVar4[2])(uVar3);
        memcpy(unaff_x26,unaff_x24,unaff_x23);
        lVar7 = *(long *)(unaff_x20 + 0x38);
        memcpy(unaff_x25,unaff_x26,unaff_x23);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        puVar4 = unaff_x25;
        if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10) + 0x28)) {
          puVar4 = (undefined8 *)*unaff_x25;
        }
        puVar5 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x18);
        uVar3 = *puVar5;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
        (*(code *)puVar5[2])(uVar3,puVar5,lVar7,unaff_x29 + -0x18,unaff_x29 + -0x10);
        if (*(char *)(unaff_x29 + -0x10) == '\0') {
          lVar7 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x90))();
          memcpy(unaff_x24,unaff_x26,unaff_x23);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          puVar4 = unaff_x24;
          if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10) + 0x28)) {
            puVar4 = (undefined8 *)*unaff_x24;
          }
          puVar5 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 200);
          uVar3 = *puVar5;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
          (*(code *)puVar5[2])(uVar3,puVar5,lVar7,unaff_x29 + -0x18);
          lVar7 = *(long *)(unaff_x20 + 0x38);
          memcpy(unaff_x25,unaff_x26,unaff_x23);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          puVar4 = unaff_x25;
          if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10) + 0x28)) {
            puVar4 = (undefined8 *)*unaff_x25;
          }
          puVar5 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x38);
          uVar3 = *puVar5;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
          (*(code *)puVar5[2])(uVar3,puVar5,lVar7,unaff_x29 + -0x18,unaff_x29 + -0x10);
        }
      }
      lVar6 = *(long *)(*unaff_x19 + 0xc0);
      lVar7 = *(long *)(lVar6 + 0x78);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03775678();
        lVar6 = *(long *)(*unaff_x19 + 0xc0);
      }
      FUN_0373c0a0(lVar7,*(undefined8 *)(lVar6 + 0xa8),*(undefined8 *)(unaff_x29 + -0x40));
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


