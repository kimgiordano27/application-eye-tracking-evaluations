/*
FUNCTION_NAME: Oculus.Platform.CAPI$$IntPtrToByteArray
ENTRY_POINT: 055ad5f8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 165
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 Oculus_Platform_CAPI__IntPtrToByteArray(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x21;
  long lVar12;
  long *unaff_x23;
  int unaff_w26;
  long *unaff_x27;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
code_r0x055ad5f8:
  FUN_055b0cf8();
LAB_055ad674:
  do {
    uVar5 = FUN_05574ae8();
    if ((uVar5 & 1) == 0) {
      thunk_FUN_02dfd288(System_Action<OVRColocationSession_Data>_TypeInfo);
      uVar7 = FUN_05574a94();
      uVar8 = thunk_FUN_02dfd288(System_Action<OVRHand_MicrogestureType>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar7,uVar8);
    }
    if (unaff_x27 == (long *)0x0) {
LAB_055ad6c8:
      FUN_055aeed0();
    }
    else {
      uVar5 = (**(code **)(*unaff_x27 + 0x1a8))();
      if ((uVar5 & 1) == 0) goto LAB_055ad6c8;
      FUN_055aeab8();
    }
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_069ff850) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_055ad74c;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c();
LAB_055ad74c:
    (*(code *)*puVar6)();
LAB_055ad760:
    do {
      uVar5 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar5 & 1) == 0) {
        FUN_055b578c();
LAB_055ada64:
        FUN_055b5560();
        return in_stack_00000018;
      }
      iVar2 = (**(code **)(*unaff_x19 + 0x188))();
      if (iVar2 != 4) {
        if (iVar2 != 5) {
          if (iVar2 != 0xd) {
            FUN_02979e58();
            uVar3 = (**(code **)(*unaff_x19 + 0x188))();
            in_stack_00000030 = thunk_FUN_02dfd288(System_Drawing_Point_var);
            in_stack_00000038 = 0xffffffffffffffff;
            in_stack_00000040 = uVar3;
            uVar7 = FUN_0551e574(&stack0x00000030,0);
            uVar8 = thunk_FUN_02dfd288(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
            FUN_05362cb4(uVar8,uVar7,0);
            uVar7 = FUN_05574a94();
            uVar8 = thunk_FUN_02dfd288(System_Action<OVRHand_MicrogestureType>_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_02d96724(uVar7,uVar8);
          }
          goto LAB_055ada64;
        }
        goto LAB_055ad760;
      }
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      uVar5 = FUN_055afb58();
    } while ((uVar5 & 1) != 0);
    if (unaff_w26 != 0x1c) {
      if (unaff_w26 == 0x1a) {
        uVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        lVar9 = unaff_x19[9];
        lVar12 = unaff_x19[0xc];
        uVar8 = FUN_055712a0();
        if (*(int *)(*(long *)UnityEngine_RectTransform_var + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar5 = FUN_0558d190(uVar7,(int)lVar9,lVar12,uVar8,&stack0x00000078,0);
        if ((uVar5 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_0547e2f8(0);
                    /* try { // try from 055ad634 to 056ad643 has its CatchHandler @ 055ad644 */
          FUN_055b0cf8();
        }
        else {
          in_stack_00000030 = in_stack_00000078;
          thunk_FUN_02dd2d7c(*(undefined8 *)PTR_DAT_069fc268,&stack0x00000030);
        }
      }
      else {
        lVar9 = *in_stack_00000020;
        if ((lVar9 == 0) || (*(char *)(lVar9 + 0x12) == '\0')) break;
        if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        plVar10 = *(long **)(*(long *)(unaff_x21 + 0x20) + 0x40);
        if (plVar10 == (long *)0x0) {
Oculus_Platform_CAPI_ovrKeyValuePair___ctor:
          lVar12 = 0;
        }
        else {
          bVar1 = *(byte *)(*(long *)System_Reflection_RuntimeAssembly_var + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Reflection_RuntimeAssembly_var))
          goto Oculus_Platform_CAPI_ovrKeyValuePair___ctor;
          lVar12 = plVar10[6];
        }
        uVar8 = *(undefined8 *)(lVar9 + 0x18);
        uVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (*(int *)(*(long *)UnityEngine_XR_Interaction_Toolkit_UI_TrackedDeviceModel_var + 0xe4)
            == 0) {
          thunk_FUN_02df485c();
        }
        FUN_05590d40(uVar8,lVar12,uVar7,0,0);
      }
      goto LAB_055ad674;
    }
    uVar7 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    lVar9 = unaff_x19[0xc];
    uVar8 = FUN_055712a0();
    if (*(int *)(*(long *)UnityEngine_RectTransform_var + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_0558d8a0(uVar7,lVar9,uVar8,&stack0x00000068,0);
    if ((uVar5 & 1) == 0) {
                    /* catch() { ... } // from try @ 055ad5b4 with catch @ 055ad644
                       catch() { ... } // from try @ 055ad634 with catch @ 055ad644 */
                    /* try { // try from 055ad648 to 056ad64b has its CatchHandler @ 055ad654 */
                    /* try { // try from 055ad64c to 056ad657 has its CatchHandler @ 055ad260 */
      if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
                    /* catch() { ... } // from try @ 055ad648 with catch @ 055ad654 */
      FUN_0547e2f8(0);
      FUN_055b0cf8();
    }
    else {
      in_stack_00000038 = in_stack_00000070;
      in_stack_00000030 = in_stack_00000068;
      thunk_FUN_02dd2d7c(*(undefined8 *)PTR_DAT_06a0ac28,&stack0x00000030);
    }
  } while( true );
  if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_0547e2f8(0);
  goto code_r0x055ad5f8;
}


