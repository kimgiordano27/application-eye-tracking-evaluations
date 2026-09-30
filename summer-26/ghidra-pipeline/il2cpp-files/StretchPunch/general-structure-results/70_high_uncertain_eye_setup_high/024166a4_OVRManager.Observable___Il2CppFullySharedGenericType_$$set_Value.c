/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$set_Value
ENTRY_POINT: 024166a4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager_Observable<__Il2CppFullySharedGenericType>__set_Value
               (long param_1,uint param_2,int param_3,undefined8 param_4,undefined8 param_5,
               long *param_6,long param_7)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  
  iVar10 = param_2 + param_3 + -1;
  if ((int)param_2 <= iVar10) {
    if (param_1 == 0) {
LAB_024167d4:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    do {
      uVar1 = param_2 + ((int)(iVar10 - param_2) >> 1);
      if (*(uint *)(param_1 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (param_6 == (long *)0x0) goto LAB_024167d4;
      lVar5 = *(long *)(param_7 + 0x20);
      lVar7 = param_1 + (long)(int)uVar1 * 0x10;
      uVar2 = *(undefined8 *)(lVar7 + 0x20);
      uVar3 = *(undefined8 *)(lVar7 + 0x28);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01dde7f8();
      }
      lVar7 = **(long **)(lVar5 + 0xc0);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8(lVar7);
      }
      lVar5 = *param_6;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02416794;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_01dde8fc(param_6,lVar7,0);
LAB_02416794:
      iVar4 = (*(code *)*puVar6)(param_6,uVar2,uVar3,param_4,param_5,puVar6[1]);
      if (iVar4 == 0) {
        return uVar1;
      }
      if (iVar4 < 0) {
        param_2 = uVar1 + 1;
      }
      else {
        iVar10 = uVar1 - 1;
      }
    } while ((int)param_2 <= iVar10);
  }
  return ~param_2;
}


