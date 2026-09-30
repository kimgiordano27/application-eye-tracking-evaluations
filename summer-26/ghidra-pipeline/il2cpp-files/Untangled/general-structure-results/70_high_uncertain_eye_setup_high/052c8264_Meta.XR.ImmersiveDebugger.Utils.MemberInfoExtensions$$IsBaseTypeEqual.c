/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.MemberInfoExtensions$$IsBaseTypeEqual
ENTRY_POINT: 052c8264
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x052c86c0) */
/* WARNING: Removing unreachable block (ram,0x052c86d0) */

long Meta_XR_ImmersiveDebugger_Utils_MemberInfoExtensions__IsBaseTypeEqual(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  int iVar17;
  long *unaff_x21;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x28;
  long *plVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  uVar19 = (**(code **)(param_1 + 0x278))();
  uVar20 = (**(code **)(*unaff_x21 + 0x278))();
  uVar21 = (**(code **)(*unaff_x21 + 0x278))();
  if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  *(undefined4 *)(unaff_x28 + 0x10) = uVar19;
  *(undefined4 *)(unaff_x28 + 0x14) = uVar20;
  *(undefined4 *)(unaff_x28 + 0x18) = uVar21;
  uVar19 = (**(code **)(*unaff_x21 + 0x278))();
  uVar20 = (**(code **)(*unaff_x21 + 0x278))();
  uVar21 = (**(code **)(*unaff_x21 + 0x278))();
  uVar22 = (**(code **)(*unaff_x21 + 0x278))();
  *(undefined4 *)(unaff_x28 + 0x1c) = uVar19;
  *(undefined4 *)(unaff_x28 + 0x20) = uVar20;
  *(undefined4 *)(unaff_x28 + 0x24) = uVar21;
  *(undefined4 *)(unaff_x28 + 0x28) = uVar22;
  iVar7 = (**(code **)(*unaff_x21 + 0x238))();
  puVar6 = PTR_DAT_06d3d4a0;
  puVar5 = PTR_DAT_06d3d498;
  puVar4 = PTR_DAT_06d3d398;
  puVar3 = PTR_DAT_06d3d390;
  puVar2 = PTR_DAT_06d3d388;
  if (0 < iVar7) {
    iVar17 = 0;
    do {
      lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
      FUN_052c6614();
      lVar10 = thunk_FUN_02ef1808(*(undefined8 *)puVar5);
      FUN_03fd0468(lVar10,*(undefined8 *)puVar6);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      plVar18 = (long *)(lVar9 + 0x10);
      *plVar18 = lVar10;
      thunk_FUN_02f411dc(plVar18,lVar10);
      switch(iVar17) {
      case 0:
        *(long *)(unaff_x28 + 0x30) = lVar9;
        thunk_FUN_02f411dc((long *)(unaff_x28 + 0x30),lVar9);
        break;
      case 1:
        *(long *)(unaff_x28 + 0x38) = lVar9;
        thunk_FUN_02f411dc((long *)(unaff_x28 + 0x38),lVar9);
        break;
      case 2:
        *(long *)(unaff_x28 + 0x40) = lVar9;
        thunk_FUN_02f411dc((long *)(unaff_x28 + 0x40),lVar9);
        break;
      case 3:
        *(long *)(unaff_x28 + 0x48) = lVar9;
        thunk_FUN_02f411dc((long *)(unaff_x28 + 0x48),lVar9);
        break;
      case 4:
        *(long *)(unaff_x28 + 0x50) = lVar9;
        thunk_FUN_02f411dc((long *)(unaff_x28 + 0x50),lVar9);
      }
      iVar8 = (**(code **)(*unaff_x21 + 0x238))();
      if (0 < iVar8) {
        do {
          lVar9 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
          FUN_05645a04(lVar9,0);
          lVar10 = *plVar18;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar12 = *(long *)(lVar10 + 0x10);
          lVar14 = *(long *)puVar4;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
            *plVar13 = lVar9;
            thunk_FUN_02f411dc(plVar13,lVar9);
          }
          else {
            FUN_03fd0c9c(lVar10,lVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          uVar19 = (**(code **)(*unaff_x21 + 0x278))();
          uVar20 = (**(code **)(*unaff_x21 + 0x278))();
          uVar21 = (**(code **)(*unaff_x21 + 0x278))();
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          *(undefined4 *)(lVar9 + 0x10) = uVar19;
          *(undefined4 *)(lVar9 + 0x14) = uVar20;
          *(undefined4 *)(lVar9 + 0x18) = uVar21;
          uVar19 = (**(code **)(*unaff_x21 + 0x278))();
          uVar20 = (**(code **)(*unaff_x21 + 0x278))();
          uVar21 = (**(code **)(*unaff_x21 + 0x278))();
          uVar22 = (**(code **)(*unaff_x21 + 0x278))();
          iVar8 = iVar8 + -1;
          *(undefined4 *)(lVar9 + 0x1c) = uVar19;
          *(undefined4 *)(lVar9 + 0x20) = uVar20;
          *(undefined4 *)(lVar9 + 0x24) = uVar21;
          *(undefined4 *)(lVar9 + 0x28) = uVar22;
        } while (iVar8 != 0);
      }
      iVar17 = iVar17 + 1;
      unaff_x26 = (long *)PTR_DAT_06d01f60;
    } while (iVar17 != iVar7);
  }
  lVar9 = *unaff_x21;
  uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *unaff_x26) {
        puVar11 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_052c8604;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar11 = (undefined8 *)FUN_02eea86c();
LAB_052c8604:
  (*(code *)*puVar11)();
  if (unaff_x25 != (long *)0x0) {
    lVar9 = *unaff_x25;
    uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x26) {
          puVar11 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_052c8668;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar11 = (undefined8 *)FUN_02eea86c(unaff_x25,*unaff_x26,0);
LAB_052c8668:
    (*(code *)*puVar11)(unaff_x25,puVar11[1]);
  }
  return unaff_x28;
}


