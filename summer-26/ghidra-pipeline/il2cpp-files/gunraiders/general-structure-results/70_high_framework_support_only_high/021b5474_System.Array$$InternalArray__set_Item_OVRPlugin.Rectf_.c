/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Rectf>
ENTRY_POINT: 021b5474
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__set_Item<OVRPlugin_Rectf>(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  
  FUN_01c5d288(PTR_DAT_04239408);
  FUN_01c5d288(PTR_DAT_04230a30);
  FUN_01c5d288(System_Xml_IDtdParser_TypeInfo);
  FUN_01c5d288(System_Xml_IDtdParserAdapter_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xf16) = 1;
  iVar1 = *(int *)(unaff_x19 + 0x10);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if (iVar1 == 2) {
    lVar3 = *(long *)(unaff_x19 + 0x28);
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (lVar3 != 0) goto LAB_021b55cc;
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)PTR_DAT_04237a90 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_035678e8(0,0);
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      *(undefined4 *)(unaff_x19 + 0x30) = 0;
    }
    if (**(long **)(*(long *)PTR_DAT_04239408 + 0xb8) == 0) goto LAB_021b5644;
    uVar2 = FUN_01f16a58(**(long **)(*(long *)PTR_DAT_04239408 + 0xb8),0);
    if (((uVar2 & 1) == 0) &&
       (iVar1 = *(int *)(unaff_x19 + 0x30) + 1, *(int *)(unaff_x19 + 0x30) = iVar1, iVar1 < 0xb)) {
      FUN_020eee94(*(undefined8 *)System_Xml_IDtdParserAdapter_TypeInfo,0);
      uVar4 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04230a30);
      FUN_03d50230(0x3f800000,uVar4,0);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
      *(undefined4 *)(unaff_x19 + 0x10) = 1;
      return 1;
    }
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
  }
  if (lVar5 == 0) {
LAB_021b5644:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar3 = FUN_021b4f64(lVar5);
  *(long *)(unaff_x19 + 0x28) = lVar3;
  iVar1 = *(int *)(unaff_x19 + 0x30) + 1;
  *(int *)(unaff_x19 + 0x30) = iVar1;
  if ((lVar3 == 0) && (iVar1 < 0xb)) {
    FUN_020eee94(*(undefined8 *)System_Xml_IDtdParser_TypeInfo,0);
    uVar4 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04230a30);
    FUN_03d50230(0x3f800000,uVar4,0);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
    *(undefined4 *)(unaff_x19 + 0x10) = 2;
    return 1;
  }
LAB_021b55cc:
  if (*(int *)(*(long *)PTR_DAT_04237a90 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_035678e8(lVar3,0);
  return 0;
}


