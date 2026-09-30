/*
FUNCTION_NAME: FUN_03695674
ENTRY_POINT: 03695674
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


uint FUN_03695674(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,long param_7,undefined8 *param_8)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  float local_78;
  float fStack_74;
  float local_70;
  undefined8 local_6c;
  float local_64;
  
  if ((DAT_04833ee8 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputBindingComposite_<GetPartNames>d__12_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(Method_OVRPlugin_FovfPair_get_Item__);
    DAT_04833ee8 = 1;
  }
  local_64 = 0.0;
  local_6c = 0;
  local_98 = 0;
  local_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = param_1;
  fStack_74 = param_2;
  local_70 = param_3;
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
    pfVar5 = *(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    param_4 = *pfVar5;
    param_5 = pfVar5[1];
    local_64 = pfVar5[2];
  }
  else {
    param_4 = param_4 / fVar13;
    param_5 = param_5 / fVar13;
    local_64 = param_6 / fVar13;
  }
  local_6c = CONCAT44(param_5,param_4);
  plVar9 = *(long **)(param_7 + 200);
  if (DAT_0482f03e == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482f03e = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)
           Method_UnityEngine_InputSystem_InputBindingComposite_<GetPartNames>d__12_System_Collections_IEnumerator_Reset__
         ) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_03695844;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar9,*(long *)
                                Method_UnityEngine_InputSystem_InputBindingComposite_<GetPartNames>d__12_System_Collections_IEnumerator_Reset__
                        ,1);
LAB_03695844:
  uVar2 = (*(code *)*puVar3)(fVar13,plVar9,&local_78,&local_98,puVar3[1]);
  puVar1 = Method_OVRPlugin_FovfPair_get_Item__;
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)Method_OVRPlugin_FovfPair_get_Item__;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *(long *)puVar1;
    }
    puVar3 = *(undefined8 **)(lVar6 + 0xb8);
    uVar12 = puVar3[1];
    uVar11 = *puVar3;
    uVar10 = puVar3[3];
    uVar4 = puVar3[2];
    param_8[4] = puVar3[4];
  }
  else {
    uVar4 = FUN_04070398(param_7,0);
    local_a0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    FUN_03694ee0(local_98 & 0xffffffff,local_98._4_4_,(undefined4)local_90,local_90._4_4_,
                 (undefined4)local_88,local_88._4_4_,*(undefined4 *)(param_7 + 0xb4),&local_c0,uVar4
                );
    param_8[4] = local_a0;
    uVar4 = uStack_b0;
    uVar10 = uStack_a8;
    uVar11 = local_c0;
    uVar12 = uStack_b8;
  }
  param_8[1] = uVar12;
  *param_8 = uVar11;
  param_8[3] = uVar10;
  param_8[2] = uVar4;
  thunk_FUN_01f51358(param_8,0);
  return uVar2 & 1;
}


