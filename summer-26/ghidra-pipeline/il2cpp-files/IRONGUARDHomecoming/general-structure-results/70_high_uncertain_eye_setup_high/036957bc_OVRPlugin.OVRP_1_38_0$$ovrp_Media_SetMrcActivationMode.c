/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcActivationMode
ENTRY_POINT: 036957bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcActivationMode(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  int in_w8;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar7;
  long *unaff_x22;
  long unaff_x23;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  plVar7 = *(long **)(unaff_x20 + 200);
  if (in_w8 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    *(undefined1 *)(unaff_x23 + 0x3e) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (plVar7 == (long *)0x0) {
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
        goto LAB_03695844;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_UnityEngine_InputSystem_InputBindingComposite_<GetPartNames>d__12_System_Collections_IEnumerator_Reset__
                        ,1);
LAB_03695844:
  uVar2 = (*(code *)*puVar3)(plVar7,&stack0x00000048,&stack0x00000028,puVar3[1]);
  puVar1 = Method_OVRPlugin_FovfPair_get_Item__;
  if ((uVar2 & 1) == 0) {
    lVar4 = *(long *)Method_OVRPlugin_FovfPair_get_Item__;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar4 = *(long *)puVar1;
    }
    puVar3 = *(undefined8 **)(lVar4 + 0xb8);
    uVar11 = puVar3[1];
    uVar10 = *puVar3;
    uVar9 = puVar3[3];
    uVar8 = puVar3[2];
    unaff_x19[4] = puVar3[4];
  }
  else {
    FUN_04070398();
    FUN_03694ee0(uStack0000000000000028,uStack000000000000002c,uStack0000000000000030,
                 uStack0000000000000034,uStack0000000000000038,uStack000000000000003c,
                 *(undefined4 *)(unaff_x20 + 0xb4));
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    unaff_x19[4] = 0;
  }
  unaff_x19[1] = uVar11;
  *unaff_x19 = uVar10;
  unaff_x19[3] = uVar9;
  unaff_x19[2] = uVar8;
  thunk_FUN_01f51358();
  return uVar2 & 1;
}


