/*
FUNCTION_NAME: FUN_07deeb50
ENTRY_POINT: 07deeb50
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_07deeb50(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((DAT_0899a1eb & 1) == 0) {
    FUN_03a8a718(OVRPlugin_Media_TypeInfo);
    FUN_03a8a718(PTR_DAT_084961e0);
    FUN_03a8a718(OVRPlugin_OverlayShape_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_0_1_3_TypeInfo);
    DAT_0899a1eb = 1;
  }
  puVar3 = OVRPlugin_OVRP_0_1_3_TypeInfo;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    local_88 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x268);
    lVar4 = FUN_07e13e44(&local_88,0);
    if (lVar4 == 0) {
      if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar5 = FUN_07ea20f8(0);
    }
    else {
      FUN_07dfdfd8(lVar4,0);
      uVar5 = FUN_07dfdfd8(lVar4,0);
    }
    uVar1 = *(undefined4 *)param_2;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar6 = FUN_07eaa354(uVar1,0);
    if ((uVar6 & 1) == 0) {
LAB_07deedcc:
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar7 = FUN_07dfdfd8(*(long *)(param_1 + 0x20),0);
        uStack_78 = param_2[1];
        local_80 = *param_2;
        local_70 = param_2[2];
        FUN_07f708b8(uVar7,&local_80,uVar5,0);
LAB_07deedfc:
        if (*(long *)(lVar2 + 0x28) == local_48) {
          return;
        }
        goto LAB_07deee38;
      }
    }
    else if (*(long *)(param_1 + 0x20) != 0) {
      uVar7 = FUN_07dfdfd8(*(long *)(param_1 + 0x20),0);
      puVar3 = OVRPlugin_Media_TypeInfo;
      if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)OVRPlugin_Media_TypeInfo);
      }
      FUN_07de46f4(uVar7);
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar7 = FUN_07dfdfd8(*(long *)(param_1 + 0x20),0);
        uVar6 = FUN_07f69f88(uVar7,0);
        if ((uVar6 & 1) == 0) {
LAB_07deed48:
          if ((*(long *)(param_1 + 0x20) != 0) &&
             (plVar8 = (long *)FUN_07e02864(*(long *)(param_1 + 0x20),0), plVar8 != (long *)0x0)) {
            lVar4 = *plVar8;
            uVar1 = *(undefined4 *)param_2;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar6 != 0) {
              piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_084961e0) {
                  puVar9 = (undefined8 *)(lVar4 + (long)(*piVar10 + 0x12) * 0x10 + 0x138);
                  goto LAB_07deedbc;
                }
                uVar6 = uVar6 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar6 != 0);
            }
            puVar9 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)PTR_DAT_084961e0,0x12);
LAB_07deedbc:
            (*(code *)*puVar9)(plVar8,uVar1,puVar9[1]);
            goto LAB_07deedcc;
          }
        }
        else if (*(long *)(param_1 + 0x20) != 0) {
          uVar6 = FUN_07e08834(*(long *)(param_1 + 0x20),0);
          if ((uVar6 & 1) == 0) goto LAB_07deed48;
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_07deee24;
          uVar7 = FUN_07dfdfd8(*(long *)(param_1 + 0x20),0);
          uVar1 = *(undefined4 *)param_2;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)puVar3);
          }
          uVar6 = FUN_07de49dc(uVar7,uVar1,&local_a0);
          if ((uVar6 & 1) == 0) goto LAB_07deed48;
          lVar4 = *(long *)(param_1 + 0x20);
          if (lVar4 == 0) goto LAB_07deee24;
          uVar1 = *(undefined4 *)param_2;
          uVar7 = FUN_07dfdfd8(lVar4,0);
          uStack_58 = param_2[1];
          local_60 = *param_2;
          local_50 = param_2[2];
          uVar6 = FUN_07f7da98(lVar4,uVar1,uVar7,&local_60,local_a0._4_4_,uStack_98 & 0xffffffff,
                               local_90,0);
          if ((uVar6 & 1) == 0) goto LAB_07deedcc;
          goto LAB_07deedfc;
        }
      }
    }
  }
LAB_07deee24:
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
LAB_07deee38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


