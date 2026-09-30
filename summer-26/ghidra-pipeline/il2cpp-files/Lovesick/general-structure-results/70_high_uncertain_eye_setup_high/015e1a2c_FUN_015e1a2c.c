/*
FUNCTION_NAME: FUN_015e1a2c
ENTRY_POINT: 015e1a2c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_015e1a2c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  if ((DAT_03777f68 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_95_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3600);
    thunk_FUN_00d48444(StringLiteral_498);
    DAT_03777f68 = 1;
  }
  puVar3 = StringLiteral_498;
  puVar2 = OVRPlugin_OVRP_1_95_0_TypeInfo;
  puVar1 = PTR_DAT_033f3600;
  iVar8 = 0x100;
  local_48 = 0;
  while( true ) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar9 = *(long *)puVar2;
    lVar5 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar5 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
    }
    plVar6 = (long *)**(long **)(lVar5 + 0xb8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar5 = (**(code **)(*plVar6 + 0x178))(plVar6,iVar8,*(undefined8 *)(*plVar6 + 0x180));
    local_58 = 0;
    local_50 = &local_48;
    local_48 = lVar5;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    iVar4 = FUN_015e19e0(param_1,lVar5,*(undefined4 *)(lVar5 + 0x18));
    if (iVar4 < 0) break;
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (iVar4 < *(int *)(local_48 + 0x18)) {
      plVar6 = (long *)FUN_0161b700(0);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar7 = (**(code **)(*plVar6 + 0x378))
                        (plVar6,local_48,0,iVar4,*(undefined8 *)(*plVar6 + 0x380));
LAB_015e1bfc:
      FUN_00bd58f8(&local_58);
      return uVar7;
    }
    FUN_00bd58f8(&local_58);
    iVar8 = iVar8 << 1;
  }
  uVar7 = 0;
  goto LAB_015e1bfc;
}


