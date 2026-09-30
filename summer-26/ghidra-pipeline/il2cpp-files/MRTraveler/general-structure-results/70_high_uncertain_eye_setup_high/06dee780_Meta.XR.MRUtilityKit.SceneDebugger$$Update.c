/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$Update
ENTRY_POINT: 06dee780
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDebugger__Update(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x19;
  undefined8 uVar9;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong uVar10;
  uint uVar11;
  
  if (param_1 != (long *)0x0) {
    lVar3 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    puVar1 = PTR_DAT_08e912d0;
    if (lVar3 == 0) goto LAB_06deeb64;
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar11 = 0;
      uVar10 = 0;
      uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar10) goto LAB_06deeb68;
        plVar7 = *(long **)(lVar3 + 0x20 + uVar10 * 8);
        if ((plVar7 != (long *)0x0) && (*plVar7 == *(long *)puVar1)) {
          uVar2 = (*(code *)plVar7[3])(plVar7[8]);
          uVar11 = uVar11 | uVar2 & 1;
        }
        uVar6 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar3 + 0x18));
      if (uVar11 != 0) {
        return;
      }
    }
  }
  plVar7 = *(long **)(unaff_x21 + 0x60);
  lVar3 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,3);
  if (lVar3 == 0) {
LAB_06deeb64:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if ((unaff_x22 != 0) && (lVar4 = thunk_FUN_03cf5138(), lVar4 == 0)) {
LAB_06deeb6c:
    uVar9 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar9,0);
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(long *)(lVar3 + 0x20) = unaff_x22;
    thunk_FUN_03d233cc();
    if ((unaff_x19 != 0) && (lVar4 = thunk_FUN_03cf5138(), lVar4 == 0)) goto LAB_06deeb6c;
    if (1 < *(uint *)(lVar3 + 0x18)) {
      *(long *)(lVar3 + 0x28) = unaff_x19;
      thunk_FUN_03d233cc();
      if ((unaff_x23 != 0) && (lVar4 = thunk_FUN_03cf5138(), lVar4 == 0)) goto LAB_06deeb6c;
      if (2 < *(uint *)(lVar3 + 0x18)) {
        *(long *)(lVar3 + 0x30) = unaff_x23;
        thunk_FUN_03d233cc();
        if (plVar7 != (long *)0x0) {
          lVar4 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
          uVar9 = *(undefined8 *)PTR_DAT_08e91e30;
          if (uVar10 != 0) {
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e82378) {
                puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 0xc) * 0x10 + 0x138);
                goto LAB_06deeb4c;
              }
              uVar10 = uVar10 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08e82378,0xc);
LAB_06deeb4c:
          (*(code *)*puVar5)(plVar7,uVar9,lVar3,puVar5[1]);
          return;
        }
        goto LAB_06deeb64;
      }
    }
  }
LAB_06deeb68:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


