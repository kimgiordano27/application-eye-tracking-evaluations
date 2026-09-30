/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonTypeReflector$$IsNonSerializable
ENTRY_POINT: 05aca914
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_Serialization_JsonTypeReflector__IsNonSerializable(void)

{
  bool in_ZR;
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 in_w8;
  uint uVar5;
  long in_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar6;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  undefined4 unaff_w27;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined *puVar4;
  
  uVar1 = 0x80000000;
  if (!in_ZR) {
    uVar1 = in_w8;
  }
  *(undefined4 *)(unaff_x19 + 0x20) = uVar1;
  if ((in_x9 == 0) && (unaff_x24 != 0 || in_stack_00000010 != 0)) {
    uVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06facad8);
    FUN_05abd024();
    *in_stack_00000008 = uVar2;
    thunk_FUN_03048534(in_stack_00000008,uVar2);
  }
  uVar2 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06faca58,unaff_w27);
  *unaff_x20 = uVar2;
  thunk_FUN_03048534();
  if (unaff_x21 == 0) {
    thunk_FUN_03037804(PTR_DAT_06f9aa18);
    uVar2 = thunk_FUN_0301080c();
    puVar4 = PTR_DAT_06f9aa20;
  }
  else if (unaff_x22 == 0) {
    thunk_FUN_03037804(PTR_DAT_06f9aa18);
    uVar2 = thunk_FUN_0301080c();
    puVar4 = PTR_DAT_06f9af58;
  }
  else {
    uVar5 = *(uint *)(unaff_x21 + 0x18);
    if (uVar5 == *(uint *)(unaff_x22 + 0x18)) {
      if (0 < (int)uVar5) {
        lVar6 = 0;
        do {
          if (uVar5 <= (uint)lVar6) {
LAB_05acaa50:
                    /* WARNING: Subroutine does not return */
            FUN_02fe94f0();
          }
          if (*(long *)(unaff_x21 + 0x20 + lVar6 * 8) == 0) {
            thunk_FUN_03037804(PTR_DAT_06f9aa18);
            uVar2 = thunk_FUN_0301080c();
            puVar4 = PTR_DAT_06facb28;
            goto LAB_05acaa70;
          }
          if (*(uint *)(unaff_x22 + 0x18) <= (uint)lVar6) goto LAB_05acaa50;
          FUN_05ac8490();
          uVar5 = *(uint *)(unaff_x21 + 0x18);
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < (int)uVar5);
      }
      if (in_stack_00000018 != 0) {
        uVar1 = FUN_059f8624(in_stack_00000018,*(undefined8 *)PTR_DAT_06f9aa08,0);
        thunk_FUN_02fc2c1c();
        *(undefined4 *)(unaff_x19 + 0x28) = uVar1;
        lVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetPropertyName();
        if (lVar6 != 0) {
          FUN_050e29b8();
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    thunk_FUN_03037804(PTR_DAT_06f9aa18);
    uVar2 = thunk_FUN_0301080c();
    puVar4 = PTR_DAT_06facb38;
  }
LAB_05acaa70:
  uVar3 = thunk_FUN_03037804(puVar4);
  FUN_059ed1a0(uVar2,uVar3,0);
  uVar3 = thunk_FUN_03037804(PTR_DAT_06facb30);
                    /* WARNING: Subroutine does not return */
  FUN_02fe93c0(uVar2,uVar3);
}


