/*
FUNCTION_NAME: FUN_0368dc24
ENTRY_POINT: 0368dc24
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


uint FUN_0368dc24(undefined8 param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_04833eb5 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_45__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputBindingComposite_<GetPartNames>d__12_System_Collections_IEnumerator_Reset__
                      );
    DAT_04833eb5 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  plVar7 = *(long **)(param_2 + 0x20);
  if (plVar7 == (long *)0x0) {
LAB_0368ddf0:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)
           Method_UnityEngine_InputSystem_InputBindingComposite_<GetPartNames>d__12_System_Collections_IEnumerator_Reset__
         ) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_0368dcdc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_UnityEngine_InputSystem_InputBindingComposite_<GetPartNames>d__12_System_Collections_IEnumerator_Reset__
                        ,1);
LAB_0368dcdc:
  uVar5 = (*(code *)*puVar3)(param_1,plVar7,param_3,param_4,puVar3[1]);
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__653_45__;
  if ((uVar5 & 1) != 0) {
    lVar4 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__653_45__;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar4 = *(long *)puVar1;
    }
    uVar5 = FUN_0368d66c(param_2,*(undefined8 *)(lVar4 + 0xb8),&local_58);
    if ((uVar5 & 1) != 0) {
      fVar11 = uStack_50._4_4_ + uStack_50._4_4_;
      fVar8 = (float)local_48;
      fVar10 = (float)((ulong)local_48 >> 0x20);
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
      uVar9 = *(undefined8 *)
               (*(float **)
                 (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8) +
               1);
      fVar11 = fVar11 - **(float **)
                          (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__
                          + 0xb8);
      fVar8 = (fVar8 + fVar8) - (float)uVar9;
      fVar10 = (fVar10 + fVar10) - (float)((ulong)uVar9 >> 0x20);
      if (DAT_00c92314 <= fVar10 * fVar10 + fVar11 * fVar11 + fVar8 * fVar8) {
        if ((*(long *)(param_2 + 0x20) == 0) ||
           (lVar4 = FUN_04070398(*(long *)(param_2 + 0x20),0), lVar4 == 0)) goto LAB_0368ddf0;
        FUN_0407e9e4(*param_4,param_4[1],param_4[2],lVar4,0);
        uVar2 = FUN_04042a68(&local_58,0);
        goto LAB_0368ddd4;
      }
    }
  }
  uVar2 = 0;
LAB_0368ddd4:
  return uVar2 & 1;
}


