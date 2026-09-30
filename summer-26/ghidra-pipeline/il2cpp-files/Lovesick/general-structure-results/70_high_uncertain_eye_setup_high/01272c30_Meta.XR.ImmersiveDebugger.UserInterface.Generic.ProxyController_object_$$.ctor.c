/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ProxyController<object>$$.ctor
ENTRY_POINT: 01272c30
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyController<object>___ctor(void)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long unaff_x19;
  size_t __n;
  long *unaff_x20;
  int iVar11;
  long lVar12;
  void *__dest;
  undefined8 *unaff_x23;
  long lVar13;
  undefined8 *unaff_x25;
  long *plVar14;
  undefined8 *puVar15;
  long unaff_x29;
  
code_r0x01272c30:
  iVar11 = 0xb;
LAB_01272f20:
  if (*(char *)(unaff_x29 + -0xdc) != '\0') {
    thunk_FUN_00d56f10(*(undefined8 *)(unaff_x29 + -0x100),0);
  }
  if (unaff_x19 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00dbe778(unaff_x19);
  }
  if (iVar11 != 2) {
    if ((iVar11 == 0xb) || (iVar11 == 0)) {
      memset(*(void **)(unaff_x29 + -0x118),0,*(size_t *)(unaff_x29 + -0x108));
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(unaff_x29 + -0x11c);
    }
    if (*(long *)(*(long *)(unaff_x29 + -0x138) + 0x28) == *(long *)(unaff_x29 + -0x60)) {
      return uVar9 & 1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar13 = *(long *)(*(long *)(unaff_x29 + -0xf0) + 0x10);
  thunk_FUN_00d8e500();
  if (((lVar13 != 0) && (lVar10 = *(long *)(lVar13 + 0x10), lVar10 != 0)) &&
     (lVar12 = *(long *)(lVar13 + 0x18), lVar12 != 0)) {
    lVar1 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
      lVar1 = FUN_00d5941c();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = *(undefined8 *)(lVar12 + 0x18);
    puVar5 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0xf0);
    uVar2 = *puVar5;
    *(int *)(unaff_x29 + -0x90) = (int)*(undefined8 *)(lVar10 + 0x18);
    *(undefined4 *)(unaff_x29 + -0x8c) = *(undefined4 *)(unaff_x29 + -0xe0);
    *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0x8c;
    *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xd8;
    *(long *)(unaff_x29 + -0xb8) = unaff_x29 + -0xd4;
    *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x94;
    *(int *)(unaff_x29 + -0x94) = (int)uVar7;
    *(long *)(unaff_x29 + -0xa8) = unaff_x29 + -0x90;
    (*(code *)puVar5[2])(uVar2,puVar5,0,unaff_x29 + -0xc0,unaff_x29 + -0x94);
    lVar10 = *(long *)(lVar13 + 0x18);
    if (lVar10 != 0) {
      if (*(uint *)(lVar10 + 0x18) <= *(uint *)(unaff_x29 + -0xd8)) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar2 = *(undefined8 *)(lVar10 + (long)(int)*(uint *)(unaff_x29 + -0xd8) * 8 + 0x20);
      *(undefined1 *)(unaff_x29 + -0xdc) = 0;
      *(undefined8 *)(unaff_x29 + -0x100) = uVar2;
      FUN_017d75a8(uVar2,unaff_x29 + -0xdc,0);
      lVar10 = *(long *)(*(long *)(unaff_x29 + -0xf0) + 0x10);
      thunk_FUN_00d8e500();
      if (lVar13 == lVar10) {
        lVar10 = *(long *)(lVar13 + 0x10);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(lVar10 + 0x18) <= *(uint *)(unaff_x29 + -0xd4)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar10 = *(long *)(lVar10 + (long)(int)*(uint *)(unaff_x29 + -0xd4) * 8 + 0x20);
        lVar12 = 0;
        do {
          lVar1 = lVar10;
          unaff_x19 = 0;
          if (lVar1 == 0) goto code_r0x01272c30;
          lVar10 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0xf8);
          if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
            lVar10 = FUN_00d5941c();
          }
          piVar3 = (int *)thunk_FUN_00d32ed4(lVar1,*(long *)(lVar10 + 0x80) + 0x60);
          if (*(int *)(unaff_x29 + -0xe0) == *piVar3) {
            plVar14 = *(long **)(*(long *)(unaff_x29 + -0xf0) + 0x18);
            lVar10 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0xf8);
            if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
              lVar10 = FUN_00d5941c();
            }
            pvVar4 = (void *)thunk_FUN_00d32ed4(lVar1,*(undefined8 *)(lVar10 + 0x80));
            memcpy(unaff_x25,pvVar4,*(size_t *)(unaff_x29 + -0xe8));
            lVar10 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x60);
            if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
              lVar10 = FUN_00d5941c();
            }
            pvVar4 = *(void **)(unaff_x29 + -0xf8);
            if (-1 < *(int *)(lVar10 + 0x28)) {
              pvVar4 = (void *)(unaff_x29 + -200);
            }
            memcpy(unaff_x23,pvVar4,*(size_t *)(unaff_x29 + -0xe8));
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar6 = *(long *)(*unaff_x20 + 0xc0);
            lVar10 = *(long *)(lVar6 + 0x20);
            if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
              lVar10 = FUN_00d5941c(lVar10);
              lVar6 = *(long *)(*unaff_x20 + 0xc0);
            }
            lVar6 = *(long *)(lVar6 + 0x60);
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            puVar5 = unaff_x25;
            if (-1 < *(int *)(lVar6 + 0x28)) {
              puVar5 = (undefined8 *)*unaff_x25;
            }
            lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x60);
            if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
              lVar6 = FUN_00d5941c();
            }
            puVar15 = unaff_x23;
            if (-1 < *(int *)(lVar6 + 0x28)) {
              puVar15 = (undefined8 *)*unaff_x23;
            }
            lVar6 = *plVar14;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar8 != 0) {
              piVar3 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar3 + -2) == lVar10) {
                  lVar10 = lVar6 + (long)*piVar3 * 0x10 + 0x138;
                  goto LAB_01272bd4;
                }
                uVar8 = uVar8 - 1;
                piVar3 = piVar3 + 4;
              } while (uVar8 != 0);
            }
            lVar10 = FUN_00d59724(plVar14,lVar10,0);
LAB_01272bd4:
            *(undefined8 **)(unaff_x29 + -0x88) = puVar5;
            *(undefined8 **)(unaff_x29 + -0x80) = puVar15;
            lVar10 = *(long *)(lVar10 + 8);
            (**(code **)(lVar10 + 0x10))
                      (*(undefined8 *)(lVar10 + 8),lVar10,plVar14,unaff_x29 + -0x88,
                       unaff_x29 + -0x74);
            if (*(char *)(unaff_x29 + -0x74) != '\0')
            goto 
            Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<object,_object>__get_Dirty;
          }
          lVar10 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0xf8);
          if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
            lVar10 = FUN_00d5941c();
          }
          plVar14 = (long *)thunk_FUN_00d32ed4(lVar1,*(long *)(lVar10 + 0x80) + 0x40);
          lVar10 = *plVar14;
          thunk_FUN_00d8e500();
          lVar12 = lVar1;
        } while( true );
      }
      unaff_x19 = 0;
      iVar11 = 2;
      goto LAB_01272f20;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<object,_object>__get_Dirty:
  if ((*(uint *)(unaff_x29 + -0x120) & 1) != 0) {
    puVar5 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0x108);
    (*(code *)puVar5[2])(*puVar5,puVar5,0,0,unaff_x29 + -0x70);
    lVar6 = *unaff_x20;
    plVar14 = *(long **)(unaff_x29 + -0x70);
    lVar10 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x88);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
      lVar6 = *unaff_x20;
    }
    pvVar4 = *(void **)(unaff_x29 + -0x130);
    if (-1 < *(int *)(lVar10 + 0x28)) {
      pvVar4 = (void *)(unaff_x29 + -0xd0);
    }
    memcpy(*(void **)(unaff_x29 + -0x110),pvVar4,*(size_t *)(unaff_x29 + -0x108));
    lVar10 = *(long *)(*(long *)(lVar6 + 0xc0) + 0xf8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    pvVar4 = (void *)thunk_FUN_00d32ed4(lVar1,*(long *)(lVar10 + 0x80) + 0x20);
    memcpy(*(void **)(unaff_x29 + -0x128),pvVar4,*(size_t *)(unaff_x29 + -0x108));
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar10 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x88);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    puVar5 = *(undefined8 **)(unaff_x29 + -0x110);
    if (-1 < *(int *)(lVar10 + 0x28)) {
      puVar5 = (undefined8 *)*puVar5;
    }
    lVar10 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x88);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    puVar15 = *(undefined8 **)(unaff_x29 + -0x128);
    if (-1 < *(int *)(lVar10 + 0x28)) {
      puVar15 = (undefined8 *)*puVar15;
    }
    lVar10 = *plVar14;
    *(undefined8 **)(unaff_x29 + -0x88) = puVar5;
    *(undefined8 **)(unaff_x29 + -0x80) = puVar15;
    lVar10 = *(long *)(lVar10 + 0x1c0);
    (**(code **)(lVar10 + 0x10))
              (*(undefined8 *)(lVar10 + 8),lVar10,plVar14,unaff_x29 + -0x88,unaff_x29 + -100);
    if (*(char *)(unaff_x29 + -100) == '\0') {
      memset(*(void **)(unaff_x29 + -0x118),0,*(size_t *)(unaff_x29 + -0x108));
      *(undefined4 *)(unaff_x29 + -0x11c) = 0;
      goto LAB_01272f1c;
    }
  }
  if (lVar12 == 0) {
    lVar10 = *(long *)(lVar13 + 0x10);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar9 = *(uint *)(unaff_x29 + -0xd4);
    lVar12 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0xf8);
    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
      lVar12 = FUN_00d5941c();
    }
    puVar5 = (undefined8 *)thunk_FUN_00d32ed4(lVar1,*(long *)(lVar12 + 0x80) + 0x40);
    uVar2 = *puVar5;
    thunk_FUN_00d8e500();
    if (*(uint *)(lVar10 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    puVar5 = *(undefined8 **)(*(long *)(*unaff_x20 + 0xc0) + 0x130);
    uVar7 = *puVar5;
    *(long *)(unaff_x29 + -0x88) = lVar10 + (long)(int)uVar9 * 8 + 0x20;
    *(undefined8 *)(unaff_x29 + -0x80) = uVar2;
    (*(code *)puVar5[2])(uVar7,puVar5,0,unaff_x29 + -0x88,uVar2);
  }
  else {
    lVar10 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0xf8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    puVar5 = (undefined8 *)thunk_FUN_00d32ed4(lVar1,*(long *)(lVar10 + 0x80) + 0x40);
    uVar2 = *puVar5;
    thunk_FUN_00d8e500();
    thunk_FUN_00d8e500();
    lVar10 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0xf8);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      lVar10 = FUN_00d5941c();
    }
    lVar10 = *(long *)(lVar10 + 0x80) + 0x40;
    FUN_00da4f60(lVar10,8);
    puVar5 = (undefined8 *)thunk_FUN_00d32ed4(lVar12,lVar10);
    *puVar5 = uVar2;
  }
  lVar10 = *(long *)(*(long *)(*unaff_x20 + 0xc0) + 0xf8);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    lVar10 = FUN_00d5941c();
  }
  pvVar4 = (void *)thunk_FUN_00d32ed4(lVar1,*(long *)(lVar10 + 0x80) + 0x20);
  __dest = *(void **)(unaff_x29 + -0x110);
  __n = *(size_t *)(unaff_x29 + -0x108);
  memcpy(__dest,pvVar4,__n);
  memcpy(*(void **)(unaff_x29 + -0x118),__dest,__n);
  if ((*(byte *)(*(long *)(*(long *)(*unaff_x20 + 0xc0) + 0x88) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  lVar13 = *(long *)(lVar13 + 0x20);
  thunk_FUN_00d8e500();
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x29 + -0xd8)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x29 + -0xd8) * 4;
  iVar11 = *(int *)(lVar13 + 0x20);
  *(undefined4 *)(unaff_x29 + -0x11c) = 1;
  *(int *)(lVar13 + 0x20) = iVar11 + -1;
LAB_01272f1c:
  unaff_x19 = 0;
  iVar11 = 8;
  goto LAB_01272f20;
}


