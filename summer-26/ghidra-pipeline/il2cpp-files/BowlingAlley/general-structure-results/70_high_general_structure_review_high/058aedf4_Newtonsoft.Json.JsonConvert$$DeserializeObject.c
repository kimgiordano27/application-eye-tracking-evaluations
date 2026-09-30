/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject
ENTRY_POINT: 058aedf4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeObject(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  lVar5 = FUN_059324dc(*unaff_x23,0);
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0)) {
LAB_058aefdc:
    uVar7 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar7,0);
  }
  puVar1 = PTR_DAT_072898c0;
  if (0xf < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[0x13] = lVar5;
    thunk_FUN_0333a630(unaff_x19 + 0x13,lVar5);
    lVar5 = FUN_059324dc(*(undefined8 *)puVar1,0);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
    goto LAB_058aefdc;
    if (0x10 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[0x14] = lVar5;
      thunk_FUN_0333a630(unaff_x19 + 0x14,lVar5);
      lVar5 = FUN_059324dc(*unaff_x22,0);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
      goto LAB_058aefdc;
      puVar1 = PTR_DAT_072813d0;
      if (0x11 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[0x15] = lVar5;
        thunk_FUN_0333a630(unaff_x19 + 0x15,lVar5);
        lVar5 = FUN_059324dc(*(undefined8 *)puVar1,0);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_032a55a4(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
        goto LAB_058aefdc;
        puVar4 = PTR_DAT_07296cc8;
        puVar3 = PTR_DAT_07294ff0;
        puVar2 = PTR_DAT_0728ab88;
        puVar1 = PTR_DAT_0727f228;
        if (0x12 < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[0x16] = lVar5;
          thunk_FUN_0333a630(unaff_x19 + 0x16,lVar5);
          *(long **)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
          thunk_FUN_0333a630();
          uVar7 = FUN_059324dc(*(undefined8 *)puVar2,0);
          puVar8 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
          *puVar8 = uVar7;
          thunk_FUN_0333a630(puVar8,uVar7);
          uVar7 = FUN_032d5d3c(*(undefined8 *)puVar1,0x41);
          FUN_058505e4(uVar7,*(undefined8 *)puVar4,0);
          puVar8 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x18);
          *puVar8 = uVar7;
          thunk_FUN_0333a630(puVar8,uVar7);
          lVar5 = *(long *)puVar3;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar5 = *(long *)puVar3;
          }
          *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x20) = **(undefined8 **)(lVar5 + 0xb8);
          thunk_FUN_0333a630();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


