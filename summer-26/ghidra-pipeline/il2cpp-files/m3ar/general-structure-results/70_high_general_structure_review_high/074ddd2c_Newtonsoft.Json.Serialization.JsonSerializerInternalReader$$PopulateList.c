/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateList
ENTRY_POINT: 074ddd2c
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateList(ulong param_1)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  int iStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000028;
  
  *(short *)(unaff_x19 + 4) = (short)(in_stack_00000028 >> 0x20);
  if ((param_1 & 1) != 0) {
    if ((*(ushort *)(*(long *)(*unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    in_stack_00000028 = 0;
    *(undefined2 *)(unaff_x19 + 6) = 0;
    uVar1 = FUN_074de3bc(unaff_x21 + 0x18,4,&stack0x00000028,0xffffffff,0x1000,
                         (long)&stack0x00000028 + 4);
    *(short *)(unaff_x19 + 6) = (short)(in_stack_00000028 >> 0x20);
    if ((uVar1 & 1) != 0) {
      if ((*(ushort *)(*(long *)(*unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_0406aaec();
      }
      in_stack_00000028 = in_stack_00000028 & 0xffffffff;
      uVar1 = FUN_074de3bc(unaff_x21 + 0x20,4,(long)&stack0x00000028 + 4,0xffffffff,0x1000,
                           (long)&stack0x00000018 + 4);
      if ((uVar1 & 1) != 0) {
        iStack000000000000000c = 0x14;
        uVar1 = FUN_074de26c();
        if ((uVar1 & 1) != 0) {
          if (iStack000000000000000c == 0x20) {
            *(char *)(unaff_x19 + 0xf) = (char)in_stack_00000010;
            *(char *)(unaff_x19 + 10) = (char)((ulong)in_stack_00000010 >> 0x28);
            *(char *)(unaff_x19 + 0xb) = (char)((ulong)in_stack_00000010 >> 0x20);
            *(char *)(unaff_x19 + 0xc) = (char)((ulong)in_stack_00000010 >> 0x18);
            *(char *)(unaff_x19 + 0xd) = (char)((ulong)in_stack_00000010 >> 0x10);
            *(ushort *)(unaff_x19 + 8) = in_stack_00000018._4_2_ >> 8 | in_stack_00000018._4_2_ << 8
            ;
            *(char *)(unaff_x19 + 0xe) = (char)((ulong)in_stack_00000010 >> 8);
            return 1;
          }
          FUN_074ddea8();
        }
      }
    }
  }
  return 0;
}


