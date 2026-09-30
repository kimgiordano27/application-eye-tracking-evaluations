/*
FUNCTION_NAME: FUN_04f1e3a0
ENTRY_POINT: 04f1e3a0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


float FUN_04f1e3a0(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined8 local_110 [2];
  undefined8 uStack_fc;
  undefined8 local_f0 [2];
  undefined8 uStack_dc;
  undefined8 local_d0 [2];
  undefined8 uStack_bc;
  undefined8 local_ac [2];
  undefined8 uStack_98;
  undefined8 local_90 [2];
  undefined8 uStack_7c;
  undefined8 local_74 [2];
  undefined8 uStack_60;
  long local_58;
  
  if ((DAT_066c98a3 & 1) == 0) {
    FUN_02b3c81c(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
    FUN_02b3c81c(System_Runtime_Remoting_IRemotingTypeInfo_var);
    DAT_066c98a3 = 1;
  }
  local_58 = 0;
  if (param_3 != (long *)0x0) {
    lVar4 = *param_3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)System_Runtime_Remoting_IRemotingTypeInfo_var) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
          goto LAB_04f1e450;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02b7654c(param_3,*(long *)System_Runtime_Remoting_IRemotingTypeInfo_var,0xd);
LAB_04f1e450:
    uVar5 = (*(code *)*puVar3)(param_3,&local_58,puVar3[1]);
    puVar2 = System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo;
    fVar9 = 0.0;
    if ((uVar5 & 1) != 0) {
      if (param_2 == 0) goto LAB_04f1e5a8;
      uVar5 = *(ulong *)(param_2 + 0x18);
      if (0 < (long)((uVar5 << 0x20) + -0x200000000)) {
        uVar7 = 0;
        lVar4 = 0x200000000;
        do {
          if ((uVar5 & 0xffffffff) <= uVar7) {
LAB_04f1e5ac:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          if (local_58 == 0) goto LAB_04f1e5a8;
          lVar1 = param_2 + uVar7 * 4;
          FUN_04f817bc(local_74,local_58,*(undefined4 *)(lVar1 + 0x20),0);
          if (*(uint *)(param_2 + 0x18) <= (int)uVar7 + 1U) goto LAB_04f1e5ac;
          if (local_58 == 0) goto LAB_04f1e5a8;
          FUN_04f817bc(local_90,local_58,*(undefined4 *)(lVar1 + 0x24),0);
          if ((ulong)*(uint *)(param_2 + 0x18) <= uVar7 + 2) goto LAB_04f1e5ac;
          if (local_58 == 0) goto LAB_04f1e5a8;
          FUN_04f817bc(local_ac,local_58,*(undefined4 *)(param_2 + (lVar4 >> 0x1e) + 0x20),0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          local_d0[0] = local_74[0];
          uStack_bc = uStack_60;
          local_f0[0] = local_90[0];
          uStack_dc = uStack_7c;
          local_110[0] = local_ac[0];
          uStack_fc = uStack_98;
          fVar8 = (float)FUN_04f1e0e0(local_d0,local_f0,local_110);
          uVar5 = *(ulong *)(param_2 + 0x18);
          fVar9 = fVar9 + fVar8;
          uVar7 = uVar7 + 1;
          lVar4 = lVar4 + 0x100000000;
        } while ((long)uVar7 < (long)((int)uVar5 + -2));
      }
    }
    return fVar9;
  }
LAB_04f1e5a8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


