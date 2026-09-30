/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_get_session_text_state_string
ENTRY_POINT: 07868a9c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07868d4c) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_get_session_text_state_string
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  long *unaff_x21;
  
  uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x21) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_07868aec;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_03ac43c4();
LAB_07868aec:
  uVar4 = (*(code *)*puVar3)();
  plVar5 = (long *)FUN_07866938();
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar6 = *plVar5;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0848a8a0) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_07868b60;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)PTR_DAT_0848a8a0,0);
LAB_07868b60:
  plVar5 = (long *)(*(code *)*puVar3)(plVar5,puVar3[1]);
  puVar2 = PTR_DAT_0848a8a8;
  puVar1 = PTR_DAT_08488568;
  do {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07868bdc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)puVar1,0);
LAB_07868bdc:
    uVar7 = (*(code *)*puVar3)(plVar5,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar5 == (long *)0x0)
      goto Unity_Services_Vivox_VivoxCoreInstance__vx_get_audio_device_hot_swap_type_string;
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_07868cd8;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07868c40;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)puVar2,0);
LAB_07868c40:
    lVar6 = (*(code *)*puVar3)(plVar5,puVar3[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar7 = thunk_FUN_065cbffc(*(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x10),param_2,0);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(lVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      puVar3 = (undefined8 *)(*(long *)(lVar6 + 0x20) + 0x20);
      *puVar3 = uVar4;
      thunk_FUN_03afed3c(puVar3,uVar4);
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08488550) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_07868cf4;
    }
  }
LAB_07868cd8:
  puVar3 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)PTR_DAT_08488550,0);
LAB_07868cf4:
  (*(code *)*puVar3)(plVar5,puVar3[1]);
Unity_Services_Vivox_VivoxCoreInstance__vx_get_audio_device_hot_swap_type_string:
  lVar6 = *(long *)(unaff_x20 + 0x20);
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40));
  }
  return;
}


