/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Tweak<bool>$$set_Tween
ENTRY_POINT: 0772f70c
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

undefined8 Meta_XR_ImmersiveDebugger_Manager_Tweak<bool>__set_Tween(void)

{
  undefined *puVar1;
  bool bVar2;
  char *pcVar3;
  long *plVar4;
  void *__src;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  long lVar11;
  undefined8 uVar12;
  long unaff_x27;
  int iVar13;
  long unaff_x29;
  
  pcVar3 = (char *)thunk_FUN_049a5d94();
  if (*pcVar3 == '\0') {
    puVar7 = (undefined8 *)thunk_FUN_049a5d94();
    plVar4 = (long *)*puVar7;
    lVar11 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_04980b34();
    }
    if (plVar4 == (long *)0x0) {
LAB_0772f81c:
      puVar7 = (undefined8 *)thunk_FUN_049a5d94();
      plVar4 = (long *)*puVar7;
      lVar11 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_04980b34();
      }
      if (plVar4 != (long *)0x0) {
        if ((*(byte *)(lVar11 + 0x130) <= *(byte *)(*plVar4 + 0x130)) &&
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) ==
            lVar11)) {
          FUN_0434fc78();
          goto LAB_0772f9ac;
        }
      }
      lVar11 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x58);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_04980b34();
      }
      plVar5 = (long *)FUN_04947fd0(lVar11,2);
      if (plVar5 == (long *)0x0) {
        if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        goto LAB_0772fe6c;
      }
      if ((plVar4 != (long *)0x0) &&
         (lVar11 = thunk_FUN_04983e64(plVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar11 == 0)) {
        uVar12 = thunk_FUN_04991a58();
        if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_04948050(uVar12,0);
        }
        goto LAB_0772fe6c;
      }
      if ((int)plVar5[3] == 0) {
        if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        goto LAB_0772fe6c;
      }
      plVar5[4] = (long)plVar4;
      thunk_FUN_049ee3d8(plVar5 + 4,plVar4);
      lVar11 = thunk_FUN_04983e64();
      if (lVar11 == 0) {
        uVar12 = thunk_FUN_04991a58();
        if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_04948050(uVar12,0);
        }
        goto LAB_0772fe6c;
      }
      if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) {
        if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        goto LAB_0772fe6c;
      }
      plVar5[5] = (long)unaff_x19;
      thunk_FUN_049ee3d8();
      if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x135) & 1)
          == 0) {
        FUN_04980b34();
      }
      uVar12 = thunk_FUN_04983f60();
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x68))
                (uVar12,plVar5);
      if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48) + 0x135) & 1)
          == 0) {
        FUN_04980b34();
      }
      uVar6 = thunk_FUN_04983f60();
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78))
                (uVar6,uVar12);
      FUN_0434fc78();
    }
    else {
      if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11)
         ) goto LAB_0772f81c;
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50))(plVar4);
      FUN_0434fc78();
    }
LAB_0772f9ac:
    if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80) + 0x135) & 1)
        == 0) {
      FUN_04980b34();
    }
    uVar12 = thunk_FUN_04983f60();
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x88))();
    bVar2 = false;
    lVar11 = 0;
    iVar13 = 9;
  }
  else {
    plVar4 = (long *)thunk_FUN_049a5d94();
    lVar11 = *plVar4;
    __src = (void *)thunk_FUN_049a5d94();
    memcpy(unaff_x21,__src,unaff_x22);
    memcpy(unaff_x23,__src,unaff_x22);
    pcVar3 = (char *)thunk_FUN_049a5d94();
    uVar12 = 0;
    iVar13 = 10;
    bVar2 = *pcVar3 != '\0';
  }
  if (*(char *)(unaff_x29 + -0x14) != '\0') {
    thunk_FUN_0495413c(**(undefined8 **)(unaff_x29 + -0x20),0);
  }
  puVar1 = PTR_DAT_0ac44de8;
  if ((iVar13 == 10) || (iVar13 == 0)) {
    if (lVar11 == 0) {
      if (bVar2) {
        memcpy(unaff_x21,unaff_x23,unaff_x22);
        lVar8 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
        lVar11 = *(long *)(lVar8 + 0x18);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_04980b34(lVar11);
          lVar8 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
        }
        if (-1 < *(int *)(*(long *)(lVar8 + 0x10) + 0x28)) {
          unaff_x21 = (undefined8 *)*unaff_x21;
        }
        lVar8 = *unaff_x19;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar11) {
              lVar11 = lVar8 + (long)*piVar10 * 0x10 + 0x138;
              goto LAB_0772fbe4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        lVar11 = FUN_04980e68();
LAB_0772fbe4:
        lVar11 = *(long *)(lVar11 + 8);
        *(undefined8 **)(unaff_x29 + -0x30) = unaff_x21;
        (**(code **)(lVar11 + 0x10))(*(undefined8 *)(lVar11 + 8));
        lVar11 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_04980b34(lVar11);
        }
        lVar8 = *unaff_x19;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar11) goto LAB_0772fc60;
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
      }
      else {
        lVar11 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
        if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_04980b34(lVar11);
        }
        lVar8 = *unaff_x19;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar11) goto LAB_0772fc60;
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
      }
      puVar7 = (undefined8 *)FUN_04980e68();
      goto LAB_0772fc70;
    }
    lVar11 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_04980b34(lVar11);
    }
    lVar8 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar11) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_0772fb30;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68();
LAB_0772fb30:
    (*(code *)*puVar7)();
    goto LAB_0772fc7c;
  }
  goto LAB_0772fc98;
LAB_0772fc60:
  puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
LAB_0772fc70:
  (*(code *)*puVar7)();
LAB_0772fc7c:
  lVar11 = *(long *)puVar1;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar11 = *(long *)puVar1;
  }
  uVar12 = **(undefined8 **)(lVar11 + 0xb8);
LAB_0772fc98:
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar12;
  }
LAB_0772fe6c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


