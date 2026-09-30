/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$op_Implicit
ENTRY_POINT: 05294894
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

void System_Span<OVRPlugin_SpaceDiscoveryResult>__op_Implicit
               (long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  void *__s;
  ulong __n;
  undefined8 *__src;
  void *__s_00;
  ulong uVar12;
  void *__src_00;
  long unaff_x29;
  undefined8 auStack_30 [6];
  
  lVar3 = tpidr_el0;
  *(long *)(unaff_x29 + -0x28) = lVar3;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar3 + 0x28);
  lVar9 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  lVar3 = *(long *)(lVar9 + 0x78);
  uVar8 = *(uint *)(lVar3 + 0xfc);
  uVar12 = (ulong)uVar8;
  __n = (ulong)*(uint *)(*(long *)(lVar9 + 0x10) + 0xfc);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03775678();
    uVar8 = *(uint *)(lVar3 + 0xfc);
  }
  lVar3 = (long)auStack_30 - ((ulong)(uVar8 + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x20) = lVar3;
  uVar11 = __n + 0xf & 0x1fffffff0;
  __src = (undefined8 *)(lVar3 - uVar11);
  uVar10 = uVar12 + 0xf & 0x1fffffff0;
  __src_00 = (void *)((long)__src - uVar10);
  __s = (void *)((long)__src_00 - uVar10);
  memset(__s,0,uVar12);
  __s_00 = (void *)((long)__s - uVar11);
  memset(__s_00,0,__n);
  if (param_2 == 0) {
    thunk_FUN_037a15ac(PTR_DAT_07d8ebe8);
    uVar4 = thunk_FUN_037788cc();
    uVar5 = thunk_FUN_037a15ac(PTR_DAT_07d96600);
    FUN_061a1b40(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar4,param_3);
  }
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xd8))(param_2);
  if (param_1 != 0) {
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe0))
                      (param_1);
    lVar3 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xf0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03775678(lVar3);
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar3);
    }
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe8))(param_2,uVar1);
    lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x90))
                      (param_1);
    if (lVar3 != 0) {
      puVar6 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x70);
      uVar4 = *puVar6;
      *(void **)(unaff_x29 + -0x18) = __src_00;
      (*(code *)puVar6[2])(uVar4,puVar6,lVar3,unaff_x29 + -0x18,__src_00);
      memcpy(__s,__src_00,uVar12);
LAB_05294a38:
      uVar12 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xa0))(__s)
      ;
      if ((uVar12 & 1) == 0) {
        lVar9 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
        lVar3 = *(long *)(lVar9 + 0x78);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03775678();
          lVar9 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
        }
        FUN_0373c0a0(lVar3,*(undefined8 *)(lVar9 + 0xa8),*(undefined8 *)(unaff_x29 + -0x20),__s,0,0)
        ;
        iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xc0))
                          (param_1);
        if (0 < iVar2) {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xf8))
                    (param_2,*(undefined8 *)(param_1 + 0x18));
        }
        if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      puVar6 = *(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80);
      uVar4 = *puVar6;
      *(undefined8 **)(unaff_x29 + -0x18) = __src;
      (*(code *)puVar6[2])(uVar4,puVar6,__s,unaff_x29 + -0x18,__src);
      memcpy(__s_00,__src,__n);
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20))();
      if (0 < iVar2) goto code_r0x05294ab0;
      goto LAB_05294b0c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
code_r0x05294ab0:
  lVar3 = *(long *)(param_1 + 0x30);
  memcpy(__src,__s_00,__n);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar9 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  puVar6 = __src;
  if (-1 < *(int *)(*(long *)(lVar9 + 0x10) + 0x28)) {
    puVar6 = (undefined8 *)*__src;
  }
  puVar7 = *(undefined8 **)(lVar9 + 0x18);
  uVar4 = *puVar7;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
  (*(code *)puVar7[2])(uVar4,puVar7,lVar3,unaff_x29 + -0x18,unaff_x29 + -0xc);
  if (*(char *)(unaff_x29 + -0xc) == '\0') {
LAB_05294b0c:
    memcpy(__src,__s_00,__n);
    lVar3 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
    puVar6 = __src;
    if (-1 < *(int *)(*(long *)(lVar3 + 0x10) + 0x28)) {
      puVar6 = (undefined8 *)*__src;
    }
    puVar7 = *(undefined8 **)(lVar3 + 200);
    uVar4 = *puVar7;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
    (*(code *)puVar7[2])(uVar4,puVar7,param_2,unaff_x29 + -0x18);
  }
  goto LAB_05294a38;
}


