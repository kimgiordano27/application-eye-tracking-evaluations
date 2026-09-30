/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$.ctor
ENTRY_POINT: 04f2884c
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase___ctor(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  bool in_ZR;
  ulong uVar3;
  undefined8 uVar4;
  int in_w8;
  long in_x9;
  undefined1 (*unaff_x19) [16];
  uint unaff_w22;
  int unaff_w23;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  puVar2 = PTR_DAT_065c9808;
  if ((in_ZR) || (unaff_w23 == 0x22)) {
    uVar6 = (ulong)(in_w8 - 2);
    uVar1 = *(undefined2 *)(in_x9 + uVar6 * 2);
    if (*(int *)(*(long *)PTR_DAT_065c9808 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar3 = System_Threading_LockQueue__get_IsEmpty(uVar1,0);
    if ((uVar3 & 1) != 0) {
      do {
        uVar6 = uVar6 - 1;
        unaff_w22 = unaff_w22 - 1;
        if ((int)unaff_w22 < 1) {
          unaff_w22 = 0;
          break;
        }
        if (*(uint *)(*unaff_x19 + 8) <= uVar6) goto LAB_04f2899c;
        uVar1 = *(undefined2 *)(*(long *)*unaff_x19 + uVar6 * 2);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar3 = System_Threading_LockQueue__get_IsEmpty(uVar1,0);
      } while ((uVar3 & 1) != 0);
      uVar4 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065ce570,unaff_w22 + 1);
      auVar7 = FUN_03fc240c(uVar4,*(undefined8 *)PTR_DAT_065f1aa0);
      if (auVar7._8_4_ <= unaff_w22) {
LAB_04f2899c:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      *(short *)(auVar7._0_8_ + (ulong)unaff_w22 * 2) = (short)unaff_w23;
      lVar5 = *(long *)PTR_DAT_065f6940;
      if (*(uint *)(*unaff_x19 + 8) < unaff_w22) {
        FUN_04f51680(0);
      }
      if ((*(byte *)(*(long *)(lVar5 + 0x20) + 0x135) & 1) == 0) {
        FUN_02ce0978();
      }
      FUN_03f4bc78();
      auVar7 = FUN_03fc1fe8(auVar7._0_8_,auVar7._8_8_,*(undefined8 *)PTR_DAT_065f0fd0);
      *unaff_x19 = auVar7;
    }
  }
  return;
}


