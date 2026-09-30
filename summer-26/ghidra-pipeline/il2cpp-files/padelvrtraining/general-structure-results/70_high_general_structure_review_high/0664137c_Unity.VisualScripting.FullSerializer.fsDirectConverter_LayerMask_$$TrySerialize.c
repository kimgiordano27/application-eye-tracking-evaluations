/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<LayerMask>$$TrySerialize
ENTRY_POINT: 0664137c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__TrySerialize
               (undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  code *pcVar9;
  undefined8 *__s;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined4 uVar12;
  
  FUN_07186ef4(param_1);
  uVar3 = FUN_07190474();
  lVar6 = *unaff_x27;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c(lVar6);
  }
  if ((uVar3 & 1) == 0) {
    uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    uVar10 = FUN_07186ef4(uVar10,0);
    uVar4 = FUN_07186ef4(*(undefined8 *)PTR_StringLiteral_49906_091adf20,0);
    uVar3 = FUN_07190474(uVar10,uVar4,0);
    if ((uVar3 & 1) == 0) {
      thunk_FUN_03d1e194(PTR_DAT_091a0f10);
      uVar10 = thunk_FUN_03d2ef40();
      uVar4 = thunk_FUN_03d1e194(PTR_DAT_091fb8f8);
      FUN_07173a24(uVar10,uVar4,0);
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414(uVar10);
    }
    lVar6 = *unaff_x27;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar7 = *unaff_x27;
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar6 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_03d8f26c(lVar7);
      uVar1 = *(ushort *)(*unaff_x27 + 0x135);
      lVar6 = *unaff_x27;
    }
    pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_03d8f26c(lVar6);
    }
    uVar3 = (*pcVar9)(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28));
    uVar5 = -(uVar3 >> 0x1f & 1) & 0xfffffff800000000 | (uVar3 & 0xffffffff) << 3;
    if ((int)uVar3 == 0) {
      __s = (undefined8 *)0x0;
    }
    else {
      __s = (undefined8 *)(&stack0x00000000 + -(uVar5 + 0xf & 0xfffffffffffffff0));
    }
    memset(__s,0,uVar5);
    lVar6 = 0;
    puVar11 = __s;
    while( true ) {
      lVar7 = *unaff_x27;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar8 = *unaff_x27;
      uVar1 = *(ushort *)(lVar8 + 0x135);
      lVar7 = lVar8;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_03d8f26c(lVar8);
        uVar1 = *(ushort *)(*unaff_x27 + 0x135);
        lVar7 = *unaff_x27;
      }
      pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_03d8f26c(lVar7);
      }
      iVar2 = (*pcVar9)(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
      if (iVar2 <= lVar6) break;
      lVar7 = *unaff_x27;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar8 = *unaff_x27;
      uVar1 = *(ushort *)(lVar8 + 0x135);
      lVar7 = lVar8;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_03d8f26c(lVar8);
        uVar1 = *(ushort *)(*unaff_x27 + 0x135);
        lVar7 = *unaff_x27;
      }
      uVar10 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x40);
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_03d8f26c(lVar7);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x40);
      *(int *)(unaff_x29 + -0x4c) = (int)lVar6;
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x4c;
      *(undefined8 *)(unaff_x29 + -0x58) = unaff_x19;
      (**(code **)(lVar7 + 0x10))(uVar10,lVar7,unaff_x29 + -0x38,unaff_x29 + -0x60);
      lVar8 = *unaff_x27;
      uVar1 = *(ushort *)(lVar8 + 0x135);
      lVar7 = lVar8;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_03d8f26c(lVar8);
        uVar1 = *(ushort *)(*unaff_x27 + 0x135);
        lVar7 = *unaff_x27;
      }
      uVar10 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x40);
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_03d8f26c(lVar7);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x40);
      *(int *)(unaff_x29 + -0x4c) = (int)lVar6;
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x4c;
      *(undefined8 *)(unaff_x29 + -0x58) = unaff_x20;
      (**(code **)(lVar7 + 0x10))(uVar10,lVar7,unaff_x29 + -0x48,unaff_x29 + -0x60);
      lVar8 = *unaff_x27;
      uVar1 = *(ushort *)(lVar8 + 0x135);
      lVar7 = lVar8;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_03d8f26c(lVar8);
        uVar1 = *(ushort *)(*unaff_x27 + 0x135);
        lVar7 = *unaff_x27;
      }
      uVar10 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x50);
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_03d8f26c(lVar7);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x50);
      *(undefined8 *)(unaff_x29 + -0x60) = unaff_x19;
      *(undefined8 *)(unaff_x29 + -0x58) = unaff_x20;
      (**(code **)(lVar7 + 0x10))(uVar10,lVar7,0,unaff_x29 + -0x60,unaff_x29 + -0x4c);
      lVar6 = lVar6 + 1;
      uVar10 = 0;
      if (*(char *)(unaff_x29 + -0x4c) != '\0') {
        uVar10 = 0xffffffffffffffff;
      }
      *puVar11 = uVar10;
      puVar11 = puVar11 + 1;
    }
  }
  else {
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar7 = *unaff_x27;
    uVar1 = *(ushort *)(lVar7 + 0x135);
    lVar6 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_03d8f26c(lVar7);
      uVar1 = *(ushort *)(*unaff_x27 + 0x135);
      lVar6 = *unaff_x27;
    }
    pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_03d8f26c(lVar6);
    }
    uVar3 = (*pcVar9)(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28));
    uVar5 = -(uVar3 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar3 & 0xffffffff) << 2;
    if ((int)uVar3 == 0) {
      __s = (undefined8 *)0x0;
    }
    else {
      __s = (undefined8 *)(&stack0x00000000 + -(uVar5 + 0xf & 0xfffffffffffffff0));
    }
    memset(__s,0,uVar5);
    lVar6 = 0;
    puVar11 = __s;
    while( true ) {
      lVar7 = *unaff_x27;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar8 = *unaff_x27;
      uVar1 = *(ushort *)(lVar8 + 0x135);
      lVar7 = lVar8;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_03d8f26c(lVar8);
        uVar1 = *(ushort *)(*unaff_x27 + 0x135);
        lVar7 = *unaff_x27;
      }
      pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_03d8f26c(lVar7);
      }
      iVar2 = (*pcVar9)(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
      if (iVar2 <= lVar6) break;
      lVar7 = *unaff_x27;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar8 = *unaff_x27;
      uVar1 = *(ushort *)(lVar8 + 0x135);
      lVar7 = lVar8;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_03d8f26c(lVar8);
        uVar1 = *(ushort *)(*unaff_x27 + 0x135);
        lVar7 = *unaff_x27;
      }
      uVar10 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x40);
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_03d8f26c(lVar7);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x40);
      *(int *)(unaff_x29 + -0x4c) = (int)lVar6;
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x4c;
      *(undefined8 *)(unaff_x29 + -0x58) = unaff_x19;
      (**(code **)(lVar7 + 0x10))(uVar10,lVar7,unaff_x29 + -0x38,unaff_x29 + -0x60);
      lVar8 = *unaff_x27;
      uVar1 = *(ushort *)(lVar8 + 0x135);
      lVar7 = lVar8;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_03d8f26c(lVar8);
        uVar1 = *(ushort *)(*unaff_x27 + 0x135);
        lVar7 = *unaff_x27;
      }
      uVar10 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x40);
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_03d8f26c(lVar7);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x40);
      *(int *)(unaff_x29 + -0x4c) = (int)lVar6;
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x4c;
      *(undefined8 *)(unaff_x29 + -0x58) = unaff_x20;
      (**(code **)(lVar7 + 0x10))(uVar10,lVar7,unaff_x29 + -0x48,unaff_x29 + -0x60);
      lVar8 = *unaff_x27;
      uVar1 = *(ushort *)(lVar8 + 0x135);
      lVar7 = lVar8;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_03d8f26c(lVar8);
        uVar1 = *(ushort *)(*unaff_x27 + 0x135);
        lVar7 = *unaff_x27;
      }
      uVar10 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x50);
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_03d8f26c(lVar7);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x50);
      *(undefined8 *)(unaff_x29 + -0x60) = unaff_x19;
      *(undefined8 *)(unaff_x29 + -0x58) = unaff_x20;
      (**(code **)(lVar7 + 0x10))(uVar10,lVar7,0,unaff_x29 + -0x60,unaff_x29 + -0x4c);
      lVar6 = lVar6 + 1;
      uVar12 = 0;
      if (*(char *)(unaff_x29 + -0x4c) != '\0') {
        uVar12 = 0xffffffff;
      }
      *(undefined4 *)puVar11 = uVar12;
      puVar11 = (undefined8 *)((long)puVar11 + 4);
    }
  }
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  lVar6 = *unaff_x27;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03d8f26c();
  }
  lVar7 = *(long *)(unaff_x29 + -0x88);
  FUN_066385e8(unaff_x29 + -0x28,__s,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x68));
  if (*(long *)(lVar7 + 0x28) != *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined8 *)(unaff_x29 + -0x28),*(undefined8 *)(unaff_x29 + -0x20));
  }
  return;
}


