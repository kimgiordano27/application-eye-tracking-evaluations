/*
FUNCTION_NAME: FUN_055119ac
ENTRY_POINT: 055119ac
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_055119ac(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  
  if ((DAT_06bbf5ba & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_86_0_TypeInfo);
    DAT_06bbf5ba = 1;
  }
  if ((param_2 != 0) && (lVar6 = *(long *)(param_2 + 0x38), lVar6 != 0)) {
    if (*(uint *)(lVar6 + 0x18) <= *(uint *)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar6 = *(long *)(lVar6 + (long)(int)*(uint *)(param_1 + 0x10) * 8 + 0x20);
    uVar2 = FUN_054fc9fc(param_2,0);
    puVar1 = OVRPlugin_OVRP_1_86_0_TypeInfo;
    if (lVar6 != 0) {
      uVar9 = *(undefined8 *)OVRPlugin_OVRP_1_86_0_TypeInfo;
      lVar3 = thunk_FUN_02f45174(lVar6,uVar9);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(lVar6,uVar9);
      }
      lVar3 = *(long *)puVar1;
      plVar4 = (long *)thunk_FUN_02f45174(lVar6,lVar3);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(lVar6,lVar3);
      }
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar3) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_05511a9c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02f421d0(plVar4,lVar3,1);
LAB_05511a9c:
      (*(code *)*puVar5)(plVar4,uVar2,puVar5[1]);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


