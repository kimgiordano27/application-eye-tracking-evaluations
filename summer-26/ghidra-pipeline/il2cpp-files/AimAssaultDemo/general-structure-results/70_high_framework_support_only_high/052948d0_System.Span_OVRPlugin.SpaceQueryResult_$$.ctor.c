/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 052948d0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05294c50) */

void System_Span<OVRPlugin_SpaceQueryResult>___ctor(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong in_x9;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar9;
  void *__s;
  size_t unaff_x24;
  undefined8 *__src;
  void *__s_00;
  size_t unaff_x27;
  void *__src_00;
  long unaff_x29;
  
  iVar1 = (int)unaff_x27;
  if ((in_x9 & 1) == 0) {
    lVar2 = FUN_03775678();
    iVar1 = *(int *)(lVar2 + 0xfc);
  }
  lVar2 = (long)&stack0x00000000 - ((ulong)(iVar1 + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x20) = lVar2;
  uVar9 = unaff_x24 + 0xf & 0x1fffffff0;
  __src = (undefined8 *)(lVar2 - uVar9);
  uVar8 = unaff_x27 + 0xf & 0x1fffffff0;
  __src_00 = (void *)((long)__src - uVar8);
  __s = (void *)((long)__src_00 - uVar8);
  memset(__s,0,unaff_x27);
  __s_00 = (void *)((long)__s - uVar9);
  memset(__s_00,0,unaff_x24);
  if (unaff_x20 == 0) {
    thunk_FUN_037a15ac(PTR_DAT_07d8ebe8);
    uVar3 = thunk_FUN_037788cc();
    uVar4 = thunk_FUN_037a15ac(PTR_DAT_07d96600);
    FUN_061a1b40(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar3);
  }
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd8))();
  if (unaff_x21 != 0) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe0))();
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf0);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678(lVar2);
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar2);
    }
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8))();
    lVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90))();
    if (lVar2 != 0) {
      puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x70);
      uVar3 = *puVar5;
      *(void **)(unaff_x29 + -0x18) = __src_00;
      (*(code *)puVar5[2])(uVar3,puVar5,lVar2,unaff_x29 + -0x18,__src_00);
      memcpy(__s,__src_00,unaff_x27);
LAB_05294a38:
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0))
                        (__s);
      if ((uVar8 & 1) == 0) {
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        lVar2 = *(long *)(lVar7 + 0x78);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03775678();
          lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
        }
        FUN_0373c0a0(lVar2,*(undefined8 *)(lVar7 + 0xa8),*(undefined8 *)(unaff_x29 + -0x20),__s,0,0)
        ;
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
      puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80);
      uVar3 = *puVar5;
      *(undefined8 **)(unaff_x29 + -0x18) = __src;
      (*(code *)puVar5[2])(uVar3,puVar5,__s,unaff_x29 + -0x18,__src);
      memcpy(__s_00,__src,unaff_x24);
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
  lVar2 = *(long *)(unaff_x21 + 0x30);
  memcpy(__src,__s_00,unaff_x24);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  puVar5 = __src;
  if (-1 < *(int *)(*(long *)(lVar7 + 0x10) + 0x28)) {
    puVar5 = (undefined8 *)*__src;
  }
  puVar6 = *(undefined8 **)(lVar7 + 0x18);
  uVar3 = *puVar6;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
  (*(code *)puVar6[2])(uVar3,puVar6,lVar2,unaff_x29 + -0x18,unaff_x29 + -0xc);
  if (*(char *)(unaff_x29 + -0xc) == '\0') {
LAB_05294b0c:
    memcpy(__src,__s_00,unaff_x24);
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    puVar5 = __src;
    if (-1 < *(int *)(*(long *)(lVar2 + 0x10) + 0x28)) {
      puVar5 = (undefined8 *)*__src;
    }
    puVar6 = *(undefined8 **)(lVar2 + 200);
    uVar3 = *puVar6;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
    (*(code *)puVar6[2])(uVar3);
  }
  goto LAB_05294a38;
}


