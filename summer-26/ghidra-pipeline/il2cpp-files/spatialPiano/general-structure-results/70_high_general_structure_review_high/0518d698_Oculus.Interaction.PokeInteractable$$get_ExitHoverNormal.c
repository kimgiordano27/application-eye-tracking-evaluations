/*
FUNCTION_NAME: Oculus.Interaction.PokeInteractable$$get_ExitHoverNormal
ENTRY_POINT: 0518d698
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0518daf4) */
/* WARNING: Removing unreachable block (ram,0x0518dc70) */
/* WARNING: Removing unreachable block (ram,0x0518ded0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Oculus_Interaction_PokeInteractable__get_ExitHoverNormal(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  long *unaff_x25;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  
  plVar6 = (long *)(**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  puVar4 = 
  System_Collections_Generic_Dictionary<ulong,_OVRVirtualKeyboard_VirtualKeyboardTextureInfo>_TypeInfo
  ;
  puVar3 = 
  System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor_MultiAnchorDelegatePair>_TypeInfo;
  puVar2 = PTR_DAT_067ce3a0;
  puVar1 = PTR_DAT_067c91b8;
  do {
    in_stack_00000038 = plVar6;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar9 = *plVar6;
    lVar8 = *(long *)puVar1;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0518d72c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(plVar6,lVar8,0);
LAB_0518d72c:
    uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    plVar6 = in_stack_00000038;
    if ((uVar11 & 1) == 0) {
      if (in_stack_00000038 == (long *)0x0) {
        return;
      }
      lVar8 = *in_stack_00000038;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 == 0) goto LAB_0518dea0;
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar8 = *in_stack_00000038;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0518d790;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(in_stack_00000038,*(long *)puVar4,0);
LAB_0518d790:
    lVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar6 = *(long **)(lVar8 + 0x80);
    if (plVar6 != (long *)0x0) {
      if (*(long *)(unaff_x20 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar9 = *plVar6;
      uVar13 = *(undefined8 *)(*(long *)(unaff_x20 + 0x98) + 0x28);
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 7) * 0x10 + 0x138);
            goto LAB_0518d810;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02f421d0(plVar6,*(long *)
                                    System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor>_TypeInfo
                            ,7);
LAB_0518d810:
      uVar11 = (*(code *)*puVar7)(plVar6,uVar13,&stack0x00000030,puVar7[1]);
      if ((uVar11 & 1) != 0) {
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar9 = *unaff_x19;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *unaff_x25) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_0518d880;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_02f421d0();
LAB_0518d880:
        (*(code *)*puVar7)();
      }
    }
    plVar6 = *(long **)(lVar8 + 0x88);
    if (plVar6 != (long *)0x0) {
      lVar9 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)System_Collections_Generic_Dictionary<ulong,_Request>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0518d8ec;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02f421d0(plVar6,*(long *)
                                    System_Collections_Generic_Dictionary<ulong,_Request>_TypeInfo,0
                           );
LAB_0518d8ec:
      plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
joined_r0x0518d908:
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar10 = *plVar6;
      lVar9 = *(long *)puVar1;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0518d958;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(plVar6,lVar9,0);
LAB_0518d958:
      uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar11 & 1) != 0) {
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar9 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0518d9bc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_02f421d0(plVar6,*(long *)puVar3,0);
LAB_0518d9bc:
        uVar13 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if (*(long *)(unaff_x20 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar14 = *(undefined8 *)(*(long *)(unaff_x20 + 0x98) + 0x28);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar11 = FUN_0589a6bc(uVar14,uVar13,0);
        if ((uVar11 & 1) != 0) {
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar9 = *unaff_x19;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *unaff_x25) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                goto LAB_0518da54;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_02f421d0();
LAB_0518da54:
          (*(code *)*puVar7)();
        }
        goto joined_r0x0518d908;
      }
      if (plVar6 != (long *)0x0) {
        lVar9 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_067c91b0) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0518dadc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_02f421d0(plVar6,*(long *)PTR_DAT_067c91b0,0);
LAB_0518dadc:
        (*(code *)*puVar7)(plVar6,puVar7[1]);
      }
    }
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar9 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x25) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0518db48;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0();
LAB_0518db48:
    iVar5 = (*(code *)*puVar7)();
    plVar6 = in_stack_00000038;
    if (((iVar5 == 0) && (*(char *)(lVar8 + 0xa1) != '\0')) && (*(long *)(lVar8 + 0x90) != 0)) {
      lVar8 = *unaff_x19;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x25) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_0518dbc4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0();
LAB_0518dbc4:
      (*(code *)*puVar7)();
      plVar6 = in_stack_00000038;
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar7 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0518debc;
    }
  }
LAB_0518dea0:
  puVar7 = (undefined8 *)FUN_02f421d0(in_stack_00000038,*(long *)PTR_DAT_067c91b0,0);
LAB_0518debc:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


