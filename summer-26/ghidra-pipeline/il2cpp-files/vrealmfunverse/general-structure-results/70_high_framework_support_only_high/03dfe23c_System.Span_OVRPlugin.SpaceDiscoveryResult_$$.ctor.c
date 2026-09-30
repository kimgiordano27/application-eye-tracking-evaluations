/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 03dfe23c
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
               (long param_1,undefined8 *param_2,undefined8 param_3,size_t param_4)

{
  void *__src;
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  size_t unaff_x23;
  void *unaff_x25;
  undefined8 *unaff_x26;
  void *unaff_x27;
  int unaff_w28;
  long unaff_x29;
  
  while( true ) {
    __src = unaff_x21;
    if (-1 < *(int *)(*(long *)(param_1 + 0x38) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x28);
    }
    memcpy(param_2,__src,param_4);
    lVar6 = *(long *)(unaff_x20 + 0xc0);
    lVar2 = *(long *)(lVar6 + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02b76218();
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    uVar3 = *(undefined8 *)(lVar6 + 0x48);
    puVar4 = unaff_x26;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x38) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x26;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar4;
    FUN_02b3d498(lVar2,uVar3);
    if (unaff_w28 < 1) break;
    plVar1 = (long *)thunk_FUN_02b9b29c(*(undefined8 *)(unaff_x29 + -0x30),
                                        *(undefined8 *)
                                         (**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80));
    lVar2 = *plVar1;
    if (lVar2 == 0) {
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
    *(int *)(unaff_x29 + -0xc) = unaff_w28;
    puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x30);
    uVar3 = *puVar4;
    pcVar5 = (code *)puVar4[2];
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    *(void **)(unaff_x29 + -0x18) = unaff_x25;
    (*pcVar5)(uVar3,puVar4,lVar2,unaff_x29 + -0x20);
    memcpy(unaff_x27,unaff_x25,unaff_x22);
    unaff_x20 = *(long *)(unaff_x19 + 0x20);
    param_1 = *(long *)(unaff_x20 + 0xc0);
    param_2 = unaff_x26;
    param_4 = unaff_x23;
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
  goto LAB_03dfe2f4;
}


