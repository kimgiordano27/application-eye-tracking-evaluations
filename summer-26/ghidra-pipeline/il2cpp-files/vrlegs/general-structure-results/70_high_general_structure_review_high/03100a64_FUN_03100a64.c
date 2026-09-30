/*
FUNCTION_NAME: FUN_03100a64
ENTRY_POINT: 03100a64
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03100dc8) */
/* WARNING: Removing unreachable block (ram,0x03101148) */
/* WARNING: Removing unreachable block (ram,0x0310116c) */

undefined4 FUN_03100a64(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  int iVar15;
  long *local_58;
  
  if ((DAT_0412ba40 & 1) == 0) {
    FUN_01ab69ac(UnityEngine_UIElements_EventCallback<FocusOutEvent>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cd73c8);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cd7410);
    FUN_01ab69ac(PTR_DAT_03cd7418);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03ccf9c8);
    FUN_01ab69ac(
                System_Collections_Generic_Dictionary<string,_List<SVGDocument_PostponedClip>>_TypeInfo
                );
    FUN_01ab69ac(
                System_Collections_Generic_Dictionary<string,_List<SVGDocument_PostponedStopData>>_TypeInfo
                );
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    DAT_0412ba40 = 1;
  }
  local_58 = (long *)0x0;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar7 = FUN_0219f8b8(*(long *)(param_1 + 0x18),param_2,&local_58,
                         *(undefined8 *)UnityEngine_UIElements_EventCallback<FocusOutEvent>_TypeInfo
                        );
    if ((uVar7 & 1) == 0)
    goto UnityEngine_InputSystem_InputControlExtensions_ControlBuilder__DontReset;
    if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = FUN_02786d28(param_3,0,0);
    plVar9 = local_58;
    puVar2 = PTR_DAT_03cd7410;
    if ((uVar7 & 1) != 0) {
      *param_4 = local_58;
      goto UnityEngine_InputSystem_InputControlExtensions_ControlBuilder__WithParent;
    }
    if (local_58 != (long *)0x0) {
      lVar12 = *local_58;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03cd7410) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03100be0;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(local_58,*(long *)PTR_DAT_03cd7410,0);
LAB_03100be0:
      plVar9 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
      puVar4 = PTR_DAT_03cd7418;
      puVar3 = PTR_DAT_03ccf9c8;
      puVar1 = PTR_DAT_03cbed20;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      iVar15 = 0;
      do {
        lVar12 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03100c5c;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar1,0);
LAB_03100c5c:
        uVar7 = (*(code *)*puVar8)(plVar9,puVar8[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar9 == (long *)0x0)
          goto UnityEngine_InputSystem_InputControlExtensions_ControlBuilder__WithMinAndMax;
          lVar12 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar7 == 0) goto LAB_03100d94;
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_03100d7c;
        }
        lVar12 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03100cb8;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar4,0);
LAB_03100cb8:
        plVar10 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar12 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar13 + 8) * 0x10 + 0x138);
              goto LAB_03100d1c;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)puVar3,8);
LAB_03100d1c:
        uVar11 = (*(code *)*puVar8)(plVar10,puVar8[1]);
        if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c(uVar11,uVar11);
        }
        uVar5 = (**(code **)(*param_3 + 0x388))(param_3,uVar11,*(undefined8 *)(*param_3 + 0x390));
        iVar15 = iVar15 + (uVar5 & 1);
      } while( true );
    }
  }
  goto LAB_03101160;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar13 = piVar13 + 4;
    if (uVar7 == 0) break;
LAB_03101104:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03101138;
    }
  }
LAB_0310111c:
  puVar8 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)PTR_DAT_03cbed08,0);
LAB_03101138:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
  return 1;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar13 = piVar13 + 4;
    if (uVar7 == 0) break;
LAB_03100d7c:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03100db0;
    }
  }
LAB_03100d94:
  puVar8 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)PTR_DAT_03cbed08,0);
LAB_03100db0:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
UnityEngine_InputSystem_InputControlExtensions_ControlBuilder__WithMinAndMax:
  plVar9 = local_58;
  puVar1 = PTR_DAT_03cd73c8;
  if (iVar15 == 0) {
UnityEngine_InputSystem_InputControlExtensions_ControlBuilder__DontReset:
    *param_4 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_4,0);
    return 0;
  }
  if (local_58 != (long *)0x0) {
    lVar12 = *local_58;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03cd73c8) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03100e60;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_01a472ec(local_58,*(long *)PTR_DAT_03cd73c8,0);
LAB_03100e60:
    iVar6 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if (iVar15 == iVar6) {
      *param_4 = local_58;
UnityEngine_InputSystem_InputControlExtensions_ControlBuilder__WithParent:
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_4,local_58);
      return 1;
    }
    uVar11 = thunk_FUN_01a89e68(*(undefined8 *)
                                 System_Collections_Generic_Dictionary<string,_List<SVGDocument_PostponedStopData>>_TypeInfo
                               );
    Animancer_AnimancerState__OnSetIsPlaying
              (uVar11,*(undefined8 *)
                       System_Collections_Generic_Dictionary<string,_List<SVGDocument_PostponedClip>>_TypeInfo
              );
    *param_4 = uVar11;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_4,uVar11);
    plVar9 = local_58;
    if (local_58 != (long *)0x0) {
      lVar12 = *local_58;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto FUN_03100f0c;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(local_58,*(long *)puVar2,0);
FUN_03100f0c:
      plVar9 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
      puVar4 = PTR_DAT_03cd7418;
      puVar3 = PTR_DAT_03ccf9c8;
      puVar2 = PTR_DAT_03cbed20;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      do {
        lVar12 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03100f84;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar2,0);
LAB_03100f84:
        uVar7 = (*(code *)*puVar8)(plVar9,puVar8[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar9 == (long *)0x0) {
            return 1;
          }
          lVar12 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar7 == 0) goto LAB_0310111c;
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_03101104;
        }
        lVar12 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03100fe0;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar4,0);
LAB_03100fe0:
        plVar10 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar12 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar13 + 8) * 0x10 + 0x138);
              goto LAB_03101044;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)puVar3,8);
LAB_03101044:
        uVar11 = (*(code *)*puVar8)(plVar10,puVar8[1]);
        if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c(uVar11,uVar11);
        }
        uVar7 = (**(code **)(*param_3 + 0x388))(param_3,uVar11,*(undefined8 *)(*param_3 + 0x390));
        if ((uVar7 & 1) != 0) {
          plVar14 = (long *)*param_4;
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          lVar12 = *plVar14;
          uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar7 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar8 = (undefined8 *)(lVar12 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                goto LAB_031010c8;
              }
              uVar7 = uVar7 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar7 != 0);
          }
          puVar8 = (undefined8 *)FUN_01a472ec(plVar14,*(long *)puVar1,2);
LAB_031010c8:
          (*(code *)*puVar8)(plVar14,plVar10,puVar8[1]);
        }
      } while( true );
    }
  }
LAB_03101160:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


