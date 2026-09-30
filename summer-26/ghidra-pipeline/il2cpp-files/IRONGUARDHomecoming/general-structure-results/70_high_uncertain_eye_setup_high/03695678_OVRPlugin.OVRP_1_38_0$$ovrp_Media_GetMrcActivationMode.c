/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcActivationMode
ENTRY_POINT: 03695678
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


uint OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcActivationMode
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               long param_7,undefined8 *param_8)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  float *pfVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  ulong in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  float in_stack_00000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  undefined8 uStack0000000000000054;
  float fStack000000000000005c;
  
  if ((DAT_04833ee8 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputBindingComposite_<GetPartNames>d__12_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(Method_OVRPlugin_FovfPair_get_Item__);
    DAT_04833ee8 = 1;
  }
  fStack000000000000005c = 0.0;
  uStack0000000000000054 = 0;
  in_stack_00000028 = 0;
  _uStack0000000000000030 = 0;
  in_stack_00000040 = 0;
  _uStack0000000000000038 = 0;
  in_stack_00000048 = param_1;
  fStack000000000000004c = param_2;
  in_stack_00000050 = param_3;
  if (DAT_0482ee9b == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482ee9b = '\x01';
  }
  puVar1 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  param_4 = param_4 - param_1;
  param_5 = param_5 - param_2;
  param_6 = param_6 - param_3;
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar13 = SQRT(param_6 * param_6 + param_4 * param_4 + param_5 * param_5);
  if (fVar13 <= DAT_00c926ac) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    pfVar4 = *(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    param_4 = *pfVar4;
    param_5 = pfVar4[1];
    fStack000000000000005c = pfVar4[2];
  }
  else {
    param_4 = param_4 / fVar13;
    param_5 = param_5 / fVar13;
    fStack000000000000005c = param_6 / fVar13;
  }
  uStack0000000000000054 = CONCAT44(param_5,param_4);
  plVar8 = *(long **)(param_7 + 200);
  if (DAT_0482f03e == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482f03e = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)
           Method_UnityEngine_InputSystem_InputBindingComposite_<GetPartNames>d__12_System_Collections_IEnumerator_Reset__
         ) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_03695844;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_UnityEngine_InputSystem_InputBindingComposite_<GetPartNames>d__12_System_Collections_IEnumerator_Reset__
                        ,1);
LAB_03695844:
  uVar2 = (*(code *)*puVar3)(fVar13,plVar8,&stack0x00000048,&stack0x00000028,puVar3[1]);
  puVar1 = Method_OVRPlugin_FovfPair_get_Item__;
  if ((uVar2 & 1) == 0) {
    lVar5 = *(long *)Method_OVRPlugin_FovfPair_get_Item__;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    puVar3 = *(undefined8 **)(lVar5 + 0xb8);
    uVar12 = puVar3[1];
    uVar11 = *puVar3;
    uVar10 = puVar3[3];
    uVar9 = puVar3[2];
    param_8[4] = puVar3[4];
  }
  else {
    FUN_04070398(param_7,0);
    FUN_03694ee0(in_stack_00000028 & 0xffffffff,in_stack_00000028._4_4_,uStack0000000000000030,
                 uStack0000000000000034,uStack0000000000000038,uStack000000000000003c,
                 *(undefined4 *)(param_7 + 0xb4));
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    param_8[4] = 0;
  }
  param_8[1] = uVar12;
  *param_8 = uVar11;
  param_8[3] = uVar10;
  param_8[2] = uVar9;
  thunk_FUN_01f51358(param_8,0);
  return uVar2 & 1;
}


