/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetRequestID
ENTRY_POINT: 035f43dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Platform_CAPI__ovr_Message_GetRequestID(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined4 *puVar16;
  int iVar17;
  long *unaff_x20;
  long *plVar18;
  long unaff_x21;
  long *plVar19;
  long unaff_x26;
  uint uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  undefined4 uStack000000000000001c;
  
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_88__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_89__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_9__);
  *(undefined1 *)(unaff_x21 + 0x84e) = 1;
  _uStack0000000000000010 = 0;
  in_stack_00000018 = 4;
  uStack000000000000001c = 0x3c0;
  FUN_04032f6c(&stack0x0000001c,&stack0x00000018,0);
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  uVar9 = FUN_04039d34(0);
  if ((uVar9 & 1) != 0) {
    uVar7 = FUN_04032f44(0);
    _uStack0000000000000010 = CONCAT44(uVar7,uStack0000000000000010);
    uVar10 = FUN_035683d0((long)&stack0x00000010 + 4,0);
    uVar10 = FUN_03405678(*(undefined8 *)
                           Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_87__,uVar10,
                          0);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
    }
    FUN_0403ea2c(uVar10,0);
    uVar10 = FUN_035683d0(&stack0x0000001c,0);
    uVar11 = FUN_035683d0(&stack0x00000018,0);
    uVar10 = FUN_0340eee0(*(undefined8 *)
                           Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_9__,uVar10,
                          *(undefined8 *)
                           Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_89__,uVar11,
                          0);
    FUN_0403ea2c(uVar10,0);
  }
  puVar2 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_83__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar3 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_73__;
  lVar12 = FUN_023aa59c(*(undefined8 *)puVar2);
  uVar9 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (lVar12,0,0);
  if ((uVar9 & 1) == 0) {
    if (lVar12 == 0) goto LAB_035f4954;
    uVar10 = FUN_04070398(lVar12,0);
    lVar12 = *(long *)puVar3;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar12);
      lVar12 = *(long *)puVar3;
    }
    puVar14 = (undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x30);
    *puVar14 = uVar10;
    thunk_FUN_01f51358(puVar14,uVar10);
  }
  else {
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ed64(*(undefined8 *)Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_86__,0)
    ;
  }
  puVar4 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_85__;
  puVar2 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_84__;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = FUN_035f583c();
  lVar12 = FUN_01f08890(*(undefined8 *)puVar2,uVar7);
  plVar18 = (long *)(unaff_x26 + 0x78);
  *plVar18 = lVar12;
  thunk_FUN_01f51358(plVar18,lVar12);
  uVar10 = FUN_0407370c(*(undefined8 *)puVar4,0);
  puVar14 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
  *puVar14 = uVar10;
  thunk_FUN_01f51358(puVar14,uVar10);
  uVar10 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar2 = Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__;
  uVar9 = FUN_04073094(uVar10,0,0);
  if ((uVar9 & 1) != 0) {
    lVar12 = *(long *)puVar3;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar12 = *(long *)puVar3;
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    FUN_040770d0(uVar10,0);
  }
  uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  UnityEngine_UIElements_UIR_Implementation_RenderEvents__UpdateLocalFlipsWinding
            (uVar10,*(undefined8 *)puVar4,0);
  lVar12 = *(long *)puVar3;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar12 = *(long *)puVar3;
  }
  puVar5 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_88__;
  puVar4 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_82__;
  puVar14 = (undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x28);
  *puVar14 = uVar10;
  thunk_FUN_01f51358(puVar14,uVar10);
  puVar1 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
  iVar17 = 0;
  while( true ) {
    _uStack0000000000000010 = CONCAT44(uStack0000000000000014,iVar17);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar8 = FUN_035f583c();
    if (iVar8 <= iVar17) break;
    uVar10 = FUN_035683d0(&stack0x00000010,0);
    uVar10 = FUN_03405678(*(undefined8 *)puVar5,uVar10,0);
    lVar12 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    UnityEngine_UIElements_UIR_Implementation_RenderEvents__UpdateLocalFlipsWinding(lVar12,uVar10,0)
    ;
    if (lVar12 == 0) goto LAB_035f4954;
    lVar13 = FUN_04073258(lVar12,0);
    lVar15 = *(long *)puVar3;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar15);
      lVar15 = *(long *)puVar3;
    }
    lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x28);
    if ((lVar15 == 0) || (uVar10 = FUN_04073258(lVar15,0), lVar13 == 0)) goto LAB_035f4954;
    FUN_0407db5c(lVar13,uVar10,0);
    lVar13 = FUN_04073258(lVar12,0);
    if (DAT_0482ee12 == '\0') {
      thunk_FUN_01efb3a4(puVar1);
      DAT_0482ee12 = '\x01';
    }
    if (lVar13 == 0) goto LAB_035f4954;
    puVar16 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
    FUN_0407d468(*puVar16,puVar16[1],puVar16[2],lVar13,0);
    FUN_04077338(lVar12,4,0);
    plVar19 = (long *)*plVar18;
    uVar6 = uStack0000000000000010;
    lVar13 = (long)(int)uStack0000000000000010;
    lVar12 = FUN_023360e0(lVar12,*(undefined8 *)puVar4);
    if (plVar19 == (long *)0x0) goto LAB_035f4954;
    if ((lVar12 != 0) &&
       (lVar15 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar19 + 0x40)), lVar15 == 0)) {
      uVar10 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar10,0);
    }
    if (*(uint *)(plVar19 + 3) <= uVar6) {
LAB_035f4958:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    plVar19[lVar13 + 4] = lVar12;
    thunk_FUN_01f51358(plVar19 + lVar13 + 4,lVar12);
    lVar12 = *plVar18;
    if (lVar12 == 0) goto LAB_035f4954;
    if (*(uint *)(lVar12 + 0x18) <= uStack0000000000000010) goto LAB_035f4958;
    lVar13 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28);
    if (lVar13 == 0) goto LAB_035f4954;
    lVar12 = *(long *)(lVar12 + (long)(int)uStack0000000000000010 * 8 + 0x20);
    uVar10 = FUN_04073258(lVar13,0);
    if (lVar12 == 0) goto LAB_035f4954;
    puVar14 = (undefined8 *)(lVar12 + 0x60);
    *puVar14 = uVar10;
    thunk_FUN_01f51358(puVar14,uVar10);
    lVar12 = *plVar18;
    if (lVar12 == 0) goto LAB_035f4954;
    if (*(uint *)(lVar12 + 0x18) <= uStack0000000000000010) goto LAB_035f4958;
    lVar12 = *(long *)(lVar12 + (long)(int)uStack0000000000000010 * 8 + 0x20);
    if (lVar12 == 0) goto LAB_035f4954;
    *(uint *)(lVar12 + 0x20) = uStack0000000000000010;
    FUN_035f590c();
    lVar12 = *plVar18;
    if (lVar12 == 0) goto LAB_035f4954;
    if (*(uint *)(lVar12 + 0x18) <= uStack0000000000000010) goto LAB_035f4958;
    lVar12 = *(long *)(lVar12 + (long)(int)uStack0000000000000010 * 8 + 0x20);
    if (lVar12 == 0) goto LAB_035f4954;
    iVar17 = uStack0000000000000010 + 1;
    *(uint *)(lVar12 + 0x68) = uStack0000000000000010;
  }
  FUN_035f5a34(unaff_x26);
  lVar12 = *(long *)puVar3;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar12 = *(long *)puVar3;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x28);
  if (lVar12 != 0) {
    FUN_04077338(lVar12,4,0);
    *(float *)(unaff_x26 + 0x70) = *(float *)(unaff_x26 + 0x5c) * *(float *)(unaff_x26 + 0x5c);
    return;
  }
LAB_035f4954:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


