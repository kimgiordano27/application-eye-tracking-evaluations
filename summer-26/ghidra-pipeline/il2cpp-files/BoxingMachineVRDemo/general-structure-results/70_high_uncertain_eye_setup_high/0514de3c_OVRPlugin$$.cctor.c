/*
FUNCTION_NAME: OVRPlugin$$.cctor
ENTRY_POINT: 0514de3c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin___cctor(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  char cVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  long *unaff_x26;
  long in_stack_00000018;
  
  do {
    cVar8 = '\0';
    if (param_1 != 0) {
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      cVar8 = *(char *)(unaff_x23 + 0x20);
    }
    if (cVar8 != '\0') {
      lVar3 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar4 = FUN_04f8e414(0);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar3 = *(long *)(unaff_x21 + 0x10);
      if (lVar3 == 0) {
        uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06781d50);
        lVar3 = thunk_FUN_02dc61f4(PTR_DAT_06775140);
      }
      else {
        uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06781d50);
      }
      if (unaff_x20 != (long *)0x0) {
        plVar6 = (long *)thunk_FUN_02d709fc(unaff_x20,0);
        if (plVar6 != (long *)0x0) {
          uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
          uVar4 = FUN_050f0fe0(uVar5,uVar4,lVar3,uVar7,0);
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
LAB_0514dce8:
    plVar6 = *(long **)(unaff_x19 + 0x50);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar3 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0514dd3c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4(plVar6,*unaff_x22,0);
LAB_0514dd3c:
    uVar9 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if ((uVar9 & 1) == 0) {
      FUN_0514e2bc();
      *(undefined8 *)(in_stack_00000018 + 0x50) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x50),0);
      return 0;
    }
    plVar6 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar3 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0514dda8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4(plVar6,*unaff_x25,0);
LAB_0514dda8:
    unaff_x20 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
    unaff_x19 = in_stack_00000018;
    if (unaff_x20 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x26 + 0x130);
      if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x26))
      goto LAB_0514de2c;
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(long *)(unaff_x21 + 0x10) == 0) {
        uVar4 = FUN_0513336c(unaff_x20);
        *(undefined8 *)(in_stack_00000018 + 0x58) = uVar4;
        thunk_FUN_02dd37b4();
        plVar6 = *(long **)(in_stack_00000018 + 0x58);
        *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar3 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
                    /* try { // try from 0514ded8 to 0524e2a7 has its CatchHandler @ 0514ded8
                       catch() { ... } // from try @ 0514ded8 with catch @ 0514ded8
                       catch() { ... } // from try @ 0514e360 with catch @ 0514ded8
                       catch() { ... } // from try @ 0514e57c with catch @ 0514ded8
                       catch() { ... } // from try @ 0514e5f8 with catch @ 0514ded8
                       catch() { ... } // from try @ 0514e69c with catch @ 0514ded8
                       catch() { ... } // from try @ 0514e71c with catch @ 0514ded8
                       catch() { ... } // from try @ 0514e76c with catch @ 0514ded8
                       catch() { ... } // from try @ 0514e788 with catch @ 0514ded8
                       catch() { ... } // from try @ 0514e7c8 with catch @ 0514ded8 */
            if (*(long *)(piVar10 + -2) == *unaff_x22) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0514df08;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar2 = (undefined8 *)FUN_02d9a5d4(plVar6,*unaff_x22,0);
LAB_0514df08:
        uVar9 = (*(code *)*puVar2)(plVar6,puVar2[1]);
        if ((uVar9 & 1) != 0) {
          plVar6 = *(long **)(in_stack_00000018 + 0x58);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar3 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar9 == 0) goto LAB_0514dfc0;
          piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          break;
        }
        FUN_0514e20c();
        *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
        thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x58),0);
        unaff_x25 = (long *)PTR_DAT_0676aab8;
        unaff_x26 = (long *)PTR_DAT_06780528;
      }
      else {
        lVar3 = FUN_051339f4(unaff_x20,*(long *)(unaff_x21 + 0x10),0);
        if (lVar3 != 0) {
          *(long *)(in_stack_00000018 + 0x18) = lVar3;
          thunk_FUN_02dd37b4((long *)(in_stack_00000018 + 0x18));
          *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
          return 1;
        }
        lVar3 = *(long *)(in_stack_00000018 + 0x40);
        cVar8 = '\0';
        if (lVar3 != 0) {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          cVar8 = *(char *)(lVar3 + 0x20);
        }
        if (cVar8 != '\0') {
          lVar3 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar4 = FUN_04f8e414(0);
          uVar7 = *(undefined8 *)(unaff_x21 + 0x10);
          uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06781d40);
          uVar4 = FUN_050f0ec0(uVar5,uVar4,uVar7,0);
          thunk_FUN_02dc61f4(PTR_DAT_0677d960);
          uVar5 = thunk_FUN_02d9d534();
          FUN_050931fc(uVar5,uVar4,0);
          uVar4 = thunk_FUN_02dc61f4(PTR_DAT_06781d48);
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar5,uVar4);
        }
      }
      goto LAB_0514dce8;
    }
LAB_0514de2c:
    param_1 = *(long *)(in_stack_00000018 + 0x40);
    if (param_1 != 0) {
      unaff_x23 = param_1;
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06780bf8) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0514dfdc;
    }
  }
LAB_0514dfc0:
  puVar2 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_06780bf8,0);
LAB_0514dfdc:
  (*(code *)*puVar2)(plVar6,puVar2[1]);
  *(undefined8 *)(in_stack_00000018 + 0x18) = extraout_x1;
  thunk_FUN_02dd37b4();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 2;
  return 1;
}


