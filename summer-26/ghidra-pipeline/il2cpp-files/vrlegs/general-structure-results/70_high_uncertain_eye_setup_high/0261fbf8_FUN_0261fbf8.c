/*
FUNCTION_NAME: FUN_0261fbf8
ENTRY_POINT: 0261fbf8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0261ff0c) */
/* WARNING: Removing unreachable block (ram,0x0261ff78) */
/* WARNING: Removing unreachable block (ram,0x0261ff88) */

void FUN_0261fbf8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  char local_44 [4];
  
  puVar3 = PTR_DAT_03cf2168;
  puVar2 = PTR_DAT_03cca338;
  puVar1 = PTR_DAT_03cc4f50;
  if ((DAT_04124058 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf2168);
    FUN_01ab69ac(PTR_DAT_03cf2170);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03cc4f30);
    FUN_01ab69ac(PTR_DAT_03cc4f38);
    FUN_01ab69ac(PTR_DAT_03cca338);
    FUN_01ab69ac(PTR_DAT_03cc4f50);
    DAT_04124058 = 1;
  }
  lVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  Animancer_AnimancerState__OnSetIsPlaying(lVar5,*(undefined8 *)puVar2);
  lVar6 = *(long *)puVar3;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar6 = *(long *)puVar3;
  }
  plVar7 = (long *)**(long **)(lVar6 + 0xb8);
  if (plVar7 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar7 + 0x2d8))(plVar7,*(undefined8 *)(*plVar7 + 0x2e0));
    local_44[0] = '\0';
    FUN_027e0bd8(uVar8,local_44,0);
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *(long *)puVar3;
    }
    plVar7 = (long *)**(long **)(lVar6 + 0xb8);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x388))(plVar7,*(undefined8 *)(*plVar7 + 0x390));
    puVar4 = PTR_DAT_03cf2170;
    puVar3 = PTR_DAT_03cc4f30;
    puVar2 = PTR_DAT_03cbed20;
    puVar1 = PTR_DAT_03cbed08;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    do {
      lVar12 = *plVar7;
      lVar6 = *(long *)puVar2;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar6) {
            puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0261fd98;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01a472ec(plVar7,lVar6,0);
LAB_0261fd98:
      uVar13 = (*(code *)*puVar9)(plVar7,puVar9[1]);
      if ((uVar13 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_01a89d6c(plVar7,*(undefined8 *)puVar1);
        if (plVar7 == (long *)0x0) goto LAB_0261ff00;
        lVar12 = *plVar7;
        lVar6 = *(long *)puVar1;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 == 0) goto LAB_0261fed8;
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_0261fec0;
      }
      lVar12 = *plVar7;
      lVar6 = *(long *)puVar2;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar6) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_0261fdf8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_01a472ec(plVar7,lVar6,1);
LAB_0261fdf8:
      uVar10 = (*(code *)*puVar9)(plVar7,puVar9[1]);
      plVar11 = (long *)thunk_FUN_01a89d6c(uVar10,*(undefined8 *)puVar4);
      if (plVar11 != (long *)0x0) {
        lVar12 = *plVar11;
        lVar6 = *(long *)puVar4;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar6) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0261fe60;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_01a472ec(plVar11,lVar6,0);
LAB_0261fe60:
        lVar6 = (*(code *)*puVar9)(plVar11,puVar9[1]);
        if (lVar6 != 0) {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          FUN_01b5f01c(lVar5,lVar6,*(undefined8 *)puVar3);
        }
      }
    } while( true );
  }
  goto LAB_0261ff74;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0261fec0:
    if (*(long *)(piVar14 + -2) == lVar6) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0261fef4;
    }
  }
LAB_0261fed8:
  puVar9 = (undefined8 *)FUN_01a472ec(plVar7,lVar6,0);
LAB_0261fef4:
  (*(code *)*puVar9)(plVar7,puVar9[1]);
LAB_0261ff00:
  if (local_44[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
  }
  if (lVar5 != 0) {
    FUN_022195a8(lVar5,*(undefined8 *)PTR_DAT_03cc4f38);
    return;
  }
LAB_0261ff74:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


