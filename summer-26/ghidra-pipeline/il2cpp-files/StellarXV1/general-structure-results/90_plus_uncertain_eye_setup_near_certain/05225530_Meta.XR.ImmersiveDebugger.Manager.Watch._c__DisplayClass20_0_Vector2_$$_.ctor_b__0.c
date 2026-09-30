/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector2>$$<.ctor>b__0
ENTRY_POINT: 05225530
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector2>__<_ctor>b__0(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *pvVar6;
  long *plVar7;
  void *__src;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  void *unaff_x20;
  size_t sVar13;
  long unaff_x21;
  void *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  size_t unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  long unaff_x29;
  
  uVar12 = **(undefined8 **)(unaff_x21 + 0x38);
  if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar3 = FUN_0768890c(uVar12,0);
  lVar8 = 0;
  if (lVar3 == 0) {
LAB_05225db4:
    if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    goto LAB_05225efc;
  }
  uVar4 = FUN_07693e44(lVar3,0);
  if ((uVar4 & 1) == 0) {
LAB_05225608:
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_040b1acc();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x40))();
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x58);
    if ((uVar4 & 1) == 0) {
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_040b1acc();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x50))();
      if ((uVar4 & 1) != 0) {
        uVar12 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 8);
        if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar12 = FUN_0768890c(uVar12,0);
        uVar5 = FUN_0768890c(**(undefined8 **)(unaff_x21 + 0x38),0);
        uVar5 = FUN_0767be1c(uVar5,0);
        uVar4 = FUN_07691f40(uVar12,uVar5,0);
        if ((uVar4 & 1) == 0) goto LAB_05225870;
        pvVar6 = *(void **)(unaff_x29 + -0x40);
        memcpy(unaff_x24,pvVar6,unaff_x25);
        uVar4 = FUN_040777e0(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
joined_r0x05225860:
        if ((uVar4 & 1) == 0)
        goto UnityEngine_UIElements_PopupField_<>c__DisplayClass27_0<object>___ctor;
        memcpy(unaff_x24,pvVar6,unaff_x25);
        uVar12 = thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
        goto LAB_05225cfc;
      }
LAB_05225870:
      lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_040b1acc();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x68))();
      if ((uVar4 & 1) == 0) {
LAB_05225908:
        lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_040b1acc();
        }
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x78))();
        if ((uVar4 & 1) != 0) {
          *(void **)(unaff_x29 + -0x58) = unaff_x20;
          puVar2 = PTR_DAT_09285980;
          uVar12 = **(undefined8 **)(unaff_x21 + 0x38);
          if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar12 = FUN_0768890c(uVar12,0);
          uVar5 = FUN_0768890c(*(long *)(puVar2 + 0x90) + 0x20,0);
          uVar4 = FUN_07691f40(uVar12,uVar5,0);
          iVar1 = *(int *)(*(long *)(puVar2 + 0xe0) + 0xe4);
          if ((uVar4 & 1) != 0) {
            uVar12 = (*(undefined8 **)(unaff_x21 + 0x38))[1];
            pvVar6 = *(void **)(unaff_x29 + -0x58);
            if (iVar1 == 0) {
              thunk_FUN_040d65a8();
            }
            uVar12 = FUN_0768890c(uVar12,0);
            puVar2 = PTR_DAT_09285980;
            memcpy(unaff_x24,*(void **)(unaff_x29 + -0x40),unaff_x25);
            plVar7 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60))
            ;
            lVar8 = *(long *)(puVar2 + 0x98);
            if (*(int *)(lVar8 + 0xe4) == 0) {
              lVar8 = thunk_FUN_040d65a8();
            }
            if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)(puVar2 + 0x90))) {
              if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                FUN_04077bb0(plVar7);
              }
              goto LAB_05225efc;
            }
            uVar12 = FUN_076ad9f4(uVar12,plVar7,0);
            lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x30);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_040b1acc(lVar8);
            }
            __src = (void *)FUN_04077718(uVar12,lVar8);
            memcpy(pvVar6,__src,*(size_t *)(unaff_x29 + -0x50));
            lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x30);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_040b1acc();
            }
            FUN_04077538(lVar8,pvVar6,__src);
            goto LAB_05225d64;
          }
          uVar12 = **(undefined8 **)(unaff_x21 + 0x38);
          unaff_x20 = *(void **)(unaff_x29 + -0x58);
          if (iVar1 == 0) {
            thunk_FUN_040d65a8();
          }
          uVar12 = FUN_0768890c(uVar12,0);
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_040d65a8(*unaff_x23);
          }
          uVar4 = FUN_08a5a034(uVar12,0);
          if ((uVar4 & 1) != 0) goto LAB_052255c8;
        }
        pvVar6 = *(void **)(unaff_x29 + -0x40);
        memcpy(unaff_x24,pvVar6,unaff_x25);
        memcpy(unaff_x26,pvVar6,unaff_x25);
        memcpy(unaff_x27,pvVar6,unaff_x25);
        uVar12 = thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
        lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x30);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_040b1acc(lVar8);
        }
        puVar2 = PTR_DAT_09285980;
        lVar8 = thunk_FUN_040b4e00(uVar12,lVar8);
        if (lVar8 == 0) {
          uVar12 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 8);
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          plVar7 = (long *)FUN_0768890c(uVar12,0);
          lVar8 = FUN_0768890c(**(undefined8 **)(unaff_x21 + 0x38),0);
          if (plVar7 == (long *)0x0) goto LAB_05225db4;
          uVar4 = (**(code **)(*plVar7 + 0x2b8))(plVar7,lVar8,*(undefined8 *)(*plVar7 + 0x2c0));
          goto joined_r0x05225860;
        }
        memcpy(unaff_x24,unaff_x26,unaff_x25);
        uVar12 = thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
        lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x30);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_040b1acc(lVar8);
        }
        uVar12 = thunk_FUN_040b4e00(uVar12,lVar8);
        lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x30);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_040b1acc(lVar8);
        }
        pvVar6 = (void *)FUN_04077718(uVar12,lVar8);
        sVar13 = *(size_t *)(unaff_x29 + -0x50);
        memmove(unaff_x22,pvVar6,sVar13);
        goto LAB_05225d3c;
      }
      memcpy(unaff_x24,*(void **)(unaff_x29 + -0x40),unaff_x25);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      puVar9 = *(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x70);
      uVar12 = *puVar9;
      puVar10 = unaff_x24;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x60) + 0x28)) {
        puVar10 = (undefined8 *)*unaff_x24;
      }
      pcVar11 = (code *)puVar9[2];
      *(undefined8 **)(unaff_x29 + -0x20) = puVar10;
      *(void **)(unaff_x29 + -0x18) = unaff_x20;
      (*pcVar11)(uVar12,puVar9,0,unaff_x29 + -0x20,unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0') goto LAB_05225908;
      goto LAB_05225d64;
    }
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_040b1acc();
    }
    puVar2 = PTR_DAT_09285980;
    pvVar6 = *(void **)(unaff_x29 + -0x40);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x50))();
    if ((uVar4 & 1) == 0) {
LAB_052256e8:
      uVar12 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 8);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar12 = FUN_0768890c(uVar12,0);
      plVar7 = (long *)FUN_0767be1c(uVar12,0);
      lVar8 = 0;
      if (plVar7 == (long *)0x0) goto LAB_05225db4;
      uVar4 = (**(code **)(*plVar7 + 0x5c8))(plVar7,*(undefined8 *)(*plVar7 + 0x5d0));
      if ((uVar4 & 1) == 0) {
        memcpy(unaff_x24,pvVar6,unaff_x25);
        uVar4 = FUN_040777e0(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
        if ((uVar4 & 1) == 0) {
          memset(unaff_x20,0,*(size_t *)(unaff_x29 + -0x50));
          goto LAB_05225d64;
        }
        memcpy(unaff_x24,pvVar6,unaff_x25);
        uVar12 = thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
        if (*(int *)(*(long *)PTR_DAT_09285a88 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*(long *)PTR_DAT_09285a88);
        }
        uVar12 = FUN_075dd118(uVar12,plVar7,0);
      }
      else {
        if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar12 = FUN_076ae3f0(plVar7,0);
        memcpy(unaff_x24,pvVar6,unaff_x25);
        uVar5 = thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
        if (*(int *)(*(long *)PTR_DAT_09285a88 + 0xe4) == 0) {
          thunk_FUN_040d65a8(*(long *)PTR_DAT_09285a88);
        }
        uVar12 = FUN_075dd118(uVar5,uVar12,0);
        uVar12 = FUN_076ae490(plVar7,uVar12,0);
      }
LAB_05225cfc:
      lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x30);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_040b1acc(lVar8);
      }
      unaff_x22 = (void *)FUN_04077718(uVar12,lVar8);
      sVar13 = *(size_t *)(unaff_x29 + -0x50);
LAB_05225d3c:
      memcpy(unaff_x20,unaff_x22,sVar13);
      goto LAB_05225d40;
    }
    uVar12 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 8);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar12 = FUN_0768890c(uVar12,0);
    uVar12 = FUN_0767be1c(uVar12,0);
    uVar5 = FUN_0768890c(**(undefined8 **)(unaff_x21 + 0x38),0);
    uVar5 = FUN_0767be1c(uVar5,0);
    uVar4 = FUN_07692be0(uVar12,uVar5,0);
    if ((uVar4 & 1) == 0) goto LAB_052256e8;
UnityEngine_UIElements_PopupField_<>c__DisplayClass27_0<object>___ctor:
    memset(unaff_x20,0,*(size_t *)(unaff_x29 + -0x50));
    lVar8 = 0;
  }
  else {
    uVar12 = **(undefined8 **)(unaff_x21 + 0x38);
    if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar12 = FUN_0768890c(uVar12,0);
    uVar5 = FUN_0768890c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 8),0);
    uVar4 = FUN_07691f40(uVar12,uVar5,0);
    if ((uVar4 & 1) == 0) goto LAB_05225608;
LAB_052255c8:
    pvVar6 = (void *)(*(code *)**(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x38))
                               (*(undefined8 *)(unaff_x29 + -0x40));
    sVar13 = *(size_t *)(unaff_x29 + -0x50);
    memcpy(unaff_x22,pvVar6,sVar13);
    memmove(unaff_x20,pvVar6,sVar13);
LAB_05225d40:
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x30);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_040b1acc();
    }
    FUN_04077538(lVar8,unaff_x20,unaff_x22);
LAB_05225d64:
    lVar8 = 1;
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_05225efc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar8);
}


