/*
FUNCTION_NAME: UnityEngine.Timeline.TrackAsset$$CreateAndAddNewClipOfType
ENTRY_POINT: 05b60420
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_Timeline_TrackAsset__CreateAndAddNewClipOfType(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  FUN_02d6084c();
  *(undefined1 *)(unaff_x21 + 0xc24) = 1;
  puVar4 = Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__;
  if (unaff_x20 != 0) {
    lVar7 = *(long *)(unaff_x20 + 0x60);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (lVar7 != 0) {
      thunk_FUN_06038bc0(*(undefined4 *)(unaff_x20 + 0x6c),lVar7,
                         *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc),0);
      puVar3 = UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_Cinfo_TypeInfo;
      if (*(long *)(unaff_x20 + 0x60) != 0) {
        thunk_FUN_06038bc0(*(undefined4 *)(unaff_x20 + 0x70),*(long *)(unaff_x20 + 0x60),
                           *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10),0);
        uVar6 = *(undefined8 *)(unaff_x20 + 0x58);
        lVar7 = *(long *)(unaff_x20 + 0x60);
        uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
        uVar9 = **(undefined4 **)(*(long *)puVar4 + 0xb8);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar6 = FUN_05a87fc4(uVar8,uVar6,0);
        if (lVar7 != 0) {
          thunk_FUN_06038ef0(lVar7,uVar9,uVar6,0);
          lVar7 = *(long *)(unaff_x20 + 0x60);
          uVar9 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 4);
          uVar6 = FUN_05a87fc4(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),0
                              );
          if (lVar7 != 0) {
            thunk_FUN_06038ef0(lVar7,uVar9,uVar6,0);
            lVar7 = *(long *)(unaff_x20 + 0x60);
            uVar9 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x14);
            uVar6 = FUN_05a87fc4(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38)
                                 ,0);
            puVar5 = 
            Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
            ;
            puVar2 = PTR_DAT_06767d28;
            if (lVar7 != 0) {
              thunk_FUN_06038ef0(lVar7,uVar9,uVar6,0);
              lVar7 = *(long *)puVar5;
              uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar7 = *(long *)puVar5;
              }
              puVar5 = Method_System_Collections_Generic_List_Enumerator<MockTouch>_MoveNext__;
              cVar1 = *(char *)(unaff_x20 + 0x80);
              uVar8 = **(undefined8 **)(lVar7 + 0xb8);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_05a5e770(uVar6,uVar8,cVar1 != '\0',0);
              FUN_05a5e770(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)puVar5,
                           *(undefined1 *)(unaff_x20 + 0x81),0);
              if (*(long *)(unaff_x20 + 0x78) != 0) {
                lVar7 = *(long *)(unaff_x20 + 0x60);
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                if (lVar7 == 0) goto LAB_05b606b8;
                FUN_0603a150(lVar7,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8),
                             *(undefined8 *)(unaff_x20 + 0x78),0);
              }
              uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
              uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              puVar4 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__;
              FUN_05a882bc(uVar6,uVar8,0);
              if (DAT_06b72a50 == '\0') {
                FUN_02d6084c(PTR_DAT_06762360);
                DAT_06b72a50 = '\x01';
              }
              uVar9 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_06762360 + 0xb8) + 8);
              uVar10 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_06762360 + 0xb8) + 0xc);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              UnityEngine_Rendering_Universal_RenderTargetHandle__op_Inequality(uVar9,uVar10,0,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_05b606b8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


