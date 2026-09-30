/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_aux_get_derumbler_properties_t_enabled_get
ENTRY_POINT: 078e5fb4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x078e5d4c) */
/* WARNING: Removing unreachable block (ram,0x078e5d6c) */
/* WARNING: Removing unreachable block (ram,0x078e5d70) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_aux_get_derumbler_properties_t_enabled_get
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int iVar10;
  long in_stack_00000020;
  int *in_stack_00000028;
  long *in_stack_00000030;
  int in_stack_00000040;
  undefined4 *in_stack_00000068;
  
  if (param_2 == 1) {
    plVar3 = (long *)__cxa_begin_catch(param_1);
    in_stack_00000020 = *plVar3;
    __cxa_end_catch();
    if ((*in_stack_00000028 < 0) &&
       (plVar3 = *(long **)(*in_stack_00000030 + 0x28), plVar3 != (long *)0x0)) {
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08488550) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto 
            Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_aux_set_vad_properties_t_base__get
            ;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)FUN_03ac43c4(plVar3,*(long *)PTR_DAT_08488550,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_aux_set_vad_properties_t_base__get:
      (*(code *)*puVar1)(plVar3,puVar1[1]);
    }
    if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9b8();
    }
    iVar10 = in_stack_00000040 + -1;
  }
  else {
    FUN_039a0110(&stack0x00000020);
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_03b79cbc(param_1);
    }
    puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar8 = thunk_FUN_03af1434(PTR_DAT_08488858);
    uVar6 = thunk_FUN_03aed0c4(uVar8,*(undefined8 *)*puVar1);
    iVar10 = in_stack_00000040;
    if ((uVar6 & 1) == 0) {
      puVar4 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar4,&PTR_PTR_07fde6e8,0);
    }
    *(undefined8 *)(&stack0x00000038 + (long)in_stack_00000040 * 8) = *puVar1;
    in_stack_00000040 = in_stack_00000040 + 1;
    __cxa_end_catch();
  }
  uVar8 = *(undefined8 *)(&stack0x00000038 + (long)iVar10 * 8);
  puVar9 = in_stack_00000068 + 2;
  *in_stack_00000068 = 0xfffffffe;
  lVar5 = thunk_FUN_03af1434(
                            UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<TextOverflowPosition>,_TextOverflowPosition>_TypeInfo
                            );
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar2 = thunk_FUN_03af1434(
                            UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundSize,_BackgroundSize>_TypeInfo
                            );
  FUN_05338d34(puVar9,uVar8,uVar2);
  return;
}


