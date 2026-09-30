/*
FUNCTION_NAME: FUN_03a36644
ENTRY_POINT: 03a36644
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03a3671c) */
/* WARNING: Removing unreachable block (ram,0x03a36760) */

void FUN_03a36644(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  
code_r0x03a36644:
  do {
    lVar2 = (*(code *)*param_1)();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar3 = (long *)FUN_03a36934(*(undefined8 *)(lVar2 + 0x10));
    if (plVar3 == (long *)0x0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03a36afc();
    }
    else {
      (**(code **)(*plVar3 + 0x178))(plVar3,lVar2,*(undefined8 *)(*plVar3 + 0x180));
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03a36afc();
    }
    lVar2 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03a365e8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03a365e8:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x21 == (long *)0x0)
      goto UnityEngine_InputSystem_InputActionState_TriggerState__set_bindingIndex;
      lVar2 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_03a366e8;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          param_1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto code_r0x03a36644;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    param_1 = (undefined8 *)FUN_01ecb238();
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_03a36704;
    }
  }
LAB_03a366e8:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03a36704:
  (*(code *)*puVar1)();
UnityEngine_InputSystem_InputActionState_TriggerState__set_bindingIndex:
  thunk_FUN_01f3e6f0();
  *unaff_x19 = unaff_x20;
  thunk_FUN_01f51358();
  return;
}


