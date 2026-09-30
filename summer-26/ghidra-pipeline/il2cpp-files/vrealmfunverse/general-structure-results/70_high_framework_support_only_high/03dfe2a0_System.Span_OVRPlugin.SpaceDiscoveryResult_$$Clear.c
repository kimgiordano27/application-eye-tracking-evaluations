/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$Clear
ENTRY_POINT: 03dfe2a0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_SpaceDiscoveryResult>__Clear(void)

{
  void *__src;
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long unaff_x19;
  void *unaff_x21;
  size_t unaff_x22;
  size_t unaff_x23;
  void *unaff_x25;
  undefined8 *unaff_x26;
  void *unaff_x27;
  int unaff_w28;
  long unaff_x29;
  
  do {
    if (unaff_w28 < 1) {
      if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
LAB_03dfe2f4:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    plVar1 = (long *)thunk_FUN_02b9b29c(*(undefined8 *)(unaff_x29 + -0x30),
                                        *(undefined8 *)
                                         (**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_03dfe2f4;
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    unaff_w28 = unaff_w28 + -1;
    *(int *)(unaff_x29 + -0xc) = unaff_w28;
    puVar3 = *(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x30);
    uVar2 = *puVar3;
    pcVar6 = (code *)puVar3[2];
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    *(void **)(unaff_x29 + -0x18) = unaff_x25;
    (*pcVar6)(uVar2,puVar3,lVar4,unaff_x29 + -0x20);
    memcpy(unaff_x27,unaff_x25,unaff_x22);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    __src = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x38) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x26,__src,unaff_x23);
    lVar5 = *(long *)(lVar4 + 0xc0);
    lVar4 = *(long *)(lVar5 + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218();
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    uVar2 = *(undefined8 *)(lVar5 + 0x48);
    puVar3 = unaff_x26;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x38) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x26;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar3;
    FUN_02b3d498(lVar4,uVar2);
  } while( true );
}


