/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_GetNodePose
ENTRY_POINT: 05164798
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong unaff_x23;
  long lVar10;
  long *unaff_x26;
  
  plVar5 = (long *)__cxa_begin_catch();
  lVar10 = *plVar5;
  __cxa_end_catch();
  FUN_04a7a49c(&stack0x00000020,*(undefined8 *)PTR_DAT_06782508);
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae0(lVar10);
  }
  if ((unaff_x23 & 1) != 0) {
    FUN_05164b1c();
    if (unaff_x19 == (long *)0x0) goto LAB_05164658;
    (**(code **)(*unaff_x19 + 0x5d8))();
  }
  lVar10 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x26) {
        puVar3 = (undefined8 *)(lVar10 + (long)(*piVar9 + 3) * 0x10 + 0x138);
        goto LAB_051640e8;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_051640e8:
  uVar4 = (*(code *)*puVar3)();
  uVar7 = FUN_0516619c(uVar4,uVar4);
  if ((uVar7 & 1) == 0) {
    lVar10 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar10 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_05164150;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05164150:
    lVar10 = (*(code *)*puVar3)();
    if (lVar10 == 0) goto LAB_05164658;
    if (*(int *)(lVar10 + 0x18) == 1) {
      lVar10 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar10 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_051641bc;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_051641bc:
      lVar10 = (*(code *)*puVar3)();
      puVar1 = PTR_DAT_06782408;
      if (lVar10 == 0) goto LAB_05164658;
      plVar5 = (long *)FUN_03aac1c4(lVar10,0,*(undefined8 *)PTR_DAT_06782408);
      if (plVar5 == (long *)0x0) goto LAB_05164658;
      lVar10 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05164234;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4(plVar5,*unaff_x26,0);
LAB_05164234:
      iVar2 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      if (iVar2 == 3) {
        lVar10 = *unaff_x21;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x26) {
              puVar3 = (undefined8 *)(lVar10 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_05164554;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05164554:
        lVar10 = (*(code *)*puVar3)();
        if ((lVar10 == 0) ||
           (plVar5 = (long *)FUN_03aac1c4(lVar10,0,*(undefined8 *)puVar1), plVar5 == (long *)0x0))
        goto LAB_05164658;
        lVar10 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x26) {
              puVar3 = (undefined8 *)(lVar10 + (long)(*piVar9 + 5) * 0x10 + 0x138);
              goto LAB_051645c8;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_02d9a5d4(plVar5,*unaff_x26,5);
LAB_051645c8:
        (*(code *)*puVar3)(plVar5,puVar3[1]);
        if (unaff_x19 == (long *)0x0) goto LAB_05164658;
        (**(code **)(*unaff_x19 + 0x698))();
        goto LAB_051644a0;
      }
    }
  }
  lVar10 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x26) {
        puVar3 = (undefined8 *)(lVar10 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_051642d8;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_051642d8:
  lVar10 = (*(code *)*puVar3)();
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0x18) == 0) {
      lVar10 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar10 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_05164340;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05164340:
      lVar10 = (*(code *)*puVar3)();
      puVar1 = PTR_DAT_06782540;
      if (lVar10 == 0) goto LAB_05164658;
      if (*(int *)(lVar10 + 0x18) == 0) {
        lVar10 = thunk_FUN_02d9d438();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88();
        }
        lVar10 = *(long *)puVar1;
        plVar5 = (long *)thunk_FUN_02d9d438();
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88();
        }
        lVar6 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar10) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_05164604;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_02d9a5d4(plVar5,lVar10,2);
LAB_05164604:
        uVar7 = (*(code *)*puVar3)(plVar5,puVar3[1]);
        if ((uVar7 & 1) == 0) {
          if (unaff_x19 == (long *)0x0) goto LAB_05164658;
          (**(code **)(*unaff_x19 + 0x698))();
        }
        else {
          if (unaff_x19 == (long *)0x0) goto LAB_05164658;
          pcVar8 = *(code **)(*unaff_x19 + 0x658);
LAB_05164498:
          (*pcVar8)();
        }
LAB_051644a0:
        (**(code **)(*unaff_x20 + 0x1e8))();
        return;
      }
    }
    if (unaff_x19 != (long *)0x0) {
      (**(code **)(*unaff_x19 + 0x578))();
      puVar1 = PTR_DAT_06782408;
      iVar2 = 0;
      do {
        lVar10 = *unaff_x21;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x26) {
              puVar3 = (undefined8 *)(lVar10 + (long)(*piVar9 + 3) * 0x10 + 0x138);
              goto LAB_051643cc;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_051643cc:
        lVar10 = (*(code *)*puVar3)();
        if (lVar10 == 0) break;
        if (*(int *)(lVar10 + 0x18) <= iVar2) {
          FUN_051652f4();
          pcVar8 = *(code **)(*unaff_x19 + 0x588);
          goto LAB_05164498;
        }
        lVar10 = *unaff_x21;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x26) {
              puVar3 = (undefined8 *)(lVar10 + (long)(*piVar9 + 3) * 0x10 + 0x138);
              goto LAB_05164438;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05164438:
        lVar10 = (*(code *)*puVar3)();
        if (lVar10 == 0) break;
        FUN_03aac1c4(lVar10,iVar2,*(undefined8 *)puVar1);
        FUN_05163090();
        iVar2 = iVar2 + 1;
      } while( true );
    }
  }
LAB_05164658:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


