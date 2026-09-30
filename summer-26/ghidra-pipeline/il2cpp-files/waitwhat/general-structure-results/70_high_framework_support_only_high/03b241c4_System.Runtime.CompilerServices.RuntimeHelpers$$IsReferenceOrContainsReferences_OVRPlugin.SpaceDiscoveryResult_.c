/*
FUNCTION_NAME: System.Runtime.CompilerServices.RuntimeHelpers$$IsReferenceOrContainsReferences<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03b241c4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03b244dc) */
/* WARNING: Removing unreachable block (ram,0x03b244ec) */

int System_Runtime_CompilerServices_RuntimeHelpers__IsReferenceOrContainsReferences<OVRPlugin_SpaceDiscoveryResult>
              (void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  ulong __n;
  undefined1 *__src;
  int iVar11;
  long *unaff_x23;
  undefined8 *puVar12;
  long unaff_x26;
  long unaff_x29;
  
  FUN_031c0a30();
  plVar6 = *(long **)(unaff_x19 + 0x38);
  __n = (ulong)*(uint *)(plVar6[4] + 0xfc);
  uVar9 = __n + 0xf & 0x1fffffff0;
  __src = &stack0x00000000 + -uVar9;
  puVar12 = (undefined8 *)(__src + -uVar9);
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  if (unaff_x23 == (long *)0x0) {
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
  else {
    lVar4 = *plVar6;
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_031c09d4(lVar4);
    }
    lVar7 = *unaff_x23;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03b24264;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08();
LAB_03b24264:
    plVar6 = (long *)(*(code *)*puVar2)();
    *(long **)(unaff_x29 + -0x20) = plVar6;
    *(undefined8 *)(unaff_x29 + -0x30) = 0;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x20;
    puVar1 = PTR_DAT_070c7c80;
    if (plVar6 != (long *)0x0) {
      iVar11 = 0;
      do {
        lVar4 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03b242dc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar2 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)puVar1,0);
LAB_03b242dc:
        uVar9 = (*(code *)*puVar2)(plVar6,puVar2[1]);
        if ((uVar9 & 1) == 0) {
          iVar11 = -1;
LAB_03b243fc:
          plVar6 = *(long **)(unaff_x29 + -0x20);
          if (plVar6 == (long *)0x0) goto LAB_03b24468;
          lVar4 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar9 == 0) goto LAB_03b24440;
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_03b24428;
        }
        plVar6 = *(long **)(unaff_x29 + -0x20);
        if (plVar6 == (long *)0x0) {
          if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_03b24558;
        }
        lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_031c09d4(lVar4);
        }
        lVar7 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar4) {
              lVar4 = lVar7 + (long)*piVar10 * 0x10 + 0x138;
              goto LAB_03b2435c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        lVar4 = FUN_031c0d08(plVar6,lVar4,0);
LAB_03b2435c:
        lVar4 = *(long *)(lVar4 + 8);
        *(undefined1 **)(unaff_x29 + -0x18) = __src;
        (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar6,unaff_x29 + -0x18,__src)
        ;
        memcpy(puVar12,__src,__n);
        if (unaff_x20 == 0) {
          if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          goto LAB_03b24558;
        }
        puVar2 = puVar12;
        if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x20) + 0x28)) {
          puVar2 = (undefined8 *)*puVar12;
        }
        puVar5 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30);
        uVar3 = *puVar5;
        pcVar8 = (code *)puVar5[2];
        *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
        (*pcVar8)(uVar3);
        if (*(char *)(unaff_x29 + -0xc) != '\0') goto LAB_03b243fc;
        plVar6 = *(long **)(unaff_x29 + -0x20);
        iVar11 = iVar11 + 1;
      } while (plVar6 != (long *)0x0);
    }
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
  goto LAB_03b24558;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03b24428:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_070c2e88) {
      puVar12 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03b2445c;
    }
  }
LAB_03b24440:
  puVar12 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)PTR_DAT_070c2e88,0);
LAB_03b2445c:
  (*(code *)*puVar12)(plVar6,puVar12[1]);
LAB_03b24468:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return iVar11;
  }
LAB_03b24558:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


