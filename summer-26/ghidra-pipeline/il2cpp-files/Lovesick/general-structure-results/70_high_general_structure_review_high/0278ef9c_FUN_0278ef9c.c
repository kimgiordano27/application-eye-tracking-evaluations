/*
FUNCTION_NAME: FUN_0278ef9c
ENTRY_POINT: 0278ef9c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


long FUN_0278ef9c(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar2 = Method_OVRTask_FromRequest<OVRResult<Guid,_OVRColocationSession_Result>>__;
  if ((DAT_037886cd & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IXRHoverFilter>_MoveNext__)
    ;
    thunk_FUN_00d48444(StringLiteral_9480);
    thunk_FUN_00d48444(OVR_OpenVR_IVRScreenshots__HookScreenshot_TypeInfo);
    thunk_FUN_00d48444(Method_OVRTask_FromRequest<OVRResult<Guid,_OVRColocationSession_Result>>__);
    DAT_037886cd = 1;
  }
  local_48 = 0;
  local_40 = 0;
  FUN_02795334(&local_40,param_1,param_2,0);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 != 0) {
    local_38 = local_40;
    uVar5 = FUN_0129eff4(lVar4,&local_38,&local_48,*(undefined8 *)StringLiteral_9480);
    if ((uVar5 & 1) != 0) {
      return local_48;
    }
    if ((param_1 != 0) && (lVar4 = FUN_028181f8(param_1,0), lVar4 != 0)) {
      if (*(uint *)(lVar4 + 0x18) <= param_2) {
LAB_0278f158:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar4 = *(long *)(lVar4 + (long)(int)param_2 * 8 + 0x20);
      if (((lVar4 != 0) && (lVar6 = FUN_028181b8(lVar4,0), lVar6 != 0)) &&
         (local_48 = FUN_00da4fb8(*(undefined8 *)OVR_OpenVR_IVRScreenshots__HookScreenshot_TypeInfo,
                                  *(undefined4 *)(lVar6 + 0x18)),
         puVar1 = Method_System_Collections_Generic_List_Enumerator<IXRHoverFilter>_MoveNext__,
         local_48 != 0)) {
        uVar5 = 0;
        do {
          lVar6 = local_48;
          lVar7 = *(long *)puVar2;
          if ((long)*(int *)(local_48 + 0x18) <= (long)uVar5) {
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar7 = *(long *)puVar2;
            }
            lVar4 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
            if (lVar4 != 0) {
              local_38 = local_40;
              FUN_0129a054(lVar4,&local_38,local_48,*(undefined8 *)puVar1);
              return local_48;
            }
            break;
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar3 = FUN_0279508c(lVar4,uVar5 & 0xffffffff);
          if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_0278f158;
          *(undefined4 *)(lVar6 + uVar5 * 4 + 0x20) = uVar3;
          uVar5 = uVar5 + 1;
        } while (local_48 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


