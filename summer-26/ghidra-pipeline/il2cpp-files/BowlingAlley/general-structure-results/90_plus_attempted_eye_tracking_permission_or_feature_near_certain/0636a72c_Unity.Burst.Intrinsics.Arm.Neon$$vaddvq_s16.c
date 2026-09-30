/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vaddvq_s16
ENTRY_POINT: 0636a72c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 133
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_17;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Burst_Intrinsics_Arm_Neon__vaddvq_s16(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  if ((DAT_076dea3d & 1) == 0) {
    thunk_FUN_032e1da0(Newtonsoft_Json_Schema_JsonSchemaWriter_TypeInfo);
    thunk_FUN_032e1da0(Newtonsoft_Json_Linq_JsonSelectSettings_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07286810);
    thunk_FUN_032e1da0(PTR_DAT_072867d0);
    thunk_FUN_032e1da0(UnityEngine_TextCore_Text_TextColorGradient___TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_TextCore_Text_TextElementInfo___TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_TextCore_Text_TextProcessingElement___TypeInfo);
    thunk_FUN_032e1da0(Newtonsoft_Json_JsonSerializationException_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072b98f0);
    thunk_FUN_032e1da0(UnityEngine_Texture___TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_0727ea28);
    thunk_FUN_032e1da0(Newtonsoft_Json_JsonSerializer_TypeInfo);
    DAT_076dea3d = 1;
  }
  puVar2 = PTR_DAT_072867d0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  lVar10 = *(long *)(param_1 + 8);
  if (*param_1 == 0) {
    _in_stack_00000030 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
LAB_0636a830:
    FUN_0584eb78(&stack0x00000030,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(long *)(lVar10 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(char *)(*(long *)(lVar10 + 0x38) + 0x2c) == '\0') {
      uVar3 = 0;
      goto LAB_0636aaa8;
    }
LAB_0636a850:
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 10) + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    lVar6 = thunk_FUN_032a56a0(*(undefined8 *)Newtonsoft_Json_JsonSerializationException_TypeInfo);
    FUN_05ff78c0(lVar6,uVar3,uVar7,0);
    plVar9 = (long *)(lVar10 + 0x30);
    *plVar9 = lVar6;
    thunk_FUN_0333a630(plVar9,lVar6);
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar6 = FUN_05ff79d4(*plVar9,*(undefined8 *)(lVar10 + 0x38),*(undefined8 *)(param_1 + 0xe),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    _in_stack_00000020 = FUN_04a4b83c(lVar6,0,*(undefined8 *)UnityEngine_Texture___TypeInfo);
    uVar4 = FUN_04ed58b8(&stack0x00000020,
                         *(undefined8 *)UnityEngine_TextCore_Text_TextProcessingElement___TypeInfo);
    if ((uVar4 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x16) = _in_stack_00000020;
      thunk_FUN_0333a630(param_1 + 0x16,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_0354dcb8(param_1 + 2,&stack0x00000020,param_1,
                   *(undefined8 *)Newtonsoft_Json_Schema_JsonSchemaWriter_TypeInfo);
      return;
    }
LAB_0636a8e8:
    uVar3 = FUN_04ed5904(&stack0x00000020,
                         *(undefined8 *)UnityEngine_TextCore_Text_TextElementInfo___TypeInfo);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    *(undefined8 *)(lVar10 + 0x20) = uVar3;
    thunk_FUN_0333a630();
  }
  else {
    if (*param_1 == 1) {
      _in_stack_00000020 = *(undefined1 (*) [16])(param_1 + 0x16);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *param_1 = -1;
      _in_stack_00000030 = ZEXT816(0);
      goto LAB_0636a8e8;
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar7 = *(undefined8 *)(lVar10 + 0x28);
    uVar3 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072b98f0);
    FUN_063796d4(uVar3,uVar7,0,0);
    piVar8 = param_1 + 0x10;
    *(undefined8 *)piVar8 = uVar3;
    thunk_FUN_0333a630(piVar8,uVar3);
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar6 = *(long *)(*(long *)(param_1 + 10) + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar6 = *(long *)(lVar6 + 0x40);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar3 = FUN_062ab834(lVar6,0);
    puVar1 = PTR_DAT_0727ea28;
    lVar6 = *(long *)PTR_DAT_0727ea28;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar6 = *(long *)puVar1;
    }
    uVar4 = thunk_FUN_057aa644(uVar3,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20),0);
    if ((uVar4 & 1) == 0) {
      *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)piVar8;
      thunk_FUN_0333a630();
    }
    else if (((char)param_1[0xc] == '\0') || (*(long *)(lVar10 + 0x30) == 0)) {
      lVar6 = *(long *)(lVar10 + 0x48);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(char *)(lVar6 + 0x32) != '\0') {
        plVar9 = (long *)(lVar10 + 0x38);
        lVar5 = *plVar9;
        if (lVar5 == 0) {
          if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar7 = *(undefined8 *)(lVar6 + 0x10);
          uVar3 = *(undefined8 *)(*(long *)(param_1 + 10) + 0x10);
          lVar6 = thunk_FUN_032a56a0(*(undefined8 *)Newtonsoft_Json_JsonSerializer_TypeInfo);
          FUN_0636ae78(lVar6,uVar3,uVar7);
          *plVar9 = lVar6;
          thunk_FUN_0333a630(plVar9,lVar6);
          lVar5 = *plVar9;
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
        }
        lVar6 = FUN_0636aebc(lVar5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0xe));
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        _in_stack_00000030 = FUN_0599899c(lVar6,0,0);
        uVar4 = FUN_0584eb5c(&stack0x00000030,0);
        if ((uVar4 & 1) == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0x12) = _in_stack_00000030;
          thunk_FUN_0333a630(param_1 + 0x12,0);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          System_Array__InternalArray__ICollection_Remove<OVRPlugin_EyeGazeState>
                    (param_1 + 2,&stack0x00000030,param_1,
                     *(undefined8 *)Newtonsoft_Json_Linq_JsonSelectSettings_TypeInfo);
          return;
        }
        goto LAB_0636a830;
      }
      goto LAB_0636a850;
    }
  }
  uVar3 = 1;
LAB_0636aaa8:
  *param_1 = -2;
  puVar1 = PTR_DAT_07286810;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_045ff158(param_1 + 2,uVar3,*(undefined8 *)puVar1);
  return;
}


