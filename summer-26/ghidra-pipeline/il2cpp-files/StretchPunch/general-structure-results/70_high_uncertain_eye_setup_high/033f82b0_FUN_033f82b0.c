/*
FUNCTION_NAME: FUN_033f82b0
ENTRY_POINT: 033f82b0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x033f84d0) */

int FUN_033f82b0(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int local_48;
  char local_44 [4];
  
                    /* try { // try from 033f82d4 to 034f82d7 has its CatchHandler @ 033f83c4 */
  if ((DAT_044a6bd4 & 1) == 0) {
    FUN_01d7d918(StringLiteral_6721);
                    /* try { // try from 033f82e4 to 034f82ef has its CatchHandler @ 033f83e0 */
    DAT_044a6bd4 = 1;
  }
  local_44[0] = '\0';
                    /* try { // try from 033f82f4 to 034f82f7 has its CatchHandler @ 033f83dc */
  FUN_033f7a94(param_1);
  if (0 < param_2) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    local_44[0] = '\0';
                    /* try { // try from 033f8308 to 034f831b has its CatchHandler @ 033f83ec */
    FUN_033f4894(uVar7,local_44);
    iVar8 = *(int *)(param_1 + 0x10);
    thunk_FUN_01da0934();
                    /* try { // try from 033f8320 to 034f832b has its CatchHandler @ 033f83d8 */
    if (*(int *)(param_1 + 0x14) - iVar8 < param_2) {
      thunk_FUN_01dd295c(StringLiteral_9443);
      uVar7 = thunk_FUN_01de27b8();
      FUN_033f3194();
      uVar6 = thunk_FUN_01dd295c(StringLiteral_9442);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar7,uVar6);
    }
    iVar2 = *(int *)(param_1 + 0x18);
    thunk_FUN_01da0934();
    param_2 = iVar8 + param_2;
    if ((param_2 == 1) || (iVar2 == 1)) {
      FUN_033f8594(*(undefined8 *)(param_1 + 0x20));
    }
    else if (1 < iVar2) {
      OVRPlugin_OVRP_1_62_0___cctor(*(undefined8 *)(param_1 + 0x20));
    }
    puVar3 = StringLiteral_6721;
    iVar10 = param_2;
    if (*(long *)(param_1 + 0x30) != 0) {
      iVar1 = param_2;
      if (-1 < param_2 - iVar2) {
        iVar1 = iVar2;
      }
      while ((iVar10 = iVar1, 0 < param_2 - iVar2 &&
             (lVar9 = *(long *)(param_1 + 0x30), iVar10 = param_2, lVar9 != 0))) {
        FUN_033f81c0(param_1,lVar9);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        param_2 = param_2 + -1;
        FUN_03400250(lVar9,0,0);
      }
    }
    thunk_FUN_01da0934();
    lVar9 = *(long *)(param_1 + 0x28);
    *(int *)(param_1 + 0x10) = iVar10;
    thunk_FUN_01da0934();
    if (((0 < iVar10) && (iVar8 == 0)) && (lVar9 != 0)) {
      lVar9 = *(long *)(param_1 + 0x28);
      thunk_FUN_01da0934();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      FUN_033f48b4(lVar9);
      iVar8 = 0;
    }
    if (local_44[0] != '\0') {
      FUN_01dccd6c(uVar7);
    }
    return iVar8;
  }
  local_48 = param_2;
  uVar7 = thunk_FUN_01dd295c(
                            Field_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_m_ActionMap
                            );
  uVar7 = thunk_FUN_01de23e8(uVar7,&local_48);
  thunk_FUN_01dd295c(StringLiteral_6721);
  FUN_01a94a5c();
  thunk_FUN_01dd295c(StringLiteral_9440);
  uVar6 = FUN_033f7560();
  thunk_FUN_01dd295c(StringLiteral_1122);
  uVar4 = thunk_FUN_01de27b8();
  uVar5 = thunk_FUN_01dd295c(StringLiteral_9441);
  FUN_0328bd40(uVar4,uVar5,uVar7,uVar6,0);
  uVar7 = thunk_FUN_01dd295c(StringLiteral_9442);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar4,uVar7);
}


