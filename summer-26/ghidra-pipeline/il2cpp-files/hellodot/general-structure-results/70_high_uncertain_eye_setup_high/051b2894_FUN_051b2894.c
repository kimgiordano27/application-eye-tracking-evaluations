/*
FUNCTION_NAME: FUN_051b2894
ENTRY_POINT: 051b2894
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_051b2894(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 long param_5,long param_6,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined1 local_120 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  long local_70;
  undefined8 uStack_68;
  
  if ((DAT_06a712f5 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06604b68);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608988);
    DAT_06a712f5 = 1;
  }
  uStack_78 = 0;
  uStack_74 = 0;
  local_80 = 0;
  uStack_7c = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_90 = 0;
  if (((param_5 != 0) && (*(char *)(param_5 + 0x38) != '\0')) && (*(long *)(param_5 + 0x40) != 0)) {
    iVar1 = *(int *)(*(long *)(param_5 + 0x40) + 0x10);
    FUN_051b2ba4(&local_90,param_5);
    lVar6 = local_70;
    if (local_70 != 0) {
      *(uint *)(local_70 + 0x10) = (uint)(iVar1 == 0);
      lVar4 = FUN_051a89a8(local_70);
      puVar3 = PTR_DAT_06608988;
      puVar2 = PTR_DAT_06604b68;
      if (lVar4 != 0) {
        lVar12 = 0;
        uVar11 = 0;
        do {
          if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar11) {
            lVar6 = OVRPlugin__get_audioInId(param_5);
            if (lVar6 == 0) {
              uStack_9c = CONCAT44(uStack_78,uStack_7c);
              uStack_a8 = uStack_88;
              local_b0 = local_90;
              uStack_a4 = uStack_84;
              uStack_a0 = local_80;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              uStack_e8 = uStack_a8;
              local_f0 = local_b0;
              uStack_dc = uStack_9c;
              uStack_e4 = uStack_a4;
              uStack_e0 = uStack_a0;
              FUN_051d9194(&local_d0,&local_f0,0);
              local_90 = local_d0;
              uStack_88 = uStack_c8;
              uStack_84 = uStack_c4;
              local_80 = uStack_c0;
              goto LAB_051b2ab8;
            }
            plVar7 = (long *)OVRPlugin__get_audioInId(param_5);
            if (plVar7 != (long *)0x0) {
              lVar4 = *plVar7;
              lVar6 = *(long *)puVar3;
              uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar11 == 0) goto LAB_051b2a2c;
              piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              goto LAB_051b2a14;
            }
            break;
          }
          lVar4 = FUN_051a89a8(lVar6);
          lVar5 = FUN_051a89a8(lVar6);
          if (lVar5 == 0) break;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar11) {
LAB_051b2ba0:
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          uVar13 = FUN_051d9280(lVar5 + lVar12 + 0x20,0);
          if (lVar4 == 0) break;
          if (*(uint *)(lVar4 + 0x18) <= uVar11) goto LAB_051b2ba0;
          lVar4 = lVar4 + lVar12;
          uVar11 = uVar11 + 1;
          lVar12 = lVar12 + 0x10;
          *(undefined4 *)(lVar4 + 0x20) = uVar13;
          *(int *)(lVar4 + 0x24) = (int)param_2;
          *(int *)(lVar4 + 0x28) = (int)param_3;
          *(undefined4 *)(lVar4 + 0x2c) = param_4;
          lVar4 = FUN_051a89a8(lVar6);
        } while (lVar4 != 0);
      }
    }
  }
LAB_051b2b9c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar10 = piVar10 + 4;
    if (uVar11 == 0) break;
LAB_051b2a14:
    if (*(long *)(piVar10 + -2) == lVar6) {
      puVar8 = (undefined8 *)(lVar4 + (long)(*piVar10 + 3) * 0x10 + 0x138);
      goto LAB_051b2a98;
    }
  }
LAB_051b2a2c:
  puVar8 = (undefined8 *)FUN_02ce0a7c(plVar7,lVar6,3);
LAB_051b2a98:
  (*(code *)*puVar8)(&local_b0,plVar7,&local_90,param_7,puVar8[1]);
  local_90 = local_b0;
  uStack_bc = uStack_9c;
  uStack_88 = uStack_a8;
  uStack_84 = uStack_a4;
  local_80 = uStack_a0;
LAB_051b2ab8:
  uStack_7c = (undefined4)uStack_bc;
  uStack_78 = (undefined4)((ulong)uStack_bc >> 0x20);
  uStack_108 = CONCAT44(uStack_74,uStack_78);
  uStack_110 = CONCAT44(uStack_7c,local_80);
  uStack_f8 = uStack_68;
  local_100 = local_70;
  FUN_051b2c84(param_6,local_120,param_7);
  lVar6 = OVRPlugin__get_audioInId(param_5);
  if (lVar6 != 0) {
    plVar7 = (long *)OVRPlugin__get_audioInId(param_5);
    if ((param_6 == 0) || (uVar9 = FUN_05ef2cf0(param_6,0), plVar7 == (long *)0x0))
    goto LAB_051b2b9c;
    lVar4 = *plVar7;
    lVar6 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar11 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar4 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_051b2b60;
        }
        uVar11 = uVar11 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02ce0a7c(plVar7,lVar6,4);
LAB_051b2b60:
    uVar9 = (*(code *)*puVar8)(plVar7,uVar9,puVar8[1]);
    OVRPlugin__set_ipd(param_6,uVar9);
  }
  return;
}


