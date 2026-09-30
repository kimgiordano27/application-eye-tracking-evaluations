/*
FUNCTION_NAME: FUN_033d2020
ENTRY_POINT: 033d2020
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_033d2020(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  do {
    iVar1 = (**(code **)(*unaff_x19 + 0x188))();
    if (iVar1 == 3) {
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar4 == (long *)0x0) goto LAB_033d25fc;
      (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      pcVar10 = *(code **)(*unaff_x19 + 0x1d8);
      while ((uVar9 = (*pcVar10)(), (uVar9 & 1) != 0 &&
             (iVar1 = (**(code **)(*unaff_x19 + 0x188))(), iVar1 != 0xf))) {
        FUN_033d26e4();
        pcVar10 = *(code **)(*unaff_x19 + 0x1d8);
      }
    }
    else if (iVar1 == 4) {
      if (unaff_x20 == (long *)0x0) {
LAB_033d25fc:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar8 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_033d218c;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01c72498();
LAB_033d218c:
      iVar1 = (*(code *)*puVar5)();
      if (iVar1 == 9) {
        if (unaff_x22 == (long *)0x0) goto LAB_033d25fc;
        lVar8 = *unaff_x22;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)
                 Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
              goto LAB_033d2284;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01c72498();
LAB_033d2284:
        lVar8 = (*(code *)*puVar5)();
        if (lVar8 != 0) {
          thunk_FUN_01c273e8(Method_System_Collections_Generic_List<List<IntPoint>>_get_Count__);
          goto LAB_033d2618;
        }
      }
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar4 == (long *)0x0) goto LAB_033d25fc;
      uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      FUN_0335cd70();
      iVar1 = (**(code **)(*unaff_x19 + 0x188))();
      if (iVar1 == 2) {
        uVar9 = (**(code **)(*unaff_x19 + 0x1d8))();
        if ((uVar9 & 1) != 0) {
          iVar1 = 0;
          do {
            iVar2 = (**(code **)(*unaff_x19 + 0x188))();
            if (iVar2 == 0xe) break;
            FUN_033d26e4();
            iVar1 = iVar1 + 1;
            uVar9 = (**(code **)(*unaff_x19 + 0x1d8))();
          } while ((uVar9 & 1) != 0);
          if ((iVar1 == 1) && (*(char *)(unaff_x23 + 0x18) != '\0')) {
            OVRPlugin__get_monoscopic(uVar6,&stack0x00000048,&stack0x00000040,0);
            uVar9 = FUN_03374f48(in_stack_00000048,0);
            if ((uVar9 & 1) == 0) {
              if (unaff_x21 == (long *)0x0) goto LAB_033d25fc;
              uVar6 = (**(code **)(*unaff_x21 + 0x238))();
            }
            else {
              if (unaff_x21 == (long *)0x0) goto LAB_033d25fc;
              uVar6 = (**(code **)(*unaff_x21 + 0x1c8))();
            }
            lVar8 = *unaff_x20;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x28) {
                  puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                  goto LAB_033d23fc;
                }
                uVar9 = uVar9 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_01c72498();
LAB_033d23fc:
            lVar8 = (*(code *)*puVar5)();
            if (lVar8 == 0) goto LAB_033d25fc;
            FUN_02d50a3c(&stack0x00000008,lVar8,
                         *(undefined8 *)Method_ListWithEvents<IUpdateReceiver>_Add__);
            in_stack_00000030 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
            in_stack_00000028 = in_stack_00000010;
            in_stack_00000020 = in_stack_00000008;
            do {
              do {
                do {
                  uVar9 = FUN_029fd614(&stack0x00000020,*unaff_x27);
                  if ((uVar9 & 1) == 0) goto LAB_033d2538;
                  plVar4 = (long *)thunk_FUN_01c495e4(in_stack_00000030,*unaff_x29);
                } while (plVar4 == (long *)0x0);
                lVar8 = *plVar4;
                uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar9 != 0) {
                  piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == *unaff_x28) {
                      puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                      goto LAB_033d24a4;
                    }
                    uVar9 = uVar9 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar9 != 0);
                }
                puVar5 = (undefined8 *)FUN_01c72498(plVar4,*unaff_x28,1);
LAB_033d24a4:
                uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                uVar9 = thunk_FUN_03152714(uVar7,in_stack_00000040,0);
              } while ((uVar9 & 1) == 0);
              lVar8 = *plVar4;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x28) {
                    puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 7) * 0x10 + 0x138);
                    goto LAB_033d2510;
                  }
                  uVar9 = uVar9 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_01c72498(plVar4,*unaff_x28,7);
LAB_033d2510:
              uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
              uVar9 = thunk_FUN_03152714(uVar7,uVar6,0);
            } while ((uVar9 & 1) == 0);
            FUN_033d5148(uVar9,plVar4);
LAB_033d2538:
            FUN_029fd610(&stack0x00000020,
                         *(undefined8 *)
                          Method_ListWithEvents<IResourceProvider>_add_OnElementAdded__);
          }
        }
      }
      else {
        FUN_033d26e4();
      }
    }
    else {
      if (iVar1 != 5) {
        if (iVar1 - 0xdU < 2) {
          return;
        }
        FUN_019b2708();
        uVar3 = (**(code **)(*unaff_x19 + 0x188))();
        in_stack_00000008 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
        in_stack_00000010 = 0xffffffffffffffff;
        uStack0000000000000018 = uVar3;
        uVar6 = FUN_03307544(&stack0x00000008,0);
        uVar7 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_List<List<IntPoint>>_set_Capacity__
                                  );
        FUN_03146988(uVar7,uVar6,0);
LAB_033d2618:
        uVar6 = FUN_0335cdc4();
        uVar7 = thunk_FUN_01c273e8(Method_System_Collections_Generic_List<List<IntPoint>>_get_Item__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar6,uVar7);
      }
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (unaff_x22 == (long *)0x0) goto LAB_033d25fc;
      if ((plVar4 != (long *)0x0) && (*plVar4 != *(long *)PTR_DAT_0422fc38)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar4,*(long *)PTR_DAT_0422fc38);
      }
      lVar8 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__)
          {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_033d21f8;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01c72498();
LAB_033d21f8:
      (*(code *)*puVar5)();
      if (unaff_x20 == (long *)0x0) goto LAB_033d25fc;
      lVar8 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x28) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 6) * 0x10 + 0x138);
            goto LAB_033d2260;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01c72498();
LAB_033d2260:
      (*(code *)*puVar5)();
    }
    uVar9 = (**(code **)(*unaff_x19 + 0x1d8))();
    if ((uVar9 & 1) == 0) {
      return;
    }
  } while( true );
}


