/*
FUNCTION_NAME: FUN_05a7c178
ENTRY_POINT: 05a7c178
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_20;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


undefined8 FUN_05a7c178(long param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_06dc1bd6 & 1) == 0) {
    FUN_02d965b8(System_Collections_Generic_Dictionary<OVRGrabbable,_int>_TypeInfo);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<string,_string>>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_SessionsManager_<StartSessionAsHost>d__57>__
                );
    DAT_06dc1bd6 = 1;
  }
  if (*(int *)(param_1 + 0x24) < 0) {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
  }
  if (0x79 < param_2) {
    if (param_2 < 0x84) {
      if (param_2 - 0x7aU < 6) {
        FUN_05a78fbc(param_1,2,param_2);
        *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x20);
        iVar1 = FUN_05a7c504(param_1,param_2);
        goto LAB_05a7c420;
      }
      if (2 < param_2 - 0x81U) goto switchD_05a7c1f8_caseD_15;
    }
    else {
      if (param_2 < 0x89) {
        if (param_2 < 0x87) {
          if (param_2 - 0x84U < 2) goto switchD_05a7c1f8_caseD_c;
          if (param_2 != 0x86) goto switchD_05a7c1f8_caseD_15;
        }
        else {
          if (param_2 == 0x87) goto switchD_05a7c1f8_caseD_a;
          if (param_2 != 0x88) goto switchD_05a7c1f8_caseD_15;
        }
        goto switchD_05a7c1f8_caseD_6;
      }
      if (param_2 < 0x8b) {
        if (param_2 != 0x89) {
          if (param_2 != 0x8a) goto switchD_05a7c1f8_caseD_15;
          goto switchD_05a7c1f8_caseD_2;
        }
        goto switchD_05a7c1f8_caseD_1;
      }
      if (param_2 != 0x8b) {
        if (param_2 == 0x8c) {
          *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x20);
          FUN_05a79634(param_1);
          goto LAB_05a7c4bc;
        }
switchD_05a7c1f8_caseD_15:
        uVar3 = FUN_05a78ff0(param_1);
        uVar4 = thunk_FUN_02dfd288(
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<string,_string>>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_SessionsManager_<StartSessionAsHost>d__57>__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar3,uVar4);
      }
    }
switchD_05a7c1f8_caseD_4:
    iVar2 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x104) = 8;
    *(int *)(param_1 + 0x108) = iVar2;
    if (0x7ffffff7 < iVar2) goto LAB_05a7c4f0;
    iVar2 = iVar2 + 8;
    goto LAB_05a7c4b8;
  }
  switch(param_2) {
  case 1:
switchD_05a7c1f8_caseD_1:
    iVar2 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x104) = 2;
    *(int *)(param_1 + 0x108) = iVar2;
    if (0x7ffffffd < iVar2) goto LAB_05a7c4f0;
    iVar2 = iVar2 + 2;
    break;
  case 2:
  case 3:
  case 0x13:
  case 0x14:
switchD_05a7c1f8_caseD_2:
    iVar2 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x104) = 4;
    *(int *)(param_1 + 0x108) = iVar2;
    if (0x7ffffffb < iVar2) goto LAB_05a7c4f0;
    iVar2 = iVar2 + 4;
    break;
  case 4:
  case 5:
  case 8:
  case 0x12:
    goto switchD_05a7c1f8_caseD_4;
  case 6:
  case 7:
switchD_05a7c1f8_caseD_6:
    iVar2 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x104) = 1;
    *(int *)(param_1 + 0x108) = iVar2;
    if (iVar2 == 0x7fffffff) goto LAB_05a7c4f0;
    iVar2 = iVar2 + 1;
    break;
  case 9:
    iVar2 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x104) = 0x10;
    *(int *)(param_1 + 0x108) = iVar2;
    if (0x7fffffef < iVar2) goto LAB_05a7c4f0;
    iVar2 = iVar2 + 0x10;
    break;
  case 10:
  case 0xb:
switchD_05a7c1f8_caseD_a:
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x20);
    iVar1 = FUN_05a79c7c(param_1);
LAB_05a7c420:
    iVar2 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x104) = iVar1;
    lVar5 = (long)iVar2 + (long)iVar1;
    goto LAB_05a7c42c;
  case 0xc:
  case 0xf:
  case 0x17:
  case 0x1b:
switchD_05a7c1f8_caseD_c:
    iVar1 = FUN_05a79c7c(param_1);
    iVar2 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x104) = iVar1;
    lVar5 = (long)iVar2 + (long)iVar1;
    *(int *)(param_1 + 0x108) = iVar2;
LAB_05a7c42c:
    if (lVar5 != (int)lVar5) {
LAB_05a7c4f0:
      uVar3 = FUN_02d96870();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar3,*(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<string,_string>>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_SessionsManager_<StartSessionAsHost>d__57>__
                  );
    }
    iVar2 = iVar2 + iVar1;
    break;
  case 0xd:
  case 0x10:
  case 0x16:
    iVar2 = FUN_05a79c7c(param_1);
    iVar1 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x104) = iVar2;
    *(int *)(param_1 + 0x108) = iVar1;
    if ((long)iVar1 + (long)iVar2 != (long)(int)((long)iVar1 + (long)iVar2)) goto LAB_05a7c4f0;
    *(int *)(param_1 + 0x20) = iVar1 + iVar2;
    if (((param_4 & 1) != 0) && (*(char *)(param_1 + 0x139) != '\0')) {
      if (*(int *)(param_1 + 0x28) <= iVar1 + iVar2 + -1) {
        System_Xml_XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer___cctor
                  (param_1,0xffffffff);
      }
      uVar3 = FUN_05a7220c(param_1,param_2);
      if (*(int *)(*(long *)System_Collections_Generic_Dictionary<OVRGrabbable,_int>_TypeInfo + 0xe4
                  ) == 0) {
        thunk_FUN_02df485c(*(long *)
                            System_Collections_Generic_Dictionary<OVRGrabbable,_int>_TypeInfo);
      }
      FUN_05bc443c(uVar3,0,1,0);
      *(undefined8 *)(param_1 + 0x118) = uVar3;
      LeanTween__value(param_1 + 0x118,uVar3);
    }
    goto LAB_05a7c4bc;
  case 0xe:
  case 0x11:
  case 0x18:
    uVar3 = FUN_05a7ab04(param_1,0x11,param_3 & 1,param_4 & 1);
    return uVar3;
  default:
    goto switchD_05a7c1f8_caseD_15;
  }
LAB_05a7c4b8:
  *(int *)(param_1 + 0x20) = iVar2;
LAB_05a7c4bc:
  if (*(int *)(param_1 + 0x28) <= *(int *)(param_1 + 0x20) + -1) {
    System_Xml_XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer___cctor
              (param_1,0xffffffff);
  }
  return 3;
}


