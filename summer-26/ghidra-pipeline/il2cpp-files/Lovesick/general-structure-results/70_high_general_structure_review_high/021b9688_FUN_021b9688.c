/*
FUNCTION_NAME: FUN_021b9688
ENTRY_POINT: 021b9688
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


void FUN_021b9688(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  
                    /* try { // try from 021b9694 to 022b9697 has its CatchHandler @ 021b96c4 */
                    /* try { // try from 021b9698 to 022b96c7 has its CatchHandler @ 021b964c */
  if ((DAT_0378160e & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Array_Empty<Vector3>__);
    thunk_FUN_00d48444(DG_Tweening_ShortcutExtensions_<>c__DisplayClass37_0_TypeInfo);
                    /* catch() { ... } // from try @ 021b9694 with catch @ 021b96c4 */
                    /* try { // try from 021b96c8 to 022b96d3 has its CatchHandler @ 021b96e8 */
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<VoiceServiceRequest>_Remove__);
                    /* try { // try from 021b96d4 to 022b96df has its CatchHandler @ 021b964c */
    thunk_FUN_00d48444(StringLiteral_2558);
                    /* try { // try from 021b96e0 to 022b96e7 has its CatchHandler @ 021b96e8 */
    thunk_FUN_00d48444(StringLiteral_1284);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 021b96c8 with catch @ 021b96e8
                       catch(type#2 @ 00000000) { ... } // from try @ 021b96e0 with catch @ 021b96e8
                        */
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Guid,_OVRSpatialAnchor>_TryGetValue__
                      );
    DAT_0378160e = 1;
  }
  puVar4 = StringLiteral_2558;
  puVar3 = Method_System_Array_Empty<Vector3>__;
  if (*(long *)(param_1 + 0x170) == 0) goto LAB_021b98e8;
  plVar9 = *(long **)(*(long *)(param_1 + 0x170) + 0x80);
  if (plVar9 == (long *)0x0) {
LAB_021b979c:
    lVar8 = *(long *)StringLiteral_2558;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar8 = *(long *)puVar4;
    }
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 8);
  }
  else {
    lVar8 = *plVar9;
    bVar1 = *(byte *)(lVar8 + 300);
    bVar2 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_HashSet<VoiceServiceRequest>_Remove__ + 300
                     );
    if ((bVar2 <= bVar1) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)Method_System_Collections_Generic_HashSet<VoiceServiceRequest>_Remove__)) {
      uVar5 = FUN_021b98ec(plVar9);
      *(undefined4 *)(param_1 + 0x188) = uVar5;
      if (plVar9[0x31] != 0) {
        uVar5 = thunk_FUN_02144284(plVar9[0x31],0);
        *(undefined4 *)(param_1 + 0x148) = uVar5;
        if (plVar9[0x3b] != 0) {
          pfVar6 = (float *)FUN_012f9a10(plVar9[0x3b],*(undefined8 *)puVar3);
          fVar10 = DAT_028aa15c;
          *(float *)(param_1 + 0x154) = (*pfVar6 + 1.0) * DAT_028aa15c * 0.5;
          if (plVar9[0x3b] != 0) {
            lVar8 = FUN_012f9a10(plVar9[0x3b],*(undefined8 *)puVar3);
            *(float *)(param_1 + 0x150) = (*(float *)(lVar8 + 4) + 1.0) * fVar10 * 0.5;
            if (plVar9[0x3c] != 0) {
              pfVar6 = (float *)FUN_012f9a10(plVar9[0x3c],
                                             *(undefined8 *)
                                              DG_Tweening_ShortcutExtensions_<>c__DisplayClass37_0_TypeInfo
                                            );
              fVar10 = *pfVar6 * fVar10;
              *(float *)(param_1 + 0x158) = fVar10 + fVar10;
              return;
            }
          }
        }
      }
      goto LAB_021b98e8;
    }
    bVar2 = *(byte *)(*(long *)StringLiteral_1284 + 300);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)StringLiteral_1284)) {
      bVar2 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_Dictionary<Guid,_OVRSpatialAnchor>_TryGetValue__
                       + 300);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)
           Method_System_Collections_Generic_Dictionary<Guid,_OVRSpatialAnchor>_TryGetValue__))
      goto LAB_021b979c;
      uVar5 = FUN_021b9b48(plVar9[0x34]);
      *(undefined4 *)(param_1 + 0x188) = uVar5;
      if (plVar9[0x31] == 0) goto LAB_021b98e8;
      uVar5 = thunk_FUN_02144284(plVar9[0x31],0);
                    /* try { // try from 021b98c4 to 022b9903 has its CatchHandler @ 021b98c4
                       catch() { ... } // from try @ 021b98c4 with catch @ 021b98c4
                       catch() { ... } // from try @ 021b9910 with catch @ 021b98c4
                       catch() { ... } // from try @ 021b99d0 with catch @ 021b98c4
                       catch() { ... } // from try @ 021b9a00 with catch @ 021b98c4
                       catch() { ... } // from try @ 021b9a44 with catch @ 021b98c4 */
      *(undefined4 *)(param_1 + 0x148) = uVar5;
      lVar8 = plVar9[0x30];
    }
    else {
      uVar5 = FUN_021b9b48(plVar9);
      *(undefined4 *)(param_1 + 0x188) = uVar5;
      if (plVar9[0x33] == 0) goto LAB_021b98e8;
      uVar5 = thunk_FUN_02144284(plVar9[0x33],0);
      *(undefined4 *)(param_1 + 0x148) = uVar5;
      lVar8 = plVar9[0x34];
    }
    if (lVar8 == 0) {
LAB_021b98e8:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    puVar7 = (undefined8 *)FUN_012f9a10(lVar8,*(undefined8 *)puVar3);
    *(undefined8 *)(param_1 + 0x15c) = *puVar7;
  }
  return;
}


