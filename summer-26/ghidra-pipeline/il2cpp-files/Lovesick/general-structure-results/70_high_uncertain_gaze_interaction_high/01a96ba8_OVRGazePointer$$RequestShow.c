/*
FUNCTION_NAME: OVRGazePointer$$RequestShow
ENTRY_POINT: 01a96ba8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRGazePointer__RequestShow(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 *unaff_x19;
  long *unaff_x20;
  void *unaff_x21;
  long unaff_x29;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  long alStack_10 [2];
  
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  puVar2 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_MoveNext__
  ;
  if (unaff_x20 == (long *)0x0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar8 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar10 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ValueAsDouble__);
    FUN_016ec5b8(uVar8,uVar10,0);
    uVar10 = thunk_FUN_00d48444(Method_Obi_ObiUtils_Swap<Color>__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar8,uVar10);
  }
  lVar9 = *unaff_x20;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_033f2370) {
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 3) * 0x10 + 0x138);
        goto LAB_01a96c10;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_00d59724();
LAB_01a96c10:
  puVar5 = Method_System_Nullable<Vector3>__ctor__;
  puVar4 = UnityEngine_UI_InputField_TypeInfo;
  puVar3 = PTR_DAT_033f0a90;
  (*(code *)*puVar7)();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01b7a7b4(unaff_x19 + 0x12,0x9b83c86,0,0xffffffffffffffff,0);
  uVar13 = unaff_x19[0x12];
  uVar10 = unaff_x19[0x14];
  uVar8 = *(undefined8 *)puVar5;
  *(undefined8 *)(unaff_x29 + -0x88) = unaff_x19[0x13];
  *(undefined8 *)(unaff_x29 + -0x90) = uVar13;
  *(undefined8 *)(unaff_x29 + -0x80) = uVar10;
  FUN_01b7b3f4(unaff_x19 + 0x12,*(undefined8 *)((long)unaff_x21 + 8),unaff_x29 + -0x90,uVar8,0,0);
  uVar13 = unaff_x19[0x12];
  uVar10 = unaff_x19[0x14];
  uVar8 = *(undefined8 *)puVar3;
  *(undefined8 *)(unaff_x29 + -0x88) = unaff_x19[0x13];
  *(undefined8 *)(unaff_x29 + -0x90) = uVar13;
  *(undefined8 *)(unaff_x29 + -0x80) = uVar10;
  FUN_01b7b498(unaff_x19 + 0x12,unaff_x29 + -0x90,uVar8,(long)*(int *)((long)unaff_x21 + 4),0,0);
  uVar13 = unaff_x19[0x12];
  uVar10 = unaff_x19[0x14];
  uVar8 = *(undefined8 *)puVar4;
  *(undefined8 *)(unaff_x29 + -0x88) = unaff_x19[0x13];
  *(undefined8 *)(unaff_x29 + -0x90) = uVar13;
  *(undefined8 *)(unaff_x29 + -0x80) = uVar10;
  FUN_01b7b498(unaff_x19 + 0x12,unaff_x29 + -0x90,uVar8,(long)*(int *)((long)unaff_x21 + 0x10),0,0);
  uVar10 = unaff_x19[0x12];
  uVar8 = unaff_x19[0x14];
  *(undefined8 *)(unaff_x29 + -0x58) = unaff_x19[0x13];
  *(undefined8 *)(unaff_x29 + -0x60) = uVar10;
  *(undefined8 *)(unaff_x29 + -0x50) = uVar8;
  iVar1 = *(int *)((long)unaff_x21 + 0x18);
  if (iVar1 == 1) {
    lVar9 = (long)*(int *)((long)unaff_x21 + 0x28);
    puVar7 = (undefined8 *)PTR_DAT_033f6068;
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 2) {
        alStack_10[0] = 0;
        lVar9 = *(long *)((long)unaff_x21 + 0x30);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        alStack_10[0] = (long)*(int *)(lVar9 + 0x20);
        FUN_01b7b5e0(unaff_x19 + 0x12,unaff_x29 + -0x60,*(undefined8 *)StringLiteral_11626,
                     alStack_10,*(undefined4 *)((long)unaff_x21 + 0x38),0,0);
      }
      goto LAB_01a96d98;
    }
    lVar9 = 1;
    puVar7 = (undefined8 *)PTR_DAT_033efad8;
  }
  FUN_01b7b498(unaff_x19 + 0x12,unaff_x29 + -0x60,*puVar7,lVar9,0,0);
LAB_01a96d98:
  puVar3 = 
  Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>__ctor__
  ;
  puVar2 = PTR_DAT_033f02a8;
  memcpy(unaff_x19 + 0x12,unaff_x21,0x50);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  memcpy(unaff_x19 + 8,unaff_x19 + 0x12,0x50);
  uVar6 = FUN_01b2bb48(unaff_x19 + 8,unaff_x29 + -0x68,0);
  uVar13 = *(undefined8 *)(unaff_x29 + -0x58);
  uVar10 = *(undefined8 *)(unaff_x29 + -0x60);
  lVar9 = *(long *)puVar3;
  uVar8 = *(undefined8 *)(unaff_x29 + -0x68);
  unaff_x19[6] = *(undefined8 *)(unaff_x29 + -0x50);
  unaff_x19[5] = uVar13;
  unaff_x19[4] = uVar10;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar9);
  }
  unaff_x19[1] = unaff_x19[5];
  *unaff_x19 = unaff_x19[4];
  unaff_x19[2] = unaff_x19[6];
  FUN_01a94354(unaff_x19,uVar8,uVar6);
  uVar11 = FUN_01b139c4(uVar6,0);
  puVar3 = StringLiteral_4331;
  puVar2 = Method_System_Collections_Generic_List_Enumerator<ConstantBufferBase>_Dispose__;
  if ((uVar11 & 1) == 0) {
    *(undefined4 *)(unaff_x19 + 0x12) = uVar6;
    uVar8 = FUN_0112cbf8(unaff_x19 + 0x12,*(undefined8 *)puVar2);
  }
  else {
    auVar14 = FUN_0112cb00(*(undefined8 *)(unaff_x29 + -0x68),
                           *(undefined8 *)
                            Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_get_Current__
                          );
    lVar9 = *(long *)puVar3;
    *(undefined1 (*) [16])(unaff_x29 + -0x78) = auVar14;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_010a0410(unaff_x29 + -0x78);
    uVar8 = *(undefined8 *)(unaff_x29 + -0x78);
  }
  return uVar8;
}


