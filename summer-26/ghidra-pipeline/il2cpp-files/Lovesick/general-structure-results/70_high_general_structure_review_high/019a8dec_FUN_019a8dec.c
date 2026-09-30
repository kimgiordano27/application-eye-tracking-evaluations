/*
FUNCTION_NAME: FUN_019a8dec
ENTRY_POINT: 019a8dec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_019a8dec(long param_1,long param_2,byte param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long local_48;
  
  puVar6 = Method_FullSerializer_fsBaseConverter_DeserializeMember<ImagePosition>__;
  puVar5 = Method_OVRSpaceQuery_ForGroupThrow__;
  puVar4 = Method_System_Globalization_Calendar_VerifyWritable__;
  puVar2 = 
  Method_Oculus_Interaction_PointerInteractor<HandGrabInteractor,_HandGrabInteractable>_InteractableUnselected__
  ;
                    /* try { // try from 019a8e08 to 01aa8e0b has its CatchHandler @ 019a8ef0 */
                    /* try { // try from 019a8e0c to 01aa8ea7 has its CatchHandler @ 019a8bc8 */
  if ((DAT_0377a571 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__);
    thunk_FUN_00d48444(PTR_DAT_033f43d8);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__)
    ;
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
    DAT_0377a571 = 1;
  }
  puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  uVar7 = FUN_0267bd34(*(undefined8 *)puVar6,0);
  *(undefined4 *)(param_1 + 0x80) = uVar7;
  uVar7 = FUN_0267bd34(*(undefined8 *)puVar5,0);
  *(undefined4 *)(param_1 + 0x84) = uVar7;
  uVar7 = FUN_0267bd34(*(undefined8 *)puVar2,0);
  *(undefined4 *)(param_1 + 0x88) = uVar7;
  uVar7 = FUN_0267bd34(*(undefined8 *)puVar4,0);
  *(undefined4 *)(param_1 + 0x8c) = uVar7;
  *(undefined4 *)(param_1 + 0x90) = 1;
  if (DAT_03775725 == '\0') {
    thunk_FUN_00d48444(System_Xml_Schema_Datatype_byte_TypeInfo);
    DAT_03775725 = '\x01';
  }
  lVar12 = *(long *)(*(long *)System_Xml_Schema_Datatype_byte_TypeInfo + 0xb8);
  uVar14 = *(undefined8 *)(lVar12 + 0x68);
  uVar9 = *(undefined8 *)(lVar12 + 0x60);
  uVar16 = *(undefined8 *)(lVar12 + 0x78);
  uVar15 = *(undefined8 *)(lVar12 + 0x70);
  uVar18 = *(undefined8 *)(lVar12 + 0x48);
  uVar17 = *(undefined8 *)(lVar12 + 0x40);
  uVar20 = *(undefined8 *)(lVar12 + 0x58);
  uVar19 = *(undefined8 *)(lVar12 + 0x50);
  *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xcc) = uVar16;
  *(undefined8 *)(param_1 + 0xc4) = uVar15;
  *(undefined8 *)(param_1 + 0xbc) = uVar14;
  *(undefined8 *)(param_1 + 0xb4) = uVar9;
  *(undefined8 *)(param_1 + 0xac) = uVar20;
  *(undefined8 *)(param_1 + 0xa4) = uVar19;
  *(undefined8 *)(param_1 + 0x9c) = uVar18;
  *(undefined8 *)(param_1 + 0x94) = uVar17;
  FUN_017b46ec(param_1,0);
  *(byte *)(param_1 + 0x58) = param_3 & 1;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar2 = StringLiteral_11347;
  uVar8 = FUN_0268b4e0(param_2,0,0);
  if ((uVar8 & 1) != 0) {
    uVar9 = FUN_0267c994(*(undefined8 *)
                          System_Collections_ObjectModel_ReadOnlyCollection<Vector4>_TypeInfo,0);
    param_2 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (param_2 == 0) goto LAB_019a924c;
    FUN_0267d648(param_2,uVar9,0);
  }
  lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar12 != 0) {
    FUN_0267d6d8(lVar12,param_2,0);
    *(long *)(param_1 + 0x50) = lVar12;
    lVar12 = FUN_0268a8a8(3,0);
    if (lVar12 != 0) {
      FUN_010e58e8(lVar12,&local_48,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__);
      puVar5 = Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__;
      puVar4 = Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__;
      puVar2 = PTR_DAT_033f43d8;
      if (local_48 != 0) {
        uVar9 = FUN_02665318(local_48,0);
        *(undefined8 *)(param_1 + 0x48) = uVar9;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_0268c1d0(lVar12,0);
        iVar13 = 1;
        if (*(char *)(param_1 + 0x58) != '\0') {
          iVar13 = 2;
        }
        uVar9 = FUN_00da4fb8(*(undefined8 *)puVar4,*(int *)(param_1 + 0x90) * iVar13 * 2);
        *(undefined8 *)(param_1 + 0x10) = uVar9;
        iVar11 = 1;
        iVar13 = iVar11;
        if (*(char *)(param_1 + 0x58) != '\0') {
          iVar13 = 2;
        }
        uVar9 = FUN_00da4fb8(*(undefined8 *)puVar5,*(int *)(param_1 + 0x90) * iVar13 * 2);
        *(undefined8 *)(param_1 + 0x20) = uVar9;
        iVar13 = *(int *)(param_1 + 0x90);
        cVar1 = *(char *)(param_1 + 0x58);
        lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar12 != 0) {
          if (cVar1 != '\0') {
            iVar11 = 2;
          }
          FUN_0269b8c8(lVar12,iVar13 * iVar11 * 2,0x10,0);
          *(long *)(param_1 + 0x60) = lVar12;
          FUN_0269bb30(lVar12,*(undefined8 *)(param_1 + 0x10),0);
          iVar13 = *(int *)(param_1 + 0x90);
          cVar1 = *(char *)(param_1 + 0x58);
          lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar12 != 0) {
            iVar11 = 1;
            if (cVar1 != '\0') {
              iVar11 = 2;
            }
            FUN_0269b8c8(lVar12,iVar13 * iVar11 * 2,0x10,0);
            *(long *)(param_1 + 0x68) = lVar12;
            FUN_0269bb30(lVar12,*(undefined8 *)(param_1 + 0x20),0);
            if (*(long *)(param_1 + 0x50) != 0) {
              FUN_0267f3bc(*(long *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x80),
                           *(undefined8 *)(param_1 + 0x60),0);
              puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u16__;
              if (*(long *)(param_1 + 0x50) != 0) {
                FUN_0267f3bc(*(long *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x84),
                             *(undefined8 *)(param_1 + 0x68),0);
                lVar12 = FUN_00da4fb8(*(undefined8 *)puVar4,5);
                *(long *)(param_1 + 0x78) = lVar12;
                if ((*(long *)(param_1 + 0x48) != 0) &&
                   (uVar7 = FUN_0266e13c(*(long *)(param_1 + 0x48),0,0), lVar12 != 0)) {
                  if (*(int *)(lVar12 + 0x18) == 0) {
LAB_019a9250:
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  *(undefined4 *)(lVar12 + 0x20) = uVar7;
                  lVar12 = *(long *)(param_1 + 0x78);
                  if (lVar12 != 0) {
                    if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_019a9250;
                    iVar13 = 1;
                    if (*(char *)(param_1 + 0x58) != '\0') {
                      iVar13 = 2;
                    }
                    *(int *)(lVar12 + 0x24) = iVar13 * *(int *)(param_1 + 0x90);
                    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                    if (lVar10 != 0) {
                      FUN_0269baa8(lVar10,1,*(int *)(lVar12 + 0x18) << 2,0x100,0);
                      *(long *)(param_1 + 0x70) = lVar10;
                      FUN_0269bb30(lVar10,*(undefined8 *)(param_1 + 0x78),0);
                      *(undefined1 *)(param_1 + 0x18) = 1;
                      *(undefined1 *)(param_1 + 0x28) = 1;
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


