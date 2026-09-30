/*
FUNCTION_NAME: Oculus.Interaction.Input.DominantHandRef$$GetFingerIsHighConfidence
ENTRY_POINT: 05241a14
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 84
LABEL: confirmed_gaze_retrieval_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: validity_gate;pose_vector;active_gaze_retrieval
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_8;active_gaze_state_retrieval_with_validity_and_pose
*/


void Oculus_Interaction_Input_DominantHandRef__GetFingerIsHighConfidence(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  int iVar11;
  long unaff_x20;
  long *plVar12;
  
  FUN_02f08768();
  FUN_02f08768(UnityEngine_InputSystem_Utilities_ReadOnlyArray<InternedString>_TypeInfo);
  FUN_02f08768(UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x91d) = 1;
  uVar6 = FUN_05241570();
  puVar4 = UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_TypeInfo;
  puVar3 = UnityEngine_InputSystem_Utilities_ReadOnlyArray<InternedString>_TypeInfo;
  puVar2 = System_Predicate<Tab>_TypeInfo;
  puVar1 = PTR_DAT_067cbb48;
  if ((uVar6 & 1) == 0) {
    return;
  }
  plVar12 = *(long **)(unaff_x19 + 0x28);
  if (plVar12 != (long *)0x0) {
    iVar11 = 0;
    do {
      lVar8 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05241abc;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar3,0);
LAB_05241abc:
      iVar5 = (*(code *)*puVar7)(plVar12,puVar7[1]);
      if (iVar5 <= iVar11) {
        return;
      }
      plVar12 = *(long **)(unaff_x19 + 0x28);
      if (plVar12 == (long *)0x0) break;
      lVar8 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05241b24;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar4,0);
LAB_05241b24:
      plVar12 = (long *)(*(code *)*puVar7)(plVar12,iVar11,puVar7[1]);
      if (plVar12 == (long *)0x0) break;
      lVar9 = *plVar12;
      lVar8 = *(long *)puVar1;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 6) * 0x10 + 0x138);
            goto LAB_05241b8c;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(plVar12,lVar8,6);
LAB_05241b8c:
      iVar5 = (*(code *)*puVar7)(plVar12,puVar7[1]);
      if (iVar5 == 1) {
LAB_05241c00:
        lVar8 = *plVar12;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
              goto LAB_05241c50;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar2,3);
LAB_05241c50:
        (*(code *)*puVar7)(plVar12,puVar7[1]);
      }
      else {
        lVar9 = *plVar12;
        lVar8 = *(long *)puVar1;
        uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar8) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 6) * 0x10 + 0x138);
              goto LAB_05241bf0;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_02f421d0(plVar12,lVar8,6);
LAB_05241bf0:
        iVar5 = (*(code *)*puVar7)(plVar12,puVar7[1]);
        if (iVar5 == 0) goto LAB_05241c00;
      }
      plVar12 = *(long **)(unaff_x19 + 0x28);
      iVar11 = iVar11 + 1;
    } while (plVar12 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


