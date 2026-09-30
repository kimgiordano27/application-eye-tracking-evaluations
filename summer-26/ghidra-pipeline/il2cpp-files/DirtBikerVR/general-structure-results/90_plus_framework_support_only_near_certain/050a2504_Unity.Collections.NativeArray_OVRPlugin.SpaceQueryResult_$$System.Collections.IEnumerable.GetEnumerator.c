/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 050a2504
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  int in_w3;
  long in_x4;
  long in_x5;
  uint in_w8;
  uint uVar9;
  undefined8 in_x9;
  long in_x10;
  int in_w11;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  int unaff_w25;
  uint uVar10;
  uint unaff_w28;
  undefined8 uVar11;
  int iStack000000000000001c;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  
  uStack0000000000000020 = *(undefined8 *)(in_x10 + 0x28);
  iStack000000000000001c = in_w11;
  uStack0000000000000028 = in_x9;
  if ((int)unaff_w21 <= in_w11) {
    do {
      uVar10 = unaff_w21 * 2;
      uVar9 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
      if ((int)uVar10 < unaff_w25) {
        uVar6 = uVar10 + in_w3;
                    /* try { // try from 050a2548 to 051a2593 has its CatchHandler @ 050a2548
                       catch() { ... } // from try @ 050a2548 with catch @ 050a2548
                       catch() { ... } // from try @ 050a2678 with catch @ 050a2548
                       catch() { ... } // from try @ 050a26a8 with catch @ 050a2548
                       catch() { ... } // from try @ 050a271c with catch @ 050a2548 */
        if ((uVar9 <= uVar6 - 1) || (uVar9 <= uVar6)) goto LAB_050a2688;
        if (in_x4 == 0) goto LAB_050a268c;
        lVar1 = unaff_x19 + (long)(int)(uVar6 - 1) * 0x10;
        lVar2 = unaff_x19 + (long)(int)uVar6 * 0x10;
        uVar11 = *(undefined8 *)(lVar1 + 0x20);
        uVar4 = *(undefined8 *)(lVar1 + 0x28);
        uVar3 = *(undefined8 *)(lVar2 + 0x20);
        uVar5 = *(undefined8 *)(lVar2 + 0x28);
        if ((*(ushort *)(*(long *)(in_x5 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
        uVar6 = (**(code **)(in_x4 + 0x18))
                          (*(undefined8 *)(in_x4 + 0x40),uVar11,uVar4,uVar3,uVar5,
                           *(undefined8 *)(in_x4 + 0x28));
        uVar9 = (uint)*(undefined8 *)(unaff_x19 + 0x18);
        uVar10 = uVar10 | uVar6 >> 0x1f;
      }
      unaff_w28 = unaff_w20 + uVar10;
      if (uVar9 <= unaff_w28) goto LAB_050a2688;
      if (in_x4 == 0) {
LAB_050a268c:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar1 = unaff_x19 + (long)(int)unaff_w28 * 0x10;
      uVar11 = *(undefined8 *)(lVar1 + 0x20);
      uVar3 = *(undefined8 *)(lVar1 + 0x28);
      if ((*(ushort *)(*(long *)(in_x5 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      iVar7 = (**(code **)(in_x4 + 0x18))
                        (*(undefined8 *)(in_x4 + 0x40),uStack0000000000000028,uStack0000000000000020
                         ,uVar11,uVar3,*(undefined8 *)(in_x4 + 0x28));
      if (-1 < iVar7) {
        unaff_w28 = unaff_w20 + unaff_w21;
        break;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w28) ||
         (uVar9 = unaff_w20 + unaff_w21, *(uint *)(unaff_x19 + 0x18) <= uVar9)) goto LAB_050a2688;
      lVar2 = unaff_x19 + (long)(int)uVar9 * 0x10;
      uVar11 = *(undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar2 + 0x20) = uVar11;
      thunk_FUN_03afed3c(unaff_x19 + (long)(int)uVar9 * 0x10 + 0x28,0);
      unaff_w21 = uVar10;
    } while ((int)uVar10 <= iStack000000000000001c);
    in_w8 = *(uint *)(unaff_x19 + 0x18);
  }
  if (unaff_w28 < in_w8) {
    lVar1 = unaff_x19 + (long)(int)unaff_w28 * 0x10;
    puVar8 = (undefined8 *)(lVar1 + 0x28);
    *puVar8 = uStack0000000000000020;
    *(undefined8 *)(lVar1 + 0x20) = uStack0000000000000028;
    thunk_FUN_03afed3c(puVar8,0);
    return;
  }
LAB_050a2688:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


