/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 03dfe16c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_SpaceDiscoveryResult>___ctor(long param_1)

{
  void *__src;
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long in_x9;
  ulong in_x10;
  long unaff_x19;
  void *unaff_x21;
  size_t unaff_x22;
  size_t unaff_x23;
  void *unaff_x25;
  undefined8 *__dest;
  long *unaff_x28;
  long unaff_x29;
  
  __dest = (undefined8 *)(param_1 - (in_x10 & 0x1fffffff0));
  memset((void *)((long)__dest - in_x9),0,unaff_x22);
  plVar2 = (long *)thunk_FUN_02b9b29c(*(undefined8 *)(unaff_x29 + -0x30),
                                      *(undefined8 *)(*unaff_x28 + 0x80));
  if (*plVar2 == 0) {
LAB_03dfe2dc:
    if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  else {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28))();
    if (-1 < iVar1 + -1) {
      do {
        plVar2 = (long *)thunk_FUN_02b9b29c(*(undefined8 *)(unaff_x29 + -0x30),
                                            *(undefined8 *)
                                             (**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80
                                             ));
        lVar5 = *plVar2;
        if (lVar5 == 0) goto LAB_03dfe2dc;
        lVar6 = *(long *)(unaff_x19 + 0x20);
        iVar1 = iVar1 + -1;
        *(int *)(unaff_x29 + -0xc) = iVar1;
        puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x30);
        uVar3 = *puVar4;
        pcVar7 = (code *)puVar4[2];
        *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
        *(void **)(unaff_x29 + -0x18) = unaff_x25;
        (*pcVar7)(uVar3,puVar4,lVar5,unaff_x29 + -0x20);
        memcpy((void *)((long)__dest - in_x9),unaff_x25,unaff_x22);
        lVar5 = *(long *)(unaff_x19 + 0x20);
        __src = unaff_x21;
        if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x38) + 0x28)) {
          __src = (void *)(unaff_x29 + -0x28);
        }
        memcpy(__dest,__src,unaff_x23);
        lVar6 = *(long *)(lVar5 + 0xc0);
        lVar5 = *(long *)(lVar6 + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02b76218();
          lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        }
        uVar3 = *(undefined8 *)(lVar6 + 0x48);
        puVar4 = __dest;
        if (-1 < *(int *)(*(long *)(lVar6 + 0x38) + 0x28)) {
          puVar4 = (undefined8 *)*__dest;
        }
        *(undefined8 **)(unaff_x29 + -0x20) = puVar4;
        FUN_02b3d498(lVar5,uVar3);
      } while (0 < iVar1);
    }
    if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


