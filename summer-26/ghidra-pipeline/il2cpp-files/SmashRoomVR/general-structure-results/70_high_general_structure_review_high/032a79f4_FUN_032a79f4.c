/*
FUNCTION_NAME: FUN_032a79f4
ENTRY_POINT: 032a79f4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_032a79f4(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  
  puVar3 = 
  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__;
  if ((DAT_03ff583f & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    DAT_03ff583f = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = System_Linq_Expressions_Interpreter_OrInstruction_OrSByte__Run
                    (param_2,uVar1,param_1 + 0x40,0);
  if ((uVar5 & 1) == 0) {
    *(undefined2 *)(param_1 + 0xba) = 0;
    *(undefined1 *)(param_1 + 0xbc) = 0;
    lVar7 = *(long *)(param_1 + 0xc0);
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    if (lVar7 != 0) {
      puVar6 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      FUN_039282dc(*puVar6,puVar6[1],puVar6[2],lVar7,0);
      lVar7 = *(long *)(param_1 + 0xc0);
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      if (lVar7 != 0) {
        puVar6 = *(undefined4 **)
                  (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                  0xb8);
        FUN_03929060(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar7,0);
        *(undefined8 *)(param_1 + 200) = 0x3f800000;
        *(undefined2 *)(param_1 + 0xb8) = 0;
        return;
      }
    }
LAB_032a7c58:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  bVar2 = *(byte *)(param_1 + 0x40);
  lVar7 = *(long *)(param_1 + 0xc0);
  *(byte *)(param_1 + 0xba) = bVar2 & 1;
  *(byte *)(param_1 + 0xbb) = bVar2 >> 6 & 1;
  *(byte *)(param_1 + 0xbc) = bVar2 >> 1 & 1;
  *(byte *)(param_1 + 0xd0) = bVar2 >> 7;
  FUN_0320ba80(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
               *(undefined4 *)(param_1 + 0x90),0);
  if (lVar7 == 0) goto LAB_032a7c58;
  FUN_039282dc(lVar7,0);
  lVar7 = *(long *)(param_1 + 0xc0);
  FUN_0320bd30(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),
               *(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),0);
  if (lVar7 == 0) goto LAB_032a7c58;
  FUN_03929060(lVar7,0);
  *(undefined1 *)(param_1 + 0xb8) = 1;
  *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x94);
  *(bool *)(param_1 + 0xb9) =
       *(int *)(param_1 + 0x98) == 0x3f800000 && *(char *)(param_1 + 0xba) != '\0';
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  if (*(int *)(*(long *)
                Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  iVar4 = FUN_0322c320(uVar1,0);
  if (iVar4 == 1) {
    *(undefined2 *)(param_1 + 0xbb) = 0;
  }
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 1:
    if (iVar4 != 2) {
      return;
    }
    break;
  case 2:
    if (iVar4 == 1) {
      return;
    }
    break;
  case 3:
    if (iVar4 == 2) {
      return;
    }
    break;
  case 4:
    if (iVar4 == 0) {
      return;
    }
    break;
  default:
    goto switchD_032a7b68_default;
  }
  *(undefined1 *)(param_1 + 0xb8) = 0;
switchD_032a7b68_default:
  return;
}


