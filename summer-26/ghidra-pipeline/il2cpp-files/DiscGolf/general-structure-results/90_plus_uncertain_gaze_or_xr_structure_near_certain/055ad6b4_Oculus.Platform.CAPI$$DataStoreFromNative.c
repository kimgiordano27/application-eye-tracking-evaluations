/*
FUNCTION_NAME: Oculus.Platform.CAPI$$DataStoreFromNative
ENTRY_POINT: 055ad6b4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 Oculus_Platform_CAPI__DataStoreFromNative(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
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
  
code_r0x055ad6b4:
                    /* try { // try from 055ad6c0 to 056ad7a7 has its CatchHandler @ 055ad6c0
                       catch() { ... } // from try @ 055ad6c0 with catch @ 055ad6c0
                       catch() { ... } // from try @ 055ade14 with catch @ 055ad6c0
                       catch() { ... } // from try @ 055aded8 with catch @ 055ad6c0
                       catch() { ... } // from try @ 055adfc0 with catch @ 055ad6c0
                       catch() { ... } // from try @ 055adffc with catch @ 055ad6c0
                       catch() { ... } // from try @ 055ae048 with catch @ 055ad6c0 */
  FUN_055aeab8();
  do {
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar8 = *unaff_x23;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_069ff850) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_055ad74c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02dd004c();
LAB_055ad74c:
    (*(code *)*puVar5)();
LAB_055ad760:
    do {
      uVar10 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar10 & 1) == 0) {
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
            uVar6 = FUN_0551e574(&stack0x00000030,0);
            uVar7 = thunk_FUN_02dfd288(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
            FUN_05362cb4(uVar7,uVar6,0);
            uVar6 = FUN_05574a94();
            uVar7 = thunk_FUN_02dfd288(System_Action<OVRHand_MicrogestureType>_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_02d96724(uVar6,uVar7);
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
      uVar10 = FUN_055afb58();
    } while ((uVar10 & 1) != 0);
    if (unaff_w26 == 0x1c) {
      uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      lVar8 = unaff_x19[0xc];
      uVar7 = FUN_055712a0();
      if (*(int *)(*(long *)UnityEngine_RectTransform_var + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar10 = FUN_0558d8a0(uVar6,lVar8,uVar7,&stack0x00000068,0);
      if ((uVar10 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_0547e2f8(0);
        FUN_055b0cf8();
      }
      else {
        in_stack_00000038 = in_stack_00000070;
        in_stack_00000030 = in_stack_00000068;
        thunk_FUN_02dd2d7c(*(undefined8 *)PTR_DAT_06a0ac28,&stack0x00000030);
      }
    }
    else if (unaff_w26 == 0x1a) {
      uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      lVar8 = unaff_x19[9];
      lVar12 = unaff_x19[0xc];
      uVar7 = FUN_055712a0();
      if (*(int *)(*(long *)UnityEngine_RectTransform_var + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar10 = FUN_0558d190(uVar6,(int)lVar8,lVar12,uVar7,&stack0x00000078,0);
      if ((uVar10 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_0547e2f8(0);
        FUN_055b0cf8();
      }
      else {
        in_stack_00000030 = in_stack_00000078;
        thunk_FUN_02dd2d7c(*(undefined8 *)PTR_DAT_069fc268,&stack0x00000030);
      }
    }
    else {
      lVar8 = *in_stack_00000020;
      if ((lVar8 == 0) || (*(char *)(lVar8 + 0x12) == '\0')) {
        if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_0547e2f8(0);
        FUN_055b0cf8();
      }
      else {
        if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        plVar9 = *(long **)(*(long *)(unaff_x21 + 0x20) + 0x40);
        if (plVar9 == (long *)0x0) {
Oculus_Platform_CAPI_ovrKeyValuePair___ctor:
          lVar12 = 0;
        }
        else {
          bVar1 = *(byte *)(*(long *)System_Reflection_RuntimeAssembly_var + 0x130);
          if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)System_Reflection_RuntimeAssembly_var))
          goto Oculus_Platform_CAPI_ovrKeyValuePair___ctor;
          lVar12 = plVar9[6];
        }
        uVar7 = *(undefined8 *)(lVar8 + 0x18);
        uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (*(int *)(*(long *)UnityEngine_XR_Interaction_Toolkit_UI_TrackedDeviceModel_var + 0xe4)
            == 0) {
          thunk_FUN_02df485c();
        }
        FUN_05590d40(uVar7,lVar12,uVar6,0,0);
      }
    }
    uVar10 = FUN_05574ae8();
    if ((uVar10 & 1) == 0) {
      thunk_FUN_02dfd288(System_Action<OVRColocationSession_Data>_TypeInfo);
      uVar6 = FUN_05574a94();
                    /* try { // try from 055ad7a8 to 056ad7b3 has its CatchHandler @ 055adf68 */
      uVar7 = thunk_FUN_02dfd288(System_Action<OVRHand_MicrogestureType>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar6,uVar7);
    }
    if ((unaff_x27 != (long *)0x0) &&
       (uVar10 = (**(code **)(*unaff_x27 + 0x1a8))(), (uVar10 & 1) != 0)) goto code_r0x055ad6b4;
    FUN_055aeed0();
  } while( true );
}


