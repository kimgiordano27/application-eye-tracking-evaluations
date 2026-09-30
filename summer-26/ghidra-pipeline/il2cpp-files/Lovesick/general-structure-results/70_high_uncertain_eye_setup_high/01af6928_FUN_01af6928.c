/*
FUNCTION_NAME: FUN_01af6928
ENTRY_POINT: 01af6928
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


void FUN_01af6928(int param_1)

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
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
                    /* catch() { ... } // from try @ 01af66ec with catch @ 01af6928 */
  puVar7 = local_120;
                    /* try { // try from 01af6940 to 01bf6943 has its CatchHandler @ 01af69bc */
  if ((DAT_0377d12f & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_5227);
    thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_122_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f02a8);
                    /* try { // try from 01af6980 to 01bf69a7 has its CatchHandler @ 01af69c8 */
    DAT_0377d12f = 1;
  }
  puVar5 = StringLiteral_5227;
  puVar4 = OVRPlugin_OVRP_1_122_0_TypeInfo;
  puVar3 = System_Data_DataColumnCollection_TypeInfo;
  puVar2 = PTR_DAT_033f02a8;
                    /* try { // try from 01af69a8 to 01bf69b3 has its CatchHandler @ 01af61c0 */
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
                    /* try { // try from 01af69b4 to 01bf69bb has its CatchHandler @ 01af69c8 */
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
                    /* catch() { ... } // from try @ 01af6940 with catch @ 01af69bc */
  if (param_1 < 3) {
    if (param_1 == 1) {
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
        if (iVar10 == 2) goto LAB_01af6d74;
        uVar1 = *(undefined4 *)(lVar6 + 0x18);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_01aa099c(4,5,0xc,uVar1,&local_50,0);
        goto joined_r0x01af6dbc;
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
      if (param_1 != 2) goto LAB_01af6e04;
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
        if (iVar10 == 2) goto LAB_01af6cac;
        uVar1 = *(undefined4 *)(lVar6 + 0x18);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_01aa099c(5,5,0xd,uVar1,&local_70,0);
        goto joined_r0x01af6dbc;
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
LAB_01af6bec:
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
        goto LAB_01af6bec;
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
LAB_01af6d74:
        if (*(long *)(lVar6 + 0x60) == 0) {
LAB_01af6e58:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(int *)(*(long *)(lVar6 + 0x60) + 0x18) != 0) {
          return;
        }
LAB_01af6e5c:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar1 = *(undefined4 *)(lVar6 + 0x18);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01aa099c(4,5,3,uVar1,&local_60,0);
joined_r0x01af6dbc:
      if ((uVar8 & 1) != 0) {
        return;
      }
    }
    else {
                    /* catch() { ... } // from try @ 01af68e4 with catch @ 01af69c8
                       catch() { ... } // from try @ 01af6980 with catch @ 01af69c8
                       catch() { ... } // from try @ 01af69b4 with catch @ 01af69c8 */
      if (param_1 == 0x40) {
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
LAB_01af6cac:
            if (*(long *)(lVar6 + 0x60) == 0) goto LAB_01af6e58;
            if (1 < *(uint *)(*(long *)(lVar6 + 0x60) + 0x18)) {
              return;
            }
            goto LAB_01af6e5c;
          }
          uVar1 = *(undefined4 *)(lVar6 + 0x18);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_01aa099c(5,5,4,uVar1,&local_80,0);
          goto joined_r0x01af6dbc;
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
        goto LAB_01af6bec;
      }
    }
LAB_01af6e04:
    if (DAT_03774f00 == '\0') {
      thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__);
      DAT_03774f00 = '\x01';
    }
    uVar9 = *(undefined8 *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
    ;
  }
  return;
}


