/*
FUNCTION_NAME: FUN_03625ae0
ENTRY_POINT: 03625ae0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void FUN_03625ae0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  
  puVar1 = Method_System_Collections_Hashtable_SyncHashtable_ContainsKey__;
  if ((DAT_04833a69 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Collections_Hashtable_SyncHashtable_GetObjectData__);
    thunk_FUN_01efb3a4(Method_System_Collections_Hashtable_ValueCollection_CopyTo__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_Input_Hmd_<>c_<_ctor>b__6_0__);
    thunk_FUN_01efb3a4(Method_System_Net_HttpWebRequest_<GetResponseFromData>d__244_MoveNext__);
    thunk_FUN_01efb3a4(Method_System_Net_HttpWebRequest_<MyGetResponseAsync>d__243_MoveNext__);
    thunk_FUN_01efb3a4(Method_System_Collections_Hashtable_SyncHashtable_ContainsKey__);
    DAT_04833a69 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar7 = FUN_03625cbc(param_2);
  puVar5 = Method_System_Net_HttpWebRequest_<MyGetResponseAsync>d__243_MoveNext__;
  puVar4 = Method_Oculus_Interaction_Input_Hmd_<>c_<_ctor>b__6_0__;
  puVar3 = Method_System_Collections_Hashtable_ValueCollection_CopyTo__;
  puVar2 = Method_System_Collections_Hashtable_SyncHashtable_GetObjectData__;
  if (lVar7 != 0) {
    if (0 < *(int *)(lVar7 + 0x18)) {
      iVar11 = 0;
      do {
        lVar8 = FUN_030f28e4(lVar7,iVar11,*(undefined8 *)puVar5);
        if (lVar8 == 0) goto LAB_03625cb8;
        uVar6 = FUN_04076320(lVar8,0);
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar8);
          lVar8 = *(long *)puVar1;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        if (lVar8 == 0) goto LAB_03625cb8;
        uVar9 = FUN_02b07348(lVar8,uVar6,*(undefined8 *)puVar2);
        if ((uVar9 & 1) == 0) {
          lVar8 = *(long *)puVar1;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar8 = *(long *)puVar1;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
          uVar10 = FUN_030f28e4(lVar7,iVar11,*(undefined8 *)puVar5);
          uVar10 = FUN_03625d4c(param_1,uVar10);
          if (lVar8 == 0) goto LAB_03625cb8;
          FUN_02b07140(lVar8,uVar6,uVar10,*(undefined8 *)puVar4);
        }
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar8 = *(long *)puVar1;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        if ((lVar8 == 0) || (lVar8 = FUN_02b070b4(lVar8,uVar6,*(undefined8 *)puVar3), lVar8 == 0))
        goto LAB_03625cb8;
        FUN_03624c84();
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(lVar7 + 0x18));
    }
    return;
  }
LAB_03625cb8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


