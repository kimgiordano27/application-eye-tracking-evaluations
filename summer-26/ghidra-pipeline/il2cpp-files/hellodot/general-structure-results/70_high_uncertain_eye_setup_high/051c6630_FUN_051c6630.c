/*
FUNCTION_NAME: FUN_051c6630
ENTRY_POINT: 051c6630
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_051c6630(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  if ((DAT_06a713cc & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06605e78);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06605e80);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066056a8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066056b0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066056b8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608d00);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066056c0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06608d10);
    DAT_06a713cc = 1;
  }
  puVar3 = PTR_DAT_06605e78;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_98 = 0;
  local_a0 = 0;
  uStack_9c = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  local_b8 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_04611df8(*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_06605e78);
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_04611df8(*(long *)(param_1 + 0x48),*(undefined8 *)puVar3);
      puVar3 = PTR_DAT_06608d00;
      plVar11 = *(long **)(param_1 + 0x30);
      if (plVar11 != (long *)0x0) {
        lVar7 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06608d00) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_051c6764;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)PTR_DAT_06608d00,0);
LAB_051c6764:
        plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
        if (plVar11 != (long *)0x0) {
          lVar7 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06608d10) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_051c67cc;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)PTR_DAT_06608d10,0);
LAB_051c67cc:
          plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
          if (plVar11 != (long *)0x0) {
            lVar7 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_066056c0) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_051c6838;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)PTR_DAT_066056c0,1);
LAB_051c6838:
            puVar4 = PTR_DAT_06605e80;
            puVar2 = PTR_DAT_066056b0;
            puVar1 = PTR_DAT_066056a8;
            (*(code *)*puVar5)(&local_70,plVar11,puVar5[1]);
            uStack_88 = CONCAT44(uStack_64,uStack_68);
            local_80 = CONCAT44(uStack_5c,local_60);
            local_90 = local_70;
            while (uVar6 = FUN_04812268(&local_90,*(undefined8 *)puVar2), uVar9 = local_80,
                  (uVar6 & 1) != 0) {
              plVar11 = *(long **)(param_1 + 0x30);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c7c();
              }
              lVar8 = *plVar11;
              lVar7 = *(long *)puVar3;
              uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar6 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == lVar7) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 7) * 0x10 + 0x138);
                    goto LAB_051c68e0;
                  }
                  uVar6 = uVar6 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_02ce0a7c(plVar11,lVar7,7);
LAB_051c68e0:
              uVar6 = (*(code *)*puVar5)(plVar11,uVar9 & 0xffffffff,&local_b0,puVar5[1]);
              if ((uVar6 & 1) != 0) {
                if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02ce7c7c();
                }
                uStack_68 = uStack_a8;
                local_70 = local_b0;
                uStack_5c = uStack_9c;
                uStack_58 = local_98;
                uStack_64 = uStack_a4;
                local_60 = local_a0;
                FUN_04611b14(*(long *)(param_1 + 0x40),uVar9 & 0xffffffff,&local_70,
                             *(undefined8 *)puVar4);
              }
              plVar11 = *(long **)(param_1 + 0x30);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c7c();
              }
              lVar8 = *plVar11;
              lVar7 = *(long *)puVar3;
              uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar6 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == lVar7) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 8) * 0x10 + 0x138);
                    goto OVRPlugin__SetClientColorDesc;
                  }
                  uVar6 = uVar6 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar6 != 0);
              }
              puVar5 = (undefined8 *)FUN_02ce0a7c(plVar11,lVar7,8);
OVRPlugin__SetClientColorDesc:
              uVar6 = (*(code *)*puVar5)(plVar11,uVar9 & 0xffffffff,&local_d0,puVar5[1]);
              if ((uVar6 & 1) != 0) {
                if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02ce7c7c();
                }
                uStack_68 = uStack_c8;
                local_70 = local_d0;
                uStack_5c = uStack_bc;
                uStack_58 = local_b8;
                uStack_64 = uStack_c4;
                local_60 = local_c0;
                FUN_04611b14(*(long *)(param_1 + 0x48),uVar9 & 0xffffffff,&local_70,
                             *(undefined8 *)puVar4);
              }
            }
            FUN_04812264(&local_90,*(undefined8 *)puVar1);
            lVar7 = *(long *)(param_1 + 0x20);
            if (lVar7 != 0) {
              (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


