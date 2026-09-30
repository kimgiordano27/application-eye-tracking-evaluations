/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 05294148
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

void System_Span<OVRPlugin_SpaceDiscoveryResult>___ctor(long param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long *plVar9;
  void *__s;
  ulong uVar10;
  ulong __n;
  undefined8 *__src;
  undefined8 *__dest;
  ulong uVar11;
  void *__s_00;
  void *__s_01;
  undefined8 *puVar12;
  long alStack_40 [3];
  undefined8 *puStack_28;
  ulong uStack_20;
  undefined8 *puStack_18;
  char acStack_10 [4];
  undefined1 auStack_c [4];
  long lStack_8;
  
  alStack_40[2] = tpidr_el0;
  lStack_8 = *(long *)(alStack_40[2] + 0x28);
  plVar9 = (long *)(param_2 + 0x20);
  lVar5 = *(long *)(*(long *)(*plVar9 + 0xc0) + 0x78);
  uVar8 = *(uint *)(lVar5 + 0xfc);
  uVar11 = (ulong)uVar8;
  uVar1 = *(ushort *)(lVar5 + 0x135);
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*plVar9 + 0xc0) + 0x10) + 0xfc);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
    uVar8 = *(uint *)(lVar5 + 0xfc);
    lVar5 = *(long *)(*(long *)(*plVar9 + 0xc0) + 0x78);
    uVar1 = *(ushort *)(lVar5 + 0x135);
  }
  lVar6 = (long)alStack_40 - ((ulong)(uVar8 + 0x10) + 0xf & 0x1fffffff0);
  alStack_40[1] = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
  }
  alStack_40[0] = lVar6 - ((ulong)(*(int *)(lVar5 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar10 = __n + 0xf & 0x1fffffff0;
  __src = (undefined8 *)(alStack_40[0] - uVar10);
  __dest = (undefined8 *)((long)__src - uVar10);
  puVar12 = (undefined8 *)((long)__dest - uVar10);
  uVar7 = uVar11 + 0xf & 0x1fffffff0;
  puStack_28 = (undefined8 *)((long)puVar12 - uVar7);
  __s = (void *)((long)puStack_28 - uVar7);
  uStack_20 = uVar11;
  memset(__s,0,uVar11);
  __s_01 = (void *)((long)__s - uVar10);
  memset(__s_01,0,__n);
  __s_00 = (void *)((long)__s_01 - uVar10);
  memset(__s_00,0,__n);
  if (param_1 == 0) goto LAB_05294738;
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(*plVar9 + 0xc0) + 0x58))(param_1);
  puVar4 = puStack_28;
  if (0 < iVar2) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_05294738;
    puVar3 = *(undefined8 **)(*(long *)(*plVar9 + 0xc0) + 0x70);
    puStack_18 = puStack_28;
    (*(code *)puVar3[2])(*puVar3,puVar3,*(long *)(param_1 + 0x20),&puStack_18,puStack_28);
    memcpy(__s,puVar4,uStack_20);
    while (uVar11 = (*(code *)**(undefined8 **)(*(long *)(*plVar9 + 0xc0) + 0xa0))(__s),
          (uVar11 & 1) != 0) {
      puVar4 = *(undefined8 **)(*(long *)(*plVar9 + 0xc0) + 0x80);
      puStack_18 = __src;
      (*(code *)puVar4[2])(*puVar4,puVar4,__s,&puStack_18,__src);
      memcpy(__s_01,__src,__n);
      lVar5 = (*(code *)**(undefined8 **)(*(long *)(*plVar9 + 0xc0) + 0x90))(param_1);
      memcpy(__dest,__s_01,__n);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      puStack_18 = __dest;
      if (-1 < *(int *)(*(long *)(*(long *)(*plVar9 + 0xc0) + 0x10) + 0x28)) {
        puStack_18 = (undefined8 *)*__dest;
      }
      puVar4 = *(undefined8 **)(*(long *)(*plVar9 + 0xc0) + 0x98);
      (*(code *)puVar4[2])(*puVar4,puVar4,lVar5,&puStack_18,auStack_c);
      lVar5 = *(long *)(param_1 + 0x38);
      memcpy(puVar12,__s_01,__n);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      puStack_18 = puVar12;
      if (-1 < *(int *)(*(long *)(*(long *)(*plVar9 + 0xc0) + 0x10) + 0x28)) {
        puStack_18 = (undefined8 *)*puVar12;
      }
      puVar4 = *(undefined8 **)(*(long *)(*plVar9 + 0xc0) + 0x28);
      (*(code *)puVar4[2])(*puVar4,puVar4,lVar5,&puStack_18,auStack_c);
    }
    lVar6 = *(long *)(*plVar9 + 0xc0);
    lVar5 = *(long *)(lVar6 + 0x78);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678();
      lVar6 = *(long *)(*plVar9 + 0xc0);
    }
    FUN_0373c0a0(lVar5,*(undefined8 *)(lVar6 + 0xa8),alStack_40[1],__s,0,0);
    (*(code *)**(undefined8 **)(*(long *)(*plVar9 + 0xc0) + 0xb0))(param_1);
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_05294738;
    (*(code *)**(undefined8 **)(*(long *)(*plVar9 + 0xc0) + 0xb8))();
  }
  iVar2 = (*(code *)**(undefined8 **)(*(long *)(*plVar9 + 0xc0) + 0xc0))(param_1);
  puVar12 = puStack_28;
  if (0 < iVar2) {
    if (*(long *)(param_1 + 0x18) != 0) {
      puVar4 = *(undefined8 **)(*(long *)(*plVar9 + 0xc0) + 0x70);
      puStack_18 = puStack_28;
      (*(code *)puVar4[2])(*puVar4,puVar4,*(long *)(param_1 + 0x18),&puStack_18,puStack_28);
      memcpy(__s,puVar12,uStack_20);
      while (uVar11 = (*(code *)**(undefined8 **)(*(long *)(*plVar9 + 0xc0) + 0xa0))(__s),
            (uVar11 & 1) != 0) {
        puVar12 = *(undefined8 **)(*(long *)(*plVar9 + 0xc0) + 0x80);
        puStack_18 = __src;
        (*(code *)puVar12[2])(*puVar12,puVar12,__s,&puStack_18,__src);
        memcpy(__s_00,__src,__n);
        lVar5 = *(long *)(param_1 + 0x38);
        memcpy(__dest,__s_00,__n);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        puStack_18 = __dest;
        if (-1 < *(int *)(*(long *)(*(long *)(*plVar9 + 0xc0) + 0x10) + 0x28)) {
          puStack_18 = (undefined8 *)*__dest;
        }
        puVar12 = *(undefined8 **)(*(long *)(*plVar9 + 0xc0) + 0x18);
        (*(code *)puVar12[2])(*puVar12,puVar12,lVar5,&puStack_18,acStack_10);
        if (acStack_10[0] == '\0') {
          lVar5 = (*(code *)**(undefined8 **)(*(long *)(*plVar9 + 0xc0) + 0x90))(param_1);
          memcpy(__src,__s_00,__n);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          puStack_18 = __src;
          if (-1 < *(int *)(*(long *)(*(long *)(*plVar9 + 0xc0) + 0x10) + 0x28)) {
            puStack_18 = (undefined8 *)*__src;
          }
          puVar12 = *(undefined8 **)(*(long *)(*plVar9 + 0xc0) + 200);
          (*(code *)puVar12[2])(*puVar12,puVar12,lVar5,&puStack_18);
          lVar5 = *(long *)(param_1 + 0x38);
          memcpy(__dest,__s_00,__n);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          puStack_18 = __dest;
          if (-1 < *(int *)(*(long *)(*(long *)(*plVar9 + 0xc0) + 0x10) + 0x28)) {
            puStack_18 = (undefined8 *)*__dest;
          }
          puVar12 = *(undefined8 **)(*(long *)(*plVar9 + 0xc0) + 0x38);
          (*(code *)puVar12[2])(*puVar12,puVar12,lVar5,&puStack_18,acStack_10);
        }
      }
      lVar6 = *(long *)(*plVar9 + 0xc0);
      lVar5 = *(long *)(lVar6 + 0x78);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03775678();
        lVar6 = *(long *)(*plVar9 + 0xc0);
      }
      FUN_0373c0a0(lVar5,*(undefined8 *)(lVar6 + 0xa8),alStack_40[0],__s,0,0);
      (*(code *)**(undefined8 **)(*(long *)(*plVar9 + 0xc0) + 0xd0))(param_1);
      if (*(long *)(param_1 + 0x28) != 0) {
        (*(code *)**(undefined8 **)(*(long *)(*plVar9 + 0xc0) + 0xb8))();
        goto LAB_052946f0;
      }
    }
LAB_05294738:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
LAB_052946f0:
  if (*(long *)(alStack_40[2] + 0x28) == lStack_8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


