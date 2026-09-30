/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_DataStore_GetNumKeys
ENTRY_POINT: 055ad7dc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 118
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 Oculus_Platform_CAPI__ovr_DataStore_GetNumKeys(undefined8 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  int *piVar14;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar15;
  long *unaff_x23;
  int unaff_w26;
  long *unaff_x27;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  int in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  if (param_2 == 1) {
    puVar5 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar6 = thunk_FUN_02dfd288(PTR_DAT_069fcb10);
    uVar7 = thunk_FUN_02df8d3c(uVar6,*(undefined8 *)*puVar5);
    iVar2 = in_stack_00000060;
    if ((uVar7 & 1) != 0) {
      *(undefined8 *)(&stack0x00000050 + (long)in_stack_00000060 * 8) = *puVar5;
      in_stack_00000060 = in_stack_00000060 + 1;
      __cxa_end_catch();
      lVar8 = thunk_FUN_02dfd288(PTR_DAT_069fc178);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar6 = FUN_0547e2f8(0);
      uVar9 = (**(code **)(*unaff_x19 + 0x198))();
      uVar12 = *(undefined8 *)(unaff_x20 + 200);
      uVar10 = thunk_FUN_02dfd288(System_Action<OVRManager_PassthroughInitializationState>_TypeInfo)
      ;
      FUN_05588558(uVar10,uVar6,uVar9,uVar12,0);
      uVar6 = FUN_0557511c();
      in_stack_00000060 = iVar2;
      uVar9 = thunk_FUN_02dfd288(System_Action<OVRHand_MicrogestureType>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar6,uVar9);
    }
    puVar11 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar11 = *puVar5;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&PTR_PTR_066567d8,0);
  }
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c(param_1);
  }
  puVar5 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar6 = thunk_FUN_02dfd288(PTR_DAT_069fcb10);
  uVar7 = thunk_FUN_02df8d3c(uVar6,*(undefined8 *)*puVar5);
  if ((uVar7 & 1) == 0) {
    puVar11 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar11 = *puVar5;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar11,&PTR_PTR_066567d8,0);
  }
  *(undefined8 *)(&stack0x00000050 + (long)in_stack_00000060 * 8) = *puVar5;
  in_stack_00000060 = in_stack_00000060 + 1;
  __cxa_end_catch();
  (**(code **)(*unaff_x19 + 0x1c8))();
  thunk_FUN_02dfd288(UnityEngine_UIElements_PanelRaycaster_var);
  thunk_FUN_02dd3048();
  uVar7 = FUN_055ac320();
  if ((uVar7 & 1) == 0) {
    in_stack_00000060 = in_stack_00000060 + -1;
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(*(undefined8 *)(&stack0x00000050 + (long)in_stack_00000060 * 8));
  }
  FUN_055af384();
  in_stack_00000060 = in_stack_00000060 + -1;
  do {
    while( true ) {
      uVar7 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar7 & 1) == 0) {
        FUN_055b578c();
        goto LAB_055ada64;
      }
      iVar2 = (**(code **)(*unaff_x19 + 0x188))();
      if (iVar2 != 4) break;
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      uVar7 = FUN_055afb58();
      if ((uVar7 & 1) == 0) {
        if (unaff_w26 == 0x1c) {
          uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          lVar8 = unaff_x19[0xc];
          uVar9 = FUN_055712a0();
          if (*(int *)(*(long *)UnityEngine_RectTransform_var + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar7 = FUN_0558d8a0(uVar6,lVar8,uVar9,&stack0x00000068,0);
          if ((uVar7 & 1) == 0) {
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
          lVar15 = unaff_x19[0xc];
          uVar9 = FUN_055712a0();
          if (*(int *)(*(long *)UnityEngine_RectTransform_var + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar7 = FUN_0558d190(uVar6,(int)lVar8,lVar15,uVar9,&stack0x00000078,0);
          if ((uVar7 & 1) == 0) {
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
            plVar13 = *(long **)(*(long *)(unaff_x21 + 0x20) + 0x40);
            if (plVar13 == (long *)0x0) {
Oculus_Platform_CAPI_ovrKeyValuePair___ctor:
              lVar15 = 0;
            }
            else {
              bVar1 = *(byte *)(*(long *)System_Reflection_RuntimeAssembly_var + 0x130);
              if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)System_Reflection_RuntimeAssembly_var))
              goto Oculus_Platform_CAPI_ovrKeyValuePair___ctor;
              lVar15 = plVar13[6];
            }
            uVar9 = *(undefined8 *)(lVar8 + 0x18);
            uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
            if (*(int *)(*(long *)UnityEngine_XR_Interaction_Toolkit_UI_TrackedDeviceModel_var +
                        0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_05590d40(uVar9,lVar15,uVar6,0,0);
          }
        }
        uVar7 = FUN_05574ae8();
        if ((uVar7 & 1) == 0) {
          thunk_FUN_02dfd288(System_Action<OVRColocationSession_Data>_TypeInfo);
          uVar6 = FUN_05574a94();
          uVar9 = thunk_FUN_02dfd288(System_Action<OVRHand_MicrogestureType>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar6,uVar9);
        }
        if (unaff_x27 == (long *)0x0) {
LAB_055ad6c8:
          FUN_055aeed0();
        }
        else {
          uVar7 = (**(code **)(*unaff_x27 + 0x1a8))();
          if ((uVar7 & 1) == 0) goto LAB_055ad6c8;
          FUN_055aeab8();
        }
        if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar8 = *unaff_x23;
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar7 != 0) {
          piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_069ff850) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_055ad74c;
            }
            uVar7 = uVar7 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_02dd004c();
LAB_055ad74c:
        (*(code *)*puVar5)();
      }
    }
  } while (iVar2 == 5);
  if (iVar2 != 0xd) {
    FUN_02979e58();
    uVar3 = (**(code **)(*unaff_x19 + 0x188))();
    in_stack_00000030 = thunk_FUN_02dfd288(System_Drawing_Point_var);
    in_stack_00000038 = 0xffffffffffffffff;
    in_stack_00000040 = uVar3;
    uVar6 = FUN_0551e574(&stack0x00000030,0);
    uVar9 = thunk_FUN_02dfd288(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
    FUN_05362cb4(uVar9,uVar6,0);
    uVar6 = FUN_05574a94();
    uVar9 = thunk_FUN_02dfd288(System_Action<OVRHand_MicrogestureType>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar6,uVar9);
  }
LAB_055ada64:
  FUN_055b5560();
  return in_stack_00000018;
}


