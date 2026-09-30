/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vaddvq_u32
ENTRY_POINT: 0636a924
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 114
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_15;telemetry_or_network_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Burst_Intrinsics_Arm_Neon__vaddvq_u32(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 *unaff_x19;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  uVar2 = thunk_FUN_032a56a0(*param_1);
  FUN_063796d4();
  puVar6 = (undefined8 *)(unaff_x19 + 0x10);
  *puVar6 = uVar2;
  thunk_FUN_0333a630(puVar6,uVar2);
  if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar5 = *(long *)(*(long *)(unaff_x19 + 10) + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar5 = *(long *)(lVar5 + 0x40);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  uVar2 = FUN_062ab834(lVar5,0);
  puVar1 = PTR_DAT_0727ea28;
  lVar5 = *(long *)PTR_DAT_0727ea28;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar5 = *(long *)puVar1;
  }
  uVar3 = thunk_FUN_057aa644(uVar2,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x20),0);
  if ((uVar3 & 1) == 0) {
    *(undefined8 *)(unaff_x24 + 0x20) = *puVar6;
    thunk_FUN_0333a630();
  }
  else if ((*(char *)(unaff_x19 + 0xc) == '\0') || (*(long *)(unaff_x24 + 0x30) == 0)) {
    lVar5 = *(long *)(unaff_x24 + 0x48);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(char *)(lVar5 + 0x32) != '\0') {
      plVar7 = (long *)(unaff_x24 + 0x38);
      lVar4 = *plVar7;
      if (lVar4 == 0) {
        if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar8 = *(undefined8 *)(lVar5 + 0x10);
        uVar2 = *(undefined8 *)(*(long *)(unaff_x19 + 10) + 0x10);
        lVar5 = thunk_FUN_032a56a0(*(undefined8 *)Newtonsoft_Json_JsonSerializer_TypeInfo);
        FUN_0636ae78(lVar5,uVar2,uVar8);
        *plVar7 = lVar5;
        thunk_FUN_0333a630(plVar7,lVar5);
        lVar4 = *plVar7;
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
      }
      lVar5 = FUN_0636aebc(lVar4,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xe))
      ;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      _in_stack_00000030 = FUN_0599899c(lVar5,0,0);
      uVar3 = FUN_0584eb5c(&stack0x00000030,0);
      if ((uVar3 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
        thunk_FUN_0333a630(unaff_x19 + 0x12,0);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        System_Array__InternalArray__ICollection_Remove<OVRPlugin_EyeGazeState>
                  (unaff_x19 + 2,&stack0x00000030);
        return;
      }
      FUN_0584eb78(&stack0x00000030,0);
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(long *)(unaff_x24 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(char *)(*(long *)(unaff_x24 + 0x38) + 0x2c) == '\0') {
        uVar2 = 0;
        goto LAB_0636aaa8;
      }
    }
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar2 = *(undefined8 *)(*(long *)(unaff_x19 + 10) + 0x10);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x10);
    lVar5 = thunk_FUN_032a56a0(*(undefined8 *)Newtonsoft_Json_JsonSerializationException_TypeInfo);
    FUN_05ff78c0(lVar5,uVar2,uVar8,0);
    plVar7 = (long *)(unaff_x24 + 0x30);
    *plVar7 = lVar5;
    thunk_FUN_0333a630(plVar7,lVar5);
    if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar5 = FUN_05ff79d4(*plVar7,*(undefined8 *)(unaff_x24 + 0x38),*(undefined8 *)(unaff_x19 + 0xe),
                         0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    _in_stack_00000020 = FUN_04a4b83c(lVar5,0,*(undefined8 *)UnityEngine_Texture___TypeInfo);
    uVar3 = FUN_04ed58b8(&stack0x00000020,
                         *(undefined8 *)UnityEngine_TextCore_Text_TextProcessingElement___TypeInfo);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
      thunk_FUN_0333a630(unaff_x19 + 0x16,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_0354dcb8(unaff_x19 + 2,&stack0x00000020);
      return;
    }
    uVar2 = FUN_04ed5904(&stack0x00000020,
                         *(undefined8 *)UnityEngine_TextCore_Text_TextElementInfo___TypeInfo);
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    *(undefined8 *)(unaff_x24 + 0x20) = uVar2;
    thunk_FUN_0333a630();
  }
  uVar2 = 1;
LAB_0636aaa8:
  *unaff_x19 = 0xfffffffe;
  puVar1 = PTR_DAT_07286810;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_045ff158(unaff_x19 + 2,uVar2,*(undefined8 *)puVar1);
  return;
}


