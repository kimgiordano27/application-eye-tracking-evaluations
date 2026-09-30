/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraFov
ENTRY_POINT: 03684100
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__OverrideExternalCameraFov(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  long unaff_x19;
  long unaff_x20;
  undefined1 uVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 uStack0000000000000014;
  ulong in_stack_00000018;
  undefined8 in_stack_00000028;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xac8));
  thunk_FUN_01efb3a4(
                    Method_System_Linq_Enumerable_SelectMany<IGraphElement,_ISerializationDependency>__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<Color>_op_Inequality__);
  thunk_FUN_01efb3a4(Method_System_Security_Cryptography_CryptoStream_get_Position__);
  *(undefined1 *)(unaff_x20 + 0xe70) = 1;
  puVar4 = Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_47__;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  uStack0000000000000014 = 0;
  if (*(char *)(unaff_x19 + 0x70) == '\0') {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x68) == 0) ||
     (plVar19 = *(long **)(unaff_x19 + 0x50), plVar19 == (long *)0x0)) goto LAB_0368457c;
  lVar9 = *plVar19;
  uVar1 = *(undefined4 *)(*(long *)(unaff_x19 + 0x68) + 0x14);
  uVar2 = *(undefined4 *)(unaff_x19 + 100);
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar12 != 0) {
    piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) ==
          *(long *)Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_47__) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_036841b4;
      }
      uVar12 = uVar12 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar19,*(long *)
                                 Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_47__
                        ,0);
LAB_036841b4:
  uVar12 = (*(code *)*puVar6)(plVar19,uVar2,uVar1,&stack0x00000028,puVar6[1]);
  if ((uVar12 & 1) == 0) {
    plVar19 = *(long **)(unaff_x19 + 0x48);
    in_stack_00000010 = *(undefined4 *)(unaff_x19 + 100);
    uVar20 = thunk_FUN_01f113fc(*(undefined8 *)
                                 Method_System_Threading_OSSpecificSynchronizationContext_<>c_<Get>b__3_0__
                                ,&stack0x00000010);
    in_stack_00000008._4_4_ = uVar1;
    uVar7 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_Unity_VisualScripting_NumericNegationHandler_<>c_<_ctor>b__0_9__
                               ,(long)&stack0x00000008 + 4);
    uVar20 = FUN_0340f2f0(*(undefined8 *)
                           Method_Oculus_Interaction_Input_OVRCameraRigRef_<>c_<_ctor>b__30_0__,
                          uVar20,uVar7,0);
    if (plVar19 == (long *)0x0) goto LAB_0368457c;
    (**(code **)(*plVar19 + 0x558))(plVar19,uVar20,*(undefined8 *)(*plVar19 + 0x560));
    if (*(char *)(unaff_x19 + 0x60) == '\0') {
      return;
    }
    lVar9 = *(long *)(unaff_x19 + 0x58);
LAB_0368452c:
    uVar18 = 0;
    puVar11 = (undefined4 *)(unaff_x19 + 0x28);
    puVar14 = (undefined4 *)(unaff_x19 + 0x2c);
    puVar16 = (undefined4 *)(unaff_x19 + 0x30);
    puVar17 = (undefined4 *)(unaff_x19 + 0x34);
  }
  else {
    plVar19 = *(long **)(unaff_x19 + 0x50);
    if (plVar19 == (long *)0x0) goto LAB_0368457c;
    lVar10 = *plVar19;
    uVar2 = *(undefined4 *)(unaff_x19 + 100);
    lVar9 = *(long *)puVar4;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_036842b8;
        }
        uVar12 = uVar12 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar19,lVar9,2);
LAB_036842b8:
    uVar12 = (*(code *)*puVar6)(plVar19,uVar2,uVar1,puVar6[1]);
    lVar9 = *(long *)(unaff_x19 + 0x68);
    in_stack_00000018 = uVar12;
    if ((lVar9 == 0) || (plVar19 = *(long **)(unaff_x19 + 0x50), plVar19 == (long *)0x0))
    goto LAB_0368457c;
    lVar10 = *plVar19;
    uVar2 = *(undefined4 *)(unaff_x19 + 100);
    uVar3 = *(undefined4 *)(lVar9 + 0x10);
    uVar20 = *(undefined8 *)(lVar9 + 0x18);
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    lVar9 = *(long *)puVar4;
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_03684344;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar19,lVar9,1);
    uVar12 = in_stack_00000018 & 0xff;
LAB_03684344:
    bVar5 = (*(code *)*puVar6)(plVar19,uVar2,uVar1,uVar3,uVar20,puVar6[1]);
    if ((uVar12 & 0xff) == 0) {
      uVar20 = *(undefined8 *)Method_System_Linq_Enumerable_Select<JsonParser_JsonValue,_string>__;
    }
    else {
      uStack0000000000000014 =
           FUN_033335a4(&stack0x00000018,
                        *(undefined8 *)Method_DefaultNamespace_UI_BaseUIPanel_<Hide>b__21_0__);
      uVar20 = FUN_0357d174(&stack0x00000014,
                            *(undefined8 *)
                             Method_UnityEngine_Rendering_VolumeParameter<Vector2>__ctor__,0);
    }
    plVar19 = *(long **)(unaff_x19 + 0x48);
    lVar9 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                         ,5);
    in_stack_00000010 = *(undefined4 *)(unaff_x19 + 100);
    uVar7 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_System_Threading_OSSpecificSynchronizationContext_<>c_<Get>b__3_0__
                               ,&stack0x00000010);
    in_stack_00000008._4_4_ = uVar1;
    uVar8 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_Unity_VisualScripting_NumericNegationHandler_<>c_<_ctor>b__0_9__
                               ,(long)&stack0x00000008 + 4);
    uVar7 = FUN_0340f2f0(*(undefined8 *)
                          Method_System_Linq_Enumerable_SelectMany<IGraphElement,_ISerializationDependency>__
                         ,uVar7,uVar8,0);
    if (lVar9 == 0) goto LAB_0368457c;
    if (*(int *)(lVar9 + 0x18) == 0) {
LAB_03684580:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar9 + 0x20) = uVar7;
    thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x20),uVar7);
    if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_03684580;
    *(undefined8 *)(lVar9 + 0x28) = in_stack_00000028;
    thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x28));
    if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_03684580;
    *(undefined8 *)(lVar9 + 0x30) =
         *(undefined8 *)Method_System_Security_Cryptography_CryptoStream_get_Position__;
    thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x30));
    if (*(uint *)(lVar9 + 0x18) < 4) goto LAB_03684580;
    *(undefined8 *)(lVar9 + 0x38) = uVar20;
    thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x38),uVar20);
    if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_03684580;
    *(undefined8 *)(lVar9 + 0x40) =
         *(undefined8 *)Method_UnityEngine_Rendering_VolumeParameter<Color>_op_Inequality__;
    thunk_FUN_01f51358();
    uVar20 = FUN_0340efe8(lVar9,0);
    if (plVar19 == (long *)0x0) goto LAB_0368457c;
    (**(code **)(*plVar19 + 0x558))(plVar19,uVar20,*(undefined8 *)(*plVar19 + 0x560));
    if (*(byte *)(unaff_x19 + 0x60) == (bVar5 & 1)) {
      return;
    }
    lVar9 = *(long *)(unaff_x19 + 0x58);
    if ((bVar5 & 1) == 0) goto LAB_0368452c;
    puVar11 = (undefined4 *)(unaff_x19 + 0x38);
    puVar14 = (undefined4 *)(unaff_x19 + 0x3c);
    puVar16 = (undefined4 *)(unaff_x19 + 0x40);
    puVar17 = (undefined4 *)(unaff_x19 + 0x44);
    uVar18 = 1;
  }
  if (lVar9 != 0) {
    FUN_0404e03c(*puVar11,*puVar14,*puVar16,*puVar17,lVar9,0);
    *(undefined1 *)(unaff_x19 + 0x60) = uVar18;
    return;
  }
LAB_0368457c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


