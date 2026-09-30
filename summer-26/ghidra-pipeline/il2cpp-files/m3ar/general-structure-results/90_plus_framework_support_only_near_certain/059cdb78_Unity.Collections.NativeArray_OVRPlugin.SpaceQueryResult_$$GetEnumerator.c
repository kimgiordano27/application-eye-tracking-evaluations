/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 059cdb78
PROGRAM: m3ar-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetEnumerator(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w22;
  
  uVar1 = FUN_0406aaec();
  uVar1 = FUN_040316d0(uVar1,unaff_w22);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0406aaec(lVar3);
  }
  lVar4 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
                    /* try { // try from 059cdbc4 to 05acdbc7 has its CatchHandler @ 059cdbe8 */
                    /* try { // try from 059cdbc8 to 05acdbcb has its CatchHandler @ 059cdbe4 */
                    /* try { // try from 059cdbcc to 05acdbd3 has its CatchHandler @ 059cdbf0 */
      if (*(long *)(piVar6 + -2) == lVar3) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
        goto FUN_059cdc48;
      }
      uVar5 = uVar5 - 1;
                    /* try { // try from 059cdbd4 to 05acdc13 has its CatchHandler @ 059cd8ec */
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
                    /* catch(type#1 @ 08931438) { ... } // from try @ 059cdaf0 with catch @ 059cdbe0
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 059cdbc8 with catch @ 059cdbe4
                        */
  puVar2 = (undefined8 *)FUN_0406ae20();
FUN_059cdc48:
  (*(code *)*puVar2)();
  *(undefined4 *)(unaff_x19 + 0x18) = unaff_w22;
  return;
}


