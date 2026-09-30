/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ProxyFlex<object,-object>$$.ctor
ENTRY_POINT: 01272d28
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01273090) */

uint Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<object,_object>___ctor(long param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x19;
  size_t __n;
  long *unaff_x20;
  int iVar9;
  long lVar10;
  long unaff_x21;
  void *__dest;
  long unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *plVar11;
  long *unaff_x26;
  undefined8 uVar12;
  undefined8 *puVar13;
  long unaff_x29;
  
code_r0x01272d28:
  lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0x88);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c();
  }
  puVar8 = *(undefined8 **)(unaff_x29 + -0x128);
  if (-1 < *(int *)(lVar3 + 0x28)) {
    puVar8 = (undefined8 *)*puVar8;
  }
  lVar3 = *unaff_x26;
  *(undefined8 **)(unaff_x29 + -0x88) = unaff_x19;
  *(undefined8 **)(unaff_x29 + -0x80) = puVar8;
  lVar3 = *(long *)(lVar3 + 0x1c0);
  (**(code **)(lVar3 + 0x10))
            (*(undefined8 *)(lVar3 + 8),lVar3,unaff_x26,unaff_x29 + -0x88,unaff_x29 + -100);
  if (*(char *)(unaff_x29 + -100) == '\0') {
    memset(*(void **)(unaff_x29 + -0x118),0,*(size_t *)(unaff_x29 + -0x108));
    *(undefined4 *)(unaff_x29 + -0x11c) = 0;
    goto LAB_01272f1c;
  }
LAB_01272d7c:
  if (unaff_x21 == 0) {
    lVar3 = *(long *)(unaff_x24 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar7 = *(uint *)(unaff_x29 + -0xd4);
    lVar10 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0xf8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    puVar8 = (undefined8 *)thunk_FUN_00d32ed4(unaff_x22,*(long *)(lVar10 + 0x80) + 0x40);
    uVar12 = *puVar8;
    thunk_FUN_00d8e500();
    if (*(uint *)(lVar3 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    puVar8 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0x130);
    uVar5 = *puVar8;
    *(long *)(unaff_x29 + -0x88) = lVar3 + (long)(int)uVar7 * 8 + 0x20;
    *(undefined8 *)(unaff_x29 + -0x80) = uVar12;
    (*(code *)puVar8[2])(uVar5,puVar8,0,unaff_x29 + -0x88,uVar12);
  }
  else {
    lVar3 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0xf8);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    puVar8 = (undefined8 *)thunk_FUN_00d32ed4(unaff_x22,*(long *)(lVar3 + 0x80) + 0x40);
    uVar12 = *puVar8;
    thunk_FUN_00d8e500();
    thunk_FUN_00d8e500();
    lVar3 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0xf8);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    lVar3 = *(long *)(lVar3 + 0x80) + 0x40;
    FUN_00da4f60(lVar3,8);
    puVar8 = (undefined8 *)thunk_FUN_00d32ed4(unaff_x21,lVar3);
    *puVar8 = uVar12;
  }
  lVar3 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0xf8);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c();
  }
  pvVar4 = (void *)thunk_FUN_00d32ed4(unaff_x22,*(long *)(lVar3 + 0x80) + 0x20);
  __dest = *(void **)(unaff_x29 + -0x110);
  __n = *(size_t *)(unaff_x29 + -0x108);
  memcpy(__dest,pvVar4,__n);
  memcpy(*(void **)(unaff_x29 + -0x118),__dest,__n);
  if ((*(byte *)(*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x88) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  lVar3 = *(long *)(unaff_x24 + 0x20);
  thunk_FUN_00d8e500();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(uint *)(lVar3 + 0x18) <= *(uint *)(unaff_x29 + -0xd8)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  lVar3 = lVar3 + (long)(int)*(uint *)(unaff_x29 + -0xd8) * 4;
  iVar9 = *(int *)(lVar3 + 0x20);
  *(undefined4 *)(unaff_x29 + -0x11c) = 1;
  *(int *)(lVar3 + 0x20) = iVar9 + -1;
LAB_01272f1c:
  iVar9 = 8;
  while( true ) {
    if (*(char *)(unaff_x29 + -0xdc) != '\0') {
      thunk_FUN_00d56f10(*(undefined8 *)(unaff_x29 + -0x100),0);
    }
    if (iVar9 != 2) {
      if ((iVar9 == 0xb) || (iVar9 == 0)) {
        memset(*(void **)(unaff_x29 + -0x118),0,*(size_t *)(unaff_x29 + -0x108));
        uVar7 = 0;
      }
      else {
        uVar7 = *(uint *)(unaff_x29 + -0x11c);
      }
      if (*(long *)(*(long *)(unaff_x29 + -0x138) + 0x28) != *(long *)(unaff_x29 + -0x60)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar7 & 1;
    }
    unaff_x24 = *(long *)(*(long *)(unaff_x29 + -0xf0) + 0x10);
    thunk_FUN_00d8e500();
    if (((unaff_x24 == 0) || (lVar3 = *(long *)(unaff_x24 + 0x10), lVar3 == 0)) ||
       (lVar10 = *(long *)(unaff_x24 + 0x18), lVar10 == 0)) break;
    lVar1 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
      lVar1 = FUN_00d5941c();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = *(undefined8 *)(lVar10 + 0x18);
    puVar8 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0xf0);
    uVar12 = *puVar8;
    *(int *)(unaff_x29 + -0x90) = (int)*(undefined8 *)(lVar3 + 0x18);
    *(undefined4 *)(unaff_x29 + -0x8c) = *(undefined4 *)(unaff_x29 + -0xe0);
    *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0x8c;
    *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xd8;
    *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xd4;
    *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x94;
    *(int *)(unaff_x29 + -0x94) = (int)uVar5;
    *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0x90;
    (*(code *)puVar8[2])(uVar12,puVar8,0,unaff_x29 + -0xc0,unaff_x29 + -0x94);
    lVar3 = *(long *)(unaff_x24 + 0x18);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= *(uint *)(unaff_x29 + -0xd8)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    uVar12 = *(undefined8 *)(lVar3 + (long)(int)*(uint *)(unaff_x29 + -0xd8) * 8 + 0x20);
    *(undefined1 *)(unaff_x29 + -0xdc) = 0;
    *(undefined8 *)(unaff_x29 + -0x100) = uVar12;
    FUN_017d75a8(uVar12,unaff_x29 + -0xdc,0);
    lVar3 = *(long *)(*(long *)(unaff_x29 + -0xf0) + 0x10);
    thunk_FUN_00d8e500();
    if (unaff_x24 == lVar3) {
      lVar3 = *(long *)(unaff_x24 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar3 + 0x18) <= *(uint *)(unaff_x29 + -0xd4)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar3 = *(long *)(lVar3 + (long)(int)*(uint *)(unaff_x29 + -0xd4) * 8 + 0x20);
      unaff_x21 = 0;
      while (unaff_x22 = lVar3, unaff_x22 != 0) {
        lVar3 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0xf8);
        if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
          lVar3 = FUN_00d5941c();
        }
        piVar2 = (int *)thunk_FUN_00d32ed4(unaff_x22,*(long *)(lVar3 + 0x80) + 0x60);
        if (*(int *)(unaff_x29 + -0xe0) == *piVar2) {
          plVar11 = *(long **)(*(long *)(unaff_x29 + -0xf0) + 0x18);
          lVar3 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0xf8);
          if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
            lVar3 = FUN_00d5941c();
          }
          pvVar4 = (void *)thunk_FUN_00d32ed4(unaff_x22,*(undefined8 *)(lVar3 + 0x80));
          memcpy(unaff_x25,pvVar4,*(size_t *)(unaff_x29 + -0xe8));
          lVar3 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x60);
          if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
            lVar3 = FUN_00d5941c();
          }
          pvVar4 = *(void **)(unaff_x29 + -0xf8);
          if (-1 < *(int *)(lVar3 + 0x28)) {
            pvVar4 = (void *)(unaff_x29 + -200);
          }
          memcpy(unaff_x23,pvVar4,*(size_t *)(unaff_x29 + -0xe8));
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar10 = *(long *)(*unaff_x20 + 0xc0);
          lVar3 = *(long *)(lVar10 + 0x20);
          if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
            lVar3 = FUN_00d5941c(lVar3);
            lVar10 = *(long *)(*unaff_x20 + 0xc0);
          }
          lVar10 = *(long *)(lVar10 + 0x60);
          if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
            lVar10 = FUN_00d5941c();
          }
          puVar8 = unaff_x25;
          if (-1 < *(int *)(lVar10 + 0x28)) {
            puVar8 = (undefined8 *)*unaff_x25;
          }
          lVar10 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x60);
          if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
            lVar10 = FUN_00d5941c();
          }
          puVar13 = unaff_x23;
          if (-1 < *(int *)(lVar10 + 0x28)) {
            puVar13 = (undefined8 *)*unaff_x23;
          }
          lVar10 = *plVar11;
          uVar6 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar6 != 0) {
            piVar2 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar2 + -2) == lVar3) {
                lVar3 = lVar10 + (long)*piVar2 * 0x10 + 0x138;
                goto LAB_01272bd4;
              }
              uVar6 = uVar6 - 1;
              piVar2 = piVar2 + 4;
            } while (uVar6 != 0);
          }
          lVar3 = FUN_00d59724(plVar11,lVar3,0);
LAB_01272bd4:
          *(undefined8 **)(unaff_x29 + -0x88) = puVar8;
          *(undefined8 **)(unaff_x29 + -0x80) = puVar13;
          lVar3 = *(long *)(lVar3 + 8);
          (**(code **)(lVar3 + 0x10))
                    (*(undefined8 *)(lVar3 + 8),lVar3,plVar11,unaff_x29 + -0x88,unaff_x29 + -0x74);
          if (*(char *)(unaff_x29 + -0x74) != '\0') {
            if ((*(uint *)(unaff_x29 + -0x120) & 1) == 0) goto LAB_01272d7c;
            puVar8 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0x108);
            (*(code *)puVar8[2])(*puVar8,puVar8,0,0,unaff_x29 + -0x70);
            lVar10 = *unaff_x20;
            unaff_x26 = *(long **)(unaff_x29 + -0x70);
            lVar3 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x88);
            if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
              lVar3 = FUN_00d5941c();
              lVar10 = *unaff_x20;
            }
            pvVar4 = *(void **)(unaff_x29 + -0x130);
            if (-1 < *(int *)(lVar3 + 0x28)) {
              pvVar4 = (void *)(unaff_x29 + -0xd0);
            }
            memcpy(*(void **)(unaff_x29 + -0x110),pvVar4,*(size_t *)(unaff_x29 + -0x108));
            lVar3 = *(long *)(*(long *)(lVar10 + 0xc0) + 0xf8);
            if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
              lVar3 = FUN_00d5941c();
            }
            pvVar4 = (void *)thunk_FUN_00d32ed4(unaff_x22,*(long *)(lVar3 + 0x80) + 0x20);
            memcpy(*(void **)(unaff_x29 + -0x128),pvVar4,*(size_t *)(unaff_x29 + -0x108));
            if (unaff_x26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar3 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x88);
            if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
              lVar3 = FUN_00d5941c();
            }
            unaff_x19 = *(undefined8 **)(unaff_x29 + -0x110);
            if (-1 < *(int *)(lVar3 + 0x28)) {
              unaff_x19 = (undefined8 *)*unaff_x19;
            }
            param_1 = *unaff_x20;
            goto code_r0x01272d28;
          }
        }
        lVar3 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0xf8);
        if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
          lVar3 = FUN_00d5941c();
        }
        plVar11 = (long *)thunk_FUN_00d32ed4(unaff_x22,*(long *)(lVar3 + 0x80) + 0x40);
        lVar3 = *plVar11;
        thunk_FUN_00d8e500();
        unaff_x21 = unaff_x22;
      }
      iVar9 = 0xb;
    }
    else {
      iVar9 = 2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


