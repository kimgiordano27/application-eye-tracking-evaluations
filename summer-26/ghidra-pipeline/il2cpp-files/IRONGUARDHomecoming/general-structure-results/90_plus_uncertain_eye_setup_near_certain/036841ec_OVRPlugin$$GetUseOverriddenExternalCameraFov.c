/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraFov
ENTRY_POINT: 036841ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetUseOverriddenExternalCameraFov(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 *puVar10;
  long in_x9;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  long unaff_x19;
  undefined4 unaff_w20;
  long *plVar17;
  undefined8 uVar18;
  long *unaff_x26;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  ulong in_stack_00000018;
  undefined8 in_stack_00000028;
  
  piVar14 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar14 + -2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)(*piVar14 + 2) * 0x10 + 0x138);
      goto LAB_036842b8;
    }
    in_x9 = in_x9 + -1;
    piVar14 = piVar14 + 4;
  } while (in_x9 != 0);
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_036842b8:
  uVar6 = (*(code *)*puVar5)();
  lVar11 = *(long *)(unaff_x19 + 0x68);
  in_stack_00000018 = uVar6;
  if ((lVar11 != 0) && (plVar17 = *(long **)(unaff_x19 + 0x50), plVar17 != (long *)0x0)) {
    lVar9 = *plVar17;
    uVar2 = *(undefined4 *)(unaff_x19 + 100);
    uVar3 = *(undefined4 *)(lVar11 + 0x10);
    uVar18 = *(undefined8 *)(lVar11 + 0x18);
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_03684344;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar17,*unaff_x26,1);
    uVar6 = in_stack_00000018 & 0xff;
LAB_03684344:
    bVar4 = (*(code *)*puVar5)(plVar17,uVar2,unaff_w20,uVar3,uVar18,puVar5[1]);
    if ((uVar6 & 0xff) == 0) {
      uVar18 = *(undefined8 *)Method_System_Linq_Enumerable_Select<JsonParser_JsonValue,_string>__;
    }
    else {
      uStack0000000000000014 =
           FUN_033335a4(&stack0x00000018,
                        *(undefined8 *)Method_DefaultNamespace_UI_BaseUIPanel_<Hide>b__21_0__);
      uVar18 = FUN_0357d174((long)&stack0x00000010 + 4,
                            *(undefined8 *)
                             Method_UnityEngine_Rendering_VolumeParameter<Vector2>__ctor__,0);
    }
    plVar17 = *(long **)(unaff_x19 + 0x48);
    lVar11 = FUN_01f08890(*(undefined8 *)
                           Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                          ,5);
    uStack0000000000000010 = *(undefined4 *)(unaff_x19 + 100);
    uVar7 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_System_Threading_OSSpecificSynchronizationContext_<>c_<Get>b__3_0__
                               ,&stack0x00000010);
    uVar8 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_Unity_VisualScripting_NumericNegationHandler_<>c_<_ctor>b__0_9__
                               ,&stack0x0000000c);
    uVar7 = FUN_0340f2f0(*(undefined8 *)
                          Method_System_Linq_Enumerable_SelectMany<IGraphElement,_ISerializationDependency>__
                         ,uVar7,uVar8,0);
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x18) != 0) {
        *(undefined8 *)(lVar11 + 0x20) = uVar7;
        thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x20),uVar7);
        if (1 < *(uint *)(lVar11 + 0x18)) {
          *(undefined8 *)(lVar11 + 0x28) = in_stack_00000028;
          thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x28));
          if (2 < *(uint *)(lVar11 + 0x18)) {
            *(undefined8 *)(lVar11 + 0x30) =
                 *(undefined8 *)Method_System_Security_Cryptography_CryptoStream_get_Position__;
            thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x30));
            if (3 < *(uint *)(lVar11 + 0x18)) {
              *(undefined8 *)(lVar11 + 0x38) = uVar18;
              thunk_FUN_01f51358((undefined8 *)(lVar11 + 0x38),uVar18);
              if (4 < *(uint *)(lVar11 + 0x18)) {
                *(undefined8 *)(lVar11 + 0x40) =
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_VolumeParameter<Color>_op_Inequality__;
                thunk_FUN_01f51358();
                uVar18 = FUN_0340efe8(lVar11,0);
                if (plVar17 != (long *)0x0) {
                  (**(code **)(*plVar17 + 0x558))(plVar17,uVar18,*(undefined8 *)(*plVar17 + 0x560));
                  if (*(byte *)(unaff_x19 + 0x60) != (bVar4 & 1)) {
                    bVar1 = (bVar4 & 1) == 0;
                    if (bVar1) {
                      puVar10 = (undefined4 *)(unaff_x19 + 0x28);
                      puVar13 = (undefined4 *)(unaff_x19 + 0x2c);
                      puVar15 = (undefined4 *)(unaff_x19 + 0x30);
                      puVar16 = (undefined4 *)(unaff_x19 + 0x34);
                    }
                    else {
                      puVar10 = (undefined4 *)(unaff_x19 + 0x38);
                      puVar13 = (undefined4 *)(unaff_x19 + 0x3c);
                      puVar15 = (undefined4 *)(unaff_x19 + 0x40);
                      puVar16 = (undefined4 *)(unaff_x19 + 0x44);
                    }
                    if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_0368457c;
                    FUN_0404e03c(*puVar10,*puVar13,*puVar15,*puVar16,*(long *)(unaff_x19 + 0x58),0);
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


