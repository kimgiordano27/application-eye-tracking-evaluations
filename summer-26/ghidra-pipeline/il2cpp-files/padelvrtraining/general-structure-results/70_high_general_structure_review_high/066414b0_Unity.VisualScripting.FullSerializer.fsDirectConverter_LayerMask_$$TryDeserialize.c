/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<LayerMask>$$TryDeserialize
ENTRY_POINT: 066414b0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__TryDeserialize(void)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  code *pcVar5;
  undefined8 uVar6;
  long unaff_x23;
  undefined8 unaff_x24;
  long *unaff_x25;
  long *plVar7;
  long *unaff_x27;
  long unaff_x29;
  
  do {
    lVar3 = FUN_03d8f26c();
    plVar7 = unaff_x25;
    do {
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03d8f26c();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar4 = *unaff_x27;
      uVar1 = *(ushort *)(lVar4 + 0x135);
      lVar3 = lVar4;
      if ((uVar1 & 1) == 0) {
        lVar4 = FUN_03d8f26c(lVar4);
        uVar1 = *(ushort *)(*unaff_x27 + 0x135);
        lVar3 = *unaff_x27;
      }
      uVar6 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x40);
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_03d8f26c(lVar3);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x40);
      *(int *)(unaff_x29 + -0x4c) = (int)unaff_x23;
      *(undefined8 *)(unaff_x29 + -0x60) = unaff_x24;
      *(undefined8 *)(unaff_x29 + -0x58) = unaff_x19;
      (**(code **)(lVar3 + 0x10))(uVar6,lVar3,unaff_x29 + -0x38,unaff_x29 + -0x60);
      lVar4 = *unaff_x27;
      uVar1 = *(ushort *)(lVar4 + 0x135);
      lVar3 = lVar4;
      if ((uVar1 & 1) == 0) {
        lVar4 = FUN_03d8f26c(lVar4);
        uVar1 = *(ushort *)(*unaff_x27 + 0x135);
        lVar3 = *unaff_x27;
      }
      uVar6 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x40);
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_03d8f26c(lVar3);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x40);
      *(int *)(unaff_x29 + -0x4c) = (int)unaff_x23;
      *(undefined8 *)(unaff_x29 + -0x60) = unaff_x24;
      *(undefined8 *)(unaff_x29 + -0x58) = unaff_x20;
      (**(code **)(lVar3 + 0x10))(uVar6,lVar3,unaff_x29 + -0x48,unaff_x29 + -0x60);
      lVar4 = *unaff_x27;
      uVar1 = *(ushort *)(lVar4 + 0x135);
      lVar3 = lVar4;
      if ((uVar1 & 1) == 0) {
        lVar4 = FUN_03d8f26c(lVar4);
        uVar1 = *(ushort *)(*unaff_x27 + 0x135);
        lVar3 = *unaff_x27;
      }
      uVar6 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x50);
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_03d8f26c(lVar3);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x50);
      *(undefined8 *)(unaff_x29 + -0x60) = unaff_x19;
      *(undefined8 *)(unaff_x29 + -0x58) = unaff_x20;
      (**(code **)(lVar3 + 0x10))(uVar6,lVar3,0,unaff_x29 + -0x60,unaff_x29 + -0x4c);
      unaff_x23 = unaff_x23 + 1;
      unaff_x25 = plVar7 + 1;
      *plVar7 = (long)(int)-(*(byte *)(unaff_x29 + -0x4c) & 1);
      lVar3 = *unaff_x27;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03d8f26c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03d8f26c();
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar4 = *unaff_x27;
      uVar1 = *(ushort *)(lVar4 + 0x135);
      lVar3 = lVar4;
      if ((uVar1 & 1) == 0) {
        lVar4 = FUN_03d8f26c(lVar4);
        uVar1 = *(ushort *)(*unaff_x27 + 0x135);
        lVar3 = *unaff_x27;
      }
      pcVar5 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x28);
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_03d8f26c(lVar3);
      }
      iVar2 = (*pcVar5)(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28));
      if (iVar2 <= unaff_x23) {
        *(undefined8 *)(unaff_x29 + -0x28) = 0;
        *(undefined8 *)(unaff_x29 + -0x20) = 0;
        if ((*(byte *)(*unaff_x27 + 0x135) & 1) == 0) {
          FUN_03d8f26c();
        }
        lVar3 = *(long *)(unaff_x29 + -0x88);
        FUN_066385e8(unaff_x29 + -0x28);
        if (*(long *)(lVar3 + 0x28) != *(long *)(unaff_x29 + -0x18)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(*(undefined8 *)(unaff_x29 + -0x28),*(undefined8 *)(unaff_x29 + -0x20));
        }
        return;
      }
      lVar3 = *unaff_x27;
      plVar7 = unaff_x25;
    } while ((*(byte *)(lVar3 + 0x135) & 1) != 0);
  } while( true );
}


