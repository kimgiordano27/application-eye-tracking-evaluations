/*
FUNCTION_NAME: FUN_036829b4
ENTRY_POINT: 036829b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03682cc8) */

uint FUN_036829b4(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if ((DAT_04833e5d & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_Checked_ConvertUInt64__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_Unchecked_ConvertDouble__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_Unchecked_ConvertInt32__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_Convert__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_Unchecked_Convert__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_49__);
    DAT_04833e5d = 1;
  }
  uVar7 = FUN_0406f8e8(param_1,0);
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    if ((*(long *)(param_1 + 0x40) == 0) ||
       (plVar12 = *(long **)(*(long *)(param_1 + 0x40) + 0x10), plVar12 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *plVar12;
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)
             Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_Convert__
           ) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03682ac0;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar12,*(long *)
                                   Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_ToUnderlying_Convert__
                          ,0);
LAB_03682ac0:
    plVar12 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
    puVar5 = 
    Method_System_Linq_Expressions_Interpreter_NumericConvertInstruction_Unchecked_Convert__;
    puVar4 = Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_49__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar9 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03682b38;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar3,0);
LAB_03682b38:
      uVar6 = (*(code *)*puVar8)(plVar12,puVar8[1]);
      if ((uVar6 & 1) == 0) break;
      lVar9 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03682b98;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar5,0);
LAB_03682b98:
      lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar13 = *(long **)(param_1 + 0x38);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = *plVar13;
      uVar14 = *(undefined8 *)(param_1 + 0x48);
      uVar1 = *(undefined4 *)(lVar9 + 0x10);
      uVar2 = *(undefined4 *)(lVar9 + 0x14);
      uVar15 = *(undefined8 *)(lVar9 + 0x18);
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03682c08;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar4,0);
LAB_03682c08:
      uVar7 = (*(code *)*puVar8)(plVar13,uVar14,uVar2,uVar1,uVar15,puVar8[1]);
    } while ((uVar7 & 1) != 0);
    uVar6 = uVar6 ^ 1;
    if (plVar12 != (long *)0x0) {
      lVar9 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03682c88;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar12,*(long *)
                                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_03682c88:
      (*(code *)*puVar8)(plVar12,puVar8[1]);
    }
  }
  return uVar6 & 1;
}


