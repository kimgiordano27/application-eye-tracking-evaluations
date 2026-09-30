/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteValue
ENTRY_POINT: 03268278
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonTextWriter__WriteValue(long param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  
  do {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar4 = FUN_03266bd0(unaff_x21);
    if ((uVar4 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_032683e4;
    }
    else {
      if (unaff_x20 == (long *)0x0) goto LAB_032683e4;
      FUN_03161a54();
    }
    unaff_w25 = unaff_w25 + -1;
    FUN_0315ab48();
    bVar1 = false;
    if (0 < unaff_w25) {
      if (0 < *(int *)(unaff_x21 + 0x10)) {
        sVar2 = FUN_0314e438(unaff_x21,*(int *)(unaff_x21 + 0x10) + -1,0);
        lVar8 = *unaff_x23;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar8);
          lVar8 = *unaff_x23;
        }
        lVar9 = *(long *)(lVar8 + 0xb8);
        if (*(short *)(lVar9 + 10) != sVar2) {
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(lVar8);
            lVar8 = *unaff_x23;
            lVar9 = *(long *)(lVar8 + 0xb8);
          }
          if (*(short *)(lVar9 + 8) != sVar2) {
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(lVar8);
              lVar9 = *(long *)(*unaff_x23 + 0xb8);
            }
            bVar1 = *(short *)(lVar9 + 0x18) != sVar2;
            goto LAB_03268360;
          }
        }
        bVar1 = false;
      }
    }
LAB_03268360:
    do {
      unaff_x22 = unaff_x22 + 1;
      if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)(uint)unaff_x22) {
        if (unaff_x20 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03268394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*unaff_x20 + 0x168))();
          return;
        }
        goto LAB_032683e4;
      }
      if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x22) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      unaff_x21 = *(long *)(unaff_x24 + unaff_x22 * 8);
      if (unaff_x21 == 0) {
        thunk_FUN_01c273e8(PTR_DAT_0422fa20);
        uVar6 = thunk_FUN_01c496e0();
        uVar7 = thunk_FUN_01c273e8(
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AsyncProtocolResult>_Start<AsyncProtocolRequest_<StartOperation>d__23>__
                                  );
        uVar5 = thunk_FUN_01c273e8(
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AsyncProtocolResult>_Create__
                                  );
        FUN_03247d68(uVar6,uVar7,uVar5,0);
        goto LAB_03268418;
      }
    } while (*(int *)(unaff_x21 + 0x10) == 0);
    lVar8 = *unaff_x23;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar8 = *unaff_x23;
    }
    iVar3 = FUN_031573a0(unaff_x21,**(undefined8 **)(lVar8 + 0xb8),0);
    if (iVar3 != -1) {
      thunk_FUN_01c273e8(PTR_DAT_04231770);
      uVar6 = thunk_FUN_01c496e0();
      uVar7 = thunk_FUN_01c273e8(
                                Method_UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle<IList<AsyncOperationHandle>>_IsValid__
                                );
      FUN_032467a0(uVar6,uVar7,0);
LAB_03268418:
      uVar7 = thunk_FUN_01c273e8(
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AsyncProtocolResult>_SetException__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar6,uVar7);
    }
    if (bVar1) {
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      if (unaff_x20 == (long *)0x0) {
LAB_032683e4:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_0315ab48();
    }
    param_1 = *unaff_x23;
  } while( true );
}


