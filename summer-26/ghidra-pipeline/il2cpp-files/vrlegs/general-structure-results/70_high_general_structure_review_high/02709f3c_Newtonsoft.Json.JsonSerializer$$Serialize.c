/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Serialize
ENTRY_POINT: 02709f3c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_JsonSerializer__Serialize(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 in_x9;
  undefined8 *in_x10;
  long *unaff_x19;
  undefined8 uVar3;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000010 = *in_x10;
  uStack0000000000000000 = param_1;
  uStack0000000000000008 = in_x9;
  FUN_02706d30(param_2,param_3,0x778,7,0x1e,0x777,1,0xf);
  if ((param_2 != 0) &&
     (lVar1 = thunk_FUN_01a89d6c(param_2,*(undefined8 *)(*unaff_x19 + 0x40)), lVar1 == 0)) {
LAB_0270a08c:
    uVar3 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar3,0);
  }
  if (3 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[7] = param_2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 7,param_2);
    lVar1 = thunk_FUN_01a89e68(*unaff_x22);
    uStack0000000000000000 = *(undefined8 *)PTR_DAT_03cf8068;
    uStack0000000000000008 = *(undefined8 *)PTR_DAT_03cf8048;
    uStack0000000000000010 = *(undefined8 *)PTR_DAT_03cc4180;
    FUN_02706d30(lVar1,1,0x74c,1,1,0x74b,1,0x2d);
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_01a89d6c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar2 == 0))
    goto LAB_0270a08c;
    if (4 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[8] = lVar1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 8,lVar1);
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      thunk_FUN_01a4b338();
      *(long **)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar1 = *unaff_x21;
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar1 = *unaff_x21;
      }
      uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 8);
      thunk_FUN_01a4b338();
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


