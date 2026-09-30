/*
FUNCTION_NAME: Oculus.Interaction.Interactor<object,-object>$$Postprocess
ENTRY_POINT: 01202f40
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


uint Oculus_Interaction_Interactor<object,_object>__Postprocess(long param_1)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  void *__src;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  void *unaff_x19;
  long *unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  long *unaff_x23;
  long *unaff_x26;
  void *unaff_x28;
  long unaff_x29;
  
  if ((*(byte *)(param_1 + 0x132) & 1) == 0) {
    param_1 = FUN_00d5941c();
  }
  pvVar2 = (void *)thunk_FUN_00d32ed4(*(undefined8 *)(unaff_x29 + -0x80),
                                      *(long *)(param_1 + 0x80) + 0x80);
                    /* try { // try from 01202f68 to 01302f6b has its CatchHandler @ 01202fbc */
  memcpy(unaff_x19,pvVar2,*(size_t *)(unaff_x29 + -0xb0));
                    /* try { // try from 01202f6c to 01302fbb has its CatchHandler @ 01202fc0 */
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0xd0) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  thunk_FUN_00d61fa0();
  memcpy(unaff_x22,*(void **)(unaff_x29 + -0x78),*(size_t *)(unaff_x29 + -0x70));
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c();
  }
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01202f68 with catch @ 01202fbc
                       try { // try from 01202fbc to 01302fe3 has its CatchHandler @ 01202e88 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01202f6c with catch @ 01202fc0
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01202ef8 with catch @ 01202fc4
                        */
  if ((*(byte *)(**(long **)(lVar3 + 0xc0) + 0x132) & 1) == 0) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01202edc with catch @ 01202fc8
                        */
    FUN_00d5941c();
  }
  pvVar2 = (void *)thunk_FUN_00d32ed4();
  memcpy(unaff_x21,pvVar2,*(size_t *)(unaff_x29 + -0xb0));
  lVar3 = *unaff_x20;
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0xd0) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  thunk_FUN_00d61fa0();
  lVar3 = *unaff_x23;
  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x26) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
        goto Oculus_Interaction_Interactor<object,_object>__InteractableChangesUpdate;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_00d59724();
Oculus_Interaction_Interactor<object,_object>__InteractableChangesUpdate:
  uVar7 = (*(code *)*puVar4)();
  if ((uVar7 & 1) != 0) {
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    pvVar2 = *(void **)(unaff_x29 + -0xe8);
    pvVar5 = *(void **)(unaff_x29 + -0xe0);
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    __src = (void *)thunk_FUN_00d32ed4(*(undefined8 *)(unaff_x29 + -0x80),
                                       *(long *)(lVar3 + 0x80) + 0xa0);
    memcpy(pvVar2,__src,*(size_t *)(unaff_x29 + -200));
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xf8);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    thunk_FUN_00d61fa0(lVar3,pvVar2);
    memcpy(unaff_x22,*(void **)(unaff_x29 + -0x78),*(size_t *)(unaff_x29 + -0x70));
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    if ((*(byte *)(**(long **)(lVar3 + 0xc0) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    pvVar2 = (void *)thunk_FUN_00d32ed4();
    memcpy(pvVar5,pvVar2,*(size_t *)(unaff_x29 + -200));
    lVar3 = *unaff_x20;
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xf8);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    thunk_FUN_00d61fa0(lVar3,pvVar5);
    lVar3 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_012031c4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_012031c4:
    uVar7 = (*(code *)*puVar4)();
    if ((uVar7 & 1) != 0) {
      lVar3 = *unaff_x20;
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_00d5941c();
      }
      pvVar2 = *(void **)(unaff_x29 + -0xf0);
      lVar3 = **(long **)(lVar3 + 0xc0);
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_00d5941c();
      }
      pvVar5 = (void *)thunk_FUN_00d32ed4(*(undefined8 *)(unaff_x29 + -0x80),
                                          *(long *)(lVar3 + 0x80) + 0xc0);
      memcpy(pvVar2,pvVar5,*(size_t *)(unaff_x29 + -0x60));
      lVar3 = *unaff_x20;
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_00d5941c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x120);
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_00d5941c();
      }
      thunk_FUN_00d61fa0(lVar3,pvVar2);
      memcpy(unaff_x22,*(void **)(unaff_x29 + -0x78),*(size_t *)(unaff_x29 + -0x70));
      lVar3 = *unaff_x20;
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_00d5941c();
      }
      if ((*(byte *)(**(long **)(lVar3 + 0xc0) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      pvVar2 = (void *)thunk_FUN_00d32ed4();
      memcpy(unaff_x28,pvVar2,*(size_t *)(unaff_x29 + -0x60));
      lVar3 = *unaff_x20;
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x120) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      thunk_FUN_00d61fa0();
      lVar6 = *unaff_x23;
      lVar3 = *(long *)(unaff_x29 + -0x68);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto Oculus_Interaction_Interactor<object,_object>__Unhover;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_00d59724();
Oculus_Interaction_Interactor<object,_object>__Unhover:
      uVar1 = (*(code *)*puVar4)();
      goto LAB_01203320;
    }
  }
  lVar3 = *(long *)(unaff_x29 + -0x68);
  uVar1 = 0;
LAB_01203320:
  if (*(long *)(lVar3 + 0x28) == *(long *)(unaff_x29 + -0x58)) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


