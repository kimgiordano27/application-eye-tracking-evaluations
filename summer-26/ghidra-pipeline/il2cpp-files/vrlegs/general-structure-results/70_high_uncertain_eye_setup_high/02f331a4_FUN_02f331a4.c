/*
FUNCTION_NAME: FUN_02f331a4
ENTRY_POINT: 02f331a4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f335e8) */

long * FUN_02f331a4(long param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  uint uVar11;
  undefined8 uVar12;
  char local_44 [4];
  
  if ((DAT_0412aa8c & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf21f8);
    FUN_01ab69ac(PTR_DAT_03cca1a0);
    FUN_01ab69ac(PTR_DAT_03d23a68);
    FUN_01ab69ac(PTR_DAT_03cc16b0);
    DAT_0412aa8c = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  local_44[0] = '\0';
  FUN_027e0bd8(uVar9,local_44,0);
  plVar10 = (long *)(param_1 + 0x10);
  if ((*plVar10 == 0) || (*(byte *)(param_1 + 0x18) != (param_3 & 1))) {
    *(byte *)(param_1 + 0x18) = param_3 & 1;
    puVar2 = PTR_DAT_03cc16b0;
    if ((param_3 & 1) == 0) {
      lVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f8);
      FUN_02733e6c(lVar3,0);
      *plVar10 = lVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar3);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc16b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (DAT_0411f481 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cc16b0);
        DAT_0411f481 = '\x01';
      }
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar3 = *(long *)puVar2;
      }
      uVar12 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
      lVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cf21f8);
      FUN_02734224(lVar3,uVar12,0);
      *plVar10 = lVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar3);
    }
  }
  puVar2 = PTR_DAT_03cca1a0;
  plVar10 = (long *)*plVar10;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar3 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03cca1a0) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02f33354;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)PTR_DAT_03cca1a0,0);
LAB_02f33354:
  plVar10 = (long *)(*(code *)*puVar4)(plVar10,param_2,puVar4[1]);
  if (plVar10 == (long *)0x0) {
    if (0 < *(int *)(param_1 + 0x48)) {
      lVar3 = 4;
      do {
        lVar5 = *(long *)(param_1 + 0x20);
        uVar7 = lVar3 - 4;
        uVar11 = (uint)uVar7;
        if ((param_3 & 1) == 0) {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          plVar10 = *(long **)(lVar5 + lVar3 * 8);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar5 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar7 = FUN_025bcee0(lVar5,param_2,0);
          if ((uVar7 & 1) != 0) {
            lVar5 = *(long *)(param_1 + 0x20);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if (*(uint *)(lVar5 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            plVar10 = *(long **)(param_1 + 0x10);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            lVar6 = *plVar10;
            uVar12 = *(undefined8 *)(lVar5 + lVar3 * 8);
            lVar5 = *(long *)puVar2;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 == 0) goto LAB_02f33538;
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            goto LAB_02f33520;
          }
        }
        else {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          plVar10 = *(long **)(lVar5 + lVar3 * 8);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar12 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
          uVar7 = FUN_025bd20c(uVar12,param_2,5,0);
          if ((uVar7 & 1) != 0) {
            lVar5 = *(long *)(param_1 + 0x20);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if (*(uint *)(lVar5 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c44();
            }
            plVar10 = *(long **)(param_1 + 0x10);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            lVar6 = *plVar10;
            uVar12 = *(undefined8 *)(lVar5 + lVar3 * 8);
            lVar5 = *(long *)puVar2;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 == 0) goto LAB_02f334d8;
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            goto LAB_02f334c0;
          }
        }
        lVar5 = lVar3 + -3;
        lVar3 = lVar3 + 1;
      } while (lVar5 < *(int *)(param_1 + 0x48));
    }
    plVar10 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03d23a68 + 0x130);
    if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d23a68))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar10);
    }
  }
  goto LAB_02f33454;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_02f33520:
    if (*(long *)(piVar8 + -2) == lVar5) {
      puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
      goto LAB_02f33594;
    }
  }
LAB_02f33538:
  puVar4 = (undefined8 *)FUN_01a472ec(plVar10,lVar5,1);
LAB_02f33594:
  (*(code *)*puVar4)(plVar10,param_2,uVar12,puVar4[1]);
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar5 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  goto LAB_02f335bc;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_02f334c0:
    if (*(long *)(piVar8 + -2) == lVar5) {
      puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
      goto LAB_02f33558;
    }
  }
LAB_02f334d8:
  puVar4 = (undefined8 *)FUN_01a472ec(plVar10,lVar5,1);
LAB_02f33558:
  (*(code *)*puVar4)(plVar10,param_2,uVar12,puVar4[1]);
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(uint *)(lVar5 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
LAB_02f335bc:
  plVar10 = *(long **)(lVar5 + lVar3 * 8);
LAB_02f33454:
  if (local_44[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
  }
  return plVar10;
}


