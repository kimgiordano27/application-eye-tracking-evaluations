/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<LayerMask>$$TryDeserialize
ENTRY_POINT: 028c1da8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__TryDeserialize(long param_1)

{
  ushort uVar1;
  bool bVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined8 *in_x10;
  long *unaff_x19;
  void *__dest;
  long *unaff_x20;
  code *pcVar7;
  size_t unaff_x21;
  void *unaff_x26;
  long unaff_x29;
  
  if (-1 < *(int *)(*(long *)(param_1 + 0x40) + 0x28)) {
    in_x10 = (undefined8 *)*in_x10;
  }
  lVar5 = *unaff_x20;
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x98);
  *(undefined8 **)(unaff_x29 + -0x20) = in_x10;
  (**(code **)(*(long *)(lVar5 + 0x1c0) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 0x1c0) + 8));
  if (*(char *)(unaff_x29 + -0x14) == '\0') {
    bVar2 = false;
  }
  else {
    lVar6 = *unaff_x19;
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar5 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
      uVar1 = *(ushort *)(*unaff_x19 + 0x135);
      lVar5 = *unaff_x19;
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x138);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    plVar3 = (long *)(*pcVar7)(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x138));
    lVar5 = *unaff_x19;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    pvVar4 = (void *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x38),
                                        *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x80)
                                        + 0xe0);
    memcpy(*(void **)(unaff_x29 + -200),pvVar4,*(size_t *)(unaff_x29 + -0xc0));
    memcpy(unaff_x26,*(void **)(unaff_x29 + -0x30),unaff_x21);
    if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    __dest = *(void **)(unaff_x29 + -0xd0);
    pvVar4 = (void *)thunk_FUN_01ee7388();
    memcpy(__dest,pvVar4,*(size_t *)(unaff_x29 + -0xc0));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar3;
    *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -200);
    *(void **)(unaff_x29 + -0x20) = __dest;
    lVar5 = *(long *)(lVar5 + 0x1c0);
    (**(code **)(lVar5 + 0x10))
              (*(undefined8 *)(lVar5 + 8),lVar5,plVar3,unaff_x29 + -0x28,unaff_x29 + -0x14);
    bVar2 = *(char *)(unaff_x29 + -0x14) != '\0';
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


