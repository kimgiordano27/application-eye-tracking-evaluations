/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem$$PollNextEvent
ENTRY_POINT: 019dd598
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVR_OpenVR_CVRSystem__PollNextEvent(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  char *pcVar15;
  undefined8 uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  long unaff_x19;
  long unaff_x20;
  long *plVar23;
  long *plVar24;
  undefined8 uVar25;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x570));
  thunk_FUN_00d48444(PTR_DAT_033ef210);
  thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<char>__ctor__);
  thunk_FUN_00d48444(Oculus_Platform_Models_AchievementProgressList_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_12935);
  thunk_FUN_00d48444(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
  *(undefined1 *)(unaff_x20 + 0x7af) = 1;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  uStack0000000000000004 = 0;
  if (*(char *)(unaff_x19 + 0x68) == '\0') {
    return;
  }
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    uVar12 = FUN_00bfbd30(*(long *)(unaff_x19 + 0x60),*(undefined8 *)PTR_DAT_033ecbe0);
    puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_laneq_f32__;
    plVar23 = *(long **)(unaff_x19 + 0x48);
    if (plVar23 != (long *)0x0) {
      lVar19 = *plVar23;
      uVar4 = *(undefined4 *)(unaff_x19 + 0x5c);
      uVar21 = (ulong)*(ushort *)(lVar19 + 0x12a);
                    /* try { // try from 019dd630 to 01add637 has its CatchHandler @ 019dd800 */
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
                    /* try { // try from 019dd640 to 01add647 has its CatchHandler @ 019dd7fc */
          if (*(long *)(piVar22 + -2) ==
              *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_laneq_f32__) {
            puVar13 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_019dd670;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar13 = (undefined8 *)
                FUN_00d59724(plVar23,*(long *)
                                      Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_laneq_f32__,0);
LAB_019dd670:
      puVar10 = Method_System_IO_Enumeration_FileSystemEnumerableFactory_<>c_<UserFiles>b__3_0__;
      puVar9 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_Pointer>__;
                    /* try { // try from 019dd680 to 01add6ab has its CatchHandler @ 019dd804 */
      uVar21 = (*(code *)*puVar13)(plVar23,uVar4,uVar12,&stack0x00000010,puVar13[1]);
      puVar7 = PTR_DAT_033ef210;
      if ((uVar21 & 1) == 0) {
        in_stack_00000018._4_4_ = *(undefined4 *)(unaff_x19 + 0x5c);
                    /* try { // try from 019dd6ec to 01add717 has its CatchHandler @ 019dd7f4 */
        plVar23 = *(long **)(unaff_x19 + 0x40);
        uVar25 = thunk_FUN_00d61fa0(*(undefined8 *)puVar10,(long)&stack0x00000018 + 4);
        uVar16 = thunk_FUN_00d61fa0(*(undefined8 *)puVar9);
        uVar25 = FUN_01600b5c(*(undefined8 *)puVar7,uVar25,uVar16,0);
        if (plVar23 == (long *)0x0) goto LAB_019ddb04;
        (**(code **)(*plVar23 + 0x558))(plVar23,uVar25,*(undefined8 *)(*plVar23 + 0x560));
        bVar11 = 0;
      }
      else {
        plVar23 = *(long **)(unaff_x19 + 0x48);
        if (plVar23 == (long *)0x0) goto LAB_019ddb04;
        lVar20 = *plVar23;
        uVar4 = *(undefined4 *)(unaff_x19 + 0x5c);
        lVar19 = *(long *)puVar6;
                    /* try { // try from 019dd6b0 to 01add6b7 has its CatchHandler @ 019dd7f8 */
        uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar19) {
              puVar13 = (undefined8 *)(lVar20 + (long)(*piVar22 + 2) * 0x10 + 0x138);
              goto LAB_019dd768;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar13 = (undefined8 *)FUN_00d59724(plVar23,lVar19,2);
LAB_019dd768:
        in_stack_00000008 = (*(code *)*puVar13)(plVar23,uVar4,uVar12,puVar13[1]);
        lVar19 = *(long *)(unaff_x19 + 0x60);
        if (lVar19 == 0) goto LAB_019ddb04;
        plVar23 = *(long **)(unaff_x19 + 0x48);
        uVar4 = *(undefined4 *)(unaff_x19 + 0x5c);
        lVar20 = **(long **)(*(long *)(*(long *)Method_System_UriBuilder_ToString__ + 0x20) + 0xc0);
        if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
          lVar20 = FUN_00d5941c();
        }
        puVar14 = (undefined4 *)thunk_FUN_00d32ed4(lVar19,*(undefined8 *)(lVar20 + 0x80));
        lVar19 = *(long *)(unaff_x19 + 0x60);
        if (lVar19 == 0) goto LAB_019ddb04;
        uVar5 = *puVar14;
        lVar20 = **(long **)(*(long *)(*(long *)Unity_Burst_BurstCompiler_<>c_TypeInfo + 0x20) +
                            0xc0);
        if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
          lVar20 = FUN_00d5941c();
        }
        puVar13 = (undefined8 *)thunk_FUN_00d32ed4(lVar19,*(long *)(lVar20 + 0x80) + 0x40);
        puVar7 = Method_System_Collections_Generic_Dictionary<Material,_List<GameObject>>_get_Item__
        ;
        if (plVar23 == (long *)0x0) goto LAB_019ddb04;
        lVar20 = *plVar23;
        lVar19 = *(long *)puVar6;
        uVar25 = *puVar13;
        uVar21 = (ulong)*(ushort *)(lVar20 + 0x12a);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar19) {
              puVar13 = (undefined8 *)(lVar20 + (long)(*piVar22 + 1) * 0x10 + 0x138);
              goto LAB_019dd864;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        puVar13 = (undefined8 *)FUN_00d59724(plVar23,lVar19,1);
LAB_019dd864:
        bVar11 = (*(code *)*puVar13)(plVar23,uVar4,uVar12,uVar5,uVar25,puVar13[1]);
        lVar19 = *(long *)(*(long *)puVar7 + 0x20);
        if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
          lVar19 = FUN_00d5941c(lVar19);
        }
        lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
        if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
          lVar19 = FUN_00d5941c();
        }
        puVar7 = Oculus_Platform_Models_AchievementProgressList_TypeInfo;
        puVar6 = PTR_DAT_033ea8a0;
        pcVar15 = (char *)thunk_FUN_00d32ed4(&stack0x00000008,*(undefined8 *)(lVar19 + 0x80));
        puVar8 = 
        Method_System_Collections_Generic_Dictionary_Enumerator<MRUKAnchor,_GameObject>_Dispose__;
        if (*pcVar15 == '\0') {
          lVar19 = *(long *)Method_Sirenix_Serialization_Serializer<char>__ctor__;
        }
        else {
          FUN_01347408(&stack0x00000008,(long)&stack0x00000018 + 4,*(undefined8 *)StringLiteral_3926
                      );
          uStack0000000000000004 = in_stack_00000018._4_4_;
          lVar19 = FUN_017841b4(&stack0x00000004,*(undefined8 *)puVar8,0);
        }
        plVar24 = *(long **)(unaff_x19 + 0x40);
        plVar23 = (long *)FUN_00da4fb8(*(undefined8 *)puVar6,5);
        in_stack_00000018._4_4_ = *(undefined4 *)(unaff_x19 + 0x5c);
        uVar25 = thunk_FUN_00d61fa0(*(undefined8 *)puVar10,(long)&stack0x00000018 + 4);
        uVar16 = thunk_FUN_00d61fa0(*(undefined8 *)puVar9);
        lVar20 = FUN_01600b5c(*(undefined8 *)puVar7,uVar25,uVar16,0);
        if (plVar23 == (long *)0x0) goto LAB_019ddb04;
        if ((lVar20 != 0) &&
           (lVar17 = thunk_FUN_00d6225c(lVar20,*(undefined8 *)(*plVar23 + 0x40)), lVar17 == 0)) {
LAB_019ddb0c:
          uVar25 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar25,0);
        }
        lVar17 = in_stack_00000010;
        uVar18 = *(uint *)(plVar23 + 3);
        if (uVar18 == 0) {
LAB_019ddb08:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar23[4] = lVar20;
        if (in_stack_00000010 != 0) {
          lVar20 = thunk_FUN_00d6225c(in_stack_00000010,*(undefined8 *)(*plVar23 + 0x40));
          if (lVar20 == 0) goto LAB_019ddb0c;
          uVar18 = *(uint *)(plVar23 + 3);
        }
        puVar6 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__;
        if (uVar18 < 2) goto LAB_019ddb08;
        plVar23[5] = lVar17;
        lVar20 = *(long *)puVar6;
        if (lVar20 != 0) {
          lVar20 = thunk_FUN_00d6225c(lVar20,*(undefined8 *)(*plVar23 + 0x40));
          if (lVar20 == 0) goto LAB_019ddb0c;
          uVar18 = *(uint *)(plVar23 + 3);
        }
        if (uVar18 < 3) goto LAB_019ddb08;
        plVar23[6] = *(long *)puVar6;
        if (lVar19 != 0) {
          lVar20 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar23 + 0x40));
          if (lVar20 == 0) goto LAB_019ddb0c;
          uVar18 = *(uint *)(plVar23 + 3);
        }
        puVar6 = StringLiteral_12935;
        if (uVar18 < 4) goto LAB_019ddb08;
        plVar23[7] = lVar19;
        lVar19 = *(long *)puVar6;
        if (lVar19 != 0) {
          lVar19 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar23 + 0x40));
          if (lVar19 == 0) goto LAB_019ddb0c;
          uVar18 = *(uint *)(plVar23 + 3);
        }
        if (uVar18 < 5) goto LAB_019ddb08;
        plVar23[8] = *(long *)puVar6;
        uVar25 = FUN_01600844(plVar23,0);
        if (plVar24 == (long *)0x0) goto LAB_019ddb04;
        (**(code **)(*plVar24 + 0x558))(plVar24,uVar25,*(undefined8 *)(*plVar24 + 0x560));
      }
      bVar11 = bVar11 & 1;
      if (bVar11 != *(byte *)(unaff_x19 + 0x58)) {
        if (bVar11 == 0) {
          puVar14 = (undefined4 *)(unaff_x19 + 0x20);
          puVar1 = (undefined4 *)(unaff_x19 + 0x24);
          puVar2 = (undefined4 *)(unaff_x19 + 0x28);
          puVar3 = (undefined4 *)(unaff_x19 + 0x2c);
        }
        else {
          puVar14 = (undefined4 *)(unaff_x19 + 0x30);
          puVar1 = (undefined4 *)(unaff_x19 + 0x34);
          puVar2 = (undefined4 *)(unaff_x19 + 0x38);
          puVar3 = (undefined4 *)(unaff_x19 + 0x3c);
        }
        if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_019ddb04;
        FUN_0267d974(*puVar14,*puVar1,*puVar2,*puVar3,*(long *)(unaff_x19 + 0x50),0);
        *(byte *)(unaff_x19 + 0x58) = bVar11;
      }
      return;
    }
  }
LAB_019ddb04:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


