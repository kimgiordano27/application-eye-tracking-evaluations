/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Keyframe>$$.cctor
ENTRY_POINT: 02b2edac
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4
*/


undefined8 Sirenix_Serialization_MinimalBaseFormatter<Keyframe>___cctor(void)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  long lVar3;
  int in_w8;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long *plVar7;
  long *unaff_x23;
  undefined1 auVar8 [16];
  
  if (in_w8 != 1) {
    return 0;
  }
  plVar7 = (long *)unaff_x19[4];
  if (plVar7 != (long *)0x0) {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_015c2790(lVar3);
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02b2ee24;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_015c2a80(plVar7,lVar3,0);
LAB_02b2ee24:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    unaff_x19[7] = lVar3;
    thunk_FUN_01656ef8(unaff_x19 + 7,lVar3);
    *(undefined4 *)((long)unaff_x19 + 0x14) = 2;
    do {
      plVar7 = (long *)unaff_x19[7];
      if (plVar7 == (long *)0x0)
      goto 
      Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__Sirenix_Serialization_IFormatter_Serialize
      ;
      lVar3 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_02b2eea0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80(plVar7,*unaff_x23,0);
LAB_02b2eea0:
      uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      if ((uVar5 & 1) == 0) {
        if (unaff_x19 != (long *)0x0) {
          (**(code **)(*unaff_x19 + 0x1f8))();
          return 0;
        }
        goto 
        Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__Sirenix_Serialization_IFormatter_Serialize
        ;
      }
      plVar7 = (long *)unaff_x19[7];
      if (plVar7 == (long *)0x0)
      goto 
      Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__Sirenix_Serialization_IFormatter_Serialize
      ;
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_015c2790(lVar3);
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_02b2ef20;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80(plVar7,lVar3,0);
LAB_02b2ef20:
      auVar8 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    } while ((unaff_x19[5] != 0) &&
            (uVar5 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50) +
                                 8))(unaff_x19[5],auVar8._0_8_,auVar8._8_8_), (uVar5 & 1) == 0));
    if (unaff_x19[6] != 0) {
      uVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 8))
                        (unaff_x19[6],auVar8._0_8_,auVar8._8_8_);
      *(undefined2 *)(unaff_x19 + 3) = uVar1;
      return 1;
    }
  }
Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__Sirenix_Serialization_IFormatter_Serialize:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


