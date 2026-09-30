/*
FUNCTION_NAME: Unity.VisualScripting.AddListItem$$Add
ENTRY_POINT: 03ebb17c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 150
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03ebb364) */
/* WARNING: Removing unreachable block (ram,0x03ebb3a8) */
/* WARNING: Removing unreachable block (ram,0x03ebb3fc) */

void Unity_VisualScripting_AddListItem__Add(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 uVar8;
  undefined8 *unaff_x25;
  int unaff_w26;
  long *unaff_x27;
  long *unaff_x28;
  
  do {
    if (*(long *)(param_1 + 0x40) != *(long *)(*unaff_x28 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    plVar4 = (long *)thunk_FUN_01f11920();
    plVar3 = (long *)*plVar4;
    plVar4 = (long *)plVar4[1];
    if (0 < unaff_w26) {
      FUN_03418748();
    }
    lVar5 = thunk_FUN_01f116d0(plVar4,*unaff_x25);
    if (lVar5 == 0) {
      lVar5 = thunk_FUN_01f116d0(plVar4,*(undefined8 *)
                                         Method_UnityEngine_Component_GetComponents<Collider>__);
      if (lVar5 == 0) {
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        FUN_03419fc0();
      }
      else {
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        if (plVar4 == (long *)0x0) {
          lVar5 = 0;
        }
        else {
          uVar8 = *(undefined8 *)Method_UnityEngine_Component_GetComponents<Collider>__;
          lVar5 = thunk_FUN_01f116d0(plVar4,uVar8);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar4,uVar8);
          }
        }
        FUN_03ebac5c(lVar5);
        FUN_03419fc0();
      }
    }
    else {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      if (plVar4 == (long *)0x0) {
        lVar5 = 0;
      }
      else {
        uVar8 = *unaff_x25;
        lVar5 = thunk_FUN_01f116d0(plVar4,uVar8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar4,uVar8);
        }
      }
      FUN_03ebaf1c(lVar5);
      FUN_03419fc0();
    }
    unaff_w26 = unaff_w26 + 1;
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03ebb108;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03ebb108:
    uVar6 = (*(code *)*puVar2)();
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((uVar6 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01f116d0();
      if (plVar3 == (long *)0x0) goto LAB_03ebb358;
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_03ebb330;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_03ebb168;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03ebb168:
    plVar3 = (long *)(*(code *)*puVar2)();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    param_1 = *plVar3;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03ebb34c;
    }
  }
LAB_03ebb330:
  puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_03ebb34c:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
LAB_03ebb358:
  FUN_03418748();
                    /* WARNING: Could not recover jumptable at 0x03ebb3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x168))();
  return;
}


