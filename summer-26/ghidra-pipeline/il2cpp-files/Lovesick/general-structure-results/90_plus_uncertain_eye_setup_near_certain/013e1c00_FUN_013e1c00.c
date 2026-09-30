/*
FUNCTION_NAME: FUN_013e1c00
ENTRY_POINT: 013e1c00
PROGRAM: Lovesick-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_013e1c00(undefined8 param_1,long param_2,byte param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long local_50;
  uint *puStack_48;
  uint local_34;
  
  if ((DAT_0377683b & 1) == 0) {
    thunk_FUN_00d48444(ReverbTutorial_<ShowAmpsCoroutine>d__60_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__)
    ;
    DAT_0377683b = 1;
  }
  if (param_2 != 0) {
    local_34 = FUN_017e99dc(param_2,0);
    puStack_48 = &local_34;
    puVar7 = (undefined8 *)**(undefined8 **)(*(long *)(param_4 + 0x20) + 0xc0);
    local_34 = local_34 & 4;
    local_50 = 0;
    (*(code *)puVar7[2])(*puVar7,puVar7,param_1,&local_50,&local_34);
    lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    puVar1 = ReverbTutorial_<ShowAmpsCoroutine>d__60_TypeInfo;
    lVar3 = *(long *)(lVar3 + 0x80) + 0x20;
    FUN_00da4f60(lVar3,1);
    pbVar4 = (byte *)thunk_FUN_00d32ed4(param_1,lVar3);
    *pbVar4 = param_3 & 1;
    lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      lVar3 = FUN_00d5941c();
    }
    uVar8 = *(undefined8 *)(lVar3 + 0x80);
    FUN_00da4f60(uVar8,1);
    puVar5 = (undefined1 *)thunk_FUN_00d32ed4(param_1,uVar8);
    *puVar5 = 0;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_017e8fb0(0);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__;
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_017e8fb8(0,param_1,*(undefined8 *)puVar2,0,0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_03776305 == '\0') {
      thunk_FUN_00d48444(ReverbTutorial_<ShowAmpsCoroutine>d__60_TypeInfo);
      thunk_FUN_00d48444(
                        Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                        );
      DAT_03776305 = '\x01';
    }
    puVar2 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
    lVar3 = *(long *)Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar2;
    }
    if (*(char *)(*(long *)(lVar3 + 0xb8) + 0x10) != '\0') {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_017e9060(param_1,0);
    }
    uVar6 = FUN_017e7b04(param_2,0);
    if ((uVar6 & 1) == 0) {
      FUN_017ef90c(param_2,param_1,0);
    }
    else {
      puVar7 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x18);
      local_50 = param_2;
      (*(code *)puVar7[2])(*puVar7,puVar7,param_1,&local_50,param_2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


