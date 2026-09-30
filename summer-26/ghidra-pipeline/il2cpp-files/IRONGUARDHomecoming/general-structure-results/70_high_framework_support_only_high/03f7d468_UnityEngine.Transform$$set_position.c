/*
FUNCTION_NAME: UnityEngine.Transform$$set_position
ENTRY_POINT: 03f7d468
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03f7d6bc) */

void UnityEngine_Transform__set_position(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  undefined8 unaff_x21;
  long unaff_x24;
  long *plVar6;
  long unaff_x25;
  long *plVar7;
  long unaff_x26;
  undefined8 *puVar8;
  long unaff_x27;
  undefined8 *puVar9;
  long unaff_x28;
  undefined8 *puVar10;
  long unaff_x29;
  undefined8 *puVar11;
  
  plVar6 = *(long **)(unaff_x24 + 0xe08);
  puVar8 = *(undefined8 **)(unaff_x26 + 0xe48);
  puVar9 = *(undefined8 **)(unaff_x27 + 0x608);
  puVar10 = *(undefined8 **)(unaff_x28 + 0xb30);
  puVar11 = *(undefined8 **)(unaff_x29 + 0xec0);
  plVar7 = *(long **)(unaff_x25 + 0xa38);
  do {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *plVar6) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03f7d4cc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03f7d4cc:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_03f7d650;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)Method_System_Collections_Generic_Stack<Tween>_Pop__)
        {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_03f7d530;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_03f7d530:
    uVar2 = (*(code *)*puVar1)();
    lVar3 = FUN_01f08890(*puVar8,5);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar3 + 0x20) = *puVar9;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar3 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar3 + 0x28) = unaff_x21;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar3 + 0x30) = *puVar10;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar3 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar3 + 0x38) = uVar2;
    thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x38),uVar2);
    if (*(uint *)(lVar3 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar3 + 0x40) = *puVar11;
    thunk_FUN_01f51358();
    uVar2 = FUN_0340efe8(lVar3,0);
    if (*(int *)(*plVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403f3d4(uVar2);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto UnityEngine_Transform__get_localRotation;
    }
  }
LAB_03f7d650:
  puVar8 = (undefined8 *)FUN_01ecb238();
UnityEngine_Transform__get_localRotation:
  (*(code *)*puVar8)();
  return;
}


