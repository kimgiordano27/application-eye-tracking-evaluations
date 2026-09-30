/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<LayerMask>$$TryDeserialize
ENTRY_POINT: 0231098c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__TryDeserialize
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong in_x9;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar6;
  undefined8 uVar7;
  long *unaff_x22;
  code *pcVar8;
  
  do {
    if (in_x9 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_3) {
          puVar1 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_023109cc;
        }
        in_x9 = in_x9 - 1;
        piVar5 = piVar5 + 4;
      } while (in_x9 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(unaff_x21,param_3,0);
LAB_023109cc:
    uVar2 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      if (unaff_x19 != (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x1f8))();
        return 0;
      }
LAB_02310b08:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    plVar6 = (long *)unaff_x19[0x1f];
    if (plVar6 == (long *)0x0) goto LAB_02310b08;
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ae9e74(lVar3);
    }
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02310a4c;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(plVar6,lVar3,0);
LAB_02310a4c:
    (*(code *)*puVar1)(&stack0x000001a0,plVar6,puVar1[1]);
    memcpy(&stack0x000000d0,&stack0x000001a0,0xd0);
    lVar3 = unaff_x19[0x1e];
    memcpy(&stack0x00000000,&stack0x000000d0,0xd0);
    if (lVar3 == 0) goto LAB_02310b08;
    pcVar8 = *(code **)(lVar3 + 0x18);
    uVar7 = *(undefined8 *)(lVar3 + 0x40);
    memcpy(&stack0x000001a0,&stack0x00000000,0xd0);
    uVar2 = (*pcVar8)(uVar7,&stack0x000001a0,*(undefined8 *)(lVar3 + 0x28));
    if ((uVar2 & 1) != 0) {
      memcpy(unaff_x19 + 3,&stack0x000000d0,0xd0);
      thunk_FUN_01b4f09c(unaff_x19 + 3,0);
      return 1;
    }
    unaff_x21 = (long *)unaff_x19[0x1f];
    if (unaff_x21 == (long *)0x0) goto LAB_02310b08;
    param_1 = *unaff_x21;
    param_3 = *unaff_x22;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
}


