/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$GetHashCode
ENTRY_POINT: 036d7ddc
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetHashCode
                 (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if ((DAT_07239924 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06d98c30);
    thunk_FUN_0159f088(PTR_DAT_06e184b0);
    thunk_FUN_0159f088(PTR_DAT_06e5dc58);
    thunk_FUN_0159f088(PTR_DAT_06dd1a30);
    DAT_07239924 = 1;
  }
  plVar5 = (long *)FUN_036d4778(param_1,param_2,1);
  if (plVar5 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_06e184b0 + 300);
    if ((bVar2 <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_06e184b0)) {
      if ((plVar5 == (long *)0x0) ||
         (lVar6 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)),
         lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      iVar4 = FUN_03f054bc(lVar6,0);
      puVar3 = PTR_DAT_06d98c30;
      if (iVar4 == 0) {
        lVar6 = plVar5[10];
        lVar1 = plVar5[0xb];
        lVar7 = *(long *)PTR_DAT_06d98c30;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar7 = *(long *)puVar3;
        }
        puVar3 = PTR_DAT_06e5dc58;
        uVar8 = FUN_037103cc(lVar6,lVar1,**(undefined8 **)(lVar7 + 0xb8),
                             (*(undefined8 **)(lVar7 + 0xb8))[1],0);
        if ((uVar8 & 1) != 0) {
          FUN_01fbb444(param_1,*(undefined8 *)PTR_DAT_06dd1a30,plVar5,1,0);
        }
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar6 = *(long *)puVar3;
        }
        plVar5 = (long *)**(long **)(lVar6 + 0xb8);
      }
    }
  }
  return plVar5;
}


