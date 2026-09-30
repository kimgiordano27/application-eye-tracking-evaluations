/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_playback_paused_get
ENTRY_POINT: 0789ea58
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0789ed04) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_playback_paused_get
               (ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_05fa0540();
  }
  uVar9 = *unaff_x23;
  uVar3 = FUN_0789ce44();
  uVar4 = FUN_065cd268(uVar3,0);
                    /* try { // try from 0789eab4 to 0799eae3 has its CatchHandler @ 0789ed64 */
  if ((((uVar4 & 1) == 0) ||
      (uVar4 = thunk_FUN_065cbffc(uVar9,*(undefined8 *)PTR_DAT_084c82e0,0), (uVar4 & 1) != 0)) ||
     (uVar4 = thunk_FUN_065cbffc(uVar9,*(undefined8 *)
                                        UnityEngine_TextCore_Text_FastAction<Object>_TypeInfo,0),
     (uVar4 & 1) != 0)) {
    FUN_05fa0540();
  }
  if (unaff_x20 == 0) {
    return;
  }
  plVar8 = *(long **)(unaff_x20 + 0x28);
  if (plVar8 == (long *)0x0) {
    return;
  }
  lVar6 = *plVar8;
  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar4 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_084c3f08) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0789eb4c;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)PTR_DAT_084c3f08,0);
LAB_0789eb4c:
  plVar8 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
  puVar2 = PTR_DAT_084c3f10;
  puVar1 = PTR_DAT_08488568;
  do {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0789ebd0;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)puVar1,0);
LAB_0789ebd0:
    uVar4 = (*(code *)*puVar5)(plVar8,puVar5[1]);
    if ((uVar4 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 == 0) goto LAB_0789eca8;
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0789ec34;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)puVar2,0);
LAB_0789ec34:
    (*(code *)*puVar5)(plVar8,puVar5[1]);
    FUN_05fa052c();
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar7 = piVar7 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08488550) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0789ecc4;
    }
  }
LAB_0789eca8:
  puVar5 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)PTR_DAT_08488550,0);
LAB_0789ecc4:
  (*(code *)*puVar5)(plVar8,puVar5[1]);
  return;
}


