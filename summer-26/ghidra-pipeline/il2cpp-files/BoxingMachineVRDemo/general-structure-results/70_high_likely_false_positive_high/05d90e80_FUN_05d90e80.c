/*
FUNCTION_NAME: FUN_05d90e80
ENTRY_POINT: 05d90e80
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d91684) */
/* WARNING: Removing unreachable block (ram,0x05d91810) */

void FUN_05d90e80(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__;
  puVar1 = Method_UnityEngine_UIElements_PointerEventBase<PointerLeaveEvent>_get_pointerId__;
  if ((DAT_06b82daa & 1) == 0) {
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>__ctor__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerLeaveEvent>_get_pointerId__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__);
    FUN_02d6084c(PTR_DAT_0677fb00);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_Init__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PreDispatch__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_altKey__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_button__);
    FUN_02d6084c(
                Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_deltaPosition__
                );
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_isPrimary__);
    FUN_02d6084c(PTR_DAT_0676bd58);
    FUN_02d6084c(
                Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_localPosition__
                );
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_pointerId__);
    FUN_02d6084c(PTR_DAT_067690c8);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_pointerType__)
    ;
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_position__);
    FUN_02d6084c(
                Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_pressedButtons__
                );
    FUN_02d6084c(PTR_DAT_0675f3d8);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_shiftKey__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveLinkTagEvent>__ctor__);
    FUN_02d6084c(PTR_DAT_06767ed0);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveLinkTagEvent>_GetPooled__
                );
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveLinkTagEvent>_Init__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerOutEvent>__ctor__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerOutEvent>_GetPooled__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerOutLinkTagEvent>__ctor__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerOutLinkTagEvent>_GetPooled__)
    ;
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerOutLinkTagEvent>_Init__);
    FUN_02d6084c(PTR_DAT_067698d0);
    DAT_06b82daa = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_04894d4c(lVar7,*(undefined8 *)puVar2);
  plVar13 = (long *)(param_1 + 0xa8);
  *plVar13 = lVar7;
  thunk_FUN_02dd37b4(plVar13,lVar7);
  puVar1 = Method_UnityEngine_UIElements_PointerEventBase<PointerOutLinkTagEvent>_Init__;
  if (*(long *)(param_1 + 0x90) != 0) {
    uVar8 = FUN_05021160(*(long *)(param_1 + 0x90),0);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar1;
    }
    puVar5 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_isPrimary__;
    puVar4 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_deltaPosition__;
    puVar3 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__;
    puVar2 = PTR_DAT_0677fb00;
    lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar14 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar7);
        lVar7 = *(long *)puVar1;
      }
      uVar15 = **(undefined8 **)(lVar7 + 0xb8);
      lVar14 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676bd58);
      FUN_04d61e54(lVar14,uVar15,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_PointerEventBase<PointerMoveLinkTagEvent>_GetPooled__
                   ,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar9 = lVar14;
      thunk_FUN_02dd37b4(plVar9,lVar14);
    }
    uVar8 = FUN_033b8e98(uVar8,lVar14,*(undefined8 *)puVar2);
    uVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar5);
    FUN_04d62ba4(uVar15,param_1,*(undefined8 *)puVar4,0);
    uVar8 = FUN_033ad7e8(uVar8,uVar15,*(undefined8 *)puVar3);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar1;
    }
    puVar5 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveLinkTagEvent>__ctor__;
    puVar4 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_localPosition__;
    puVar3 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_button__;
    puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_Init__;
    lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if (lVar14 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar7);
        lVar7 = *(long *)puVar1;
      }
      uVar15 = **(undefined8 **)(lVar7 + 0xb8);
      lVar14 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_pointerType__
                                 );
      FUN_04d62ba4(lVar14,uVar15,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_PointerEventBase<PointerMoveLinkTagEvent>_Init__,0
                  );
      plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar9 = lVar14;
      thunk_FUN_02dd37b4(plVar9,lVar14);
    }
    uVar8 = FUN_0347b33c(uVar8,lVar14,*(undefined8 *)puVar5);
    uVar15 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
    FUN_04d61e54(uVar15,param_1,*(undefined8 *)puVar3,0);
    uVar8 = FUN_033b8e98(uVar8,uVar15,*(undefined8 *)puVar2);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar1;
    }
    puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__;
    lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
    if (lVar14 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar7);
        lVar7 = *(long *)puVar1;
      }
      uVar15 = **(undefined8 **)(lVar7 + 0xb8);
      lVar14 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_pointerId__
                                 );
      Mono_Security_Interface_MonoTlsSettings__get_ClientCertificateIssuers
                (lVar14,uVar15,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_PointerEventBase<PointerOutEvent>__ctor__,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      *plVar9 = lVar14;
      thunk_FUN_02dd37b4(plVar9,lVar14);
    }
    uVar8 = FUN_033aa2ac(uVar8,lVar14,*(undefined8 *)puVar2);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar7);
      lVar7 = *(long *)puVar1;
    }
    puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__;
    lVar14 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x20);
    if (lVar14 == 0) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar7);
        lVar7 = *(long *)puVar1;
      }
      uVar15 = **(undefined8 **)(lVar7 + 0xb8);
      lVar14 = thunk_FUN_02d9d534(*(undefined8 *)
                                   Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_pointerId__
                                 );
      Mono_Security_Interface_MonoTlsSettings__get_ClientCertificateIssuers
                (lVar14,uVar15,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_PointerEventBase<PointerOutEvent>_GetPooled__,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
      *plVar9 = lVar14;
      thunk_FUN_02dd37b4(plVar9,lVar14);
    }
    plVar9 = (long *)FUN_033b564c(uVar8,lVar14,*(undefined8 *)puVar2);
    if (plVar9 != (long *)0x0) {
      lVar7 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_position__) {
            puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05d91424;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_02d9a5d4(plVar9,*(long *)
                                     Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_position__
                             ,0);
LAB_05d91424:
      plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      puVar3 = Method_UnityEngine_UIElements_PointerEventBase<PointerOutLinkTagEvent>__ctor__;
      puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__;
      puVar1 = PTR_DAT_0675f3d8;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar18 = 0;
      do {
        lVar7 = *plVar9;
        uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05d914a0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar1,0);
LAB_05d914a0:
        uVar11 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar9 == (long *)0x0) goto LAB_05d91678;
          lVar7 = *plVar9;
          uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar11 == 0) goto LAB_05d91650;
          piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_05d91638;
        }
        lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_UnityEngine_UIElements_PointerEventBase<PointerOutLinkTagEvent>_GetPooled__
                                  );
        FUN_0504920c(lVar7,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        *(long *)(lVar7 + 0x18) = param_1;
        thunk_FUN_02dd37b4((long *)(lVar7 + 0x18),param_1);
        lVar14 = *plVar9;
        uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)
                 Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_pressedButtons__
               ) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05d91534;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02d9a5d4(plVar9,*(long *)
                                       Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_pressedButtons__
                               ,0);
LAB_05d91534:
        lVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        plVar16 = (long *)(lVar7 + 0x10);
        *plVar16 = lVar14;
        thunk_FUN_02dd37b4(plVar16);
        if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar8 = FUN_05cd5330(*plVar16,0);
        if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar17 = *(undefined8 *)(*plVar16 + 0x10);
        uVar15 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067690c8);
        FUN_04d62ba4(uVar15,lVar7,*(undefined8 *)puVar3,0);
        lVar7 = FUN_05dc1894(param_1,uVar8,uVar17,uVar15,0);
        if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar11 = FUN_05cd63d4(*plVar16,0);
        if ((uVar11 & 1) != 0) {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          FUN_05dc064c(lVar7,0);
        }
        if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_048956f0(*plVar13,lVar7,*plVar16,*(undefined8 *)puVar2);
        if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar6 = FUN_05cd5bec(*plVar16,0);
        uVar18 = uVar18 | uVar6;
      } while( true );
    }
  }
  goto LAB_05d91808;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_05d91638:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_05d9166c;
    }
  }
LAB_05d91650:
  puVar10 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)PTR_DAT_0675f3d0,0);
LAB_05d9166c:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_05d91678:
  if ((uVar18 & 1) == 0) {
    return;
  }
  lVar7 = FUN_05dc169c(param_1,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)PTR_DAT_067698d0,0);
  if (lVar7 != 0) {
    lVar7 = FUN_05da71a0(lVar7,0);
    plVar9 = (long *)(param_1 + 0xa0);
    *plVar9 = lVar7;
    thunk_FUN_02dd37b4(plVar9,lVar7);
    lVar7 = *plVar9;
    uVar8 = *(undefined8 *)(param_1 + 0x90);
    if (*(int *)(*(long *)PTR_DAT_06767ed0 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar8 = FUN_05d52e0c(uVar8,0);
    if (lVar7 != 0) {
      FUN_05dbeb0c(lVar7,uVar8,0);
      if ((*plVar13 != 0) &&
         (lVar7 = FUN_048953d0(*plVar13,*(undefined8 *)
                                         Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__
                              ), lVar7 != 0)) {
        FUN_038e3508(&local_98,lVar7,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_shiftKey__
                    );
        puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PreDispatch__;
        puVar1 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__;
        uStack_78 = uStack_90;
        local_80 = local_98;
        local_70 = local_88;
        while( true ) {
          uVar11 = FUN_04b3ac4c(&local_80,*(undefined8 *)puVar2);
          uVar8 = local_70;
          if ((uVar11 & 1) == 0) {
            FUN_04b3ac48(&local_80,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__
                        );
            return;
          }
          if (*plVar13 == 0) break;
          lVar7 = FUN_04895670(*plVar13,local_70,*(undefined8 *)puVar1);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar11 = FUN_05cd5bec(lVar7,0);
          if ((uVar11 & 1) != 0) {
            thunk_FUN_05dc64d0(param_1,*(undefined8 *)(param_1 + 0xa0),uVar8,0);
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
    }
  }
LAB_05d91808:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


