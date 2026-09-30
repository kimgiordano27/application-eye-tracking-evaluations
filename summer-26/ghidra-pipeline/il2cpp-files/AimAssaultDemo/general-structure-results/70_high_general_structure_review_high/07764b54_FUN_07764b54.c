/*
FUNCTION_NAME: FUN_07764b54
ENTRY_POINT: 07764b54
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_5
*/


void FUN_07764b54(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  long lStack_58;
  
  if ((DAT_08271bc4 & 1) == 0) {
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_IWebSocketSession>_get_Count__
                );
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_IWebSocketSession>_get_Keys__)
    ;
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<string,_IWebSocketSession>_get_Values__
                );
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_int>_set_Item__);
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_Index>__ctor__);
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_int>_GetEnumerator__);
    FUN_0373b518(PTR_DAT_07d8b398);
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_int>_get_Values__);
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_Index>_GetEnumerator__);
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_int>_get_Keys__);
    DAT_08271bc4 = 1;
  }
  puVar3 = Method_System_Collections_Generic_Dictionary<string,_IWebSocketSession>_get_Keys__;
  puVar2 = Method_System_Collections_Generic_Dictionary<string,_IWebSocketSession>_get_Count__;
  uStack_68 = 0;
  local_70 = 0;
  lStack_58 = 0;
  local_60 = 0;
  local_80 = 0;
  lStack_78 = 0;
  if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  FUN_04bb3644(&local_a0,*(long *)(param_1 + 0x40),
               *(undefined8 *)Method_System_Collections_Generic_Dictionary<string,_Index>__ctor__);
  uStack_68 = uStack_98;
  local_70 = local_a0;
  lStack_58 = lStack_88;
  local_60 = uStack_90;
  uVar8 = local_80;
  lVar9 = 0;
  do {
    uVar7 = FUN_05de2748(&local_70,*(undefined8 *)puVar3);
    lVar10 = lStack_58;
    uVar5 = local_60;
    if ((uVar7 & 1) == 0) goto LAB_07764da4;
    if (param_2 == 0) {
      local_80 = local_60;
      lStack_78 = lStack_58;
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar8 = local_60;
    lVar9 = lStack_58;
  } while (*(int *)(param_2 + 0x28) != (int)local_60);
  local_80 = local_60;
  lStack_78 = lStack_58;
  uVar8 = FUN_060c08a0(param_3,0);
  puVar4 = Method_System_Collections_Generic_Dictionary<string,_int>_get_Values__;
  puVar3 = Method_System_Collections_Generic_Dictionary<string,_int>_get_Keys__;
  if ((uVar8 & 1) == 0) {
    lVar10 = FUN_07764498(&local_80,param_3);
    uVar8 = local_80;
    lVar9 = lStack_78;
    if (lVar10 != 0) {
      FUN_07764b54(param_1,lVar10,0,param_4);
      uVar8 = local_80;
      lVar9 = lStack_78;
    }
  }
  else {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    iVar1 = *(int *)(lVar10 + 0x18);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      lVar9 = FUN_049cec24(lVar10,iVar1,*(undefined8 *)puVar3);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (*(char *)(lVar9 + 0x48) == '\0') {
        FUN_049d05ec(lVar10,iVar1,*(undefined8 *)puVar4);
      }
    }
    FUN_049cf100(lVar10,param_4,
                 *(undefined8 *)Method_System_Collections_Generic_Dictionary<string,_int>_set_Item__
                );
    uVar8 = local_80;
    lVar9 = lStack_78;
    if (*(int *)(lVar10 + 0x18) == 0) {
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar6 = FUN_04bb37dc(*(long *)(param_1 + 0x40),uVar5,lVar10,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__)
      ;
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_04bb433c(*(long *)(param_1 + 0x40),uVar6,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<string,_int>_GetEnumerator__);
      if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      System_Collections_Generic_List<Vector2>__RemoveRange
                (*(long *)(param_1 + 0x48),uVar6,*(undefined8 *)PTR_DAT_07d8b398);
      FUN_07764600(param_1,uVar5 & 0xffffffff,1);
      uVar8 = local_80;
      lVar9 = lStack_78;
    }
  }
LAB_07764da4:
  lStack_78 = lVar9;
  local_80 = uVar8;
  FUN_05de2744(&local_70,*(undefined8 *)puVar2);
  return;
}


