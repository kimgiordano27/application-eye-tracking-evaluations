/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopDiscoveringColocationSessions>d__22$$MoveNext
ENTRY_POINT: 053055e8
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

void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopDiscoveringColocationSessions>d__22__MoveNext
               (void)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  
  do {
    uVar3 = FUN_037f15fc(unaff_x21,*unaff_x26);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar4 = FUN_066cd30c(uVar3,0);
    if ((uVar4 & 1) != 0) {
      lVar5 = FUN_066c67ec(unaff_x21,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_066c9ac0(lVar5,*(undefined4 *)(unaff_x20 + 0x30),0);
    }
    uVar3 = FUN_037f15fc(unaff_x21,*unaff_x28);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar4 = FUN_066cd30c(uVar3,0);
    if ((uVar4 & 1) != 0) {
      lVar5 = FUN_066c67ec(unaff_x21,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_066c9ac0(lVar5,*(undefined4 *)(unaff_x20 + 0x30),0);
    }
    FUN_05305438();
    lVar5 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05305548;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c();
LAB_05305548:
    uVar4 = (*(code *)*puVar2)();
    if ((uVar4 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_02ef170c();
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 == 0) goto LAB_053056d8;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_053055a8;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c();
LAB_053055a8:
    unaff_x21 = (long *)(*(code *)*puVar2)();
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    bVar1 = *(byte *)(*unaff_x25 + 0x130);
    if ((*(byte *)(*unaff_x21 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x25)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(unaff_x21);
    }
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar7 = piVar7 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x23) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_053056f4;
    }
  }
LAB_053056d8:
  puVar2 = (undefined8 *)FUN_02eea86c(plVar6,*unaff_x23,0);
LAB_053056f4:
  (*(code *)*puVar2)(plVar6,puVar2[1]);
  return;
}


