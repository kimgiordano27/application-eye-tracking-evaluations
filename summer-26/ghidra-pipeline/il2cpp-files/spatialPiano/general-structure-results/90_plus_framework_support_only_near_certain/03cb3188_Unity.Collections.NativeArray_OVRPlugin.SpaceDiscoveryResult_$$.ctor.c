/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 03cb3188
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor(void)

{
  int iVar1;
  ulong uVar2;
  int in_w8;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong unaff_x22;
  
  uVar5 = unaff_x22 & 0xffffffff;
  while( true ) {
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      uVar4 = (uint)uVar5;
      if (in_w8 <= (int)unaff_x22) {
        Newtonsoft_Json_Linq_JObject__LoadAsync
                  (*(undefined8 *)(unaff_x19 + 0x10),uVar5,in_w8 - uVar4,0);
        iVar1 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar4;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar1 - uVar4;
      }
      unaff_x22 = (ulong)(int)unaff_x22;
      do {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto LAB_03cb325c;
        if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x22) goto LAB_03cb3260;
        if (unaff_x20 == 0) goto LAB_03cb325c;
        uVar2 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),
                           *(undefined8 *)(lVar3 + unaff_x22 * 8 + 0x20),
                           *(undefined8 *)(unaff_x20 + 0x28));
        in_w8 = *(int *)(unaff_x19 + 0x18);
      } while (((uVar2 & 1) != 0) && (unaff_x22 = unaff_x22 + 1, (long)unaff_x22 < (long)in_w8));
      uVar6 = (uint)unaff_x22;
    } while (in_w8 <= (int)uVar6);
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 == 0) break;
    if ((*(uint *)(lVar3 + 0x18) <= uVar6) || (*(uint *)(lVar3 + 0x18) <= uVar4)) {
LAB_03cb3260:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    *(undefined8 *)(lVar3 + 0x20 + (long)(int)uVar4 * 8) =
         *(undefined8 *)(lVar3 + 0x20 + (long)(int)uVar6 * 8);
    uVar5 = (ulong)(uVar4 + 1);
    in_w8 = *(int *)(unaff_x19 + 0x18);
  }
LAB_03cb325c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


