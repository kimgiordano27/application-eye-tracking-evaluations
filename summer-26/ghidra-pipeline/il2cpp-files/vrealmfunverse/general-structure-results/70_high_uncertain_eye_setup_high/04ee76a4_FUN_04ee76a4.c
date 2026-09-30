/*
FUNCTION_NAME: FUN_04ee76a4
ENTRY_POINT: 04ee76a4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_04ee76a4(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 local_90 [2];
  undefined8 uStack_7c;
  undefined8 local_6c [2];
  undefined8 uStack_58;
  
  puVar1 = PTR_DAT_06312520;
  if ((DAT_066c962e & 1) == 0) {
    FUN_02b3c81c(System_Action<OVRManager_PassthroughInitializationState>_TypeInfo);
    FUN_02b3c81c(System_Runtime_Remoting_IRemotingTypeInfo_var);
    FUN_02b3c81c(PTR_DAT_06312520);
    DAT_066c962e = 1;
  }
  lVar10 = *(long *)(param_4 + 200);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar4 = FUN_05c8e378(lVar10,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar5 = thunk_FUN_02b79644(*(undefined8 *)
                              System_Action<OVRManager_PassthroughInitializationState>_TypeInfo);
  FUN_04ee7ad4();
  if (((lVar10 != 0) && (*(long *)(param_4 + 0x1a8) != 0)) &&
     (FUN_04ee7b38(*(long *)(param_4 + 0x1a8),*(undefined8 *)(param_4 + 0x1b0),
                   *(undefined8 *)(param_4 + 0x1b8),*(undefined8 *)(lVar10 + 0xd8),0,lVar5),
     lVar5 != 0)) {
    if (*(char *)(lVar5 + 0x1c) == '\0') {
      if (*(long *)(param_4 + 0x1a8) == 0) goto LAB_04ee7a00;
      FUN_04ee7b38(*(long *)(param_4 + 0x1a8),*(undefined8 *)(param_4 + 0x1b0),
                   *(undefined8 *)(param_4 + 0x1b8),*(undefined8 *)(lVar10 + 0xd8),1,lVar5);
      if (*(char *)(lVar5 + 0x1c) == '\0') {
        return;
      }
    }
    if (*(long *)(param_4 + 0x1a8) != 0) {
      FUN_04ee7c0c(*(undefined4 *)(lVar5 + 0x28),*(long *)(param_4 + 0x1a8),
                   *(undefined8 *)(param_4 + 0x1b0),*(undefined8 *)(param_4 + 0x1b8));
      puVar1 = System_Runtime_Remoting_IRemotingTypeInfo_var;
      lVar10 = *(long *)(param_4 + 0x1a0);
      if (lVar10 != 0) {
        uVar4 = 0;
        do {
          if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar4) {
            uVar4 = FUN_04ee75d8(param_4);
            if ((uVar4 & 1) == 0) {
              FUN_04ee8044(param_4);
            }
            else {
              if (DAT_066c1d97 == '\0') {
                FUN_02b3c81c(PTR_DAT_06312438);
                DAT_066c1d97 = '\x01';
              }
              uVar17 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_06312438 + 0xb8) + 1);
              *(undefined8 *)(param_4 + 0x18c) = **(undefined8 **)(*(long *)PTR_DAT_06312438 + 0xb8)
              ;
              *(undefined4 *)(param_4 + 0x194) = uVar17;
              if (*(long *)(param_4 + 0x150) == 0) break;
              FUN_05c9a10c(*(long *)(param_4 + 0x150),0);
              FUN_05c7b504(0);
              uVar16 = FUN_05c7bd38(0);
              *(undefined4 *)(param_4 + 0x180) = uVar16;
              *(undefined4 *)(param_4 + 0x184) = uVar17;
              *(undefined4 *)(param_4 + 0x188) = param_3;
              *(undefined1 *)(param_4 + 0x1c8) = 1;
            }
            lVar10 = *(long *)(param_4 + 0x170);
            if (lVar10 != 0) {
              (**(code **)(lVar10 + 0x18))
                        (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
              return;
            }
            break;
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar4) {
LAB_04ee7ad0:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          if (*(long *)(param_4 + 200) == 0) break;
          param_3 = *(undefined4 *)(lVar5 + 0x18);
          lVar15 = *(long *)(lVar10 + uVar4 * 8 + 0x20);
          FUN_04ee7cbc(*(undefined4 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x14),param_4,
                       uVar4 & 0xffffffff,*(undefined8 *)(*(long *)(param_4 + 200) + 0xd8));
          lVar10 = *(long *)(lVar5 + 0x20);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_04ee7ad0;
          if (*(char *)(lVar10 + uVar4 + 0x20) != '\0') {
            lVar10 = *(long *)(param_4 + 0x1a0);
            if (lVar10 == 0) break;
            if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_04ee7ad0;
            lVar10 = *(long *)(lVar10 + uVar4 * 8 + 0x20);
            if (lVar10 == 0) break;
            if (*(char *)(lVar10 + 0x10) == '\0') {
              plVar11 = *(long **)(param_4 + 0x130);
              if (plVar11 == (long *)0x0) break;
              lVar7 = *plVar11;
              uVar12 = *(undefined8 *)(param_4 + 0x1c0);
              lVar10 = *(long *)puVar1;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar10) {
                    puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_04ee7894;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar6 = (undefined8 *)FUN_02b7654c(plVar11,lVar10,0);
LAB_04ee7894:
              iVar2 = (*(code *)*puVar6)(plVar11,puVar6[1]);
              plVar14 = *(long **)(param_4 + 0x120);
              if (plVar14 == (long *)0x0) break;
              lVar7 = *plVar14;
              lVar10 = *(long *)puVar1;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == lVar10) {
                    puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_04ee78f8;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar6 = (undefined8 *)FUN_02b7654c(plVar14,lVar10,0);
LAB_04ee78f8:
              iVar3 = (*(code *)*puVar6)(plVar14,puVar6[1]);
              FUN_04f9242c(uVar12,plVar11,iVar2 != iVar3,0);
              if ((*(long *)(param_4 + 200) == 0) || (*(long *)(param_4 + 0x1a8) == 0)) break;
              param_3 = *(undefined4 *)(lVar5 + 0x18);
              uVar8 = FUN_04ee7f4c(*(undefined4 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x14),
                                   *(long *)(param_4 + 0x1a8),uVar4 & 0xffffffff,
                                   *(undefined8 *)(param_4 + 0x1b0),*(undefined8 *)(param_4 + 0x1c0)
                                   ,*(undefined8 *)(*(long *)(param_4 + 200) + 0xd8));
              if ((uVar8 & 1) != 0) {
                if ((lVar15 == 0) || (lVar10 = *(long *)(lVar15 + 0x18), lVar10 == 0)) break;
                uVar8 = 0;
                while ((long)uVar8 < (long)(int)*(uint *)(lVar10 + 0x18)) {
                  if (*(uint *)(lVar10 + 0x18) <= uVar8) goto LAB_04ee7ad0;
                  if ((*(long *)(param_4 + 0x1a8) == 0) ||
                     (lVar7 = *(long *)(*(long *)(param_4 + 0x1a8) + 0x10), lVar7 == 0))
                  goto LAB_04ee7a00;
                  lVar13 = *(long *)(param_4 + 0x1b0);
                  uVar17 = *(undefined4 *)(lVar10 + uVar8 * 4 + 0x20);
                  FUN_04f91b7c(local_6c,lVar7,uVar17,0);
                  if (lVar13 == 0) goto LAB_04ee7a00;
                  local_90[0] = local_6c[0];
                  uStack_7c = uStack_58;
                  FUN_04f91bbc(lVar13,uVar17,local_90,0);
                  lVar10 = *(long *)(lVar15 + 0x18);
                  uVar8 = uVar8 + 1;
                  if (lVar10 == 0) goto LAB_04ee7a00;
                }
                if (*(long *)(param_4 + 200) == 0) break;
                param_3 = *(undefined4 *)(lVar5 + 0x18);
                FUN_04ee7cbc(*(undefined4 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x14),param_4,
                             uVar4 & 0xffffffff,*(undefined8 *)(*(long *)(param_4 + 200) + 0xd8));
              }
            }
          }
          lVar10 = *(long *)(param_4 + 0x1a0);
          uVar4 = uVar4 + 1;
        } while (lVar10 != 0);
      }
    }
  }
LAB_04ee7a00:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


