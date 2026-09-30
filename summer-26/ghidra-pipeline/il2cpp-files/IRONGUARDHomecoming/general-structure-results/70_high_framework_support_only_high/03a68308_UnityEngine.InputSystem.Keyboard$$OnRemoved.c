/*
FUNCTION_NAME: UnityEngine.InputSystem.Keyboard$$OnRemoved
ENTRY_POINT: 03a68308
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a68570) */
/* WARNING: Removing unreachable block (ram,0x03a68584) */

int UnityEngine_InputSystem_Keyboard__OnRemoved(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  long unaff_x20;
  undefined8 in_stack_00000018;
  
  plVar6 = *(long **)(unaff_x20 + 0x10);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar6 = (long *)(**(code **)(*plVar6 + 0x2c8))(plVar6,*(undefined8 *)(*plVar6 + 0x2d0));
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = *plVar6;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)
           Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
         ) {
        puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_03a6837c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                        ,0);
LAB_03a6837c:
  plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
  puVar4 = StringLiteral_7779;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar13 = 0;
  do {
    lVar10 = *plVar6;
    lVar9 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03a683f8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,0);
LAB_03a683f8:
    uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar11 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_01f116d0(plVar6,*(undefined8 *)puVar2);
      if (plVar6 == (long *)0x0) goto LAB_03a68524;
      lVar10 = *plVar6;
      lVar9 = *(long *)puVar2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_03a684fc;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar6;
    lVar9 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_03a68458;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,1);
LAB_03a68458:
    plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    plVar8 = (long *)plVar8[3];
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar5 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
    iVar13 = iVar5 + iVar13;
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == lVar9) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03a68518;
    }
  }
LAB_03a684fc:
  puVar7 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,0);
LAB_03a68518:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_03a68524:
  if (in_stack_00000018._4_1_ != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit();
  }
  return iVar13;
}


