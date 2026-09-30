/*
FUNCTION_NAME: FUN_05d41834
ENTRY_POINT: 05d41834
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05d41cc0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_05d41834(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,undefined8 param_5,
            undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined4 local_a4;
  char local_6c [4];
  undefined8 local_68;
  
  local_68 = 0;
  local_6c[0] = '\0';
  plVar7 = (long *)FUN_04036464(*(undefined8 *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x108)
                               );
  local_a4 = 0;
LAB_05d41890:
  lVar15 = *(long *)(param_1 + 0x10);
  thunk_FUN_03a989e4();
  if (((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x10), lVar16 == 0)) ||
     (lVar18 = *(long *)(lVar15 + 0x18), lVar18 == 0)) {
LAB_05d41cbc:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar8 = *(long *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03ac4090();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar8 = *(long *)(lVar15 + 0x18);
  if (lVar8 == 0) goto LAB_05d41cbc;
  iVar2 = *(int *)(lVar16 + 0x18);
  iVar5 = 0;
  if (iVar2 != 0) {
    iVar5 = (int)(param_4 & 0x7fffffff) / iVar2;
  }
  uVar3 = (param_4 & 0x7fffffff) - iVar5 * iVar2;
  iVar2 = *(int *)(lVar18 + 0x18);
  iVar5 = 0;
  if (iVar2 != 0) {
    iVar5 = (int)uVar3 / iVar2;
  }
  uVar4 = uVar3 - iVar5 * iVar2;
  if (*(uint *)(lVar8 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
  local_6c[0] = '\0';
  local_68 = *(undefined8 *)(lVar8 + (ulong)uVar4 * 8 + 0x20);
  FUN_067b43ac(local_68,local_6c,0);
  lVar16 = *(long *)(param_1 + 0x10);
  thunk_FUN_03a989e4();
  if (lVar15 == lVar16) {
    lVar16 = *(long *)(lVar15 + 0x10);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    lVar16 = *(long *)(lVar16 + (ulong)uVar3 * 8 + 0x20);
    lVar18 = 0;
    while (lVar8 = lVar16, lVar8 != 0) {
      if (*(uint *)(lVar8 + 0x30) == param_4) {
        plVar20 = *(long **)(param_1 + 0x18);
        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar17 = *(undefined8 *)(lVar8 + 0x10);
        uVar1 = *(undefined8 *)(lVar8 + 0x18);
        lVar16 = *(long *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x20);
        if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_03ac4090(lVar16);
        }
        lVar12 = *plVar20;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar16) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_05d419f8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_03ac43c4(plVar20,lVar16,0);
LAB_05d419f8:
        uVar13 = (*(code *)*puVar9)(plVar20,uVar17,uVar1,param_2,param_3,puVar9[1]);
        if ((uVar13 & 1) != 0) {
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          puVar9 = (undefined8 *)(lVar8 + 0x20);
          uVar17 = *puVar9;
          lVar16 = *(long *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x158);
          if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
            lVar16 = FUN_03ac4090(lVar16);
          }
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 == 0) goto LAB_05d41a88;
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto System_Action<DataBindingManager_BindingRequest>__BeginInvoke;
        }
      }
      lVar16 = *(long *)(lVar8 + 0x28);
      thunk_FUN_03a989e4();
      lVar18 = lVar8;
    }
    goto LAB_05d41b20;
  }
  bVar6 = true;
  goto LAB_05d41b28;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
System_Action<DataBindingManager_BindingRequest>__BeginInvoke:
    if (*(long *)(piVar14 + -2) == lVar16) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_05d41aa4;
    }
  }
LAB_05d41a88:
  puVar10 = (undefined8 *)FUN_03ac43c4(plVar7,lVar16,0);
LAB_05d41aa4:
  uVar13 = (*(code *)*puVar10)(plVar7,uVar17,param_6,puVar10[1]);
  if ((uVar13 & 1) == 0) {
LAB_05d41b20:
    bVar6 = false;
    local_a4 = 0;
  }
  else {
    lVar16 = *(long *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_03ac4090();
    }
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    lVar16 = *(long *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_03ac4090();
    }
    if (**(char **)(lVar16 + 0xb8) == '\0') {
      uVar17 = *(undefined8 *)(lVar8 + 0x10);
      uVar1 = *(undefined8 *)(lVar8 + 0x18);
      uVar19 = *(undefined8 *)(lVar8 + 0x28);
      thunk_FUN_03a989e4();
      if ((*(ushort *)(*(long *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0xf8) + 0x135) & 1)
          == 0) {
        FUN_03ac4090();
      }
      uVar11 = thunk_FUN_03ac74bc();
      FUN_0528d588(uVar11,uVar17,uVar1,param_5,param_4,uVar19,
                   *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x168));
      if (lVar18 == 0) {
        lVar15 = *(long *)(lVar15 + 0x10);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        thunk_FUN_03a989e4();
        puVar9 = (undefined8 *)(lVar15 + (ulong)uVar3 * 8 + 0x20);
        *puVar9 = uVar11;
        thunk_FUN_03afed3c(puVar9,uVar11);
      }
      else {
        thunk_FUN_03a989e4();
        *(undefined8 *)(lVar18 + 0x28) = uVar11;
        thunk_FUN_03afed3c((undefined8 *)(lVar18 + 0x28),uVar11);
      }
    }
    else {
      *puVar9 = param_5;
      thunk_FUN_03afed3c(puVar9);
    }
    bVar6 = false;
    local_a4 = 1;
  }
LAB_05d41b28:
  if (local_6c[0] != '\0') {
    thunk_FUN_03a98474(local_68,0);
  }
  if (!bVar6) {
    return local_a4;
  }
  goto LAB_05d41890;
}


