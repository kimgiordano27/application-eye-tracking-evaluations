/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcActivationMode
ENTRY_POINT: 036956f4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint OVRPlugin_Media__SetMrcActivationMode(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  int in_w8;
  float *pfVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float unaff_s8;
  float fVar13;
  float unaff_s9;
  float fVar14;
  float unaff_s10;
  float fVar15;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar16;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack000000000000005c;
  
  _uStack0000000000000038 = 0;
  if (in_w8 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    *(undefined1 *)(unaff_x21 + 0xe9b) = 1;
  }
  puVar1 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  fVar16 = unaff_s10 - unaff_s13;
  fVar15 = unaff_s9 - unaff_s12;
  fVar14 = unaff_s8 - unaff_s11;
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar13 = SQRT(fVar14 * fVar14 + fVar16 * fVar16 + fVar15 * fVar15);
  if (fVar13 <= DAT_00c926ac) {
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
      DAT_0482ee12 = '\x01';
    }
    pfVar4 = *(float **)
              (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
    fStack0000000000000054 = *pfVar4;
    in_stack_00000058 = pfVar4[1];
    fStack000000000000005c = pfVar4[2];
  }
  else {
    fStack0000000000000054 = fVar16 / fVar13;
    in_stack_00000058 = fVar15 / fVar13;
    fStack000000000000005c = fVar14 / fVar13;
  }
  plVar8 = *(long **)(unaff_x20 + 200);
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
    unaff_x19[4] = puVar3[4];
  }
  else {
    FUN_04070398();
    FUN_03694ee0(uStack0000000000000028,uStack000000000000002c,uStack0000000000000030,
                 uStack0000000000000034,uStack0000000000000038,uStack000000000000003c,
                 *(undefined4 *)(unaff_x20 + 0xb4));
    uVar12 = 0;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    unaff_x19[4] = 0;
  }
  unaff_x19[1] = uVar12;
  *unaff_x19 = uVar11;
  unaff_x19[3] = uVar10;
  unaff_x19[2] = uVar9;
  thunk_FUN_01f51358();
  return uVar2 & 1;
}


