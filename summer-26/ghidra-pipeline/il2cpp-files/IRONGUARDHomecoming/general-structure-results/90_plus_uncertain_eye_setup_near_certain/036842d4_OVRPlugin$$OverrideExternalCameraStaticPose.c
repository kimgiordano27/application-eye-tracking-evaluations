/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraStaticPose
ENTRY_POINT: 036842d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__OverrideExternalCameraStaticPose(char param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 *puVar9;
  long in_x9;
  ulong uVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  long unaff_x19;
  undefined4 unaff_w20;
  long *plVar15;
  undefined8 uVar16;
  long *unaff_x26;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  char in_stack_00000018;
  undefined8 in_stack_00000028;
  
  if ((in_x9 != 0) && (plVar15 = *(long **)(unaff_x19 + 0x50), plVar15 != (long *)0x0)) {
    lVar8 = *plVar15;
    uVar2 = *(undefined4 *)(unaff_x19 + 100);
    uVar3 = *(undefined4 *)(in_x9 + 0x10);
    uVar16 = *(undefined8 *)(in_x9 + 0x18);
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_03684344;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar15,*unaff_x26,1);
    param_1 = in_stack_00000018;
LAB_03684344:
    bVar4 = (*(code *)*puVar5)(plVar15,uVar2,unaff_w20,uVar3,uVar16,puVar5[1]);
    if (param_1 == '\0') {
      uVar16 = *(undefined8 *)Method_System_Linq_Enumerable_Select<JsonParser_JsonValue,_string>__;
    }
    else {
      uStack0000000000000014 =
           FUN_033335a4(&stack0x00000018,
                        *(undefined8 *)Method_DefaultNamespace_UI_BaseUIPanel_<Hide>b__21_0__);
      uVar16 = FUN_0357d174((long)&stack0x00000010 + 4,
                            *(undefined8 *)
                             Method_UnityEngine_Rendering_VolumeParameter<Vector2>__ctor__,0);
    }
    plVar15 = *(long **)(unaff_x19 + 0x48);
    lVar8 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                         ,5);
    uStack0000000000000010 = *(undefined4 *)(unaff_x19 + 100);
    uVar6 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_System_Threading_OSSpecificSynchronizationContext_<>c_<Get>b__3_0__
                               ,&stack0x00000010);
    uVar7 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_Unity_VisualScripting_NumericNegationHandler_<>c_<_ctor>b__0_9__
                               ,&stack0x0000000c);
    uVar6 = FUN_0340f2f0(*(undefined8 *)
                          Method_System_Linq_Enumerable_SelectMany<IGraphElement,_ISerializationDependency>__
                         ,uVar6,uVar7,0);
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x18) != 0) {
        *(undefined8 *)(lVar8 + 0x20) = uVar6;
        thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x20),uVar6);
        if (1 < *(uint *)(lVar8 + 0x18)) {
          *(undefined8 *)(lVar8 + 0x28) = in_stack_00000028;
          thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x28));
          if (2 < *(uint *)(lVar8 + 0x18)) {
            *(undefined8 *)(lVar8 + 0x30) =
                 *(undefined8 *)Method_System_Security_Cryptography_CryptoStream_get_Position__;
            thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x30));
            if (3 < *(uint *)(lVar8 + 0x18)) {
              *(undefined8 *)(lVar8 + 0x38) = uVar16;
              thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x38),uVar16);
              if (4 < *(uint *)(lVar8 + 0x18)) {
                *(undefined8 *)(lVar8 + 0x40) =
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_VolumeParameter<Color>_op_Inequality__;
                thunk_FUN_01f51358();
                uVar16 = FUN_0340efe8(lVar8,0);
                if (plVar15 != (long *)0x0) {
                  (**(code **)(*plVar15 + 0x558))(plVar15,uVar16,*(undefined8 *)(*plVar15 + 0x560));
                  if (*(byte *)(unaff_x19 + 0x60) != (bVar4 & 1)) {
                    bVar1 = (bVar4 & 1) == 0;
                    if (bVar1) {
                      puVar9 = (undefined4 *)(unaff_x19 + 0x28);
                      puVar11 = (undefined4 *)(unaff_x19 + 0x2c);
                      puVar13 = (undefined4 *)(unaff_x19 + 0x30);
                      puVar14 = (undefined4 *)(unaff_x19 + 0x34);
                    }
                    else {
                      puVar9 = (undefined4 *)(unaff_x19 + 0x38);
                      puVar11 = (undefined4 *)(unaff_x19 + 0x3c);
                      puVar13 = (undefined4 *)(unaff_x19 + 0x40);
                      puVar14 = (undefined4 *)(unaff_x19 + 0x44);
                    }
                    if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_0368457c;
                    FUN_0404e03c(*puVar9,*puVar11,*puVar13,*puVar14,*(long *)(unaff_x19 + 0x58),0);
                    *(byte *)(unaff_x19 + 0x60) = !bVar1;
                  }
                  return;
                }
                goto LAB_0368457c;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
  }
LAB_0368457c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


