/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.CircularPool<object>$$.ctor
ENTRY_POINT: 081a7c4c
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_CircularPool<object>___ctor
               (undefined8 param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *__src;
  ulong __n;
  code *pcVar12;
  void *__s;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lStack_40;
  undefined4 uStack_38;
  long *plStack_30;
  ulong uStack_28;
  long *plStack_20;
  ulong uStack_18;
  long lStack_8;
  
  lVar2 = tpidr_el0;
  lStack_8 = *(long *)(lVar2 + 0x28);
  if ((DAT_0b329d04 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac09878);
    DAT_0b329d04 = 1;
  }
  lVar13 = *(long *)(param_2 + 0x20);
  uVar1 = *(ushort *)(lVar13 + 0x135);
  lVar5 = lVar13;
  if ((uVar1 & 1) == 0) {
    lVar13 = FUN_04980b34(lVar13);
    uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
    lVar5 = *(long *)(param_2 + 0x20);
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x38) + 0xfc);
  uVar11 = __n + 0xf & 0x1fffffff0;
  __src = (long *)((long)&lStack_40 - uVar11);
  __s = (void *)((long)__src - uVar11);
  memset(__s,0,__n);
  plStack_30 = (long *)0x0;
  uStack_28 = 0;
  uStack_38 = 0;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_04980b34(lVar5);
  }
  piVar6 = (int *)thunk_FUN_049a5d94(param_1,*(undefined8 *)(**(long **)(lVar5 + 0xc0) + 0x80));
  puVar3 = PTR_DAT_0ac09878;
  if (*piVar6 == 0) {
    lVar5 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34();
    }
    puVar7 = (undefined8 *)
             thunk_FUN_049a5d94(param_1,*(long *)(**(long **)(lVar5 + 0xc0) + 0x80) + 0x80);
    lVar5 = *(long *)(param_2 + 0x20);
    uStack_28 = puVar7[1];
    plStack_30 = (long *)*puVar7;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34();
    }
    puVar7 = (undefined8 *)
             thunk_FUN_049a5d94(param_1,*(long *)(**(long **)(lVar5 + 0xc0) + 0x80) + 0x80);
    *puVar7 = 0;
    puVar7[1] = 0;
    lVar5 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34();
    }
    FUN_04351880(param_1,*(undefined8 *)(**(long **)(lVar5 + 0xc0) + 0x80),0xffffffff);
LAB_081a7ef4:
    if (DAT_0b31f1c9 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac098c0);
      DAT_0b31f1c9 = '\x01';
    }
    plVar8 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      lVar5 = *plStack_30;
      uVar14 = uStack_28 & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar11 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac098c0) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_081a7f78;
          }
          uVar11 = uVar11 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_04980e68(plStack_30,*(long *)PTR_DAT_0ac098c0,2);
LAB_081a7f78:
      (*(code *)*puVar7)(plVar8,uVar14,puVar7[1]);
    }
    lVar5 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34();
    }
    plVar8 = (long *)thunk_FUN_049a5d94(param_1,*(long *)(**(long **)(lVar5 + 0xc0) + 0x80) + 0x60);
    lVar5 = *plVar8;
    if (lVar5 == 0) {
      if (*(long *)(lVar2 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      goto LAB_081a83fc;
    }
    lVar9 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar9 + 0x135);
    lVar13 = lVar9;
    if ((uVar1 & 1) == 0) {
      lVar13 = FUN_04980b34();
      lVar9 = *(long *)(param_2 + 0x20);
      uVar1 = *(ushort *)(lVar9 + 0x135);
    }
    uVar15 = **(undefined8 **)(*(long *)(lVar13 + 0xc0) + 0x30);
    if ((uVar1 & 1) == 0) {
      lVar9 = FUN_04980b34();
    }
    lVar13 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x30);
    plStack_20 = __src;
    (**(code **)(lVar13 + 0x10))(uVar15,lVar13,lVar5,&plStack_20,__src);
    memcpy(__s,__src,__n);
    lVar5 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34();
    }
    FUN_04351880(param_1,*(undefined8 *)(**(long **)(lVar5 + 0xc0) + 0x80),0xfffffffe);
    memcpy(__src,__s,__n);
    lVar13 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar13 + 0x135);
    lVar5 = lVar13;
    if ((uVar1 & 1) == 0) {
      lVar13 = FUN_04980b34(lVar13);
      uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
      lVar5 = *(long *)(param_2 + 0x20);
    }
    uVar15 = **(undefined8 **)(*(long *)(lVar13 + 0xc0) + 0x48);
    lVar13 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_04980b34(lVar5);
      uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
      lVar13 = *(long *)(param_2 + 0x20);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x48);
    if ((uVar1 & 1) == 0) {
      lVar13 = FUN_04980b34(lVar13);
    }
    uVar10 = thunk_FUN_049a5d94(param_1,*(long *)(**(long **)(lVar13 + 0xc0) + 0x80) + 0x20);
    lVar13 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = FUN_04980b34(lVar13);
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x38) + 0x28)) {
      __src = (long *)*__src;
    }
    plStack_20 = __src;
    (**(code **)(lVar5 + 0x10))(uVar15,lVar5,uVar10,&plStack_20,__src);
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_0ac09878 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    lVar5 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34();
    }
    puVar7 = (undefined8 *)
             thunk_FUN_049a5d94(param_1,*(long *)(**(long **)(lVar5 + 0xc0) + 0x80) + 0x40);
    uStack_18 = puVar7[1];
    plStack_20 = (long *)*puVar7;
    thunk_FUN_049ee3d8(&plStack_20,0);
    uVar11 = uStack_18;
    plVar8 = plStack_20;
    plStack_30 = plStack_20;
    uStack_28 = uStack_18;
    if (DAT_0b31f1c7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac09878);
      DAT_0b31f1c7 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b31f1c8 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac098c0);
      DAT_0b31f1c8 = '\x01';
      if (plVar8 != (long *)0x0)
      goto Meta_XR_MRUtilityKit_SceneDecorator_CircularPool<object>__Release;
      goto LAB_081a7ef4;
    }
    if (plVar8 == (long *)0x0) goto LAB_081a7ef4;
Meta_XR_MRUtilityKit_SceneDecorator_CircularPool<object>__Release:
    lVar5 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar14 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac098c0) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_081a7ee0;
        }
        uVar14 = uVar14 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac098c0,0);
LAB_081a7ee0:
    iVar4 = (*(code *)*puVar7)(plVar8,uVar11 & 0xffffffff,puVar7[1]);
    if (iVar4 != 0) goto LAB_081a7ef4;
    lVar5 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34();
    }
    FUN_04351880(param_1,*(undefined8 *)(**(long **)(lVar5 + 0xc0) + 0x80),0);
    lVar5 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34();
    }
    FUN_04360b38(param_1,*(long *)(**(long **)(lVar5 + 0xc0) + 0x80) + 0x80,plVar8,uVar11);
    lVar13 = *(long *)(param_2 + 0x20);
    uVar1 = *(ushort *)(lVar13 + 0x135);
    lVar5 = lVar13;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_04980b34();
      lVar13 = *(long *)(param_2 + 0x20);
      uVar1 = *(ushort *)(lVar13 + 0x135);
    }
    pcVar12 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((uVar1 & 1) == 0) {
      lVar13 = FUN_04980b34();
    }
    uVar15 = thunk_FUN_049a5d94(param_1,*(long *)(**(long **)(lVar13 + 0xc0) + 0x80) + 0x20);
    lVar5 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34();
    }
    (*pcVar12)(uVar15,&plStack_30,param_1,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10));
  }
  if (*(long *)(lVar2 + 0x28) == lStack_8) {
    return;
  }
LAB_081a83fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


