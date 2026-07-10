/*
FUNCTION_NAME: UnityEngine.InputSystem.Layouts.InputControlLayout$$ParseHeaderFieldsFromJson
ENTRY_POINT: 032a2bc8
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_InputSystem_Layouts_InputControlLayout__ParseHeaderFieldsFromJson
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar2 = 
  PTR_Method_UnityEngine_JsonUtility_FromJson<InputControlLayout_LayoutJsonNameAndDescriptorOnly>___03cd1b20
  ;
  if ((DAT_03ef515a & 1) == 0) {
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_Append___03cd1968
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_JsonUtility_FromJson<InputControlLayout_LayoutJsonNameAndDescriptorOnly>___03cd1b20
                );
    DAT_03ef515a = 1;
  }
  local_60 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  UnityEngine_JsonUtility__FromJson<InputControlLayout_LayoutJsonNameAndDescriptorOnly>
            (&local_148,param_1,*(undefined8 *)puVar2);
  memcpy(&local_d0,&local_148,0x78);
  local_158 = 0;
  uStack_150 = 0;
  UnityEngine_InputSystem_Utilities_InternedString___ctor(&local_158,local_d0,0);
  param_2[1] = uStack_150;
  *param_2 = local_158;
  thunk_FUN_01cc8040(param_2,0);
  uVar5 = uStack_c8;
  param_3[1] = 0;
  *param_3 = 0;
  param_3[3] = 0;
  param_3[2] = 0;
  uVar4 = System_String__IsNullOrEmpty(uStack_c8,0);
  if ((uVar4 & 1) == 0) {
    local_148 = 0;
    uStack_140 = 0;
    UnityEngine_InputSystem_Utilities_InternedString___ctor(&local_148,uVar5,0);
    UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>__Append
              (param_3,local_148,uStack_140,
               *(undefined8 *)
                PTR_Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_Append___03cd1968
              );
  }
  lVar3 = local_c0;
  puVar2 = 
  PTR_Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>_Append___03cd1968;
  if ((local_c0 != 0) && (0 < (int)*(ulong *)(local_c0 + 0x18))) {
    uVar4 = 0;
    uVar6 = *(ulong *)(local_c0 + 0x18) & 0xffffffff;
    lVar1 = local_c0 + 0x20;
    do {
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbdc();
      }
      local_148 = 0;
      uStack_140 = 0;
      UnityEngine_InputSystem_Utilities_InternedString___ctor
                (&local_148,*(undefined8 *)(lVar1 + uVar4 * 8),0);
      UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>__Append
                (param_3,local_148,uStack_140,*(undefined8 *)puVar2);
      uVar6 = (ulong)*(uint *)(lVar3 + 0x18);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
  }
  uVar5 = UnityEngine_InputSystem_Layouts_InputDeviceMatcher_MatcherJson__ToMatcher(&uStack_b8,0);
  *param_4 = uVar5;
  thunk_FUN_01cc8040(param_4,0);
  return;
}


