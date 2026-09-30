/*
FUNCTION_NAME: FUN_057d54fc
ENTRY_POINT: 057d54fc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_057d54fc(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_057d5634:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_04f79730(*(long *)(param_1 + 0x20),param_2,0);
  }
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = 0;
  iVar9 = 0;
  do {
    if (iVar9 < iVar1) {
      lVar10 = *(long *)(param_1 + 0x30);
      uVar4 = FUN_04f69818(param_2,iVar9,0);
      if (lVar10 == 0) goto LAB_057d5634;
      uVar2 = (uint)uVar4;
      if (*(uint *)(lVar10 + 0x18) <= (uVar2 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      iVar8 = 1;
      if (((*(byte *)(lVar10 + (uVar4 & 0xffff) + 0x20) >> 4 & 1) == 0) && (0x1f < (uVar2 & 0xffff))
         ) goto LAB_057d558c;
    }
    else {
LAB_057d558c:
      if (iVar9 == iVar1) {
        plVar5 = *(long **)(param_1 + 0x10);
        if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x057d561c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x238))(plVar5,param_2,*(undefined8 *)(*plVar5 + 0x240));
          return;
        }
        goto LAB_057d5634;
      }
      uVar4 = FUN_058175f4(uVar2 & 0xffff,0);
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_05817604(uVar2 & 0xffff,0);
        if ((uVar4 & 1) != 0) {
          thunk_FUN_02f6ef30(Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
          FUN_02a7d698();
          uVar6 = FUN_0581fcb4(uVar2,0);
          goto LAB_057d567c;
        }
        iVar8 = 1;
      }
      else {
        if (iVar1 <= iVar9 + 1) {
          uVar6 = thunk_FUN_02f6ef30(
                                    Method_System_Collections_Generic_Dictionary<BodyJointId,_BodySkeletonMapping_JointInfo<OVRPlugin_BoneId>>__ctor__
                                    );
          uVar6 = FUN_0581abc0(uVar6,0);
          thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
          uVar7 = thunk_FUN_02f45270();
          FUN_05055664(uVar7,uVar6,0);
          uVar6 = thunk_FUN_02f6ef30(
                                    Method_System_Collections_Generic_List_Enumerator<PageScroll_Page>_Dispose__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar7,uVar6);
        }
        uVar3 = FUN_04f69818(param_2,iVar9 + 1,0);
        uVar4 = FUN_05817604(uVar3 & 0xffff,0);
        if ((uVar4 & 1) == 0) {
          thunk_FUN_02f6ef30(Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
          FUN_02a7d698();
          uVar6 = FUN_0581fbd8(uVar3,uVar2,0);
LAB_057d567c:
          uVar7 = thunk_FUN_02f6ef30(
                                    Method_System_Collections_Generic_List_Enumerator<PageScroll_Page>_Dispose__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar6,uVar7);
        }
        iVar8 = 2;
      }
    }
    iVar9 = iVar9 + iVar8;
  } while( true );
}


