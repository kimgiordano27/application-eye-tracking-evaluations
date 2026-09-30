/*
FUNCTION_NAME: System.Collections.Generic.ObjectEqualityComparer<OVRPlugin.SpaceQueryResult>$$Equals
ENTRY_POINT: 05b83f88
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05b842f4) */

long * System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_SpaceQueryResult>__Equals
                 (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar15;
  int iVar16;
  int iStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000048;
  
  FUN_0403162c(*(undefined8 *)(param_1 + 200));
  FUN_0403162c(PTR_DAT_08f8d7d0);
  *(undefined1 *)(unaff_x21 + 0x7b0) = 1;
  in_stack_00000030 = 0;
  iStack000000000000002c = 0;
  if (DAT_0953f624 == '\0') {
    FUN_0403162c(PTR_DAT_08f8c4b0);
    DAT_0953f624 = '\x01';
  }
  cVar4 = FUN_072717f8();
  if (cVar4 == -0x40) {
    FUN_04cfb06c();
    return (long *)0x0;
  }
  if (unaff_x19 != 0) {
    uVar15 = *(undefined8 *)(unaff_x19 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_08f8b188 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    plVar6 = (long *)System_Threading_Tasks_Task__FromCanceled<ValueTuple<object,_int,_int>>
                               (uVar15,*(undefined8 *)PTR_DAT_08f8ecf0);
    iVar5 = FUN_072728ac();
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      uVar15 = FUN_07276eac(*(long *)(unaff_x19 + 0x28),0);
      lVar11 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_0406aaec(lVar11);
      }
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0408f364(lVar11);
      }
      plVar7 = (long *)FUN_06c72558(iVar5,uVar15,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8));
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        FUN_07276f10(*(long *)(unaff_x19 + 0x28));
        puVar3 = PTR_DAT_08f8d7d0;
        puVar2 = PTR_DAT_08f860c8;
        puVar1 = PTR_DAT_08f69e90;
        if (0 < iVar5) {
          iVar16 = 0;
          do {
            in_stack_00000030 = *(undefined8 *)(in_stack_00000048 + 0x80);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0408f364();
            }
            FUN_07547efc(&stack0x00000030,0);
            lVar11 = in_stack_00000048;
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0403188c();
            }
            lVar12 = *plVar6;
            lVar10 = *(long *)puVar3;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar10) {
                  puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_05b84184;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar8 = (undefined8 *)FUN_0406ae20(plVar6,lVar10,1);
LAB_05b84184:
            uVar15 = (*(code *)*puVar8)(plVar6,lVar11);
            lVar11 = in_stack_00000048;
            lVar12 = *plVar6;
            lVar10 = *(long *)puVar3;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar10) {
                  puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_05b841f0;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar8 = (undefined8 *)FUN_0406ae20(plVar6,lVar10,1);
LAB_05b841f0:
            uVar9 = (*(code *)*puVar8)(plVar6,lVar11);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0403188c();
            }
            lVar11 = *plVar7;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                  puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 5) * 0x10 + 0x138);
                  goto LAB_05b8425c;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar8 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)puVar2,5);
LAB_05b8425c:
            (*(code *)*puVar8)(plVar7,uVar15,uVar9,puVar8[1]);
            iVar16 = iVar16 + 1;
          } while (iVar16 != iVar5);
        }
        iStack000000000000002c = *(int *)(in_stack_00000048 + 0x88);
        if (iStack000000000000002c != -0x80000000) {
          *(int *)(in_stack_00000048 + 0x88) = iStack000000000000002c + -1;
          return plVar7;
        }
        uVar15 = FUN_0403189c();
                    /* WARNING: Subroutine does not return */
        FUN_04031750(uVar15,in_stack_00000038);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


