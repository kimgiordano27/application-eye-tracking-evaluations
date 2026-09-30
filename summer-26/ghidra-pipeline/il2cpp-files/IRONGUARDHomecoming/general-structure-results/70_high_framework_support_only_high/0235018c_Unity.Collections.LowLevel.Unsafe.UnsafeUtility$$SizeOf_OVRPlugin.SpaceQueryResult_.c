/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$SizeOf<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0235018c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<OVRPlugin_SpaceQueryResult>
               (long param_1)

{
  bool in_ZR;
  bool in_CY;
  long lVar1;
  ulong *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x19;
  int unaff_w22;
  long *plVar5;
  undefined8 uVar6;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  if (!in_CY || in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  plVar5 = *(long **)(param_1 + (long)unaff_w22 * 8 + 0x20);
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x38);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
  }
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(lVar1 + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) == lVar1)) {
      puVar2 = (ulong *)FUN_02f285f4(plVar5,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x40));
      uStack0000000000000024 = (undefined4)(*puVar2 >> 0x20);
      uStack0000000000000028 = (undefined4)puVar2[1];
      uStack000000000000002c = (undefined4)(puVar2[1] >> 0x20);
      FUN_0234ebf8(*puVar2 & 0xffffffff,uStack0000000000000024,uStack0000000000000028,
                   uStack000000000000002c);
      return;
    }
  }
  uVar3 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                            );
  uVar3 = FUN_01f08890(uVar3,5);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  FUN_01bc4c70();
  uVar6 = FUN_03579868(uVar6,0);
  uVar6 = FUN_03b53780(uVar6,0);
  FUN_01bc50c0(uVar3);
  FUN_01bc56ec(uVar3,uVar6);
  FUN_01bc5408(uVar3,0,uVar6);
  FUN_01bc50c0(plVar5);
  uVar6 = FUN_03b5cc20(plVar5,0);
  FUN_01bc50c0(uVar3);
  FUN_01bc56ec(uVar3,uVar6);
  FUN_01bc5408(uVar3,1,uVar6);
  uVar6 = FUN_03b3978c();
  FUN_01bc50c0(uVar3);
  FUN_01bc56ec(uVar3,uVar6);
  FUN_01bc5408(uVar3,2,uVar6);
  FUN_01bc50c0(plVar5);
  plVar4 = (long *)thunk_FUN_01ecaf38(plVar5,0);
  FUN_01bc50c0();
  uVar6 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
  FUN_01bc50c0(uVar3);
  FUN_01bc56ec(uVar3,uVar6);
  FUN_01bc5408(uVar3,3,uVar6);
  FUN_01bc50c0(plVar5);
  uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
  uVar6 = FUN_03b53780(uVar6,0);
  FUN_01bc50c0(uVar3);
  FUN_01bc56ec(uVar3,uVar6);
  FUN_01bc5408(uVar3,4,uVar6);
  uVar6 = thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_get_cameraTargets__);
  uVar3 = FUN_0340f378(uVar6,uVar3,0);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
  FUN_0356adc8(uVar6,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6);
}


