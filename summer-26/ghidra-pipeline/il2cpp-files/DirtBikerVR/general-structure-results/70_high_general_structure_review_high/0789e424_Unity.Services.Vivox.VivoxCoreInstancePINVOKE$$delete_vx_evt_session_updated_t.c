/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_evt_session_updated_t
ENTRY_POINT: 0789e424
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0789e61c) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_evt_session_updated_t
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  
  if (in_x9 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0789e464;
      }
      in_x9 = in_x9 + -1;
      piVar7 = piVar7 + 4;
    } while (in_x9 != 0);
  }
  puVar3 = (undefined8 *)FUN_03ac43c4();
LAB_0789e464:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_084c3f10;
  puVar1 = PTR_DAT_08488568;
  do {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0789e4e8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar1,0);
LAB_0789e4e8:
    uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_0789e5c0;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0789e54c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)puVar2,0);
LAB_0789e54c:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
    FUN_05fa052c();
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08488550) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0789e5dc;
    }
  }
LAB_0789e5c0:
  puVar3 = (undefined8 *)FUN_03ac43c4(plVar4,*(long *)PTR_DAT_08488550,0);
LAB_0789e5dc:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


