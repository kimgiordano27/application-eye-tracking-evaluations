/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ThrowUnexpectedEndException
ENTRY_POINT: 0329d160
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ThrowUnexpectedEndException
               (undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  int unaff_w23;
  undefined1 unaff_w25;
  undefined8 *unaff_x26;
  
  do {
    plVar3 = (long *)thunk_FUN_01c496e0(param_1);
    FUN_0329cc3c(plVar3,unaff_w23,unaff_w20 & 1);
    unaff_w23 = unaff_w23 + 1;
    if (plVar3 == (long *)0x0) {
      *(undefined1 *)(unaff_x19 + 0x20) = unaff_w25;
LAB_0329d18c:
      uVar4 = FUN_02d51a80();
      *(undefined8 *)(unaff_x19 + 0x10) = uVar4;
      return;
    }
    uVar4 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
    uVar2 = FUN_032104c4(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x20) = unaff_w25;
      if (unaff_x21 == 0) {
LAB_0329d1bc:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      goto LAB_0329d18c;
    }
    if (unaff_x21 == 0) goto LAB_0329d1bc;
    lVar5 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_0329d1bc;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(long **)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = plVar3;
    }
    else {
      FUN_02d5004c();
    }
    param_1 = *unaff_x26;
  } while( true );
}


