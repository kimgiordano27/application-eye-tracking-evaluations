/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$BeginInvoke
ENTRY_POINT: 019dcc38
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__BeginInvoke(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  
  thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
  thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonValidatingReader_OnValidationEvent__);
  *(undefined1 *)(unaff_x23 + 0x7ab) = 1;
  puVar2 = PTR_DAT_033ecb28;
  if (*(char *)(unaff_x20 + 0x61) != '\0') {
    unaff_x21 = unaff_x22;
  }
  if (unaff_x19 != (long *)0x0) {
    lVar7 = *unaff_x19;
    uVar10 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_033ecb28) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_019dccc0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724();
LAB_019dccc0:
    plVar4 = (long *)(*(code *)*puVar3)();
    if (plVar4 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)
                         System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                       300);
                    /* try { // try from 019dccfc to 01adcd03 has its CatchHandler @ 019dcfb4 */
      if ((bVar1 <= *(byte *)(*plVar4 + 300)) &&
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo)) {
        uVar5 = FUN_0268b6ac(plVar4,0);
                    /* try { // try from 019dcd14 to 01adcd1b has its CatchHandler @ 019dcfb0 */
        uVar6 = FUN_017b7e58(0);
        uVar10 = FUN_01600424(uVar10,uVar5,uVar6,0);
      }
    }
    lVar7 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_019dcd7c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724();
LAB_019dcd7c:
    lVar7 = (*(code *)*puVar3)();
    if ((lVar7 != 0) &&
       (plVar4 = (long *)thunk_FUN_00d93c64(lVar7,0),
       puVar2 = Method_System_Collections_Generic_Dictionary<string,_MethodInfo>_TryGetValue__,
       plVar4 != (long *)0x0)) {
      uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      uVar5 = FUN_015f6780(*(undefined8 *)puVar2,uVar5,0);
      FUN_015f5b28(uVar10,uVar5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


