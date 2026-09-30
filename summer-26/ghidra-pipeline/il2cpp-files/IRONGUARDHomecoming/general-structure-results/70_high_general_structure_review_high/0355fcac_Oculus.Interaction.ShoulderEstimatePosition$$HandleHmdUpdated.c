/*
FUNCTION_NAME: Oculus.Interaction.ShoulderEstimatePosition$$HandleHmdUpdated
ENTRY_POINT: 0355fcac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure
*/


undefined8 Oculus_Interaction_ShoulderEstimatePosition__HandleHmdUpdated(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  int in_w8;
  uint uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar7;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x28;
  undefined2 uStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000048;
  int iStack000000000000004c;
  
  if (in_w8 == 0x74) {
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar2 = FUN_03562660();
    iStack000000000000004c = iVar2;
    if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__)
      ;
    }
    if (iVar2 == 1) {
      uVar3 = Oculus_Interaction_IndexPinchSafeReleaseSelector_<>c__<_ctor>b__32_0();
    }
    else {
      uVar3 = FUN_0355ef74();
    }
    if ((uVar3 & 1) != 0) {
      if (*(int *)(unaff_x21 + 0xc) == -1) {
        *(int *)(unaff_x21 + 0xc) = in_stack_00000018._4_4_;
        return 1;
      }
      if (*(int *)(unaff_x21 + 0xc) == in_stack_00000018._4_4_) {
        return 1;
      }
      uVar4 = *(undefined8 *)Method_System_IO_CStreamReader_Read__;
      uStack0000000000000004 = 0x74;
Oculus_Interaction_ActiveStateUnityEventWrapper__Awake:
      thunk_FUN_01f113fc(uVar4,&stack0x00000004);
      FUN_035633fc();
      return 0;
    }
  }
  else if (in_w8 == 0x7a) {
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iStack000000000000004c = FUN_03562660();
    puVar1 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                        );
    }
    in_stack_00000010 = 0;
    if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_0355e53c();
    uVar4 = in_stack_00000010;
    if ((uVar3 & 1) != 0) {
      uVar5 = *(uint *)(unaff_x19 + 0x24);
      if ((uVar5 >> 8 & 1) != 0) {
        uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar3 = FUN_035820b0(uVar4,uVar7,0);
        if ((uVar3 & 1) != 0) {
          uVar4 = *(undefined8 *)Method_System_IO_CStreamReader_Read__;
          uStack0000000000000004 = 0x7a;
          goto Oculus_Interaction_ActiveStateUnityEventWrapper__Awake;
        }
        uVar5 = *(uint *)(unaff_x19 + 0x24);
      }
      *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000010;
      *(uint *)(unaff_x19 + 0x24) = uVar5 | 0x100;
      return 1;
    }
  }
  else {
    if (in_w8 == 0x79) {
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar2 = FUN_03562660();
      puVar1 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
      iStack000000000000004c = iVar2;
      if (*(int *)(*(long *)Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__ + 0xe0
                  ) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__);
      }
      uVar3 = FUN_03561214();
      if ((uVar3 & 1) == 0) {
        if (unaff_x23 == 0) {
LAB_03560938:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar3 = FUN_0350d874();
        if ((uVar3 & 1) == 0) {
          if (iVar2 < 3) {
            *(undefined1 *)(unaff_x21 + 0x11) = 1;
          }
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar3 = FUN_0355dee0();
        }
        else {
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar3 = FUN_0355e078();
        }
        if ((uVar3 & 1) == 0) {
          if (*(char *)(unaff_x21 + 0x14) != '\0') {
            lVar6 = *(long *)(unaff_x21 + 0x18);
            if (lVar6 == 0) goto LAB_03560938;
            uVar3 = (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40));
            if ((uVar3 & 1) != 0) goto LAB_0355fd20;
          }
          goto LAB_035602c0;
        }
      }
      else {
        uStack0000000000000048 = 1;
      }
LAB_0355fd20:
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = Oculus_Interaction_IndexPinchSelector__add_WhenUnselected();
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    puVar1 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_105__;
    uVar3 = FUN_03561104();
    if ((uVar3 & 1) == 0) {
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_03562494();
    }
    else {
      if (*(long *)puVar1 == 0) goto LAB_03560938;
      *(int *)(unaff_x22 + 0x10) =
           *(int *)(unaff_x22 + 0x10) + *(int *)(*(long *)puVar1 + 0x10) + -1;
      *(uint *)(unaff_x19 + 0x24) = *(uint *)(unaff_x19 + 0x24) | 0x100;
      puVar1 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
      lVar6 = *(long *)
               Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar6 = *(long *)puVar1;
      }
      *(undefined8 *)(unaff_x19 + 0x28) = **(undefined8 **)(lVar6 + 0xb8);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_03562344();
    }
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
LAB_035602c0:
  FUN_035633a0();
  return 0;
}


