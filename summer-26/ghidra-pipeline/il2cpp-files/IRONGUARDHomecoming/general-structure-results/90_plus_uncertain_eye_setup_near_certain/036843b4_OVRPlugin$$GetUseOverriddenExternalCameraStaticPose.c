/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 036843b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetUseOverriddenExternalCameraStaticPose(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long unaff_x19;
  byte unaff_w21;
  long *plVar9;
  undefined8 unaff_x24;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000028;
  
  plVar9 = *(long **)(unaff_x19 + 0x48);
  lVar2 = FUN_01f08890(**(undefined8 **)(param_1 + 0xe48),5);
  in_stack_00000010 = *(undefined4 *)(unaff_x19 + 100);
  uVar3 = thunk_FUN_01f113fc(*(undefined8 *)
                              Method_System_Threading_OSSpecificSynchronizationContext_<>c_<Get>b__3_0__
                             ,&stack0x00000010);
  uVar4 = thunk_FUN_01f113fc(*(undefined8 *)
                              Method_Unity_VisualScripting_NumericNegationHandler_<>c_<_ctor>b__0_9__
                             ,&stack0x0000000c);
  uVar3 = FUN_0340f2f0(*(undefined8 *)
                        Method_System_Linq_Enumerable_SelectMany<IGraphElement,_ISerializationDependency>__
                       ,uVar3,uVar4,0);
  if (lVar2 == 0) goto LAB_0368457c;
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x20),uVar3);
    if (1 < *(uint *)(lVar2 + 0x18)) {
      *(undefined8 *)(lVar2 + 0x28) = in_stack_00000028;
      thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x28));
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) =
             *(undefined8 *)Method_System_Security_Cryptography_CryptoStream_get_Position__;
        thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x30));
        if (3 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x38) = unaff_x24;
          thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x38));
          if (4 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x40) =
                 *(undefined8 *)Method_UnityEngine_Rendering_VolumeParameter<Color>_op_Inequality__;
            thunk_FUN_01f51358();
            uVar3 = FUN_0340efe8(lVar2,0);
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 0x558))(plVar9,uVar3,*(undefined8 *)(*plVar9 + 0x560));
              if (*(byte *)(unaff_x19 + 0x60) != (unaff_w21 & 1)) {
                bVar1 = (unaff_w21 & 1) == 0;
                if (bVar1) {
                  puVar5 = (undefined4 *)(unaff_x19 + 0x28);
                  puVar6 = (undefined4 *)(unaff_x19 + 0x2c);
                  puVar7 = (undefined4 *)(unaff_x19 + 0x30);
                  puVar8 = (undefined4 *)(unaff_x19 + 0x34);
                }
                else {
                  puVar5 = (undefined4 *)(unaff_x19 + 0x38);
                  puVar6 = (undefined4 *)(unaff_x19 + 0x3c);
                  puVar7 = (undefined4 *)(unaff_x19 + 0x40);
                  puVar8 = (undefined4 *)(unaff_x19 + 0x44);
                }
                if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_0368457c;
                FUN_0404e03c(*puVar5,*puVar6,*puVar7,*puVar8,*(long *)(unaff_x19 + 0x58),0);
                *(byte *)(unaff_x19 + 0x60) = !bVar1;
              }
              return;
            }
LAB_0368457c:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


