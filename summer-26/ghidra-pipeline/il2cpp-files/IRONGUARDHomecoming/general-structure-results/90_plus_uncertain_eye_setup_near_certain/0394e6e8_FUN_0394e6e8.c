/*
FUNCTION_NAME: FUN_0394e6e8
ENTRY_POINT: 0394e6e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_0394e6e8(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  
  if ((DAT_0483839a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__);
    thunk_FUN_01efb3a4(
                      Method_Meta_WitAi_ComponentExtensions_HasCustomAttributes<ObsoleteAttribute>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
    DAT_0483839a = 1;
  }
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0) == 0)
    {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_03947618(uVar9,uVar1,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0394e7ec;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__,
                          0);
LAB_0394e7ec:
    uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    *(undefined8 *)(param_1 + 0x50) = uVar9;
    thunk_FUN_01f51358();
  }
  plVar4 = *(long **)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  puVar3 = Method_Meta_WitAi_ComponentExtensions_HasCustomAttributes<ObsoleteAttribute>__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  do {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0394e878;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_0394e878:
    uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar7 & 1) == 0) {
      FUN_0394ea0c();
      *(undefined8 *)(param_1 + 0x50) = 0;
      thunk_FUN_01f51358((undefined8 *)(param_1 + 0x50),0);
      return 0;
    }
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0394e8e4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar3,0);
LAB_0394e8e4:
    plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar9 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
    uVar7 = FUN_0340e600(uVar9,*(undefined8 *)(param_1 + 0x40),0);
    if ((uVar7 & 1) == 0) {
      *(long *)(param_1 + 0x18) = (long)plVar4;
      thunk_FUN_01f51358((long *)(param_1 + 0x18),plVar4);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    plVar4 = *(long **)(param_1 + 0x50);
  } while( true );
}


