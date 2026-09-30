/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$SetupReader
ENTRY_POINT: 04d0a5f0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__SetupReader
               (ulong param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
               ,undefined8 param_6)

{
  undefined *puVar1;
  undefined2 uVar2;
  ulong uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  long unaff_x20;
  int iVar6;
  ulong unaff_x22;
  undefined8 uStack0000000000000000;
  int iStack0000000000000008;
  
  uStack0000000000000000 = param_3;
  _iStack0000000000000008 = param_4;
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0632a038);
    FUN_02b3c81c(PTR_DAT_06329d08);
    FUN_02b3c81c(PTR_DAT_0632f1d0);
    FUN_02b3c81c(PTR_DAT_06329d10);
    *(undefined1 *)(unaff_x20 + 0x4f1) = 1;
  }
  uVar3 = FUN_03deab24();
  puVar1 = PTR_DAT_0632a038;
  if ((uVar3 & 1) == 0) {
    puVar4 = (undefined2 *)
             FUN_03223500(uStack0000000000000000,_iStack0000000000000008,
                          *(undefined8 *)PTR_DAT_06329d08);
    puVar5 = (undefined2 *)FUN_03223504(param_5,param_6,*(undefined8 *)puVar1);
                    /* try { // try from 04d0a684 to 04e0a78f has its CatchHandler @ 04d0a684
                       catch() { ... } // from try @ 04d0a684 with catch @ 04d0a684
                       catch() { ... } // from try @ 04d0a990 with catch @ 04d0a684
                       catch() { ... } // from try @ 04d0aa4c with catch @ 04d0a684
                       catch() { ... } // from try @ 04d0aa98 with catch @ 04d0a684
                       catch() { ... } // from try @ 04d0aaac with catch @ 04d0a684
                       catch() { ... } // from try @ 04d0ab1c with catch @ 04d0a684 */
    if ((unaff_x22 & 1) == 0) {
      if (0 < iStack0000000000000008) {
        iVar6 = 0;
        do {
          uVar2 = (**(code **)(*param_2 + 0x1a8))(param_2,*puVar4,*(undefined8 *)(*param_2 + 0x1b0))
          ;
          iVar6 = iVar6 + 1;
          *puVar5 = uVar2;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar6 < iStack0000000000000008);
      }
    }
    else if (0 < iStack0000000000000008) {
      iVar6 = 0;
      do {
        uVar2 = (**(code **)(*param_2 + 0x1c8))(param_2,*puVar4,*(undefined8 *)(*param_2 + 0x1d0));
        iVar6 = iVar6 + 1;
        *puVar5 = uVar2;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar6 < iStack0000000000000008);
    }
  }
  return;
}


