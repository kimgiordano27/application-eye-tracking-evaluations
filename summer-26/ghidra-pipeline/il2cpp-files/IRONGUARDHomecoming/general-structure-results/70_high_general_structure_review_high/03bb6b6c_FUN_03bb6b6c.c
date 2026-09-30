/*
FUNCTION_NAME: FUN_03bb6b6c
ENTRY_POINT: 03bb6b6c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03bb6b6c(long param_1,long param_2,ulong param_3,undefined2 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined2 local_64 [2];
  
  local_64[0] = param_4;
  if ((DAT_0483986a & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_13017);
    thunk_FUN_01efb3a4(StringLiteral_13196);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Grabbable>__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_GetHashCodeOfString__);
    thunk_FUN_01efb3a4(
                      Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<NonSerializedAttribute>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Comparison_<Definition>b__36_0__);
    thunk_FUN_01efb3a4(StringLiteral_11415);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendListWithCapacity<InputControl,_InputControlList<InputControl>>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendListWithCapacity<InputDevice,_ReadOnlyArray<InputDevice>>__
                      );
    thunk_FUN_01efb3a4(StringLiteral_13197);
    DAT_0483986a = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar12 = thunk_FUN_01f117cc();
    uVar18 = thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_IndexOf__);
    FUN_034efd20(uVar12,uVar18,0);
    uVar18 = thunk_FUN_01efb3a4(StringLiteral_13198);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar12,uVar18);
  }
  uVar8 = FUN_03b598dc(param_2,0);
  puVar3 = StringLiteral_13197;
  puVar1 = StringLiteral_13017;
  if ((uVar8 & 1) == 0) {
    uVar12 = thunk_FUN_01efb3a4(StringLiteral_13199);
    uVar12 = FUN_03406290(uVar12,param_2,0);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
    uVar18 = thunk_FUN_01f117cc();
    FUN_0356adc8(uVar18,uVar12,0);
    uVar12 = thunk_FUN_01efb3a4(StringLiteral_13198);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar18,uVar12);
  }
  if ((param_3 & 1) == 0) {
    uVar5 = FUN_03b663a8(param_2,0);
    uVar5 = ~uVar5 & 1;
  }
  else {
    uVar5 = 1;
  }
  uVar13 = 8;
  if (uVar5 != 0) {
    uVar13 = 9;
  }
  FUN_03b3ab68(param_2,uVar13,0);
  FUN_022d54a0(param_1 + 0xe0,param_2,uVar13,*(undefined8 *)puVar3,0,*(undefined8 *)puVar1);
  puVar1 = StringLiteral_13196;
  if (((param_3 & 1) == 0) &&
     (plVar9 = (long *)thunk_FUN_01f116d0(param_2,*(undefined8 *)StringLiteral_13196),
     plVar9 != (long *)0x0)) {
    lVar14 = *plVar9;
    uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar8 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_03bb6f7c;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_03bb6f7c:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  else {
    puVar1 = Method_System_Globalization_CompareInfo_GetHashCodeOfString__;
    if (DAT_048319ae == '\0') {
      thunk_FUN_01efb3a4(Method_System_Reflection_FieldInfo_GetRawConstantValue__);
      DAT_048319ae = '\x01';
    }
    puVar4 = StringLiteral_11415;
    puVar3 = 
    Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<NonSerializedAttribute>__;
    uStack_78 = *(undefined8 *)(param_2 + 0x18);
    local_80 = *(undefined8 *)(param_2 + 0x10);
    lVar14 = **(long **)(*(long *)Method_System_Reflection_FieldInfo_GetRawConstantValue__ + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    puVar2 = Method_Unity_VisualScripting_Comparison_<Definition>b__36_0__;
    iVar6 = FUN_03bf27e0(&local_80,0);
    FUN_032c9740(&local_90,iVar6 + 0x18,2,1,*(undefined8 *)puVar4);
    lVar11 = FUN_0239adc4(local_90,uStack_88,*(undefined8 *)puVar3);
    uVar12 = FUN_03bf90d8(lVar11,0);
    plVar9 = *(long **)(param_1 + 0x440);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar15 = *plVar9;
    uVar8 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar8 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_UnityEngine_Component_GetComponent<Grabbable>__) {
          puVar10 = (undefined8 *)(lVar15 + (long)(*piVar16 + 0x13) * 0x10 + 0x138);
          goto LAB_03bb6e20;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar9,*(long *)Method_UnityEngine_Component_GetComponent<Grabbable>__,
                           0x13);
LAB_03bb6e20:
    uVar18 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03bf2e14(lVar11,0x53544154,0);
    FUN_03bf2e1c(lVar11,iVar6 + 0x18,0);
    FUN_03bf2f40(uVar18,lVar11,0);
    FUN_03bf2ee4(lVar11,*(undefined4 *)(param_2 + 0xe0),0);
    FUN_03bf2ec8(lVar11,0xffffffff,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    *(undefined4 *)(lVar11 + 0x14) = *(undefined4 *)(param_2 + 0x10);
    if (uVar5 == 0) {
      lVar15 = FUN_03b5d30c(param_2,0);
      lVar17 = *(long *)(param_1 + 200);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_04037e20(uVar12,(ulong)*(uint *)(param_2 + 0x14) + lVar15,iVar6,0);
      FUN_03b4d030(uVar12,(ulong)*(uint *)(param_2 + 0x14) + lVar14,iVar6,
                   (ulong)*(uint *)(param_2 + 0x14) + lVar17,0);
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_04037e20(uVar12,(ulong)*(uint *)(param_2 + 0x14) + lVar14,iVar6,0);
    }
    iVar7 = *(int *)(param_1 + 0xac);
    if (iVar7 == 0) {
      iVar7 = FUN_03bf9afc(*(undefined4 *)(param_1 + 0xa8),0);
    }
    FUN_03bb7130(uVar18,param_1,param_2,iVar7,uVar12,0,iVar6,lVar11);
    FUN_032c9a00(&local_90,*(undefined8 *)puVar2);
  }
  if ((char)local_64[0] == '\0') {
    if (uVar5 == 0) {
      return;
    }
  }
  else {
    uVar8 = FUN_0332aff8(local_64,*(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendListWithCapacity<InputDevice,_ReadOnlyArray<InputDevice>>__
                        );
    if ((uVar8 & 1) == 0) {
      return;
    }
  }
  FUN_03b59a38(param_2,0);
  return;
}


