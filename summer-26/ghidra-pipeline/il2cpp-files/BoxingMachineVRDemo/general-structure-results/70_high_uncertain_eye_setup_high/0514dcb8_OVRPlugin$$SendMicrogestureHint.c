/*
FUNCTION_NAME: OVRPlugin$$SendMicrogestureHint
ENTRY_POINT: 0514dcb8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SendMicrogestureHint(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  char cVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long unaff_x21;
  long *unaff_x22;
  long in_stack_00000018;
  
  *(undefined8 *)(in_stack_00000018 + 0x50) = param_2;
  thunk_FUN_02dd37b4();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
  plVar11 = (long *)PTR_DAT_06780528;
  plVar2 = (long *)PTR_DAT_0676aab8;
LAB_0514dce8:
  do {
    plVar10 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0514dd3c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(plVar10,*unaff_x22,0);
LAB_0514dd3c:
    uVar8 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      FUN_0514e2bc();
      *(undefined8 *)(in_stack_00000018 + 0x50) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x50),0);
      return 0;
    }
    plVar10 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *plVar2) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0514dda8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(plVar10,*plVar2,0);
LAB_0514dda8:
    plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
    if (plVar10 == (long *)0x0) {
LAB_0514de2c:
      lVar7 = *(long *)(in_stack_00000018 + 0x40);
      cVar6 = '\0';
      if (lVar7 != 0) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        cVar6 = *(char *)(lVar7 + 0x20);
      }
      if (cVar6 != '\0') {
        lVar7 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_04f8e414(0);
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar7 = *(long *)(unaff_x21 + 0x10);
        if (lVar7 == 0) {
          uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06781d50);
          lVar7 = thunk_FUN_02dc61f4(PTR_DAT_06775140);
        }
        else {
          uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06781d50);
        }
        if (plVar10 != (long *)0x0) {
          plVar11 = (long *)thunk_FUN_02d709fc(plVar10,0);
          if (plVar11 != (long *)0x0) {
            uVar12 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
            uVar4 = FUN_050f0fe0(uVar5,uVar4,lVar7,uVar12,0);
            thunk_FUN_02dc61f4(PTR_DAT_0677d960);
            uVar5 = thunk_FUN_02d9d534();
            FUN_050931fc(uVar5,uVar4,0);
            uVar4 = thunk_FUN_02dc61f4(PTR_DAT_06781d48);
                    /* WARNING: Subroutine does not return */
            FUN_02d609b4(uVar5,uVar4);
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      goto LAB_0514dce8;
    }
    bVar1 = *(byte *)(*plVar11 + 0x130);
    if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *plVar11))
    goto LAB_0514de2c;
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(long *)(unaff_x21 + 0x10) == 0) {
      uVar4 = FUN_0513336c(plVar10);
      *(undefined8 *)(in_stack_00000018 + 0x58) = uVar4;
      thunk_FUN_02dd37b4();
      plVar11 = *(long **)(in_stack_00000018 + 0x58);
      *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x22) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0514df08;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4(plVar11,*unaff_x22,0);
LAB_0514df08:
      uVar8 = (*(code *)*puVar3)(plVar11,puVar3[1]);
      if ((uVar8 & 1) != 0) {
        plVar11 = *(long **)(in_stack_00000018 + 0x58);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar7 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 == 0) goto LAB_0514dfc0;
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        break;
      }
      FUN_0514e20c();
      *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x58),0);
      plVar11 = (long *)PTR_DAT_06780528;
      plVar2 = (long *)PTR_DAT_0676aab8;
    }
    else {
      lVar7 = FUN_051339f4(plVar10,*(long *)(unaff_x21 + 0x10),0);
      if (lVar7 != 0) {
        *(long *)(in_stack_00000018 + 0x18) = lVar7;
        thunk_FUN_02dd37b4((long *)(in_stack_00000018 + 0x18));
        *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
        return 1;
      }
      lVar7 = *(long *)(in_stack_00000018 + 0x40);
      cVar6 = '\0';
      if (lVar7 != 0) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        cVar6 = *(char *)(lVar7 + 0x20);
      }
      if (cVar6 != '\0') {
        lVar7 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_04f8e414(0);
        uVar12 = *(undefined8 *)(unaff_x21 + 0x10);
        uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06781d40);
        uVar4 = FUN_050f0ec0(uVar5,uVar4,uVar12,0);
        thunk_FUN_02dc61f4(PTR_DAT_0677d960);
        uVar5 = thunk_FUN_02d9d534();
        FUN_050931fc(uVar5,uVar4,0);
        uVar4 = thunk_FUN_02dc61f4(PTR_DAT_06781d48);
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar5,uVar4);
      }
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06780bf8) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0514dfdc;
    }
  }
LAB_0514dfc0:
  puVar3 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)PTR_DAT_06780bf8,0);
LAB_0514dfdc:
  (*(code *)*puVar3)(plVar11,puVar3[1]);
  *(undefined8 *)(in_stack_00000018 + 0x18) = extraout_x1;
  thunk_FUN_02dd37b4();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 2;
  return 1;
}


