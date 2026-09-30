/*
FUNCTION_NAME: OVRPlugin$$GetNodeAngularAcceleration
ENTRY_POINT: 03380a00
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetNodeAngularAcceleration(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  
  if ((DAT_04533604 & 1) == 0) {
    FUN_01c5d288(System_Runtime_Remoting_InternalRemotingServices_TypeInfo);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredPrefsData>_Dispose__
                );
    DAT_04533604 = 1;
  }
  if (param_1 == 0) {
LAB_03380afc:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar4 = FUN_032eb44c(param_1,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar5 = FUN_03380b04(param_1,0,0);
    puVar2 = 
    Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredPrefsData>_Dispose__;
    if (lVar5 == 0) goto LAB_03380afc;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        lVar6 = *(long *)(lVar5 + (long)(int)uVar9 * 8 + 0x20);
        if ((lVar6 == 0) || (plVar7 = (long *)thunk_FUN_01c5d21c(lVar6,0), plVar7 == (long *)0x0))
        goto LAB_03380afc;
        uVar8 = (**(code **)(*plVar7 + 0x2d8))(plVar7,*(undefined8 *)(*plVar7 + 0x2e0));
        uVar3 = FUN_03152760(uVar8,*(undefined8 *)puVar2,4,0);
        if ((uVar3 & 1) != 0) break;
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar1);
      goto LAB_03380aec;
    }
  }
  uVar3 = 0;
LAB_03380aec:
  return uVar3 & 1;
}


