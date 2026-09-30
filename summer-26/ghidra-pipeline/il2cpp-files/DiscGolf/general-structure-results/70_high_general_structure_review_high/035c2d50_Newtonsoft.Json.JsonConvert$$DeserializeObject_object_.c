/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeObject<object>
ENTRY_POINT: 035c2d50
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonConvert__DeserializeObject<object>
                (long param_1,undefined1 *param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_w9;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  do {
    uStack0000000000000004 = in_w9;
    uVar2 = FUN_05f332a0(param_2,param_3,*(undefined8 *)(param_1 + 0x20));
    _uStack0000000000000000 = CONCAT44(uStack0000000000000004,uVar2);
    iVar3 = FUN_05504eb0();
    if (iVar3 < 1) {
      if ((int)unaff_x22 <= (int)unaff_x23) {
        return unaff_x22 & 0xffffffff;
      }
      *(undefined4 *)
       (unaff_x20 + (-(unaff_x22 >> 0x1f & 1) & 0xfffffffc00000000 | (unaff_x22 & 0xffffffff) << 2))
           = uStack000000000000000c;
      *(undefined4 *)(unaff_x20 + unaff_x24) = uStack0000000000000004;
      _uStack0000000000000008 = 0;
      do {
        uVar1 = (int)unaff_x23 + 1;
        unaff_x23 = (ulong)uVar1;
        uStack000000000000000c = *(undefined4 *)(unaff_x20 + (long)(int)uVar1 * 4);
        uVar2 = FUN_05f332a0(&stack0x0000001c,(long)&stack0x00000008 + 4,
                             *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20));
        _uStack0000000000000008 = CONCAT44(uStack000000000000000c,uVar2);
        iVar3 = FUN_05504eb0(&stack0x00000008,unaff_w21,
                             *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x40));
      } while (iVar3 < 0);
      unaff_x24 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | unaff_x23 << 2;
      _uStack0000000000000000 = 0;
    }
    param_1 = *(long *)(unaff_x19 + 0x38);
    uVar1 = (int)unaff_x22 - 1;
    unaff_x22 = (ulong)uVar1;
    param_2 = &stack0x0000001c;
    in_w9 = *(undefined4 *)(unaff_x20 + (long)(int)uVar1 * 4);
    param_3 = (long)&stack0x00000000 + 4;
  } while( true );
}


