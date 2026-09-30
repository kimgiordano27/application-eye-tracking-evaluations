/*
FUNCTION_NAME: FUN_060ea190
ENTRY_POINT: 060ea190
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_19;telemetry_or_network_hits_21;frame_or_lifecycle_behavior
*/


void FUN_060ea190(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  
  if ((DAT_06a82e45 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e10c0);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Apis_Storage_v1_BucketsResource_DeleteRequest_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Apis_Storage_v1_BucketsResource_GetIamPolicyRequest_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e03d8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e2338);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Apis_Storage_v1_BucketsResource_GetRequest_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Apis_Storage_v1_BucketsResource_InsertRequest_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e03f8);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Apis_Storage_v1_BucketsResource_ListRequest_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Apis_Storage_v1_BucketsResource_LockRetentionPolicyRequest_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e10c8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e03e8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065df480);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Apis_Storage_v1_BucketsResource_PatchRequest_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Apis_Storage_v1_BucketsResource_SetIamPolicyRequest_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Apis_Storage_v1_BucketsResource_TestIamPermissionsRequest_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Apis_Storage_v1_BucketsResource_UpdateRequest_TypeInfo);
    DAT_06a82e45 = 1;
  }
  lVar2 = FUN_05f904d8(param_1,0);
  if (lVar2 != 0) {
    uVar8 = 0;
    do {
      if (*(int *)(lVar2 + 0x20) <= (int)uVar8) {
        if (*(char *)(param_1 + 0x59) == '\0') {
          return;
        }
        *(undefined1 *)(param_1 + 0x59) = 0;
        lVar2 = *(long *)(param_1 + 0x48);
        uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e03e8);
        FUN_04a03924(uVar3,param_1,
                     *(undefined8 *)Google_Apis_Storage_v1_BucketsResource_UpdateRequest_TypeInfo,0)
        ;
        if (lVar2 != 0) {
          FUN_0338dbd0(lVar2,uVar3,1,*(undefined8 *)PTR_DAT_065e03f8);
          if ((*(long *)(param_1 + 0x48) != 0) &&
             (plVar4 = (long *)FUN_060ca13c(*(long *)(param_1 + 0x48),0), plVar4 != (long *)0x0)) {
            lVar2 = *plVar4;
            uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar6 == 0) goto LAB_060ea3a4;
            piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            goto LAB_060ea38c;
          }
        }
        break;
      }
      lVar2 = FUN_05f904d8(param_1,0);
      if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x40), lVar2 == 0)) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      if (*(int *)(lVar2 + (long)(int)uVar8 * 0x30 + 0x20) == 0x26afb9) {
        lVar2 = *(long *)(param_1 + 0x48);
        uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e03e8);
        FUN_04a03924(uVar3,param_1,
                     *(undefined8 *)Google_Apis_Storage_v1_BucketsResource_UpdateRequest_TypeInfo,0)
        ;
        if (lVar2 != 0) {
          FUN_0338d850(lVar2,uVar3,1,*(undefined8 *)PTR_DAT_065e03d8);
          if ((*(long *)(param_1 + 0x48) != 0) &&
             (plVar4 = (long *)FUN_060ca13c(*(long *)(param_1 + 0x48),0), plVar4 != (long *)0x0)) {
            lVar2 = *plVar4;
            uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar6 == 0) goto LAB_060ea454;
            piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            goto LAB_060ea43c;
          }
        }
        break;
      }
      uVar8 = uVar8 + 1;
      lVar2 = FUN_05f904d8(param_1,0);
    } while (lVar2 != 0);
  }
  goto LAB_060ea2f4;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_060ea38c:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065df480) {
      puVar5 = (undefined8 *)(lVar2 + (long)(*piVar7 + 2) * 0x10 + 0x138);
      goto LAB_060ea594;
    }
  }
LAB_060ea3a4:
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)PTR_DAT_065df480,2);
LAB_060ea594:
  iVar1 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  if (iVar1 != 1) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x48);
  uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e10c8);
  FUN_04a03924(uVar3,param_1,
               *(undefined8 *)Google_Apis_Storage_v1_BucketsResource_PatchRequest_TypeInfo,0);
  if (lVar2 != 0) {
    FUN_0338dbd0(lVar2,uVar3,1,*(undefined8 *)PTR_DAT_065e2338);
    lVar2 = *(long *)(param_1 + 0x48);
    uVar3 = thunk_FUN_02cea894(*(undefined8 *)
                                Google_Apis_Storage_v1_BucketsResource_ListRequest_TypeInfo);
    FUN_04a03924(uVar3,param_1,
                 *(undefined8 *)
                  Google_Apis_Storage_v1_BucketsResource_TestIamPermissionsRequest_TypeInfo,0);
    if (lVar2 != 0) {
      FUN_0338dbd0(lVar2,uVar3,1,
                   *(undefined8 *)Google_Apis_Storage_v1_BucketsResource_InsertRequest_TypeInfo);
      lVar2 = *(long *)(param_1 + 0x48);
      uVar3 = thunk_FUN_02cea894(*(undefined8 *)
                                  Google_Apis_Storage_v1_BucketsResource_LockRetentionPolicyRequest_TypeInfo
                                );
      FUN_04a03924(uVar3,param_1,
                   *(undefined8 *)
                    Google_Apis_Storage_v1_BucketsResource_SetIamPolicyRequest_TypeInfo,0);
      if (lVar2 != 0) {
        FUN_0338dbd0(lVar2,uVar3,1,
                     *(undefined8 *)Google_Apis_Storage_v1_BucketsResource_GetRequest_TypeInfo);
        return;
      }
    }
  }
  goto LAB_060ea2f4;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_060ea43c:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065df480) {
      puVar5 = (undefined8 *)(lVar2 + (long)(*piVar7 + 2) * 0x10 + 0x138);
      goto LAB_060ea474;
    }
  }
LAB_060ea454:
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)PTR_DAT_065df480,2);
LAB_060ea474:
  iVar1 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  if (iVar1 != 1) {
LAB_060ea578:
    *(undefined1 *)(param_1 + 0x59) = 1;
    return;
  }
  lVar2 = *(long *)(param_1 + 0x48);
  uVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e10c8);
  FUN_04a03924(uVar3,param_1,
               *(undefined8 *)Google_Apis_Storage_v1_BucketsResource_PatchRequest_TypeInfo,0);
  if (lVar2 != 0) {
    FUN_0338d850(lVar2,uVar3,1,*(undefined8 *)PTR_DAT_065e10c0);
    lVar2 = *(long *)(param_1 + 0x48);
    uVar3 = thunk_FUN_02cea894(*(undefined8 *)
                                Google_Apis_Storage_v1_BucketsResource_ListRequest_TypeInfo);
    FUN_04a03924(uVar3,param_1,
                 *(undefined8 *)
                  Google_Apis_Storage_v1_BucketsResource_TestIamPermissionsRequest_TypeInfo,0);
    if (lVar2 != 0) {
      FUN_0338d850(lVar2,uVar3,1,
                   *(undefined8 *)
                    Google_Apis_Storage_v1_BucketsResource_GetIamPolicyRequest_TypeInfo);
      lVar2 = *(long *)(param_1 + 0x48);
      uVar3 = thunk_FUN_02cea894(*(undefined8 *)
                                  Google_Apis_Storage_v1_BucketsResource_LockRetentionPolicyRequest_TypeInfo
                                );
      FUN_04a03924(uVar3,param_1,
                   *(undefined8 *)
                    Google_Apis_Storage_v1_BucketsResource_SetIamPolicyRequest_TypeInfo,0);
      if (lVar2 != 0) {
        FUN_0338d850(lVar2,uVar3,1,
                     *(undefined8 *)Google_Apis_Storage_v1_BucketsResource_DeleteRequest_TypeInfo);
        goto LAB_060ea578;
      }
    }
  }
LAB_060ea2f4:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


