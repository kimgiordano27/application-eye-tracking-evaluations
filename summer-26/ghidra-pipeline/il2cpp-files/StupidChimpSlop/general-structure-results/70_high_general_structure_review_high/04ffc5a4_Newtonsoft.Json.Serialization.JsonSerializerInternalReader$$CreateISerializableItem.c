/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializableItem
ENTRY_POINT: 04ffc5a4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04ffc73c) */

undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializableItem(ulong param_1)

{
  ushort uVar1;
  undefined *puVar2;
  short sVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  ulong in_stack_00000028;
  
  do {
    sVar3 = FUN_04f74cf0(param_1,0);
    puVar2 = PTR_DAT_06656310;
    if (5 < (ushort)(sVar3 - 0x41U)) {
LAB_04ffc79c:
      FUN_04ffc7d4();
      return 0;
    }
    do {
      unaff_x24 = unaff_x24 + 2;
      if (unaff_x24 == 0x40) {
        if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_06656310 + 0x20) + 0x135) & 1) == 0) {
          FUN_02d8720c();
        }
        in_stack_00000028 = in_stack_00000028 & 0xffffffff;
        uVar4 = FUN_04ffcd54();
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
          FUN_02d8720c();
        }
        in_stack_00000028 = 0;
        *(undefined2 *)(unaff_x19 + 4) = 0;
        uVar4 = FUN_04ffcd54(unaff_x21 + 0x10,4,&stack0x00000028,0xffffffff,0x1000,
                             (long)&stack0x00000028 + 4);
        *(short *)(unaff_x19 + 4) = (short)(in_stack_00000028 >> 0x20);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
          FUN_02d8720c();
        }
        in_stack_00000028 = 0;
        *(undefined2 *)(unaff_x19 + 6) = 0;
        uVar4 = FUN_04ffcd54(unaff_x21 + 0x18,4,&stack0x00000028,0xffffffff,0x1000,
                             (long)&stack0x00000028 + 4);
        *(short *)(unaff_x19 + 6) = (short)(in_stack_00000028 >> 0x20);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
          FUN_02d8720c();
        }
        in_stack_00000028 = in_stack_00000028 & 0xffffffff;
        uVar4 = FUN_04ffcd54(unaff_x21 + 0x20,4,(long)&stack0x00000028 + 4,0xffffffff,0x1000,
                             &stack0x0000001c);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        uVar4 = FUN_04ffcbf8();
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        goto LAB_04ffc79c;
      }
      uVar1 = *(ushort *)(unaff_x21 + unaff_x24);
    } while (uVar1 - 0x30 < 10);
    if (*(int *)(*(long *)(unaff_x23 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    param_1 = (ulong)(uint)uVar1;
  } while( true );
}


