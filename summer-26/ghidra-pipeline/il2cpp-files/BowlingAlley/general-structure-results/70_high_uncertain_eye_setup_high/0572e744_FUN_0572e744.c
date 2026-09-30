/*
FUNCTION_NAME: FUN_0572e744
ENTRY_POINT: 0572e744
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0572e744(long param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
                    /* try { // try from 0572e75c to 0582e7bf has its CatchHandler @ 0572e874 */
  if ((DAT_076d4232 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727a1d0);
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(PTR_DAT_07279558);
    thunk_FUN_032e1da0(PTR_DAT_0728e1e8);
    thunk_FUN_032e1da0(PTR_DAT_0728e190);
    thunk_FUN_032e1da0(PTR_DAT_0727a1f0);
    thunk_FUN_032e1da0(PTR_DAT_0728e1f0);
    thunk_FUN_032e1da0(PTR_DAT_0728e1f8);
    thunk_FUN_032e1da0(PTR_DAT_0728e200);
    thunk_FUN_032e1da0(PTR_DAT_0728e208);
    thunk_FUN_032e1da0(PTR_DAT_0728e210);
    DAT_076d4232 = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar2 = FUN_057ab1f0(param_2[5],0);
    if ((uVar2 & 1) == 0) {
      lVar3 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728e1f8);
      FUN_059660a0(lVar3,0);
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x18) = param_1;
        thunk_FUN_0333a630((long *)(lVar3 + 0x18),param_1);
        *(long *)(lVar3 + 0x10) = param_2[5];
        thunk_FUN_0333a630();
        lVar4 = FUN_05dbdee8(0);
        uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727a1d0);
        FUN_04bf4290(uVar5,lVar3,*(undefined8 *)PTR_DAT_0728e1f0,0);
        if (lVar4 != 0) {
          FUN_0498244c(lVar4,uVar5,*(undefined8 *)PTR_DAT_0727a1f0);
          return;
        }
      }
    }
    else {
      uVar5 = *(undefined8 *)PTR_DAT_0728e208;
      uVar2 = OVRPlugin_OVRP_1_58_0___cctor(param_2,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
        if (lVar3 == 0) goto System_Runtime_Serialization_ObjectHolder__get_DependentObjects;
        local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(lVar3 + 0x10));
        uVar5 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_07279558,&local_50);
        uVar5 = FUN_057ab61c(*(undefined8 *)PTR_DAT_0728e200,uVar5,*(undefined8 *)(lVar3 + 0x18),0);
      }
      if (DAT_076d4284 == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_0728e190);
        DAT_076d4284 = '\x01';
      }
      puVar1 = PTR_DAT_0728e190;
      **(undefined4 **)(*(long *)PTR_DAT_0728e190 + 0xb8) = 3;
      uVar5 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0728e210,uVar5,0);
      if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
      }
      FUN_06bb2a00(uVar5,0);
      lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      *(undefined1 *)(lVar4 + 8) = 0;
      local_40 = *(undefined8 *)(lVar4 + 0x18);
      lVar3 = *(long *)(param_1 + 0x10);
      uStack_48 = *(undefined8 *)(lVar4 + 0x10);
      if (lVar3 != 0) {
        local_50 = *(undefined8 *)(lVar4 + 8);
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),&local_50,*(undefined8 *)(lVar3 + 0x28));
        return;
      }
    }
  }
System_Runtime_Serialization_ObjectHolder__get_DependentObjects:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


