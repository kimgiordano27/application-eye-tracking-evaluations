/*
FUNCTION_NAME: UnityWebSocketSharp.Ext.<SplitHeaderValue>d__54$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 05c19678
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
UnityWebSocketSharp_Ext_<SplitHeaderValue>d__54__System_Collections_IEnumerator_get_Current
          (long param_1,long param_2)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x19;
  long *unaff_x21;
  long lVar9;
  long *plVar10;
  
  FUN_05ceb6cc(param_2,**(undefined8 **)(param_1 + 0x6c0));
  puVar1 = OVRPlugin_OVRP_1_36_0_TypeInfo;
  uVar4 = FUN_0536ba54(unaff_x21[0x15],*(undefined8 *)OVRPlugin_OVRP_1_36_0_TypeInfo,0);
  if (((uVar4 & 1) != 0) &&
     (((*(char *)((long)unaff_x21 + 0x4a) == '\0' || (uVar4 = FUN_05c16a90(), (uVar4 & 1) == 0)) &&
      (unaff_x21[0x31] == 0)))) {
    if (unaff_x21[0x1f] == 0) goto LAB_05c1987c;
    iVar3 = FUN_05c3095c(unaff_x21[0x1f],0);
    if ((0 < iVar3) || (0 < unaff_x21[0xd])) {
      param_2 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a10338);
      FUN_05ce6238(param_2,*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<string,_ExpressionEvaluator_Operator>_ContainsKey__
                   ,0,7);
    }
  }
  if (param_2 != 0) {
    uVar7 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_Add__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(param_2,uVar7);
  }
  uVar4 = (**(code **)(*unaff_x21 + 0x348))();
  if (((uVar4 & 1) != 0) ||
     (uVar4 = thunk_FUN_0536b75c(unaff_x21[0x15],*(undefined8 *)puVar1,0), (uVar4 & 1) != 0)) {
    unaff_x21[0xd] = -1;
  }
  if (unaff_x19 != (long *)0x0) {
    lVar5 = (**(code **)(*unaff_x19 + 0x218))();
    if (lVar5 != 0) {
      lVar5 = FUN_05ccbaa0(lVar5,*(undefined8 *)Mono_Security_PKCS7_SignerInfo_TypeInfo,0);
      if (lVar5 == 0) {
        uVar7 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),&stack0x00000004);
        uVar8 = thunk_FUN_02dfd288(
                                  Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_GetEnumerator__
                                  );
        uVar7 = FUN_0536388c(uVar8,uVar7,0);
        thunk_FUN_02dfd288(PTR_DAT_06a10338);
        uVar8 = thunk_FUN_02dd3144();
        FUN_05ce6238(uVar8,uVar7,0,7);
        uVar7 = thunk_FUN_02dfd288(
                                  Method_System_Collections_Generic_Dictionary<string,_HttpHeaders_HeaderBucket>_Add__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar8,uVar7);
      }
      plVar10 = unaff_x21 + 8;
      lVar9 = *plVar10;
      lVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff488);
      FUN_05c08c50(lVar6,lVar9,lVar5,0);
      *plVar10 = lVar6;
      LeanTween__value(plVar10,lVar6);
      if ((*plVar10 != 0) && (uVar7 = FUN_05c0c424(*plVar10,0), lVar9 != 0)) {
        uVar8 = FUN_05c0c424(lVar9,0);
        uVar4 = FUN_0536ba54(uVar7,uVar8,0);
        if ((uVar4 & 1) == 0) {
          uVar7 = FUN_05c16d38();
          uVar8 = FUN_05c0b228(lVar9,0);
          bVar2 = FUN_0536ba54(uVar7,uVar8,0);
        }
        else {
          bVar2 = 1;
        }
        *(byte *)(unaff_x21 + 9) = bVar2 & 1;
        return 1;
      }
    }
  }
LAB_05c1987c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


