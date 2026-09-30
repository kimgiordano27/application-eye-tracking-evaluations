/*
FUNCTION_NAME: OVRPlugin$$CreateSpaceUser
ENTRY_POINT: 0601ec8c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CreateSpaceUser
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long *param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  ulong uVar8;
  undefined4 uVar9;
  
  if ((DAT_07a46a90 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075de778);
    DAT_07a46a90 = 1;
  }
  puVar2 = PTR_DAT_075de778;
  if (param_5 != (long *)0x0) {
    uVar8 = 0;
    iVar7 = 0;
    do {
      lVar4 = *param_5;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0601ed1c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0322c1e8(param_5,*(long *)puVar2,0);
LAB_0601ed1c:
      uVar9 = (*(code *)*puVar3)(param_5,iVar7,puVar3[1]);
      lVar4 = *(long *)(param_4 + 0x10);
      if (lVar4 == 0) break;
      uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
      if (uVar5 <= uVar8) {
LAB_0601ed90:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      *(undefined4 *)(lVar4 + uVar8 * 4 + 0x20) = uVar9;
      if (uVar5 <= uVar8 + 1) goto LAB_0601ed90;
      uVar1 = uVar8 + 2;
      *(undefined4 *)(lVar4 + (uVar8 + 1) * 4 + 0x20) = param_2;
      if (uVar5 <= uVar1) goto LAB_0601ed90;
      iVar7 = iVar7 + 1;
      uVar8 = uVar8 + 3;
      *(undefined4 *)(lVar4 + uVar1 * 4 + 0x20) = param_3;
      if (iVar7 == 0x18) {
        return;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


