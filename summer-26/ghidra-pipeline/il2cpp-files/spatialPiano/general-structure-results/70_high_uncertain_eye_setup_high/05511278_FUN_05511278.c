/*
FUNCTION_NAME: FUN_05511278
ENTRY_POINT: 05511278
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_05511278(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  
  if ((DAT_06bbf5b1 & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_86_0_TypeInfo);
    DAT_06bbf5b1 = 1;
  }
  puVar2 = OVRPlugin_OVRP_1_86_0_TypeInfo;
  if ((param_2 != 0) && (lVar5 = *(long *)(param_2 + 0x38), lVar5 != 0)) {
    if (*(uint *)(param_1 + 0x10) < *(uint *)(lVar5 + 0x18)) {
      lVar5 = *(long *)(lVar5 + (long)(int)*(uint *)(param_1 + 0x10) * 8 + 0x20);
      if (lVar5 == 0) {
        *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar10 = *(undefined8 *)OVRPlugin_OVRP_1_86_0_TypeInfo;
      plVar3 = (long *)thunk_FUN_02f45174(lVar5,uVar10);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(lVar5,uVar10);
      }
      uVar1 = *(uint *)(param_2 + 0x48);
      lVar5 = *(long *)puVar2;
      *(uint *)(param_2 + 0x48) = uVar1 + 1;
      plVar9 = *(long **)(param_2 + 0x38);
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05511350;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02f421d0(plVar3,lVar5,0);
LAB_05511350:
      lVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (plVar9 == (long *)0x0) goto LAB_055113a4;
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_02f45174(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0)) {
        uVar10 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar10,0);
      }
      if (uVar1 < *(uint *)(plVar9 + 3)) {
        plVar9[(long)(int)uVar1 + 4] = lVar5;
        return 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
LAB_055113a4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


