/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 036d5868
PROGRAM: vrfs-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
          (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong in_x9;
  uint in_w10;
  long unaff_x19;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  
  while( true ) {
    if ((in_w10 < (uint)in_x9) || (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3))
    {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170(unaff_x25);
    }
    FUN_036d04e0();
    plVar3 = (long *)unaff_x25[0xd];
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    iVar2 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
    if (iVar2 == 2) {
      FUN_036d5a24();
    }
    else {
      (**(code **)(*unaff_x22 + 0x308))();
    }
    unaff_w24 = unaff_w24 + 1;
    iVar2 = FUN_03f054bc();
    puVar1 = PTR_DAT_06e0d4e8;
    if (iVar2 <= unaff_w24) break;
    unaff_x25 = (long *)(**(code **)(*unaff_x23 + 0x308))();
    if (unaff_x25 == (long *)0x0) {
      FUN_036d04e0();
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    param_1 = *unaff_x25;
    param_3 = *unaff_x26;
    in_w10 = (uint)*(byte *)(param_1 + 300);
    in_x9 = (ulong)*(byte *)(param_3 + 300);
  }
  uVar5 = *(undefined8 *)PTR_DAT_06e09688;
  if (*(int *)(*(long *)PTR_DAT_06dc26f0 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  FUN_031c8668(uVar5,0);
  uVar5 = (**(code **)(*unaff_x22 + 0x428))();
  uVar5 = thunk_FUN_015d0480(uVar5,*(undefined8 *)puVar1);
  puVar4 = (undefined8 *)(unaff_x19 + 0x60);
  *puVar4 = uVar5;
  thunk_FUN_01656ef8(puVar4,uVar5);
  return *puVar4;
}


