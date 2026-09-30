/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_HTTP_GetToFile_Native
ENTRY_POINT: 035e69c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x035e6d98) */
/* WARNING: Removing unreachable block (ram,0x035e6de8) */
/* WARNING: Removing unreachable block (ram,0x035e6ed0) */

void Oculus_Platform_CAPI__ovr_HTTP_GetToFile_Native(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *in_x10;
  int *piVar10;
  long unaff_x19;
  long *unaff_x23;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035e69b8 with catch @ 035e69c4
                        */
  while (!(bool)in_ZR) {
                    /* catch() { ... } // from try @ 035e69d4 with catch @ 035e69c8
                       catch() { ... } // from try @ 035e6a0c with catch @ 035e69c8
                       catch() { ... } // from try @ 035e6a40 with catch @ 035e69c8 */
    in_x9 = in_x9 + -1;
                    /* try { // try from 035e69cc to 036e69d3 has its CatchHandler @ 035e69dc */
    if (in_x9 == 0) {
                    /* try { // try from 035e69d4 to 036e69f3 has its CatchHandler @ 035e69c8 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 035e69cc with catch @ 035e69dc
                        */
      puVar3 = (undefined8 *)FUN_01ecb238();
      goto LAB_035e6c24;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_035e6c24:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = 
  Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_<ExecutePass>b__15_0__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_035e6c9c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_035e6c9c:
    uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_035e6d8c;
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_035e6d64;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_035e6cf8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_035e6cf8:
    lVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if (lVar8 == 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar5 = thunk_FUN_01f117cc();
      uVar6 = thunk_FUN_01efb3a4(
                                Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_23__
                                );
      uVar7 = thunk_FUN_01efb3a4(
                                Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_24__
                                );
      FUN_034efd98(uVar5,uVar6,uVar7,0);
      uVar6 = thunk_FUN_01efb3a4(
                                Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_25__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar5,uVar6);
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0329d8fc();
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_035e6d80;
    }
  }
LAB_035e6d64:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_035e6d80:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_035e6d8c:
  if (unaff_x19 != 0) {
    uVar5 = FUN_0329e490();
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*unaff_x23);
    }
    FUN_035e7260(uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


