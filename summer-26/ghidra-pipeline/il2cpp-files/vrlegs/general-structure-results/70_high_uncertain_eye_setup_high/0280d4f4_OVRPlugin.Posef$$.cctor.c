/*
FUNCTION_NAME: OVRPlugin.Posef$$.cctor
ENTRY_POINT: 0280d4f4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Posef___cctor(long param_1)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  ulong unaff_x23;
  undefined8 in_stack_00000008;
  
code_r0x0280d4f4:
  uVar8 = (uint)param_1;
  if (unaff_w20 == 10) {
    *(uint *)((long)unaff_x19 + 0x8c) = uVar8 + 1;
    *(uint *)(unaff_x19 + 0x12) = uVar8 + 1;
    *(int *)((long)unaff_x19 + 0x94) = *(int *)((long)unaff_x19 + 0x94) + 1;
  }
  else {
    if (unaff_w20 != 0xd) goto LAB_0280d4bc;
    FUN_0280da6c();
  }
LAB_0280d580:
  while( true ) {
    lVar9 = unaff_x19[0x10];
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar8 = *(uint *)((long)unaff_x19 + 0x8c);
    param_1 = (long)(int)uVar8;
    if (*(uint *)(lVar9 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar1 = *(ushort *)(lVar9 + param_1 * 2 + 0x20);
    unaff_w20 = (uint)uVar1;
    if (uVar1 < 0x28) break;
    if (unaff_w20 < 0x5c) {
      if (unaff_w20 == 0x2c) {
        FUN_0280d930();
      }
      else {
        if (unaff_w20 != 0x2f) {
          if (unaff_w20 == 0x5b) {
            *(uint *)((long)unaff_x19 + 0x8c) = uVar8 + 1;
            FUN_02804374();
            lVar9 = FUN_02804e80();
            return lVar9;
          }
          goto LAB_0280d4bc;
        }
        FUN_0280c700();
      }
    }
    else {
      if (unaff_w20 != 0x7b) {
        if (unaff_w20 != 0x5d) {
          if (unaff_w20 == 0x6e) {
            FUN_0280d860();
            return 0;
          }
          goto LAB_0280d4bc;
        }
        *(uint *)((long)unaff_x19 + 0x8c) = uVar8 + 1;
        if ((*(int *)((long)unaff_x19 + 0x24) - 5U < 2) || (*(int *)((long)unaff_x19 + 0x24) == 8))
        {
          FUN_02804374();
          return 0;
        }
        goto LAB_0280d71c;
      }
      *(uint *)((long)unaff_x19 + 0x8c) = uVar8 + 1;
      unaff_x23 = 1;
      FUN_02804374();
      FUN_02804c70();
    }
  }
  if (unaff_w20 < 0xe) {
    if (unaff_w20 != 9 && 8 < uVar1) goto code_r0x0280d4f4;
    if (unaff_w20 == 0) {
      uVar3 = FUN_0280d810();
      if ((uVar3 & 1) != 0) {
        if ((DAT_041252ed & 1) == 0) {
          FUN_01ab69ac(PTR_DAT_03cbebc0);
          DAT_041252ed = 1;
        }
        unaff_x19[3] = 0;
        *(undefined4 *)(unaff_x19 + 2) = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 3,0);
        return 0;
      }
      goto LAB_0280d580;
    }
    if (unaff_w20 == 9) {
LAB_0280d4e8:
      *(uint *)((long)unaff_x19 + 0x8c) = uVar8 + 1;
      goto LAB_0280d580;
    }
  }
  else {
    if (unaff_w20 == 0x20) goto LAB_0280d4e8;
    if ((unaff_w20 == 0x22) || (unaff_w20 == 0x27)) {
      FUN_0280af38();
      lVar9 = (**(code **)(*unaff_x19 + 0x198))();
      if (lVar9 == 0) {
        lVar4 = 0;
      }
      else {
        uVar5 = *(undefined8 *)PTR_DAT_03cbfb98;
        lVar4 = thunk_FUN_01a89d6c(lVar9,uVar5);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(lVar9,uVar5);
        }
      }
      if ((unaff_x23 & 1) == 0) {
        return lVar4;
      }
      FUN_02804e3c();
      iVar2 = (**(code **)(*unaff_x19 + 0x188))();
      if (iVar2 == 0xd) {
        FUN_02804374();
        return lVar4;
      }
      thunk_FUN_01a6ca08(PTR_DAT_03cc41f8);
      FUN_01876390();
      uVar5 = FUN_0271c480(0);
      in_stack_00000008._4_4_ = (**(code **)(*unaff_x19 + 0x188))();
      uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfdce8);
      uVar6 = thunk_FUN_01a89a98(uVar6,(long)&stack0x00000008 + 4);
      uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cfdd30);
      FUN_0282f8b0(uVar7,uVar5,uVar6,0);
      uVar5 = FUN_02803d2c();
      goto LAB_0280d720;
    }
  }
LAB_0280d4bc:
  *(uint *)((long)unaff_x19 + 0x8c) = uVar8 + 1;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar3 = FUN_026b63d8(unaff_w20,0);
  if ((uVar3 & 1) == 0) {
LAB_0280d71c:
    uVar5 = FUN_0280d99c();
LAB_0280d720:
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfe170);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar5,uVar6);
  }
  goto LAB_0280d580;
}


