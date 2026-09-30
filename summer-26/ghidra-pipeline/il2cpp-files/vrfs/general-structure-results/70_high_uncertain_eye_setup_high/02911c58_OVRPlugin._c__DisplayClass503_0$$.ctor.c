/*
FUNCTION_NAME: OVRPlugin.<>c__DisplayClass503_0$$.ctor
ENTRY_POINT: 02911c58
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c__DisplayClass503_0___ctor(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  puVar1 = PTR_DAT_06da5688;
  if (param_1 == 0) {
    plVar2 = (long *)thunk_FUN_015d0480(*(undefined8 *)(unaff_x20 + 0x10),
                                        *(undefined8 *)PTR_DAT_06da5688);
    if (plVar2 == (long *)0x0) {
      lVar5 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e406b0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_02d76b34(lVar5,0);
      FUN_01600498();
    }
    else {
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_02911cfc;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_015c2a80(plVar2,*(long *)puVar1,2);
LAB_02911cfc:
      uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      *unaff_x19 = uVar4;
      thunk_FUN_01656ef8();
    }
  }
  return *unaff_x19;
}


