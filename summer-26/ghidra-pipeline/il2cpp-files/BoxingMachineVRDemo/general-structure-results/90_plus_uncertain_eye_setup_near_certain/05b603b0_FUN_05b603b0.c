/*
FUNCTION_NAME: FUN_05b603b0
ENTRY_POINT: 05b603b0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_05b603b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if ((DAT_06b81c24 & 1) == 0) {
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__);
    FUN_02d6084c(PTR_DAT_06767d28);
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__);
    FUN_02d6084c(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
                );
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_Cinfo_TypeInfo);
    FUN_02d6084c(Method_System_Collections_Generic_List_Enumerator<MockTouch>_MoveNext__);
    DAT_06b81c24 = 1;
  }
  puVar5 = Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__;
  if (param_2 != 0) {
    lVar8 = *(long *)(param_2 + 0x60);
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Result>_get_Current__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (lVar8 != 0) {
      thunk_FUN_06038bc0(*(undefined4 *)(param_2 + 0x6c),lVar8,
                         *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc),0);
      puVar4 = UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_Cinfo_TypeInfo;
      if (*(long *)(param_2 + 0x60) != 0) {
        thunk_FUN_06038bc0(*(undefined4 *)(param_2 + 0x70),*(long *)(param_2 + 0x60),
                           *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10),0);
        uVar7 = *(undefined8 *)(param_2 + 0x58);
        lVar8 = *(long *)(param_2 + 0x60);
        uVar9 = *(undefined8 *)(param_2 + 0x50);
        uVar1 = **(undefined4 **)(*(long *)puVar5 + 0xb8);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar7 = FUN_05a87fc4(uVar9,uVar7,0);
        if (lVar8 != 0) {
          thunk_FUN_06038ef0(lVar8,uVar1,uVar7,0);
          lVar8 = *(long *)(param_2 + 0x60);
          uVar1 = *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 4);
          uVar7 = FUN_05a87fc4(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48),0);
          if (lVar8 != 0) {
            thunk_FUN_06038ef0(lVar8,uVar1,uVar7,0);
            lVar8 = *(long *)(param_2 + 0x60);
            uVar1 = *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x14);
            uVar7 = FUN_05a87fc4(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),0);
            puVar6 = 
            Method_System_Collections_Generic_HashSet_Enumerator<OVRPlugin_SpaceComponentType>_Dispose__
            ;
            puVar3 = PTR_DAT_06767d28;
            if (lVar8 != 0) {
              thunk_FUN_06038ef0(lVar8,uVar1,uVar7,0);
              lVar8 = *(long *)puVar6;
              uVar7 = *(undefined8 *)(param_2 + 0x60);
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
                lVar8 = *(long *)puVar6;
              }
              puVar6 = Method_System_Collections_Generic_List_Enumerator<MockTouch>_MoveNext__;
              cVar2 = *(char *)(param_2 + 0x80);
              uVar9 = **(undefined8 **)(lVar8 + 0xb8);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              FUN_05a5e770(uVar7,uVar9,cVar2 != '\0',0);
              FUN_05a5e770(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)puVar6,
                           *(undefined1 *)(param_2 + 0x81),0);
              if (*(long *)(param_2 + 0x78) != 0) {
                lVar8 = *(long *)(param_2 + 0x60);
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                if (lVar8 == 0) goto LAB_05b606b8;
                FUN_0603a150(lVar8,*(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8),
                             *(undefined8 *)(param_2 + 0x78),0);
              }
              uVar7 = *(undefined8 *)(param_2 + 0x20);
              uVar9 = *(undefined8 *)(param_2 + 0x28);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              puVar5 = Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__;
              uVar7 = FUN_05a882bc(uVar7,uVar9,0);
              if (DAT_06b72a50 == '\0') {
                FUN_02d6084c(PTR_DAT_06762360);
                DAT_06b72a50 = '\x01';
              }
              uVar9 = *(undefined8 *)(param_2 + 0x60);
              uVar1 = *(undefined4 *)(param_2 + 0x68);
              uVar10 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_06762360 + 0xb8) + 8);
              uVar11 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_06762360 + 0xb8) + 0xc);
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              UnityEngine_Rendering_Universal_RenderTargetHandle__op_Inequality
                        (uVar10,uVar11,0,0,param_4,uVar7,uVar9,uVar1,0);
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


