/*
FUNCTION_NAME: Oni$$ResetForces
ENTRY_POINT: 017e9fc0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x017e9f40) */

undefined8 Oni__ResetForces(void)

{
  bool in_ZR;
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x22;
  
  if (!in_ZR) {
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  puVar3 = (undefined8 *)__cxa_begin_catch();
  uVar4 = thunk_FUN_00d48444(
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                            );
  uVar5 = thunk_FUN_00d43524(uVar4,*(undefined8 *)*puVar3);
  if ((uVar5 & 1) == 0) {
    puVar7 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar7 = *puVar3;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar7,&PTR_PTR_03274860,0);
  }
  uVar4 = *puVar3;
  __cxa_end_catch();
  thunk_FUN_00d48444(
                    Method_UnityEngine_ProBuilder_SimpleTuple<Vector3,_Vector3,_List<int>>_set_item1__
                    );
  lVar6 = thunk_FUN_00d62348();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_017e7910(lVar6,uVar4);
  uVar1 = (**(code **)(*unaff_x22 + 0x1b8))();
  if ((unaff_w20 & uVar1 & 1) == 0) {
    uVar5 = 0;
LAB_017e9ea8:
    if ((unaff_w20 & 1) == 0) goto LAB_017e9f34;
  }
  else {
    uVar2 = FUN_017ea424();
    uVar5 = uVar2 & 0xffffffff;
    if ((uVar2 & 1) == 0) goto LAB_017e9ea8;
LAB_017e9f34:
    FUN_017eedfc();
    if (((uVar5 & 1) != 0) ||
       ((uVar1 = *(uint *)(unaff_x19 + 0x38), thunk_FUN_00d8e500(), (uVar1 >> 0x10 & 1) == 0 &&
        (uVar5 = FUN_017ea424(), (uVar5 & 1) != 0)))) {
      FUN_017ea524();
      uVar4 = 1;
      goto joined_r0x017e9f68;
    }
  }
  uVar4 = 0;
joined_r0x017e9f68:
  if (lVar6 == 0) {
    return uVar4;
  }
  uVar4 = thunk_FUN_00d48444(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<bool>>_Start<WitTTSVRequest_<RequestStream>d__24>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(lVar6,uVar4);
}


