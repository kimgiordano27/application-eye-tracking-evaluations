/*
FUNCTION_NAME: OVRPlugin$$RequestSceneCapture
ENTRY_POINT: 073f1f3c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


ulong OVRPlugin__RequestSceneCapture(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long *unaff_x19;
  int *unaff_x20;
  ulong unaff_x21;
  int iVar10;
  long *unaff_x24;
  ulong unaff_x27;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  
  do {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_03cd7500(param_1);
    }
    uStack000000000000000c = uStack000000000000000c | param_2;
    if ((uint)unaff_x21 < 5) {
                    /* WARNING: Could not recover jumptable at 0x073f1f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)((ulong)(&switchD_073f1f80::switchdataD_01a336f3)[unaff_x27] * 4 + 0x73f1f84
                        ))();
      return uVar7;
    }
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if ((uint)unaff_x21 < 5) {
                    /* WARNING: Could not recover jumptable at 0x073f202c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)((ulong)(&switchD_073f202c::switchdataD_01a336f8)[unaff_x27] * 4 + 0x73f2030
                        ))();
      return uVar7;
    }
switchD_073f1e98_default:
    do {
      uVar1 = (int)unaff_x21 + 1;
      unaff_x21 = (ulong)uVar1;
      if (uVar1 == 5) {
        return (ulong)(uStack0000000000000008 & (uStack000000000000000c ^ 1) & 1);
      }
      iVar10 = *unaff_x20;
      iVar3 = unaff_x20[1];
      iVar2 = unaff_x20[2];
      iVar4 = unaff_x20[3];
      iVar5 = unaff_x20[4];
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      switch(unaff_x21) {
      case 1:
        iVar2 = iVar3;
        break;
      case 2:
        break;
      case 3:
        iVar10 = iVar4;
      case 0:
        iVar2 = iVar10;
        break;
      case 4:
        iVar2 = iVar5;
        break;
      default:
        goto switchD_073f1e98_default;
      }
    } while (iVar2 == 0);
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar8 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08eb3cd0) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_073f1f20;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348();
LAB_073f1f20:
    param_2 = (*(code *)*puVar6)();
    param_1 = *unaff_x24;
    unaff_x27 = unaff_x21;
  } while( true );
}


