/*
FUNCTION_NAME: OVRPlugin$$GetControllerState5
ENTRY_POINT: 05d7cd3c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetControllerState5(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  
  puVar2 = PTR_DAT_072b14f8;
  puVar1 = PTR_DAT_0727aa68;
  if ((DAT_076d87db & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072b1500);
    thunk_FUN_032e1da0(PTR_DAT_072aefc0);
    thunk_FUN_032e1da0(PTR_DAT_0727aa68);
    thunk_FUN_032e1da0(PTR_DAT_072b1508);
    thunk_FUN_032e1da0(PTR_DAT_072b1510);
    thunk_FUN_032e1da0(PTR_DAT_072b14f8);
    DAT_076d87db = 1;
  }
  lVar6 = FUN_032d5d3c(*(undefined8 *)puVar1,0x1a);
  lVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  FUN_059660a0(lVar7,0);
  puVar4 = PTR_DAT_072b1510;
  puVar3 = PTR_DAT_072b1508;
  puVar2 = PTR_DAT_072b1500;
  puVar1 = PTR_DAT_072aefc0;
  if (lVar7 != 0) {
    uVar11 = 0;
    *(undefined4 *)(lVar7 + 0x10) = 0;
    while( true ) {
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar8 = *(long *)puVar1;
      }
      uVar10 = **(undefined8 **)(lVar8 + 0xb8);
      uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
      FUN_047a7330(uVar9,lVar7,*(undefined8 *)puVar4,0);
      uVar5 = FUN_03bfc6a8(uVar10,uVar9,*(undefined8 *)puVar2);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      *(undefined4 *)(lVar6 + (long)(int)uVar11 * 4 + 0x20) = uVar5;
      uVar11 = *(int *)(lVar7 + 0x10) + 1;
      *(uint *)(lVar7 + 0x10) = uVar11;
      if (0x19 < (int)uVar11) {
        return lVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


