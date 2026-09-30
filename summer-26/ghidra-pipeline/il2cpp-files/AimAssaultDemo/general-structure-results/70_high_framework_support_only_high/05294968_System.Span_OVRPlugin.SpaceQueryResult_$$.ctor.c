/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 05294968
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05294c50) */

void System_Span<OVRPlugin_SpaceQueryResult>___ctor(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x21;
  void *unaff_x23;
  size_t unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  size_t unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  (*(code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0xd8))();
  if (unaff_x21 != 0) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe0))();
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf0);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678(lVar6);
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar6);
    }
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8))();
    lVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90))();
    if (lVar6 != 0) {
      puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70);
      uVar2 = *puVar4;
      *(void **)(unaff_x29 + -0x18) = unaff_x28;
      (*(code *)puVar4[2])(uVar2,puVar4,lVar6,unaff_x29 + -0x18);
      memcpy(unaff_x23,unaff_x28,unaff_x27);
LAB_05294a38:
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0))();
      if ((uVar3 & 1) == 0) {
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        lVar6 = *(long *)(lVar7 + 0x78);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03775678();
          lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        }
        FUN_0373c0a0(lVar6,*(undefined8 *)(lVar7 + 0xa8),*(undefined8 *)(unaff_x29 + -0x20));
        iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0))()
        ;
        if (0 < iVar1) {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8))();
        }
        if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80);
      uVar2 = *puVar4;
      *(undefined8 **)(unaff_x29 + -0x18) = unaff_x25;
      (*(code *)puVar4[2])(uVar2);
      memcpy(unaff_x26,unaff_x25,unaff_x24);
      if (*(long *)(unaff_x21 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20))();
      if (0 < iVar1) goto code_r0x05294ab0;
      goto LAB_05294b0c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
code_r0x05294ab0:
  lVar6 = *(long *)(unaff_x21 + 0x30);
  memcpy(unaff_x25,unaff_x26,unaff_x24);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  puVar4 = unaff_x25;
  if (-1 < *(int *)(*(long *)(lVar7 + 0x10) + 0x28)) {
    puVar4 = (undefined8 *)*unaff_x25;
  }
  puVar5 = *(undefined8 **)(lVar7 + 0x18);
  uVar2 = *puVar5;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
  (*(code *)puVar5[2])(uVar2,puVar5,lVar6,unaff_x29 + -0x18,unaff_x29 + -0xc);
  if (*(char *)(unaff_x29 + -0xc) == '\0') {
LAB_05294b0c:
    memcpy(unaff_x25,unaff_x26,unaff_x24);
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    puVar4 = unaff_x25;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x10) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x25;
    }
    puVar5 = *(undefined8 **)(lVar6 + 200);
    uVar2 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
    (*(code *)puVar5[2])(uVar2);
  }
  goto LAB_05294a38;
}


