/*
FUNCTION_NAME: FUN_03689570
ENTRY_POINT: 03689570
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x036897d0) */

void FUN_03689570(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((DAT_04833e93 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_Checked_ConvertUInt64__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_Convert__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_Unchecked_Convert__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04833e93 = 1;
  }
  if (((*(long *)(param_1 + 0x20) == 0) ||
      (lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x40), lVar6 == 0)) ||
     (plVar9 = *(long **)(lVar6 + 0x10), plVar9 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)
           Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_Convert__
         ) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03689640;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar9,*(long *)
                                Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_Convert__
                        ,0);
LAB_03689640:
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
  puVar4 = Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_Unchecked_Convert__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_036896b8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_036896b8:
    uVar7 = (*(code *)*puVar5)(plVar9,puVar5[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar9 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_03689784;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar4) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03689714;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_03689714:
    lVar6 = (*(code *)*puVar5)(plVar9,puVar5[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(undefined4 *)(lVar6 + 0x14);
    FUN_03689888(param_1,uVar1,0);
    FUN_03689888(param_1,uVar1,1);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_036897a0;
    }
  }
LAB_03689784:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_036897a0:
  (*(code *)*puVar5)(plVar9,puVar5[1]);
  return;
}


