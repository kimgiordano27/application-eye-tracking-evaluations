/*
FUNCTION_NAME: FUN_059a58e8
ENTRY_POINT: 059a58e8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5
*/


void FUN_059a58e8(long param_1,long param_2,uint param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,uint param_8,byte param_9,uint param_10)

{
  ushort uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_dc [8];
  int local_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined4 local_6c;
  long local_68;
  
                    /* try { // try from 059a5904 to 05aa593b has its CatchHandler @ 059a5c3c */
  local_68 = param_2;
  if ((DAT_066d39f5 & 1) == 0) {
    FUN_02b3c81c(Method_System_Array_Resize<Muscle>__);
                    /* try { // try from 059a5940 to 05aa594b has its CatchHandler @ 059a5c24 */
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<AutoGun,_AutoAmmo>_Invoke__);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__);
    FUN_02b3c81c(Method_Pico_Platform_Task<SessionMedia>__ctor__);
    FUN_02b3c81c(PTR_DAT_063203a0);
    DAT_066d39f5 = 1;
  }
  local_6c = 0;
  local_70[0] = 0;
  local_74[0] = 0;
  local_78[0] = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  puVar13 = (undefined8 *)(param_1 + 0xb0);
  uVar11 = *puVar13;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar7 = FUN_05c8e378(uVar11,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)Method_System_Array_Resize<Muscle>__ + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar11 = FUN_059a579c();
    *puVar13 = uVar11;
    thunk_FUN_02bb0e9c(puVar13,uVar11);
  }
  if (param_2 == 0) {
LAB_059a5f04:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_057f8178(param_2,*(long *)(*(long *)Method_Pico_Platform_Task<SessionMedia>__ctor__ + 0xb8) +
                       0x90,1,0);
  local_70[0] = 0;
  local_6c = 0xffffffff;
  uVar1 = *(ushort *)(*(long *)(param_1 + 0x88) + 2);
  uVar7 = (ulong)uVar1;
  local_74[0] = 0;
  local_78[0] = 0;
  if ((int)(uint)uVar1 < *(int *)(param_1 + 0x80)) {
    uVar12 = 1;
    do {
      uVar1 = *(ushort *)(*(long *)(param_1 + 0x78) + uVar7 * 2);
      uVar11 = FUN_0322a808(param_6,param_7,uVar1,
                            *(undefined8 *)
                             Method_UnityEngine_Events_UnityEvent<AutoGun,_AutoAmmo>_Invoke__);
      iVar5 = FUN_05ccb750(uVar11,0);
      if (iVar5 != 1) break;
      lVar8 = FUN_05ccb6c4(uVar11,0);
      if (*(int *)(*(long *)PTR_DAT_063203a0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_063203a0);
      }
      UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition___ctor
                (param_6,param_7,uVar1,&local_88,&local_98,&local_a8,&local_b8,&local_c8);
      if (lVar8 == 0) goto LAB_059a5f04;
      FUN_05c5f178(auStack_dc,lVar8,0);
      puVar2 = Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__;
      bVar3 = local_d4 == 1;
      if (param_4 == 0) goto LAB_059a5f04;
      if (*(char *)(param_4 + 0x35) != '\0') {
        lVar9 = *(long *)Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar9 = *(long *)puVar2;
        }
        FUN_059a5448(lVar9,param_2,lVar8,*(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0x8c));
      }
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05c921ac(lVar8,0);
      if ((uVar10 & 1) == 0) {
        bVar4 = false;
      }
      else {
        uVar10 = FUN_05c5f324(lVar8,0);
        bVar4 = (int)uVar10 != 0;
      }
      if (uVar1 != param_10) {
        if ((param_8 & 1) == 0) {
          iVar5 = -1;
        }
        else {
          if (*(long *)(param_1 + 0x98) == 0) goto LAB_059a5f04;
          iVar5 = FUN_059acf34(*(long *)(param_1 + 0x98),(uint)uVar1,0);
        }
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar10 = FUN_05c921ac(lVar8,0);
        if ((uVar10 & 1) == 0) {
          bVar4 = false;
        }
        else {
          iVar6 = FUN_05c5f324(lVar8,0);
          bVar4 = iVar6 != 0 && -1 < iVar5;
        }
        puVar2 = Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__;
        if (*(int *)(*(long *)
                      Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__ + 0xe4
                    ) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_057f801c(param_2,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x88),iVar5,0);
        uVar10 = FUN_059a6c80(param_1,param_2,(uint)uVar1,param_9 & 1,uVar12,local_70,&local_6c);
      }
      if (param_5 == 0) goto LAB_059a5f04;
      uVar11 = FUN_059a6dbc(uVar10,&local_68,param_3 & 1,*(undefined1 *)(param_5 + 0x31),bVar4,
                            uVar12,local_74);
      UnityEngine_XR_Interaction_Toolkit_BaseInteractionEventArgs__set_interactable
                (uVar11,param_2,param_5,lVar8,bVar4,uVar12,local_78);
      puVar2 = Method_Pico_Platform_Task<SessionMedia>__ctor__;
      FUN_057f8178(param_2,*(long *)(*(long *)Method_Pico_Platform_Task<SessionMedia>__ctor__ + 0xb8
                                    ) + 0x9c,uVar12,0);
      FUN_057f8178(param_2,*(long *)(*(long *)puVar2 + 0xb8) + 0xa0,uVar1 == param_10,0);
      puVar2 = Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__;
      lVar8 = *(long *)Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar8 = *(long *)puVar2;
      }
      FUN_057f804c(local_98 & 0xffffffff,local_98._4_4_,local_90 & 0xffffffff,local_90._4_4_,param_2
                   ,*(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x74),0);
      FUN_057f804c(local_88 & 0xffffffff,local_88._4_4_,local_80 & 0xffffffff,local_80._4_4_,param_2
                   ,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x80),0);
      FUN_057f801c(param_2,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x84),
                   (ulong)bVar3 << 2,0);
      puVar2 = PTR_DAT_0631ec40;
      uVar11 = *puVar13;
      if (DAT_066c7526 == '\0') {
        FUN_02b3c81c(PTR_DAT_0631ec40);
        DAT_066c7526 = '\x01';
      }
      lVar8 = *(long *)(param_1 + 200);
      if (lVar8 == 0) goto LAB_059a5f04;
      if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) == 0) {
LAB_059a5f08:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
      uStack_118 = *(undefined8 *)(lVar9 + 0x48);
      local_120 = *(undefined8 *)(lVar9 + 0x40);
      uStack_108 = *(undefined8 *)(lVar9 + 0x58);
      uStack_110 = *(undefined8 *)(lVar9 + 0x50);
      uStack_f8 = *(undefined8 *)(lVar9 + 0x68);
      local_100 = *(undefined8 *)(lVar9 + 0x60);
      uStack_e8 = *(undefined8 *)(lVar9 + 0x78);
      uStack_f0 = *(undefined8 *)(lVar9 + 0x70);
      FUN_057f8468(param_2,uVar11,&local_120,*(undefined8 *)(param_1 + 0xb8),0,
                   *(undefined4 *)(lVar8 + 0x2c),0);
      uVar11 = *puVar13;
      if (DAT_066c7526 == '\0') {
        FUN_02b3c81c(puVar2);
        DAT_066c7526 = '\x01';
      }
      lVar8 = *(long *)(param_1 + 200);
      if (lVar8 == 0) goto LAB_059a5f04;
      if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_059a5f08;
      lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
      uStack_158 = *(undefined8 *)(lVar9 + 0x48);
      local_160 = *(undefined8 *)(lVar9 + 0x40);
      uStack_148 = *(undefined8 *)(lVar9 + 0x58);
      uStack_150 = *(undefined8 *)(lVar9 + 0x50);
      uStack_138 = *(undefined8 *)(lVar9 + 0x68);
      local_140 = *(undefined8 *)(lVar9 + 0x60);
      uStack_128 = *(undefined8 *)(lVar9 + 0x78);
      uStack_130 = *(undefined8 *)(lVar9 + 0x70);
      FUN_057f8468(param_2,uVar11,&local_160,*(undefined8 *)(param_1 + 0xb8),0,
                   *(undefined4 *)(lVar8 + 0x30),0);
      uVar7 = uVar7 + 1;
      uVar12 = 0;
    } while ((long)uVar7 < (long)*(int *)(param_1 + 0x80));
  }
  FUN_057f8178(param_2,*(long *)(*(long *)Method_Pico_Platform_Task<SessionMedia>__ctor__ + 0xb8) +
                       0x90,0,0);
  return;
}


