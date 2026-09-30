/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureArrayContract
ENTRY_POINT: 0177e8ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureArrayContract(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  int unaff_w21;
  int iVar3;
  long lVar4;
  long unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long in_stack_00000098;
  
  uVar1 = FUN_00bd738c();
  if ((uVar1 & 1) == 0) {
    lVar4 = *(long *)(unaff_x19 + 0x78);
    if (*(char *)(unaff_x27 + 0x618) == '\0') {
      thunk_FUN_00d48444(PTR_DAT_033ee010);
      *(undefined1 *)(unaff_x27 + 0x618) = 1;
    }
    iVar3 = 0;
    if (lVar4 != 0) {
      FUN_015fd038(lVar4,0);
      iVar3 = *(int *)(lVar4 + 0x10);
    }
    if (*(char *)(unaff_x26 + 0xaee) == '\0') {
      thunk_FUN_00d48444(PTR_DAT_033eb120);
      thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
      *(undefined1 *)(unaff_x26 + 0xaee) = 1;
    }
    if ((unaff_w21 == iVar3) && ((unaff_w21 == 0 || (uVar1 = FUN_00bd738c(), (uVar1 & 1) != 0)))) {
      uVar2 = 0xfff0000000000000;
    }
    else {
      lVar4 = *(long *)(unaff_x19 + 0x68);
      if (*(char *)(unaff_x27 + 0x618) == '\0') {
        thunk_FUN_00d48444(PTR_DAT_033ee010);
        *(undefined1 *)(unaff_x27 + 0x618) = 1;
      }
      iVar3 = 0;
      if (lVar4 != 0) {
        FUN_015fd038(lVar4,0);
        iVar3 = *(int *)(lVar4 + 0x10);
      }
      if (*(char *)(unaff_x26 + 0xaee) == '\0') {
        thunk_FUN_00d48444(PTR_DAT_033eb120);
        thunk_FUN_00d48444(UnityEngine_UIElements_VisualElement___TypeInfo);
        *(undefined1 *)(unaff_x26 + 0xaee) = 1;
      }
      if ((unaff_w21 != iVar3) || ((unaff_w21 != 0 && (uVar1 = FUN_00bd738c(), (uVar1 & 1) == 0))))
      {
        FUN_00acb0a4(*unaff_x25);
                    /* WARNING: Subroutine does not return */
        FUN_0177b870(0,0);
      }
      uVar2 = 0x7ff8000000000000;
    }
  }
  else {
    uVar2 = 0x7ff0000000000000;
  }
  if (*(long *)(unaff_x24 + 0x28) != in_stack_00000098) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


