/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<LayerMask>$$Deserialize
ENTRY_POINT: 02b2eed0
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_6;telemetry_or_network_hits_6
*/


undefined8 Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__Deserialize(long param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long *plVar6;
  long *unaff_x21;
  long *unaff_x23;
  undefined1 auVar7 [16];
  
  do {
    param_1 = FUN_015c2790(param_1);
    do {
      lVar3 = *unaff_x21;
                    /* try { // try from 02b2eedc to 02c2eee3 has its CatchHandler @ 02b2f558 */
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == param_1) {
                    /* try { // try from 02b2ef1c to 02c2ef27 has its CatchHandler @ 02b2f54c */
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_02b2ef20;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
                    /* try { // try from 02b2ef08 to 02c2ef17 has its CatchHandler @ 02b2f550 */
      puVar2 = (undefined8 *)FUN_015c2a80(unaff_x21,param_1,0);
LAB_02b2ef20:
                    /* try { // try from 02b2ef28 to 02c2f033 has its CatchHandler @ 02b2ec8c */
      auVar7 = (*(code *)*puVar2)(unaff_x21,puVar2[1]);
      if ((unaff_x19[5] == 0) ||
         (uVar4 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50) + 8))
                            (unaff_x19[5],auVar7._0_8_,auVar7._8_8_), (uVar4 & 1) != 0)) {
        if (unaff_x19[6] != 0) {
          uVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 8))
                            (unaff_x19[6],auVar7._0_8_,auVar7._8_8_);
          *(undefined2 *)(unaff_x19 + 3) = uVar1;
          return 1;
        }
Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__Sirenix_Serialization_IFormatter_Serialize:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      plVar6 = (long *)unaff_x19[7];
      if (plVar6 == (long *)0x0)
      goto 
      Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__Sirenix_Serialization_IFormatter_Serialize
      ;
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_02b2eea0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80(plVar6,*unaff_x23,0);
LAB_02b2eea0:
      uVar4 = (*(code *)*puVar2)(plVar6,puVar2[1]);
      if ((uVar4 & 1) == 0) {
        if (unaff_x19 != (long *)0x0) {
          (**(code **)(*unaff_x19 + 0x1f8))();
          return 0;
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
      param_1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
    } while ((*(byte *)(param_1 + 0x132) & 1) != 0);
  } while( true );
}


