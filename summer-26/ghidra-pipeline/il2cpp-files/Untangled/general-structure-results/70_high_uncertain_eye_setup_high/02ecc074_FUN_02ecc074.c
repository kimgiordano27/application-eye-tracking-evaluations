/*
FUNCTION_NAME: FUN_02ecc074
ENTRY_POINT: 02ecc074
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool FUN_02ecc074(undefined8 param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  uint uVar11;
  uint uVar12;
  char *local_58;
  char *local_48;
  ushort *puVar10;
  
  puVar3 = Method_OVRTask_Awaiter<OVRPlugin_Result>_get_IsCompleted__;
  puVar2 = Method_OVRTask_Awaiter<OVRPlugin_Result>_GetResult__;
  cVar1 = *param_2;
  cVar8 = *param_3;
  local_48 = param_2;
  local_58 = param_3;
  do {
    if ((cVar1 == '\0') || (bVar4 = cVar8 == '\0', cVar8 = '\0', bVar4)) {
      return cVar8 == '\0' && cVar1 == '\0';
    }
    uVar5 = FUN_02ecc1f8(&local_48);
    bVar4 = (uVar5 & 0xffff0000) == 0;
    uVar11 = uVar5 & 0x3ff | 0xffffdc00;
    uVar12 = (uVar5 >> 10) - 0x2840;
    if (bVar4) {
      uVar12 = uVar5;
    }
    uVar5 = uVar11;
    if (bVar4) {
      uVar5 = 0;
    }
    uVar6 = FUN_02ecc1f8(&local_58);
    uVar7 = uVar6 & 0x3ff | 0xffffdc00;
    bVar4 = (uVar6 & 0xffff0000) == 0;
    uVar9 = (uVar6 >> 10) - 0x2840;
    if (bVar4) {
      uVar9 = uVar6;
    }
    uVar6 = uVar7;
    if (bVar4) {
      uVar6 = 0;
    }
    if ((uVar12 >> 4 & 0xfff) < 0x24d) {
      puVar10 = (ushort *)(puVar2 + ((ulong)uVar12 & 0xffff) * 2);
LAB_02ecc12c:
      uVar12 = (uint)*puVar10;
    }
    else if (0xff20 < (uVar12 & 0xffff)) {
      puVar10 = (ushort *)(puVar3 + (ulong)((int)((ulong)uVar12 & 0xffff) - 0xff21) * 2);
      goto LAB_02ecc12c;
    }
    if ((uVar9 >> 4 & 0xfff) < 0x24d) {
      puVar10 = (ushort *)(puVar2 + ((ulong)uVar9 & 0xffff) * 2);
LAB_02ecc158:
      uVar9 = (uint)*puVar10;
    }
    else if (0xff20 < (uVar9 & 0xffff)) {
      puVar10 = (ushort *)(puVar3 + (ulong)((int)((ulong)uVar9 & 0xffff) - 0xff21) * 2);
      goto LAB_02ecc158;
    }
    if ((uVar12 & 0xffff) != (uVar9 & 0xffff)) {
      return false;
    }
    if ((uVar5 >> 4 & 0xfff) < 0x24d) {
      uVar11 = (uint)*(ushort *)(puVar2 + ((ulong)uVar5 & 0xffff) * 2);
    }
    if ((uVar6 >> 4 & 0xfff) < 0x24d) {
      uVar7 = (uint)*(ushort *)(puVar2 + ((ulong)uVar6 & 0xffff) * 2);
    }
    if ((uVar11 & 0xffff) != (uVar7 & 0xffff)) {
      return false;
    }
    cVar1 = *local_48;
    cVar8 = *local_58;
  } while( true );
}


