/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasCreatorParameter
ENTRY_POINT: 01bc8408
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasCreatorParameter(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x20;
  undefined1 auVar6 [16];
  
  auVar6 = FUN_051e0500();
  lVar3 = auVar6._0_8_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = auVar6._8_8_;
  auVar6 = auVar1 << 0x40;
  if ((lVar3 != 0) &&
     (auVar6 = thunk_FUN_015d0480(lVar3,*(undefined8 *)(*unaff_x20 + 0x40)), auVar6._0_8_ == 0)) {
LAB_01bc84e0:
    uVar4 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar4,0);
  }
  puVar2 = PTR_DAT_06e13080;
  if (3 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20[7] = lVar3;
    lVar3 = thunk_FUN_01656ef8(unaff_x20 + 7,lVar3);
    lVar5 = *(long *)puVar2;
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      lVar3 = thunk_FUN_015d0480(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_01bc84e0;
      lVar5 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_06e52cd8;
    auVar6._8_8_ = lVar5;
    auVar6._0_8_ = lVar3;
    if (4 < *(uint *)(unaff_x20 + 3)) {
      unaff_x20[8] = lVar5;
      thunk_FUN_01656ef8();
      uVar4 = FUN_02527034();
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_016466fc(*(long *)puVar2);
      }
      FUN_0486672c(uVar4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc(auVar6._0_8_,auVar6._8_8_);
}


