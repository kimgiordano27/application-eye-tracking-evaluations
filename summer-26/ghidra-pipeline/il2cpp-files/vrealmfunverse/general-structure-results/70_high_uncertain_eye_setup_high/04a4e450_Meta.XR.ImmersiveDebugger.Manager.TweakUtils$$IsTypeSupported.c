/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils$$IsTypeSupported
ENTRY_POINT: 04a4e450
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_TweakUtils__IsTypeSupported
          (long param_1,long param_2,uint param_3,long param_4)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  uint uStack000000000000000c;
  
  uStack000000000000000c = param_3;
  if (param_1 == 0) {
    FUN_04a4e154(param_2,0,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70));
  }
  iVar2 = FUN_04a4f544(param_2,param_3 & 1,
                       *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xb0));
  lVar6 = *(long *)(param_2 + 0x10);
  if (lVar6 == 0) goto LAB_04a4e748;
  uVar17 = *(uint *)(lVar6 + 0x18);
  iVar16 = 0;
  if (uVar17 != 0) {
    iVar16 = iVar2 / (int)uVar17;
  }
  uVar13 = iVar2 - iVar16 * uVar17;
  if (uVar13 < uVar17) {
    lVar15 = *(long *)(param_2 + 0x18);
    uVar17 = *(int *)(lVar6 + (ulong)uVar13 * 4 + 0x20) - 1;
    if (-1 < (int)uVar17) {
      if (lVar15 == 0) goto LAB_04a4e748;
      uVar7 = *(undefined8 *)(lVar15 + 0x18);
      iVar16 = 0;
      lVar6 = lVar15 + 0x20;
      do {
        if ((uint)uVar7 <= uVar17) goto LAB_04a4e708;
        if (*(int *)(lVar6 + (ulong)uVar17 * 0xc) == iVar2) {
          plVar14 = *(long **)(param_2 + 0x30);
          if (plVar14 == (long *)0x0) goto LAB_04a4e748;
          lVar5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x20);
          cVar1 = *(char *)(lVar6 + (ulong)uVar17 * 0xc + 8);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02b76218(lVar5);
          }
          lVar8 = *plVar14;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_04a4e584;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar3 = (undefined8 *)FUN_02b7654c(plVar14,lVar5,0);
LAB_04a4e584:
          uVar11 = (*(code *)*puVar3)(plVar14,cVar1 != '\0',uStack000000000000000c & 1,puVar3[1]);
          if ((uVar11 & 1) != 0) {
            return 0;
          }
          uVar7 = *(undefined8 *)(lVar15 + 0x18);
        }
        if ((int)(uint)uVar7 <= iVar16) {
          thunk_FUN_02ba3594(PTR_DAT_0631cb60);
          uVar7 = thunk_FUN_02b79644();
          uVar4 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
          FUN_04d7b3f4(uVar7,uVar4,0);
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar7,param_4);
        }
        if ((uint)uVar7 <= uVar17) goto LAB_04a4e708;
        iVar16 = iVar16 + 1;
        uVar17 = *(uint *)(lVar6 + (ulong)uVar17 * 0xc + 4);
      } while (-1 < (int)uVar17);
    }
    uVar17 = *(uint *)(param_2 + 0x28);
    if ((int)uVar17 < 0) {
      if (lVar15 == 0) goto LAB_04a4e748;
      uVar17 = *(uint *)(param_2 + 0x24);
      uVar10 = *(uint *)(lVar15 + 0x18);
      if (uVar17 == uVar10) {
        FUN_04a4e230(param_2,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x180));
        if (*(long *)(param_2 + 0x10) == 0) goto LAB_04a4e748;
        uVar17 = *(uint *)(param_2 + 0x24);
        lVar15 = *(long *)(param_2 + 0x18);
        uVar7 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x18);
        *(uint *)(param_2 + 0x24) = uVar17 + 1;
        if (lVar15 == 0) goto LAB_04a4e748;
        iVar16 = 0;
        iVar9 = (int)uVar7;
        if (iVar9 != 0) {
          iVar16 = iVar2 / iVar9;
        }
        uVar13 = iVar2 - iVar16 * iVar9;
        uVar10 = *(uint *)(lVar15 + 0x18);
      }
      else {
        *(uint *)(param_2 + 0x24) = uVar17 + 1;
      }
    }
    else {
      if (lVar15 == 0) goto LAB_04a4e748;
      uVar10 = *(uint *)(lVar15 + 0x18);
      if (uVar10 <= uVar17) goto LAB_04a4e708;
      *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(lVar15 + (ulong)uVar17 * 0xc + 0x24);
    }
    if (uVar17 < uVar10) {
      piVar12 = (int *)(lVar15 + 0x20 + (long)(int)uVar17 * 0xc);
      lVar6 = *(long *)(param_2 + 0x10);
      *piVar12 = iVar2;
      *(char *)(piVar12 + 2) = (char)(param_3 & 1);
      if (lVar6 == 0) {
LAB_04a4e748:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (uVar13 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (ulong)uVar13 * 4;
        *(int *)(lVar15 + 0x20 + (long)(int)uVar17 * 0xc + 4) = *(int *)(lVar6 + 0x20) + -1;
        *(uint *)(lVar6 + 0x20) = uVar17 + 1;
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
        return 1;
      }
    }
  }
LAB_04a4e708:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


