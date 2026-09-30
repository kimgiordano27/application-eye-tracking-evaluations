/*
FUNCTION_NAME: FUN_06b47bc8
ENTRY_POINT: 06b47bc8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_06b47bc8(long param_1,undefined8 *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_0755fe8a & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2438);
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                );
    FUN_03188a78(PTR_DAT_07114830);
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                );
    FUN_03188a78(PTR_DAT_070f5a70);
    FUN_03188a78(
                Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__
                );
    FUN_03188a78(PTR_DAT_070c24e0);
    FUN_03188a78(Method_System_Collections_Generic_List_Enumerator<IntegratedSubsystem>_MoveNext__);
    DAT_0755fe8a = 1;
  }
  iVar5 = FUN_06b47b50(param_2);
  puVar4 = Method_System_Collections_Generic_List_Enumerator<IntegratedSubsystem>_MoveNext__;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar6 = FUN_042825b4(*(long *)(param_1 + 0x20),iVar5,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_MoveNext__
                        );
    puVar3 = PTR_DAT_070c24e0;
    if ((int)uVar6 < 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_06b47ec4;
      FUN_04282fc0(*(long *)(param_1 + 0x20),~uVar6,iVar5,*(undefined8 *)PTR_DAT_07114830);
    }
    else {
      if ((*(long *)(param_1 + 0x18) == 0) || (*(long *)(param_1 + 0x28) == 0)) goto LAB_06b47ec4;
      iVar13 = *(int *)(*(long *)(param_1 + 0x18) + 0x18);
      iVar8 = iVar13 + -1;
      iVar7 = FUN_04281f90(*(long *)(param_1 + 0x28),iVar8,*(undefined8 *)PTR_DAT_070c24e0);
      if (iVar7 == iVar5) {
        return;
      }
      iVar13 = iVar13 + -2;
      if (-1 < iVar13) {
        uVar6 = iVar5 * iVar8;
        do {
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_06b47ec4;
          iVar8 = FUN_04281f90(*(long *)(param_1 + 0x28),iVar13,*(undefined8 *)puVar3);
          if (iVar8 == iVar5) {
            uVar2 = *(uint *)(param_1 + 0x10);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            *(uint *)(param_1 + 0x10) = uVar2 ^ uVar6;
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_06b47ec4;
            FUN_04378444(*(long *)(param_1 + 0x18),iVar13,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_get_Current__
                        );
            if (*(long *)(param_1 + 0x28) == 0) goto LAB_06b47ec4;
            System_Collections_Generic_List<TimerData>__System_Collections_IList_get_Item
                      (*(long *)(param_1 + 0x28),iVar13,*(undefined8 *)PTR_DAT_070f5a70);
            break;
          }
          uVar6 = uVar6 - iVar5;
          bVar1 = 0 < iVar13;
          iVar13 = iVar13 + -1;
        } while (bVar1);
      }
    }
    lVar9 = *(long *)(param_1 + 0x18);
    if (lVar9 != 0) {
      lVar10 = *(long *)puVar4;
      uVar6 = *(uint *)(param_1 + 0x10);
      iVar13 = *(int *)(lVar9 + 0x18);
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_031e5338(lVar10);
        lVar9 = *(long *)(param_1 + 0x18);
      }
      *(uint *)(param_1 + 0x10) = iVar5 + iVar5 * iVar13 ^ uVar6;
      if (lVar9 != 0) {
        uVar11 = param_2[2];
        uVar15 = param_2[1];
        uVar14 = *param_2;
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar12 = *(long *)
                  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
        ;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 != 0) {
          uVar6 = *(uint *)(lVar9 + 0x18);
          if (uVar6 < *(uint *)(lVar10 + 0x18)) {
            lVar10 = lVar10 + (long)(int)uVar6 * 0x18;
            *(uint *)(lVar9 + 0x18) = uVar6 + 1;
            *(undefined8 *)(lVar10 + 0x28) = uVar15;
            *(undefined8 *)(lVar10 + 0x20) = uVar14;
            *(undefined8 *)(lVar10 + 0x30) = uVar11;
          }
          else {
            local_60 = uVar14;
            uStack_58 = uVar15;
            local_50 = uVar11;
            FUN_043769cc(lVar9,&local_60,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          lVar9 = *(long *)(param_1 + 0x28);
          if (lVar9 != 0) {
            lVar10 = *(long *)(lVar9 + 0x10);
            lVar12 = *(long *)PTR_DAT_070c2438;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 != 0) {
              uVar6 = *(uint *)(lVar9 + 0x18);
              if (uVar6 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar6 + 1;
                *(int *)(lVar10 + (long)(int)uVar6 * 4 + 0x20) = iVar5;
              }
              else {
                FUN_04282288(lVar9,iVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_06b47ec4:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


