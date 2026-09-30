/*
FUNCTION_NAME: FUN_058ccfa0
ENTRY_POINT: 058ccfa0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_058ccfa0(long param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  lVar4 = param_1;
  if ((DAT_06bc13fc & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cafa0);
    FUN_02f08768(PTR_DAT_067cc628);
    FUN_02f08768(PTR_DAT_067da328);
    FUN_02f08768(PTR_DAT_067d7230);
    FUN_02f08768(Method_System_Collections_Generic_List<List<InputBinding>>__ctor__);
    lVar4 = FUN_02f08768(Method_System_Collections_Generic_List<OVRTask<OVRPlugin_Result>>_Add__);
    DAT_06bc13fc = 1;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 - 2U < 2) {
    uVar6 = FUN_058ca0c8(lVar4,*(undefined8 *)(param_1 + 0x18));
    return uVar6;
  }
  puVar8 = (undefined8 *)Method_System_Collections_Generic_List<List<InputBinding>>__ctor__;
  if (iVar1 != 4) {
    if (iVar1 != 1) {
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar5 = FUN_04f6dc3c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),
                             *(undefined8 *)PTR_DAT_067d7230,0);
        if ((uVar5 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
          FUN_04f77e78(plVar7,0);
          puVar3 = PTR_DAT_067da328;
          puVar2 = PTR_DAT_067cc628;
          lVar4 = *(long *)(param_1 + 0x28);
          if (lVar4 != 0) {
            uVar5 = 0;
            do {
              if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar5) {
                if ((param_2 & 1) == 0) {
                  if (plVar7 == (long *)0x0) break;
                }
                else {
                  uVar6 = FUN_0511a510(0);
                  if (plVar7 == (long *)0x0) break;
                  FUN_04f79730(plVar7,uVar6,0);
                }
                    /* WARNING: Could not recover jumptable at 0x058cd1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
                return uVar6;
              }
              if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089d0();
              }
              uVar6 = FUN_0505a384(lVar4 + uVar5 + 0x20,*(undefined8 *)puVar3,0);
              if (plVar7 == (long *)0x0) break;
              FUN_04f79730(plVar7,uVar6,0);
              lVar4 = *(long *)(param_1 + 0x28);
              if (lVar4 == 0) break;
              if (uVar5 != *(int *)(lVar4 + 0x18) - 1) {
                FUN_04f79730(plVar7,*(undefined8 *)puVar2,0);
                lVar4 = *(long *)(param_1 + 0x28);
              }
              uVar5 = uVar5 + 1;
            } while (lVar4 != 0);
          }
        }
        else if (*(long *)(param_1 + 0x10) != 0) {
          uVar6 = FUN_04f65e2c(*(undefined8 *)
                                Method_System_Collections_Generic_List<OVRTask<OVRPlugin_Result>>_Add__
                               ,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),0);
          return uVar6;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    puVar8 = *(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
  }
  return *puVar8;
}


