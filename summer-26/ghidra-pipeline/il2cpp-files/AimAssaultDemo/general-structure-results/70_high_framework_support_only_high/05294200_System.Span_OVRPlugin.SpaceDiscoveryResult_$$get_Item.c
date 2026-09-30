/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$get_Item
ENTRY_POINT: 05294200
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x052946b8) */
/* WARNING: Removing unreachable block (ram,0x05294464) */
/* WARNING: Removing unreachable block (ram,0x05294744) */
/* WARNING: Removing unreachable block (ram,0x0529473c) */

void System_Span<OVRPlugin_SpaceDiscoveryResult>__get_Item(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x19;
  long unaff_x20;
  void *__s;
  ulong uVar8;
  void *__src;
  size_t unaff_x23;
  undefined8 *__src_00;
  undefined8 *__dest;
  size_t unaff_x26;
  void *__s_00;
  void *pvVar9;
  undefined8 *puVar10;
  long unaff_x29;
  
  uVar8 = unaff_x23 + 0xf & 0x1fffffff0;
  __src_00 = (undefined8 *)(param_1 - uVar8);
  __dest = (undefined8 *)((long)__src_00 - uVar8);
  puVar10 = (undefined8 *)((long)__dest - uVar8);
  uVar7 = unaff_x26 + 0xf & 0x1fffffff0;
  lVar5 = (long)puVar10 - uVar7;
  *(long *)(unaff_x29 + -0x28) = lVar5;
  *(size_t *)(unaff_x29 + -0x20) = unaff_x26;
  __s = (void *)(lVar5 - uVar7);
  memset(__s,0,unaff_x26);
  pvVar9 = (void *)((long)__s - uVar8);
  memset(pvVar9,0,unaff_x23);
  __s_00 = (void *)((long)pvVar9 - uVar8);
  memset(__s_00,0,unaff_x23);
  if (unaff_x20 == 0) goto LAB_05294738;
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x58))();
  if (0 < iVar1) {
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if (lVar5 == 0) goto LAB_05294738;
    __src = *(void **)(unaff_x29 + -0x28);
    puVar3 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x70);
    uVar2 = *puVar3;
    *(void **)(unaff_x29 + -0x18) = __src;
    (*(code *)puVar3[2])(uVar2,puVar3,lVar5,unaff_x29 + -0x18,__src);
    memcpy(__s,__src,*(size_t *)(unaff_x29 + -0x20));
    while (uVar7 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xa0))(__s),
          (uVar7 & 1) != 0) {
      puVar3 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x80);
      uVar2 = *puVar3;
      *(undefined8 **)(unaff_x29 + -0x18) = __src_00;
      (*(code *)puVar3[2])(uVar2,puVar3,__s,unaff_x29 + -0x18,__src_00);
      memcpy(pvVar9,__src_00,unaff_x23);
      lVar5 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x90))();
      memcpy(__dest,pvVar9,unaff_x23);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      puVar3 = __dest;
      if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10) + 0x28)) {
        puVar3 = (undefined8 *)*__dest;
      }
      puVar4 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x98);
      uVar2 = *puVar4;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
      (*(code *)puVar4[2])(uVar2,puVar4,lVar5,unaff_x29 + -0x18,unaff_x29 + -0xc);
      lVar5 = *(long *)(unaff_x20 + 0x38);
      memcpy(puVar10,pvVar9,unaff_x23);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      puVar3 = puVar10;
      if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10) + 0x28)) {
        puVar3 = (undefined8 *)*puVar10;
      }
      puVar4 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x28);
      uVar2 = *puVar4;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
      (*(code *)puVar4[2])(uVar2,puVar4,lVar5,unaff_x29 + -0x18,unaff_x29 + -0xc);
    }
    lVar6 = *(long *)(*unaff_x19 + 0xc0);
    lVar5 = *(long *)(lVar6 + 0x78);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678();
      lVar6 = *(long *)(*unaff_x19 + 0xc0);
    }
    FUN_0373c0a0(lVar5,*(undefined8 *)(lVar6 + 0xa8),*(undefined8 *)(unaff_x29 + -0x38),__s,0,0);
    (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xb0))();
    if (*(long *)(unaff_x20 + 0x30) == 0) goto LAB_05294738;
    (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xb8))();
  }
  iVar1 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xc0))();
  if (iVar1 < 1) {
LAB_052946f0:
    if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar5 = *(long *)(unaff_x20 + 0x18);
  if (lVar5 != 0) {
    pvVar9 = *(void **)(unaff_x29 + -0x28);
    puVar10 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x70);
    uVar2 = *puVar10;
    *(void **)(unaff_x29 + -0x18) = pvVar9;
    (*(code *)puVar10[2])(uVar2,puVar10,lVar5,unaff_x29 + -0x18,pvVar9);
    memcpy(__s,pvVar9,*(size_t *)(unaff_x29 + -0x20));
    while (uVar7 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xa0))(__s),
          (uVar7 & 1) != 0) {
      puVar10 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x80);
      uVar2 = *puVar10;
      *(undefined8 **)(unaff_x29 + -0x18) = __src_00;
      (*(code *)puVar10[2])(uVar2,puVar10,__s,unaff_x29 + -0x18,__src_00);
      memcpy(__s_00,__src_00,unaff_x23);
      lVar5 = *(long *)(unaff_x20 + 0x38);
      memcpy(__dest,__s_00,unaff_x23);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      puVar10 = __dest;
      if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10) + 0x28)) {
        puVar10 = (undefined8 *)*__dest;
      }
      puVar3 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x18);
      uVar2 = *puVar3;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
      (*(code *)puVar3[2])(uVar2,puVar3,lVar5,unaff_x29 + -0x18,unaff_x29 + -0x10);
      if (*(char *)(unaff_x29 + -0x10) == '\0') {
        lVar5 = (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x90))();
        memcpy(__src_00,__s_00,unaff_x23);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        puVar10 = __src_00;
        if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10) + 0x28)) {
          puVar10 = (undefined8 *)*__src_00;
        }
        puVar3 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 200);
        uVar2 = *puVar3;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
        (*(code *)puVar3[2])(uVar2,puVar3,lVar5,unaff_x29 + -0x18);
        lVar5 = *(long *)(unaff_x20 + 0x38);
        memcpy(__dest,__s_00,unaff_x23);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        puVar10 = __dest;
        if (-1 < *(int *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10) + 0x28)) {
          puVar10 = (undefined8 *)*__dest;
        }
        puVar3 = *(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0x38);
        uVar2 = *puVar3;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
        (*(code *)puVar3[2])(uVar2,puVar3,lVar5,unaff_x29 + -0x18,unaff_x29 + -0x10);
      }
    }
    lVar6 = *(long *)(*unaff_x19 + 0xc0);
    lVar5 = *(long *)(lVar6 + 0x78);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678();
      lVar6 = *(long *)(*unaff_x19 + 0xc0);
    }
    FUN_0373c0a0(lVar5,*(undefined8 *)(lVar6 + 0xa8),*(undefined8 *)(unaff_x29 + -0x40),__s,0,0);
    (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xd0))();
    if (*(long *)(unaff_x20 + 0x28) != 0) {
      (*(code *)**(undefined8 **)(*(long *)(*unaff_x19 + 0xc0) + 0xb8))();
      goto LAB_052946f0;
    }
  }
LAB_05294738:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


