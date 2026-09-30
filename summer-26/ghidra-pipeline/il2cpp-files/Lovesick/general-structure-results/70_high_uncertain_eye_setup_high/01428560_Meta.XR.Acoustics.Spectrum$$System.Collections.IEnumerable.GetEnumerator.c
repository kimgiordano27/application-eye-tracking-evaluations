/*
FUNCTION_NAME: Meta.XR.Acoustics.Spectrum$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 01428560
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Acoustics_Spectrum__System_Collections_IEnumerable_GetEnumerator(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined4 *puVar12;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  uint uVar13;
  ulong in_stack_000000a0;
  long in_stack_00000110;
  
  if (unaff_x22 != (long *)0x0) {
    lVar5 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
           ) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xf) * 0x10 + 0x138);
          goto LAB_014285bc;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724();
LAB_014285bc:
    (*(code *)*puVar4)();
    if ((in_stack_000000a0 & 0x100000000) == 0) {
      return;
    }
    if (in_stack_00000110 != 0) {
      uVar13 = *(uint *)(in_stack_00000110 + 0x18);
      uVar6 = (ulong)uVar13;
      if (0 < (long)(uVar6 << 0x20)) {
        uVar7 = 0;
        do {
          if (unaff_x20 == 0) goto LAB_014287b8;
          if (uVar6 == uVar7) goto LAB_014287dc;
          lVar5 = *(long *)(unaff_x20 + 0x70);
          if (lVar5 == 0) goto LAB_014287b8;
          if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_014287dc;
          lVar11 = uVar7 * 4;
          lVar9 = uVar7 * 4;
          uVar7 = uVar7 + 1;
          *(undefined4 *)(lVar5 + lVar9 + 0x20) = *(undefined4 *)(in_stack_00000110 + 0x20 + lVar11)
          ;
        } while ((long)uVar7 < (long)(int)uVar13);
      }
      if ((unaff_x20 != 0) && (lVar5 = *(long *)(unaff_x20 + 0xd0), lVar5 != 0)) {
        uVar13 = 0;
        do {
          if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar13) {
            return;
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar13) {
LAB_014287dc:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar5 = *(long *)(lVar5 + (long)(int)uVar13 * 8 + 0x20);
          if (lVar5 == 0) break;
          lVar5 = *(long *)(lVar5 + 0x10);
          if (unaff_w19 != 0) {
            if (lVar5 == 0) break;
            uVar2 = *(uint *)(lVar5 + 0x18);
            if (0 < (long)((ulong)uVar2 << 0x20)) {
              uVar7 = 0;
              do {
                if (uVar2 == uVar7) goto LAB_014287dc;
                *(int *)(lVar5 + 0x20 + uVar7 * 4) = *(int *)(lVar5 + 0x20 + uVar7 * 4) + unaff_w19;
                uVar7 = uVar7 + 1;
              } while ((long)uVar7 < (long)(int)uVar2);
            }
          }
          if (*(char *)(unaff_x20 + 0x69) != '\0') {
            if (lVar5 == 0) break;
            uVar2 = *(uint *)(lVar5 + 0x18);
            if (0 < (int)uVar2) {
              uVar10 = 1;
              do {
                if ((uVar2 <= uVar10 - 1) || (uVar2 <= uVar10)) goto LAB_014287dc;
                lVar9 = lVar5 + (long)(int)uVar10 * 4;
                puVar12 = (undefined4 *)(lVar5 + (long)(int)(uVar10 - 1) * 4 + 0x20);
                uVar3 = *puVar12;
                iVar1 = uVar10 + 2;
                uVar10 = uVar10 + 3;
                *puVar12 = *(undefined4 *)(lVar9 + 0x20);
                *(undefined4 *)(lVar9 + 0x20) = uVar3;
              } while (iVar1 < (int)uVar2);
            }
          }
          lVar9 = *(long *)(unaff_x20 + 0x80);
          if (lVar9 == 0) break;
          if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_014287dc;
          lVar11 = *(long *)(unaff_x21 + 0x130);
          if (lVar11 == 0) break;
          uVar2 = *(uint *)(lVar9 + (long)(int)uVar13 * 4 + 0x20);
          lVar9 = (long)(int)uVar2;
          if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_014287dc;
          lVar11 = *(long *)(lVar11 + lVar9 * 8 + 0x20);
          if (lVar11 == 0) break;
          if ((uint)uVar6 <= uVar2) goto LAB_014287dc;
          if (lVar5 == 0) break;
          piVar8 = (int *)(in_stack_00000110 + lVar9 * 4 + 0x20);
          FUN_017953b8(lVar5,*(undefined8 *)(lVar11 + 0x10),*piVar8,0);
          lVar11 = *(long *)(unaff_x20 + 0x78);
          if (lVar11 == 0) break;
          if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_014287dc;
          lVar11 = lVar11 + lVar9 * 4;
          iVar1 = *(int *)(lVar5 + 0x18);
          *(int *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + iVar1;
          uVar6 = *(ulong *)(in_stack_00000110 + 0x18);
          if ((uint)uVar6 <= uVar2) goto LAB_014287dc;
          uVar13 = uVar13 + 1;
          *piVar8 = *piVar8 + iVar1;
          lVar5 = *(long *)(unaff_x20 + 0xd0);
        } while (lVar5 != 0);
      }
    }
  }
LAB_014287b8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


