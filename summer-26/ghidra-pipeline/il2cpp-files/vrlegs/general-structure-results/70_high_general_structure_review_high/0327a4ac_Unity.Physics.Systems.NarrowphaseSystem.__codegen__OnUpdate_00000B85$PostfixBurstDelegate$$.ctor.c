/*
FUNCTION_NAME: Unity.Physics.Systems.NarrowphaseSystem.__codegen__OnUpdate_00000B85$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 0327a4ac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Physics_Systems_NarrowphaseSystem___codegen__OnUpdate_00000B85_PostfixBurstDelegate___ctor
               (ulong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x19;
  int *unaff_x20;
  int iVar10;
  long *unaff_x22;
  long unaff_x23;
  int in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd8408);
    *(undefined1 *)(unaff_x23 + 0x93a) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  iVar2 = *unaff_x20;
  puVar1 = (undefined4 *)(unaff_x20[1] + unaff_x19);
  if (iVar2 < 0x494e5421) {
    if (iVar2 < 0x42595446) {
      if (iVar2 == 0x42495420) {
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          iVar2 = unaff_x20[3];
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          iVar10 = unaff_x20[2];
        }
        else {
          iVar2 = unaff_x20[3];
          iVar10 = unaff_x20[2];
        }
        if (iVar2 != 1) {
          iVar2 = unaff_x20[3];
          uVar5 = FUN_03298be8(&stack0x00000010,0,0);
          FUN_03294fc4(puVar1,iVar10,iVar2,uVar5,0);
          return;
        }
        goto LAB_0327a704;
      }
      if (iVar2 == 0x42595445) {
        uVar3 = FUN_03297b88(&stack0x00000010,0,0);
        goto LAB_0327a5ec;
      }
    }
    else {
      if (iVar2 == 0x464c5420) {
        uVar5 = FUN_03297d7c(&stack0x00000010,0,0);
        *puVar1 = uVar5;
        return;
      }
      if (iVar2 == 0x494e5420) {
        uVar5 = FUN_03297bf4(&stack0x00000010,0,0);

        Unity_Physics_Systems_NarrowphaseSystem___codegen__OnUpdate_00000B85_BurstDirectCall__GetFunctionPointer
        :
        *puVar1 = uVar5;
        return;
      }
    }
  }
  else {
    if (0x53425954 < iVar2) {
      if (iVar2 == 0x53485254) {
        uVar4 = FUN_03297bd0(&stack0x00000010,0,0);
      }
      else {
        if (iVar2 == 0x55494e54) {
          uVar5 = FUN_03298be8(&stack0x00000010,0,0);
          goto 
          Unity_Physics_Systems_NarrowphaseSystem___codegen__OnUpdate_00000B85_BurstDirectCall__GetFunctionPointer
          ;
        }
        if (iVar2 != 0x55534854) goto LAB_0327a76c;
        uVar4 = FUN_03298bd8(&stack0x00000010,0,0);
      }
      *(undefined2 *)puVar1 = uVar4;
      return;
    }
    if (iVar2 == 0x53424954) {
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        iVar2 = unaff_x20[3];
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        iVar10 = unaff_x20[2];
      }
      else {
        iVar2 = unaff_x20[3];
        iVar10 = unaff_x20[2];
      }
      if (iVar2 != 1) {
        iVar2 = unaff_x20[3];
        uVar5 = FUN_03297bf4(&stack0x00000010,0,0);
        FUN_0329519c(puVar1,iVar10,iVar2,uVar5,0);
        return;
      }
LAB_0327a704:
      uVar6 = FUN_032979e4(&stack0x00000010,0,0);
      FUN_03294dac(puVar1,iVar10,uVar6 & 1,0);
      return;
    }
    if (iVar2 == 0x53425954) {
      uVar3 = FUN_03297bac(&stack0x00000010,0,0);
LAB_0327a5ec:
      *(undefined1 *)puVar1 = uVar3;
      return;
    }
  }
LAB_0327a76c:
  uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03d13488);
  uVar7 = thunk_FUN_01a89a98(uVar7,&stack0x0000000c);
  thunk_FUN_01a6ca08(PTR_DAT_03cd8408);
  FUN_01876390();
  in_stack_00000008 = *unaff_x20;
  uVar8 = thunk_FUN_01a6ca08(DG_Tweening_Plugins_Core_PathCore_ControlPoint___TypeInfo);
  uVar8 = thunk_FUN_01a89a98(uVar8,&stack0x00000008);
  uVar9 = thunk_FUN_01a6ca08(Gameplay_AudioAndVFX_CharacterEffectInvoker_TypeInfo);
  uVar7 = FUN_025be86c(uVar9,uVar7,uVar8,0);
  thunk_FUN_01a6ca08(PTR_DAT_03cc74c8);
  uVar8 = thunk_FUN_01a89e68();
  FUN_0276e9b0(uVar8,uVar7,0);
  uVar7 = thunk_FUN_01a6ca08(_Common_Gameplay_Support_Scripts_PowerSystem_ChargeStation_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar8,uVar7);
}


