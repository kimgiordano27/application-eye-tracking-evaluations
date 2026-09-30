/*
FUNCTION_NAME: UnityWebSocketSharp.Server.WebSocketSessionManager.<get_ActiveIDs>d__15$$System.IDisposable.Dispose
ENTRY_POINT: 07c1e3ac
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x07c1e5ac) */

void UnityWebSocketSharp_Server_WebSocketSessionManager_<get_ActiveIDs>d__15__System_IDisposable_Dispose
               (void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  
code_r0x07c1e3ac:
  puVar3 = (undefined8 *)FUN_03cf1348();
  do {
    uVar4 = (*(code *)*puVar3)();
    if ((uVar4 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_03cf5138();
      if (plVar6 == (long *)0x0) goto LAB_07c1e4c0;
      lVar7 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 == 0) goto LAB_07c1e498;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_07c1e424;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348();
LAB_07c1e424:
    uVar5 = (*(code *)*puVar3)();
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(uVar5,uVar5);
    }
    (**(code **)(*unaff_x21 + 0x308))();
    lVar7 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 == 0) goto code_r0x07c1e3ac;
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    while (*(long *)(piVar9 + -2) != *unaff_x23) {
      uVar4 = uVar4 - 1;
      piVar9 = piVar9 + 4;
      if (uVar4 == 0) goto code_r0x07c1e3ac;
    }
    puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar9 = piVar9 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar9 + -2) == *unaff_x25) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_07c1e4b4;
    }
  }
LAB_07c1e498:
  puVar3 = (undefined8 *)FUN_03cf1348(plVar6,*unaff_x25,0);
LAB_07c1e4b4:
  (*(code *)*puVar3)(plVar6,puVar3[1]);
LAB_07c1e4c0:
  if ((unaff_x20 == 0) || ((int)*(ulong *)(unaff_x20 + 0x18) < 1)) {
    if (unaff_x21 == (long *)0x0) {
LAB_07c1e5a0:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
  }
  else {
    uVar4 = 0;
    uVar8 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
    do {
      if (uVar8 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      if (unaff_x21 == (long *)0x0) goto LAB_07c1e5a0;
      (**(code **)(*unaff_x21 + 0x308))();
      uVar8 = (ulong)*(uint *)(unaff_x20 + 0x18);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)(int)*(uint *)(unaff_x20 + 0x18));
  }
  puVar1 = PTR_DAT_08ea6540;
  uVar2 = (**(code **)(*unaff_x21 + 0x298))();
  uVar5 = FUN_03c8f97c(*(undefined8 *)puVar1,uVar2);
  puVar3 = (undefined8 *)(unaff_x19 + 0x30);
  *puVar3 = uVar5;
  thunk_FUN_03d233cc(puVar3,uVar5);
  (**(code **)(*unaff_x21 + 0x368))();
  *(undefined8 *)(unaff_x19 + 0x38) = *puVar3;
  *(undefined1 *)(unaff_x19 + 0x40) = 0;
  thunk_FUN_03d233cc((undefined8 *)(unaff_x19 + 0x38));
  return;
}


