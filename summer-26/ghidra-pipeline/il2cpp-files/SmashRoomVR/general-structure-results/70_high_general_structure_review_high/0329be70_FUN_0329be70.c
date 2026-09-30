/*
FUNCTION_NAME: FUN_0329be70
ENTRY_POINT: 0329be70
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_0329be70(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  if ((DAT_03ff57d9 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d83d10);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_850D7367E4FB0766E2CBC3ACF5AB42B4E98348E58E5A789845D4FCCDB63D2AEE
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_992F16C986809AB68C7466CC3EC6F12B2506A962EA539753E5D84A2FB7FF8A24
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_9A65C09A11757751BFED67A414E00B188DC4C7757FCB6CBD33A916DDE4A3D925
                      );
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_PoseDetection_TransformFeatureStateCollection_<>c_<RegisterConfig>b__2_1__
                      );
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_PoseDetection_TransformFeatureStateCollection_<>c__DisplayClass2_0_<RegisterConfig>b__0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d86290);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_9ACEFCC0C950280B64AB9E045E38C34ABF71EC70A0DC61B9C621C6BFB4F78047
                      );
    DAT_03ff57d9 = 1;
  }
  puVar4 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
  if (*(char *)(param_1 + 0x90) == '\0') {
    lVar9 = *(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar9 = *(long *)puVar4;
    }
    if (*(char *)(*(long *)(lVar9 + 0xb8) + 0x180) == '\0') {
      return;
    }
    FUN_0329b9ac(param_1);
  }
  puVar4 = 
  Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
  ;
  iVar8 = *(int *)(param_1 + 0x70);
  if (*(int *)(*(long *)
                Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  iVar8 = FUN_0322c320(iVar8 != 1,0);
  bVar7 = FUN_0322fef4(*(undefined4 *)(param_1 + 0x70),0);
  bVar7 = bVar7 & 1;
  if ((((*(byte *)(param_1 + 0x98) != bVar7) || (*(char *)(param_1 + 0x99) == '\0')) ||
      (iVar8 != *(int *)(param_1 + 0x9c))) ||
     (bVar2 = *(byte *)(param_1 + 0x91), bVar2 != *(byte *)(param_1 + 0x92))) {
    iVar1 = *(int *)(param_1 + 0x94);
    if (iVar1 == 1) {
      if (bVar7 == 0) {
        bVar6 = false;
      }
      else {
        bVar6 = *(int *)(param_1 + 0x70) == 1;
      }
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x20),bVar6,0);
      if (bVar7 == 0) {
        bVar6 = false;
      }
      else {
        bVar6 = *(int *)(param_1 + 0x70) == 2;
      }
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x28),bVar6,0);
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x30),0,0);
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x38),0,0);
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x40),0,0);
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x48),0,0);
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x50),0,0);
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x58),0,0);
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x60),0,0);
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x68),0,0);
      if (*(int *)(param_1 + 0x70) == 1) {
        lVar9 = *(long *)(param_1 + 0x20);
      }
      else {
        lVar9 = *(long *)(param_1 + 0x28);
      }
      if (lVar9 == 0) goto LAB_0329c914;
      uVar10 = FUN_01ed712c(lVar9,*(undefined8 *)PTR_DAT_03d83d10);
      *(undefined8 *)(param_1 + 0x80) = uVar10;
      thunk_FUN_01b4f09c();
      lVar12 = 0x28;
      bVar6 = *(int *)(param_1 + 0x70) == 1;
      lVar9 = 0x20;
    }
    else if (iVar1 == 3) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x20),0,0);
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x28),0,0);
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x30),0,0);
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x38),0,0);
      bVar6 = false;
      if (bVar7 != 0) {
        bVar6 = *(int *)(param_1 + 0x70) == 1;
      }
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x40),bVar6,0);
      if (bVar7 == 0) {
        bVar6 = false;
      }
      else {
        bVar6 = *(int *)(param_1 + 0x70) == 2;
      }
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x48),bVar6,0);
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x50),0,0);
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x58),0,0);
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x60),0,0);
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x68),0,0);
      if (*(int *)(param_1 + 0x70) == 1) {
        lVar9 = *(long *)(param_1 + 0x40);
      }
      else {
        lVar9 = *(long *)(param_1 + 0x48);
      }
      if (lVar9 == 0) goto LAB_0329c914;
      uVar10 = FUN_01ed712c(lVar9,*(undefined8 *)PTR_DAT_03d83d10);
      *(undefined8 *)(param_1 + 0x80) = uVar10;
      thunk_FUN_01b4f09c();
      lVar12 = 0x48;
      bVar6 = *(int *)(param_1 + 0x70) == 1;
      lVar9 = 0x40;
    }
    else if (iVar1 == 2) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x20),0,0);
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x28),0,0);
      bVar6 = false;
      if (bVar7 != 0) {
        bVar6 = *(int *)(param_1 + 0x70) == 1;
      }
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x30),bVar6,0);
      if (bVar7 == 0) {
        bVar6 = false;
      }
      else {
        bVar6 = *(int *)(param_1 + 0x70) == 2;
      }
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x38),bVar6,0);
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x40),0,0);
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x48),0,0);
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x50),0,0);
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x58),0,0);
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x60),0,0);
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x68),0,0);
      if (*(int *)(param_1 + 0x70) == 1) {
        lVar9 = *(long *)(param_1 + 0x30);
      }
      else {
        lVar9 = *(long *)(param_1 + 0x38);
      }
      if (lVar9 == 0) goto LAB_0329c914;
      uVar10 = FUN_01ed712c(lVar9,*(undefined8 *)PTR_DAT_03d83d10);
      *(undefined8 *)(param_1 + 0x80) = uVar10;
      thunk_FUN_01b4f09c();
      lVar12 = 0x38;
      bVar6 = *(int *)(param_1 + 0x70) == 1;
      lVar9 = 0x30;
    }
    else {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x20),0,0);
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x28),0,0);
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x30),0,0);
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x38),0,0);
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x40),0,0);
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_0329c914;
      FUN_0391fb70(*(long *)(param_1 + 0x48),0,0);
      lVar9 = *(long *)(param_1 + 0x50);
      if (iVar1 == 4) {
        if (bVar7 == 0) {
          bVar6 = false;
        }
        else {
          bVar6 = *(int *)(param_1 + 0x70) == 1;
        }
        if (lVar9 == 0) goto LAB_0329c914;
        FUN_0391fb70(lVar9,bVar6,0);
        if (bVar7 == 0) {
          bVar6 = false;
        }
        else {
          bVar6 = *(int *)(param_1 + 0x70) == 2;
        }
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_0329c914;
        FUN_0391fb70(*(long *)(param_1 + 0x58),bVar6,0);
        if (*(long *)(param_1 + 0x60) == 0) goto LAB_0329c914;
        FUN_0391fb70(*(long *)(param_1 + 0x60),0,0);
        if (*(long *)(param_1 + 0x68) == 0) goto LAB_0329c914;
        FUN_0391fb70(*(long *)(param_1 + 0x68),0,0);
        if (*(int *)(param_1 + 0x70) == 1) {
          lVar9 = *(long *)(param_1 + 0x50);
        }
        else {
          lVar9 = *(long *)(param_1 + 0x58);
        }
        if (lVar9 == 0) goto LAB_0329c914;
        uVar10 = FUN_01ed712c(lVar9,*(undefined8 *)PTR_DAT_03d83d10);
        *(undefined8 *)(param_1 + 0x80) = uVar10;
        thunk_FUN_01b4f09c();
        lVar12 = 0x58;
        bVar6 = *(int *)(param_1 + 0x70) == 1;
        lVar9 = 0x50;
      }
      else {
        if (lVar9 == 0) goto LAB_0329c914;
        FUN_0391fb70(lVar9,0,0);
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_0329c914;
        FUN_0391fb70(*(long *)(param_1 + 0x58),0,0);
        bVar6 = false;
        if (bVar7 != 0) {
          bVar6 = *(int *)(param_1 + 0x70) == 1;
        }
        if (*(long *)(param_1 + 0x60) == 0) goto LAB_0329c914;
        FUN_0391fb70(*(long *)(param_1 + 0x60),bVar6,0);
        if (bVar7 == 0) {
          bVar6 = false;
        }
        else {
          bVar6 = *(int *)(param_1 + 0x70) == 2;
        }
        if (*(long *)(param_1 + 0x68) == 0) goto LAB_0329c914;
        FUN_0391fb70(*(long *)(param_1 + 0x68),bVar6,0);
        if (*(int *)(param_1 + 0x70) == 1) {
          lVar9 = *(long *)(param_1 + 0x60);
        }
        else {
          lVar9 = *(long *)(param_1 + 0x68);
        }
        if (lVar9 == 0) goto LAB_0329c914;
        uVar10 = FUN_01ed712c(lVar9,*(undefined8 *)PTR_DAT_03d83d10);
        *(undefined8 *)(param_1 + 0x80) = uVar10;
        thunk_FUN_01b4f09c();
        lVar12 = 0x68;
        bVar6 = *(int *)(param_1 + 0x70) == 1;
        lVar9 = 0x60;
      }
    }
    if (!bVar6) {
      lVar9 = lVar12;
    }
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + lVar9);
    thunk_FUN_01b4f09c();
    bVar2 = *(byte *)(param_1 + 0x91);
    *(byte *)(param_1 + 0x98) = bVar7;
    *(undefined1 *)(param_1 + 0x99) = 1;
    *(int *)(param_1 + 0x9c) = iVar8;
    *(byte *)(param_1 + 0x92) = bVar2;
  }
  puVar5 = 
  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__;
  puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  switch(*(undefined4 *)(param_1 + 0x74)) {
  case 1:
    bVar6 = iVar8 != 2;
    break;
  case 2:
    bVar6 = iVar8 == 1;
    break;
  case 3:
    bVar6 = iVar8 == 2;
    break;
  case 4:
    bVar6 = iVar8 == 0;
    break;
  default:
    bVar6 = (bVar2 & bVar7) != 0;
    goto LAB_0329c66c;
  }
  bVar6 = (bool)(bVar6 & (bVar2 & bVar7) != 0);
LAB_0329c66c:
  if (*(char *)(param_1 + 0x78) == '\0') {
    if (*(int *)(*(long *)
                  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar11 = FUN_03253b94(0);
    if ((uVar11 & 1) != 0) {
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      bVar7 = FUN_03253c64(0);
      bVar6 = (bool)(bVar6 & (bVar7 ^ 1));
    }
  }
  uVar10 = *(undefined8 *)(param_1 + 0x88);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar11 = FUN_0391f968(uVar10,0,0);
  if ((uVar11 & 1) != 0) {
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_0329c914;
    FUN_0391fb70(*(long *)(param_1 + 0x88),bVar6,0);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x80);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar11 = FUN_0391f968(uVar10,0,0);
  if ((uVar11 & 1) == 0) {
    return;
  }
  lVar9 = *(long *)(param_1 + 0x80);
  uVar13 = *(undefined4 *)(param_1 + 0x70);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar11 = FUN_0322ddf4(1,uVar13,0);
  if (lVar9 != 0) {
    uVar13 = 0x3f800000;
    if ((uVar11 & 1) == 0) {
      uVar13 = 0;
    }
    FUN_038e6720(uVar13,lVar9,
                 *(undefined8 *)
                  Field_<PrivateImplementationDetails>_992F16C986809AB68C7466CC3EC6F12B2506A962EA539753E5D84A2FB7FF8A24
                 ,0);
    lVar9 = *(long *)(param_1 + 0x80);
    uVar13 = *(undefined4 *)(param_1 + 0x70);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar11 = FUN_0322ddf4(2,uVar13,0);
    if (lVar9 != 0) {
      uVar13 = 0x3f800000;
      if ((uVar11 & 1) == 0) {
        uVar13 = 0;
      }
      FUN_038e6720(uVar13,lVar9,
                   *(undefined8 *)
                    Field_<PrivateImplementationDetails>_850D7367E4FB0766E2CBC3ACF5AB42B4E98348E58E5A789845D4FCCDB63D2AEE
                   ,0);
      lVar9 = *(long *)(param_1 + 0x80);
      uVar13 = *(undefined4 *)(param_1 + 0x70);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar11 = FUN_0322ddf4(0x100,uVar13,0);
      if (lVar9 != 0) {
        uVar14 = 0x3f800000;
        uVar15 = 0;
        uVar13 = 0x3f800000;
        if ((uVar11 & 1) == 0) {
          uVar13 = 0;
        }
        FUN_038e6720(uVar13,lVar9,*(undefined8 *)PTR_DAT_03d86290,0);
        lVar9 = *(long *)(param_1 + 0x80);
        uVar13 = *(undefined4 *)(param_1 + 0x70);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_0322f904(1,uVar13,0);
        if (lVar9 != 0) {
          FUN_038e6720(lVar9,*(undefined8 *)
                              Field_<PrivateImplementationDetails>_9ACEFCC0C950280B64AB9E045E38C34ABF71EC70A0DC61B9C621C6BFB4F78047
                       ,0);
          lVar9 = *(long *)(param_1 + 0x80);
          FUN_0322f904(1,*(undefined4 *)(param_1 + 0x70),0);
          if (lVar9 != 0) {
            FUN_038e6720(CONCAT44(uVar15,uVar14),lVar9,
                         *(undefined8 *)
                          Field_<PrivateImplementationDetails>_9A65C09A11757751BFED67A414E00B188DC4C7757FCB6CBD33A916DDE4A3D925
                         ,0);
            lVar9 = *(long *)(param_1 + 0x80);
            FUN_0322f12c(1,*(undefined4 *)(param_1 + 0x70),0);
            if (lVar9 != 0) {
              FUN_038e6720(lVar9,*(undefined8 *)
                                  Method_Oculus_Interaction_PoseDetection_TransformFeatureStateCollection_<>c__DisplayClass2_0_<RegisterConfig>b__0__
                           ,0);
              lVar9 = *(long *)(param_1 + 0x80);
              FUN_0322f12c(4,*(undefined4 *)(param_1 + 0x70),0);
              if (lVar9 != 0) {
                FUN_038e6720(lVar9,*(undefined8 *)
                                    Method_Oculus_Interaction_PoseDetection_TransformFeatureStateCollection_<>c_<RegisterConfig>b__2_1__
                             ,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0329c914:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


