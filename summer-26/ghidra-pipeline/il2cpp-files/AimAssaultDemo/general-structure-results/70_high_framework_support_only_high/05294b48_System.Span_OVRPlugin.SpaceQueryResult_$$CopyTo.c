/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$CopyTo
ENTRY_POINT: 05294b48
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05294c50) */

void System_Span<OVRPlugin_SpaceQueryResult>__CopyTo(code *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x21;
  size_t unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  long lVar7;
  long unaff_x29;
  
  do {
    (*param_1)(param_2);
    do {
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0))();
      if ((uVar2 & 1) == 0) {
        lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        lVar7 = *(long *)(lVar6 + 0x78);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03775678();
          lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        }
        FUN_0373c0a0(lVar7,*(undefined8 *)(lVar6 + 0xa8),*(undefined8 *)(unaff_x29 + -0x20));
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
      uVar3 = *puVar4;
      *(undefined8 **)(unaff_x29 + -0x18) = unaff_x25;
      (*(code *)puVar4[2])(uVar3);
      memcpy(unaff_x26,unaff_x25,unaff_x24);
      if (*(long *)(unaff_x21 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      iVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20))();
      if (iVar1 < 1) break;
      lVar7 = *(long *)(unaff_x21 + 0x30);
      memcpy(unaff_x25,unaff_x26,unaff_x24);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      puVar4 = unaff_x25;
      if (-1 < *(int *)(*(long *)(lVar6 + 0x10) + 0x28)) {
        puVar4 = (undefined8 *)*unaff_x25;
      }
      puVar5 = *(undefined8 **)(lVar6 + 0x18);
      uVar3 = *puVar5;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
      (*(code *)puVar5[2])(uVar3,puVar5,lVar7,unaff_x29 + -0x18,unaff_x29 + -0xc);
    } while (*(char *)(unaff_x29 + -0xc) != '\0');
    memcpy(unaff_x25,unaff_x26,unaff_x24);
    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    puVar4 = unaff_x25;
    if (-1 < *(int *)(*(long *)(lVar7 + 0x10) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x25;
    }
    puVar5 = *(undefined8 **)(lVar7 + 200);
    param_2 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
    param_1 = (code *)puVar5[2];
  } while( true );
}


