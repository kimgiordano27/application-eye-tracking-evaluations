/*
FUNCTION_NAME: FUN_059667ec
ENTRY_POINT: 059667ec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3
*/


void FUN_059667ec(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((DAT_066d37b8 & 1) == 0) {
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<ContactPairHeader>_AsReadOnly__);
    FUN_02b3c81c(Method_Pico_Platform_Task<SessionMedia>__ctor__);
    DAT_066d37b8 = 1;
  }
  if (DAT_066c1e91 == '\0') {
    FUN_02b3c81c(PTR_DAT_063132f8);
    DAT_066c1e91 = '\x01';
  }
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar3 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_063132f8 + 0xb8) + 8);
    uVar4 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_063132f8 + 0xb8) + 0xc);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<ContactPairHeader>_AsReadOnly__ +
                0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_058654c8(uVar3,uVar4,0,0,param_1,param_3,uVar2,0,0);
    puVar1 = Method_Pico_Platform_Task<SessionMedia>__ctor__;
    if (param_1 != 0) {
      FUN_057f8178(param_1,*(undefined8 *)
                            (*(long *)Method_Pico_Platform_Task<SessionMedia>__ctor__ + 0xb8),0,0);
      FUN_057f8178(param_1,*(long *)(*(long *)puVar1 + 0xb8) + 4,0,0);
      FUN_057f8178(param_1,*(long *)(*(long *)puVar1 + 0xb8) + 8,1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


