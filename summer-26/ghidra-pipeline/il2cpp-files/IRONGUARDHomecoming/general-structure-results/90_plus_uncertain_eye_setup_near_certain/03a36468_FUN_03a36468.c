/*
FUNCTION_NAME: FUN_03a36468
ENTRY_POINT: 03a36468
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03a36760) */
/* WARNING: Removing unreachable block (ram,0x03a3671c) */

long FUN_03a36468(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  
  if ((DAT_04838bea & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_7136);
    thunk_FUN_01efb3a4(StringLiteral_7137);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_7138);
    DAT_04838bea = 1;
  }
  FUN_03450e74(param_1,0);
  plVar9 = (long *)(param_1 + 0x98);
  lVar10 = *plVar9;
  thunk_FUN_01f3e6f0();
  if (lVar10 != 0) {
    return lVar10;
  }
  lVar10 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_7138);
  FUN_03a3683c();
  plVar3 = (long *)FUN_03a368a8(param_1);
  if ((plVar3 == (long *)0x0) ||
     (plVar3 = (long *)(**(code **)(*plVar3 + 0x288))(plVar3,*(undefined8 *)(*plVar3 + 0x290)),
     plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_7136) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03a36578;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)StringLiteral_7136,0);
LAB_03a36578:
  plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
  puVar2 = StringLiteral_7137;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03a365e8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_03a365e8:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar3 == (long *)0x0)
      goto UnityEngine_InputSystem_InputActionState_TriggerState__set_bindingIndex;
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_03a366e8;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto FUN_03a36644;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar2,0);
FUN_03a36644:
    lVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar5 = (long *)FUN_03a36934(*(undefined8 *)(lVar6 + 0x10));
    if (plVar5 == (long *)0x0) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03a36afc(lVar10,lVar6);
    }
    else {
      (**(code **)(*plVar5 + 0x178))(plVar5,lVar6,*(undefined8 *)(*plVar5 + 0x180));
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03a36afc(lVar10,plVar5);
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03a36704;
    }
  }
LAB_03a366e8:
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar3,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03a36704:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
UnityEngine_InputSystem_InputActionState_TriggerState__set_bindingIndex:
  thunk_FUN_01f3e6f0();
  *plVar9 = lVar10;
  thunk_FUN_01f51358(plVar9,lVar10);
  return lVar10;
}


