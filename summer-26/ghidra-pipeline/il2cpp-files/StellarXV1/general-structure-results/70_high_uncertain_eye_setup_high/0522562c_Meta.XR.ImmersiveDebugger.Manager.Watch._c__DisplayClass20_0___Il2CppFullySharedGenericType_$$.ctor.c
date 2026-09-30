/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 0522562c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<__Il2CppFullySharedGenericType>___ctor
               (void)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  void *__src;
  undefined8 *puVar7;
  size_t sVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  void *pvVar12;
  long unaff_x21;
  void *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  size_t unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x40))();
  lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x58);
  if ((uVar3 & 1) == 0) {
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x50))();
    if ((uVar3 & 1) != 0) {
      uVar11 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 8);
      if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar11 = FUN_0768890c(uVar11,0);
      uVar5 = FUN_0768890c(**(undefined8 **)(unaff_x21 + 0x38),0);
      uVar5 = FUN_0767be1c(uVar5,0);
      uVar3 = FUN_07691f40(uVar11,uVar5,0);
      if ((uVar3 & 1) == 0) goto LAB_05225870;
      pvVar12 = *(void **)(unaff_x29 + -0x40);
      memcpy(unaff_x24,pvVar12,unaff_x25);
      uVar3 = FUN_040777e0(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
joined_r0x05225860:
      if ((uVar3 & 1) == 0)
      goto UnityEngine_UIElements_PopupField_<>c__DisplayClass27_0<object>___ctor;
      memcpy(unaff_x24,pvVar12,unaff_x25);
      uVar11 = thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
      goto LAB_05225cfc;
    }
LAB_05225870:
    lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x68))();
    if ((uVar3 & 1) == 0) {
LAB_05225908:
      lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x78))();
      if ((uVar3 & 1) == 0) {
LAB_05225b64:
        pvVar12 = *(void **)(unaff_x29 + -0x40);
        memcpy(unaff_x24,pvVar12,unaff_x25);
        memcpy(unaff_x26,pvVar12,unaff_x25);
        memcpy(unaff_x27,pvVar12,unaff_x25);
        uVar11 = thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
        lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x30);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_040b1acc(lVar4);
        }
        puVar2 = PTR_DAT_09285980;
        lVar4 = thunk_FUN_040b4e00(uVar11,lVar4);
        if (lVar4 == 0) {
          uVar11 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 8);
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          plVar6 = (long *)FUN_0768890c(uVar11,0);
          lVar4 = FUN_0768890c(**(undefined8 **)(unaff_x21 + 0x38),0);
          if (plVar6 != (long *)0x0) {
            uVar3 = (**(code **)(*plVar6 + 0x2b8))(plVar6,lVar4,*(undefined8 *)(*plVar6 + 0x2c0));
            goto joined_r0x05225860;
          }
          goto LAB_05225db4;
        }
        memcpy(unaff_x24,unaff_x26,unaff_x25);
        uVar11 = thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
        lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x30);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_040b1acc(lVar4);
        }
        uVar11 = thunk_FUN_040b4e00(uVar11,lVar4);
        lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x30);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_040b1acc(lVar4);
        }
        pvVar12 = (void *)FUN_04077718(uVar11,lVar4);
        sVar8 = *(size_t *)(unaff_x29 + -0x50);
        memmove(unaff_x22,pvVar12,sVar8);
        goto LAB_05225d3c;
      }
      *(void **)(unaff_x29 + -0x58) = unaff_x28;
      puVar2 = PTR_DAT_09285980;
      uVar11 = **(undefined8 **)(unaff_x21 + 0x38);
      if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar11 = FUN_0768890c(uVar11,0);
      uVar5 = FUN_0768890c(*(long *)(puVar2 + 0x90) + 0x20,0);
      uVar3 = FUN_07691f40(uVar11,uVar5,0);
      iVar1 = *(int *)(*(long *)(puVar2 + 0xe0) + 0xe4);
      if ((uVar3 & 1) != 0) {
        uVar11 = (*(undefined8 **)(unaff_x21 + 0x38))[1];
        pvVar12 = *(void **)(unaff_x29 + -0x58);
        if (iVar1 == 0) {
          thunk_FUN_040d65a8();
        }
        uVar11 = FUN_0768890c(uVar11,0);
        puVar2 = PTR_DAT_09285980;
        memcpy(unaff_x24,*(void **)(unaff_x29 + -0x40),unaff_x25);
        plVar6 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
        lVar4 = *(long *)(puVar2 + 0x98);
        if (*(int *)(lVar4 + 0xe4) == 0) {
          lVar4 = thunk_FUN_040d65a8();
        }
        if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)(puVar2 + 0x90))) {
          if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0(plVar6);
          }
          goto LAB_05225efc;
        }
        uVar11 = FUN_076ad9f4(uVar11,plVar6,0);
        lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x30);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_040b1acc(lVar4);
        }
        __src = (void *)FUN_04077718(uVar11,lVar4);
        memcpy(pvVar12,__src,*(size_t *)(unaff_x29 + -0x50));
        lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x30);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_040b1acc();
        }
        FUN_04077538(lVar4,pvVar12,__src);
        goto LAB_05225d64;
      }
      uVar11 = **(undefined8 **)(unaff_x21 + 0x38);
      unaff_x28 = *(void **)(unaff_x29 + -0x58);
      if (iVar1 == 0) {
        thunk_FUN_040d65a8();
      }
      uVar11 = FUN_0768890c(uVar11,0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*unaff_x23);
      }
      uVar3 = FUN_08a5a034(uVar11,0);
      if ((uVar3 & 1) == 0) goto LAB_05225b64;
      pvVar12 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x38))
                                  (*(undefined8 *)(unaff_x29 + -0x40));
      sVar8 = *(size_t *)(unaff_x29 + -0x50);
      memcpy(unaff_x22,pvVar12,sVar8);
      memmove(unaff_x28,pvVar12,sVar8);
      goto LAB_05225d40;
    }
    memcpy(unaff_x24,*(void **)(unaff_x29 + -0x40),unaff_x25);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    puVar7 = *(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x70);
    uVar11 = *puVar7;
    puVar9 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x60) + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x24;
    }
    pcVar10 = (code *)puVar7[2];
    *(undefined8 **)(unaff_x29 + -0x20) = puVar9;
    *(void **)(unaff_x29 + -0x18) = unaff_x28;
    (*pcVar10)(uVar11,puVar7,0,unaff_x29 + -0x20,unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_05225908;
LAB_05225d64:
    lVar4 = 1;
  }
  else {
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    puVar2 = PTR_DAT_09285980;
    pvVar12 = *(void **)(unaff_x29 + -0x40);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x50))();
    if ((uVar3 & 1) == 0) {
LAB_052256e8:
      uVar11 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 8);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar11 = FUN_0768890c(uVar11,0);
      plVar6 = (long *)FUN_0767be1c(uVar11,0);
      lVar4 = 0;
      if (plVar6 == (long *)0x0) {
LAB_05225db4:
        if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        goto LAB_05225efc;
      }
      uVar3 = (**(code **)(*plVar6 + 0x5c8))(plVar6,*(undefined8 *)(*plVar6 + 0x5d0));
      if ((uVar3 & 1) == 0) {
        memcpy(unaff_x24,pvVar12,unaff_x25);
        uVar3 = FUN_040777e0(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
        if ((uVar3 & 1) == 0) {
          memset(unaff_x28,0,*(size_t *)(unaff_x29 + -0x50));
          goto LAB_05225d64;
        }
        memcpy(unaff_x24,pvVar12,unaff_x25);
        uVar11 = thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
        if (*(int *)(*(long *)PTR_DAT_09285a88 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*(long *)PTR_DAT_09285a88);
        }
        uVar11 = FUN_075dd118(uVar11,plVar6,0);
      }
      else {
        if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar11 = FUN_076ae3f0(plVar6,0);
        memcpy(unaff_x24,pvVar12,unaff_x25);
        uVar5 = thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
        if (*(int *)(*(long *)PTR_DAT_09285a88 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*(long *)PTR_DAT_09285a88);
        }
        uVar11 = FUN_075dd118(uVar5,uVar11,0);
        uVar11 = FUN_076ae490(plVar6,uVar11,0);
      }
LAB_05225cfc:
      lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x30);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc(lVar4);
      }
      unaff_x22 = (void *)FUN_04077718(uVar11,lVar4);
      sVar8 = *(size_t *)(unaff_x29 + -0x50);
LAB_05225d3c:
      memcpy(unaff_x28,unaff_x22,sVar8);
LAB_05225d40:
      lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x30);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_040b1acc();
      }
      FUN_04077538(lVar4,unaff_x28,unaff_x22);
      goto LAB_05225d64;
    }
    uVar11 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 8);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar11 = FUN_0768890c(uVar11,0);
    uVar11 = FUN_0767be1c(uVar11,0);
    uVar5 = FUN_0768890c(**(undefined8 **)(unaff_x21 + 0x38),0);
    uVar5 = FUN_0767be1c(uVar5,0);
    uVar3 = FUN_07692be0(uVar11,uVar5,0);
    if ((uVar3 & 1) == 0) goto LAB_052256e8;
UnityEngine_UIElements_PopupField_<>c__DisplayClass27_0<object>___ctor:
    memset(unaff_x28,0,*(size_t *)(unaff_x29 + -0x50));
    lVar4 = 0;
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_05225efc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}


