/*
FUNCTION_NAME: OVRGazePointer$$LateUpdate
ENTRY_POINT: 01a96bcc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;functionality_gaze_interaction_hits_2
*/


undefined8 OVRGazePointer__LateUpdate(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long in_x9;
  int *piVar11;
  undefined8 *unaff_x19;
  void *unaff_x21;
  long *unaff_x23;
  long unaff_x29;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  long alStack_10 [2];
  
  if (in_x9 != 0) {
    piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == param_3) {
        puVar6 = (undefined8 *)(param_1 + (long)(*piVar11 + 3) * 0x10 + 0x138);
        goto LAB_01a96c10;
      }
      in_x9 = in_x9 + -1;
      piVar11 = piVar11 + 4;
    } while (in_x9 != 0);
  }
  puVar6 = (undefined8 *)FUN_00d59724();
LAB_01a96c10:
  puVar4 = Method_System_Nullable<Vector3>__ctor__;
  puVar3 = UnityEngine_UI_InputField_TypeInfo;
  puVar2 = PTR_DAT_033f0a90;
  (*(code *)*puVar6)();
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01b7a7b4(unaff_x19 + 0x12,0x9b83c86,0,0xffffffffffffffff,0);
  uVar12 = unaff_x19[0x12];
  uVar9 = unaff_x19[0x14];
  uVar8 = *(undefined8 *)puVar4;
  *(undefined8 *)(unaff_x29 + -0x88) = unaff_x19[0x13];
  *(undefined8 *)(unaff_x29 + -0x90) = uVar12;
  *(undefined8 *)(unaff_x29 + -0x80) = uVar9;
  FUN_01b7b3f4(unaff_x19 + 0x12,*(undefined8 *)((long)unaff_x21 + 8),unaff_x29 + -0x90,uVar8,0,0);
  uVar12 = unaff_x19[0x12];
  uVar9 = unaff_x19[0x14];
  uVar8 = *(undefined8 *)puVar2;
  *(undefined8 *)(unaff_x29 + -0x88) = unaff_x19[0x13];
  *(undefined8 *)(unaff_x29 + -0x90) = uVar12;
  *(undefined8 *)(unaff_x29 + -0x80) = uVar9;
  FUN_01b7b498(unaff_x19 + 0x12,unaff_x29 + -0x90,uVar8,(long)*(int *)((long)unaff_x21 + 4),0,0);
  uVar12 = unaff_x19[0x12];
  uVar9 = unaff_x19[0x14];
  uVar8 = *(undefined8 *)puVar3;
  *(undefined8 *)(unaff_x29 + -0x88) = unaff_x19[0x13];
  *(undefined8 *)(unaff_x29 + -0x90) = uVar12;
  *(undefined8 *)(unaff_x29 + -0x80) = uVar9;
  FUN_01b7b498(unaff_x19 + 0x12,unaff_x29 + -0x90,uVar8,(long)*(int *)((long)unaff_x21 + 0x10),0,0);
  uVar9 = unaff_x19[0x12];
  uVar8 = unaff_x19[0x14];
  *(undefined8 *)(unaff_x29 + -0x58) = unaff_x19[0x13];
  *(undefined8 *)(unaff_x29 + -0x60) = uVar9;
  *(undefined8 *)(unaff_x29 + -0x50) = uVar8;
  iVar1 = *(int *)((long)unaff_x21 + 0x18);
  if (iVar1 == 1) {
    lVar10 = (long)*(int *)((long)unaff_x21 + 0x28);
    puVar6 = (undefined8 *)PTR_DAT_033f6068;
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 2) {
        alStack_10[0] = 0;
        lVar10 = *(long *)((long)unaff_x21 + 0x30);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        alStack_10[0] = (long)*(int *)(lVar10 + 0x20);
        FUN_01b7b5e0(unaff_x19 + 0x12,unaff_x29 + -0x60,*(undefined8 *)StringLiteral_11626,
                     alStack_10,*(undefined4 *)((long)unaff_x21 + 0x38),0,0);
      }
      goto LAB_01a96d98;
    }
    lVar10 = 1;
    puVar6 = (undefined8 *)PTR_DAT_033efad8;
  }
  FUN_01b7b498(unaff_x19 + 0x12,unaff_x29 + -0x60,*puVar6,lVar10,0,0);
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
  uVar5 = FUN_01b2bb48(unaff_x19 + 8,unaff_x29 + -0x68,0);
  uVar12 = *(undefined8 *)(unaff_x29 + -0x58);
  uVar9 = *(undefined8 *)(unaff_x29 + -0x60);
  lVar10 = *(long *)puVar3;
  uVar8 = *(undefined8 *)(unaff_x29 + -0x68);
  unaff_x19[6] = *(undefined8 *)(unaff_x29 + -0x50);
  unaff_x19[5] = uVar12;
  unaff_x19[4] = uVar9;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar10);
  }
  unaff_x19[1] = unaff_x19[5];
  *unaff_x19 = unaff_x19[4];
  unaff_x19[2] = unaff_x19[6];
  FUN_01a94354(unaff_x19,uVar8,uVar5);
  uVar7 = FUN_01b139c4(uVar5,0);
  puVar3 = StringLiteral_4331;
  puVar2 = Method_System_Collections_Generic_List_Enumerator<ConstantBufferBase>_Dispose__;
  if ((uVar7 & 1) == 0) {
    *(undefined4 *)(unaff_x19 + 0x12) = uVar5;
    uVar8 = FUN_0112cbf8(unaff_x19 + 0x12,*(undefined8 *)puVar2);
  }
  else {
    auVar13 = FUN_0112cb00(*(undefined8 *)(unaff_x29 + -0x68),
                           *(undefined8 *)
                            Method_System_Collections_Generic_List_Enumerator<FocusController_FocusedElement>_get_Current__
                          );
    lVar10 = *(long *)puVar3;
    *(undefined1 (*) [16])(unaff_x29 + -0x78) = auVar13;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_010a0410(unaff_x29 + -0x78);
    uVar8 = *(undefined8 *)(unaff_x29 + -0x78);
  }
  return uVar8;
}


