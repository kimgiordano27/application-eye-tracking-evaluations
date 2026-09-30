/*
FUNCTION_NAME: OVRExtensions$$FromVector3f
ENTRY_POINT: 019a8e50
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRExtensions__FromVector3f(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  int iVar12;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long in_stack_00000008;
  
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__);
  thunk_FUN_00d48444(StringLiteral_11347);
  thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u16__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__);
  thunk_FUN_00d48444(Method_FullSerializer_fsBaseConverter_DeserializeMember<ImagePosition>__);
  thunk_FUN_00d48444(System_Collections_ObjectModel_ReadOnlyCollection<Vector4>_TypeInfo);
  thunk_FUN_00d48444(Method_OVRSpaceQuery_ForGroupThrow__);
  thunk_FUN_00d48444(Method_System_Globalization_Calendar_VerifyWritable__);
  thunk_FUN_00d48444(
                    Method_Oculus_Interaction_PointerInteractor<HandGrabInteractor,_HandGrabInteractable>_InteractableUnselected__
                    );
  *(undefined1 *)(unaff_x26 + 0x571) = 1;
  puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  uVar6 = FUN_0267bd34(*unaff_x22,0);
  *(undefined4 *)(unaff_x19 + 0x80) = uVar6;
  uVar6 = FUN_0267bd34(*unaff_x25,0);
  *(undefined4 *)(unaff_x19 + 0x84) = uVar6;
  uVar6 = FUN_0267bd34(*unaff_x24,0);
  *(undefined4 *)(unaff_x19 + 0x88) = uVar6;
  uVar6 = FUN_0267bd34(*unaff_x23,0);
  *(undefined4 *)(unaff_x19 + 0x8c) = uVar6;
  *(undefined4 *)(unaff_x19 + 0x90) = 1;
  if (DAT_03775725 == '\0') {
    thunk_FUN_00d48444(System_Xml_Schema_Datatype_byte_TypeInfo);
    DAT_03775725 = '\x01';
  }
  lVar11 = *(long *)(*(long *)System_Xml_Schema_Datatype_byte_TypeInfo + 0xb8);
  uVar13 = *(undefined8 *)(lVar11 + 0x68);
  uVar8 = *(undefined8 *)(lVar11 + 0x60);
  uVar15 = *(undefined8 *)(lVar11 + 0x78);
  uVar14 = *(undefined8 *)(lVar11 + 0x70);
  uVar17 = *(undefined8 *)(lVar11 + 0x48);
  uVar16 = *(undefined8 *)(lVar11 + 0x40);
  uVar19 = *(undefined8 *)(lVar11 + 0x58);
  uVar18 = *(undefined8 *)(lVar11 + 0x50);
  *(undefined4 *)(unaff_x19 + 0xd4) = 0x3f800000;
  *(undefined8 *)(unaff_x19 + 0xcc) = uVar15;
  *(undefined8 *)(unaff_x19 + 0xc4) = uVar14;
  *(undefined8 *)(unaff_x19 + 0xbc) = uVar13;
  *(undefined8 *)(unaff_x19 + 0xb4) = uVar8;
  *(undefined8 *)(unaff_x19 + 0xac) = uVar19;
  *(undefined8 *)(unaff_x19 + 0xa4) = uVar18;
  *(undefined8 *)(unaff_x19 + 0x9c) = uVar17;
  *(undefined8 *)(unaff_x19 + 0x94) = uVar16;
  FUN_017b46ec();
  *(undefined1 *)(unaff_x19 + 0x58) = unaff_w21;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar2 = StringLiteral_11347;
  uVar7 = FUN_0268b4e0();
  if ((uVar7 & 1) != 0) {
    uVar8 = FUN_0267c994(*(undefined8 *)
                          System_Collections_ObjectModel_ReadOnlyCollection<Vector4>_TypeInfo,0);
    unaff_x20 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (unaff_x20 == 0) goto LAB_019a924c;
    FUN_0267d648(unaff_x20,uVar8,0);
  }
  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar11 != 0) {
    FUN_0267d6d8(lVar11,unaff_x20,0);
    *(long *)(unaff_x19 + 0x50) = lVar11;
    lVar11 = FUN_0268a8a8(3,0);
    if (lVar11 != 0) {
      FUN_010e58e8(lVar11,&stack0x00000008,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__);
      puVar5 = Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__;
      puVar4 = Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__;
      puVar2 = PTR_DAT_033f43d8;
      if (in_stack_00000008 != 0) {
        uVar8 = FUN_02665318(in_stack_00000008,0);
        *(undefined8 *)(unaff_x19 + 0x48) = uVar8;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_0268c1d0(lVar11,0);
        iVar12 = 1;
        if (*(char *)(unaff_x19 + 0x58) != '\0') {
          iVar12 = 2;
        }
        uVar8 = FUN_00da4fb8(*(undefined8 *)puVar4,*(int *)(unaff_x19 + 0x90) * iVar12 * 2);
        *(undefined8 *)(unaff_x19 + 0x10) = uVar8;
        iVar10 = 1;
        iVar12 = iVar10;
        if (*(char *)(unaff_x19 + 0x58) != '\0') {
          iVar12 = 2;
        }
        uVar8 = FUN_00da4fb8(*(undefined8 *)puVar5,*(int *)(unaff_x19 + 0x90) * iVar12 * 2);
        *(undefined8 *)(unaff_x19 + 0x20) = uVar8;
        iVar12 = *(int *)(unaff_x19 + 0x90);
        cVar1 = *(char *)(unaff_x19 + 0x58);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar11 != 0) {
          if (cVar1 != '\0') {
            iVar10 = 2;
          }
          FUN_0269b8c8(lVar11,iVar12 * iVar10 * 2,0x10,0);
          *(long *)(unaff_x19 + 0x60) = lVar11;
          FUN_0269bb30(lVar11,*(undefined8 *)(unaff_x19 + 0x10),0);
          iVar12 = *(int *)(unaff_x19 + 0x90);
          cVar1 = *(char *)(unaff_x19 + 0x58);
          lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar11 != 0) {
            iVar10 = 1;
            if (cVar1 != '\0') {
              iVar10 = 2;
            }
            FUN_0269b8c8(lVar11,iVar12 * iVar10 * 2,0x10,0);
            *(long *)(unaff_x19 + 0x68) = lVar11;
            FUN_0269bb30(lVar11,*(undefined8 *)(unaff_x19 + 0x20),0);
            if (*(long *)(unaff_x19 + 0x50) != 0) {
              FUN_0267f3bc(*(long *)(unaff_x19 + 0x50),*(undefined4 *)(unaff_x19 + 0x80),
                           *(undefined8 *)(unaff_x19 + 0x60),0);
              puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u16__;
              if (*(long *)(unaff_x19 + 0x50) != 0) {
                FUN_0267f3bc(*(long *)(unaff_x19 + 0x50),*(undefined4 *)(unaff_x19 + 0x84),
                             *(undefined8 *)(unaff_x19 + 0x68),0);
                lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,5);
                *(long *)(unaff_x19 + 0x78) = lVar11;
                if ((*(long *)(unaff_x19 + 0x48) != 0) &&
                   (uVar6 = FUN_0266e13c(*(long *)(unaff_x19 + 0x48),0,0), lVar11 != 0)) {
                  if (*(int *)(lVar11 + 0x18) == 0) {
LAB_019a9250:
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  *(undefined4 *)(lVar11 + 0x20) = uVar6;
                  lVar11 = *(long *)(unaff_x19 + 0x78);
                  if (lVar11 != 0) {
                    if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_019a9250;
                    iVar12 = 1;
                    if (*(char *)(unaff_x19 + 0x58) != '\0') {
                      iVar12 = 2;
                    }
                    *(int *)(lVar11 + 0x24) = iVar12 * *(int *)(unaff_x19 + 0x90);
                    lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                    if (lVar9 != 0) {
                      FUN_0269baa8(lVar9,1,*(int *)(lVar11 + 0x18) << 2,0x100,0);
                      *(long *)(unaff_x19 + 0x70) = lVar9;
                      FUN_0269bb30(lVar9,*(undefined8 *)(unaff_x19 + 0x78),0);
                      *(undefined1 *)(unaff_x19 + 0x18) = 1;
                      *(undefined1 *)(unaff_x19 + 0x28) = 1;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_019a924c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


