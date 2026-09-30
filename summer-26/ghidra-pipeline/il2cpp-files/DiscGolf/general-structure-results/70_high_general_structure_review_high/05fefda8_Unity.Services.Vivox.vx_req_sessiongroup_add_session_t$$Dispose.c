/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_sessiongroup_add_session_t$$Dispose
ENTRY_POINT: 05fefda8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_vx_req_sessiongroup_add_session_t__Dispose(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long lVar7;
  long *plVar8;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  puVar1 = PTR_DAT_069fc868;
  FUN_05fef254();
  plVar8 = *(long **)(unaff_x19 + 0xd8);
  uVar2 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_054521e8();
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06a102e0) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05fefe38;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02dd004c(plVar8,*(long *)PTR_DAT_06a102e0,0);
LAB_05fefe38:
    uVar2 = (*(code *)*puVar3)(plVar8,uVar2,puVar3[1]);
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_04330568(&stack0x00000010,uVar2,*(undefined8 *)System_Version_var);
    lVar4 = *(long *)PTR_DAT_069fc268;
    *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000018;
    *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000010;
    lVar7 = *(long *)(unaff_x19 + 0x68);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    in_stack_00000028 = FUN_054c8c2c(0);
    Newtonsoft_Json_Linq_JContainer__System_Collections_IList_get_Item(&stack0x00000028,0);
    FUN_0432c5ec();
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x20) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


