/*
FUNCTION_NAME: OVRPlugin$$set_tiledMultiResLevel
ENTRY_POINT: 073e1d5c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_tiledMultiResLevel(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  long *plVar8;
  int iVar9;
  
  if ((DAT_0941e754 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eb5c80);
    DAT_0941e754 = 1;
  }
  iVar9 = (int)((ulong)param_2 >> 0x20);
  if (1 < iVar9 - 2U) {
    iVar7 = (int)param_2;
    if (iVar9 != 1) {
      if (iVar9 == 0) {
        if (iVar7 == 3) goto LAB_073e1e20;
        (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
      }
      else {
        if (iVar7 == 3) goto LAB_073e1e20;
LAB_073e1e68:
        if (iVar9 != 0) {
          if (iVar9 != 1) {
            return;
          }
          goto LAB_073e1e74;
        }
      }
      uVar3 = (undefined1)param_1[8];
      goto LAB_073e1e24;
    }
    if (iVar7 != 3) {
      if (iVar7 == 0) {
        plVar8 = (long *)param_1[5];
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar4 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08eb5c80) {
              puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_073e1e48;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08eb5c80,2);
LAB_073e1e48:
        uVar2 = (*(code *)*puVar1)(plVar8,puVar1[1]);
        (**(code **)(*param_1 + 0x1a8))(param_1,uVar2,*(undefined8 *)(*param_1 + 0x1b0));
        goto LAB_073e1e68;
      }
LAB_073e1e74:
      uVar3 = 1;
      goto LAB_073e1e24;
    }
  }
LAB_073e1e20:
  uVar3 = 0;
LAB_073e1e24:
  *(undefined1 *)((long)param_1 + 0x59) = uVar3;
  return;
}


