/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Tweak<bool>$$get_Tween
ENTRY_POINT: 0772f67c
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0772fd40) */
/* WARNING: Removing unreachable block (ram,0x0772fd54) */

undefined8 Meta_XR_ImmersiveDebugger_Manager_Tweak<bool>__get_Tween(void)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  long *plVar6;
  void *__src;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  long lVar12;
  long unaff_x27;
  int iVar13;
  long unaff_x29;
  
  memset(unaff_x23,0,unaff_x22);
  *(undefined8 *)(unaff_x29 + -0x10) = 0;
  *(undefined1 *)(unaff_x29 + -0x14) = 0;
  if (unaff_x19 == (long *)0x0) {
    thunk_FUN_049ae08c(PTR_DAT_0ac0ac50);
    uVar4 = thunk_FUN_04983f60();
    uVar8 = thunk_FUN_049ae08c(PTR_DAT_0ac3fc80);
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
      System_RuntimeType__get_Assembly(uVar4,uVar8,0);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar4);
    }
    goto LAB_0772fe6c;
  }
  memset(unaff_x23,0,unaff_x22);
  puVar3 = (undefined8 *)thunk_FUN_049a5d94();
  uVar4 = *puVar3;
  *(undefined1 *)(unaff_x29 + -0x14) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
  *(undefined8 *)(unaff_x29 + -0x10) = uVar4;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x10;
  *(long *)(unaff_x29 + -0x38) = unaff_x27;
  FUN_08de98fc(uVar4,unaff_x29 + -0x14,0);
  (**(code **)**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0))();
  pcVar5 = (char *)thunk_FUN_049a5d94();
  if (*pcVar5 == '\0') {
    puVar3 = (undefined8 *)thunk_FUN_049a5d94();
    plVar6 = (long *)*puVar3;
    lVar12 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_04980b34();
    }
    if (plVar6 == (long *)0x0) {
LAB_0772f81c:
      puVar3 = (undefined8 *)thunk_FUN_049a5d94();
      plVar6 = (long *)*puVar3;
      lVar12 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_04980b34();
      }
      if (plVar6 != (long *)0x0) {
        if ((*(byte *)(lVar12 + 0x130) <= *(byte *)(*plVar6 + 0x130)) &&
           (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) ==
            lVar12)) {
          FUN_0434fc78();
          goto LAB_0772f9ac;
        }
      }
      lVar12 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_04980b34();
      }
      plVar7 = (long *)FUN_04947fd0(lVar12,2);
      if (plVar7 == (long *)0x0) {
        if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        goto LAB_0772fe6c;
      }
      if ((plVar6 != (long *)0x0) &&
         (lVar12 = thunk_FUN_04983e64(plVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar12 == 0)) {
        uVar4 = thunk_FUN_04991a58();
        if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_04948050(uVar4,0);
        }
        goto LAB_0772fe6c;
      }
      if ((int)plVar7[3] == 0) {
        if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        goto LAB_0772fe6c;
      }
      plVar7[4] = (long)plVar6;
      thunk_FUN_049ee3d8(plVar7 + 4,plVar6);
      lVar12 = thunk_FUN_04983e64();
      if (lVar12 == 0) {
        uVar4 = thunk_FUN_04991a58();
        if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_04948050(uVar4,0);
        }
        goto LAB_0772fe6c;
      }
      if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) {
        if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        goto LAB_0772fe6c;
      }
      plVar7[5] = (long)unaff_x19;
      thunk_FUN_049ee3d8();
      if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x135) & 1)
          == 0) {
        FUN_04980b34();
      }
      uVar4 = thunk_FUN_04983f60();
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x68))
                (uVar4,plVar7);
      if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48) + 0x135) & 1)
          == 0) {
        FUN_04980b34();
      }
      uVar8 = thunk_FUN_04983f60();
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78))
                (uVar8,uVar4);
      FUN_0434fc78();
    }
    else {
      if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) != lVar12)
         ) goto LAB_0772f81c;
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50))(plVar6);
      FUN_0434fc78();
    }
LAB_0772f9ac:
    if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80) + 0x135) & 1)
        == 0) {
      FUN_04980b34();
    }
    uVar4 = thunk_FUN_04983f60();
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x88))();
    bVar2 = false;
    lVar12 = 0;
    iVar13 = 9;
  }
  else {
    plVar6 = (long *)thunk_FUN_049a5d94();
    lVar12 = *plVar6;
    __src = (void *)thunk_FUN_049a5d94();
    memcpy(unaff_x21,__src,unaff_x22);
    memcpy(unaff_x23,__src,unaff_x22);
    pcVar5 = (char *)thunk_FUN_049a5d94();
    uVar4 = 0;
    iVar13 = 10;
    bVar2 = *pcVar5 != '\0';
  }
  if (*(char *)(unaff_x29 + -0x14) != '\0') {
    thunk_FUN_0495413c(**(undefined8 **)(unaff_x29 + -0x20),0);
  }
  puVar1 = PTR_DAT_0ac44de8;
  if ((iVar13 == 10) || (iVar13 == 0)) {
    if (lVar12 == 0) {
      if (bVar2) {
        memcpy(unaff_x21,unaff_x23,unaff_x22);
        lVar9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
        lVar12 = *(long *)(lVar9 + 0x18);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_04980b34(lVar12);
          lVar9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
        }
        if (-1 < *(int *)(*(long *)(lVar9 + 0x10) + 0x28)) {
          unaff_x21 = (undefined8 *)*unaff_x21;
        }
        lVar9 = *unaff_x19;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar12) {
              lVar12 = lVar9 + (long)*piVar11 * 0x10 + 0x138;
              goto LAB_0772fbe4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        lVar12 = FUN_04980e68();
LAB_0772fbe4:
        lVar12 = *(long *)(lVar12 + 8);
        *(undefined8 **)(unaff_x29 + -0x30) = unaff_x21;
        (**(code **)(lVar12 + 0x10))(*(undefined8 *)(lVar12 + 8));
        lVar12 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_04980b34(lVar12);
        }
        lVar9 = *unaff_x19;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar12) goto LAB_0772fc60;
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
      }
      else {
        lVar12 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_04980b34(lVar12);
        }
        lVar9 = *unaff_x19;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar12) goto LAB_0772fc60;
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
      }
      puVar3 = (undefined8 *)FUN_04980e68();
      goto LAB_0772fc70;
    }
    lVar12 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_04980b34(lVar12);
    }
    lVar9 = *unaff_x19;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar12) {
          puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_0772fb30;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68();
LAB_0772fb30:
    (*(code *)*puVar3)();
    goto LAB_0772fc7c;
  }
  goto LAB_0772fc98;
LAB_0772fc60:
  puVar3 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
LAB_0772fc70:
  (*(code *)*puVar3)();
LAB_0772fc7c:
  lVar12 = *(long *)puVar1;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar12 = *(long *)puVar1;
  }
  uVar4 = **(undefined8 **)(lVar12 + 0xb8);
LAB_0772fc98:
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar4;
  }
LAB_0772fe6c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


