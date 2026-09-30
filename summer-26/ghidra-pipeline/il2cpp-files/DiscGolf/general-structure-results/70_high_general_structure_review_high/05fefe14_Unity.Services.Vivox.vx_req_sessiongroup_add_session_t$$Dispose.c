/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_sessiongroup_add_session_t$$Dispose
ENTRY_POINT: 05fefe14
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_vx_req_sessiongroup_add_session_t__Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  long lVar4;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)FUN_02dd004c();
LAB_05fefe38:
      uVar2 = (*(code *)*puVar1)();
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      FUN_04330568(&stack0x00000010,uVar2,*(undefined8 *)System_Version_var);
      lVar3 = *(long *)PTR_DAT_069fc268;
      *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000018;
      *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000010;
      lVar4 = *(long *)(unaff_x19 + 0x68);
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      in_stack_00000028 = FUN_054c8c2c(0);
      Newtonsoft_Json_Linq_JContainer__System_Collections_IList_get_Item(&stack0x00000028,0);
      FUN_0432c5ec();
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x20) = 0;
        *(undefined8 *)(lVar4 + 0x18) = 0;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_05fefe38;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


