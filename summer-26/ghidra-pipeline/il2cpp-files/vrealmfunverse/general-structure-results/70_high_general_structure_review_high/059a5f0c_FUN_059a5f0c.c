/*
FUNCTION_NAME: FUN_059a5f0c
ENTRY_POINT: 059a5f0c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


void FUN_059a5f0c(long param_1,long param_2,uint param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,uint param_8,byte param_9)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  int iStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  undefined1 local_98 [4];
  undefined4 local_94;
  long local_88;
  
                    /* try { // try from 059a5f28 to 05aa5f73 has its CatchHandler @ 059a6090 */
  local_88 = param_2;
  if ((DAT_066d39f6 & 1) == 0) {
    FUN_02b3c81c(Method_System_Array_Resize<Muscle>__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<AutoGun,_AutoAmmo>_Invoke__);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__);
    FUN_02b3c81c(Method_Pico_Platform_Task<SessionMedia>__ctor__);
    FUN_02b3c81c(PTR_DAT_063203a0);
    DAT_066d39f6 = 1;
  }
  local_94 = 0;
  local_98[0] = 0;
  local_9c[0] = 0;
  local_a0[0] = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_110 = 0;
  local_108 = 0;
  local_120 = 0;
  local_118 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  puVar13 = (undefined8 *)(param_1 + 0xa0);
  uVar12 = *puVar13;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  local_170 = 0;
  uStack_168 = 0;
  if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar6 = FUN_05c8e378(uVar12,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)Method_System_Array_Resize<Muscle>__ + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar12 = UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs___ctor();
    *puVar13 = uVar12;
    thunk_FUN_02bb0e9c(puVar13,uVar12);
  }
  if (param_2 == 0) {
LAB_059a6544:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_057f8178(param_2,*(long *)(*(long *)Method_Pico_Platform_Task<SessionMedia>__ctor__ + 0xb8) +
                       0x94,1,0);
  puVar3 = Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__;
  local_98[0] = 0;
  local_94 = 0xffffffff;
  uVar1 = *(ushort *)(*(long *)(param_1 + 0x88) + 4);
  uVar6 = (ulong)uVar1;
  local_9c[0] = 0;
  local_a0[0] = 0;
  if ((int)(uint)uVar1 < *(int *)(param_1 + 0x80)) {
    uVar12 = 1;
    do {
      uVar2 = *(undefined2 *)(*(long *)(param_1 + 0x78) + uVar6 * 2);
      uVar7 = FUN_0322a808(param_6,param_7,uVar2,
                           *(undefined8 *)
                            Method_UnityEngine_Events_UnityEvent<AutoGun,_AutoAmmo>_Invoke__);
      iVar5 = FUN_05ccb750(uVar7,0);
      if (iVar5 != 2) break;
      lVar8 = FUN_05ccb6c4(uVar7,0);
      FUN_05ccb764(&local_1b0,uVar7,0);
      uStack_158 = CONCAT44(uStack_1a4,iStack_1a8);
      local_160 = local_1b0;
      uStack_148 = uStack_198;
      uStack_150 = uStack_1a0;
      uStack_138 = uStack_188;
      local_140 = local_190;
      uStack_128 = uStack_178;
      uStack_130 = uStack_180;
      uVar18 = uStack_180;
      uVar14 = FUN_05c78d80(&local_160,3,0);
      uVar19 = (undefined4)uVar18;
      uVar15 = FUN_05ccb780(uVar7,0);
      uVar16 = FUN_05ccb780(uVar7,0);
      uVar17 = FUN_05ccb780(uVar7,0);
      uVar7 = 0;
      FUN_05c789dc(uVar15,0,0,0,0,uVar16,0,0,&local_e0,0);
      if (*(int *)(*(long *)PTR_DAT_063203a0 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      UnityEngine_XR_Hands_Gestures_XRHandRelativeOrientation_TargetCondition___ctor
                (param_6,param_7,uVar2,&local_f0,&local_100,&local_110,&local_170,&local_120,uVar7,
                 uVar17,uVar14,uVar19);
      if (param_4 == 0) goto LAB_059a6544;
      if (*(char *)(param_4 + 0x35) != '\0') {
        lVar9 = *(long *)puVar3;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar9 = *(long *)puVar3;
        }
        FUN_059a5448(lVar9,param_2,lVar8,*(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0x8c));
      }
      if (lVar8 == 0) goto LAB_059a6544;
      FUN_05c5f178(&local_1b0,lVar8,0);
      bVar4 = iStack_1a8 == 1;
      if ((param_8 & 1) == 0) {
        iVar5 = -1;
      }
      else {
        if (*(long *)(param_1 + 0x98) == 0) goto LAB_059a6544;
        iVar5 = FUN_059acf34(*(long *)(param_1 + 0x98),uVar2,0);
      }
      if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05c921ac(lVar8,0);
      if ((uVar10 & 1) == 0) {
        bVar11 = false;
      }
      else {
        uVar10 = FUN_05c5f324(lVar8,0);
        bVar11 = (int)uVar10 != 0 && -1 < iVar5;
      }
      if (param_5 == 0) goto LAB_059a6544;
      uVar7 = FUN_059a6dbc(uVar10,&local_88,param_3 & 1,*(undefined1 *)(param_5 + 0x31),bVar11,
                           uVar12,local_9c);
      UnityEngine_XR_Interaction_Toolkit_BaseInteractionEventArgs__set_interactable
                (uVar7,param_2,param_5,lVar8,bVar11,uVar12,local_a0);
      FUN_059a6c80(param_1,param_2,uVar2,param_9 & 1,uVar12,local_98,&local_94);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_057f804c(local_f0 & 0xffffffff,local_f0._4_4_,local_e8 & 0xffffffff,local_e8._4_4_,param_2
                   ,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x70),0);
      FUN_057f804c(local_100 & 0xffffffff,local_100._4_4_,local_f8 & 0xffffffff,local_f8._4_4_,
                   param_2,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x74),0);
      FUN_057f804c(local_110 & 0xffffffff,local_110._4_4_,local_108 & 0xffffffff,local_108._4_4_,
                   param_2,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x78),0);
      FUN_057f804c(local_120 & 0xffffffff,local_120._4_4_,local_118 & 0xffffffff,local_118._4_4_,
                   param_2,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x7c),0);
      FUN_057f801c(param_2,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x84),
                   (ulong)bVar4 << 2,0);
      FUN_057f801c(param_2,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x88),iVar5,0);
      lVar8 = *(long *)(param_1 + 200);
      if (lVar8 == 0) goto LAB_059a6544;
      if (*(int *)(lVar8 + 0x18) == 0) {
LAB_059a6548:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      uStack_1e8 = uStack_d8;
      local_1f0 = local_e0;
      uStack_1d8 = uStack_c8;
      uStack_1e0 = uStack_d0;
      uStack_1c8 = uStack_b8;
      local_1d0 = local_c0;
      uStack_1b8 = uStack_a8;
      uStack_1c0 = uStack_b0;
      FUN_057f8468(param_2,*(undefined8 *)(param_1 + 0xa0),&local_1f0,
                   *(undefined8 *)(param_1 + 0xb8),0,*(undefined4 *)(lVar8 + 0x20),0);
      lVar8 = *(long *)(param_1 + 200);
      if (lVar8 == 0) goto LAB_059a6544;
      if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_059a6548;
      uStack_228 = uStack_d8;
      local_230 = local_e0;
      uStack_218 = uStack_c8;
      uStack_220 = uStack_d0;
      uStack_208 = uStack_b8;
      local_210 = local_c0;
      uStack_1f8 = uStack_a8;
      uStack_200 = uStack_b0;
      FUN_057f8468(param_2,*(undefined8 *)(param_1 + 0xa0),&local_230,
                   *(undefined8 *)(param_1 + 0xb8),0,*(undefined4 *)(lVar8 + 0x24),0);
      lVar8 = *(long *)(param_1 + 200);
      if (lVar8 == 0) goto LAB_059a6544;
      if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_059a6548;
      uStack_268 = uStack_d8;
      local_270 = local_e0;
      uStack_258 = uStack_c8;
      uStack_260 = uStack_d0;
      uStack_248 = uStack_b8;
      local_250 = local_c0;
      uStack_238 = uStack_a8;
      uStack_240 = uStack_b0;
      FUN_057f8468(param_2,*(undefined8 *)(param_1 + 0xa0),&local_270,
                   *(undefined8 *)(param_1 + 0xb8),0,*(undefined4 *)(lVar8 + 0x28),0);
      uVar6 = uVar6 + 1;
      uVar12 = 0;
    } while ((long)uVar6 < (long)*(int *)(param_1 + 0x80));
  }
  FUN_057f8178(param_2,*(long *)(*(long *)Method_Pico_Platform_Task<SessionMedia>__ctor__ + 0xb8) +
                       0x94,0,0);
  return;
}


