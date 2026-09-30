/*
FUNCTION_NAME: FUN_07815cf0
ENTRY_POINT: 07815cf0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_07815cf0(long param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_0827233e & 1) == 0) {
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_MoveNext__);
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<StylePropertyAnimationSystem_Values>_Dispose__
                );
    FUN_0373b518(PTR_DAT_07d96f98);
    FUN_0373b518(
                Method_System_Collections_Generic_List_Enumerator<StylePropertyAnimationSystem_Values>_MoveNext__
                );
    FUN_0373b518(Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__);
    DAT_0827233e = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__
                     + 0x130);
    if (((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
        (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
         *(long *)Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__)
        ) && (*(char *)(param_1 + 0x4d9) == '\0')) {
      lVar8 = param_2[0xa1];
      if (lVar8 != 0) {
        if (*(long *)(param_1 + 0x4a8) == 0) {
LAB_07815ef8:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        FUN_0771dbc4(*(long *)(param_1 + 0x4a8),lVar8,0);
        lVar3 = *(long *)(param_1 + 0x4c0);
        if (lVar3 == 0) goto LAB_07815ef8;
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar7 = *(long *)PTR_DAT_07d96f98;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_07815ef8;
        uVar2 = *(uint *)(lVar3 + 0x18);
        if (uVar2 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar2 + 1;
          plVar6 = (long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
          *plVar6 = lVar8;
          thunk_FUN_037aeb94(plVar6,lVar8);
        }
        else {
          FUN_049ceef4(lVar3,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
        }
        lVar8 = *(long *)(param_1 + 0x4b8);
        if (lVar8 == 0) goto LAB_07815ef8;
        lVar3 = *(long *)(lVar8 + 0x10);
        lVar5 = *(long *)
                 Method_System_Collections_Generic_List_Enumerator<StylePropertyAnimationSystem_Values>_Dispose__
        ;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar3 == 0) goto LAB_07815ef8;
        uVar2 = *(uint *)(lVar8 + 0x18);
        if (uVar2 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar2 + 1;
          plVar6 = (long *)(lVar3 + (long)(int)uVar2 * 8 + 0x20);
          *plVar6 = (long)param_2;
          thunk_FUN_037aeb94(plVar6,param_2);
        }
        else {
          FUN_049ceef4(lVar8,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        FUN_0781229c(param_2,*(undefined1 *)(param_1 + 0x4e8),0);
      }
      uVar4 = thunk_FUN_037788cc(*(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_MoveNext__
                                );
      FUN_059b2670(uVar4,param_1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<StylePropertyAnimationSystem_Values>_MoveNext__
                   ,0);
      FUN_07810e40(param_2,uVar4,0);
      if (*(long *)(param_1 + 0x4c8) == 0) {
        FUN_07815104(param_1,param_2);
        return;
      }
    }
  }
  return;
}


