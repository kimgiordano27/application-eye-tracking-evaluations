/*
FUNCTION_NAME: FUN_0242874c
ENTRY_POINT: 0242874c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * FUN_0242874c(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  uint uVar16;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputDevice>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<float,_sbyte>__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<float,_float>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<float,_ushort>__);
    if (*(long *)(param_1 + 0x38) == 0) {
      FUN_01ecafa0(param_1);
    }
  }
  puVar4 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputDevice>__;
  local_48 = 0;
  lVar5 = *(long *)
           Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputDevice>__;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar4;
  }
  lVar9 = *(long *)(lVar5 + 0xb8);
  if (*(int *)(lVar9 + 0x34) < 1) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar4;
      lVar9 = *(long *)(lVar5 + 0xb8);
    }
    iVar12 = *(int *)(lVar9 + 8);
    if (iVar12 + -1 <= *(int *)(lVar9 + 0x3c)) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar9 = *(long *)(*(long *)puVar4 + 0xb8);
        iVar12 = *(int *)(lVar9 + 8);
      }
      local_48 = CONCAT44(iVar12,*(undefined4 *)(lVar9 + 0xc));
      FUN_0211af3c(1,0);
      if (DAT_0482ef72 == '\0') {
        thunk_FUN_01efb3a4(Method_System_Nullable<InputRemoting_Message>__ctor__);
        DAT_0482ef72 = '\x01';
      }
      if (0 < **(int **)(*(long *)Method_System_Nullable<InputRemoting_Message>__ctor__ + 0xb8)) {
        uVar14 = FUN_035683d0((long)&local_48 + 4,0);
        uVar7 = FUN_035683d0(&local_48,0);
        puVar3 = 
        Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__;
        uVar14 = FUN_0340ebc0(uVar14,*(undefined8 *)
                                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                              ,uVar7,0);
        if (*(long *)Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<float,_ushort>__ == 0
           ) {
LAB_02428cc4:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = FUN_03410770(*(long *)
                              Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<float,_ushort>__
                             ,*(undefined8 *)
                               Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<float,_float>__
                             ,uVar14,0);
        lVar9 = *(long *)puVar4;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar9);
          lVar9 = *(long *)puVar4;
        }
        uVar14 = FUN_035683d0(*(long *)(lVar9 + 0xb8) + 8,0);
        uVar7 = FUN_035683d0(*(long *)(*(long *)puVar4 + 0xb8) + 0xc,0);
        uVar14 = FUN_0340ebc0(uVar14,*(undefined8 *)puVar3,uVar7,0);
        if (lVar5 == 0) goto LAB_02428cc4;
        uVar14 = FUN_03410770(lVar5,*(undefined8 *)
                                     Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<float,_sbyte>__
                              ,uVar14,0);
        FUN_021177cc(uVar14,0,0);
      }
    }
LAB_02428afc:
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 0x18) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    plVar15 = (long *)thunk_FUN_01f117cc();
    FUN_027e5400(plVar15,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20));
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar4;
    }
    *(int *)(*(long *)(lVar5 + 0xb8) + 0x3c) = *(int *)(*(long *)(lVar5 + 0xb8) + 0x3c) + 1;
    FUN_0211ac60(plVar15,0);
  }
  else {
    uVar14 = **(undefined8 **)(param_1 + 0x38);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar5 = FUN_03579868(uVar14,0);
    lVar9 = FUN_03579868(*(undefined8 *)(*(long *)(param_1 + 0x38) + 8),0);
    lVar6 = FUN_03579868(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10),0);
    lVar10 = *(long *)puVar4;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar10);
      lVar10 = *(long *)puVar4;
    }
    uVar16 = *(uint *)(*(long *)(lVar10 + 0xb8) + 0x84);
    while( true ) {
      iVar12 = *(int *)(lVar10 + 0xe0);
      if (iVar12 == 0) {
        thunk_FUN_01ee6d7c(lVar10);
        lVar10 = *(long *)puVar4;
        iVar12 = *(int *)(lVar10 + 0xe0);
      }
      iVar2 = *(int *)(*(long *)(lVar10 + 0xb8) + 0x80);
      if (iVar12 == 0) {
        thunk_FUN_01ee6d7c(lVar10);
        lVar10 = *(long *)puVar4;
      }
      lVar13 = *(long *)(lVar10 + 0xb8);
      if ((int)uVar16 <= iVar2 + -1) {
        if (*(int *)(lVar13 + 0x3c) < *(int *)(lVar13 + 8)) goto LAB_02428afc;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar10);
          lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
        }
        lVar5 = *(long *)(lVar13 + 0x50);
        if (lVar5 == 0) goto LAB_02428cc4;
        if (*(uint *)(lVar5 + 0x18) <= *(uint *)(lVar13 + 0x84)) goto LAB_02428cc8;
        puVar8 = (undefined8 *)(lVar5 + (long)(int)*(uint *)(lVar13 + 0x84) * 8 + 0x20);
        *puVar8 = 0;
        thunk_FUN_01f51358(puVar8,0);
        lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
        *(int *)(lVar5 + 0x84) = *(int *)(lVar5 + 0x84) + -1;
        *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + -1;
        *(int *)(lVar5 + 0x3c) = *(int *)(lVar5 + 0x3c) + -1;
        goto LAB_02428afc;
      }
      lVar13 = *(long *)(lVar13 + 0x50);
      if (lVar13 == 0) goto LAB_02428cc4;
      if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_02428cc8;
      plVar15 = *(long **)(lVar13 + (long)(int)uVar16 * 8 + 0x20);
      if ((((plVar15 != (long *)0x0) && (plVar15[0x1a] == lVar5)) && (plVar15[0x1b] == lVar9)) &&
         (plVar15[0x1c] == lVar6)) break;
      uVar16 = uVar16 - 1;
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar15);
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0211ac60(plVar15,0);
    lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50);
    if (lVar5 == 0) goto LAB_02428cc4;
    if (*(uint *)(lVar5 + 0x18) <= uVar16) {
LAB_02428cc8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    puVar8 = (undefined8 *)(lVar5 + (long)(int)uVar16 * 8 + 0x20);
    *puVar8 = 0;
    thunk_FUN_01f51358(puVar8,0);
    lVar5 = *(long *)puVar4;
    lVar9 = *(long *)(lVar5 + 0xb8);
    uVar1 = *(uint *)(lVar9 + 0x84);
    if (uVar1 != *(uint *)(lVar9 + 0x80)) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar4;
        lVar9 = *(long *)(lVar5 + 0xb8);
        uVar1 = *(uint *)(lVar9 + 0x84);
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar5 = *(long *)puVar4;
          lVar9 = *(long *)(lVar5 + 0xb8);
        }
      }
      if (uVar1 == uVar16) {
        *(int *)(lVar9 + 0x84) = *(int *)(lVar9 + 0x84) + -1;
      }
      else {
        puVar11 = (uint *)(lVar9 + 0x80);
        if (*puVar11 == uVar16) {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar5 = *(long *)puVar4;
            puVar11 = (uint *)(*(long *)(lVar5 + 0xb8) + 0x80);
            uVar16 = *puVar11;
          }
          *puVar11 = uVar16 + 1;
        }
      }
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar4;
    }
    *(int *)(*(long *)(lVar5 + 0xb8) + 0x34) = *(int *)(*(long *)(lVar5 + 0xb8) + 0x34) + -1;
  }
  return plVar15;
}


