/*
FUNCTION_NAME: FUN_06653114
ENTRY_POINT: 06653114
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06653114(int *param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  ulong local_28;
  
  local_28 = 0;
  if (param_2 < 0) {
LAB_0665320c:
    thunk_FUN_049ae08c(PTR_DAT_0ac0c088);
    uVar3 = thunk_FUN_04983f60();
    uVar4 = thunk_FUN_049ae08c(PTR_DAT_0ac161d0);
    FUN_08cc57b4(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar3,param_3);
  }
  iVar1 = *param_1;
  if (iVar1 <= param_2) goto LAB_0665320c;
  if (param_2 == 0) {
    if (iVar1 == 2) {
      lVar6 = *(long *)(param_1 + 4);
      if (lVar6 == 0) {
System_Array_InternalEnumerator<OVRPlugin_Vector4f>___ctor:
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_06653250:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(lVar6 + 0x20);
      *(undefined8 *)(lVar6 + 0x20) = 0;
      goto LAB_06653178;
    }
    if (iVar1 - 1U == 0) {
      param_1[2] = 0;
      param_1[3] = 0;
      goto LAB_06653178;
    }
    lVar6 = *(long *)(param_1 + 4);
    if (lVar6 == 0) goto System_Array_InternalEnumerator<OVRPlugin_Vector4f>___ctor;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_06653250;
    lVar2 = *(long *)(param_3 + 0x20);
    local_28 = (ulong)(iVar1 - 1U) << 0x20;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(lVar6 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34();
    }
    lVar2 = *(long *)(lVar2 + 0xc0);
    puVar5 = (ulong *)((long)&local_28 + 4);
    param_2 = 0;
  }
  else {
    lVar2 = *(long *)(param_3 + 0x20);
    lVar6 = *(long *)(param_1 + 4);
    param_2 = param_2 + -1;
    local_28 = (ulong)(iVar1 - 1);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34();
    }
    lVar2 = *(long *)(lVar2 + 0xc0);
    puVar5 = &local_28;
  }
  FUN_05a0e914(lVar6,puVar5,param_2,*(undefined8 *)(lVar2 + 0xc0));
LAB_06653178:
  *param_1 = *param_1 + -1;
  return;
}


