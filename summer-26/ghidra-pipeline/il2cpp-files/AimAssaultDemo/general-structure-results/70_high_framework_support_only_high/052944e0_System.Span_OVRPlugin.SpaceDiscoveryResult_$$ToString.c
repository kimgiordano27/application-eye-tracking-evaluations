/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$ToString
ENTRY_POINT: 052944e0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x052946b8) */
/* WARNING: Removing unreachable block (ram,0x05294744) */

void System_Span<OVRPlugin_SpaceDiscoveryResult>__ToString(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  long lVar6;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  long unaff_x29;
  
  *(void **)(unaff_x29 + -0x18) = unaff_x22;
  (**(code **)(param_2 + 0x10))();
  memcpy(unaff_x21,unaff_x22,*(size_t *)(unaff_x29 + -0x20));
  while( true ) {
    do {
      uVar1 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xa0))();
      if ((uVar1 & 1) == 0) {
        lVar5 = *(long *)(*unaff_x19 + 0xc0);
        lVar6 = *(long *)(lVar5 + 0x78);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03775678();
          lVar5 = *(long *)(*unaff_x19 + 0xc0);
        }
        FUN_0373c0a0(lVar6,*(undefined8 *)(lVar5 + 0xa8),*(undefined8 *)(unaff_x29 + -0x40));
        (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xd0))();
        if (*(long *)(unaff_x20 + 0x28) != 0) {
          (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xb8))();
          if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      puVar3 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x80);
      uVar2 = *puVar3;
      *(undefined8 **)(unaff_x29 + -0x18) = unaff_x24;
      (*(code *)puVar3[2])(uVar2);
      memcpy(unaff_x26,unaff_x24,unaff_x23);
      lVar6 = *(long *)(unaff_x20 + 0x38);
      memcpy(unaff_x25,unaff_x26,unaff_x23);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      puVar3 = unaff_x25;
      if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10) + 0x28)) {
        puVar3 = (undefined8 *)*unaff_x25;
      }
      puVar4 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x18);
      uVar2 = *puVar4;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
      (*(code *)puVar4[2])(uVar2,puVar4,lVar6,unaff_x29 + -0x18,unaff_x29 + -0x10);
    } while (*(char *)(unaff_x29 + -0x10) != '\0');
    lVar6 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x90))();
    memcpy(unaff_x24,unaff_x26,unaff_x23);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    puVar3 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x24;
    }
    puVar4 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 200);
    uVar2 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
    (*(code *)puVar4[2])(uVar2,puVar4,lVar6,unaff_x29 + -0x18);
    lVar6 = *(long *)(unaff_x20 + 0x38);
    memcpy(unaff_x25,unaff_x26,unaff_x23);
    if (lVar6 == 0) break;
    puVar3 = unaff_x25;
    if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x25;
    }
    puVar4 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x38);
    uVar2 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
    (*(code *)puVar4[2])(uVar2,puVar4,lVar6,unaff_x29 + -0x18,unaff_x29 + -0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


