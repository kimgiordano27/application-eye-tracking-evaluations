/*
FUNCTION_NAME: UnityEngine.InputSystem.InputActionState.InteractionState$$get_totalTimeoutCompletionTimeRemaining
ENTRY_POINT: 02033d78
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


long UnityEngine_InputSystem_InputActionState_InteractionState__get_totalTimeoutCompletionTimeRemaining
               (long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x19;
  uint uVar9;
  ulong unaff_x20;
  undefined8 uVar10;
  
  puVar4 = Method_OVREnumerable_Enumerator<KeyValuePair<OVRAnchor,_Transform>>_get_Current__;
  puVar3 = System_IOSelectorJob_TypeInfo;
  if (*(int *)(param_1 + 0x10) == *(int *)(unaff_x19 + 0x40)) {
    thunk_FUN_00d48444(StringLiteral_9387);
    uVar10 = FUN_02033998();
    uVar8 = thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToArray<VoiceServiceRequest>__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,uVar8);
  }
  uVar5 = FUN_020321f8();
  if (uVar5 < 0x5b) {
    if (uVar5 < 0x51) {
      uVar9 = (uint)uVar5;
      if (uVar9 < 0x47) {
        if (1 < uVar9 - 0x41) {
          if (uVar9 != 0x44) {
LAB_02033f54:
            lVar7 = FUN_02034ff0();
            return lVar7;
          }
          *(int *)(unaff_x19 + 0x40) = *(int *)(unaff_x19 + 0x40) + 1;
          if ((unaff_x20 & 1) != 0) {
            return 0;
          }
          uVar9 = *(uint *)(unaff_x19 + 0x80);
          if ((uVar9 >> 8 & 1) != 0) {
            lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
            puVar2 = (undefined8 *)PTR_DAT_033f1320;
            goto joined_r0x02034120;
          }
          lVar7 = *(long *)puVar4;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar7 = *(long *)puVar4;
          }
          uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x50);
          goto LAB_020340bc;
        }
      }
      else if (uVar9 != 0x47) {
        if (uVar9 != 0x50) goto LAB_02033f54;
LAB_02033e88:
        *(int *)(unaff_x19 + 0x40) = *(int *)(unaff_x19 + 0x40) + 1;
        if ((unaff_x20 & 1) != 0) {
          return 0;
        }
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        if (lVar7 != 0) {
          FUN_020226b0(lVar7,0);
          uVar10 = FUN_02034888();
          FUN_02022c64(lVar7,uVar10,uVar5 != 0x70,*(uint *)(unaff_x19 + 0x80) & 1,
                       *(undefined8 *)(unaff_x19 + 0x38),0);
          uVar9 = *(uint *)(unaff_x19 + 0x80);
          if ((uVar9 & 1) != 0) {
            FUN_02023184(lVar7,*(undefined8 *)(unaff_x19 + 0x48),0);
            uVar9 = *(uint *)(unaff_x19 + 0x80);
          }
          uVar10 = FUN_02024430(lVar7,0);
          lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
          if (lVar7 != 0) {
            FUN_017b46ec(lVar7,0);
            *(uint *)(lVar7 + 0x34) = uVar9;
            *(undefined4 *)(lVar7 + 0x10) = 0xb;
            *(undefined8 *)(lVar7 + 0x20) = uVar10;
            return lVar7;
          }
        }
        goto LAB_02034194;
      }
LAB_02033f3c:
      *(int *)(unaff_x19 + 0x40) = *(int *)(unaff_x19 + 0x40) + 1;
      if ((unaff_x20 & 1) != 0) {
        return 0;
      }
      uVar6 = FUN_02034f60();
      uVar1 = *(undefined4 *)(unaff_x19 + 0x80);
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar7 != 0) {
        FUN_017b46ec(lVar7,0);
        *(undefined4 *)(lVar7 + 0x10) = uVar6;
        *(undefined4 *)(lVar7 + 0x34) = uVar1;
        return lVar7;
      }
      goto LAB_02034194;
    }
    if (uVar5 == 0x53) {
      *(int *)(unaff_x19 + 0x40) = *(int *)(unaff_x19 + 0x40) + 1;
      if ((unaff_x20 & 1) != 0) {
        return 0;
      }
      uVar9 = *(uint *)(unaff_x19 + 0x80);
      if ((uVar9 >> 8 & 1) != 0) {
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        puVar2 = (undefined8 *)UnityEngine_Rendering_ColorParameter_TypeInfo;
joined_r0x02034120:
        if (lVar7 != 0) {
          uVar10 = *puVar2;
          goto LAB_02034164;
        }
        goto LAB_02034194;
      }
      lVar7 = *(long *)puVar4;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *(long *)puVar4;
      }
      uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x30);
    }
    else {
      if (uVar5 != 0x57) {
        if (uVar5 != 0x5a) goto LAB_02033f54;
        goto LAB_02033f3c;
      }
      *(int *)(unaff_x19 + 0x40) = *(int *)(unaff_x19 + 0x40) + 1;
      if ((unaff_x20 & 1) != 0) {
        return 0;
      }
      uVar9 = *(uint *)(unaff_x19 + 0x80);
      if ((uVar9 >> 8 & 1) != 0) {
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        puVar2 = (undefined8 *)
                 Method_DG_Tweening_TweenSettingsExtensions_OnUpdate<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
        ;
        goto joined_r0x02034120;
      }
      lVar7 = *(long *)puVar4;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *(long *)puVar4;
      }
      uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x40);
    }
  }
  else if (uVar5 < 0x71) {
    if (uVar5 == 0x62) goto LAB_02033f3c;
    if (uVar5 != 100) {
      if (uVar5 != 0x70) goto LAB_02033f54;
      goto LAB_02033e88;
    }
    *(int *)(unaff_x19 + 0x40) = *(int *)(unaff_x19 + 0x40) + 1;
    if ((unaff_x20 & 1) != 0) {
      return 0;
    }
    uVar9 = *(uint *)(unaff_x19 + 0x80);
    if ((uVar9 >> 8 & 1) != 0) {
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      puVar2 = (undefined8 *)UnityEngine_ExecuteInEditMode_var;
      goto joined_r0x02034120;
    }
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar4;
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x48);
  }
  else if (uVar5 == 0x73) {
    *(int *)(unaff_x19 + 0x40) = *(int *)(unaff_x19 + 0x40) + 1;
    if ((unaff_x20 & 1) != 0) {
      return 0;
    }
    uVar9 = *(uint *)(unaff_x19 + 0x80);
    if ((uVar9 >> 8 & 1) != 0) {
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      puVar2 = (undefined8 *)
               Method_UnityEngine_UIElements_EventBase<PointerCaptureOutEvent>_TypeId__;
      goto joined_r0x02034120;
    }
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar4;
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x28);
  }
  else {
    if (uVar5 != 0x77) {
      if (uVar5 != 0x7a) goto LAB_02033f54;
      goto LAB_02033f3c;
    }
    *(int *)(unaff_x19 + 0x40) = *(int *)(unaff_x19 + 0x40) + 1;
    if ((unaff_x20 & 1) != 0) {
      return 0;
    }
    uVar9 = *(uint *)(unaff_x19 + 0x80);
    if ((uVar9 >> 8 & 1) != 0) {
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      puVar2 = (undefined8 *)System_Uri_TypeInfo;
      goto joined_r0x02034120;
    }
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar4;
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x38);
  }
LAB_020340bc:
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  if (lVar7 != 0) {
LAB_02034164:
    FUN_017b46ec(lVar7,0);
    *(uint *)(lVar7 + 0x34) = uVar9;
    *(undefined4 *)(lVar7 + 0x10) = 0xb;
    *(undefined8 *)(lVar7 + 0x20) = uVar10;
    return lVar7;
  }
LAB_02034194:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


