/*
FUNCTION_NAME: FUN_01af5f5c
ENTRY_POINT: 01af5f5c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01af5f5c(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 local_120 [2];
  undefined8 uStack_10c;
  undefined8 local_100 [2];
  undefined8 uStack_ec;
  undefined8 local_e0 [2];
  undefined8 uStack_cc;
  undefined8 local_c0 [2];
  undefined8 uStack_ac;
  undefined8 local_a0 [2];
  undefined8 uStack_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  puVar7 = local_120;
  if ((DAT_0377d12c & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_5227);
    thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_122_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f02a8);
    DAT_0377d12c = 1;
  }
  puVar5 = StringLiteral_5227;
  puVar4 = OVRPlugin_OVRP_1_122_0_TypeInfo;
  puVar3 = System_Data_DataColumnCollection_TypeInfo;
  puVar2 = PTR_DAT_033f02a8;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  if (param_1 < 3) {
    if (param_1 == 1) {
      lVar6 = *(long *)System_Data_DataColumnCollection_TypeInfo;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
                    /* try { // try from 01af61c0 to 01bf650f has its CatchHandler @ 01af61c0
                       catch() { ... } // from try @ 01af61c0 with catch @ 01af61c0
                       catch() { ... } // from try @ 01af65d8 with catch @ 01af61c0
                       catch() { ... } // from try @ 01af6780 with catch @ 01af61c0
                       catch() { ... } // from try @ 01af6840 with catch @ 01af61c0
                       catch() { ... } // from try @ 01af684c with catch @ 01af61c0
                       catch() { ... } // from try @ 01af6918 with catch @ 01af61c0
                       catch() { ... } // from try @ 01af69a8 with catch @ 01af61c0 */
        lVar6 = *(long *)puVar3;
      }
      iVar10 = *(int *)(*(long *)(lVar6 + 0xb8) + 0x118);
      if (iVar10 != 1) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          iVar10 = *(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x118);
        }
        lVar6 = *(long *)puVar5;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar6 = *(long *)puVar5;
        }
        lVar6 = *(long *)(lVar6 + 0xb8);
        if (iVar10 == 2) goto LAB_01af63c4;
        uVar1 = *(undefined4 *)(lVar6 + 0x18);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_01aa0670(4,4,0xc,uVar1,&local_50,0);
        goto joined_r0x01af6410;
      }
      lVar6 = *(long *)puVar5;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar5;
      }
      uVar1 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x18);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      FUN_01b15f68(local_a0,0xc,uVar1,0);
      puVar7 = local_c0;
      local_c0[0] = local_a0[0];
      uStack_ac = uStack_8c;
    }
    else {
      if (param_1 != 2) goto LAB_01af6460;
      lVar6 = *(long *)System_Data_DataColumnCollection_TypeInfo;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar3;
      }
      iVar10 = *(int *)(*(long *)(lVar6 + 0xb8) + 0x118);
      if (iVar10 != 1) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          iVar10 = *(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x118);
        }
        lVar6 = *(long *)puVar5;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar6 = *(long *)puVar5;
        }
        lVar6 = *(long *)(lVar6 + 0xb8);
        if (iVar10 == 2) goto LAB_01af62f4;
        uVar1 = *(undefined4 *)(lVar6 + 0x18);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_01aa0670(5,4,0xd,uVar1,&local_70,0);
        goto joined_r0x01af6410;
      }
      lVar6 = *(long *)puVar5;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar5;
      }
      uVar1 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x18);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      FUN_01b15f68(local_a0,0xd,uVar1,0);
      puVar7 = local_100;
      local_100[0] = local_a0[0];
      uStack_ec = uStack_8c;
    }
LAB_01af6230:
    FUN_01aad5a0(local_a0,puVar7,0);
  }
  else {
    if (param_1 == 0x20) {
      lVar6 = *(long *)System_Data_DataColumnCollection_TypeInfo;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar3;
      }
      iVar10 = *(int *)(*(long *)(lVar6 + 0xb8) + 0x118);
      if (iVar10 == 1) {
        lVar6 = *(long *)puVar5;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar6 = *(long *)puVar5;
        }
        uVar1 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x18);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        FUN_01b15f68(local_a0,3,uVar1,0);
        puVar7 = local_e0;
        local_e0[0] = local_a0[0];
        uStack_cc = uStack_8c;
        goto LAB_01af6230;
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        iVar10 = *(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x118);
      }
      lVar6 = *(long *)puVar5;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar5;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      if (iVar10 == 2) {
LAB_01af63c4:
        if (*(long *)(lVar6 + 0x60) == 0) {
LAB_01af64b4:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(int *)(*(long *)(lVar6 + 0x60) + 0x18) != 0) {
          return;
        }
LAB_01af64b8:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar1 = *(undefined4 *)(lVar6 + 0x18);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01aa0670(4,4,3,uVar1,&local_60,0);
joined_r0x01af6410:
      if ((uVar8 & 1) != 0) {
        return;
      }
    }
    else if (param_1 == 0x40) {
      lVar6 = *(long *)System_Data_DataColumnCollection_TypeInfo;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar3;
      }
      iVar10 = *(int *)(*(long *)(lVar6 + 0xb8) + 0x118);
      if (iVar10 != 1) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          iVar10 = *(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x118);
        }
        lVar6 = *(long *)puVar5;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar6 = *(long *)puVar5;
        }
        lVar6 = *(long *)(lVar6 + 0xb8);
        if (iVar10 == 2) {
LAB_01af62f4:
          if (*(long *)(lVar6 + 0x60) == 0) goto LAB_01af64b4;
          if (1 < *(uint *)(*(long *)(lVar6 + 0x60) + 0x18)) {
            return;
          }
          goto LAB_01af64b8;
        }
        uVar1 = *(undefined4 *)(lVar6 + 0x18);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_01aa0670(5,4,4,uVar1,&local_80,0);
        goto joined_r0x01af6410;
      }
      lVar6 = *(long *)puVar5;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar6 = *(long *)puVar5;
      }
      uVar1 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x18);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      FUN_01b15f68(local_a0,4,uVar1,0);
      local_120[0] = local_a0[0];
      uStack_10c = uStack_8c;
      goto LAB_01af6230;
    }
LAB_01af6460:
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    uVar9 = *(undefined8 *)
             Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  }
  return;
}


