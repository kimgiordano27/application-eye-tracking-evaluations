/*
FUNCTION_NAME: OVRPlugin$$RequestSceneCapture
ENTRY_POINT: 0514bb54
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin__RequestSceneCapture(void)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long in_stack_00000018;
  
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar9 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06780ac0) {
        puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0514bc4c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_0514bc4c:
  uVar4 = (*(code *)*puVar3)();
  *(undefined8 *)(in_stack_00000018 + 0x50) = uVar4;
  thunk_FUN_02dd37b4();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
  plVar5 = (long *)PTR_DAT_067810c0;
  plVar2 = (long *)PTR_DAT_06780ff8;
LAB_0514bc88:
  do {
    plVar12 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0514bce0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(plVar12,*unaff_x23,0);
LAB_0514bce0:
    uVar10 = (*(code *)*puVar3)(plVar12,puVar3[1]);
    if ((uVar10 & 1) == 0) {
      FUN_0514c410();
      *(undefined8 *)(in_stack_00000018 + 0x50) = 0;
      thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x50),0);
      return 0;
    }
    plVar12 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x21) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0514bd4c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(plVar12,*unaff_x21,0);
LAB_0514bd4c:
    plVar12 = (long *)(*(code *)*puVar3)(plVar12,puVar3[1]);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if ((*(ulong *)(unaff_x22 + 0x10) & 0xff) == 0) {
      if (plVar12 == (long *)0x0) {
LAB_0514bde0:
        lVar9 = *(long *)(in_stack_00000018 + 0x40);
        cVar8 = '\0';
        if (lVar9 != 0) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          cVar8 = *(char *)(lVar9 + 0x20);
        }
        if (cVar8 != '\0') {
          lVar9 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar4 = FUN_04f8e414(0);
          if (plVar12 != (long *)0x0) {
            plVar5 = (long *)thunk_FUN_02d709fc(plVar12,0);
            if (plVar5 != (long *)0x0) {
              uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
              uVar7 = thunk_FUN_02dc61f4(PTR_DAT_06781cc0);
              uVar4 = FUN_050f0ec0(uVar7,uVar4,uVar6,0);
              thunk_FUN_02dc61f4(PTR_DAT_0677d960);
              uVar6 = thunk_FUN_02d9d534();
              FUN_050931fc(uVar6,uVar4,0);
              uVar4 = thunk_FUN_02dc61f4(PTR_DAT_06781cc8);
                    /* WARNING: Subroutine does not return */
              FUN_02d609b4(uVar6,uVar4);
            }
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
      }
      else {
        lVar9 = *plVar12;
        bVar1 = *(byte *)(*plVar2 + 0x130);
        if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *plVar2)) {
          bVar1 = *(byte *)(*plVar5 + 0x130);
          if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *plVar5))
          goto LAB_0514bde0;
        }
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06780ac0) {
              puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0514bbb4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar3 = (undefined8 *)FUN_02d9a5d4(plVar12,*(long *)PTR_DAT_06780ac0,0);
LAB_0514bbb4:
        uVar4 = (*(code *)*puVar3)(plVar12,puVar3[1]);
        *(undefined8 *)(in_stack_00000018 + 0x58) = uVar4;
        thunk_FUN_02dd37b4();
        plVar5 = *(long **)(in_stack_00000018 + 0x58);
        *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x23) {
              puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0514bc10;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar3 = (undefined8 *)FUN_02d9a5d4(plVar5,*unaff_x23,0);
LAB_0514bc10:
        uVar10 = (*(code *)*puVar3)(plVar5,puVar3[1]);
        if ((uVar10 & 1) != 0) {
          plVar5 = *(long **)(in_stack_00000018 + 0x58);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar9 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_0514beac;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          break;
        }
        FUN_0514c360();
        *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
        thunk_FUN_02dd37b4((undefined8 *)(in_stack_00000018 + 0x58),0);
        plVar5 = (long *)PTR_DAT_067810c0;
        plVar2 = (long *)PTR_DAT_06780ff8;
      }
      goto LAB_0514bc88;
    }
    lVar9 = FUN_0514c0a8(plVar12,*(undefined8 *)(in_stack_00000018 + 0x40),
                         *(ulong *)(unaff_x22 + 0x10) >> 0x20);
    if (lVar9 != 0) {
      *(long *)(in_stack_00000018 + 0x18) = lVar9;
      thunk_FUN_02dd37b4();
      *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
      return 1;
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *unaff_x21) {
      puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0514bec8;
    }
  }
LAB_0514beac:
  puVar3 = (undefined8 *)FUN_02d9a5d4(plVar5,*unaff_x21,0);
LAB_0514bec8:
  uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
  *(undefined8 *)(in_stack_00000018 + 0x18) = uVar4;
  thunk_FUN_02dd37b4();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 2;
  return 1;
}


