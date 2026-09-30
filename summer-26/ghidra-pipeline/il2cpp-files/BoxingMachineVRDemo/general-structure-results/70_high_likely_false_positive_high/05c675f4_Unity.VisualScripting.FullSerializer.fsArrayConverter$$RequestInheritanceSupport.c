/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsArrayConverter$$RequestInheritanceSupport
ENTRY_POINT: 05c675f4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05c678ec) */
/* WARNING: Removing unreachable block (ram,0x05c67974) */
/* WARNING: Removing unreachable block (ram,0x05c67968) */

void Unity_VisualScripting_FullSerializer_fsArrayConverter__RequestInheritanceSupport(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  byte unaff_w25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  float fVar12;
  double unaff_d8;
  double unaff_d9;
  long in_stack_00000008;
  
  do {
    FUN_05c6aa14(unaff_d9,&stack0x00000008);
    unaff_d9 = (double)FUN_05c5ad18(in_stack_00000008 + 1);
    do {
      do {
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        unaff_d8 = (double)FUN_0500805c(unaff_d8,unaff_d9,0);
        if ((unaff_w25 & 1) == 0) {
          iVar4 = thunk_FUN_060b0bec(unaff_x22,0);
          unaff_w25 = iVar4 == 1;
        }
        else {
          unaff_w25 = true;
        }
        do {
          if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar9 = *unaff_x21;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x26) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_05c674d0;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_05c674d0:
          uVar10 = (*(code *)*puVar6)();
          puVar2 = PTR_DAT_0675f3d0;
          if ((uVar10 & 1) == 0) {
            if (unaff_x21 == (long *)0x0) goto LAB_05c676c8;
            lVar9 = *unaff_x21;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 == 0) goto LAB_05c676a0;
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_05c67688;
          }
          lVar9 = *unaff_x21;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x29) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_05c6752c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_05c6752c:
          unaff_x22 = (*(code *)*puVar6)();
          if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar7 = FUN_060b0c64(unaff_x22,0);
          if (*(int *)(*unaff_x24 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar10 = FUN_0606a004(uVar7,0,0);
        } while ((uVar10 & 1) == 0);
        plVar8 = (long *)FUN_060b0c64(unaff_x22,0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        unaff_d9 = (double)(**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
        plVar8 = (long *)FUN_060b0c64(unaff_x22,0);
      } while (plVar8 == (long *)0x0);
      bVar1 = *(byte *)(*unaff_x28 + 0x130);
    } while (((*(byte *)(*plVar8 + 0x130) < bVar1) || (unaff_d9 <= 0.0)) ||
            (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x28));
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<CodeTypeReference>_Add__ + 0xe4) ==
        0) {
      thunk_FUN_02dbd7b4();
    }
    in_stack_00000008 = 0;
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_05c67688:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_05c676bc;
    }
  }
LAB_05c676a0:
  puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_05c676bc:
  (*(code *)*puVar6)();
LAB_05c676c8:
  if (unaff_x20 != (long *)0x0) {
    lVar9 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_System_Collections_Generic_List<DebugUIHandlerPanel>__ctor__) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05c67724;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_05c67724:
    plVar8 = (long *)(*(code *)*puVar6)();
    puVar3 = Method_System_Collections_Generic_List<DebugUIHandlerPanel>_ForEach__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    do {
      lVar9 = *plVar8;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_05c6778c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar8,*unaff_x26,0);
LAB_05c6778c:
      uVar10 = (*(code *)*puVar6)(plVar8,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_05c678e0;
        lVar9 = *plVar8;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto LAB_05c678b8;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_05c678a0;
      }
      lVar9 = *plVar8;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_05c677e8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar3,0);
LAB_05c677e8:
      lVar9 = (*(code *)*puVar6)(plVar8,puVar6[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_060e2958(lVar9,0);
      fVar12 = (float)FUN_060e2a48();
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      unaff_d8 = (double)FUN_0500805c(unaff_d8,(double)fVar12,0);
      if ((bool)unaff_w25 == false) {
        FUN_060e2958(lVar9,0);
        uVar5 = FUN_060e2a84();
        uVar5 = uVar5 & 1;
      }
      else {
        uVar5 = 1;
      }
      unaff_w25 = uVar5 != 0;
    } while( true );
  }
  goto LAB_05c67964;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_05c678a0:
    if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_05c678d4;
    }
  }
LAB_05c678b8:
  puVar6 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar2,0);
LAB_05c678d4:
  (*(code *)*puVar6)(plVar8,puVar6[1]);
LAB_05c678e0:
  puVar2 = Method_System_Collections_Generic_List<Button>_IndexOf__;
  if (unaff_d8 == -INFINITY) {
    lVar9 = *(long *)Method_System_Collections_Generic_List<Button>_IndexOf__;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar9 = *(long *)puVar2;
    }
    unaff_d8 = *(double *)(*(long *)(lVar9 + 0xb8) + 8);
  }
  if (unaff_x19 != 0) {
    *(double *)(unaff_x19 + 0x50) = unaff_d8;
    *(byte *)(unaff_x19 + 0x58) = unaff_w25;
    return;
  }
LAB_05c67964:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


