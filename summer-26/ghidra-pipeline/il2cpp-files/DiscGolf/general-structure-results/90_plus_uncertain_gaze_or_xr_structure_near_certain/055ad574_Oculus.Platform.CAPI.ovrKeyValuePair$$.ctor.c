/*
FUNCTION_NAME: Oculus.Platform.CAPI.ovrKeyValuePair$$.ctor
ENTRY_POINT: 055ad574
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


undefined8 Oculus_Platform_CAPI_ovrKeyValuePair___ctor(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x21;
  long lVar9;
  undefined8 uVar10;
  long *unaff_x23;
  long lVar11;
  int unaff_w26;
  long *unaff_x27;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
code_r0x055ad574:
                    /* catch() { ... } // from try @ 055ad544 with catch @ 055ad574 */
  lVar11 = 0;
  do {
                    /* catch() { ... } // from try @ 055ad554 with catch @ 055ad578 */
                    /* catch() { ... } // from try @ 055ad4b0 with catch @ 055ad57c */
    uVar10 = *(undefined8 *)(param_1 + 0x18);
                    /* catch() { ... } // from try @ 055ad344 with catch @ 055ad580
                       catch() { ... } // from try @ 055ad534 with catch @ 055ad580 */
                    /* catch() { ... } // from try @ 055ad444 with catch @ 055ad584 */
                    /* catch() { ... } // from try @ 055ad434 with catch @ 055ad588 */
    uVar4 = (**(code **)(*unaff_x29 + 0x168))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x170));
                    /* catch() { ... } // from try @ 055ad54c with catch @ 055ad58c */
                    /* catch() { ... } // from try @ 055ad548 with catch @ 055ad590 */
                    /* catch() { ... } // from try @ 055ad3a4 with catch @ 055ad594 */
                    /* catch() { ... } // from try @ 055ad42c with catch @ 055ad598
                       catch() { ... } // from try @ 055ad550 with catch @ 055ad598 */
                    /* catch() { ... } // from try @ 055ad400 with catch @ 055ad59c
                       catch() { ... } // from try @ 055ad454 with catch @ 055ad59c */
    if (*(int *)(*(long *)UnityEngine_XR_Interaction_Toolkit_UI_TrackedDeviceModel_var + 0xe4) == 0)
    {
      thunk_FUN_02df485c();
    }
    FUN_05590d40(uVar10,lVar11,uVar4,0,0);
LAB_055ad674:
    uVar5 = FUN_05574ae8();
    if ((uVar5 & 1) == 0) {
      thunk_FUN_02dfd288(System_Action<OVRColocationSession_Data>_TypeInfo);
      uVar4 = FUN_05574a94();
      uVar10 = thunk_FUN_02dfd288(System_Action<OVRHand_MicrogestureType>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar4,uVar10);
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
    lVar11 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069ff850) {
          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_055ad74c;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
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
            uVar4 = FUN_0551e574(&stack0x00000030,0);
            uVar10 = thunk_FUN_02dfd288(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
            FUN_05362cb4(uVar10,uVar4,0);
            uVar4 = FUN_05574a94();
            uVar10 = thunk_FUN_02dfd288(System_Action<OVRHand_MicrogestureType>_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_02d96724(uVar4,uVar10);
          }
          goto LAB_055ada64;
        }
        goto LAB_055ad760;
      }
      unaff_x29 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (unaff_x29 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      (**(code **)(*unaff_x29 + 0x168))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x170));
      uVar5 = FUN_055afb58();
    } while ((uVar5 & 1) != 0);
    if (unaff_w26 == 0x1c) {
      uVar4 = (**(code **)(*unaff_x29 + 0x168))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x170));
      lVar11 = unaff_x19[0xc];
      uVar10 = FUN_055712a0();
      if (*(int *)(*(long *)UnityEngine_RectTransform_var + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar5 = FUN_0558d8a0(uVar4,lVar11,uVar10,&stack0x00000068,0);
      if ((uVar5 & 1) == 0) {
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
      goto LAB_055ad674;
    }
    if (unaff_w26 == 0x1a) {
      uVar4 = (**(code **)(*unaff_x29 + 0x168))(unaff_x29,*(undefined8 *)(*unaff_x29 + 0x170));
      lVar11 = unaff_x19[9];
      lVar9 = unaff_x19[0xc];
      uVar10 = FUN_055712a0();
      if (*(int *)(*(long *)UnityEngine_RectTransform_var + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar5 = FUN_0558d190(uVar4,(int)lVar11,lVar9,uVar10,&stack0x00000078,0);
      if ((uVar5 & 1) == 0) {
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
      goto LAB_055ad674;
    }
    param_1 = *in_stack_00000020;
    if ((param_1 == 0) || (*(char *)(param_1 + 0x12) == '\0')) {
      if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0547e2f8(0);
      FUN_055b0cf8();
      goto LAB_055ad674;
    }
    if (*(long *)(unaff_x21 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar7 = *(long **)(*(long *)(unaff_x21 + 0x20) + 0x40);
    if (plVar7 == (long *)0x0) goto code_r0x055ad574;
    bVar1 = *(byte *)(*(long *)System_Reflection_RuntimeAssembly_var + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Reflection_RuntimeAssembly_var)) goto code_r0x055ad574;
    lVar11 = plVar7[6];
  } while( true );
}


