/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<LayerMask>$$get_SerializedType
ENTRY_POINT: 02b2ee6c
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_6;telemetry_or_network_hits_6
*/


undefined8
Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__get_SerializedType
          (long param_1,undefined8 param_2,long param_3)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar7;
  long *unaff_x23;
  undefined1 auVar8 [16];
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_02b2eea0;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_015c2a80(unaff_x21,param_3,0);
LAB_02b2eea0:
      uVar3 = (*(code *)*puVar2)(unaff_x21,puVar2[1]);
      if ((uVar3 & 1) == 0) {
        if (unaff_x19 != (long *)0x0) {
          (**(code **)(*unaff_x19 + 0x1f8))();
          return 0;
        }
Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__Sirenix_Serialization_IFormatter_Serialize:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      plVar7 = (long *)unaff_x19[7];
      if (plVar7 == (long *)0x0)
      goto 
      Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__Sirenix_Serialization_IFormatter_Serialize
      ;
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        lVar4 = FUN_015c2790(lVar4);
      }
      lVar5 = *plVar7;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_02b2ef20;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80(plVar7,lVar4,0);
LAB_02b2ef20:
      auVar8 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      if ((unaff_x19[5] == 0) ||
         (uVar3 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50) + 8))
                            (unaff_x19[5],auVar8._0_8_,auVar8._8_8_), (uVar3 & 1) != 0)) {
        if (unaff_x19[6] != 0) {
          uVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 8))
                            (unaff_x19[6],auVar8._0_8_,auVar8._8_8_);
          *(undefined2 *)(unaff_x19 + 3) = uVar1;
          return 1;
        }
        goto 
        Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__Sirenix_Serialization_IFormatter_Serialize
        ;
      }
      unaff_x21 = (long *)unaff_x19[7];
      if (unaff_x21 == (long *)0x0)
      goto 
      Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__Sirenix_Serialization_IFormatter_Serialize
      ;
      param_1 = *unaff_x21;
      param_3 = *unaff_x23;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12a);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
}


