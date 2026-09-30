/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Vector2f>
ENTRY_POINT: 03163880
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__set_Item<OVRPlugin_Vector2f>(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
  if (param_1 == 0) {
    FUN_02d9a33c();
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  iVar2 = thunk_FUN_02d6ffd8();
  if (iVar2 < 2) {
    uVar3 = FUN_0501f6a4();
    puVar1 = PTR_DAT_06767810;
    if (0 < (int)uVar3) {
      uVar9 = 0;
      in_stack_00000028 = (long)&stack0x00000018 + 4;
      do {
        memcpy(&stack0x00000010,
               (void *)((long)unaff_x20 + uVar9 * *(uint *)(*unaff_x20 + 0x104) + 0x20),
               (ulong)*(uint *)(*unaff_x20 + 0x104));
        plVar4 = (long *)thunk_FUN_02d9d164(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
        if (DAT_06b742ff == '\0') {
          FUN_02d6084c(puVar1);
          DAT_06b742ff = '\x01';
        }
        if ((plVar4 != (long *)0x0) && (*plVar4 == *(long *)puVar1)) {
          puVar5 = (undefined4 *)thunk_FUN_02d9d688(plVar4);
          uVar12 = puVar5[1];
          uVar11 = puVar5[2];
          uVar10 = puVar5[3];
          uVar6 = Newtonsoft_Json_Serialization_TraceJsonReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition
                            (*puVar5,&stack0x00000010,0);
          if (((uVar6 & 1) != 0) &&
             (((uVar6 = Newtonsoft_Json_Serialization_TraceJsonReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition
                                  (uVar12,(ulong)&stack0x00000010 | 4,0), (uVar6 & 1) != 0 &&
               (uVar6 = Newtonsoft_Json_Serialization_TraceJsonReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition
                                  (uVar11,&stack0x00000018,0), (uVar6 & 1) != 0)) &&
              (uVar6 = Newtonsoft_Json_Serialization_TraceJsonReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition
                                 (uVar10,in_stack_00000028,0), (uVar6 & 1) != 0)))) {
            iVar2 = thunk_FUN_02d6ff94();
            return iVar2 + (int)uVar9;
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    iVar2 = thunk_FUN_02d6ff94();
    return iVar2 + -1;
  }
  thunk_FUN_02dc61f4(PTR_DAT_06767638);
  uVar7 = thunk_FUN_02d9d534();
  uVar8 = thunk_FUN_02dc61f4(PTR_DAT_06767640);
  FUN_05018134(uVar7,uVar8,0);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar7);
}


