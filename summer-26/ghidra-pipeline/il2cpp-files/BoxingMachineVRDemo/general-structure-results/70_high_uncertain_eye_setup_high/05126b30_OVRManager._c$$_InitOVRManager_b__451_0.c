/*
FUNCTION_NAME: OVRManager.<>c$$<InitOVRManager>b__451_0
ENTRY_POINT: 05126b30
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05126cf4) */
/* WARNING: Removing unreachable block (ram,0x05126d10) */
/* WARNING: Removing unreachable block (ram,0x05126e08) */

void OVRManager_<>c__<InitOVRManager>b__451_0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  
  puVar3 = (undefined8 *)FUN_02d9a5d4();
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_06780ad0;
  puVar1 = PTR_DAT_0675f3d8;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  do {
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05126c04;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)puVar1,0);
LAB_05126c04:
    uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar6 & 1) == 0) break;
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto OVRMicrogestureEventSource__set_Hand;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)puVar2,0);
OVRMicrogestureEventSource__set_Hand:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
    FUN_05126010();
  } while( true );
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05126cdc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_0675f3d0,0);
LAB_05126cdc:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  plVar4 = *(long **)(unaff_x19 + 0x10);
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x05126dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x5a8))(plVar4,*(undefined8 *)(*plVar4 + 0x5b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


