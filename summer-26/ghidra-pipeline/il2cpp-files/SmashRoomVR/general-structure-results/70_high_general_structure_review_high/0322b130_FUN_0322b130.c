/*
FUNCTION_NAME: FUN_0322b130
ENTRY_POINT: 0322b130
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_0322b130(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  
  puVar4 = 
  Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
  ;
  if ((DAT_03ff4690 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d83fa0);
    thunk_FUN_01ad9084(PTR_DAT_03d83fa8);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff4690 = 1;
  }
  puVar5 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__;
  lVar10 = *(long *)puVar4;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar10 = *(long *)puVar4;
  }
  lVar10 = *(long *)(lVar10 + 0xb8);
  *(undefined8 *)(lVar10 + 0x14) = 0xffffffff00000000;
  *(undefined4 *)(lVar10 + 0x1c) = 0;
  lVar10 = *(long *)puVar5;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar10 = *(long *)puVar5;
  }
  if (*(int *)(*(long *)(lVar10 + 0xb8) + 0x100) == 2) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_0322b66c();
    FUN_0322ba04();
  }
  puVar6 = PTR_DAT_03d83fa8;
  puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  iVar9 = 0;
  while( true ) {
    lVar10 = *(long *)puVar4;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar10 = *(long *)puVar4;
    }
    lVar14 = *(long *)(lVar10 + 0xb8);
    if (*(long *)(lVar14 + 8) == 0) goto LAB_0322b668;
    iVar1 = *(int *)(*(long *)(lVar14 + 8) + 0x18);
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar10 = *(long *)puVar4;
      lVar14 = *(long *)(lVar10 + 0xb8);
    }
    if (iVar1 <= iVar9) break;
    if ((*(long *)(lVar14 + 8) == 0) ||
       (plVar11 = (long *)FUN_02b59714(*(long *)(lVar14 + 8),iVar9,*(undefined8 *)puVar6),
       plVar11 == (long *)0x0)) goto LAB_0322b668;
    uVar2 = *(uint *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x14);
    uVar7 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
    lVar10 = *(long *)puVar4;
    uVar7 = uVar7 | uVar2;
    *(uint *)(*(long *)(lVar10 + 0xb8) + 0x14) = uVar7;
    uVar2 = *(uint *)(plVar11 + 2);
    if ((uVar2 & uVar7) != 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar10);
      }
      uVar12 = FUN_0322bbe8(0xffffffff,uVar2);
      if ((uVar12 & 1) == 0) {
        lVar10 = plVar11[2];
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar12 = FUN_0322bc50(0xffffffff,(int)lVar10);
        if ((uVar12 & 1) == 0) goto LAB_0322b314;
      }
      lVar14 = *(long *)puVar4;
      lVar10 = plVar11[2];
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar14 = *(long *)puVar4;
      }
      *(int *)(*(long *)(lVar14 + 0xb8) + 0x10) = (int)lVar10;
    }
LAB_0322b314:
    iVar9 = iVar9 + 1;
  }
  iVar9 = *(int *)(lVar14 + 0x10);
  if (iVar9 == 1) {
LAB_0322b348:
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar10 = *(long *)puVar4;
    }
    lVar14 = *(long *)(lVar10 + 0xb8);
    if ((~*(uint *)(lVar14 + 0x14) & 3) == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar10 = *(long *)puVar4;
        lVar14 = *(long *)(lVar10 + 0xb8);
      }
      *(undefined4 *)(lVar14 + 0x10) = 3;
    }
  }
  else {
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar10 = *(long *)puVar4;
      iVar9 = *(int *)(*(long *)(lVar10 + 0xb8) + 0x10);
    }
    if (iVar9 == 2) goto LAB_0322b348;
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar10 = *(long *)puVar4;
  }
  iVar9 = *(int *)(*(long *)(lVar10 + 0xb8) + 0x10);
  if (iVar9 == 0x20) {
LAB_0322b3c8:
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar10 = *(long *)puVar4;
    }
    lVar14 = *(long *)(lVar10 + 0xb8);
    if ((~*(uint *)(lVar14 + 0x14) & 0x60) == 0) {
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar10 = *(long *)puVar4;
        lVar14 = *(long *)(lVar10 + 0xb8);
      }
      *(undefined4 *)(lVar14 + 0x10) = 0x60;
    }
  }
  else {
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar10 = *(long *)puVar4;
      iVar9 = *(int *)(*(long *)(lVar10 + 0xb8) + 0x10);
    }
    if (iVar9 == 0x40) goto LAB_0322b3c8;
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar10 = *(long *)puVar4;
  }
  lVar14 = *(long *)(lVar10 + 0xb8);
  if ((*(uint *)(lVar14 + 0x10) & *(uint *)(lVar14 + 0x14)) == 0) {
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar14 = *(long *)(*(long *)puVar4 + 0xb8);
    }
    *(undefined4 *)(lVar14 + 0x10) = 0;
  }
  lVar10 = *(long *)puVar5;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar10);
    lVar10 = *(long *)puVar5;
  }
  if (*(int *)(*(long *)(lVar10 + 0xb8) + 0x100) == 1) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar12 = FUN_0322a97c();
    lVar10 = *(long *)puVar5;
    uVar12 = uVar12 & 0xffffffff;
  }
  else {
    uVar12 = 0;
  }
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ac7298(lVar10);
  }
  if (DAT_03fed3d9 == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
    DAT_03fed3d9 = '\x01';
  }
  lVar10 = *(long *)puVar5;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar10 = *(long *)puVar5;
  }
  uVar15 = **(undefined8 **)(lVar10 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar3);
  }
  uVar13 = FUN_0391f968(uVar15,0,0);
  if ((uVar13 & 1) != 0) {
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03fed3d9 == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
      DAT_03fed3d9 = '\x01';
    }
    lVar10 = *(long *)puVar5;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar10 = *(long *)puVar5;
    }
    if (**(long **)(lVar10 + 0xb8) == 0) {
LAB_0322b668:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar13 = FUN_03238a70(**(long **)(lVar10 + 0xb8),0);
    if ((uVar13 & 1) != 0) {
      lVar10 = *(long *)puVar5;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar10 = *(long *)puVar5;
      }
      if (*(int *)(*(long *)(lVar10 + 0xb8) + 0x100) == 1) goto LAB_0322b584;
      goto LAB_0322b614;
    }
  }
  if ((uVar12 & 1) != 0) {
LAB_0322b584:
    lVar10 = *(long *)puVar4;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar10 = *(long *)puVar4;
    }
    uVar2 = *(uint *)(*(long *)(lVar10 + 0xb8) + 0x10);
    if (*(int *)(*(long *)
                  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                        );
    }
    uVar8 = FUN_03255bb0(0);
    *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x14) = uVar8;
    iVar9 = FUN_03255af4(0);
    lVar10 = *(long *)puVar4;
    lVar14 = *(long *)(lVar10 + 0xb8);
    *(int *)(lVar14 + 0x10) = iVar9;
    if ((uVar2 & 0x60) == 0) {
      return;
    }
    if (iVar9 != 0) {
      return;
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar14 = *(long *)(*(long *)puVar4 + 0xb8);
    }
    *(uint *)(lVar14 + 0x10) = uVar2;
    return;
  }
  lVar10 = *(long *)puVar5;
LAB_0322b614:
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar10 = *(long *)puVar5;
  }
  if (*(int *)(*(long *)(lVar10 + 0xb8) + 0x100) == 2) {
    lVar10 = *(long *)puVar4;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar10 = *(long *)puVar4;
    }
    *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x10) =
         *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x14);
  }
  return;
}


