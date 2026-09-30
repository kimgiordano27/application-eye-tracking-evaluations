/*
FUNCTION_NAME: FUN_02d86234
ENTRY_POINT: 02d86234
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02d86600) */

void FUN_02d86234(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_80;
  int *piStack_78;
  long *local_70;
  undefined4 *puStack_68;
  undefined8 *local_60;
  undefined4 local_54;
  undefined8 local_50;
  int local_48;
  char local_44 [4];
  long local_38;
  
  local_38 = param_1;
  if ((DAT_04129ce5 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d1b428);
    FUN_01ab69ac(PTR_DAT_03d1a5c0);
    FUN_01ab69ac(PTR_DAT_03cbebc0);
    FUN_01ab69ac(PTR_DAT_03d1a260);
    FUN_01ab69ac(PTR_DAT_03d15248);
    FUN_01ab69ac(PTR_DAT_03d1b750);
    DAT_04129ce5 = 1;
  }
  local_48 = 0;
  local_50 = 0;
  local_54 = 0;
  if (*(char *)(param_1 + 0x38) == '\0') {
    plVar5 = *(long **)(param_1 + 0x20);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar3 = (**(code **)(*plVar5 + 0x2a8))(plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
    if (iVar3 == 0) {
      FUN_02d86700(param_1);
      uVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d1a5c0);
      FUN_02d50c7c(uVar6,0);
      *(undefined8 *)(param_1 + 0x60) = uVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(param_1 + 0x60),uVar6);
      *(undefined1 *)(param_1 + 0x38) = 1;
      *(undefined1 *)(param_1 + 0x58) = 0;
    }
    else {
      uVar6 = FUN_02d82234(param_1);
      local_44[0] = '\0';
      FUN_027e0bd8(uVar6,local_44,0);
      if (*(char *)(local_38 + 0x38) == '\0') {
        uVar11 = *(undefined8 *)(local_38 + 0x10);
        uVar13 = *(undefined8 *)(local_38 + 0x30);
        uVar10 = *(undefined8 *)(local_38 + 0x70);
        uVar12 = *(undefined8 *)(local_38 + 0x78);
        lVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d1b428);
        FUN_02d579c8(lVar7,uVar11,uVar13,uVar10,uVar12,0);
        lVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d1a5c0);
        FUN_02d50c7c(lVar8,0);
        local_48 = 0;
        if (*(char *)(local_38 + 0x58) == '\0') {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_02d5cd64(lVar7,local_38,0);
        }
        piStack_78 = &local_48;
        local_70 = &local_38;
        puStack_68 = &local_54;
        local_60 = &local_50;
        local_80 = 0;
        plVar9 = (long *)FUN_02d2f18c(0);
        puVar1 = PTR_DAT_03d15248;
        local_48 = 0;
        plVar5 = *(long **)(local_38 + 0x20);
        iVar3 = local_48;
        while( true ) {
          local_48 = iVar3;
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          iVar4 = (**(code **)(*plVar5 + 0x2a8))(plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
          if (iVar4 <= iVar3) break;
          plVar5 = *(long **)(local_38 + 0x20);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          plVar5 = (long *)(**(code **)(*plVar5 + 0x378))
                                     (plVar5,local_48,*(undefined8 *)(*plVar5 + 0x380));
          if (plVar5 != (long *)0x0) {
            bVar2 = *(byte *)(*(long *)puVar1 + 0x130);
            if ((*(byte *)(*plVar5 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar1)) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6ee0(plVar5);
            }
          }
          thunk_FUN_01a4ad9c(plVar5,0);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(char *)((long)plVar5 + 0x7a) == '\0') {
            uVar12 = **(undefined8 **)(*(long *)PTR_DAT_03cbebc0 + 0xb8);
            uVar10 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d1a260);
            FUN_02d76210(uVar10,*(undefined8 *)PTR_DAT_03d1b750,uVar12,0);
            FUN_02d85db8(local_38,uVar10,0);
            *(undefined1 *)(local_38 + 0x38) = 0;
            goto LAB_02d865a8;
          }
          if (*(char *)((long)plVar5 + 0x79) == '\0') {
LAB_02d86458:
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            FUN_02d5adc0(lVar7,plVar5,1,0);
          }
          else if (*(char *)(local_38 + 0x58) != '\0') {
            if (plVar5 != plVar9) goto LAB_02d86458;
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            FUN_02d5adc0(lVar7,plVar5,0,0);
          }
          iVar3 = local_48 + 1;
          plVar5 = *(long **)(local_38 + 0x20);
        }
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        bVar2 = FUN_02d57c0c(lVar7,local_38,lVar8,0);
        *(byte *)(local_38 + 0x38) = bVar2 & 1;
        if ((bVar2 & 1) != 0) {
          if (*(char *)(local_38 + 0x58) == '\0') {
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            FUN_02d51674(lVar8,*(undefined8 *)(local_38 + 0x60),*(undefined8 *)(local_38 + 0x30),0);
          }
          *(long *)(local_38 + 0x60) = lVar8;
          *(undefined1 *)(local_38 + 0x58) = 0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((long *)(local_38 + 0x60),lVar8);
        }
LAB_02d865a8:
        FUN_019bdb34(&local_80);
      }
      if (local_44[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
      }
    }
  }
  return;
}


