/*
FUNCTION_NAME: FUN_058bf5b0
ENTRY_POINT: 058bf5b0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_058bf5b0(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  if ((DAT_06bc1376 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cafa0);
    FUN_02f08768(PTR_DAT_067d4e98);
    FUN_02f08768(PTR_DAT_067d4ea0);
    FUN_02f08768(PTR_DAT_067d4ea8);
    FUN_02f08768(PTR_DAT_067cfec0);
    FUN_02f08768(PTR_DAT_067ca128);
    FUN_02f08768(PTR_DAT_067d4eb0);
    FUN_02f08768(Method_System_Collections_Generic_List<List<InputBinding>>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRTask<OVRPlugin_Result>>_Add__);
    FUN_02f08768(PTR_DAT_067d4dc0);
    DAT_06bc1376 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (1 < iVar1 - 2U) {
    puVar5 = (undefined8 *)Method_System_Collections_Generic_List<List<InputBinding>>__ctor__;
    if (iVar1 != 4) {
      if (iVar1 != 1) {
        if (*(long *)(param_1 + 0x10) != 0) {
          uVar2 = FUN_04f6dc3c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),
                               *(undefined8 *)PTR_DAT_067d4dc0,0);
          if ((uVar2 & 1) == 0) {
            plVar4 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
            FUN_04f77e78(plVar4,0);
            if (plVar4 != (long *)0x0) {
              FUN_04f79730(plVar4,*(undefined8 *)PTR_DAT_067d4e98,0);
              puVar5 = (undefined8 *)PTR_DAT_067d4eb0;
              if (*(char *)(param_1 + 0x21) != '\0') {
                puVar5 = (undefined8 *)PTR_DAT_067d4ea0;
              }
              FUN_04f79730(plVar4,*puVar5,0);
              if ((param_2 & 1) == 0) {
                uVar3 = *(undefined8 *)PTR_DAT_067ca128;
              }
              else {
                uVar3 = FUN_0511a510(0);
              }
              FUN_04f79730(plVar4,uVar3,0);
              FUN_04f79730(plVar4,*(undefined8 *)PTR_DAT_067d4ea8,0);
              if (*(char *)(param_1 + 0x22) == '\0') {
                FUN_04f79730(plVar4,*(undefined8 *)PTR_DAT_067cfec0,0);
              }
              else {
                FUN_04f7a5f0(plVar4,*(undefined4 *)(param_1 + 0x24),0);
              }
              if ((param_2 & 1) != 0) {
                uVar3 = FUN_0511a510(0);
                FUN_04f79730(plVar4,uVar3,0);
              }
                    /* WARNING: Could not recover jumptable at 0x058bf7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar3 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
              return uVar3;
            }
          }
          else if (*(long *)(param_1 + 0x10) != 0) {
            uVar3 = FUN_04f65e2c(*(undefined8 *)
                                  Method_System_Collections_Generic_List<OVRTask<OVRPlugin_Result>>_Add__
                                 ,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),0);
            return uVar3;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      puVar5 = *(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
    }
    return *puVar5;
  }
  uVar3 = FUN_058ca0c8(param_1,*(undefined8 *)(param_1 + 0x18),0);
  return uVar3;
}


