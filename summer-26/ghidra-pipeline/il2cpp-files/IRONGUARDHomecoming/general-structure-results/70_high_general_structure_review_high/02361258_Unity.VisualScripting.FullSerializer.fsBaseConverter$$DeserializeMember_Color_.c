/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsBaseConverter$$DeserializeMember<Color>
ENTRY_POINT: 02361258
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_8;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsBaseConverter__DeserializeMember<Color>
               (long param_1,undefined8 param_2,int param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = param_4;
  if (*(long *)(param_5 + 0x38) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<Grabbable>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<GrabObject>__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_GetHashCodeOfString__);
    thunk_FUN_01efb3a4(Method_System_Collections_Comparer_GetObjectData__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_01ecafa0(param_5);
    }
  }
  puVar1 = Method_System_Globalization_CompareInfo_GetHashCodeOfString__;
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar14 = thunk_FUN_01efb3a4(Method_System_Collections_Comparer_Compare__);
    FUN_034efd20(uVar6,uVar14,0);
  }
  else {
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(*(long *)Method_System_Globalization_CompareInfo_GetHashCodeOfString__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
    if ((int)uVar14 == 0) {
      uVar15 = *(ulong *)(param_1 + 0x18);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if ((uVar15 & 0x700000000) == 0) {
        lVar16 = *(long *)(param_1 + 0x78);
        iVar3 = (**(code **)**(undefined8 **)(param_5 + 0x38))();
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar8);
        }
        uVar4 = FUN_03bf27e0(param_1 + 0x10,0);
        if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0)
        {
          thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
        }
        uVar4 = FUN_0356bd3c((long)iVar3,uVar4,0);
        uVar14 = (*(code *)**(undefined8 **)(*(long *)(param_5 + 0x38) + 0x10))(param_2);
        puVar1 = Method_System_Collections_Comparer_GetObjectData__;
        if (lVar16 != 0) {
          iVar3 = *(int *)(param_1 + 0x14);
          iVar11 = *(int *)(lVar16 + 0x14);
          lVar8 = *(long *)Method_System_Collections_Comparer_GetObjectData__;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar8 = *(long *)puVar1;
          }
          lVar17 = **(long **)(lVar8 + 0xb8);
          if (param_3 == 0) {
            lVar9 = lVar17;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar9 = **(long **)(*(long *)puVar1 + 0xb8);
            }
            if (lVar9 == 0) goto LAB_0236150c;
            param_3 = FUN_03bb242c(lVar9,0);
          }
          iVar3 = iVar3 - iVar11;
          uVar15 = FUN_03be9998(&stack0x00000008,0);
          bVar2 = (uVar15 & 1) == 0;
          lVar8 = 0;
          if (bVar2) {
            lVar8 = lVar17;
          }
          lVar9 = 0;
          if (bVar2) {
            lVar9 = lVar16;
          }
          iVar11 = 0;
          if (bVar2) {
            iVar11 = param_3;
          }
          uVar6 = 0;
          if (bVar2) {
            uVar6 = uVar14;
          }
          iVar18 = 0;
          if (bVar2) {
            iVar18 = iVar3;
          }
          uVar13 = 0;
          if (bVar2) {
            uVar13 = uVar4;
          }
          if ((uVar15 & 1) == 0) {
            plVar12 = (long *)**(undefined8 **)
                                (*(long *)Method_UnityEngine_Component_GetComponent<GrabObject>__ +
                                0xb8);
            if (plVar12 == (long *)0x0) goto LAB_0236150c;
            lVar16 = *plVar12;
            uVar15 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar15 != 0) {
              piVar10 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) ==
                    *(long *)Method_UnityEngine_Component_GetComponent<Grabbable>__) {
                  puVar5 = (undefined8 *)(lVar16 + (long)(*piVar10 + 0x13) * 0x10 + 0x138);
                  goto LAB_023614ac;
                }
                uVar15 = uVar15 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar15 != 0);
            }
            puVar5 = (undefined8 *)
                     FUN_01ecb238(plVar12,*(long *)
                                           Method_UnityEngine_Component_GetComponent<Grabbable>__,
                                  0x13);
LAB_023614ac:
            (*(code *)*puVar5)(plVar12,puVar5[1]);
          }
          else {
            FUN_03bf4558(&stack0x00000008,0);
            lVar9 = lVar16;
            uVar6 = uVar14;
            lVar8 = lVar17;
            iVar18 = iVar3;
            iVar11 = param_3;
            uVar13 = uVar4;
          }
          if (lVar8 != 0) {
            FUN_03bb7130(lVar8,lVar9,iVar11,uVar6,iVar18,uVar13,uStack0000000000000008,0);
            return;
          }
        }
LAB_0236150c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    uVar14 = thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<IAudioEventProvider>__);
    uVar14 = FUN_03406290(uVar14,param_1,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(Method_System_Collections_Comparer_Compare__);
    FUN_034efd98(uVar6,uVar14,uVar7,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_5);
}


