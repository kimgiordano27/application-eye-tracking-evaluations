/*
FUNCTION_NAME: FUN_05511b50
ENTRY_POINT: 05511b50
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


undefined8 FUN_05511b50(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  if ((DAT_06bbf5bc & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_86_0_TypeInfo);
    DAT_06bbf5bc = 1;
  }
  if ((param_2 != 0) && (lVar6 = *(long *)(param_2 + 0x38), lVar6 != 0)) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (*(uint *)(param_1 + 0x10) < uVar1) {
      uVar2 = *(int *)(param_2 + 0x48) - 1;
      lVar11 = *(long *)(lVar6 + (long)(int)*(uint *)(param_1 + 0x10) * 8 + 0x20);
      *(uint *)(param_2 + 0x48) = uVar2;
      puVar3 = OVRPlugin_OVRP_1_86_0_TypeInfo;
      if (uVar2 < uVar1) {
        if (lVar11 != 0) {
          uVar9 = *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
          uVar10 = *(undefined8 *)OVRPlugin_OVRP_1_86_0_TypeInfo;
          lVar6 = thunk_FUN_02f45174(lVar11,uVar10);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(lVar11,uVar10);
          }
          lVar6 = *(long *)puVar3;
          plVar4 = (long *)thunk_FUN_02f45174(lVar11,lVar6);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48(lVar11,lVar6);
          }
          lVar11 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar6) {
                puVar5 = (undefined8 *)(lVar11 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_05511c4c;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_02f421d0(plVar4,lVar6,1);
LAB_05511c4c:
          (*(code *)*puVar5)(plVar4,uVar9,puVar5[1]);
          return 1;
        }
        goto LAB_05511c70;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
LAB_05511c70:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


