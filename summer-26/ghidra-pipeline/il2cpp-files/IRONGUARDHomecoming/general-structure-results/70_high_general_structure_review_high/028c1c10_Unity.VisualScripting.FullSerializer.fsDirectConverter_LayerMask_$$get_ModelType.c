/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<LayerMask>$$get_ModelType
ENTRY_POINT: 028c1c10
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__get_ModelType
               (ulong param_1,long param_2)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *unaff_x19;
  void *__dest;
  long *unaff_x20;
  code *pcVar9;
  size_t unaff_x21;
  undefined8 *unaff_x22;
  void *unaff_x26;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_01ecaf44();
  }
  if (-1 < *(int *)(*(long *)(*(long *)(param_2 + 0xc0) + 0x38) + 0x28)) {
    unaff_x22 = (undefined8 *)*unaff_x22;
  }
  lVar3 = *unaff_x19;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  if (*(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x38) + 0x28) < 0) {
    uVar7 = *(undefined8 *)(unaff_x29 + -0xa8);
  }
  else {
    uVar7 = **(undefined8 **)(unaff_x29 + -0xa8);
  }
  lVar3 = *unaff_x20;
  *(undefined8 **)(unaff_x29 + -0x28) = unaff_x22;
  *(undefined8 *)(unaff_x29 + -0x20) = uVar7;
  (**(code **)(*(long *)(lVar3 + 0x1c0) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 0x1c0) + 8));
  if (*(char *)(unaff_x29 + -0x14) != '\0') {
    lVar6 = *unaff_x19;
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar3 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
      uVar1 = *(ushort *)(*unaff_x19 + 0x135);
      lVar3 = *unaff_x19;
    }
    pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x118);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    plVar4 = (long *)(*pcVar9)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x118));
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    pvVar5 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x38),
                                        *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x80)
                                        + 0xc0);
    memcpy(*(void **)(unaff_x29 + -0x98),pvVar5,*(size_t *)(unaff_x29 + -0xb0));
    memcpy(unaff_x26,*(void **)(unaff_x29 + -0x30),unaff_x21);
    if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    pvVar5 = (void *)thunk_FUN_01ee7388();
    memcpy(*(void **)(unaff_x29 + -0xb8),pvVar5,*(size_t *)(unaff_x29 + -0xb0));
    if (plVar4 == (long *)0x0) {
LAB_028c1f34:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x40) + 0x28)) {
      *(undefined8 *)(unaff_x29 + -0x98) = **(undefined8 **)(unaff_x29 + -0x98);
    }
    lVar3 = *unaff_x19;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    puVar8 = *(undefined8 **)(unaff_x29 + -0xb8);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x40) + 0x28)) {
      puVar8 = (undefined8 *)*puVar8;
    }
    lVar3 = *plVar4;
    *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x98);
    *(undefined8 **)(unaff_x29 + -0x20) = puVar8;
    lVar3 = *(long *)(lVar3 + 0x1c0);
    (**(code **)(lVar3 + 0x10))
              (*(undefined8 *)(lVar3 + 8),lVar3,plVar4,unaff_x29 + -0x28,unaff_x29 + -0x14);
    if (*(char *)(unaff_x29 + -0x14) != '\0') {
      lVar6 = *unaff_x19;
      uVar1 = *(ushort *)(lVar6 + 0x135);
      lVar3 = lVar6;
      if ((uVar1 & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
        uVar1 = *(ushort *)(*unaff_x19 + 0x135);
        lVar3 = *unaff_x19;
      }
      pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x138);
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_01ecaf44(lVar3);
      }
      plVar4 = (long *)(*pcVar9)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x138));
      lVar3 = *unaff_x19;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44(lVar3);
      }
      pvVar5 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x38),
                                          *(long *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x80
                                                   ) + 0xe0);
      memcpy(*(void **)(unaff_x29 + -200),pvVar5,*(size_t *)(unaff_x29 + -0xc0));
      memcpy(unaff_x26,*(void **)(unaff_x29 + -0x30),unaff_x21);
      if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
        FUN_01ecaf44();
      }
      __dest = *(void **)(unaff_x29 + -0xd0);
      pvVar5 = (void *)thunk_FUN_01ee7388();
      memcpy(__dest,pvVar5,*(size_t *)(unaff_x29 + -0xc0));
      if (plVar4 == (long *)0x0) goto LAB_028c1f34;
      lVar3 = *plVar4;
      *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -200);
      *(void **)(unaff_x29 + -0x20) = __dest;
      lVar3 = *(long *)(lVar3 + 0x1c0);
      (**(code **)(lVar3 + 0x10))
                (*(undefined8 *)(lVar3 + 8),lVar3,plVar4,unaff_x29 + -0x28,unaff_x29 + -0x14);
      bVar2 = *(char *)(unaff_x29 + -0x14) != '\0';
      goto LAB_028c1e10;
    }
  }
  bVar2 = false;
LAB_028c1e10:
  if (*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


