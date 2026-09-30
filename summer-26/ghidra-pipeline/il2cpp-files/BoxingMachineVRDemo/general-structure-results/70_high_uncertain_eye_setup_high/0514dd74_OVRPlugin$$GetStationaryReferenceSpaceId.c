/*
FUNCTION_NAME: OVRPlugin$$GetStationaryReferenceSpaceId
ENTRY_POINT: 0514dd74
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetStationaryReferenceSpaceId(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  char cVar7;
  ulong uVar8;
  ulong in_x9;
  int *in_x10;
  int *piVar9;
  long *unaff_x19;
  undefined8 uVar10;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x25;
  long *unaff_x26;
  long in_stack_00000018;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_0514dda8;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_02d9a5d4(unaff_x19,param_3,0);
LAB_0514dda8:
      plVar3 = (long *)(*(code *)*puVar2)(unaff_x19,puVar2[1]);
      if (plVar3 == (long *)0x0) {
LAB_0514de2c:
        lVar4 = *(long *)(in_stack_00000018 + 0x40);
        cVar7 = '\0';
        if (lVar4 != 0) {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          cVar7 = *(char *)(lVar4 + 0x20);
        }
        if (cVar7 != '\0') {
          lVar4 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar5 = FUN_04f8e414(0);
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar4 = *(long *)(unaff_x21 + 0x10);
          if (lVar4 == 0) {
            uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06781d50);
            lVar4 = thunk_FUN_02dc61f4(PTR_DAT_06775140);
          }
          else {
            uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06781d50);
          }
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          plVar3 = (long *)thunk_FUN_02d709fc(plVar3,0);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar10 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
          uVar5 = FUN_050f0fe0(uVar6,uVar5,lVar4,uVar10,0);
          thunk_FUN_02dc61f4(PTR_DAT_0677d960);
          uVar6 = thunk_FUN_02d9d534();
          FUN_050931fc(uVar6,uVar5,0);
          uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06781d48);
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar6,uVar5);
        }
      }
      else {
        bVar1 = *(byte *)(*unaff_x26 + 0x130);
        if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x26))
        goto LAB_0514de2c;
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(long *)(unaff_x21 + 0x10) == 0) {
          uVar5 = FUN_0513336c(plVar3);
          *(undefined8 *)(in_stack_00000018 + 0x58) = uVar5;
          thunk_FUN_02dd37b4();
          plVar3 = *(long **)(in_stack_00000018 + 0x58);
          *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar4 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x22) {
                puVar2 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0514df08;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar2 = (undefined8 *)FUN_02d9a5d4(plVar3,*unaff_x22,0);
LAB_0514df08:
          uVar8 = (*(code *)*puVar2)(plVar3,puVar2[1]);
          if ((uVar8 & 1) != 0) {
            plVar3 = *(long **)(in_stack_00000018 + 0x58);
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            lVar4 = *plVar3;
            uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar8 == 0) goto LAB_0514dfc0;
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            goto LAB_0514dfa8;
          }
          FUN_0514e20c();
          *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
          thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x58),0);
          unaff_x25 = (long *)PTR_DAT_0676aab8;
          unaff_x26 = (long *)PTR_DAT_06780528;
        }
        else {
          lVar4 = FUN_051339f4(plVar3,*(long *)(unaff_x21 + 0x10),0);
          if (lVar4 != 0) {
            *(long *)(in_stack_00000018 + 0x18) = lVar4;
            thunk_FUN_02dd37b4((long *)(in_stack_00000018 + 0x18));
            *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
            return 1;
          }
          lVar4 = *(long *)(in_stack_00000018 + 0x40);
          cVar7 = '\0';
          if (lVar4 != 0) {
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            cVar7 = *(char *)(lVar4 + 0x20);
          }
          if (cVar7 != '\0') {
            lVar4 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar5 = FUN_04f8e414(0);
            uVar10 = *(undefined8 *)(unaff_x21 + 0x10);
            uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06781d40);
            uVar5 = FUN_050f0ec0(uVar6,uVar5,uVar10,0);
            thunk_FUN_02dc61f4(PTR_DAT_0677d960);
            uVar6 = thunk_FUN_02d9d534();
            FUN_050931fc(uVar6,uVar5,0);
            uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06781d48);
                    /* WARNING: Subroutine does not return */
            FUN_02d609b4(uVar6,uVar5);
          }
        }
      }
      plVar3 = *(long **)(in_stack_00000018 + 0x50);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar4 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x22) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0514dd3c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_02d9a5d4(plVar3,*unaff_x22,0);
LAB_0514dd3c:
      uVar8 = (*(code *)*puVar2)(plVar3,puVar2[1]);
      if ((uVar8 & 1) == 0) {
        FUN_0514e2bc();
        *(undefined8 *)(in_stack_00000018 + 0x50) = 0;
        thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x50),0);
        return 0;
      }
      unaff_x19 = *(long **)(in_stack_00000018 + 0x50);
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      param_1 = *unaff_x19;
      param_3 = *unaff_x25;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0514dfa8:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06780bf8) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0514dfdc;
    }
  }
LAB_0514dfc0:
  puVar2 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_06780bf8,0);
LAB_0514dfdc:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  *(undefined8 *)(in_stack_00000018 + 0x18) = extraout_x1;
  thunk_FUN_02dd37b4();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 2;
  return 1;
}


