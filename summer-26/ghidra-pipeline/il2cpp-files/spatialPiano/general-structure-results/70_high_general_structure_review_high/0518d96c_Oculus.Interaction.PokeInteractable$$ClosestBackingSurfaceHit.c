/*
FUNCTION_NAME: Oculus.Interaction.PokeInteractable$$ClosestBackingSurfaceHit
ENTRY_POINT: 0518d96c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0518daf4) */
/* WARNING: Removing unreachable block (ram,0x0518dc70) */

void Oculus_Interaction_PokeInteractable__ClosestBackingSurfaceHit(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar7;
  long *unaff_x22;
  undefined8 uVar8;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000018;
  undefined8 *in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  
code_r0x0518d96c:
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = *unaff_x22;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x29) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0518d9bc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_02f421d0(unaff_x22,*unaff_x29,0);
LAB_0518d9bc:
  uVar3 = (*(code *)*puVar2)(unaff_x22,puVar2[1]);
  if (*(long *)(unaff_x20 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x98) + 0x28);
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar5 = FUN_0589a6bc(uVar8,uVar3,0);
  unaff_x22 = in_stack_00000028;
  if ((uVar5 & 1) != 0) {
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0518da54;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0();
LAB_0518da54:
    (*(code *)*puVar2)();
  }
  do {
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar4 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0518d958;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(unaff_x22,*unaff_x26,0);
LAB_0518d958:
    uVar5 = (*(code *)*puVar2)(unaff_x22,puVar2[1]);
    in_stack_00000028 = unaff_x22;
    if ((uVar5 & 1) != 0) goto code_r0x0518d96c;
    if (unaff_x22 != (long *)0x0) {
      lVar4 = *unaff_x22;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067c91b0) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0518dadc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02f421d0(unaff_x22,*(long *)PTR_DAT_067c91b0,0);
LAB_0518dadc:
      (*(code *)*puVar2)(unaff_x22,puVar2[1]);
    }
    do {
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0518db48;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02f421d0();
LAB_0518db48:
      iVar1 = (*(code *)*puVar2)();
      if (((iVar1 == 0) && (*(char *)(unaff_x21 + 0xa1) != '\0')) &&
         (*(long *)(unaff_x21 + 0x90) != 0)) {
        lVar4 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x25) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_0518dbc4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_02f421d0();
LAB_0518dbc4:
        (*(code *)*puVar2)();
      }
      plVar7 = in_stack_00000038;
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar4 = *in_stack_00000038;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0518d72c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02f421d0(in_stack_00000038,*unaff_x26,0);
LAB_0518d72c:
      uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      plVar7 = in_stack_00000038;
      if ((uVar5 & 1) == 0) {
        plVar7 = (long *)*in_stack_00000020;
        if (plVar7 == (long *)0x0) goto LAB_0518dec8;
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 == 0) goto LAB_0518dea0;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_0518de88;
      }
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar4 = *in_stack_00000038;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x27) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0518d790;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02f421d0(in_stack_00000038,*unaff_x27,0);
LAB_0518d790:
      unaff_x21 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      plVar7 = *(long **)(unaff_x21 + 0x80);
      if (plVar7 != (long *)0x0) {
        if (*(long *)(unaff_x20 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar4 = *plVar7;
        uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x98) + 0x28);
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_TypeInfo) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138);
              goto LAB_0518d810;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)
                 FUN_02f421d0(plVar7,*(long *)
                                      System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_TypeInfo
                              ,7);
LAB_0518d810:
        uVar5 = (*(code *)*puVar2)(plVar7,uVar3,&stack0x00000030,puVar2[1]);
        if ((uVar5 & 1) != 0) {
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar4 = *unaff_x19;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x25) {
                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                goto LAB_0518d880;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined8 *)FUN_02f421d0();
LAB_0518d880:
          (*(code *)*puVar2)();
        }
      }
      plVar7 = *(long **)(unaff_x21 + 0x88);
    } while (plVar7 == (long *)0x0);
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<ulong,_Request>_TypeInfo) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0518d8ec;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_02f421d0(plVar7,*(long *)
                                  System_Collections_Generic_Dictionary<ulong,_Request>_TypeInfo,0);
LAB_0518d8ec:
    unaff_x22 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_0518de88:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0518debc;
    }
  }
LAB_0518dea0:
  puVar2 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)PTR_DAT_067c91b0,0);
LAB_0518debc:
  (*(code *)*puVar2)(plVar7,puVar2[1]);
LAB_0518dec8:
  if (in_stack_00000018 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c0();
}


