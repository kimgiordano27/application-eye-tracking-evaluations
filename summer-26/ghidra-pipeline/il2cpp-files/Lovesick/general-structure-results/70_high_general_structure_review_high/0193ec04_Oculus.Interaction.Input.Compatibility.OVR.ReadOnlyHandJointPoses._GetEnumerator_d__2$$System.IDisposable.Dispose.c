/*
FUNCTION_NAME: Oculus.Interaction.Input.Compatibility.OVR.ReadOnlyHandJointPoses.<GetEnumerator>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 0193ec04
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure
*/


undefined8
Oculus_Interaction_Input_Compatibility_OVR_ReadOnlyHandJointPoses_<GetEnumerator>d__2__System_IDisposable_Dispose
          (uint param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  float unaff_w20;
  long *plVar10;
  long lVar11;
  int unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  
  do {
    if (unaff_x23 == (long *)0x0) {
LAB_0193eecc:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = *unaff_x23;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0193ec5c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(unaff_x23,*unaff_x26,0);
LAB_0193ec5c:
    uVar5 = (*(code *)*puVar6)(unaff_x23,unaff_w22 + 1,puVar6[1]);
    puVar3 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__;
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_0193eecc;
    FUN_0132138c(*(long *)(unaff_x19 + 0x28),uVar5,&stack0x00000010,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__);
    fVar17 = in_stack_00000018;
    fVar16 = fStack0000000000000014;
    fVar15 = fStack0000000000000010;
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_0193eecc;
    FUN_0132138c(*(long *)(unaff_x19 + 0x28),param_1,&stack0x00000010,*(undefined8 *)puVar3);
    lVar7 = *(long *)(unaff_x24 + 0x58);
    if (lVar7 == 0) goto LAB_0193eecc;
    if (*(uint *)(lVar7 + 0x18) <= param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar7 = lVar7 + (long)(int)param_1 * 0x10;
    uVar8 = (ulong)*(uint *)(lVar7 + 0x24);
    uVar13 = (ulong)*(uint *)(lVar7 + 0x28);
    uVar14 = (ulong)*(uint *)(lVar7 + 0x2c);
    fVar15 = fVar15 - fStack0000000000000010;
    fVar16 = fVar16 - fStack0000000000000014;
    fVar17 = fVar17 - in_stack_00000018;
    FUN_02698858(*(undefined4 *)(lVar7 + 0x20),uVar8,uVar13,uVar14,0);
    FUN_02699088(0);
    uVar12 = FUN_02698ebc(0);
    puVar3 = Method_System_Security_Cryptography_DSA_FromXmlString__;
    if ((*(long *)(unaff_x24 + 0xd8) == 0) ||
       (lVar7 = *(long *)(*(long *)(unaff_x24 + 0xd8) + 0x18), lVar7 == 0)) goto LAB_0193eecc;
    FUN_0132138c(lVar7,unaff_w20,&stack0x00000010,
                 *(undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__);
    lVar7 = CONCAT44(fStack0000000000000014,fStack0000000000000010);
    if (DAT_03774e1b == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03774e1b = '\x01';
    }
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (lVar7 == 0) goto LAB_0193eecc;
    FUN_018ffaa8(SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17),uVar12,uVar8,uVar13,
                 uVar14,lVar7,CONCAT44(uVar5,param_1),param_1,0);
    if ((*(long *)(unaff_x24 + 0xd8) == 0) ||
       (lVar7 = *(long *)(*(long *)(unaff_x24 + 0xd8) + 0x18), lVar7 == 0)) goto LAB_0193eecc;
    FUN_0132138c(lVar7,unaff_w20,&stack0x00000010,*(undefined8 *)puVar3);
    lVar7 = CONCAT44(fStack0000000000000014,fStack0000000000000010);
    if (lVar7 == 0) goto LAB_0193eecc;
    *(int *)(lVar7 + 0x24) = *(int *)(lVar7 + 0x24) + 1;
    iVar4 = *(int *)(unaff_x19 + 0x50);
    if (iVar4 % 500 == 0) {
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        iVar1 = *(int *)(*(long *)(unaff_x19 + 0x30) + 0x18);
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
        if (lVar7 != 0) {
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = iVar4 / iVar1;
          }
          FUN_01919300((float)iVar2,lVar7,
                       *(undefined8 *)Method_TMPro_TMP_TextProcessingStack<WordWrapState>_Pop__,0);
          *(long *)(unaff_x19 + 0x18) = lVar7;
          *(undefined4 *)(unaff_x19 + 0x10) = 2;
          return 1;
        }
      }
      goto LAB_0193eecc;
    }
    iVar4 = iVar4 + 1;
    *(int *)(unaff_x19 + 0x50) = iVar4;
    lVar7 = *(long *)(unaff_x19 + 0x30);
    if (lVar7 == 0) goto LAB_0193eecc;
    if (*(int *)(lVar7 + 0x18) <= iVar4) {
      return 0;
    }
    FUN_0132138c(lVar7,iVar4,&stack0x00000010,*unaff_x25);
    unaff_w20 = fStack0000000000000010;
    unaff_x26 = (long *)UnityEngine_UIElements_IDragAndDrop_TypeInfo;
    plVar10 = *(long **)(unaff_x19 + 0x48);
    if (plVar10 == (long *)0x0) goto LAB_0193eecc;
    lVar7 = *plVar10;
    uVar5 = *(undefined4 *)(unaff_x19 + 0x50);
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)UnityEngine_UIElements_IDragAndDrop_TypeInfo) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0193eb20;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_00d59724(plVar10,*(long *)UnityEngine_UIElements_IDragAndDrop_TypeInfo,0);
LAB_0193eb20:
    unaff_w22 = (*(code *)*puVar6)(plVar10,uVar5,puVar6[1]);
    if (unaff_x24 == 0) goto LAB_0193eecc;
    if (*(long *)(unaff_x24 + 0xd8) == 0) goto LAB_0193eecc;
    iVar4 = FUN_013557c0(*(long *)(unaff_x24 + 0xd8),
                         *(undefined8 *)Method_UnityEngine_Component_GetComponent<ParametricDoor>__)
    ;
    if (iVar4 <= (int)unaff_w20) {
      lVar11 = *(long *)(unaff_x24 + 0xd8);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_List<OVRSceneRoom>__ctor__);
      if ((lVar7 == 0) || (FUN_018ff9b4(lVar7,0,0), lVar11 == 0)) goto LAB_0193eecc;
      FUN_01355fbc(lVar11,lVar7,*(undefined8 *)PTR_DAT_033ed110);
    }
    plVar10 = *(long **)(unaff_x19 + 0x40);
    if (plVar10 == (long *)0x0) goto LAB_0193eecc;
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0193ebf0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar10,*unaff_x26,0);
LAB_0193ebf0:
    param_1 = (*(code *)*puVar6)(plVar10,unaff_w22,puVar6[1]);
    unaff_x23 = *(long **)(unaff_x19 + 0x40);
  } while( true );
}


