/*
FUNCTION_NAME: Oculus.Interaction.Input.Compatibility.OVR.ReadOnlyHandJointPoses.<GetEnumerator>d__2$$System.Collections.Generic.IEnumerator<UnityEngine.Pose>.get_Current
ENTRY_POINT: 0193ecdc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Oculus_Interaction_Input_Compatibility_OVR_ReadOnlyHandJointPoses_<GetEnumerator>d__2__System_Collections_Generic_IEnumerator<UnityEngine_Pose>_get_Current
          (long param_1,ulong param_2,ulong param_3,undefined1 param_4 [16],undefined1 param_5 [16],
          undefined8 param_6,float param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long *plVar11;
  long lVar12;
  undefined4 unaff_w22;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 unaff_d8;
  float unaff_s9;
  float fStack0000000000000000;
  float fStack0000000000000004;
  undefined8 uStack0000000000000008;
  int iStack0000000000000010;
  undefined4 uStack0000000000000014;
  float in_stack_00000018;
  
  while( true ) {
    uVar9 = (ulong)*(uint *)(param_1 + 0x28);
    uVar14 = (ulong)*(uint *)(param_1 + 0x2c);
    fStack0000000000000000 = (float)unaff_d8 - (float)param_6;
    fStack0000000000000004 = (float)((ulong)unaff_d8 >> 0x20) - (float)((ulong)param_6 >> 0x20);
    uStack0000000000000008 = 0;
    FUN_02698858(param_2,param_3,uVar9,uVar14,0);
    fVar4 = fStack0000000000000004;
    FUN_02699088(0);
    uVar13 = FUN_02698ebc(0);
    puVar3 = Method_System_Security_Cryptography_DSA_FromXmlString__;
    if ((*(long *)(unaff_x24 + 0xd8) == 0) ||
       (lVar8 = *(long *)(*(long *)(unaff_x24 + 0xd8) + 0x18), lVar8 == 0)) goto LAB_0193eecc;
    FUN_0132138c(lVar8,unaff_w20,&stack0x00000010,
                 *(undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__);
    lVar8 = CONCAT44(uStack0000000000000014,iStack0000000000000010);
    if (DAT_03774e1b == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03774e1b = '\x01';
    }
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (lVar8 == 0) goto LAB_0193eecc;
    FUN_018ffaa8(SQRT(fStack0000000000000000 * fStack0000000000000000 + fVar4 * fVar4 +
                      (unaff_s9 - param_7) * (unaff_s9 - param_7)),uVar13,param_3,uVar9,uVar14,lVar8
                 ,CONCAT44(unaff_w22,unaff_w21),unaff_w21,0);
    if ((*(long *)(unaff_x24 + 0xd8) == 0) ||
       (lVar8 = *(long *)(*(long *)(unaff_x24 + 0xd8) + 0x18), lVar8 == 0)) goto LAB_0193eecc;
    FUN_0132138c(lVar8,unaff_w20,&stack0x00000010,*(undefined8 *)puVar3);
    lVar8 = CONCAT44(uStack0000000000000014,iStack0000000000000010);
    if (lVar8 == 0) goto LAB_0193eecc;
    *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + 1;
    iVar5 = *(int *)(unaff_x19 + 0x50);
    if (iVar5 % 500 == 0) break;
    iVar5 = iVar5 + 1;
    *(int *)(unaff_x19 + 0x50) = iVar5;
    lVar8 = *(long *)(unaff_x19 + 0x30);
    if (lVar8 == 0) goto LAB_0193eecc;
    if (*(int *)(lVar8 + 0x18) <= iVar5) {
      return 0;
    }
    FUN_0132138c(lVar8,iVar5,&stack0x00000010,*unaff_x25);
    unaff_w20 = iStack0000000000000010;
    puVar3 = UnityEngine_UIElements_IDragAndDrop_TypeInfo;
    plVar11 = *(long **)(unaff_x19 + 0x48);
    if (plVar11 == (long *)0x0) goto LAB_0193eecc;
    lVar8 = *plVar11;
    uVar1 = *(undefined4 *)(unaff_x19 + 0x50);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)UnityEngine_UIElements_IDragAndDrop_TypeInfo) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0193eb20;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_00d59724(plVar11,*(long *)UnityEngine_UIElements_IDragAndDrop_TypeInfo,0);
LAB_0193eb20:
    iVar5 = (*(code *)*puVar7)(plVar11,uVar1,puVar7[1]);
    if (unaff_x24 == 0) goto LAB_0193eecc;
    if (*(long *)(unaff_x24 + 0xd8) == 0) goto LAB_0193eecc;
    iVar6 = FUN_013557c0(*(long *)(unaff_x24 + 0xd8),
                         *(undefined8 *)Method_UnityEngine_Component_GetComponent<ParametricDoor>__)
    ;
    if (iVar6 <= unaff_w20) {
      lVar12 = *(long *)(unaff_x24 + 0xd8);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_List<OVRSceneRoom>__ctor__);
      if ((lVar8 == 0) || (FUN_018ff9b4(lVar8,0,0), lVar12 == 0)) goto LAB_0193eecc;
      FUN_01355fbc(lVar12,lVar8,*(undefined8 *)PTR_DAT_033ed110);
    }
    plVar11 = *(long **)(unaff_x19 + 0x40);
    if (plVar11 == (long *)0x0) goto LAB_0193eecc;
    lVar12 = *plVar11;
    lVar8 = *(long *)puVar3;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0193ebf0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar11,lVar8,0);
LAB_0193ebf0:
    unaff_w21 = (*(code *)*puVar7)(plVar11,iVar5,puVar7[1]);
    plVar11 = *(long **)(unaff_x19 + 0x40);
    if (plVar11 == (long *)0x0) goto LAB_0193eecc;
    lVar12 = *plVar11;
    lVar8 = *(long *)puVar3;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0193ec5c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(plVar11,lVar8,0);
LAB_0193ec5c:
    unaff_w22 = (*(code *)*puVar7)(plVar11,iVar5 + 1,puVar7[1]);
    puVar3 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__;
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_0193eecc;
    FUN_0132138c(*(long *)(unaff_x19 + 0x28),unaff_w22,&stack0x00000010,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__);
    unaff_s9 = in_stack_00000018;
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_0193eecc;
    unaff_d8 = CONCAT44(uStack0000000000000014,iStack0000000000000010);
    FUN_0132138c(*(long *)(unaff_x19 + 0x28),unaff_w21,&stack0x00000010,*(undefined8 *)puVar3);
    param_1 = *(long *)(unaff_x24 + 0x58);
    if (param_1 == 0) goto LAB_0193eecc;
    if (*(uint *)(param_1 + 0x18) <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    param_6 = CONCAT44(uStack0000000000000014,iStack0000000000000010);
    param_1 = param_1 + (long)(int)unaff_w21 * 0x10;
    param_2 = (ulong)*(uint *)(param_1 + 0x20);
    param_3 = (ulong)*(uint *)(param_1 + 0x24);
    param_7 = in_stack_00000018;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    iVar6 = *(int *)(*(long *)(unaff_x19 + 0x30) + 0x18);
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
    if (lVar8 != 0) {
      iVar2 = 0;
      if (iVar6 != 0) {
        iVar2 = iVar5 / iVar6;
      }
      FUN_01919300((float)iVar2,lVar8,
                   *(undefined8 *)Method_TMPro_TMP_TextProcessingStack<WordWrapState>_Pop__,0);
      *(long *)(unaff_x19 + 0x18) = lVar8;
      *(undefined4 *)(unaff_x19 + 0x10) = 2;
      return 1;
    }
  }
LAB_0193eecc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


