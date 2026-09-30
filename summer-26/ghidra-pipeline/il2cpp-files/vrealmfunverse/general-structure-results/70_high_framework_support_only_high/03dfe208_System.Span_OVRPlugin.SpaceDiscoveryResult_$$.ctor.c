/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 03dfe208
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


void System_Span<OVRPlugin_SpaceDiscoveryResult>___ctor
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  void *__src;
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  long in_x9;
  long unaff_x19;
  long lVar6;
  void *unaff_x21;
  size_t unaff_x22;
  size_t unaff_x23;
  void *unaff_x25;
  undefined8 *unaff_x26;
  void *unaff_x27;
  int unaff_w28;
  long unaff_x29;
  
  while( true ) {
    puVar3 = *(undefined8 **)(param_1 + 0x30);
    uVar2 = *puVar3;
    pcVar4 = (code *)puVar3[2];
    *(long *)(unaff_x29 + -0x20) = in_x9;
    *(void **)(unaff_x29 + -0x18) = unaff_x25;
    (*pcVar4)(uVar2,puVar3,param_4,param_5);
    memcpy(unaff_x27,unaff_x25,unaff_x22);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    __src = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x38) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x26,__src,unaff_x23);
    lVar5 = *(long *)(lVar6 + 0xc0);
    lVar6 = *(long *)(lVar5 + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02b76218();
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    uVar2 = *(undefined8 *)(lVar5 + 0x48);
    puVar3 = unaff_x26;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x38) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x26;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar3;
    FUN_02b3d498(lVar6,uVar2);
    if (unaff_w28 < 1) break;
    plVar1 = (long *)thunk_FUN_02b9b29c(*(undefined8 *)(unaff_x29 + -0x30),
                                        *(undefined8 *)
                                         (**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
    param_4 = *plVar1;
    if (param_4 == 0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
LAB_03dfe2f4:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar6 = *(long *)(unaff_x19 + 0x20);
    unaff_w28 = unaff_w28 + -1;
    in_x9 = unaff_x29 + -0xc;
    param_5 = unaff_x29 + -0x20;
    *(int *)(unaff_x29 + -0xc) = unaff_w28;
    param_1 = *(long *)(lVar6 + 0xc0);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
  goto LAB_03dfe2f4;
}


