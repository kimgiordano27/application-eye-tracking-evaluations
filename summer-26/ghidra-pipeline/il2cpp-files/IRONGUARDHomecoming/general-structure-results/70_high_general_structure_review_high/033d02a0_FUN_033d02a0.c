/*
FUNCTION_NAME: FUN_033d02a0
ENTRY_POINT: 033d02a0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_6
*/


void FUN_033d02a0(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar9;
  undefined *puVar8;
  
  if ((DAT_048324f5 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<FixedBufferAttribute>__
                      );
    DAT_048324f5 = 1;
  }
  FUN_035ac8e8(param_1,0);
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (param_2 != 0) {
    if (((*(char *)(param_2 + 0x10) != '0') ||
        (plVar2 = *(long **)(param_2 + 0x20), plVar2 == (long *)0x0)) ||
       (iVar1 = (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0)), iVar1 < 2))
    {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar5 = thunk_FUN_01f117cc();
      puVar8 = 
      Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<NonSerializedAttribute>__
      ;
LAB_033d057c:
      uVar7 = thunk_FUN_01efb3a4(puVar8);
      FUN_034f6754(uVar5,uVar7,0);
      uVar7 = thunk_FUN_01efb3a4(
                                Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_DeAlias__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar5,uVar7);
    }
    lVar3 = FUN_033cea34(param_2,0);
    if (lVar3 != 0) {
      if (*(char *)(lVar3 + 0x10) != '\x02') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar5 = thunk_FUN_01f117cc();
        puVar8 = 
        Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<OdinSerializeAttribute>__
        ;
        goto LAB_033d057c;
      }
      lVar3 = FUN_033cea34(param_2,0);
      if ((lVar3 != 0) && (lVar3 = FUN_033cdff8(), lVar3 != 0)) {
        if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(lVar3 + 0x20);
        lVar3 = FUN_033cea34(param_2,1);
        if (lVar3 != 0) {
          if (*(char *)(lVar3 + 0x10) != '0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
            uVar5 = thunk_FUN_01f117cc();
            puVar8 = 
            Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<SerializeField>__;
            goto LAB_033d057c;
          }
          if ((lVar3 != 0) &&
             (lVar4 = FUN_033cea34(lVar3,0),
             puVar8 = 
             Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<FixedBufferAttribute>__
             , lVar4 != 0)) {
            if (*(char *)(lVar4 + 0x10) != '\x06') {
              thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
              uVar5 = thunk_FUN_01f117cc();
              puVar8 = 
              Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<NonSerializedAttribute>__
              ;
              goto LAB_033d057c;
            }
            uVar5 = FUN_033cf3e4();
            lVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar8);
            FUN_033cfef4();
            *(undefined8 *)(lVar4 + 0x10) = uVar5;
            thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x10),uVar5);
            *(long *)(param_1 + 0x18) = lVar4;
            thunk_FUN_01f51358((long *)(param_1 + 0x18),lVar4);
            if ((lVar3 != 0) && (lVar4 = FUN_033cea34(lVar3,1), lVar4 != 0)) {
              if (*(char *)(lVar4 + 0x10) != '0') {
                thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
                uVar5 = thunk_FUN_01f117cc();
                puVar8 = 
                Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<OdinSerializeAttribute>__
                ;
                goto LAB_033d057c;
              }
              FUN_033cea34(lVar4,0);
              uVar5 = FUN_033cf3e4();
              lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar8);
              FUN_033cfef4();
              *(undefined8 *)(lVar6 + 0x10) = uVar5;
              thunk_FUN_01f51358((undefined8 *)(lVar6 + 0x10),uVar5);
              plVar2 = (long *)(param_1 + 0x20);
              *plVar2 = lVar6;
              thunk_FUN_01f51358(plVar2,lVar6);
              lVar6 = *plVar2;
              uVar5 = FUN_033cea34(lVar4,1);
              if (lVar6 != 0) {
                puVar9 = (undefined8 *)(lVar6 + 0x18);
                *puVar9 = uVar5;
                thunk_FUN_01f51358(puVar9,uVar5);
                if ((lVar3 != 0) && (lVar3 = FUN_033cea34(lVar3,2), lVar3 != 0)) {
                  if (*(char *)(lVar3 + 0x10) == -0x80) {
                    uVar5 = FUN_033cdff8();
                    *(undefined8 *)(param_1 + 0x28) = uVar5;
                    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x28),uVar5);
                    return;
                  }
                  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
                  uVar5 = thunk_FUN_01f117cc();
                  puVar8 = 
                  Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<SerializeField>__
                  ;
                  goto LAB_033d057c;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


