/*
FUNCTION_NAME: OVRPlugin$$SetHeadPoseModifier
ENTRY_POINT: 06011458
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__SetHeadPoseModifier(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  int unaff_w20;
  long *plVar6;
  int iVar7;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f7398);
    *(undefined1 *)(unaff_x22 + 0x9a8) = 1;
  }
  iVar7 = (int)((ulong)param_3 >> 0x20);
  if (1 < iVar7 - 2U) {
    if (iVar7 != 1) {
      if (iVar7 == 0) {
        if (unaff_w20 == 3) goto LAB_06011508;
        (**(code **)(*unaff_x19 + 0x1b8))();
      }
      else {
        if (unaff_w20 == 3) goto LAB_06011508;
LAB_06011550:
        if (iVar7 != 0) {
          if (iVar7 != 1) {
            return;
          }
          goto LAB_0601155c;
        }
      }
      uVar2 = (undefined1)unaff_x19[8];
      goto LAB_0601150c;
    }
    if (unaff_w20 != 3) {
      if (unaff_w20 == 0) {
        plVar6 = (long *)unaff_x19[5];
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_075f7398) {
              puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
              goto OVRPlugin__GetHeadPoseModifier;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)PTR_DAT_075f7398,2);
OVRPlugin__GetHeadPoseModifier:
        (*(code *)*puVar1)(plVar6,puVar1[1]);
        (**(code **)(*unaff_x19 + 0x1a8))();
        goto LAB_06011550;
      }
LAB_0601155c:
      uVar2 = 1;
      goto LAB_0601150c;
    }
  }
LAB_06011508:
  uVar2 = 0;
LAB_0601150c:
  *(undefined1 *)((long)unaff_x19 + 0x59) = uVar2;
  return;
}


