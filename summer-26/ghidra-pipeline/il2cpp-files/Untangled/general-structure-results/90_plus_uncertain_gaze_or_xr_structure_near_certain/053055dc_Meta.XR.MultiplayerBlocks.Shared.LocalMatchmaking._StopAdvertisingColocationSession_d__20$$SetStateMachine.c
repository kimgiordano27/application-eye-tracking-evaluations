/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopAdvertisingColocationSession>d__20$$SetStateMachine
ENTRY_POINT: 053055dc
PROGRAM: Untangled-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0530573c) */

void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopAdvertisingColocationSession>d__20__SetStateMachine
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  
  while (*(long *)(param_1 + -8) == param_3) {
    uVar2 = FUN_037f15fc(unaff_x21,*unaff_x26);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar3 = FUN_066cd30c(uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_066c67ec(unaff_x21,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_066c9ac0(lVar4,*(undefined4 *)(unaff_x20 + 0x30),0);
    }
    uVar2 = FUN_037f15fc(unaff_x21,*unaff_x28);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar3 = FUN_066cd30c(uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_066c67ec(unaff_x21,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_066c9ac0(lVar4,*(undefined4 *)(unaff_x20 + 0x30),0);
    }
    FUN_05305438();
    lVar4 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05305548;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c();
LAB_05305548:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_02ef170c();
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 == 0) goto LAB_053056d8;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      goto LAB_053056c0;
    }
    lVar4 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_053055a8;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c();
LAB_053055a8:
    unaff_x21 = (long *)(*(code *)*puVar1)();
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    param_3 = *unaff_x25;
    if (*(byte *)(*unaff_x21 + 0x130) < *(byte *)(param_3 + 0x130)) break;
    param_1 = *(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f08440(unaff_x21);
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
LAB_053056c0:
    if (*(long *)(piVar6 + -2) == *unaff_x23) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_053056f4;
    }
  }
LAB_053056d8:
  puVar1 = (undefined8 *)FUN_02eea86c(plVar5,*unaff_x23,0);
LAB_053056f4:
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}


