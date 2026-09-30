/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastAnchorAllDelegate$$BeginInvoke
ENTRY_POINT: 04a6fe34
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate__BeginInvoke
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  long unaff_x19;
  long unaff_x22;
  long *plVar14;
  long lVar15;
  int iVar16;
  
  if (param_1 == 0) {
    FUN_04a6fb30();
  }
  iVar1 = FUN_04a70ee0();
  lVar6 = *(long *)(unaff_x19 + 0x10);
  if (lVar6 == 0) goto LAB_04a700f4;
  uVar5 = *(uint *)(lVar6 + 0x18);
  iVar16 = 0;
  if (uVar5 != 0) {
    iVar16 = iVar1 / (int)uVar5;
  }
  uVar13 = iVar1 - iVar16 * uVar5;
  if (uVar13 < uVar5) {
    lVar15 = *(long *)(unaff_x19 + 0x18);
    uVar5 = *(int *)(lVar6 + (ulong)uVar13 * 4 + 0x20) - 1;
    if (-1 < (int)uVar5) {
      if (lVar15 == 0) goto LAB_04a700f4;
      uVar7 = *(undefined8 *)(lVar15 + 0x18);
      iVar16 = 0;
      do {
        if ((uint)uVar7 <= uVar5) goto LAB_04a700b4;
        lVar6 = lVar15 + 0x20 + (ulong)uVar5 * 0x10;
        if (*(int *)(lVar15 + 0x20 + (ulong)uVar5 * 0x10) == iVar1) {
          plVar14 = *(long **)(unaff_x19 + 0x30);
          if (plVar14 == (long *)0x0) goto LAB_04a700f4;
          uVar7 = *(undefined8 *)(lVar6 + 8);
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02b76218(lVar4);
          }
          lVar8 = *plVar14;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar2 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_04a6ff4c;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar2 = (undefined8 *)FUN_02b7654c(plVar14,lVar4,0);
LAB_04a6ff4c:
          uVar11 = (*(code *)*puVar2)(plVar14,uVar7,param_3,puVar2[1]);
          if ((uVar11 & 1) != 0) {
            return 0;
          }
          uVar7 = *(undefined8 *)(lVar15 + 0x18);
        }
        if ((int)(uint)uVar7 <= iVar16) {
          thunk_FUN_02ba3594(PTR_DAT_0631cb60);
          uVar7 = thunk_FUN_02b79644();
          uVar3 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
          FUN_04d7b3f4(uVar7,uVar3,0);
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar7);
        }
        if ((uint)uVar7 <= uVar5) goto LAB_04a700b4;
        uVar5 = *(uint *)(lVar6 + 4);
        iVar16 = iVar16 + 1;
      } while (-1 < (int)uVar5);
    }
    uVar5 = *(uint *)(unaff_x19 + 0x28);
    if ((int)uVar5 < 0) {
      if (lVar15 == 0) goto LAB_04a700f4;
      uVar5 = *(uint *)(unaff_x19 + 0x24);
      uVar10 = *(uint *)(lVar15 + 0x18);
      if (uVar5 == uVar10) {
        FUN_04a6fc0c();
        if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_04a700f4;
        uVar5 = *(uint *)(unaff_x19 + 0x24);
        lVar15 = *(long *)(unaff_x19 + 0x18);
        uVar7 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
        *(uint *)(unaff_x19 + 0x24) = uVar5 + 1;
        if (lVar15 == 0) goto LAB_04a700f4;
        iVar16 = 0;
        iVar9 = (int)uVar7;
        if (iVar9 != 0) {
          iVar16 = iVar1 / iVar9;
        }
        uVar13 = iVar1 - iVar16 * iVar9;
        uVar10 = *(uint *)(lVar15 + 0x18);
      }
      else {
        *(uint *)(unaff_x19 + 0x24) = uVar5 + 1;
      }
    }
    else {
      if (lVar15 == 0) goto LAB_04a700f4;
      uVar10 = *(uint *)(lVar15 + 0x18);
      if (uVar10 <= uVar5) goto LAB_04a700b4;
      *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(lVar15 + (ulong)uVar5 * 0x10 + 0x24);
    }
    if (uVar5 < uVar10) {
      piVar12 = (int *)(lVar15 + 0x20 + (long)(int)uVar5 * 0x10);
      *(undefined8 *)(piVar12 + 2) = param_3;
      lVar6 = *(long *)(unaff_x19 + 0x10);
      *piVar12 = iVar1;
      if (lVar6 == 0) {
LAB_04a700f4:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if ((uVar13 < *(uint *)(lVar6 + 0x18)) && (uVar5 < *(uint *)(lVar15 + 0x18))) {
        lVar6 = lVar6 + (ulong)uVar13 * 4;
        *(int *)(lVar15 + 0x20 + (long)(int)uVar5 * 0x10 + 4) = *(int *)(lVar6 + 0x20) + -1;
        *(uint *)(lVar6 + 0x20) = uVar5 + 1;
        *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
        *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
        return 1;
      }
    }
  }
LAB_04a700b4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


