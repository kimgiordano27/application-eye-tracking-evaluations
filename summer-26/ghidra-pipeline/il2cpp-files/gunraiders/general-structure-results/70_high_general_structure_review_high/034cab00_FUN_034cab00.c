/*
FUNCTION_NAME: FUN_034cab00
ENTRY_POINT: 034cab00
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_034cab00(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  float fVar7;
  
                    /* try { // try from 034cab08 to 035cab33 has its CatchHandler @ 034cacb0 */
  if ((DAT_045373db & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fae0);
    FUN_01c5d288(PTR_DAT_042343c8);
    FUN_01c5d288(Method_System_Collections_Generic_List<int>_Contains__);
    FUN_01c5d288(PTR_DAT_0422f9e8);
    FUN_01c5d288(Method_System_Collections_Generic_List<Vector3>_set_Item__);
    FUN_01c5d288(Method_System_Collections_Generic_List<Vector4>__ctor__);
                    /* try { // try from 034cab68 to 035cabc3 has its CatchHandler @ 034cacac */
    FUN_01c5d288(System_Action<OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>_TypeInfo);
    DAT_045373db = 1;
  }
  lVar2 = FUN_03d468e8(param_4,0);
  puVar1 = PTR_DAT_0422f9e8;
  if (lVar2 == 0) goto LAB_034cacd4;
  uVar3 = FUN_02362b68(lVar2,*(undefined8 *)PTR_DAT_042343c8);
  *(undefined8 *)(param_4 + 0x78) = uVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar4 = FUN_03d4dc54(uVar3,0,0);
                    /* try { // try from 034cabc4 to 035cac87 has its CatchHandler @ 034ca948 */
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_03d046d0(*(undefined8 *)
                  System_Action<OVRTrackedKeyboard_TrackedKeyboardSetActiveEvent>_TypeInfo,0);
  }
  lVar2 = FUN_03d468e8(param_4,0);
  if ((lVar2 == 0) ||
     (lVar2 = FUN_02363888(lVar2,*(undefined8 *)
                                  Method_System_Collections_Generic_List<int>_Contains__),
     lVar2 == 0)) goto LAB_034cacd4;
  if (*(long *)(lVar2 + 0x18) == 0) {
    puVar6 = (undefined8 *)Method_System_Collections_Generic_List<Vector4>__ctor__;
    if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      puVar6 = (undefined8 *)Method_System_Collections_Generic_List<Vector4>__ctor__;
    }
LAB_034cac7c:
    FUN_03d046d0(*puVar6,0);
  }
  else {
    iVar5 = (int)*(long *)(lVar2 + 0x18);
    if (1 < iVar5) {
      puVar6 = (undefined8 *)Method_System_Collections_Generic_List<Vector3>_set_Item__;
      if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        puVar6 = (undefined8 *)Method_System_Collections_Generic_List<Vector3>_set_Item__;
      }
      goto LAB_034cac7c;
    }
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    *(undefined8 *)(param_4 + 0x80) = *(undefined8 *)(lVar2 + 0x20);
  }
  lVar2 = FUN_03d468ac(param_4,0);
  if (lVar2 != 0) {
    FUN_03d53b84(lVar2,0);
    fVar7 = (float)FUN_03d3e0f0(0);
    param_2 = param_2 * DAT_00b9350c;
    FUN_03d3e718(fVar7 * DAT_00b9350c,param_2,param_3 * DAT_00b9350c,0);
    *(float *)(param_4 + 0xbc) = param_2;
    return;
  }
LAB_034cacd4:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


